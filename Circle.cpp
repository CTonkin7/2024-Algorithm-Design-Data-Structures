class Ellipse {
    private:
        Point focusA;
        Point focusB;
        double majorAxes;
    public:
        double circumference();
        Point getFocusA();
        void setFoci(Point a, Point b);
};
class Circle {
    private:
        Point focus;
    public:
        double circumference();
        Point getFocus();
        void setFocus(Point focus);
};
int main(void) {
    Circle myCircle;
    Point a(3,0);
    myCircle.setFocus(a);
}