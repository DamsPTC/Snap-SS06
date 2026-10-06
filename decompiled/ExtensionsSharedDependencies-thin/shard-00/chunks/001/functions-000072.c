/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0016b028; end: 0016b0e7;  */

void FUN_0016b028(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_00186b5c();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined **)(lVar2 + 0x70) = puVar1;
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *(undefined1 *)(lVar2 + 0x80) = 3;
  lRam0000000000af08b8 = lVar2;
  return;
}



/* Entry: 0016b0e8; end: 0016b0ef;  */

undefined8 FUN_0016b0e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x20,auStack_68,0,0);
  uVar1 = *(ulong *)(param_3 + 0x20);
  uVar6 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar6;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_3 + 0x28,auStack_c8,0,0);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(ulong *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  uStack_90 = *(undefined8 *)(param_3 + 0x48);
  uVar8 = *(ulong *)(param_3 + 0x60);
  uVar7 = *(undefined8 *)(param_3 + 0x58);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  uVar6 = *(ulong *)(param_3 + 0x40);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar3,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x001869f8(uVar5,uVar7,uVar8,uVar2);
  FUN_000e1a94();
  if ((uVar6 & 1) == 0) {
LAB_0016b268:
    func_0x00191ff4(&uStack_b0,0xaefe50,&UNK_007dafc0);
  }
  else {
    if (uVar8 != 0) {
      func_0x00023304(uVar5,uVar7);
      uVar6 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar7,uVar8,uVar2);
      if ((uVar6 & 1) == 0) goto LAB_0016b268;
    }
    func_0x0014be00();
    uVar6 = uVar1;
    FUN_000f846c();
    func_0x00191ff4(&uStack_b0,0xaefe50,&UNK_007dafc0);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 0016b0f0; end: 0016b29f;  */

undefined8 FUN_0016b0f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar6 = uVar1;
  _swift_bridgeObjectRetain();
  func_0x0014c8fc();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar6;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_c8,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(ulong *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(ulong *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return 1;
  }
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_88 = uVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar3,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x001869f8(uVar5,uVar7,uVar8,uVar2);
  FUN_000e1a94();
  if ((uVar6 & 1) == 0) {
LAB_0016b268:
    func_0x00191ff4(&uStack_b0,0xaefe50,&UNK_007dafc0);
  }
  else {
    if (uVar8 != 0) {
      func_0x00023304(uVar5,uVar7);
      uVar6 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar7,uVar8,uVar2);
      if ((uVar6 & 1) == 0) goto LAB_0016b268;
    }
    func_0x0014be00();
    uVar6 = uVar1;
    FUN_000f846c();
    func_0x00191ff4(&uStack_b0,0xaefe50,&UNK_007dafc0);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 0016b2a0; end: 0016b2a3;  */

uint FUN_0016b2a0(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
LAB_0016eca8:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00023304(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0016eca8;
    }
    uVar4 = *unaff_x20;
    func_0x0014be00(uVar4);
    uVar5 = uVar4;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 0016b2a4; end: 0016b2d3;  */

void FUN_0016b2a4(void)

{
  FUN_0016b2d4();
  return;
}



/* Entry: 0016b2d4; end: 0016b39f;  */

void FUN_0016b2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,code *param_6,code *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    (*param_4)(0);
    _swift_allocObject();
    (*param_6)();
    _swift_release(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  (*param_7)(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 0016b3a0; end: 0016b55f;  */

/* WARNING: Removing unreachable block (ram,0x0016b494) */
/* WARNING: Removing unreachable block (ram,0x0016b55c) */
/* WARNING: Removing unreachable block (ram,0x0016b514) */
/* WARNING: Removing unreachable block (ram,0x0016b4c8) */

void FUN_0016b3a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x158);
          lVar1 = param_1 + 0x10;
LAB_0016b538:
          (*pcVar3)(lVar1,param_3,param_4);
          _swift_endAccess(auStack_78);
        }
        else if (lVar1 == 2) {
          FUN_0016b560(param_2,param_1,param_3,param_4,0x189960,&UNK_009b1fd0);
        }
        else if (lVar1 == 3) {
          FUN_0016d24c(param_2,param_1,param_3,param_4,FUN_00188034,&UNK_009b2790);
        }
      }
      else if (lVar1 == 4) {
        FUN_0016b600(param_2,param_1,param_3,param_4);
      }
      else {
        if (lVar1 == 5) {
          _swift_beginAccess(param_1 + 0x78,auStack_78,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x160);
          lVar1 = param_1 + 0x78;
          goto LAB_0016b538;
        }
        if (lVar1 == 6) {
          FUN_0016b694(param_2,param_1,param_3,param_4);
        }
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0016b560; end: 0016b5ff;  */

void FUN_0016b560(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x20;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  (*param_5)();
  (*pcVar2)(param_2 + 0x20,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 0016b600; end: 0016b693;  */

void FUN_0016b600(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x00189824();
  (*pcVar2)(param_2 + 0x70,&UNK_009b1f48,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0016b694; end: 0016b727;  */

void FUN_0016b694(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x001924f0();
  (*pcVar2)(param_2 + 0x80,&UNK_009b1780,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0016b728; end: 0016b743;  */

void FUN_0016b728(void)

{
  FUN_0016b744();
  return;
}



/* Entry: 0016b744; end: 0016b7af;  */

void FUN_0016b744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    FUN_0013ad2c(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 0016b7b0; end: 0016ba83;  */

void FUN_0016b7b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_238 [72];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d0,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_0019e548();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_138,0,0);
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  lStack_120 = *(long *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  if (lStack_120 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = *(undefined8 *)(param_1 + 0x28);
    __ss6HasherV8_combineyySuF(3);
    uStack_1c8 = param_2[5];
    uStack_1d0 = param_2[4];
    uStack_1b8 = param_2[7];
    uStack_1c0 = param_2[6];
    uStack_1b0 = param_2[8];
    uStack_1e8 = param_2[1];
    uStack_1f0 = *param_2;
    uStack_1d8 = param_2[3];
    uStack_1e0 = param_2[2];
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_160 = uStack_e0;
    uStack_198 = uStack_118;
    lStack_1a0 = lStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    FUN_00186e00(&lStack_1a0,auStack_238);
    FUN_00178314(&uStack_1f0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    func_0x00191ff4(&lStack_120,0xaefe50,&UNK_007dafc0);
    param_2[5] = uStack_1c8;
    param_2[4] = uStack_1d0;
    param_2[7] = uStack_1b8;
    param_2[6] = uStack_1c0;
    param_2[8] = uStack_1b0;
    param_2[1] = uStack_1e8;
    *param_2 = uStack_1f0;
    param_2[3] = uStack_1d8;
    param_2[2] = uStack_1e0;
  }
  _swift_beginAccess(param_1 + 0x70,&lStack_1a0,0,0);
  lVar3 = *(long *)(param_1 + 0x70);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_001a9efc();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x78,auStack_238,0,0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar3 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + 0x10));
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  _swift_beginAccess(param_1 + 0x80,auStack_150,0,0);
  cVar2 = *(char *)(param_1 + 0x80);
  if (cVar2 != '\x03') {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(cVar2);
  }
  return;
}



/* Entry: 0016ba84; end: 0016bc43;  */

/* WARNING: Removing unreachable block (ram,0x0016bb24) */

void FUN_0016ba84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_00170e74();
  if (unaff_x21 == 0) {
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00189960();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_0016bc44(param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_1 + 0x70,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x00189824();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x78,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x78);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x100);
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_0016bcf4(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 0016bc44; end: 0016bcf3;  */

void FUN_0016bc44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
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
  
  lVar1 = param_1 + 0x28;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x28);
  if (lStack_a0 != 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_00188034();
    (*pcVar2)(&lStack_a0,3,&UNK_009b2790,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0016bcf4; end: 0016bd8f;  */

void FUN_0016bcf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x80;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x80);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    func_0x001924f0();
    (*pcVar2)(&cStack_31,6,&UNK_009b1780,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0016bd90; end: 0016bd9b;  */

ulong FUN_0016bd90(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar12 = param_3;
    FUN_0016bd9c(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 0016bd9c; end: 0016c1f3;  */

undefined8 FUN_0016bd9c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_3b8 [72];
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
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
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  uVar7 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c0,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    if ((uVar7 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar5) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar1,*(ulong *)(param_2 + 0x10),lVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_f0,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0014ad20(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_1a8,0,0);
  _swift_beginAccess(param_2 + 0x28,auStack_1c0,0,0);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_2 + 0x30);
  uStack_140 = *(undefined8 *)(param_2 + 0x28);
  uStack_128 = *(undefined8 *)(param_2 + 0x40);
  uStack_130 = *(undefined8 *)(param_2 + 0x38);
  uStack_118 = *(undefined8 *)(param_2 + 0x50);
  uStack_120 = *(undefined8 *)(param_2 + 0x48);
  uStack_108 = *(undefined8 *)(param_2 + 0x60);
  uStack_110 = *(undefined8 *)(param_2 + 0x58);
  uStack_100 = *(undefined8 *)(param_2 + 0x68);
  uStack_290 = *(undefined8 *)(param_2 + 0x30);
  lStack_298 = *(long *)(param_2 + 0x28);
  uStack_280 = *(undefined8 *)(param_2 + 0x40);
  uStack_288 = *(undefined8 *)(param_2 + 0x38);
  uStack_270 = *(undefined8 *)(param_2 + 0x50);
  uStack_278 = *(undefined8 *)(param_2 + 0x48);
  uStack_260 = *(undefined8 *)(param_2 + 0x60);
  uStack_268 = *(undefined8 *)(param_2 + 0x58);
  uStack_258 = *(undefined8 *)(param_2 + 0x68);
  lStack_208 = lStack_298;
  uStack_200 = uStack_290;
  uStack_1f8 = uStack_288;
  uStack_1f0 = uStack_280;
  uStack_1e8 = uStack_278;
  uStack_1e0 = uStack_270;
  uStack_1d8 = uStack_268;
  uStack_1d0 = uStack_260;
  uStack_1c8 = uStack_258;
  lStack_190 = lStack_250;
  uStack_188 = uStack_248;
  uStack_180 = uStack_240;
  uStack_178 = uStack_238;
  uStack_170 = uStack_230;
  uStack_168 = uStack_228;
  uStack_160 = uStack_220;
  uStack_158 = uStack_218;
  uStack_150 = uStack_210;
  if (lStack_250 == 0) {
    if (lStack_298 != 0) goto LAB_0016bff8;
    uStack_2c8 = *(undefined8 *)(param_1 + 0x40);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x38);
    uStack_2b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x48);
    uStack_2a8 = *(undefined8 *)(param_1 + 0x60);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x58);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x68);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x30);
    lStack_2e0 = *(long *)(param_1 + 0x28);
    func_0x00187028(&lStack_190,&uStack_90,0xaefe50,&UNK_007dafc0);
    func_0x00187028(&uStack_140,&uStack_90,0xaefe50,&UNK_007dafc0);
    func_0x00191ff4(&lStack_2e0,0xaefe50,&UNK_007dafc0);
  }
  else {
    if (lStack_298 == 0) {
LAB_0016bff8:
      lStack_2e0 = lStack_250;
      uStack_2d8 = uStack_248;
      uStack_2d0 = uStack_240;
      uStack_2c8 = uStack_238;
      uStack_2c0 = uStack_230;
      uStack_2b8 = uStack_228;
      uStack_2b0 = uStack_220;
      uStack_2a8 = uStack_218;
      uStack_2a0 = uStack_210;
      func_0x00187028(&lStack_190,&uStack_90,0xaefe50,&UNK_007dafc0);
      func_0x00187028(&uStack_140,&uStack_90,0xaefe50,&UNK_007dafc0);
      func_0x00191ff4(&lStack_2e0,0xaf08a8,&UNK_007dafc8);
      return 0;
    }
    uStack_358 = *(undefined8 *)(param_2 + 0x40);
    uStack_360 = *(undefined8 *)(param_2 + 0x38);
    uStack_348 = *(undefined8 *)(param_2 + 0x50);
    uStack_350 = *(undefined8 *)(param_2 + 0x48);
    uStack_338 = *(undefined8 *)(param_2 + 0x60);
    uStack_340 = *(undefined8 *)(param_2 + 0x58);
    uStack_330 = *(undefined8 *)(param_2 + 0x68);
    uStack_368 = *(undefined8 *)(param_2 + 0x30);
    lStack_370 = *(long *)(param_2 + 0x28);
    uStack_88 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    lStack_2e0 = lStack_370;
    uStack_2d8 = uStack_368;
    uStack_2d0 = uStack_360;
    uStack_2c8 = uStack_358;
    uStack_2c0 = uStack_350;
    uStack_2b8 = uStack_348;
    uStack_2b0 = uStack_340;
    uStack_2a8 = uStack_338;
    uStack_2a0 = uStack_330;
    func_0x00187028(&lStack_190,auStack_3b8,0xaefe50,&UNK_007dafc0);
    func_0x00187028(&uStack_140,auStack_3b8,0xaefe50,&UNK_007dafc0);
    puVar4 = &uStack_90;
    func_0x00185edc(puVar4,&lStack_2e0);
    func_0x00191ff4(&lStack_370,0xaefe50,&UNK_007dafc0);
    func_0x00191ff4(&lStack_250,0xaefe50,&UNK_007dafc0);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x70,&lStack_250,0,0);
  uVar6 = *(ulong *)(param_1 + 0x70);
  _swift_beginAccess(param_2 + 0x70,&lStack_370,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0014b200(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x78,auStack_3b8,0,0);
    uVar7 = *(ulong *)(param_1 + 0x78);
    _swift_beginAccess(param_2 + 0x78,auStack_2f8,0,0);
    FUN_000aa78c(uVar7,*(undefined8 *)(param_2 + 0x78));
    if ((uVar7 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x80,auStack_310,0,0);
      cVar2 = *(char *)(param_1 + 0x80);
      _swift_beginAccess(param_2 + 0x80,auStack_328,0,0);
      cVar3 = *(char *)(param_2 + 0x80);
      if (cVar2 == '\x03') {
        if (cVar3 != '\x03') {
          return 0;
        }
      }
      else {
        if (cVar3 == '\x03') {
          return 0;
        }
        if (cVar2 != cVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 0016c1f4; end: 0016c21b;  */

/* WARNING: Removing unreachable block (ram,0x0017fe34) */

void FUN_0016c1f4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0016b7b0(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017feac;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017fe3c;
  }
  else {
    if (uVar2 != 2) goto LAB_0017fe3c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017feac:
    if (lVar3 == lVar4) goto LAB_0017fe3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_0017fe3c:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016c21c; end: 0016c273;  */

void FUN_0016c21c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  uVar1 = *param_5;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)();
  return;
}



/* Entry: 0016c274; end: 0016c2ab;  */

undefined1  [16] FUN_0016c274(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b9280;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 0016c2ac; end: 0016c2e3;  */

void FUN_0016c2ac(void)

{
  FUN_0016b2a4();
  return;
}



/* Entry: 0016c2e4; end: 0016c383;  */

void FUN_0016c2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e00 != -1) {
    _swift_once(0xaf0e00,FUN_0016aec8);
  }
  uVar5 = uRam0000000000b64ea8;
  uVar4 = uRam0000000000b64ea0;
  uVar3 = uRam0000000000b64e98;
  uVar2 = uRam0000000000b64e90;
  uVar1 = uRam0000000000b64e88;
  *param_1 = uRam0000000000b64e80;
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



/* Entry: 0016c384; end: 0016c3af;  */

void FUN_0016c384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2268;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2268,&UNK_007dec48);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016c3b0; end: 0016c42f;  */

/* WARNING: Removing unreachable block (ram,0x0016c3fc) */

void FUN_0016c3b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
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
  FUN_0017f498(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],param_4);
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



/* Entry: 0016c430; end: 0016c447;  */

/* WARNING: Removing unreachable block (ram,0x00180198) */

void FUN_0016c430(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0016b7b0(uVar3,&uStack_e0);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar2);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016c448; end: 0016c4b7;  */

void FUN_0016c448(void)

{
  __sSS6appendyySSF(0xd000000000000012,0x80000000008b9560);
  uRam0000000000b64eb0 = 0xd000000000000023;
  uRam0000000000b64eb8 = 0x80000000008b9280;
  return;
}



/* Entry: 0016c4b8; end: 0016c4f7;  */

undefined8 FUN_0016c4b8(void)

{
  if (lRam0000000000af0e08 != -1) {
    _swift_once(0xaf0e08,FUN_0016c448);
  }
  return 0xb64eb0;
}



/* Entry: 0016c4f8; end: 0016c517;  */

undefined1  [16] FUN_0016c4f8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0e08 != -1) {
    _swift_once(0xaf0e08,FUN_0016c448);
  }
  auVar1._8_8_ = uRam0000000000b64eb8;
  auVar1._0_8_ = uRam0000000000b64eb0;
  _swift_bridgeObjectRetain(uRam0000000000b64eb8);
  return auVar1;
}



/* Entry: 0016c518; end: 0016c5d7;  */

void FUN_0016c518(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df8a9,0xd,&uStack_48,&lStack_40);
  puRam0000000000b64ec8 = puStack_38;
  lRam0000000000b64ec0 = lStack_40;
  puRam0000000000b64ed8 = puStack_28;
  puRam0000000000b64ed0 = puStack_30;
  puRam0000000000b64ee8 = puStack_18;
  puRam0000000000b64ee0 = puStack_20;
  return;
}



/* Entry: 0016c5d8; end: 0016c677;  */

void FUN_0016c5d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e10 != -1) {
    _swift_once(0xaf0e10,FUN_0016c518);
  }
  uVar5 = uRam0000000000b64ee8;
  uVar4 = uRam0000000000b64ee0;
  uVar3 = uRam0000000000b64ed8;
  uVar2 = uRam0000000000b64ed0;
  uVar1 = uRam0000000000b64ec8;
  *param_1 = uRam0000000000b64ec0;
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



/* Entry: 0016c678; end: 0016c70f;  */

void FUN_0016c678(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_0016c6cc:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0016c6e8;
  pcVar3 = *(code **)(param_3 + 0x50);
  lVar1 = unaff_x20 + 0x10;
  goto LAB_0016c6b4;
code_r0x0016c6e8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x50);
    lVar1 = unaff_x20 + 0x18;
LAB_0016c6b4:
    (*pcVar3)(lVar1,param_2,param_3);
  }
  goto LAB_0016c6cc;
}



/* Entry: 0016c710; end: 0016c7bf;  */

void FUN_0016c710(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 ulong param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((param_4 & 0xff00000000) != 0x100000000) {
    (**(code **)(param_7 + 0x18))(param_4,1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    if ((param_5 & 0xff00000000) != 0x100000000) {
      (**(code **)(param_7 + 0x18))(param_5,2,param_6,param_7);
    }
    FUN_0013ad2c(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 0016c7c0; end: 0016c823;  */

void FUN_0016c7c0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014d5bc(auStack_78,param_1,param_2,param_3 & 0xffffffffff,param_4 & 0xffffffffff);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016c824; end: 0016c857;  */

undefined1  [16] FUN_0016c824(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0e08 != -1) {
    _swift_once(0xaf0e08,FUN_0016c448);
  }
  auVar1._8_8_ = uRam0000000000b64eb8;
  auVar1._0_8_ = uRam0000000000b64eb0;
  _swift_bridgeObjectRetain(uRam0000000000b64eb8);
  return auVar1;
}



/* Entry: 0016c858; end: 0016c8af;  */

void FUN_0016c858(void)

{
  func_0x0016c874();
  return;
}



/* Entry: 0016c8b0; end: 0016c94f;  */

void FUN_0016c8b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e10 != -1) {
    _swift_once(0xaf0e10,FUN_0016c518);
  }
  uVar5 = uRam0000000000b64ee8;
  uVar4 = uRam0000000000b64ee0;
  uVar3 = uRam0000000000b64ed8;
  uVar2 = uRam0000000000b64ed0;
  uVar1 = uRam0000000000b64ec8;
  *param_1 = uRam0000000000b64ec0;
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



/* Entry: 0016c950; end: 0016c963;  */

void FUN_0016c950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2260;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2260,&UNK_007dec40);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016c964; end: 0016c997;  */

void FUN_0016c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 0016c998; end: 0016ca07;  */

void FUN_0016c998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  FUN_0014d5bc(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016ca08; end: 0016ca37;  */

void FUN_0016ca08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_0014d5bc(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint5 *)(unaff_x20 + 2),
               (ulong)*(uint5 *)(unaff_x20 + 3));
  return;
}



/* Entry: 0016ca38; end: 0016caa3;  */

void FUN_0016ca38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_0014d5bc(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016caa4; end: 0016cafb;  */

uint FUN_0016caa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_00183174(uVar1,param_1[1],(ulong)*(uint5 *)(param_1 + 2),(ulong)*(uint5 *)(param_1 + 3),
               *param_2,param_2[1],(ulong)*(uint5 *)(param_2 + 2),(ulong)*(uint5 *)(param_2 + 3));
  return (uint)uVar1 & 1;
}



/* Entry: 0016cafc; end: 0016cb23;  */

undefined * FUN_0016cafc(void)

{
  return &UNK_009afb70;
}



/* Entry: 0016cb24; end: 0016cbe3;  */

void FUN_0016cb24(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df890,0x18,&uStack_48,&lStack_40);
  puRam0000000000b64ef8 = puStack_38;
  lRam0000000000b64ef0 = lStack_40;
  puRam0000000000b64f08 = puStack_28;
  puRam0000000000b64f00 = puStack_30;
  puRam0000000000b64f18 = puStack_18;
  puRam0000000000b64f10 = puStack_20;
  return;
}



/* Entry: 0016cbe4; end: 0016cc83;  */

void FUN_0016cbe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e18 != -1) {
    _swift_once(0xaf0e18,FUN_0016cb24);
  }
  uVar5 = uRam0000000000b64f18;
  uVar4 = uRam0000000000b64f10;
  uVar3 = uRam0000000000b64f08;
  uVar2 = uRam0000000000b64f00;
  uVar1 = uRam0000000000b64ef8;
  *param_1 = uRam0000000000b64ef0;
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



/* Entry: 0016cc84; end: 0016ce93;  */

void FUN_0016cc84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar5 = (undefined4 *)(unaff_x20 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar6 = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  FUN_001162f0(&uStack_1d0);
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_180;
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_167,uStack_168);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_15f;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_160,uStack_167);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_1a0;
  _swift_beginAccess(param_1 + 0x10,auStack_1e8,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar6,auStack_200,1,0);
  *puVar6 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_218,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0x24);
  _swift_beginAccess(puVar5,auStack_230,1,0);
  *puVar5 = uVar3;
  *(undefined1 *)(unaff_x20 + 0x24) = uVar4;
  _swift_beginAccess(param_1 + 0x28,auStack_248,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_df = *(undefined8 *)(param_1 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  _swift_bridgeObjectRetain(uVar2);
  func_0x00187028(&uStack_150,&uStack_d0,0xaefe48,&UNK_007d9c20);
  _swift_release(param_1);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_260,1,0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
  uStack_5f = *(undefined8 *)(unaff_x20 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_df;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_e0,uStack_e7);
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_e7,uStack_e8);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_110;
  func_0x00191ff4(&uStack_d0,0xaefe48,&UNK_007d9c20);
  return;
}



/* Entry: 0016ce94; end: 0016cecf;  */

void FUN_0016ce94(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00191ff4(unaff_x20 + 0x28,0xaefe48,&UNK_007d9c20);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0016ced0; end: 0016d04b;  */

void FUN_0016ced0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_1f0 [128];
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_e8,0,0);
  uStack_c8 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(ulong *)(param_3 + 0x28);
  uVar6 = *(ulong *)(param_3 + 0x40);
  uStack_c0 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x50);
  uStack_b0 = *(undefined8 *)(param_3 + 0x48);
  uVar7 = *(ulong *)(param_3 + 0x60);
  uVar5 = *(undefined8 *)(param_3 + 0x58);
  uStack_88 = *(undefined8 *)(param_3 + 0x70);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  uStack_78 = *(undefined8 *)(param_3 + 0x80);
  uStack_80 = *(undefined8 *)(param_3 + 0x78);
  uStack_70 = *(undefined8 *)(param_3 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_5f = *(undefined8 *)(param_3 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  iVar1 = (int)&uStack_d0;
  uStack_d0 = uVar2;
  uStack_b8 = uVar6;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  FUN_00186e80();
  if (iVar1 == 1) {
    return;
  }
  uStack_128 = uStack_88;
  uStack_130 = uStack_90;
  uStack_118 = uStack_78;
  uStack_120 = uStack_80;
  uStack_108 = uStack_68;
  uStack_110 = uStack_70;
  uStack_ff = uStack_5f;
  uStack_107 = uStack_67;
  uStack_100 = uStack_60;
  uStack_168 = uStack_c8;
  uStack_170 = uStack_d0;
  uStack_158 = uStack_b8;
  uStack_160 = uStack_c0;
  uStack_148 = uStack_a8;
  uStack_150 = uStack_b0;
  uStack_138 = uStack_98;
  uStack_140 = uStack_a0;
  FUN_00186e98(&uStack_170,auStack_1f0);
  FUN_000e1a94();
  if ((uVar6 & 1) == 0) {
LAB_0016d014:
    func_0x00191ff4(&uStack_d0,0xaefe48,&UNK_007d9c20);
  }
  else {
    if (uVar7 != 0) {
      func_0x00023304(uVar4,uVar5);
      uVar6 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar4,uVar5,uVar7,uVar3);
      if ((uVar6 & 1) == 0) goto LAB_0016d014;
    }
    func_0x0014be00();
    FUN_000f846c();
    func_0x00191ff4(&uStack_d0,0xaefe48,&UNK_007d9c20);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}



/* Entry: 0016d04c; end: 0016d0eb;  */

uint FUN_0016d04c(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
LAB_0016d0d4:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00023304(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0016d0d4;
    }
    uVar4 = *unaff_x20;
    func_0x0014be00(uVar4);
    uVar5 = uVar4;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 0016d0ec; end: 0016d11b;  */

void FUN_0016d0ec(void)

{
  FUN_0017f128();
  return;
}



/* Entry: 0016d11c; end: 0016d24b;  */

/* WARNING: Removing unreachable block (ram,0x0016d248) */

void FUN_0016d11c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        FUN_0016d24c(param_2,param_1,param_3,param_4,FUN_00188098,&UNK_009b2828);
      }
      else {
        if (lVar1 == 2) {
          _swift_beginAccess(param_1 + 0x20,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x50);
          lVar1 = param_1 + 0x20;
        }
        else {
          if (lVar1 != 1) goto LAB_0016d1ac;
          _swift_beginAccess(param_1 + 0x10,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x158);
          lVar1 = param_1 + 0x10;
        }
        (*pcVar3)(lVar1,param_3,param_4);
        _swift_endAccess(auStack_68);
      }
LAB_0016d1ac:
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0016d24c; end: 0016d2eb;  */

void FUN_0016d24c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x28;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x28,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 0016d2ec; end: 0016d307;  */

void FUN_0016d2ec(void)

{
  FUN_0016b744();
  return;
}



/* Entry: 0016d308; end: 0016d51b;  */

void FUN_0016d308(long param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_370 [128];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e8,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar2);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_100,0,0);
  if (*(char *)(param_1 + 0x24) != '\x01') {
    iVar1 = *(int *)(param_1 + 0x20);
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar1);
  }
  _swift_beginAccess(param_1 + 0x28,auStack_218,0,0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x88);
  uStack_198 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_18f = *(undefined8 *)(param_1 + 0x99);
  uStack_197 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x30);
  uStack_200 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x50);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x58);
  iVar1 = (int)&uStack_200;
  uStack_180 = uStack_200;
  uStack_178 = uStack_1f8;
  uStack_170 = uStack_1f0;
  uStack_168 = uStack_1e8;
  uStack_160 = uStack_1e0;
  uStack_158 = uStack_1d8;
  uStack_150 = uStack_1d0;
  uStack_148 = uStack_1c8;
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_117 = uStack_197;
  uStack_110 = uStack_190;
  uStack_10f = uStack_18f;
  FUN_00186e80();
  if (iVar1 != 1) {
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    __ss6HasherV8_combineyySuF(3);
    uStack_2c8 = param_2[5];
    uStack_2d0 = param_2[4];
    uStack_2b8 = param_2[7];
    uStack_2c0 = param_2[6];
    uStack_2b0 = param_2[8];
    uStack_2e8 = param_2[1];
    uStack_2f0 = *param_2;
    uStack_2d8 = param_2[3];
    uStack_2e0 = param_2[2];
    uStack_258 = uStack_1b8;
    uStack_260 = uStack_1c0;
    uStack_248 = uStack_1a8;
    uStack_250 = uStack_1b0;
    uStack_238 = uStack_198;
    uStack_240 = uStack_1a0;
    uStack_22f = uStack_18f;
    uStack_237 = uStack_197;
    uStack_230 = uStack_190;
    uStack_298 = uStack_1f8;
    uStack_2a0 = uStack_200;
    uStack_288 = uStack_1e8;
    uStack_290 = uStack_1f0;
    uStack_278 = uStack_1d8;
    uStack_280 = uStack_1e0;
    uStack_268 = uStack_1c8;
    uStack_270 = uStack_1d0;
    FUN_00186e98(&uStack_2a0,auStack_370);
    FUN_00178d84(&uStack_2f0);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x00191ff4(&uStack_200,0xaefe48,&UNK_007d9c20);
    param_2[5] = uStack_2c8;
    param_2[4] = uStack_2d0;
    param_2[7] = uStack_2b8;
    param_2[6] = uStack_2c0;
    param_2[8] = uStack_2b0;
    param_2[1] = uStack_2e8;
    *param_2 = uStack_2f0;
    param_2[3] = uStack_2d8;
    param_2[2] = uStack_2e0;
  }
  return;
}



/* Entry: 0016d51c; end: 0016d57f;  */

void FUN_0016d51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_00170e74();
  if (unaff_x21 == 0) {
    FUN_0016d580(param_1,param_2,param_3,param_4);
    FUN_0016d608(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 0016d580; end: 0016d607;  */

void FUN_0016d580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_58,0,0);
  if (*(char *)(param_1 + 0x24) != '\x01') {
    (**(code **)(param_4 + 0x18))(*(undefined4 *)(param_1 + 0x20),2,param_3,param_4);
  }
  return;
}



/* Entry: 0016d608; end: 0016d71f;  */

void FUN_0016d608(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x28,auStack_168,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_df = *(undefined8 *)(param_1 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = &uStack_150;
  uStack_d0 = uStack_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  uStack_98 = uStack_118;
  uStack_90 = uStack_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  uStack_67 = uStack_e7;
  uStack_60 = uStack_e0;
  uStack_5f = uStack_df;
  FUN_00186e80();
  if ((int)puVar1 != 1) {
    uStack_1a8 = uStack_88;
    uStack_1b0 = uStack_90;
    uStack_198 = uStack_78;
    uStack_1a0 = uStack_80;
    uStack_188 = uStack_68;
    uStack_190 = uStack_70;
    uStack_17f = uStack_5f;
    uStack_187 = uStack_67;
    uStack_180 = uStack_60;
    uStack_1e8 = uStack_c8;
    uStack_1f0 = uStack_d0;
    uStack_1d8 = uStack_b8;
    uStack_1e0 = uStack_c0;
    uStack_1c8 = uStack_a8;
    uStack_1d0 = uStack_b0;
    uStack_1b8 = uStack_98;
    uStack_1c0 = uStack_a0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_00188098();
    (*pcVar2)(&uStack_1f0,3,&UNK_009b2828,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0016d720; end: 0016d72b;  */

ulong FUN_0016d720(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar12 = param_3;
    FUN_0016d72c(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 0016d72c; end: 0016db47;  */

undefined8 FUN_0016d72c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_5e0 [128];
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined8 uStack_4ef;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
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
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined8 uStack_36f;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
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
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e8,0,0);
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_100,0,0);
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    if ((uVar4 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar6) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar1,*(ulong *)(param_2 + 0x10),lVar6,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
  iVar3 = *(int *)(param_1 + 0x20);
  cVar2 = *(char *)(param_1 + 0x24);
  _swift_beginAccess(param_2 + 0x20,auStack_130,0,0);
  if (cVar2 == '\x01') {
    if (*(char *)(param_2 + 0x24) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x24) == '\x01') {
      return 0;
    }
    if (iVar3 != *(int *)(param_2 + 0x20)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_248,0,0);
  _swift_beginAccess(param_2 + 0x28,auStack_260,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0x70);
  uStack_320 = *(undefined8 *)(param_1 + 0x68);
  uStack_308 = *(undefined8 *)(param_1 + 0x80);
  uStack_310 = *(undefined8 *)(param_1 + 0x78);
  uStack_300 = *(undefined8 *)(param_1 + 0x88);
  uStack_1c8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_1bf = *(undefined8 *)(param_1 + 0x99);
  uStack_1c7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_358 = *(undefined8 *)(param_1 + 0x30);
  uStack_360 = *(undefined8 *)(param_1 + 0x28);
  uStack_348 = *(undefined8 *)(param_1 + 0x40);
  uStack_350 = *(undefined8 *)(param_1 + 0x38);
  uStack_338 = *(undefined8 *)(param_1 + 0x50);
  uStack_340 = *(undefined8 *)(param_1 + 0x48);
  uStack_328 = *(undefined8 *)(param_1 + 0x60);
  uStack_330 = *(undefined8 *)(param_1 + 0x58);
  uStack_2d8 = *(undefined8 *)(param_2 + 0x30);
  uStack_2e0 = *(undefined8 *)(param_2 + 0x28);
  uStack_2ef = (undefined7)uStack_1bf;
  uStack_2e8 = (undefined1)((ulong)uStack_1bf >> 0x38);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x60);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x58);
  uStack_2b8 = *(undefined8 *)(param_2 + 0x50);
  uStack_2c0 = *(undefined8 *)(param_2 + 0x48);
  uStack_2c8 = *(undefined8 *)(param_2 + 0x40);
  uStack_2d0 = *(undefined8 *)(param_2 + 0x38);
  uStack_26f = *(undefined8 *)(param_2 + 0x99);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x91) >> 0x38);
  uStack_280 = *(undefined8 *)(param_2 + 0x88);
  uStack_148 = (undefined1)*(undefined8 *)(param_2 + 0x90);
  uStack_147 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x90) >> 8);
  uStack_288 = *(undefined8 *)(param_2 + 0x80);
  uStack_290 = *(undefined8 *)(param_2 + 0x78);
  uStack_298 = *(undefined8 *)(param_2 + 0x70);
  uStack_2a0 = *(undefined8 *)(param_2 + 0x68);
  uStack_277 = (undefined7)*(undefined8 *)(param_2 + 0x91);
  iVar3 = (int)&uStack_360;
  uStack_2f8 = uStack_1c8;
  uStack_2f7 = uStack_1c7;
  uStack_2f0 = uStack_1c0;
  uStack_278 = uStack_148;
  uStack_270 = uStack_140;
  uStack_230 = uStack_360;
  uStack_228 = uStack_358;
  uStack_220 = uStack_350;
  uStack_218 = uStack_348;
  uStack_210 = uStack_340;
  uStack_208 = uStack_338;
  uStack_200 = uStack_330;
  uStack_1f8 = uStack_328;
  uStack_1f0 = uStack_320;
  uStack_1e8 = uStack_318;
  uStack_1e0 = uStack_310;
  uStack_1d8 = uStack_308;
  uStack_1d0 = uStack_300;
  uStack_1b0 = uStack_2e0;
  uStack_1a8 = uStack_2d8;
  uStack_1a0 = uStack_2d0;
  uStack_198 = uStack_2c8;
  uStack_190 = uStack_2c0;
  uStack_188 = uStack_2b8;
  uStack_180 = uStack_2b0;
  uStack_178 = uStack_2a8;
  uStack_170 = uStack_2a0;
  uStack_168 = uStack_298;
  uStack_160 = uStack_290;
  uStack_158 = uStack_288;
  uStack_150 = uStack_280;
  uStack_13f = uStack_26f;
  FUN_00186e80();
  if (iVar3 == 1) {
    iVar3 = (int)&uStack_2e0;
    FUN_00186e80();
    if (iVar3 == 1) {
      uStack_418 = uStack_318;
      uStack_420 = uStack_320;
      uStack_408 = uStack_308;
      uStack_410 = uStack_310;
      uStack_3f8 = uStack_2f8;
      uStack_400 = uStack_300;
      uStack_3ef = uStack_2ef;
      uStack_3e8 = uStack_2e8;
      uStack_3f7 = uStack_2f7;
      uStack_3f0 = uStack_2f0;
      uStack_458 = uStack_358;
      uStack_460 = uStack_360;
      uStack_448 = uStack_348;
      uStack_450 = uStack_350;
      uStack_438 = uStack_338;
      uStack_440 = uStack_340;
      uStack_428 = uStack_328;
      uStack_430 = uStack_330;
      func_0x00187028(&uStack_230,&uStack_d0,0xaefe48,&UNK_007d9c20);
      func_0x00187028(&uStack_1b0,&uStack_d0,0xaefe48,&UNK_007d9c20);
      func_0x00191ff4(&uStack_460,0xaefe48,&UNK_007d9c20);
      return 1;
    }
  }
  else {
    uStack_498 = uStack_318;
    uStack_4a0 = uStack_320;
    uStack_488 = uStack_308;
    uStack_490 = uStack_310;
    uStack_478 = uStack_2f8;
    uStack_480 = uStack_300;
    uStack_46f = CONCAT17(uStack_2e8,uStack_2ef);
    uStack_477 = uStack_2f7;
    uStack_470 = uStack_2f0;
    uStack_4d8 = uStack_358;
    uStack_4e0 = uStack_360;
    uStack_4c8 = uStack_348;
    uStack_4d0 = uStack_350;
    uStack_4b8 = uStack_338;
    uStack_4c0 = uStack_340;
    uStack_4a8 = uStack_328;
    uStack_4b0 = uStack_330;
    iVar3 = (int)&uStack_2e0;
    FUN_00186e80();
    if (iVar3 != 1) {
      uStack_518 = uStack_298;
      uStack_520 = uStack_2a0;
      uStack_508 = uStack_288;
      uStack_510 = uStack_290;
      uStack_4f8 = uStack_278;
      uStack_500 = uStack_280;
      uStack_4ef = uStack_26f;
      uStack_4f7 = uStack_277;
      uStack_4f0 = uStack_270;
      uStack_558 = uStack_2d8;
      uStack_560 = uStack_2e0;
      uStack_548 = uStack_2c8;
      uStack_550 = uStack_2d0;
      uStack_538 = uStack_2b8;
      uStack_540 = uStack_2c0;
      uStack_528 = uStack_2a8;
      uStack_530 = uStack_2b0;
      uStack_3ef = (undefined7)uStack_26f;
      uStack_3e8 = (undefined1)((ulong)uStack_26f >> 0x38);
      uStack_3f0 = uStack_270;
      uStack_408 = uStack_288;
      uStack_410 = uStack_290;
      uStack_3f8 = uStack_278;
      uStack_3f7 = uStack_277;
      uStack_400 = uStack_280;
      uStack_428 = uStack_2a8;
      uStack_430 = uStack_2b0;
      uStack_418 = uStack_298;
      uStack_420 = uStack_2a0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_88 = uStack_498;
      uStack_90 = uStack_4a0;
      uStack_78 = uStack_488;
      uStack_80 = uStack_490;
      uStack_68 = uStack_478;
      uStack_70 = uStack_480;
      uStack_5f = uStack_46f;
      uStack_67 = uStack_477;
      uStack_60 = uStack_470;
      uStack_c8 = uStack_4d8;
      uStack_d0 = uStack_4e0;
      uStack_b8 = uStack_4c8;
      uStack_c0 = uStack_4d0;
      uStack_a8 = uStack_4b8;
      uStack_b0 = uStack_4c0;
      uStack_98 = uStack_4a8;
      uStack_a0 = uStack_4b0;
      func_0x00187028(&uStack_230,auStack_5e0,0xaefe48,&UNK_007d9c20);
      func_0x00187028(&uStack_1b0,auStack_5e0,0xaefe48,&UNK_007d9c20);
      puVar5 = &uStack_d0;
      func_0x00184624(puVar5,&uStack_460);
      func_0x00191ff4(&uStack_560,0xaefe48,&UNK_007d9c20);
      func_0x00191ff4(&uStack_360,0xaefe48,&UNK_007d9c20);
      if (((ulong)puVar5 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_380 = uStack_280;
  uStack_36f = uStack_26f;
  uStack_377 = uStack_277;
  uStack_370 = uStack_270;
  uStack_3d8 = uStack_2d8;
  uStack_3e0 = uStack_2e0;
  uStack_3c8 = uStack_2c8;
  uStack_3d0 = uStack_2d0;
  uStack_3b8 = uStack_2b8;
  uStack_3c0 = uStack_2c0;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  uStack_418 = uStack_318;
  uStack_420 = uStack_320;
  uStack_408 = uStack_308;
  uStack_410 = uStack_310;
  uStack_3f8 = uStack_2f8;
  uStack_3f7 = uStack_2f7;
  uStack_400 = uStack_300;
  uStack_3e8 = uStack_2e8;
  uStack_3f0 = uStack_2f0;
  uStack_3ef = uStack_2ef;
  uStack_458 = uStack_358;
  uStack_460 = uStack_360;
  uStack_448 = uStack_348;
  uStack_450 = uStack_350;
  uStack_438 = uStack_338;
  uStack_440 = uStack_340;
  uStack_428 = uStack_328;
  uStack_430 = uStack_330;
  func_0x00187028(&uStack_230,&uStack_d0,0xaefe48,&UNK_007d9c20);
  func_0x00187028(&uStack_1b0,&uStack_d0,0xaefe48,&UNK_007d9c20);
  func_0x00191ff4(&uStack_460,0xaf08c0,&UNK_007dafd8);
  return 0;
}



/* Entry: 0016db48; end: 0016db9f;  */

/* WARNING: Removing unreachable block (ram,0x0017fe34) */

void FUN_0016db48(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0016d308(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017feac;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017fe3c;
  }
  else {
    if (uVar2 != 2) goto LAB_0017fe3c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017feac:
    if (lVar3 == lVar4) goto LAB_0017fe3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_0017fe3c:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016dba0; end: 0016dbd7;  */

void FUN_0016dba0(void)

{
  FUN_0016d0ec();
  return;
}



/* Entry: 0016dbd8; end: 0016dc77;  */

void FUN_0016dbd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e18 != -1) {
    _swift_once(0xaf0e18,FUN_0016cb24);
  }
  uVar5 = uRam0000000000b64f18;
  uVar4 = uRam0000000000b64f10;
  uVar3 = uRam0000000000b64f08;
  uVar2 = uRam0000000000b64f00;
  uVar1 = uRam0000000000b64ef8;
  *param_1 = uRam0000000000b64ef0;
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



/* Entry: 0016dc78; end: 0016dce3;  */

void FUN_0016dc78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2258;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2258,&UNK_007dec38);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016dce4; end: 0016dda3;  */

void FUN_0016dce4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df860,0x23,&uStack_48,&lStack_40);
  puRam0000000000b64f28 = puStack_38;
  lRam0000000000b64f20 = lStack_40;
  puRam0000000000b64f38 = puStack_28;
  puRam0000000000b64f30 = puStack_30;
  puRam0000000000b64f48 = puStack_18;
  puRam0000000000b64f40 = puStack_20;
  return;
}



/* Entry: 0016dda4; end: 0016de43;  */

void FUN_0016dda4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e20 != -1) {
    _swift_once(0xaf0e20,FUN_0016dce4);
  }
  uVar5 = uRam0000000000b64f48;
  uVar4 = uRam0000000000b64f40;
  uVar3 = uRam0000000000b64f38;
  uVar2 = uRam0000000000b64f30;
  uVar1 = uRam0000000000b64f28;
  *param_1 = uRam0000000000b64f20;
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



/* Entry: 0016de44; end: 0016dfa3;  */

undefined8 FUN_0016de44(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_60;
  
  uVar1 = *unaff_x20;
  func_0x0014bc9c();
  uVar6 = uVar1;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[5];
  uVar5 = unaff_x20[10];
  uVar3 = unaff_x20[9];
  uVar8 = unaff_x20[0xc];
  uVar7 = unaff_x20[0xb];
  uVar6 = unaff_x20[8];
  uVar4 = unaff_x20[7];
  uStack_60 = (undefined1)unaff_x20[0xd];
  if (uVar1 == 0) {
    return 1;
  }
  uStack_a0 = uVar1;
  uStack_98 = uVar2;
  uStack_90 = uVar4;
  uStack_88 = uVar6;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar8;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar2,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x001869f8(uVar3,uVar5,uVar7,uVar8);
  FUN_000e1a94();
  if ((uVar6 & 1) == 0) {
LAB_0016df6c:
    func_0x00191ff4(&uStack_a0,0xaefe40,&UNK_007dafe0);
  }
  else {
    if (uVar7 != 0) {
      func_0x00023304(uVar3,uVar5);
      uVar6 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar3,uVar5,uVar7,uVar8);
      if ((uVar6 & 1) == 0) goto LAB_0016df6c;
    }
    func_0x0014be00();
    uVar6 = uVar1;
    FUN_000f846c();
    func_0x00191ff4(&uStack_a0,0xaefe40,&UNK_007dafe0);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 0016dfa4; end: 0016e043;  */

uint FUN_0016dfa4(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
LAB_0016e02c:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[6];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[7];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[5];
      func_0x00023304(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0016e02c;
    }
    uVar4 = *unaff_x20;
    func_0x0014be00(uVar4);
    uVar5 = uVar4;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 0016e044; end: 0016e153;  */

/* WARNING: Removing unreachable block (ram,0x0016e10c) */
/* WARNING: Removing unreachable block (ram,0x0016e150) */

void FUN_0016e044(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_001880fc();
LAB_0016e13c:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x00187250();
          goto LAB_0016e13c;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 0016e154; end: 0016e2d7;  */

void FUN_0016e154(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_188 [72];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar4,lVar3);
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019dec0(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lStack_e8 = unaff_x20[6];
  lStack_f0 = unaff_x20[5];
  lStack_d8 = unaff_x20[8];
  lStack_e0 = unaff_x20[7];
  lStack_c8 = unaff_x20[10];
  lStack_d0 = unaff_x20[9];
  lStack_b8 = unaff_x20[0xc];
  lStack_c0 = unaff_x20[0xb];
  uStack_b0 = (undefined1)unaff_x20[0xd];
  if (lStack_f0 != 0) {
    lStack_88 = unaff_x20[8];
    lStack_90 = unaff_x20[7];
    lStack_78 = unaff_x20[10];
    lStack_80 = unaff_x20[9];
    lStack_68 = unaff_x20[0xc];
    lStack_70 = unaff_x20[0xb];
    uStack_60 = (undefined1)unaff_x20[0xd];
    lStack_98 = unaff_x20[6];
    lStack_a0 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    lStack_128 = unaff_x20[8];
    lStack_130 = unaff_x20[7];
    lStack_118 = unaff_x20[10];
    lStack_120 = unaff_x20[9];
    lStack_108 = unaff_x20[0xc];
    lStack_110 = unaff_x20[0xb];
    uStack_100 = (undefined1)unaff_x20[0xd];
    lStack_138 = unaff_x20[6];
    lStack_140 = unaff_x20[5];
    func_0x00186ef8(&lStack_140,auStack_188);
    FUN_0014d3f8(param_1);
    func_0x00191ff4(&lStack_f0,0xaefe40,&UNK_007dafe0);
  }
  lVar3 = unaff_x20[1];
  uVar1 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_0016e2b0;
    }
    lVar4 = (long)(int)lVar3;
    lVar3 = lVar3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (lVar4 == lVar3) {
    return;
  }
LAB_0016e2b0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 0016e2d8; end: 0016e3ab;  */

void FUN_0016e2d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar1 = param_1;
  if (unaff_x20[4] != 0) {
    lVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(lVar1,unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187250();
      (*pcVar3)(lVar2,2,&UNK_009b20d8,lVar1,param_2,param_3);
    }
    FUN_0016e3ac();
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 0016e3ac; end: 0016e43b;  */

void FUN_0016e3ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lStack_88 = *(long *)(param_1 + 0x28);
  if (lStack_88 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = (undefined1)*(undefined8 *)(param_1 + 0x58);
    uStack_4f = *(undefined8 *)(param_1 + 0x61);
    uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0x59);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x59) >> 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_001880fc();
    (*pcVar1)(&lStack_88,3,&UNK_009b28c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0016e43c; end: 0016e44b;  */

uint FUN_0016e43c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_428 [72];
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 uStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  
  lVar5 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar5 == 0) goto LAB_00183b4c;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_00183b4c:
    lVar7 = *param_1;
    lVar6 = *param_2;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      if (lVar5 != 0 && lVar7 != lVar6) {
        puVar8 = (undefined8 *)(lVar7 + 0x20);
        puVar9 = (undefined8 *)(lVar6 + 0x20);
        do {
          uStack_178 = puVar8[1];
          uStack_180 = *puVar8;
          uStack_168 = puVar8[3];
          uStack_170 = puVar8[2];
          uStack_158 = puVar8[5];
          uStack_160 = puVar8[4];
          uStack_148 = puVar8[7];
          uStack_150 = puVar8[6];
          uStack_138 = puVar8[9];
          uStack_140 = puVar8[8];
          uStack_128 = puVar8[0xb];
          uStack_130 = puVar8[10];
          uStack_118 = puVar8[0xd];
          uStack_120 = puVar8[0xc];
          uStack_110 = puVar8[0xe];
          uStack_fe = *(undefined8 *)((long)puVar8 + 0x82);
          uStack_100 = (undefined2)((ulong)*(undefined8 *)((long)puVar8 + 0x7a) >> 0x30);
          uStack_108 = (undefined2)puVar8[0xf];
          uStack_106 = (undefined6)((ulong)puVar8[0xf] >> 0x10);
          uStack_e8 = puVar9[1];
          uStack_f0 = *puVar9;
          uStack_d8 = puVar9[3];
          uStack_e0 = puVar9[2];
          uStack_c8 = puVar9[5];
          uStack_d0 = puVar9[4];
          uStack_b8 = puVar9[7];
          uStack_c0 = puVar9[6];
          uStack_a8 = puVar9[9];
          uStack_b0 = puVar9[8];
          uStack_98 = puVar9[0xb];
          uStack_a0 = puVar9[10];
          uStack_88 = puVar9[0xd];
          uStack_90 = puVar9[0xc];
          uStack_80 = puVar9[0xe];
          uStack_6e = *(undefined8 *)((long)puVar9 + 0x82);
          uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x7a) >> 0x30);
          uStack_78 = (undefined2)puVar9[0xf];
          uStack_76 = (undefined6)((ulong)puVar9[0xf] >> 0x10);
          FUN_00192420(&uStack_180,&lStack_300);
          FUN_00192420(&uStack_f0,&lStack_300);
          puVar3 = &uStack_180;
          func_0x00183720(puVar3,&uStack_f0);
          func_0x00192454(&uStack_f0);
          func_0x00192454(&uStack_180);
          if (((ulong)puVar3 & 1) == 0) goto LAB_00183e04;
          puVar9 = puVar9 + 0x12;
          puVar8 = puVar8 + 0x12;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lStack_208 = param_1[8];
      lStack_210 = param_1[7];
      lStack_1f8 = param_1[10];
      lStack_200 = param_1[9];
      lStack_1e8 = param_1[0xc];
      lStack_1f0 = param_1[0xb];
      uStack_1e0 = (undefined1)param_1[0xd];
      lStack_218 = param_1[6];
      lStack_220 = param_1[5];
      lStack_258 = param_2[8];
      lStack_260 = param_2[7];
      lStack_248 = param_2[10];
      lStack_250 = param_2[9];
      lStack_238 = param_2[0xc];
      lStack_240 = param_2[0xb];
      uStack_230 = (undefined1)param_2[0xd];
      lStack_268 = param_2[6];
      lStack_270 = param_2[5];
      lStack_2e8 = param_1[8];
      lStack_2f0 = param_1[7];
      lStack_2d8 = param_1[10];
      lStack_2e0 = param_1[9];
      lStack_2c8 = param_1[0xc];
      lStack_2d0 = param_1[0xb];
      uStack_2c0 = (undefined1)param_1[0xd];
      lStack_2f8 = param_1[6];
      lStack_300 = param_1[5];
      lStack_330 = param_2[8];
      lStack_338 = param_2[7];
      lStack_320 = param_2[10];
      lStack_328 = param_2[9];
      uStack_280 = (undefined1)param_2[0xc];
      uStack_27f = (undefined7)((ulong)param_2[0xc] >> 8);
      uStack_288 = (undefined1)param_2[0xb];
      uStack_287 = (undefined7)((ulong)param_2[0xb] >> 8);
      uStack_278 = (undefined1)param_2[0xd];
      lStack_340 = param_2[6];
      lStack_348 = param_2[5];
      lStack_2b8 = lStack_348;
      lStack_2b0 = lStack_340;
      lStack_2a8 = lStack_338;
      lStack_2a0 = lStack_330;
      lStack_298 = lStack_328;
      lStack_290 = lStack_320;
      if (lStack_300 == 0) {
        if (lStack_348 == 0) {
          lStack_378 = param_1[8];
          lStack_380 = param_1[7];
          lStack_368 = param_1[10];
          lStack_370 = param_1[9];
          lStack_358 = param_1[0xc];
          lStack_360 = param_1[0xb];
          uStack_350 = CONCAT71(uStack_350._1_7_,(char)param_1[0xd]);
          lStack_388 = param_1[6];
          lStack_390 = param_1[5];
          func_0x00187028(&lStack_220,&lStack_1d0,0xaefe40,&UNK_007dafe0);
          func_0x00187028(&lStack_270,&lStack_1d0,0xaefe40,&UNK_007dafe0);
          func_0x00191ff4(&lStack_390,0xaefe40,&UNK_007dafe0);
LAB_00183e94:
          lVar5 = param_1[1];
          FUN_00038814(lVar5,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar5;
          goto LAB_00183e08;
        }
      }
      else if (lStack_348 != 0) {
        lStack_3c8 = param_2[8];
        lStack_3d0 = param_2[7];
        lStack_3b8 = param_2[10];
        lStack_3c0 = param_2[9];
        lStack_3a8 = param_2[0xc];
        lStack_3b0 = param_2[0xb];
        uStack_3a0 = (undefined1)param_2[0xd];
        lStack_3d8 = param_2[6];
        lStack_3e0 = param_2[5];
        uStack_350 = CONCAT71(uStack_350._1_7_,uStack_3a0);
        lStack_1c8 = param_1[6];
        lStack_1d0 = param_1[5];
        lStack_1b8 = param_1[8];
        lStack_1c0 = param_1[7];
        lStack_1a8 = param_1[10];
        lStack_1b0 = param_1[9];
        lStack_198 = param_1[0xc];
        lStack_1a0 = param_1[0xb];
        uStack_190 = (undefined1)param_1[0xd];
        lStack_390 = lStack_3e0;
        lStack_388 = lStack_3d8;
        lStack_380 = lStack_3d0;
        lStack_378 = lStack_3c8;
        lStack_370 = lStack_3c0;
        lStack_368 = lStack_3b8;
        lStack_360 = lStack_3b0;
        lStack_358 = lStack_3a8;
        func_0x00187028(&lStack_220,auStack_428,0xaefe40,&UNK_007dafe0);
        func_0x00187028(&lStack_270,auStack_428,0xaefe40,&UNK_007dafe0);
        plVar4 = &lStack_1d0;
        FUN_0018554c(plVar4,&lStack_390);
        func_0x00191ff4(&lStack_3e0,0xaefe40,&UNK_007dafe0);
        func_0x00191ff4(&lStack_300,0xaefe40,&UNK_007dafe0);
        if (((ulong)plVar4 & 1) != 0) goto LAB_00183e94;
        goto LAB_00183e04;
      }
      uStack_30f = CONCAT17(uStack_278,uStack_27f);
      uStack_317 = uStack_287;
      uStack_310 = uStack_280;
      uStack_350 = CONCAT71(uStack_2bf,uStack_2c0);
      lStack_390 = lStack_300;
      lStack_388 = lStack_2f8;
      lStack_380 = lStack_2f0;
      lStack_378 = lStack_2e8;
      lStack_370 = lStack_2e0;
      lStack_368 = lStack_2d8;
      lStack_360 = lStack_2d0;
      lStack_358 = lStack_2c8;
      uStack_318 = uStack_288;
      func_0x00187028(&lStack_220,&lStack_1d0,0xaefe40,&UNK_007dafe0);
      func_0x00187028(&lStack_270,&lStack_1d0,0xaefe40,&UNK_007dafe0);
      func_0x00191ff4(&lStack_390,0xaf0978,&UNK_007dafe8);
    }
  }
LAB_00183e04:
  uVar1 = 0;
LAB_00183e08:
  return uVar1 & 1;
}



/* Entry: 0016e44c; end: 0016e4df;  */

/* WARNING: Removing unreachable block (ram,0x0016e4a0) */

void FUN_0016e44c(code *param_1)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  (*param_1)(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016e4e0; end: 0016e537;  */

void FUN_0016e4e0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



/* Entry: 0016e538; end: 0016e567;  */

undefined1  [16] FUN_0016e538(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0016e568; end: 0016e59b;  */

void FUN_0016e568(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0016e59c; end: 0016e5af;  */

undefined1  [16] FUN_0016e59c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x16e5ac;
  return auVar1;
}



/* Entry: 0016e5b0; end: 0016e5c3;  */

void FUN_0016e5b0(void)

{
  FUN_0016e044();
  return;
}



/* Entry: 0016e5c4; end: 0016e60b;  */

void FUN_0016e5c4(void)

{
  FUN_0016e2d8();
  return;
}



/* Entry: 0016e60c; end: 0016e6ab;  */

void FUN_0016e60c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e20 != -1) {
    _swift_once(0xaf0e20,FUN_0016dce4);
  }
  uVar5 = uRam0000000000b64f48;
  uVar4 = uRam0000000000b64f40;
  uVar3 = uRam0000000000b64f38;
  uVar2 = uRam0000000000b64f30;
  uVar1 = uRam0000000000b64f28;
  *param_1 = uRam0000000000b64f20;
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



/* Entry: 0016e6ac; end: 0016e6bf;  */

void FUN_0016e6ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2250;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2250,&UNK_007dec30);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016e6c0; end: 0016e6f3;  */

void FUN_0016e6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 0016e6f4; end: 0016e8f7;  */

/* WARNING: Removing unreachable block (ram,0x0016e768) */

void FUN_0016e6f4(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_f0,0);
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  FUN_0016e154(&uStack_140);
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_b0 = uStack_100;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016e8f8; end: 0016e95f;  */

uint FUN_0016e8f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined1)param_1[0xb];
  uStack_8f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined1)param_2[0xb];
  uStack_27 = (undefined7)((ulong)param_2[0xb] >> 8);
  FUN_0016e43c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 0016e960; end: 0016e987;  */

undefined * FUN_0016e960(void)

{
  return &UNK_009afb90;
}



/* Entry: 0016e988; end: 0016ea47;  */

void FUN_0016e988(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df810,0x4d,&uStack_48,&lStack_40);
  puRam0000000000b64f58 = puStack_38;
  lRam0000000000b64f50 = lStack_40;
  puRam0000000000b64f68 = puStack_28;
  puRam0000000000b64f60 = puStack_30;
  puRam0000000000b64f78 = puStack_18;
  puRam0000000000b64f70 = puStack_20;
  return;
}



/* Entry: 0016ea48; end: 0016eae7;  */

void FUN_0016ea48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e30 != -1) {
    _swift_once(0xaf0e30,FUN_0016e988);
  }
  uVar5 = uRam0000000000b64f78;
  uVar4 = uRam0000000000b64f70;
  uVar3 = uRam0000000000b64f68;
  uVar2 = uRam0000000000b64f60;
  uVar1 = uRam0000000000b64f58;
  *param_1 = uRam0000000000b64f50;
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



/* Entry: 0016eae8; end: 0016ec1f;  */

undefined8 FUN_0016eae8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(ulong *)(unaff_x20 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  uVar8 = *(ulong *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  if (uVar2 == 0) {
LAB_0016ebe0:
    uVar1 = 1;
  }
  else {
    uStack_a0 = uVar2;
    uStack_98 = uVar4;
    uStack_90 = uVar6;
    uStack_88 = uVar8;
    uStack_78 = uVar3;
    uStack_70 = uVar5;
    uStack_68 = uVar7;
    uStack_60 = uVar1;
    _swift_bridgeObjectRetain(uVar2);
    func_0x00023304(uVar4,uVar6);
    _swift_bridgeObjectRetain(uVar8);
    func_0x001869f8(uVar3,uVar5,uVar7,uVar1);
    FUN_000e1a94();
    if ((uVar8 & 1) == 0) {
LAB_0016ebe8:
      func_0x00191ff4(&uStack_a0,0xaefe38,&UNK_007d9c10);
    }
    else {
      if (uVar7 != 0) {
        func_0x00023304(uVar3,uVar5);
        uVar8 = uVar7;
        _swift_bridgeObjectRetain();
        FUN_000e1a94();
        FUN_00116294(uVar3,uVar5,uVar7,uVar1);
        if ((uVar8 & 1) == 0) goto LAB_0016ebe8;
      }
      func_0x0014be00();
      uVar8 = uVar2;
      FUN_000f846c();
      func_0x00191ff4(&uStack_a0,0xaefe38,&UNK_007d9c10);
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar8 & 1) != 0) goto LAB_0016ebe0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 0016ec20; end: 0016ecbf;  */

uint FUN_0016ec20(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
LAB_0016eca8:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00023304(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0016eca8;
    }
    uVar4 = *unaff_x20;
    func_0x0014be00(uVar4);
    uVar5 = uVar4;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 0016ecc0; end: 0016edeb;  */

/* WARNING: Removing unreachable block (ram,0x0016edd0) */

void FUN_0016ecc0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x10;
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 3) goto LAB_0016ed38;
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_0016ed28:
        (*pcVar3)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 != 4) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x88;
          }
          else {
            if (lVar1 != 6) goto LAB_0016ed38;
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x89;
          }
          goto LAB_0016ed28;
        }
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_00188264();
        (*pcVar3)(unaff_x20 + 0x40,&UNK_009b2950,lVar1,param_2,param_3);
      }
LAB_0016ed38:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0016edec; end: 0016f00b;  */

void FUN_0016edec(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_1d8 [72];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[5];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[7];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lStack_e8 = unaff_x20[9];
  lStack_f0 = unaff_x20[8];
  lStack_d8 = unaff_x20[0xb];
  lStack_e0 = unaff_x20[10];
  lStack_c8 = unaff_x20[0xd];
  lStack_d0 = unaff_x20[0xc];
  lStack_b8 = unaff_x20[0xf];
  lStack_c0 = unaff_x20[0xe];
  lStack_b0 = unaff_x20[0x10];
  if (lStack_f0 != 0) {
    lStack_78 = unaff_x20[0xd];
    lStack_80 = unaff_x20[0xc];
    lStack_68 = unaff_x20[0xf];
    lStack_70 = unaff_x20[0xe];
    lStack_60 = unaff_x20[0x10];
    lStack_98 = unaff_x20[9];
    lStack_a0 = unaff_x20[8];
    lStack_88 = unaff_x20[0xb];
    lStack_90 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(4);
    uStack_168 = param_1[5];
    uStack_170 = param_1[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_150 = param_1[8];
    uStack_188 = param_1[1];
    uStack_190 = *param_1;
    uStack_178 = param_1[3];
    uStack_180 = param_1[2];
    lStack_118 = unaff_x20[0xd];
    lStack_120 = unaff_x20[0xc];
    lStack_108 = unaff_x20[0xf];
    lStack_110 = unaff_x20[0xe];
    lStack_100 = unaff_x20[0x10];
    lStack_138 = unaff_x20[9];
    lStack_140 = unaff_x20[8];
    lStack_128 = unaff_x20[0xb];
    lStack_130 = unaff_x20[10];
    func_0x00186f58(&lStack_140,auStack_1d8);
    FUN_0017a3c8(&uStack_190);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x00191ff4(&lStack_f0,0xaefe38,&UNK_007d9c10);
    param_1[5] = uStack_168;
    param_1[4] = uStack_170;
    param_1[7] = uStack_158;
    param_1[6] = uStack_160;
    param_1[8] = uStack_150;
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[3] = uStack_178;
    param_1[2] = uStack_180;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x11);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x89);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_0016efe4;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_0016efe4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 0016f00c; end: 0016f127;  */

void FUN_0016f00c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[5] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[4],unaff_x20[5],2,param_2,param_3);
    }
    if (unaff_x20[7] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[6],unaff_x20[7],3,param_2,param_3);
    }
    FUN_0016f128();
    if (*(byte *)(unaff_x20 + 0x11) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x11) & 1,5,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x89) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x89) & 1,6,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 0016f128; end: 0016f1b7;  */

void FUN_0016f128(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_88 = *(long *)(param_1 + 0x40);
  if (lStack_88 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188264();
    (*pcVar1)(&lStack_88,4,&UNK_009b2950,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0016f1b8; end: 0016f1bb;  */

uint FUN_0016f1b8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_2e8 [72];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar6 = param_1[3];
  lVar5 = param_2[3];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
LAB_0018378c:
      lVar6 = param_1[5];
      lVar5 = param_2[5];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_001837e4:
          lVar6 = param_1[7];
          lVar5 = param_2[7];
          if (lVar6 == 0) {
            if (lVar5 == 0) {
LAB_0018383c:
              uStack_1a8 = param_1[0xb];
              uStack_1b0 = param_1[10];
              uStack_b8 = param_1[0xd];
              uStack_c0 = param_1[0xc];
              uStack_198 = param_1[0xd];
              uStack_1a0 = param_1[0xc];
              uStack_a8 = param_1[0xf];
              uStack_b0 = param_1[0xe];
              uStack_d8 = param_1[9];
              uStack_e0 = param_1[8];
              uStack_c8 = param_1[0xb];
              uStack_d0 = param_1[10];
              uStack_1b8 = param_1[9];
              lStack_1c0 = param_1[8];
              uStack_1f0 = param_2[0xb];
              uStack_1f8 = param_2[10];
              uStack_108 = param_2[0xd];
              uStack_110 = param_2[0xc];
              uStack_1e0 = param_2[0xd];
              uStack_1e8 = param_2[0xc];
              uStack_f8 = param_2[0xf];
              uStack_100 = param_2[0xe];
              uStack_128 = param_2[9];
              uStack_130 = param_2[8];
              uStack_118 = param_2[0xb];
              uStack_120 = param_2[10];
              uStack_200 = param_2[9];
              lStack_208 = param_2[8];
              uStack_188 = param_1[0xf];
              uStack_190 = param_1[0xe];
              uStack_1d0 = param_2[0xf];
              uStack_1d8 = param_2[0xe];
              uStack_a0 = param_1[0x10];
              uStack_f0 = param_2[0x10];
              uStack_180 = param_1[0x10];
              uStack_1c8 = param_2[0x10];
              lStack_178 = lStack_208;
              uStack_170 = uStack_200;
              uStack_168 = uStack_1f8;
              uStack_160 = uStack_1f0;
              uStack_158 = uStack_1e8;
              uStack_150 = uStack_1e0;
              uStack_148 = uStack_1d8;
              uStack_140 = uStack_1d0;
              uStack_138 = uStack_1c8;
              if (lStack_1c0 == 0) {
                if (lStack_208 == 0) {
                  uStack_228 = param_1[0xd];
                  uStack_230 = param_1[0xc];
                  uStack_218 = param_1[0xf];
                  uStack_220 = param_1[0xe];
                  uStack_210 = param_1[0x10];
                  uStack_248 = param_1[9];
                  lStack_250 = param_1[8];
                  uStack_238 = param_1[0xb];
                  uStack_240 = param_1[10];
                  func_0x00187028(&uStack_e0,&uStack_90,0xaefe38,&UNK_007d9c10);
                  func_0x00187028(&uStack_130,&uStack_90,0xaefe38,&UNK_007d9c10);
                  func_0x00191ff4(&lStack_250,0xaefe38,&UNK_007d9c10);
LAB_00183a7c:
                  bVar1 = *(byte *)(param_2 + 0x11);
                  if (*(byte *)(param_1 + 0x11) == 2) {
                    if (bVar1 != 2) goto LAB_001839f4;
                  }
                  else {
                    uVar2 = 0;
                    if ((bVar1 == 2) || (((*(byte *)(param_1 + 0x11) ^ bVar1) & 1) != 0))
                    goto LAB_001839f8;
                  }
                  bVar1 = *(byte *)((long)param_2 + 0x89);
                  if (*(byte *)((long)param_1 + 0x89) == 2) {
                    if (bVar1 != 2) goto LAB_001839f4;
                  }
                  else {
                    uVar2 = 0;
                    if ((bVar1 == 2) || (((*(byte *)((long)param_1 + 0x89) ^ bVar1) & 1) != 0))
                    goto LAB_001839f8;
                  }
                  uVar4 = *param_1;
                  FUN_00038814(uVar4,param_1[1],*param_2,param_2[1]);
                  uVar2 = (uint)uVar4;
                  goto LAB_001839f8;
                }
              }
              else if (lStack_208 != 0) {
                uStack_278 = param_2[0xd];
                uStack_280 = param_2[0xc];
                uStack_268 = param_2[0xf];
                uStack_270 = param_2[0xe];
                uStack_260 = param_2[0x10];
                uStack_298 = param_2[9];
                lStack_2a0 = param_2[8];
                uStack_288 = param_2[0xb];
                uStack_290 = param_2[10];
                uStack_88 = param_1[9];
                uStack_90 = param_1[8];
                uStack_78 = param_1[0xb];
                uStack_80 = param_1[10];
                uStack_68 = param_1[0xd];
                uStack_70 = param_1[0xc];
                uStack_58 = param_1[0xf];
                uStack_60 = param_1[0xe];
                uStack_50 = param_1[0x10];
                lStack_250 = lStack_2a0;
                uStack_248 = uStack_298;
                uStack_240 = uStack_290;
                uStack_238 = uStack_288;
                uStack_230 = uStack_280;
                uStack_228 = uStack_278;
                uStack_220 = uStack_270;
                uStack_218 = uStack_268;
                uStack_210 = uStack_260;
                func_0x00187028(&uStack_e0,auStack_2e8,0xaefe38,&UNK_007d9c10);
                func_0x00187028(&uStack_130,auStack_2e8,0xaefe38,&UNK_007d9c10);
                puVar3 = &uStack_90;
                func_0x00185a78(puVar3,&lStack_250);
                func_0x00191ff4(&lStack_2a0,0xaefe38,&UNK_007d9c10);
                func_0x00191ff4(&lStack_1c0,0xaefe38,&UNK_007d9c10);
                if (((ulong)puVar3 & 1) != 0) goto LAB_00183a7c;
                goto LAB_001839f4;
              }
              lStack_250 = lStack_1c0;
              uStack_248 = uStack_1b8;
              uStack_240 = uStack_1b0;
              uStack_238 = uStack_1a8;
              uStack_230 = uStack_1a0;
              uStack_228 = uStack_198;
              uStack_220 = uStack_190;
              uStack_218 = uStack_188;
              uStack_210 = uStack_180;
              func_0x00187028(&uStack_e0,&uStack_90,0xaefe38,&UNK_007d9c10);
              func_0x00187028(&uStack_130,&uStack_90,0xaefe38,&UNK_007d9c10);
              func_0x00191ff4(&lStack_250,0xaf0980,&UNK_007daff8);
            }
          }
          else if (lVar5 != 0) {
            uVar7 = param_1[6];
            if (((uVar7 == param_2[6]) && (lVar6 == lVar5)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar7,lVar6,param_2[6],lVar5,0), (uVar7 & 1) != 0)) goto LAB_0018383c;
          }
        }
      }
      else if (lVar5 != 0) {
        uVar7 = param_1[4];
        if (((uVar7 == param_2[4]) && (lVar6 == lVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,lVar6,param_2[4],lVar5,0), (uVar7 & 1) != 0)) goto LAB_001837e4;
      }
    }
  }
  else if (lVar5 != 0) {
    uVar7 = param_1[2];
    if ((uVar7 == param_2[2] && lVar6 == lVar5) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar6,param_2[2],lVar5,0), (uVar7 & 1) != 0)) goto LAB_0018378c;
  }
LAB_001839f4:
  uVar2 = 0;
LAB_001839f8:
  return uVar2 & 1;
}



/* Entry: 0016f1bc; end: 0016f24b;  */

/* WARNING: Removing unreachable block (ram,0x0016f20c) */

void FUN_0016f1bc(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_0016edec(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016f24c; end: 0016f297;  */

void FUN_0016f24c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x202;
  return;
}



/* Entry: 0016f298; end: 0016f2c7;  */

undefined1  [16] FUN_0016f298(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0016f2c8; end: 0016f2fb;  */

void FUN_0016f2c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0016f2fc; end: 0016f30f;  */

undefined8 FUN_0016f2fc(void)

{
  return 0x16f30c;
}


