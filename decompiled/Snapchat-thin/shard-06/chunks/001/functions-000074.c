/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10447ab04; end: 10447acff;  */

long * FUN_10447ab04(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar8 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  lVar4 = *(long *)(lVar10 + 0x40) + 7;
  uVar2 = (uint)uVar11 | *(uint *)(lVar12 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar12 + 0x50) | *(uint *)(lVar10 + 0x50)) & 0x100000) == 0) &&
      (lVar4 + (uVar11 + (lVar9 + 7U & 0xfffffffffffffff8) + 0x11 & (uVar11 ^ 0xffffffffffffffff)) &
      0xfffffffffffffff8) + 0x3c < 0x19) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar8);
    puVar13 = (undefined8 *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + lVar9 + 7 & 0xfffffffffffffff8);
    uVar6 = *puVar5;
    uVar14 = puVar5[1];
    uVar1 = *(undefined1 *)(puVar5 + 2);
    FUN_10447aa0c(uVar6,uVar14,uVar1);
    *puVar13 = uVar6;
    puVar13[1] = uVar14;
    *(undefined1 *)(puVar13 + 2) = uVar1;
    uVar7 = (long)puVar13 + uVar11 + 0x11 & ~uVar11;
    uVar11 = (long)puVar5 + uVar11 + 0x11 & ~uVar11;
    (**(code **)(lVar10 + 0x10))(uVar7,uVar11,lVar3);
    puVar5 = (undefined8 *)(lVar4 + uVar7 & 0xfffffffffffffff8);
    puVar13 = (undefined8 *)(lVar4 + uVar11 & 0xfffffffffffffff8);
    *puVar5 = *puVar13;
    puVar5[1] = puVar13[1];
    puVar5[2] = puVar13[2];
    uVar11 = puVar13[4];
    _swift_bridgeObjectRetain();
    if (uVar11 < 0xffffffff) {
      uVar14 = puVar13[4];
      uVar6 = puVar13[3];
      uVar16 = puVar13[6];
      uVar15 = puVar13[5];
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar13 + 7);
      puVar5[4] = uVar14;
      puVar5[3] = uVar6;
      puVar5[6] = uVar16;
      puVar5[5] = uVar15;
    }
    else {
      puVar5[3] = puVar13[3];
      puVar5[4] = puVar13[4];
      puVar5[5] = puVar13[5];
      uVar6 = puVar13[6];
      puVar5[6] = uVar6;
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(puVar13 + 7);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
    }
  }
  else {
    uVar11 = (ulong)(uVar2 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10447ad00; end: 10447adb7;  */

void FUN_10447ad00(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar3 + 0x40) + 7U & 0xfffffffffffffff8);
  func_0x000101762488(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar3 + -8);
  uVar2 = (long)puVar1 + (ulong)*(byte *)(lVar4 + 0x50) + 0x11 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar2,lVar3);
  uVar2 = *(long *)(lVar4 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar2 + 8));
  if (0xfffffffe < *(ulong *)(uVar2 + 0x20)) {
    _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(uVar2 + 0x30));
    return;
  }
  return;
}



/* Entry: 10447adb8; end: 10447b473;  */

long FUN_10447adb8(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x10))();
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar7 = (undefined8 *)(lVar5 + param_1 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar5 + param_2 & 0xfffffffffffffff8);
  uVar4 = *puVar8;
  uVar9 = puVar8[1];
  uVar1 = *(undefined1 *)(puVar8 + 2);
  FUN_10447aa0c(uVar4,uVar9,uVar1);
  *puVar7 = uVar4;
  puVar7[1] = uVar9;
  *(undefined1 *)(puVar7 + 2) = uVar1;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 0x11 + (long)puVar7 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 0x11 + (long)puVar8 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x10))(uVar3,uVar2,lVar5);
  lVar5 = *(long *)(lVar6 + 0x40) + 7;
  puVar8 = (undefined8 *)(lVar5 + uVar3 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)(lVar5 + uVar2 & 0xfffffffffffffff8);
  *puVar8 = *puVar7;
  puVar8[1] = puVar7[1];
  puVar8[2] = puVar7[2];
  uVar2 = puVar7[4];
  _swift_bridgeObjectRetain();
  if (uVar2 < 0xffffffff) {
    uVar9 = puVar7[4];
    uVar4 = puVar7[3];
    uVar11 = puVar7[6];
    uVar10 = puVar7[5];
    *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar7 + 7);
    puVar8[4] = uVar9;
    puVar8[3] = uVar4;
    puVar8[6] = uVar11;
    puVar8[5] = uVar10;
  }
  else {
    puVar8[3] = puVar7[3];
    puVar8[4] = puVar7[4];
    puVar8[5] = puVar7[5];
    uVar4 = puVar7[6];
    puVar8[6] = uVar4;
    *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar7 + 7);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
  }
  return param_1;
}



/* Entry: 10447b474; end: 10447b5e7;  */

void FUN_10447b474(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(param_4 + 0x10);
  lVar13 = *(long *)(lVar12 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar5 + -8);
  uVar6 = *(uint *)(lVar7 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar10 = *(long *)(lVar13 + 0x40);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar1 = *(long *)(lVar7 + 0x40) + 7;
  lVar2 = (lVar1 + (uVar9 + (lVar10 + 7U & 0xfffffffffffffff8) + 0x11 & (uVar9 ^ 0xffffffffffffffff)
                   ) & 0xfffffffffffffff8) + 0x3c;
  uVar11 = (uint)param_2;
  if (uVar3 < uVar11) {
    _bzero(param_1,lVar2);
    *param_1 = uVar11 + ~uVar3;
    if (uVar3 < param_3) {
      *(undefined1 *)((long)param_1 + lVar2) = 1;
    }
  }
  else {
    if (uVar3 < param_3) {
      *(undefined1 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar11 != 0) {
      if (uVar4 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        lVar5 = lVar12;
        uVar6 = uVar4;
      }
      else {
        param_1 = (int *)(((long)param_1 + lVar10 + 7 & 0xfffffffffffffff8U) + uVar9 + 0x11 & ~uVar9
                         );
        if (uVar6 != uVar3) {
          puVar8 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
          if (-1 < (int)uVar11) {
            puVar8[1] = (ulong)(uVar11 - 1);
            return;
          }
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = (ulong)(uVar11 & 0x7fffffff);
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x00010447b5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar6,lVar5);
      return;
    }
  }
  return;
}



/* Entry: 10447b5e8; end: 10447b6af;  */

void FUN_10447b5e8(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x19) = param_3;
  return;
}



/* Entry: 10447b6b0; end: 10447b90f;  */

undefined1  [16] FUN_10447b6b0(long param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == '\0') {
    uStack_40 = 0x7453746c75736572;
    uStack_38 = 0xed00005f73757461;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    if (param_3 != '\x01') {
      uVar4 = 0xef6c694e73497965;
      uVar2 = 0x4b746e65746e6f63;
                    /* WARNING: Could not recover jumptable at 0x00010447b7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd064bb)[param_1] * 4 + 0x10447b780))
                (0x4b746e65746e6f63,0xef6c694e73497965);
      auVar5._8_8_ = uVar4;
      auVar5._0_8_ = uVar2;
      return auVar5;
    }
    __ss11_StringGutsV4growyySiF(0x1b);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uStack_40 = 0xd000000000000019;
    uStack_38 = 0x800000010f201980;
    __sSS6appendyySSF(param_1,param_2);
  }
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10447b910; end: 10447bb33;  */

void FUN_10447b910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE16errorDescriptionSSSgvg_1103506c0)();
  return;
}



/* Entry: 10447bb34; end: 10447bbcf;  */

undefined8 * FUN_10447bb34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101765ad4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10447bbd0; end: 10447bc13;  */

undefined8 * FUN_10447bbd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010176c22c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10447bc14; end: 10447bceb;  */

int FUN_10447bc14(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10447bcec; end: 10447bdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447bcec(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307d5c0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307d5c8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447bdb4; end: 10447be33; -[_TtC22SCDataFetchingServices23DataPrefetchingResponse init] */

void FUN_10447bdb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDataFetchingServices.DataPrefetchingResponse",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447bde0);
  (*pcVar1)();
}



/* Entry: 10447be34; end: 10447be77;  */

long FUN_10447be34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10447be78; end: 10447bf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10447be78(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  FUN_10447be34(param_1,unaff_x20 + _DAT_11307d5f8);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10447bf58; end: 10447bfb7; -[_TtC22SCDataFetchingServices22SCDataFetchingServices init] */

void FUN_10447bf58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDataFetchingServices.SCDataFetchingServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447bf84);
  (*pcVar1)();
}



/* Entry: 10447bfb8; end: 10447bfc7; -[_TtC22SCDataFetchingServices22SCDataFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447bfb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_11307d5f8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307d5f8));
  return;
}



/* Entry: 10447bfc8; end: 10447c0c3;  */

void FUN_10447bfc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _swift_beginAccess(0x11307d628,&uStack_70,0x20,0);
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  _swift_endAccess(&uStack_70);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,unaff_x20);
    _swift_unknownObjectRelease(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10447c1ec(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0x11307d630;
    func_0x0001000285a8(0x11307d630,&UNK_10dd065e8);
    puVar2 = param_1;
    _swift_dynamicCast(param_1,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10447c0c4; end: 10447c1eb;  */

void FUN_10447c0c4(undefined8 param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  long lStack_60;
  
  func_0x00010176ccac(param_1,auStack_78);
  if (lStack_60 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001000a8868(auStack_78,lStack_60);
    lVar3 = *(long *)(lStack_60 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,lStack_60);
    (**(code **)(lVar3 + 8))(puVar2,lStack_60);
    func_0x0001000834e4(auStack_78);
  }
  _swift_beginAccess(0x11307d628,auStack_78,0x20,0);
  _objc_setAssociatedObject();
  _swift_endAccess(auStack_78);
  _swift_unknownObjectRelease(puVar1);
  FUN_10447c1ec(param_1,0x112dc7840,&UNK_10d9885c0);
  return;
}



/* Entry: 10447c1ec; end: 10447c22b;  */

undefined8 FUN_10447c1ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10447c22c; end: 10447c7df;  */

long FUN_10447c22c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10447c7e0; end: 10447c80f;  */

undefined8 FUN_10447c7e0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_1 = param_2, param_3 != '\x01')) {
    return 0xd;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0c46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaContextType_11260ebc0);
  return param_1;
}



/* Entry: 10447c810; end: 10447c8ab;  */

undefined8 * FUN_10447c810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10447aa0c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10447c8ac; end: 10447c8ef;  */

undefined8 * FUN_10447c8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101762488(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10447c8f0; end: 10447c9a7;  */

int FUN_10447c8f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10447c9a8; end: 10447c9b3; -[SCComposerEncryptionConfig base64Key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447c9a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307d640);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307d640))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10447c9b4; end: 10447c9bf; -[SCComposerEncryptionConfig base64Iv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447c9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307d648);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307d648))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10447c9c0; end: 10447ca07;  */

void FUN_10447c9c0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10447ca08; end: 10447ca17; -[SCComposerEncryptionConfig encryptionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10447ca08(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11307d650);
}



/* Entry: 10447ca18; end: 10447caa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447ca18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d640);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d648);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined4 *)(unaff_x20 + _DAT_11307d650) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447caa4; end: 10447cb43; -[SCComposerEncryptionConfig initWithBase64Key:base64Iv:encryptionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447caa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307d640);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307d648);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined4 *)(param_1 + _DAT_11307d650) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447cb44; end: 10447cbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447cb44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d640);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d648);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined4 *)(unaff_x20 + _DAT_11307d650) = *(undefined4 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447cbb0; end: 10447cbb3; -[SCComposerEncryptionConfig copyWithZone:] */

void FUN_10447cbb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447cbb4; end: 10447cbcf; -[SCComposerEncryptionConfig description] */

void FUN_10447cbb4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447cbd0; end: 10447cc4b; -[SCComposerEncryptionConfig init] */

void FUN_10447cbd0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDataFetchingServicesTypes/ComposerEncryptionConfigWrapper.swift",0x41,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447cc18);
  (*pcVar1)();
}



/* Entry: 10447cc4c; end: 10447cc8b; -[SCComposerEncryptionConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447cc4c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307d640 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307d648 + 8))
  ;
  return;
}



/* Entry: 10447cc8c; end: 10447ccab;  */

void FUN_10447cc8c(void)

{
  _objc_opt_self(&PTR_PTR_1129bd158);
  return;
}



/* Entry: 10447ccac; end: 10447cd57;  */

void FUN_10447ccac(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10447cd58; end: 10447cd97;  */

void FUN_10447cd58(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10447cd98; end: 10447ceff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447cd98(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a0 [8];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11307d680) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_11307d688) = 0;
    _objc_msgSendSuper2(auStack_b0,PTR_s_init_1125d9248);
  }
  else {
    uVar8 = *param_1;
    uVar1 = *(undefined4 *)(param_1 + 4);
    uStack_68 = param_1[3];
    uStack_70 = param_1[2];
    lVar4 = 0;
    FUN_10447cc8c();
    lVar5 = lVar4;
    _objc_allocWithZone();
    puVar2 = (undefined8 *)(lVar5 + _DAT_11307d640);
    puVar2[1] = lVar7;
    *puVar2 = uVar8;
    uVar9 = param_1[2];
    puVar2 = (undefined8 *)(lVar5 + _DAT_11307d648);
    puVar2[1] = param_1[3];
    *puVar2 = uVar9;
    *(undefined4 *)(lVar5 + _DAT_11307d650) = uVar1;
    uStack_60 = uVar8;
    lStack_58 = lVar7;
    func_0x000100402194(&uStack_60,auStack_80);
    func_0x000100402194(&uStack_70,auStack_80);
    plVar6 = &lStack_90;
    lStack_90 = lVar5;
    lStack_88 = lVar4;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11307d680) = 1;
    *(long **)(unaff_x20 + _DAT_11307d688) = plVar6;
    puVar3 = PTR_s_init_1125d9248;
    _objc_retain(plVar6);
    _objc_msgSendSuper2(auStack_a0,puVar3);
    FUN_10447cf00(param_1);
    _objc_release(plVar6);
  }
  return;
}



/* Entry: 10447cf00; end: 10447cf33;  */

undefined8 FUN_10447cf00(undefined8 param_1)

{
  (*(code *)(undefined *)0x10447c49c)();
  return param_1;
}



/* Entry: 10447cf34; end: 10447cf77; -[SCDataEncryptionStrategy description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447cf34(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11307d680) == '\x01') && (*(long *)(param_1 + _DAT_11307d688) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10447cf78);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447cf78; end: 10447d04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447cf78(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_2 + _DAT_11307d680) == '\x01') {
    lVar2 = *(long *)(param_2 + _DAT_11307d688);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d04c);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(lVar2 + _DAT_11307d640);
    uVar3 = ((undefined8 *)(lVar2 + _DAT_11307d640))[1];
    uVar6 = *(undefined8 *)(lVar2 + _DAT_11307d648);
    uVar4 = ((undefined8 *)(lVar2 + _DAT_11307d648))[1];
    uVar7 = *(undefined4 *)(lVar2 + _DAT_11307d650);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar7 = 0;
  }
  _objc_release(param_2);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  param_1[3] = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar7;
  return;
}



/* Entry: 10447d04c; end: 10447d093; -[SCDataEncryptionStrategy init] */

void FUN_10447d04c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDataFetchingServicesTypes/DataEncryptionStrategyWrapper.swift",0x3f,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d094);
  (*pcVar1)();
}



/* Entry: 10447d094; end: 10447d097; -[SCDataEncryptionStrategy copyWithZone:] */

void FUN_10447d094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447d098; end: 10447d0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d098(void)

{
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307d680) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11307d688) = 0;
  _objc_msgSendSuper2(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447d0e4; end: 10447d13b; +[SCDataEncryptionStrategy unencrypted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d0e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11307d680) = 0;
  *(undefined8 *)(lVar1 + _DAT_11307d688) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447d13c; end: 10447d1a7; +[SCDataEncryptionStrategy composer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307d680) = 1;
  *(undefined8 *)(lVar2 + _DAT_11307d688) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447d1a8; end: 10447d1e7; -[SCDataEncryptionStrategy matchUnencrypted:composer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d1a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11307d680) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010447d1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(long *)(param_1 + _DAT_11307d688) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010447d1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d1e8);
  (*pcVar1)();
}



/* Entry: 10447d1e8; end: 10447d21b;  */

void FUN_10447d1e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447d21c; end: 10447d22b; -[SCDataEncryptionStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d688));
  return;
}



/* Entry: 10447d22c; end: 10447d24b;  */

void FUN_10447d22c(void)

{
  _objc_opt_self(&PTR_PTR_1129bd230);
  return;
}



/* Entry: 10447d24c; end: 10447d3b3;  */

int FUN_10447d24c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10447d2c8;
        goto LAB_10447d2ac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10447d2ac:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10447d2c8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10447d3b4; end: 10447d3f3;  */

void FUN_10447d3b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06720;
  _swift_getWitnessTable(&UNK_10dd06720,&UNK_1107770c8);
  puRam000000011307d6b8 = puVar1;
  return;
}



/* Entry: 10447d3f4; end: 10447d49f;  */

void FUN_10447d3f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10447d4a0; end: 10447d4d7;  */

void FUN_10447d4a0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10447d4d8; end: 10447d4fb; -[SCDataSource description] */

void FUN_10447d4d8(void)

{
  FUN_10447d7dc();
  func_0x000101762488();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447d4fc; end: 10447d543; -[SCDataSource init] */

void FUN_10447d4fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDataFetchingServicesTypes/DataSourceWrapper.swift",0x33,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d544);
  (*pcVar1)();
}



/* Entry: 10447d544; end: 10447d547; -[SCDataSource copyWithZone:] */

void FUN_10447d544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447d548; end: 10447d57f; +[SCDataSource simpleWithConfig:] */

void FUN_10447d548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10447d8b8();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447d580; end: 10447d5df; +[SCDataSource dynamicImageWithConfig:contentKey:] */

void FUN_10447d580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10447d95c(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447d5e0; end: 10447d627; +[SCDataSource onDemandWithResource:scale:] */

void FUN_10447d5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  FUN_10447da14(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447d628; end: 10447d6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d628(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307d6c0) == '\0') {
    if (*(long *)(unaff_x20 + _DAT_11307d6c8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d6e0);
      (*pcVar1)();
    }
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_11307d6c0) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11307d6d0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d6dc);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11307d6d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d6e8);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11307d6e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d6e4);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307d6e8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d6ec);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307d6e8));
  }
  return;
}



/* Entry: 10447d6ec; end: 10447d74f; -[SCDataSource matchSimple:dynamicImage:onDemand:] */

void FUN_10447d6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10447d628(FUN_10447dc8c,auStack_40,0x10447dc9c,auStack_60,0x10447dcb0,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10447d750; end: 10447d783;  */

void FUN_10447d750(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447d784; end: 10447d7db; -[SCDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d784(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d6c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d6d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d6d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d6e0));
  return;
}



/* Entry: 10447d7dc; end: 10447d8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10447d7dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11307d6c0) == '\0') {
    lVar2 = *(long *)(param_1 + _DAT_11307d6c8);
    lVar3 = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d8ac);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_11307d6c0) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_11307d6d0);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d8a8);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + _DAT_11307d6d8);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d8b4);
      (*pcVar1)();
    }
    _objc_retain(lVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11307d6e0);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d8b0);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    if (*(char *)(param_1 + _DAT_11307d6e8 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447d8b8);
      (*pcVar1)();
    }
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 10447d8b8; end: 10447d95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d8b8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10447dac4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d6c0) = 0;
  *(long *)(lVar4 + _DAT_11307d6c8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307d6d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d6d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d6e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 10447d95c; end: 10447da13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447d95c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10447dac4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d6c0) = 1;
  *(undefined8 *)(lVar4 + _DAT_11307d6c8) = 0;
  *(long *)(lVar4 + _DAT_11307d6d0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307d6d8) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307d6e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10447da14; end: 10447dac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447da14(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_2;
  FUN_10447dac4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d6c0) = 2;
  *(undefined8 *)(lVar4 + _DAT_11307d6c8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d6d0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d6d8) = 0;
  *(long *)(lVar4 + _DAT_11307d6e0) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d6e8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10447dac4; end: 10447dae3;  */

void FUN_10447dac4(void)

{
  _objc_opt_self(&PTR_PTR_1129bd2f8);
  return;
}



/* Entry: 10447dae4; end: 10447dc4b;  */

int FUN_10447dae4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10447db60;
        goto LAB_10447db44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10447db44:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10447db60:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10447dc4c; end: 10447dc8b;  */

void FUN_10447dc4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd067f4;
  _swift_getWitnessTable(&UNK_10dd067f4,&UNK_1107771b0);
  puRam000000011307d718 = puVar1;
  return;
}



/* Entry: 10447dc8c; end: 10447dcbf;  */

void FUN_10447dc8c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010447dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10447dcc0; end: 10447e15b;  */

long FUN_10447dcc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10447e15c; end: 10447e173;  */

bool FUN_10447e15c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10447e174; end: 10447e1b3;  */

void FUN_10447e174(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd068f0;
  _swift_getWitnessTable(&UNK_10dd068f0,&UNK_1107773c8);
  puRam000000011307d720 = puVar1;
  return;
}



/* Entry: 10447e1b4; end: 10447e25f;  */

void FUN_10447e1b4(void)

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



/* Entry: 10447e260; end: 10447e2af;  */

void FUN_10447e260(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10447e2b0; end: 10447e2ef;  */

void FUN_10447e2b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd069b0;
  _swift_getWitnessTable(&UNK_10dd069b0,&UNK_110777440);
  puRam000000011307d728 = puVar1;
  return;
}



/* Entry: 10447e2f0; end: 10447e39b;  */

void FUN_10447e2f0(void)

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



/* Entry: 10447e39c; end: 10447e3d3;  */

void FUN_10447e39c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10447e3d4; end: 10447e3e3; -[SCDeckTransitionEventData eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10447e3d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307d740);
}



/* Entry: 10447e3e4; end: 10447e3f3; -[SCDeckTransitionEventData appearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d748));
  return;
}



/* Entry: 10447e3f4; end: 10447e403; -[SCDeckTransitionEventData interactionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10447e3f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307d750);
}



/* Entry: 10447e404; end: 10447e413; -[SCDeckTransitionEventData pageInstanceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d758));
  return;
}



/* Entry: 10447e414; end: 10447e4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e414(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11307d730) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11307d738) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307d740) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d748) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307d750) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307d758) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447e4c8; end: 10447e55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e4c8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined4 *)(unaff_x20 + _DAT_11307d730) = *param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11307d738) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + _DAT_11307d740) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(unaff_x20 + _DAT_11307d748) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_11307d750) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(unaff_x20 + _DAT_11307d758) = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447e55c; end: 10447e55f; -[SCDeckTransitionEventData copyWithZone:] */

void FUN_10447e55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447e560; end: 10447e57b; -[SCDeckTransitionEventData description] */

void FUN_10447e560(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447e57c; end: 10447e5f7; -[SCDeckTransitionEventData init] */

void FUN_10447e57c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDeckService/DeckTransitionEventDataWrapper.swift",0x32,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447e5c4);
  (*pcVar1)();
}



/* Entry: 10447e5f8; end: 10447e62f; -[SCDeckTransitionEventData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e5f8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d748));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d758));
  return;
}



/* Entry: 10447e630; end: 10447e64f;  */

void FUN_10447e630(void)

{
  _objc_opt_self(&PTR_PTR_1129bd3e0);
  return;
}



/* Entry: 10447e650; end: 10447e6fb;  */

void FUN_10447e650(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10447e6fc; end: 10447e73b;  */

void FUN_10447e6fc(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10447e73c; end: 10447e76f;  */

undefined8 FUN_10447e73c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10447dd14)();
  return param_1;
}



/* Entry: 10447e770; end: 10447e7a3; -[SCDeckTransitionEvent description] */

void FUN_10447e770(void)

{
  undefined1 auStack_40 [48];
  
  FUN_10447e824(auStack_40);
  FUN_10447e73c(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447e7a4; end: 10447e7eb; -[SCDeckTransitionEvent init] */

void FUN_10447e7a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDeckService/DeckTransitionEventWrapper.swift",0x2e,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447e7ec);
  (*pcVar1)();
}



/* Entry: 10447e7ec; end: 10447e7ef; -[SCDeckTransitionEvent copyWithZone:] */

void FUN_10447e7ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447e7f0; end: 10447e823;  */

void FUN_10447e7f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447e824; end: 10447e923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447e824(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_2 + _DAT_11307d788) == '\x01') {
    lVar4 = *(long *)(param_2 + _DAT_11307d798);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10447e920);
      (*pcVar3)();
    }
    uVar7 = 1;
  }
  else {
    lVar4 = *(long *)(param_2 + _DAT_11307d790);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10447e924);
      (*pcVar3)();
    }
    uVar7 = 0;
  }
  uVar1 = *(undefined4 *)(lVar4 + _DAT_11307d730);
  uVar8 = *(undefined8 *)(lVar4 + _DAT_11307d740);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_11307d748);
  uVar9 = *(undefined8 *)(lVar4 + _DAT_11307d750);
  uVar6 = *(undefined8 *)(lVar4 + _DAT_11307d758);
  uVar2 = *(undefined4 *)(lVar4 + _DAT_11307d738);
  _objc_retain(uVar6);
  _objc_retain();
  *param_1 = CONCAT44(uVar2,uVar1);
  param_1[1] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar9;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar7;
  return;
}


