delegate void Notifier (string sender);

class Model {
    public event Notifier notifyViews;
    public void Change() { ... notifyViews("Model"); }
}

class View1 {
    public View1(Model m) {
        m.notifyViews += new Notifier(this.Update1);
    }

    void Update1(string sender) {
        Console.WriteLine(sender + " was changed during update");
    }
}

class View2 {
    public View2(Model m) {
        m.notifyViews += new Notifier(this.Update2);
    }

    void Update2(string sender) {
        Console.WriteLine(sender + " was changed");
    }
}

class Test {
    static void Main() {
        Model model = new Model();

        new View1(model);
        new View2(model);
        model.Change();
    }
}
