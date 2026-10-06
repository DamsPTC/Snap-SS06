/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000bcad0; end: 000bcb3b;  */

void FUN_000bcad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_000bcb3c(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    FUN_0013ad2c(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 000bcb3c; end: 000bd023;  */

void FUN_000bcb3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined1 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_000bebe0();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    if (unaff_x21 != 0) goto LAB_000bcc30;
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_beginAccess(param_1 + 0x18,auStack_90,0,0);
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_000bebe0();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    if (unaff_x21 != 0) {
LAB_000bcc30:
      _swift_bridgeObjectRelease(lVar8);
      return;
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_a8,0,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_4 + 0x118);
    FUN_000bebe0();
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar9)();
    _swift_bridgeObjectRelease(lVar8);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_c0,0,0);
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((**(code **)(param_4 + 0x28))(*(int *)(param_1 + 0x28),4,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  _swift_beginAccess(param_1 + 0x30,auStack_d8,0,0);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x30),5,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_f0,0,0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x38),6,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  FUN_000bd024(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  lVar8 = param_1 + 0x90;
  _swift_beginAccess(lVar8,auStack_108,0,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_118 = *(undefined1 *)(param_1 + 0x98);
    pcVar9 = *(code **)(param_4 + 0x80);
    lStack_120 = *(long *)(param_1 + 0x90);
    func_0x000bf948();
    (*pcVar9)(&lStack_120,8,&UNK_009aa1d0,lVar8,param_3,param_4);
  }
  _swift_beginAccess(param_1 + 0xa0,&lStack_120,0,0);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  uVar2 = *(ulong *)(param_1 + 0xa8);
  uVar3 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar9 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar9)(uVar1,uVar2,9,param_3,param_4);
    _swift_bridgeObjectRelease(uVar2);
  }
  _swift_beginAccess(param_1 + 0xb0,auStack_138,0,0);
  if (*(int *)(param_1 + 0xb0) != 0) {
    (**(code **)(param_4 + 0x48))(*(int *)(param_1 + 0xb0),10,param_3,param_4);
  }
  _swift_beginAccess(param_1 + 0xb8,auStack_150,0,0);
  uVar1 = *(ulong *)(param_1 + 0xb8);
  uVar2 = *(ulong *)(param_1 + 0xc0);
  uVar3 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar9 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar9)(uVar1,uVar2,0xb,param_3,param_4);
    _swift_bridgeObjectRelease(uVar2);
  }
  _swift_beginAccess(param_1 + 200,auStack_168,0,0);
  lVar8 = *(long *)(param_1 + 200);
  uVar3 = *(ulong *)(param_1 + 0xd0);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar3 & 0xff000000000000) == 0) goto LAB_000bcf90;
    }
    else {
      lVar6 = (long)(int)lVar8;
      lVar7 = lVar8 >> 0x20;
LAB_000bcf48:
      if (lVar6 == lVar7) goto LAB_000bcf90;
    }
    pcVar9 = *(code **)(param_4 + 0x78);
    func_0x00023304(lVar8,uVar3);
    (*pcVar9)(lVar8,uVar3,0xc,param_3,param_4);
    FUN_00023358(lVar8,uVar3);
  }
  else if (uVar5 == 2) {
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
    goto LAB_000bcf48;
  }
LAB_000bcf90:
  _swift_beginAccess(param_1 + 0xd8,auStack_180,0,0);
  lVar8 = *(long *)(param_1 + 0xd8);
  uVar3 = *(ulong *)(param_1 + 0xe0);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_000bcfe4;
    }
    lVar6 = (long)(int)lVar8;
    lVar7 = lVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_000bcfe4:
  pcVar9 = *(code **)(param_4 + 0x78);
  func_0x00023304(lVar8,uVar3);
  (*pcVar9)(lVar8,uVar3,0xe,param_3,param_4);
  FUN_00023358(lVar8,uVar3);
  return;
}



/* Entry: 000bd024; end: 000bd0d7;  */

void FUN_000bd024(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x48);
  if (lStack_a0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x58);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_000be9e8();
    (*pcVar2)(&uStack_a8,7,&UNK_009aa248,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 000bd0d8; end: 000bd7bb;  */

uint FUN_000bd0d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_520 [80];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
  uVar9 = *(ulong *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_d0,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar12);
  uVar5 = uVar9;
  FUN_000bdc60(uVar9,uVar12);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar12);
  if ((uVar5 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x18,auStack_e8,0,0);
    uVar9 = *(ulong *)(param_1 + 0x18);
    _swift_beginAccess(param_2 + 0x18,auStack_100,0,0);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar12);
    uVar5 = uVar9;
    FUN_000bdc60(uVar9,uVar12);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar12);
    if ((uVar5 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
      uVar9 = *(ulong *)(param_1 + 0x20);
      _swift_beginAccess(param_2 + 0x20,auStack_130,0,0);
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar12);
      uVar5 = uVar9;
      FUN_000bdc60(uVar9,uVar12);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar12);
      if ((uVar5 & 1) != 0) {
        _swift_beginAccess(param_1 + 0x28,auStack_148,0,0);
        iVar4 = *(int *)(param_1 + 0x28);
        _swift_beginAccess(param_2 + 0x28,auStack_160,0,0);
        if (iVar4 == *(int *)(param_2 + 0x28)) {
          _swift_beginAccess(param_1 + 0x30,auStack_178,0,0);
          lVar10 = *(long *)(param_1 + 0x30);
          _swift_beginAccess(param_2 + 0x30,auStack_190,0,0);
          if (lVar10 == *(long *)(param_2 + 0x30)) {
            _swift_beginAccess(param_1 + 0x38,auStack_1a8,0,0);
            lVar10 = *(long *)(param_1 + 0x38);
            _swift_beginAccess(param_2 + 0x38,auStack_1c0,0,0);
            if (lVar10 == *(long *)(param_2 + 0x38)) {
              _swift_beginAccess(param_1 + 0x40,auStack_278,0,0);
              _swift_beginAccess(param_2 + 0x40,auStack_290,0,0);
              uStack_308 = *(undefined8 *)(param_1 + 0x68);
              uStack_310 = *(undefined8 *)(param_1 + 0x60);
              uStack_2f8 = *(undefined8 *)(param_1 + 0x78);
              uStack_300 = *(undefined8 *)(param_1 + 0x70);
              lStack_328 = *(long *)(param_1 + 0x48);
              uStack_330 = *(undefined8 *)(param_1 + 0x40);
              uStack_318 = *(undefined8 *)(param_1 + 0x58);
              uStack_320 = *(undefined8 *)(param_1 + 0x50);
              uStack_208 = *(undefined8 *)(param_2 + 0x48);
              uStack_210 = *(undefined8 *)(param_2 + 0x40);
              uStack_368 = *(undefined8 *)(param_2 + 0x58);
              uStack_370 = *(undefined8 *)(param_2 + 0x50);
              uStack_348 = *(undefined8 *)(param_2 + 0x78);
              uStack_350 = *(undefined8 *)(param_2 + 0x70);
              uStack_1c8 = *(undefined8 *)(param_2 + 0x88);
              uStack_1d0 = *(undefined8 *)(param_2 + 0x80);
              uStack_1e8 = *(undefined8 *)(param_2 + 0x68);
              uStack_1f0 = *(undefined8 *)(param_2 + 0x60);
              uStack_1d8 = *(undefined8 *)(param_2 + 0x78);
              uStack_1e0 = *(undefined8 *)(param_2 + 0x70);
              uStack_1f8 = *(undefined8 *)(param_2 + 0x58);
              uStack_200 = *(undefined8 *)(param_2 + 0x50);
              uStack_358 = *(undefined8 *)(param_2 + 0x68);
              uStack_360 = *(undefined8 *)(param_2 + 0x60);
              lStack_378 = *(long *)(param_2 + 0x48);
              uStack_380 = *(undefined8 *)(param_2 + 0x40);
              uStack_2e8 = *(undefined8 *)(param_1 + 0x88);
              uStack_2f0 = *(undefined8 *)(param_1 + 0x80);
              uStack_338 = *(undefined8 *)(param_2 + 0x88);
              uStack_340 = *(undefined8 *)(param_2 + 0x80);
              uStack_2e0 = uStack_380;
              lStack_2d8 = lStack_378;
              uStack_2d0 = uStack_370;
              uStack_2c8 = uStack_368;
              uStack_2c0 = uStack_360;
              uStack_2b8 = uStack_358;
              uStack_2b0 = uStack_350;
              uStack_2a8 = uStack_348;
              uStack_2a0 = uStack_340;
              uStack_298 = uStack_338;
              uStack_260 = uStack_330;
              lStack_258 = lStack_328;
              uStack_250 = uStack_320;
              uStack_248 = uStack_318;
              uStack_240 = uStack_310;
              uStack_238 = uStack_308;
              uStack_230 = uStack_300;
              uStack_228 = uStack_2f8;
              uStack_220 = uStack_2f0;
              uStack_218 = uStack_2e8;
              if (lStack_328 == 0) {
                if (lStack_378 != 0) goto LAB_000bd408;
                uStack_3a8 = *(undefined8 *)(param_1 + 0x68);
                uStack_3b0 = *(undefined8 *)(param_1 + 0x60);
                uStack_398 = *(undefined8 *)(param_1 + 0x78);
                uStack_3a0 = *(undefined8 *)(param_1 + 0x70);
                uStack_388 = *(undefined8 *)(param_1 + 0x88);
                uStack_390 = *(undefined8 *)(param_1 + 0x80);
                lStack_3c8 = *(undefined8 *)(param_1 + 0x48);
                uStack_3d0 = *(undefined8 *)(param_1 + 0x40);
                uStack_3b8 = *(undefined8 *)(param_1 + 0x58);
                uStack_3c0 = *(undefined8 *)(param_1 + 0x50);
                FUN_000be35c(&uStack_260,&uStack_a0,0xaed360,&UNK_007d6a90);
                FUN_000be35c(&uStack_210,&uStack_a0,0xaed360,&UNK_007d6a90);
                func_0x000be3a4(&uStack_3d0,0xaed360,&UNK_007d6a90);
LAB_000bd504:
                _swift_beginAccess(param_1 + 0x90,&uStack_330,0,0);
                lVar11 = *(long *)(param_1 + 0x90);
                _swift_beginAccess(param_2 + 0x90,&uStack_4d0,0,0);
                lVar10 = *(long *)(param_2 + 0x90);
                if (*(char *)(param_2 + 0x98) == '\x01') {
                  if (lVar10 < 3) {
                    if (lVar10 == 0) {
                      if (lVar11 == 0) goto LAB_000bd56c;
                    }
                    else if (lVar10 == 1) {
                      if (lVar11 == 1) goto LAB_000bd56c;
                    }
                    else if (lVar11 == 2) goto LAB_000bd56c;
                  }
                  else if (lVar10 < 5) {
                    if (lVar10 == 3) {
                      if (lVar11 == 3) {
LAB_000bd56c:
                        _swift_beginAccess(param_1 + 0xa0,auStack_520,0,0);
                        _swift_beginAccess(param_2 + 0xa0,auStack_3e8,0x20,0);
                        uVar5 = *(ulong *)(param_1 + 0xa0);
                        if ((uVar5 == *(ulong *)(param_2 + 0xa0)) &&
                           (*(long *)(param_1 + 0xa8) == *(long *)(param_2 + 0xa8))) {
                          _swift_endAccess(auStack_3e8);
                        }
                        else {
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    ();
                          _swift_endAccess(auStack_3e8);
                          if ((uVar5 & 1) == 0) goto LAB_000bd480;
                        }
                        _swift_beginAccess(param_1 + 0xb0,auStack_3e8,0,0);
                        iVar4 = *(int *)(param_1 + 0xb0);
                        _swift_beginAccess(param_2 + 0xb0,auStack_400,0,0);
                        if (iVar4 == *(int *)(param_2 + 0xb0)) {
                          _swift_beginAccess(param_1 + 0xb8,auStack_418,0,0);
                          _swift_beginAccess(param_2 + 0xb8,auStack_430,0x20,0);
                          uVar5 = *(ulong *)(param_1 + 0xb8);
                          if ((uVar5 == *(ulong *)(param_2 + 0xb8)) &&
                             (*(long *)(param_1 + 0xc0) == *(long *)(param_2 + 0xc0))) {
                            _swift_endAccess(auStack_430);
                          }
                          else {
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      ();
                            _swift_endAccess(auStack_430);
                            if ((uVar5 & 1) == 0) goto LAB_000bd480;
                          }
                          _swift_beginAccess(param_1 + 200,auStack_430,0,0);
                          uVar5 = *(ulong *)(param_1 + 200);
                          uVar1 = *(undefined8 *)(param_1 + 0xd0);
                          _swift_beginAccess(param_2 + 200,auStack_448,0,0);
                          uVar12 = *(undefined8 *)(param_2 + 200);
                          uVar2 = *(undefined8 *)(param_2 + 0xd0);
                          func_0x00023304(uVar5,uVar1);
                          func_0x00023304(uVar12,uVar2);
                          uVar9 = uVar5;
                          FUN_00038814(uVar5,uVar1,uVar12,uVar2);
                          FUN_00023358(uVar12,uVar2);
                          FUN_00023358(uVar5,uVar1);
                          if ((uVar9 & 1) != 0) {
                            _swift_beginAccess(param_1 + 0xd8,auStack_460,0,0);
                            uVar12 = *(undefined8 *)(param_1 + 0xd8);
                            uVar2 = *(undefined8 *)(param_1 + 0xe0);
                            _swift_beginAccess(param_2 + 0xd8,auStack_478,0,0);
                            uVar1 = *(undefined8 *)(param_2 + 0xd8);
                            uVar3 = *(undefined8 *)(param_2 + 0xe0);
                            func_0x00023304(uVar12,uVar2);
                            func_0x00023304(uVar1,uVar3);
                            uVar7 = uVar12;
                            FUN_00038814(uVar12,uVar2,uVar1,uVar3);
                            uVar8 = (uint)uVar7;
                            FUN_00023358(uVar1,uVar3);
                            FUN_00023358(uVar12,uVar2);
                            goto LAB_000bd484;
                          }
                        }
                      }
                    }
                    else if (lVar11 == 4) goto LAB_000bd56c;
                  }
                  else if (lVar10 == 5) {
                    if (lVar11 == 5) goto LAB_000bd56c;
                  }
                  else if (lVar11 == 6) goto LAB_000bd56c;
                }
                else if (lVar11 == lVar10) goto LAB_000bd56c;
              }
              else if (lStack_378 == 0) {
LAB_000bd408:
                uStack_3d0 = uStack_330;
                lStack_3c8 = lStack_328;
                uStack_3c0 = uStack_320;
                uStack_3b8 = uStack_318;
                uStack_3b0 = uStack_310;
                uStack_3a8 = uStack_308;
                uStack_3a0 = uStack_300;
                uStack_398 = uStack_2f8;
                uStack_390 = uStack_2f0;
                uStack_388 = uStack_2e8;
                FUN_000be35c(&uStack_260,&uStack_a0,0xaed360,&UNK_007d6a90);
                FUN_000be35c(&uStack_210,&uStack_a0,0xaed360,&UNK_007d6a90);
                func_0x000be3a4(&uStack_3d0,0xaed368,&UNK_007d6a98);
              }
              else {
                uStack_4a8 = *(undefined8 *)(param_2 + 0x68);
                uStack_4b0 = *(undefined8 *)(param_2 + 0x60);
                uStack_498 = *(undefined8 *)(param_2 + 0x78);
                uStack_4a0 = *(undefined8 *)(param_2 + 0x70);
                uStack_488 = *(undefined8 *)(param_2 + 0x88);
                uStack_490 = *(undefined8 *)(param_2 + 0x80);
                uStack_4c8 = *(undefined8 *)(param_2 + 0x48);
                uStack_4d0 = *(undefined8 *)(param_2 + 0x40);
                uStack_4b8 = *(undefined8 *)(param_2 + 0x58);
                uStack_4c0 = *(undefined8 *)(param_2 + 0x50);
                uStack_98 = *(undefined8 *)(param_1 + 0x48);
                uStack_a0 = *(undefined8 *)(param_1 + 0x40);
                uStack_88 = *(undefined8 *)(param_1 + 0x58);
                uStack_90 = *(undefined8 *)(param_1 + 0x50);
                uStack_78 = *(undefined8 *)(param_1 + 0x68);
                uStack_80 = *(undefined8 *)(param_1 + 0x60);
                uStack_68 = *(undefined8 *)(param_1 + 0x78);
                uStack_70 = *(undefined8 *)(param_1 + 0x70);
                uStack_58 = *(undefined8 *)(param_1 + 0x88);
                uStack_60 = *(undefined8 *)(param_1 + 0x80);
                uStack_3d0 = uStack_4d0;
                lStack_3c8 = uStack_4c8;
                uStack_3c0 = uStack_4c0;
                uStack_3b8 = uStack_4b8;
                uStack_3b0 = uStack_4b0;
                uStack_3a8 = uStack_4a8;
                uStack_3a0 = uStack_4a0;
                uStack_398 = uStack_498;
                uStack_390 = uStack_490;
                uStack_388 = uStack_488;
                FUN_000be35c(&uStack_260,auStack_520,0xaed360,&UNK_007d6a90);
                FUN_000be35c(&uStack_210,auStack_520,0xaed360,&UNK_007d6a90);
                puVar6 = &uStack_a0;
                FUN_000be3e4(puVar6,&uStack_3d0);
                func_0x000be3a4(&uStack_4d0,0xaed360,&UNK_007d6a90);
                func_0x000be3a4(&uStack_330,0xaed360,&UNK_007d6a90);
                if (((ulong)puVar6 & 1) != 0) goto LAB_000bd504;
              }
            }
          }
        }
      }
    }
  }
LAB_000bd480:
  uVar8 = 0;
LAB_000bd484:
  return uVar8 & 1;
}



/* Entry: 000bd7bc; end: 000bd81b;  */

void FUN_000bd7bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000000aed370 != -1) {
    _swift_once(0xaed370,0xbbf50);
  }
  uVar1 = uRam0000000000aed378;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)();
  return;
}



/* Entry: 000bd81c; end: 000bd843;  */

undefined1  [16] FUN_000bd81c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000656d61;
  auVar1._0_8_ = 0x724663697274654d;
  return auVar1;
}



/* Entry: 000bd844; end: 000bd873;  */

undefined1  [16] FUN_000bd844(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 000bd874; end: 000bd8a7;  */

void FUN_000bd874(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 000bd8a8; end: 000bd8bb;  */

undefined8 FUN_000bd8a8(void)

{
  return 0xbd8b8;
}



/* Entry: 000bd8bc; end: 000bd8f3;  */

void FUN_000bd8bc(void)

{
  FUN_000bc4f0();
  return;
}



/* Entry: 000bd8f4; end: 000bd8f7;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000bd8f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000bd8f8; end: 000bd92f;  */

uint FUN_000bd8f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_000bf848();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000bd930; end: 000bd9d7;  */

ulong FUN_000bd930(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar17 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar17) {
    _swift_retain(uVar16);
    _swift_retain(uVar17);
    uVar9 = uVar16;
    FUN_000bd0d8(uVar16,uVar17);
    _swift_release(uVar17);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar17 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar17) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar17 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar18;
        if ((long)uVar6 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar17 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar17)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar18 - uVar17) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar17) {
              uVar17 = uVar16;
            }
            pbVar11 = (byte *)(uVar17 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar18 - uVar16) + uVar6;
        }
        uVar17 = lVar1 - lVar18;
        if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar17 <= (long)uVar16) {
            uVar16 = uVar17;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar18 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar17 = *unaff_x20;
  uVar16 = uVar17 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar18,uVar7);
  lVar1 = lVar12 - lVar18;
  if (SBORROW8(lVar12,lVar18)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar17 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar18 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar8 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar18 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar18 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar18 << 3);
    }
    if (uVar17 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar8 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 000bd9d8; end: 000bda77;  */

void FUN_000bd9d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed3b8 != -1) {
    _swift_once(0xaed3b8,0xbbf08);
  }
  uVar5 = uRam0000000000b64a30;
  uVar4 = uRam0000000000b64a28;
  uVar3 = uRam0000000000b64a20;
  uVar2 = uRam0000000000b64a18;
  uVar1 = uRam0000000000b64a10;
  *param_1 = uRam0000000000b64a08;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000bda78; end: 000bdab3;  */

void FUN_000bda78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed688;
  uStack_18 = param_1;
  func_0x000115a8(0xaed688,&UNK_007d6fc8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000bdab4; end: 000bdbb7;  */

void FUN_000bdab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000bdbb8; end: 000bdc5f;  */

ulong FUN_000bdbb8(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = *param_1;
  pbVar11 = (byte *)param_1[1];
  uVar17 = param_1[2];
  lVar13 = *param_2;
  uVar8 = param_2[1];
  uVar19 = param_2[2];
  if (uVar17 != uVar19) {
    _swift_retain(uVar17);
    _swift_retain(uVar19);
    uVar18 = uVar17;
    FUN_000bd0d8(uVar17,uVar19);
    _swift_release(uVar19);
    _swift_release(uVar17);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar17 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar17 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar17 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar17 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar8 = (ulong)(uVar17 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar17 != uVar19) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar17 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar17 = 0;
      if (1 < uVar16) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar19 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar17 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar17) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar19 = uVar18 & 0xffffffffffffff8;
  uVar8 = uVar19 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar17 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar19 + 0x10);
      lVar9 = uVar17 - (long)pbVar11;
    }
    else {
      uVar17 = uVar19;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar17 - (long)pbVar11;
    }
    if (SBORROW8(uVar17,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar17 = uVar19 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar17 || uVar17 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar17,lVar9 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar19 + 0x10);
    }
    else {
      uVar17 = uVar19;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar17,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar19 + 0x10) = uVar17 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar17;
}



/* Entry: 000bdc60; end: 000be32f;  */

/* WARNING: Possible PIC construction at 0x000bdd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000bdd64) */
/* WARNING: Removing unreachable block (ram,0x000bdd68) */
/* WARNING: Removing unreachable block (ram,0x000bdd80) */
/* WARNING: Removing unreachable block (ram,0x000bdd84) */
/* WARNING: Removing unreachable block (ram,0x000bdd8c) */
/* WARNING: Removing unreachable block (ram,0x000bdd94) */
/* WARNING: Removing unreachable block (ram,0x000bdda4) */
/* WARNING: Removing unreachable block (ram,0x000bddac) */
/* WARNING: Removing unreachable block (ram,0x000bddf4) */
/* WARNING: Removing unreachable block (ram,0x000bde24) */
/* WARNING: Removing unreachable block (ram,0x000bdf8c) */
/* WARNING: Removing unreachable block (ram,0x000bdf98) */
/* WARNING: Removing unreachable block (ram,0x000bde2c) */
/* WARNING: Removing unreachable block (ram,0x000be12c) */
/* WARNING: Removing unreachable block (ram,0x000bddfc) */
/* WARNING: Removing unreachable block (ram,0x000bdf70) */
/* WARNING: Removing unreachable block (ram,0x000be128) */
/* WARNING: Removing unreachable block (ram,0x000bdf7c) */
/* WARNING: Removing unreachable block (ram,0x000bdf88) */
/* WARNING: Removing unreachable block (ram,0x000bde00) */
/* WARNING: Removing unreachable block (ram,0x000bddc8) */
/* WARNING: Removing unreachable block (ram,0x000bddd0) */
/* WARNING: Removing unreachable block (ram,0x000bddd8) */
/* WARNING: Removing unreachable block (ram,0x000bdde0) */
/* WARNING: Removing unreachable block (ram,0x000bdde8) */
/* WARNING: Removing unreachable block (ram,0x000bddf0) */
/* WARNING: Removing unreachable block (ram,0x000bde38) */
/* WARNING: Removing unreachable block (ram,0x000bde0c) */
/* WARNING: Removing unreachable block (ram,0x000bde4c) */
/* WARNING: Removing unreachable block (ram,0x000bde50) */
/* WARNING: Removing unreachable block (ram,0x000bde14) */
/* WARNING: Removing unreachable block (ram,0x000bde20) */
/* WARNING: Removing unreachable block (ram,0x000be120) */
/* WARNING: Removing unreachable block (ram,0x000bde40) */
/* WARNING: Removing unreachable block (ram,0x000bde54) */
/* WARNING: Removing unreachable block (ram,0x000be124) */
/* WARNING: Removing unreachable block (ram,0x000bde60) */
/* WARNING: Removing unreachable block (ram,0x000bde44) */
/* WARNING: Removing unreachable block (ram,0x000bde64) */
/* WARNING: Removing unreachable block (ram,0x000be0d4) */
/* WARNING: Removing unreachable block (ram,0x000bde6c) */
/* WARNING: Removing unreachable block (ram,0x000bdf00) */
/* WARNING: Removing unreachable block (ram,0x000bde74) */
/* WARNING: Removing unreachable block (ram,0x000bdf14) */
/* WARNING: Removing unreachable block (ram,0x000bdff8) */
/* WARNING: Removing unreachable block (ram,0x000bdf1c) */
/* WARNING: Removing unreachable block (ram,0x000bdf34) */
/* WARNING: Removing unreachable block (ram,0x000be138) */
/* WARNING: Removing unreachable block (ram,0x000bdf44) */
/* WARNING: Removing unreachable block (ram,0x000bdf48) */
/* WARNING: Removing unreachable block (ram,0x000be134) */
/* WARNING: Removing unreachable block (ram,0x000bdf50) */
/* WARNING: Removing unreachable block (ram,0x000be080) */
/* WARNING: Removing unreachable block (ram,0x000bdf60) */
/* WARNING: Removing unreachable block (ram,0x000bdf64) */
/* WARNING: Removing unreachable block (ram,0x000be084) */
/* WARNING: Removing unreachable block (ram,0x000be0b4) */
/* WARNING: Removing unreachable block (ram,0x000bde7c) */
/* WARNING: Removing unreachable block (ram,0x000bdf9c) */
/* WARNING: Removing unreachable block (ram,0x000be130) */
/* WARNING: Removing unreachable block (ram,0x000bdfb0) */
/* WARNING: Removing unreachable block (ram,0x000be038) */
/* WARNING: Removing unreachable block (ram,0x000bdfbc) */
/* WARNING: Removing unreachable block (ram,0x000be13c) */
/* WARNING: Removing unreachable block (ram,0x000bdfd0) */
/* WARNING: Removing unreachable block (ram,0x000bdfe0) */
/* WARNING: Removing unreachable block (ram,0x000bdfec) */
/* WARNING: Removing unreachable block (ram,0x000bdff0) */
/* WARNING: Removing unreachable block (ram,0x000be048) */
/* WARNING: Removing unreachable block (ram,0x000bde80) */
/* WARNING: Removing unreachable block (ram,0x000be00c) */
/* WARNING: Removing unreachable block (ram,0x000be078) */
/* WARNING: Removing unreachable block (ram,0x000be0bc) */
/* WARNING: Removing unreachable block (ram,0x000be0c0) */
/* WARNING: Removing unreachable block (ram,0x000be034) */

long FUN_000bdc60(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_1d8;
  undefined1 auStack_140 [64];
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = param_2;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    if ((*(long *)(param_1 + 0x10) != 0) && (param_1 != param_2)) {
      lVar11 = *(long *)(param_1 + 0x28);
      uVar10 = *(ulong *)(param_1 + 0x20);
      lStack_e8 = *(long *)(param_1 + 0x38);
      uStack_f0 = *(ulong *)(param_1 + 0x30);
      uStack_d8 = *(undefined8 *)(param_1 + 0x48);
      lStack_e0 = *(long *)(param_1 + 0x40);
      uStack_c8 = *(undefined8 *)(param_1 + 0x58);
      uStack_d0 = *(undefined8 *)(param_1 + 0x50);
      lStack_b8 = *(long *)(param_2 + 0x28);
      uStack_c0 = *(ulong *)(param_2 + 0x20);
      lStack_a8 = *(long *)(param_2 + 0x38);
      uStack_b0 = *(ulong *)(param_2 + 0x30);
      uStack_98 = *(undefined8 *)(param_2 + 0x48);
      lStack_a0 = *(long *)(param_2 + 0x40);
      uStack_88 = *(undefined8 *)(param_2 + 0x58);
      uStack_90 = *(undefined8 *)(param_2 + 0x50);
      uStack_100 = uVar10;
      lStack_f8 = lVar11;
      if ((((uVar10 == uStack_c0) && (lVar11 == lStack_b8)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar10 & 1) != 0)) &&
         (((uStack_f0 == uStack_b0 && (lStack_e8 == lStack_a8)) ||
          (uVar10 = uStack_f0, lVar11 = lStack_e8,
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar10 & 1) != 0)))) {
        param_2 = lStack_a0;
        lVar5 = lStack_e0;
        FUN_000ba4bc(&uStack_100,auStack_140);
        FUN_000ba4bc(&uStack_c0,auStack_140);
        goto SUB_000be144;
      }
      goto LAB_000be0e4;
    }
    lVar5 = 1;
  }
  else {
LAB_000be0e4:
    lVar5 = 0;
    param_2 = lVar11;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return lVar5;
  }
  ___stack_chk_fail();
SUB_000be144:
  if (lVar5 == param_2) {
    lVar11 = 1;
  }
  else if (*(long *)(lVar5 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar10 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uStack_1d8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar5 + 0x20) & 0x3f) < 6) {
      uStack_1d8 = ~(-1L << (uVar10 & 0x3f));
    }
    uStack_1d8 = uStack_1d8 & *(ulong *)(lVar5 + 0x40);
    _swift_bridgeObjectRetain_n(lVar5,2);
    _swift_bridgeObjectRetain(param_2);
    lVar11 = 0;
    do {
      while( true ) {
        if (uStack_1d8 == 0) {
          do {
            lVar12 = lVar11 + 1;
            if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0xbe330);
              (*pcVar4)();
            }
            if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
              lVar11 = 1;
              goto LAB_000be2e0;
            }
            uStack_1d8 = ((ulong *)(lVar5 + 0x40))[lVar12];
            lVar11 = lVar11 + 1;
          } while (uStack_1d8 == 0);
          uVar8 = (uStack_1d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_1d8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_1d8 = uStack_1d8 - 1 & uStack_1d8;
        }
        else {
          uVar8 = (uStack_1d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_1d8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_1d8 = uStack_1d8 - 1 & uStack_1d8;
          lVar12 = lVar11;
        }
        lVar9 = (LZCOUNT(uVar8) | lVar12 << 6) * 0x10;
        plVar1 = (long *)(*(long *)(lVar5 + 0x30) + lVar9);
        lVar11 = *plVar1;
        uVar6 = plVar1[1];
        puVar2 = (ulong *)(*(long *)(lVar5 + 0x38) + lVar9);
        uVar8 = *puVar2;
        uVar3 = puVar2[1];
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar3);
        uVar7 = uVar6;
        FUN_000202c0();
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar3);
          lVar11 = 0;
          goto LAB_000be2e0;
        }
        puVar2 = (ulong *)(*(long *)(param_2 + 0x38) + lVar11 * 0x10);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        lVar11 = lVar12;
        if (uVar6 != uVar8 || uVar7 != uVar3) break;
        _swift_bridgeObjectRelease(uVar3);
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar6,uVar7,uVar8,uVar3,0);
      _swift_bridgeObjectRelease(uVar3);
    } while ((uVar6 & 1) != 0);
    lVar11 = 0;
LAB_000be2e0:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease_n(lVar5,2);
  }
  else {
    lVar11 = 0;
  }
  return lVar11;
}



/* Entry: 000be330; end: 000be33b;  */

void FUN_000be330(void)

{
  return;
}



/* Entry: 000be33c; end: 000be35b;  */

void FUN_000be33c(void)

{
  _objc_opt_self(&PTR_PTR_00aed488);
  return;
}



/* Entry: 000be35c; end: 000be3e3;  */

undefined8 FUN_000be35c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 000be3e4; end: 000be673;  */

uint FUN_000be3e4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[7];
  uVar3 = param_1[6];
  uVar9 = param_1[9];
  uVar7 = param_1[8];
  uVar6 = param_2[7];
  uVar4 = param_2[6];
  uVar10 = param_2[9];
  uVar8 = param_2[8];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar9 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_000be4f4;
    if (((((int)uVar3 == (int)uVar4) && ((uVar4 ^ uVar3) >> 0x20 == 0)) &&
        ((int)uVar5 == (int)uVar6)) && ((uVar6 ^ uVar5) >> 0x20 == 0)) {
      FUN_000be35c(&uStack_80,auStack_c0,0xaed358,&UNK_007d6a88);
      FUN_000be35c(&uStack_a0,auStack_c0,0xaed358,&UNK_007d6a88);
      uVar2 = uVar7;
      FUN_00038814(uVar7,uVar9,uVar8,uVar10);
      FUN_000ba54c(uVar4,uVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_000be47c;
    }
    else {
      FUN_000be35c(&uStack_80,auStack_c0,0xaed358,&UNK_007d6a88);
      FUN_000be35c(&uStack_a0,auStack_c0,0xaed358,&UNK_007d6a88);
      FUN_000ba54c(uVar4,uVar6,uVar8,uVar10);
    }
LAB_000be648:
    FUN_000ba54c(uVar3,uVar5,uVar7,uVar9);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_000be4f4:
      FUN_000be35c(&uStack_80,auStack_c0,0xaed358,&UNK_007d6a88);
      FUN_000be35c(&uStack_a0,auStack_c0,0xaed358,&UNK_007d6a88);
      FUN_000ba54c(uVar3,uVar5,uVar7,uVar9);
      uVar3 = uVar4;
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
      goto LAB_000be648;
    }
    FUN_000be35c(&uStack_80,auStack_c0,0xaed358,&UNK_007d6a88);
    FUN_000be35c(&uStack_a0,auStack_c0,0xaed358,&UNK_007d6a88);
LAB_000be47c:
    FUN_000ba54c(uVar3,uVar5,uVar7,uVar9);
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      if (((uVar3 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) != 0)) {
        uVar3 = param_1[4];
        FUN_00038814(uVar3,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar3;
        goto LAB_000be650;
      }
    }
  }
  uVar1 = 0;
LAB_000be650:
  return uVar1 & 1;
}



/* Entry: 000be674; end: 000be6f3;  */

void FUN_000be674(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6c20;
  _swift_getWitnessTable(&UNK_007d6c20,&UNK_009aa248);
  puRam0000000000aed390 = puVar1;
  return;
}



/* Entry: 000be6f4; end: 000be7c3;  */

ulong FUN_000be6f4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong *unaff_x20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar8 = *param_1;
  if (((uVar8 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)) ||
     ((uVar8 = param_1[2], uVar8 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar8 & 1) == 0)))) {
    return 0;
  }
  uVar8 = param_1[4];
  func_0x000be144(uVar8,param_2[4]);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = param_1[5];
  uVar18 = param_2[5];
  lVar12 = *(long *)(uVar8 + 0x10);
  if (lVar12 != *(long *)(uVar18 + 0x10)) {
    return 0;
  }
  if (lVar12 != 0 && uVar8 != uVar18) {
    plVar15 = (long *)(uVar8 + 0x20);
    plVar19 = (long *)(uVar18 + 0x20);
    do {
      if (*plVar15 != *plVar19) {
        return 0;
      }
      lVar12 = lVar12 + -1;
      plVar15 = plVar15 + 1;
      plVar19 = plVar19 + 1;
    } while (lVar12 != 0);
  }
  uVar8 = param_1[6];
  pbVar9 = (byte *)param_1[7];
  uVar18 = param_2[6];
  uVar7 = param_2[7];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar5 = (int)uVar8;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar8 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar18 != 0 || (uVar7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar17 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar18 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar18)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar18)) goto LAB_0003899c;
    }
    else {
      if (uVar11 == 2) {
        uVar14 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (uVar16 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar8 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar17 = *(long *)(uVar18 + 0x18) - *(long *)(uVar18 + 0x10);
      if (SBORROW8(*(long *)(uVar18 + 0x18),*(long *)(uVar18 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar17) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar14) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar12 = (long)iVar5;
        uVar14 = ((long)uVar8 >> 0x20) - lVar12;
        if ((long)uVar8 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar17 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar12,uVar17)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar8 = (lVar12 - uVar17) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar14 <= (long)uVar17) {
              uVar17 = uVar14;
            }
            pbVar10 = (byte *)(uVar17 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar12 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar8 = (lVar12 - uVar14) + uVar8;
        }
        uVar17 = lVar1 - lVar12;
        if (SBORROW8(lVar1,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar17 <= (long)uVar14) {
            uVar14 = uVar17;
          }
          pbVar10 = (byte *)(uVar14 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar18,uVar7);
      uVar8 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar12 = (long)pbVar9 - uVar8;
  if (SBORROW8((long)pbVar9,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar17 = *unaff_x20;
  uVar14 = uVar17 & 0xffffffffffffff8;
  uVar8 = uVar14 + 0x20 + uVar8 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar8;
  _swift_arrayDestroy(uVar8,lVar12,uVar6);
  lVar1 = uVar18 - lVar12;
  if (SBORROW8(uVar18,lVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar17 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
      lVar12 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar14;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar7 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar12 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + uVar18 * 8;
    uVar7 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar8 != uVar7 || uVar7 + lVar12 * 8 <= uVar8) {
      _memmove(uVar8,uVar7,lVar12 << 3);
    }
    if (uVar17 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar7 = uVar14;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar7 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar7 + lVar1;
  }
  if ((long)uVar18 < 1) {
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 000be7c4; end: 000be843;  */

void FUN_000be7c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6dd0;
  _swift_getWitnessTable(&UNK_007d6dd0,&UNK_009aa360);
  puRam0000000000aed3b0 = puVar1;
  return;
}



/* Entry: 000be844; end: 000be857;  */

void FUN_000be844(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000be858();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xbe898)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000be858; end: 000be8d7;  */

void FUN_000be858(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6b38;
  _swift_getWitnessTable(&UNK_007d6b38,&UNK_009aa1d0);
  puRam0000000000aed3c8 = puVar1;
  return;
}



/* Entry: 000be8d8; end: 000be8db;  */

void FUN_000be8d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aed3d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaed3e0;
  FUN_00016c74(0xaed3e0,&UNK_007d6ac0);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aed3d8 = puVar2;
  return;
}



/* Entry: 000be8dc; end: 000be92b;  */

void FUN_000be8dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aed3d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaed3e0;
  FUN_00016c74(0xaed3e0,&UNK_007d6ac0);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aed3d8 = puVar2;
  return;
}



/* Entry: 000be92c; end: 000be92f;  */

void FUN_000be92c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6b78;
  _swift_getWitnessTable(&UNK_007d6b78,&UNK_009aa1d0);
  puRam0000000000aed3e8 = puVar1;
  return;
}



/* Entry: 000be930; end: 000be96f;  */

void FUN_000be930(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6b78;
  _swift_getWitnessTable(&UNK_007d6b78,&UNK_009aa1d0);
  puRam0000000000aed3e8 = puVar1;
  return;
}



/* Entry: 000be970; end: 000be993;  */

void FUN_000be970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000be994();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000be994; end: 000be9d3;  */

void FUN_000be994(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6bf8;
  _swift_getWitnessTable(&UNK_007d6bf8,&UNK_009aa248);
  puRam0000000000aed3f0 = puVar1;
  return;
}



/* Entry: 000be9d4; end: 000be9e7;  */

void FUN_000be9d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000be674();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000be9e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000be9e8; end: 000bea27;  */

void FUN_000be9e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed3f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d6bb0;
  _swift_getWitnessTable(&DAT_007d6bb0,&UNK_009aa248);
  puRam0000000000aed3f8 = puVar1;
  return;
}



/* Entry: 000bea28; end: 000bea2b;  */

void FUN_000bea28(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6c60;
  _swift_getWitnessTable(&UNK_007d6c60,&UNK_009aa248);
  puRam0000000000aed400 = puVar1;
  return;
}



/* Entry: 000bea2c; end: 000bea6b;  */

void FUN_000bea2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6c60;
  _swift_getWitnessTable(&UNK_007d6c60,&UNK_009aa248);
  puRam0000000000aed400 = puVar1;
  return;
}



/* Entry: 000bea6c; end: 000bea8f;  */

void FUN_000bea6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000bea90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000bea90; end: 000beacf;  */

void FUN_000bea90(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6cd0;
  _swift_getWitnessTable(&UNK_007d6cd0,&UNK_009aa2d0);
  puRam0000000000aed408 = puVar1;
  return;
}



/* Entry: 000bead0; end: 000beae3;  */

void FUN_000bead0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0xbe6b4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000beae4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000beae4; end: 000beb23;  */

void FUN_000beae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d6c88;
  _swift_getWitnessTable(&DAT_007d6c88,&UNK_009aa2d0);
  puRam0000000000aed410 = puVar1;
  return;
}



/* Entry: 000beb24; end: 000beb27;  */

void FUN_000beb24(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6d38;
  _swift_getWitnessTable(&UNK_007d6d38,&UNK_009aa2d0);
  puRam0000000000aed418 = puVar1;
  return;
}



/* Entry: 000beb28; end: 000beb67;  */

void FUN_000beb28(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6d38;
  _swift_getWitnessTable(&UNK_007d6d38,&UNK_009aa2d0);
  puRam0000000000aed418 = puVar1;
  return;
}



/* Entry: 000beb68; end: 000beb8b;  */

void FUN_000beb68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000beb8c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000beb8c; end: 000bebcb;  */

void FUN_000beb8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6da8;
  _swift_getWitnessTable(&UNK_007d6da8,&UNK_009aa360);
  puRam0000000000aed420 = puVar1;
  return;
}



/* Entry: 000bebcc; end: 000bebdf;  */

void FUN_000bebcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000be7c4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000bebe0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000bebe0; end: 000bec1f;  */

void FUN_000bebe0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d6d60;
  _swift_getWitnessTable(&DAT_007d6d60,&UNK_009aa360);
  puRam0000000000aed428 = puVar1;
  return;
}



/* Entry: 000bec20; end: 000bec23;  */

void FUN_000bec20(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6e10;
  _swift_getWitnessTable(&UNK_007d6e10,&UNK_009aa360);
  puRam0000000000aed430 = puVar1;
  return;
}



/* Entry: 000bec24; end: 000bec63;  */

void FUN_000bec24(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6e10;
  _swift_getWitnessTable(&UNK_007d6e10,&UNK_009aa360);
  puRam0000000000aed430 = puVar1;
  return;
}



/* Entry: 000bec64; end: 000bec87;  */

void FUN_000bec64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000bec88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000bec88; end: 000becc7;  */

void FUN_000bec88(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6e80;
  _swift_getWitnessTable(&UNK_007d6e80,&UNK_009aa3f0);
  puRam0000000000aed438 = puVar1;
  return;
}



/* Entry: 000becc8; end: 000becdb;  */

void FUN_000becc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0xbe804)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000ba174();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000becdc; end: 000bed0b;  */

void FUN_000becdc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000bed0c; end: 000bed0f;  */

void FUN_000bed0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6ee8;
  _swift_getWitnessTable(&UNK_007d6ee8,&UNK_009aa3f0);
  puRam0000000000aed440 = puVar1;
  return;
}



/* Entry: 000bed10; end: 000bed4f;  */

void FUN_000bed10(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6ee8;
  _swift_getWitnessTable(&UNK_007d6ee8,&UNK_009aa3f0);
  puRam0000000000aed440 = puVar1;
  return;
}



/* Entry: 000bed50; end: 000bedef;  */

int FUN_000bed50(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 000bedf0; end: 000bee43;  */

void FUN_000bedf0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  FUN_00023358(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000bee44; end: 000beedf;  */

undefined8 * FUN_000bee44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  func_0x00023304(uVar1,uVar4);
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar1 = param_2[8];
    func_0x00023304(uVar1,uVar2);
    param_1[8] = uVar1;
    param_1[9] = uVar2;
  }
  else {
    uVar1 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 000beee0; end: 000bf023;  */

undefined8 * FUN_000beee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  func_0x00023304(uVar2,uVar4);
  uVar3 = param_1[4];
  uVar1 = param_1[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  FUN_00023358(uVar3,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    if ((ulong)param_2[9] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      uVar2 = param_2[8];
      uVar4 = param_2[9];
      func_0x00023304(uVar2,uVar4);
      uVar3 = param_1[8];
      uVar1 = param_1[9];
      param_1[8] = uVar2;
      param_1[9] = uVar4;
      FUN_00023358(uVar3,uVar1);
    }
    else {
      FUN_000bf024(param_1 + 6);
      uVar4 = param_2[6];
      uVar3 = param_2[9];
      uVar2 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      param_1[9] = uVar3;
      param_1[8] = uVar2;
    }
  }
  else if ((ulong)param_2[9] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    func_0x00023304(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  return param_1;
}



/* Entry: 000bf024; end: 000bf04f;  */

long FUN_000bf024(long param_1)

{
  FUN_00023358(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 000bf050; end: 000bf06b;  */

void FUN_000bf050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Entry: 000bf06c; end: 000bf10b;  */

undefined8 * FUN_000bf06c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  FUN_00023358(uVar2,uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      FUN_00023358(uVar2);
      return param_1;
    }
    FUN_000bf024(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar4 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar4;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 000bf10c; end: 000bf1b7;  */

int FUN_000bf10c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000bf1b8; end: 000bf1e3;  */

long FUN_000bf1b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000bf1e4; end: 000bf1ef;  */

void FUN_000bf1e4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000bf1f0; end: 000bf297;  */

undefined8 * FUN_000bf1f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00023304(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 000bf298; end: 000bf2cf;  */

undefined8 * FUN_000bf298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 000bf2d0; end: 000bf383;  */

int FUN_000bf2d0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000bf384; end: 000bf3c3;  */

void FUN_000bf384(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000bf3c4; end: 000bf43b;  */

undefined8 * FUN_000bf3c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  uVar1 = param_2[6];
  uVar5 = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  func_0x00023304(uVar1,uVar5);
  param_1[6] = uVar1;
  param_1[7] = uVar5;
  return param_1;
}



/* Entry: 000bf43c; end: 000bf4f3;  */

undefined8 * FUN_000bf43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  FUN_00023358(uVar1,uVar3);
  return param_1;
}



/* Entry: 000bf4f4; end: 000bf567;  */

undefined8 * FUN_000bf4f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  uVar1 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 000bf568; end: 000bf613;  */

int FUN_000bf568(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000bf614; end: 000bf63f;  */

void FUN_000bf614(undefined8 *param_1)

{
  FUN_00023358(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1[2]);
  return;
}



/* Entry: 000bf640; end: 000bf6eb;  */

undefined8 * FUN_000bf640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 000bf6ec; end: 000bf733;  */

undefined8 * FUN_000bf6ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 000bf734; end: 000bf7cb;  */

int FUN_000bf734(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000bf7cc; end: 000bf847;  */

undefined1  [16]
FUN_000bf7cc(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            ulong param_10)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  auVar1._8_8_ = param_10;
  auVar1._0_8_ = param_9;
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  FUN_00023358(param_5,param_6);
  if (0xe < param_10 >> 0x3c) {
    auVar4._8_8_ = param_8;
    auVar4._0_8_ = param_7;
    return auVar4;
  }
  uVar3 = (uint)(param_10 >> 0x3e);
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      return auVar1;
    }
    _swift_release(param_9);
  }
  uVar2 = param_10 & 0x3fffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  auVar6._8_8_ = param_10;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 000bf848; end: 000bf987;  */

void FUN_000bf848(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d6e54;
  _swift_getWitnessTable(&DAT_007d6e54,&UNK_009aa3f0);
  puRam0000000000aed690 = puVar1;
  return;
}



/* Entry: 000bf988; end: 000bf99b;  */

long FUN_000bf988(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000bf99c; end: 000bf9df; +[SCFlipperDeprecatedSingleton sharedInstance] */

void FUN_000bf99c(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0xb64a38,auStack_38,0,0);
  _swift_unknownObjectRetain(uRam0000000000b64a38);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000bf9e0; end: 000bfa3f; +[SCFlipperDeprecatedSingleton setSharedInstance:] */

void FUN_000bf9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0xb64a38,auStack_48,1,0);
  uVar1 = uRam0000000000b64a38;
  uRam0000000000b64a38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 000bfa40; end: 000bfa7b; -[SCFlipperDeprecatedSingleton init] */

void FUN_000bfa40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000bfa7c; end: 000bfaaf;  */

void FUN_000bfa7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000bfab0; end: 000bfab3; -[SCFlipperDeprecatedSingleton .cxx_destruct] */

void FUN_000bfab0(void)

{
  return;
}



/* Entry: 000bfab4; end: 000bfad3;  */

void FUN_000bfab4(void)

{
  _objc_opt_self(&PTR_PTR_00acae00);
  return;
}



/* Entry: 000bfad4; end: 000bfae7;  */

bool FUN_000bfad4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000bfae8; end: 000bfbbf;  */

void FUN_000bfae8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000bfbc0; end: 000bfbe3;  */

void FUN_000bfbc0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000bfbe4; end: 000bfc23;  */

void FUN_000bfbe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d71e0;
  _swift_getWitnessTable(&UNK_007d71e0,&UNK_009aa540);
  puRam0000000000aed6f8 = puVar1;
  return;
}



/* Entry: 000bfc24; end: 000bfc33;  */

undefined1  [16] FUN_000bfc24(void)

{
  return ZEXT816(0x9aa540);
}



/* Entry: 000bfc34; end: 000bfc53; -[_TtC9SCFlipper17SCFlipperServices flipper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfc34(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_00aed700));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000bfc54; end: 000bfc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfc54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00aed700) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000bfca0; end: 000bfcbf;  */

void FUN_000bfca0(void)

{
  _objc_opt_self(&PTR_PTR_00acaeb0);
  return;
}



/* Entry: 000bfcc0; end: 000bfd17; -[_TtC9SCFlipper17SCFlipperServices initWithFlipper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_00aed700) = param_3;
  lVar2 = param_1;
  FUN_000bfca0();
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 000bfd18; end: 000bfd73; -[_TtC9SCFlipper17SCFlipperServices init] */

void FUN_000bfd18(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCFlipper.SCFlipperServices",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbfd44);
  (*pcVar1)();
}



/* Entry: 000bfd74; end: 000bfd83; -[_TtC9SCFlipper17SCFlipperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(param_1 + _DAT_00aed700));
  return;
}



/* Entry: 000bfd84; end: 000bff43;  */

/* WARNING: Removing unreachable block (ram,0x000c00ac) */

undefined1  [16] FUN_000bfd84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long alStack_b0 [8];
  undefined auStack_70 [16];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar8 = puVar4 + -extraout_x12;
  puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_opt_self();
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = (undefined *)0x0;
  puVar2 = puVar7;
  func_0x0077bb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puStack_60;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puStack_60;
    _objc_retain();
    puVar4 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar3);
    _swift_willThrow();
    _swift_errorRelease(puVar4);
    puVar9 = puVar4;
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,puVar2);
    _objc_retain(puVar7);
    _objc_release(puVar2);
    (**(code **)(lVar12 + 0x20))(puVar8,puVar4,lVar1);
    __s10Foundation3URLV22appendingPathComponentyACSSF
              (param_1,0x6964656d61726150,0xe900000000000063);
    (**(code **)(lVar12 + 8))(puVar8,lVar1);
    puVar3 = puVar8;
    puVar9 = puVar2;
  }
  uVar6 = (ulong)(puVar2 == (undefined *)0x0);
  uVar5 = param_1;
  (**(code **)(lVar12 + 0x38))(param_1,uVar6,1,lVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    *(undefined **)(puVar8 + -0x40) = puVar7;
    *(undefined **)(puVar8 + -0x38) = puVar9;
    *(long *)(puVar8 + -0x30) = lVar1;
    *(undefined **)(puVar8 + -0x28) = puVar4;
    *(undefined **)(puVar8 + -0x20) = puVar3;
    *(undefined8 *)(puVar8 + -0x18) = param_1;
    *(undefined1 **)(puVar8 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar8 + -8) = FUN_000bff44;
    lVar1 = 0xae6dd0;
    func_0x000115a8(0xae6dd0,&UNK_007ce690);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar8 + (-0x40 - extraout_x8_00);
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar10 = *(long *)(lVar1 + -8);
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
    lVar12 = (long)puVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    FUN_000bfd84(puVar8);
    puVar7 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,lVar1);
    if ((int)puVar7 == 1) {
      func_0x0002f32c(puVar8);
      puVar8 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar12 - extraout_x12_00,puVar8,lVar1);
      __sSS7cStringSSSPys4Int8VG_tcfC();
      puVar7 = puVar8;
      __s10Foundation3URLV22appendingPathComponentyACSSF(lVar12);
      _swift_bridgeObjectRelease(puVar8);
      __s10Foundation3URLV4pathSSvg();
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar12,lVar1);
      (*pcVar11)(lVar12 - extraout_x12_00,lVar1);
    }
    auVar14._8_8_ = puVar7;
    auVar14._0_8_ = puVar8;
    return auVar14;
  }
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = uVar5;
  return auVar13;
}



/* Entry: 000bff44; end: 000c00af;  */

/* WARNING: Removing unreachable block (ram,0x000c00ac) */

undefined1  [16] FUN_000bff44(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_000bfd84(puVar2);
  puVar3 = puVar2;
  (**(code **)(lVar5 + 0x30))(puVar2,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0002f32c(puVar2);
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4 - extraout_x12,puVar2,lVar1);
    __sSS7cStringSSSPys4Int8VG_tcfC();
    puVar3 = puVar2;
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar4);
    _swift_bridgeObjectRelease(puVar2);
    __s10Foundation3URLV4pathSSvg();
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(lVar4,lVar1);
    (*pcVar6)(lVar4 - extraout_x12,lVar1);
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 000c00b0; end: 000c014f;  */

undefined * FUN_000c00b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00738dbc();
  if (param_1 == 0) {
    FUN_000bff44();
    if (param_2 == 0) {
      return (undefined *)0x0;
    }
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_opt_self(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar2 = puVar1;
  func_0x007833a0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}


