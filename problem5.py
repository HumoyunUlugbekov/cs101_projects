from abc import ABC, abstractmethod
class TextFormatter(ABC):
    @abstractmethod
    def format_text(self, text):
        pass
    def publish(self, text):
        return f'***\n{self.format_text(text)}\n ***'
class LoudFormatter(TextFormatter):
    def format_text(self, text):
        return text.upper()
class MarkdownFormatter(TextFormatter):
    def format_text(self, text):
        print(f'***{text}***')
def generate_output(formatter, text):
    print(formatter.publish(text))





loud = LoudFormatter()
md = MarkdownFormatter()

generate_output(loud, "Warning")
generate_output(md, "Bold statement")

