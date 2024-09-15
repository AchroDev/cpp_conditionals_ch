.PHONY: clean All

All:
	@echo "----------Building project:[ cpp_conditionals - Debug ]----------"
	@"$(MAKE)" -f  "cpp_conditionals.mk"
clean:
	@echo "----------Cleaning project:[ cpp_conditionals - Debug ]----------"
	@"$(MAKE)" -f  "cpp_conditionals.mk" clean
