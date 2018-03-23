
mod sys {

extern {
    pub fn say_something();
}

}

pub fn say_something() {
    unsafe {
        sys::say_something()
    }
}
