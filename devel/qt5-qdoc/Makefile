# $FreeBSD$

PORTNAME=	qdoc
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt documentation generator

BUILD_DEPENDS=	llvm${LLVM_DEFAULT}>=0:devel/llvm${LLVM_DEFAULT}
RUN_DEPENDS=	llvm${LLVM_DEFAULT}>=0:devel/llvm${LLVM_DEFAULT}

USES=		compiler:c++11-lang qmake qt-dist:5,tools
USE_QT=		core declarative buildtools_build qdoc-data_run

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

PLIST_FILES=	${QT_BINDIR}/qdoc \
		${QT_CMAKEDIR}/Qt5DocTools/Qt5DocToolsConfig.cmake \
		${QT_CMAKEDIR}/Qt5DocTools/Qt5DocToolsConfigVersion.cmake

CONFIGURE_ENV=	LLVM_INSTALL_DIR=${LOCALBASE}/llvm${LLVM_DEFAULT}

QT_BINARIES=	yes

.include <bsd.port.mk>
