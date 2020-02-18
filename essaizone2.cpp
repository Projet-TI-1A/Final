
		if (Dessin)
		{
			Position_Curseur(&x, &y, window);
			p1.set(x, y);
			
			
			if (zone(k,x,y,240,160,150, 72))
				{
				if (resul[x][y]!=1)
					{
					tab_point.append(p1);
					resul[x][y]=1;
					aire=aire+r*r;
					
				}
			else
				{
				tab_erreur.append(p1);
				}
			
			switch ( aire )   //en fonction de l'aire on fait telle action mais on teste pas les autres
				{
					case 95% aire totale:
					k+=1;
					break;
					case 80% aire totale :
					//mettre les carrés verts?
					break;
					default:
					//rien faire
				}
		}
