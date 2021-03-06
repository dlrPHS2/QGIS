/***************************************************************************
                              qgswmsgetcapabilities.h
                              -------------------------
  begin                : December 20 , 2016
  copyright            : (C) 2007 by Marco Hugentobler  (original code)
                         (C) 2014 by Alessandro Pasotti (original code)
                         (C) 2016 by David Marteau
  email                : marco dot hugentobler at karto dot baug dot ethz dot ch
                         a dot pasotti at itopen dot it
                         david dot marteau at 3liz dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSWMSGETCAPABILITIES_H
#define QGSWMSGETCAPABILITIES_H

namespace QgsWms
{

  /** Output GetCapabilities response
   */
  void writeGetCapabilities( QgsServerInterface *serverIface, const QgsProject *project,
                             const QString &version, const QgsServerRequest &request,
                             QgsServerResponse &response, bool projectSettings = false );

  /**
   * Create WMS GetCapabilities document
   *
   * Returns an XML document with the capabilities description (as described in the WMS specs)
   * \param version WMS version
   * \param projectSettings If true: add extended project information (does not validate against WMS schema)
   */
  QDomDocument getCapabilities( QgsServerInterface *serverIface, const QgsProject *project,
                                const QString &version, const QgsServerRequest &request, bool projectSettings );


} // samespace QgsWms


#endif


