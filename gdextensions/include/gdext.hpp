#ifndef GDEXT_HPP
# define GDEXT_HPP

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot
{

class GDExt : public Sprite2D
{
	GDCLASS(GDExt, Sprite2D)

private:

protected:

	static void	_bind_methods();

public:

	GDExt();
	~GDExt();

	void	_process(double delta) override;

};
}

#endif	//	GDEXT_HPP