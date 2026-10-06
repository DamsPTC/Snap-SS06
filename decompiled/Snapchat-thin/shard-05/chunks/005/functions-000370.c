/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103eeabc0; end: 103eeabc3;  */

void FUN_103eeabc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8dd0;
  _swift_getWitnessTable(&UNK_10dca8dd0,&UNK_1107202a0);
  puRam000000011302d138 = puVar1;
  return;
}



/* Entry: 103eeabc4; end: 103eeac03;  */

void FUN_103eeabc4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8dd0;
  _swift_getWitnessTable(&UNK_10dca8dd0,&UNK_1107202a0);
  puRam000000011302d138 = puVar1;
  return;
}



/* Entry: 103eeac04; end: 103eead7f;  */

int FUN_103eeac04(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eeac80;
        goto LAB_103eeac64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eeac64:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_103eeac80:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eead80; end: 103eeadbf;  */

void FUN_103eead80(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8e60;
  _swift_getWitnessTable(&UNK_10dca8e60,&UNK_1107202f8);
  puRam000000011302d140 = puVar1;
  return;
}



/* Entry: 103eeadc0; end: 103eeae6b;  */

void FUN_103eeadc0(void)

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



/* Entry: 103eeae6c; end: 103eeaea3;  */

void FUN_103eeae6c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103eeaea4; end: 103eeaf4f;  */

void FUN_103eeaea4(void)

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



/* Entry: 103eeaf50; end: 103eeaf87;  */

void FUN_103eeaf50(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103eeaf88; end: 103eeafff; -[SCPostableContentDestinationIcon description] */

void FUN_103eeaf88(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103ee9f1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103eeb000(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_103ee9ee0(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eeb000; end: 103eeb3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eeb000(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long alStack_70 [2];
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)alStack_70 - extraout_x8;
  lVar9 = 0x11302d148;
  func_0x0001000285a8(0x11302d148,&UNK_10dca8f18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar5 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar6 = (long *)(lVar5 - extraout_x12);
  lVar2 = 0;
  FUN_103ee9f1c();
  lVar9 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar9 + 0x38);
  (*pcVar11)(plVar6,1,1,lVar2);
  if (*(char *)(param_2 + _DAT_11302d150) == '\0') {
    lVar7 = ((long *)(param_2 + _DAT_11302d178))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb398);
      (*pcVar11)();
    }
    lVar8 = ((long *)(param_2 + _DAT_11302d180))[1];
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb3a4);
      (*pcVar11)();
    }
    lVar3 = *(long *)(param_2 + _DAT_11302d188);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb3ac);
      alStack_70[0] = lVar9;
      alStack_70[1] = param_1;
      (*pcVar11)();
    }
    lVar4 = *(long *)(param_2 + _DAT_11302d178);
    lVar10 = *(long *)(param_2 + _DAT_11302d180);
    alStack_70[0] = lVar9;
    alStack_70[1] = param_1;
    FUN_103eec22c(plVar6,0x11302d148,&UNK_10dca8f18);
    *plVar6 = lVar4;
    plVar6[1] = lVar7;
    plVar6[2] = lVar10;
    plVar6[3] = lVar8;
    plVar6[4] = lVar3;
    _swift_storeEnumTagMultiPayload(plVar6,lVar2,0);
    (*pcVar11)(plVar6,0,1,lVar2);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar8);
    _objc_retain(lVar3);
    param_1 = alStack_70[1];
    lVar9 = alStack_70[0];
  }
  else if (*(char *)(param_2 + _DAT_11302d150) == '\x01') {
    lVar7 = *(long *)(param_2 + _DAT_11302d168);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb394);
      (*pcVar11)();
    }
    lVar8 = *(long *)(param_2 + _DAT_11302d170);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb3a0);
      (*pcVar11)();
    }
    FUN_103eec22c(plVar6,0x11302d148,&UNK_10dca8f18);
    *plVar6 = lVar7;
    plVar6[1] = lVar8;
    _swift_storeEnumTagMultiPayload(plVar6,lVar2,1);
    (*pcVar11)(plVar6,0,1,lVar2);
    _objc_retain(lVar7);
    _objc_retain(lVar8);
  }
  else {
    FUN_103eebd10(param_2 + _DAT_11302d158,lVar7,0x112d36580,&UNK_10d9016d0);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar4 = *(long *)(lVar3 + -8);
    lVar8 = lVar7;
    (**(code **)(lVar4 + 0x30))(lVar7,1,lVar3);
    if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb39c);
      (*pcVar11)();
    }
    lVar8 = *(long *)(param_2 + _DAT_11302d160);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb3a8);
      alStack_70[0] = lVar9;
      alStack_70[1] = param_1;
      (*pcVar11)();
    }
    alStack_70[0] = lVar9;
    alStack_70[1] = param_1;
    FUN_103eec22c(plVar6,0x11302d148,&UNK_10dca8f18);
    lVar9 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    iVar1 = *(int *)(lVar9 + 0x30);
    (**(code **)(lVar4 + 0x10))(plVar6,lVar7,lVar3);
    *(long *)((long)plVar6 + (long)iVar1) = lVar8;
    _swift_storeEnumTagMultiPayload(plVar6,lVar2,2);
    (*pcVar11)(plVar6,0,1,lVar2);
    pcVar11 = *(code **)(lVar4 + 8);
    _objc_retain(lVar8);
    (*pcVar11)(lVar7,lVar3);
    param_1 = alStack_70[1];
    lVar9 = alStack_70[0];
  }
  FUN_103eebd10(plVar6,lVar5,0x11302d148,&UNK_10dca8f18);
  lVar7 = lVar5;
  (**(code **)(lVar9 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar7 == 1) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x103eeb390);
    (*pcVar11)();
  }
  _objc_release(param_2);
  func_0x000103eebd58(lVar5,param_1);
  FUN_103eec22c(plVar6,0x11302d148,&UNK_10dca8f18);
  return;
}



/* Entry: 103eeb3ac; end: 103eeb3f3; -[SCPostableContentDestinationIcon init] */

void FUN_103eeb3ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PostableContentDestinationModels/PostableContentDestinationIconWrapper.swift",0x4c,2,
             0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb3f4);
  (*pcVar1)();
}



/* Entry: 103eeb3f4; end: 103eeb3f7; -[SCPostableContentDestinationIcon copyWithZone:] */

void FUN_103eeb3f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103eeb3f8; end: 103eeb48b; +[SCPostableContentDestinationIcon avatarWithAvatarId:selfieId:backgroundColor:] */

void FUN_103eeb3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_5);
  FUN_103eebd9c(param_3,param_2,param_4,uVar1,param_5);
  _objc_release(param_5);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103eeb48c; end: 103eeb4eb; +[SCPostableContentDestinationIcon imageWithImage:backgroundColor:] */

void FUN_103eeb48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_103eebf2c(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103eeb4ec; end: 103eeb59b; +[SCPostableContentDestinationIcon urlWithUrl:backgroundColor:] */

void FUN_103eeb4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  _objc_retain(param_4);
  puVar2 = puVar3;
  func_0x000103eec0a4(puVar3,param_4);
  _objc_release(param_4);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103eeb59c; end: 103eeb74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eeb59c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (*(char *)(unaff_x20 + _DAT_11302d150) == '\0') {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11302d178))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb738);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11302d180))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb744);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11302d188) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb74c);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11302d178),lVar2,
               *(undefined8 *)(unaff_x20 + _DAT_11302d180));
  }
  else if (*(char *)(unaff_x20 + _DAT_11302d150) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11302d168) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb734);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11302d170) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb740);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    FUN_103eebd10(unaff_x20 + _DAT_11302d158,puVar4,0x112d36580,&UNK_10d9016d0);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar2 + -8);
    puVar3 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb73c);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11302d160) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103eeb748);
      (*pcVar1)();
    }
    (*param_5)(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 103eeb74c; end: 103eeb7af; -[SCPostableContentDestinationIcon matchAvatar:image:url:] */

void FUN_103eeb74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_103eeb59c(FUN_103eec4e4,auStack_40,0x103eec4ec,auStack_60,FUN_103eec500,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 103eeb7b0; end: 103eeb823;  */

void FUN_103eeb7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_3,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103eeb824; end: 103eeb857;  */

void FUN_103eeb824(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eeb858; end: 103eeb8f7; -[SCPostableContentDestinationIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eeb858(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d178 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d180 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d188));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d168));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d170));
  FUN_103eec22c(param_1 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302d160));
  return;
}



/* Entry: 103eeb8f8; end: 103eebd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103eeb8f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_90 [6];
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar7 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar5 = 0;
  FUN_103ee9f1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_103eea1d4(param_1,puVar11);
  puVar6 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar5);
  if ((int)puVar6 == 0) {
    uVar14 = *puVar11;
    uVar2 = puVar11[1];
    uVar1 = puVar11[2];
    uVar3 = puVar11[3];
    uVar12 = puVar11[4];
    (**(code **)(lVar13 + 0x38))(lVar10,1,1,lVar4);
    lVar7 = 0;
    FUN_103eec274();
    lVar4 = lVar7;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11302d150) = 0;
    puVar6 = (undefined8 *)(lVar4 + _DAT_11302d178);
    *puVar6 = uVar14;
    puVar6[1] = uVar2;
    puVar6 = (undefined8 *)(lVar4 + _DAT_11302d180);
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    *(undefined8 *)(lVar4 + _DAT_11302d188) = uVar12;
    *(undefined8 *)(lVar4 + _DAT_11302d168) = 0;
    *(undefined8 *)(lVar4 + _DAT_11302d170) = 0;
    FUN_103eebd10(lVar10,lVar4 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
    *(undefined8 *)(lVar4 + _DAT_11302d160) = 0;
    lVar5 = -0x80;
    alStack_90[0] = lVar4;
    alStack_90[1] = lVar7;
  }
  else {
    if ((int)puVar6 != 1) {
      lVar5 = 0x11302cfe0;
      func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
      uVar14 = *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar5 + 0x30));
      (**(code **)(lVar13 + 0x20))(lVar7,puVar11,lVar4);
      (**(code **)(lVar13 + 0x10))(lVar10,lVar7,lVar4);
      (**(code **)(lVar13 + 0x38))(lVar10,0,1,lVar4);
      lVar8 = 0;
      FUN_103eec274();
      lVar5 = lVar8;
      _objc_allocWithZone();
      *(undefined1 *)(lVar5 + _DAT_11302d150) = 2;
      puVar6 = (undefined8 *)(lVar5 + _DAT_11302d178);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar5 + _DAT_11302d180);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)(lVar5 + _DAT_11302d188) = 0;
      *(undefined8 *)(lVar5 + _DAT_11302d168) = 0;
      *(undefined8 *)(lVar5 + _DAT_11302d170) = 0;
      FUN_103eebd10(lVar10,lVar5 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
      *(undefined8 *)(lVar5 + _DAT_11302d160) = uVar14;
      plVar9 = alStack_90 + 4;
      alStack_90[4] = lVar5;
      alStack_90[5] = lVar8;
      _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
      FUN_103ee9ee0(param_1);
      FUN_103eec22c(lVar10,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar13 + 8))(lVar7,lVar4);
      return plVar9;
    }
    uVar14 = *puVar11;
    uVar1 = puVar11[1];
    (**(code **)(lVar13 + 0x38))(lVar10,1,1,lVar4);
    lVar7 = 0;
    FUN_103eec274();
    lVar4 = lVar7;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11302d150) = 1;
    puVar6 = (undefined8 *)(lVar4 + _DAT_11302d178);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)(lVar4 + _DAT_11302d180);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined8 *)(lVar4 + _DAT_11302d188) = 0;
    *(undefined8 *)(lVar4 + _DAT_11302d168) = uVar14;
    *(undefined8 *)(lVar4 + _DAT_11302d170) = uVar1;
    FUN_103eebd10(lVar10,lVar4 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
    *(undefined8 *)(lVar4 + _DAT_11302d160) = 0;
    lVar5 = -0x70;
    alStack_90[2] = lVar4;
    alStack_90[3] = lVar7;
  }
  plVar9 = (long *)(&stack0xfffffffffffffff0 + lVar5);
  _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  FUN_103ee9ee0(param_1);
  FUN_103eec22c(lVar10,0x112d36580,&UNK_10d9016d0);
  return plVar9;
}



/* Entry: 103eebd10; end: 103eebd9b;  */

undefined8 FUN_103eebd10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103eebd9c; end: 103eebf2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103eebd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_70 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_103eec274();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11302d150) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302d178);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302d180);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar3 + _DAT_11302d188) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11302d168) = 0;
  *(undefined8 *)(lVar3 + _DAT_11302d170) = 0;
  FUN_103eebd10(lVar6,lVar3 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11302d160) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_retain(param_5);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  FUN_103eec22c(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 103eebf2c; end: 103eec22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103eebf2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_60 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_103eec274();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11302d150) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302d178);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302d180);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11302d188) = 0;
  *(undefined8 *)(lVar3 + _DAT_11302d168) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11302d170) = param_2;
  FUN_103eebd10(lVar6,lVar3 + _DAT_11302d158,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_11302d160) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_60;
  _objc_msgSendSuper2(plVar5,puVar2);
  FUN_103eec22c(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 103eec22c; end: 103eec26b;  */

undefined8 FUN_103eec22c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103eec26c; end: 103eec273;  */

void FUN_103eec26c(void)

{
  if (lRam000000011302d1b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d3f10);
  return;
}



/* Entry: 103eec274; end: 103eec2ab;  */

void FUN_103eec274(undefined8 param_1)

{
  if (lRam000000011302d1b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d3f10);
  return;
}



/* Entry: 103eec2ac; end: 103eec33b;  */

void FUN_103eec2ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dca8f48;
  puStack_58 = &UNK_10dca8f60;
  puStack_50 = &UNK_10dca8f60;
  puStack_48 = &UNK_10dca8f78;
  puStack_40 = &UNK_10dca8f78;
  puStack_38 = &UNK_10dca8f78;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dca8f78;
    _swift_updateClassMetadata2(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 103eec33c; end: 103eec4a3;  */

int FUN_103eec33c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eec3b8;
        goto LAB_103eec39c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eec39c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103eec3b8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eec4a4; end: 103eec4e3;  */

void FUN_103eec4a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d1c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8fb8;
  _swift_getWitnessTable(&UNK_10dca8fb8,&UNK_1107203e0);
  puRam000000011302d1c8 = puVar1;
  return;
}



/* Entry: 103eec4e4; end: 103eec4ff;  */

void FUN_103eec4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103eec500; end: 103eec54b;  */

void FUN_103eec500(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eec54c; end: 103eec557; -[SCPostableContentDestinationModel id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec54c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302d1d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302d1d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eec558; end: 103eec567; -[SCPostableContentDestinationModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d1d8));
  return;
}



/* Entry: 103eec568; end: 103eec577; -[SCPostableContentDestinationModel icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d1e0));
  return;
}



/* Entry: 103eec578; end: 103eec583; -[SCPostableContentDestinationModel title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302d1e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302d1e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eec584; end: 103eec5cb;  */

void FUN_103eec584(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103eec5cc; end: 103eec627; -[SCPostableContentDestinationModel subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec5cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302d1f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302d1f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103eec628; end: 103eec637; -[SCPostableContentDestinationModel customTTLInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d1f8));
  return;
}



/* Entry: 103eec638; end: 103eec647; -[SCPostableContentDestinationModel officialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eec638(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302d200);
}



/* Entry: 103eec648; end: 103eec80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302d1d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302d1d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302d1e0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302d1e8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302d1f0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302d1f8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302d200) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eec810; end: 103eec947; -[SCPostableContentDestinationModel initWithId:type:icon:title:subtitle:customTTLInfo:officialBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eec810(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_7 == 0) {
    param_7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302d1d0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11302d1d8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302d1e0) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302d1e8);
  *puVar1 = param_6;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_11302d1f0);
  *plVar2 = param_7;
  plVar2[1] = lVar6;
  *(undefined8 *)(param_1 + _DAT_11302d1f8) = param_8;
  *(undefined8 *)(param_1 + _DAT_11302d200) = param_9;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 103eec948; end: 103eec977;  */

void FUN_103eec948(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103eec978(param_1);
  return;
}



/* Entry: 103eec978; end: 103eecae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103eec978(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_103ee9f1c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302d1d0);
  *puVar1 = *param_1;
  puVar1[1] = uVar6;
  uVar7 = (ulong)*(byte *)(param_1 + 2);
  _swift_bridgeObjectRetain();
  FUN_103eed6f8();
  *(ulong *)(unaff_x20 + _DAT_11302d1d8) = uVar7;
  lVar4 = 0;
  FUN_103eea19c();
  FUN_103eea1d4((long)param_1 + (long)*(int *)(lVar4 + 0x18),puVar5);
  FUN_103eeb8f8();
  *(undefined1 **)(unaff_x20 + _DAT_11302d1e0) = puVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302d1e8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302d1f0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  uVar6 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *(undefined8 *)(unaff_x20 + _DAT_11302d1f8) = uVar6;
  uVar8 = puVar1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11302d200) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar6);
  puVar5 = &stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar5,puVar3);
  func_0x000103eed188(param_1);
  return puVar5;
}



/* Entry: 103eecae8; end: 103eecb1b; -[SCPostableContentDestinationModel hash] */

undefined8 FUN_103eecae8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103eecb1c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103eecb1c; end: 103eecc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eecb1c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302d1d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11302d1d0))[1]);
  uVar1 = uVar3;
  func_0x000107c44c3c();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_11302d1d8));
  __ss6HasherV8_combineyySuF();
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_11302d1e0));
  __ss6HasherV8_combineyySuF();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302d1e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11302d1e8))[1]);
  uVar1 = uVar3;
  func_0x000107c44c3c();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11302d1f0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302d1f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11302d1f8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x000107c44c3c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11302d200));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103eecc84; end: 103eece83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103eecc84(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  uint uVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar9 = *(ulong *)(unaff_x20 + _DAT_11302d1d0);
      if (uVar9 == *(ulong *)(lStack_88 + _DAT_11302d1d0) &&
          ((ulong *)(unaff_x20 + _DAT_11302d1d0))[1] == ((ulong *)(lStack_88 + _DAT_11302d1d0))[1])
      {
        uVar9 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      uVar1 = (uint)*(undefined8 *)(unaff_x20 + _DAT_11302d1d8);
      func_0x000107c49cec();
      uVar2 = (uint)*(undefined8 *)(unaff_x20 + _DAT_11302d1e0);
      func_0x000107c49cec();
      lVar7 = *(long *)(unaff_x20 + _DAT_11302d1e8);
      if (lVar7 == *(long *)(lStack_88 + _DAT_11302d1e8) &&
          ((long *)(unaff_x20 + _DAT_11302d1e8))[1] == ((long *)(lStack_88 + _DAT_11302d1e8))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar7;
      }
      lVar7 = ((long *)(unaff_x20 + _DAT_11302d1f0))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11302d1f0))[1];
      uVar10 = (uint)(lVar7 == 0 && lVar8 == 0);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        lVar6 = *(long *)(unaff_x20 + _DAT_11302d1f0);
        if ((lVar6 == *(long *)(lStack_88 + _DAT_11302d1f0)) && (lVar7 == lVar8)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar6;
        }
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11302d1f8);
      if (lVar7 == 0) {
        uVar4 = (uint)(*(long *)(lStack_88 + _DAT_11302d1f8) == 0);
      }
      else {
        func_0x000107c49cec();
        uVar4 = (uint)lVar7;
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11302d200);
      lVar8 = *(long *)(lStack_88 + _DAT_11302d200);
      _objc_release(lStack_88);
      if (((uVar9 & 1) != 0) && ((uVar1 & uVar2 & uVar3 & uVar10) == 1)) {
        return uVar4 & lVar7 == lVar8;
      }
    }
  }
  return 0;
}



/* Entry: 103eece84; end: 103eecf03; -[SCPostableContentDestinationModel isEqual:] */

uint FUN_103eece84(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103eecc84(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103eecf04; end: 103eecf07; -[SCPostableContentDestinationModel copyWithZone:] */

void FUN_103eecf04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103eecf08; end: 103eecf4f; -[SCPostableContentDestinationModel description] */

void FUN_103eecf08(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_103eecf50();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103eecf50; end: 103eed087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103eecf50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long extraout_x8;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = 0;
  FUN_103eea19c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_11302d1d0))[1];
  *puVar8 = *(undefined8 *)(unaff_x20 + _DAT_11302d1d0);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar2;
  uVar6 = (undefined1)*(undefined8 *)(unaff_x20 + _DAT_11302d1d8);
  _swift_bridgeObjectRetain();
  _objc_retain();
  func_0x000103eed7bc();
  (&stack0xffffffffffffffd0)[lVar5] = uVar6;
  iVar3 = *(int *)(lVar7 + 0x18);
  _objc_retain(*(undefined8 *)(unaff_x20 + _DAT_11302d1e0));
  FUN_103eeb000((long)puVar8 + (long)iVar3);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_11302d1e8))[1];
  puVar1 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x1c));
  *puVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302d1e8);
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302d1f0);
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  puVar4 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x20));
  puVar4[1] = puVar1[1];
  *puVar4 = uVar10;
  *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined8 *)(unaff_x20 + _DAT_11302d1f8);
  *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x28)) =
       *(undefined8 *)(unaff_x20 + _DAT_11302d200);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar9);
  func_0x000103eed188(puVar8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103eed088; end: 103eed103; -[SCPostableContentDestinationModel init] */

void FUN_103eed088(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PostableContentDestinationModels/PostableContentDestinationModelWrapper.swift",0x4d,2,
             0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eed0d0);
  (*pcVar1)();
}



/* Entry: 103eed104; end: 103eed1c3; -[SCPostableContentDestinationModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed104(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d1d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d1d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d1e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d1e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d1f0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302d1f8));
  return;
}



/* Entry: 103eed1c4; end: 103eed1e3;  */

void FUN_103eed1c4(void)

{
  _objc_opt_self(&PTR_PTR_112963640);
  return;
}



/* Entry: 103eed1e4; end: 103eed2b7;  */

void FUN_103eed1e4(void)

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



/* Entry: 103eed2b8; end: 103eed2d7;  */

void FUN_103eed2b8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103eed2d8; end: 103eed2f3; -[SCPostableContentDestinationType description] */

void FUN_103eed2d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed2f4; end: 103eed33b; -[SCPostableContentDestinationType init] */

void FUN_103eed2f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PostableContentDestinationModels/PostableContentDestinationTypeWrapper.swift",0x4c,2,
             0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eed33c);
  (*pcVar1)();
}



/* Entry: 103eed33c; end: 103eed347; -[SCPostableContentDestinationType copyWithZone:] */

void FUN_103eed33c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103eed348; end: 103eed357; +[SCPostableContentDestinationType myStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed348(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed358; end: 103eed367; +[SCPostableContentDestinationType myStoryCustom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed358(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed368; end: 103eed377; +[SCPostableContentDestinationType myStoryFriendsOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed368(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed378; end: 103eed387; +[SCPostableContentDestinationType businessStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed378(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed388; end: 103eed397; +[SCPostableContentDestinationType fanPassStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed388(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed398; end: 103eed3a7; +[SCPostableContentDestinationType ourStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed398(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3a8; end: 103eed3b7; +[SCPostableContentDestinationType privateStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3b8; end: 103eed3c7; +[SCPostableContentDestinationType customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3c8; end: 103eed3d7; +[SCPostableContentDestinationType sharedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3d8; end: 103eed3e7; +[SCPostableContentDestinationType communityStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3e8; end: 103eed3f7; +[SCPostableContentDestinationType friendOfGroupStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed3f8; end: 103eed443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed3f8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302d230) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eed444; end: 103eed44b; +[SCPostableContentDestinationType spotlightStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed444(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed44c; end: 103eed49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eed44c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302d230) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eed49c; end: 103eed5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103eed49c(code *param_1,undefined *param_2,code *param_3,undefined1 *param_4,
                    code *param_5,undefined1 *param_6,code *param_7,undefined1 *param_8,
                    code *param_9,undefined4 param_10,undefined4 param_11,code *param_12,
                    undefined4 param_13,undefined4 param_14,code *param_15,undefined4 param_16,
                    undefined4 param_17,code *param_18,undefined4 param_19,undefined4 param_20,
                    code *param_21,undefined4 param_22,undefined4 param_23,code *param_24,
                    long param_25,code *param_26,code *param_27,code *param_28,code *param_29)

{
  code *pcVar1;
  code *pcVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  
  pcVar4 = (code *)&stack0xffffffffffffffa0;
  iVar5 = (int)param_2;
  pcVar3 = param_1;
  pcVar1 = param_27;
  pcVar2 = param_29;
  switch(*(undefined1 *)(unaff_x20 + _DAT_11302d230)) {
  default:
  case 0x88:
  case 0x96:
  case 0xce:
    (*param_1)();
code_r0x000103eed508:
    return param_1;
  case 1:
  case 0x14:
  case 0xc:
    (*param_3)();
    break;
  case 2:
  case 0x13:
    (*param_5)();
    break;
  case 3:
  case 0x11:
    (*param_7)();
  case 0x12:
    break;
  case 4:
  case 0x9f:
  case 0xd7:
  case 0x15:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
  case 0x16:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
  case 0xe:
    (*param_24)();
  case 0xf:
    break;
  case 10:
    (*param_26)();
    break;
  case 0xb:
  case 0x86:
  case 0xae:
  case 0xb0:
  case 0xe6:
    (*param_28)();
  case 0x10:
  case 0xb9:
  case 0xe8:
    break;
  case 0x17:
  case 0x7b:
  case 0x8f:
  case 0xa3:
  case 0xb7:
  case 0xbf:
  case 199:
  case 0xdb:
  case 0xef:
  case 0xf7:
  case 0xff:
    goto code_r0x000103eed508;
  case 0x20:
  case 0x50:
    goto code_r0x000103eed640;
  case 0x21:
  case 0x29:
  case 0x38:
  case 0x51:
  case 0x59:
  case 0x68:
    goto code_r0x000103eed6bc;
  case 0x22:
  case 0x31:
  case 0x52:
  case 0x61:
  case 0x79:
  case 0x8d:
  case 0xa1:
  case 0xb5:
  case 0xbd:
  case 0xc5:
  case 0xd9:
  case 0xed:
  case 0xf5:
  case 0xfd:
  case 0x23:
  case 0x2b:
  case 0x2e:
  case 0x32:
  case 0x36:
  case 0x53:
  case 0x5b:
  case 0x5e:
  case 0x62:
  case 0x66:
  case 0x71:
    goto code_r0x000103eed6d4;
  case 0x24:
  case 0x35:
  case 0x54:
  case 0x65:
    goto code_r0x000103eed684;
  case 0x25:
  case 0x3f:
  case 0x55:
  case 0x70:
    goto code_r0x000103eed688;
  case 0x26:
  case 0x56:
    goto code_r0x000103eed6b0;
  case 0x27:
  case 0x2c:
  case 0x30:
  case 0x3d:
  case 0x57:
  case 0x5c:
  case 0x60:
  case 0x6d:
  case 0x74:
    goto code_r0x000103eed694;
  case 0x28:
  case 0x58:
    goto code_r0x000103eed60c;
  case 0x2a:
  case 0x2d:
  case 0x34:
  case 0x39:
  case 0x5a:
  case 0x5d:
  case 100:
  case 0x69:
    goto code_r0x000103eed6b8;
  case 0x2f:
  case 0x5f:
    goto code_r0x000103eed610;
  case 0x33:
  case 0x37:
  case 99:
  case 0x67:
    goto code_r0x000103eed6a4;
  case 0x3a:
  case 0x6a:
    goto code_r0x000103eed650;
  case 0x3b:
  case 0x6b:
  case 0x72:
    goto code_r0x000103eed6e4;
  case 0x3c:
  case 0x6c:
  case 0x73:
    goto code_r0x000103eed6c0;
  case 0x3e:
  case 0xb8:
    goto code_r0x000103eed63c;
  case 0x40:
    goto code_r0x000103eed6a8;
  case 0x41:
    goto code_r0x000103eed68c;
  case 0x6e:
    goto code_r0x000103eed64c;
  case 0x6f:
    goto code_r0x000103eed6d4;
  case 0x78:
    goto code_r0x000103eed844;
  case 0x7a:
  case 0x8e:
  case 0xa2:
  case 0xb6:
  case 0xbe:
  case 0xc6:
  case 0xda:
  case 0xee:
  case 0xf6:
  case 0xfe:
    goto code_r0x000103eed79c;
  case 0x7c:
    goto code_r0x000103eed8e0;
  case 0x7d:
  case 0xa5:
  case 0xdd:
    goto code_r0x000103eed7b8;
  case 0x7e:
  case 0xa6:
  case 0xde:
    param_1 = (code *)(ulong)(byte)param_1[_DAT_11302d230];
    _objc_release();
  case 0xba:
code_r0x000103eed7e4:
    return param_1;
  case 0x8c:
    uVar6 = 2;
    if (0xfffeff < iVar5 + 0xbU) {
      uVar6 = 4;
    }
    if (iVar5 + 0xbU >> 8 < 0xff) {
      uVar6 = 1;
    }
    param_27 = (code *)(ulong)uVar6;
    if (uVar6 == 4) {
      uVar6 = *(uint *)(param_1 + 1);
      goto joined_r0x000103eed864;
    }
  case 0xa4:
    in_ZR = (int)param_27 == 2;
code_r0x000103eed844:
    if (in_ZR) {
      param_27 = (code *)(ulong)*(ushort *)(param_1 + 1);
code_r0x000103eed84c:
      uVar6 = (uint)param_27;
    }
    else {
      uVar6 = (uint)(byte)param_1[1];
    }
joined_r0x000103eed864:
    if (uVar6 == 0) {
      iVar5 = (byte)*param_1 - 0xc;
      if ((byte)*param_1 < 0xc) {
        iVar5 = -1;
      }
      return (code *)(ulong)(iVar5 + 1);
    }
    return (code *)(ulong)(((uint)(byte)*param_1 | uVar6 << 8) - 0xb);
  case 0x90:
    param_27 = (code *)&stack0xffffffffffffffa0;
    goto code_r0x000103eed794;
  case 0x91:
  case 0xc1:
  case 0xc9:
    goto code_r0x000103eed604;
  case 0x92:
  case 0xc2:
  case 0xca:
  case 0xfa:
    break;
  case 0x93:
  case 0xc3:
  case 0xcb:
  case 0xfb:
code_r0x000103eed8d8:
    param_1[1] = (code)0x0;
    if (iVar5 == 0) {
code_r0x000103eed8e0:
      return param_1;
    }
    goto code_r0x000103eed918;
  case 0x9c:
    goto code_r0x000103eed5d0;
  case 0x9d:
  case 0xd5:
    if (in_ZR || in_NG != in_OV) {
      if ((int)param_27 != 0) goto code_r0x000103eed8d8;
    }
    else if ((int)param_27 == 2) {
      *(undefined2 *)(param_1 + 1) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (iVar5 == 0) {
      return param_1;
    }
code_r0x000103eed918:
    *param_1 = (code)((char)param_2 + '\v');
    return param_1;
  case 0x9e:
  case 0xd6:
    goto code_r0x000103eed794;
  case 0xa0:
    goto code_r0x000103eed7e4;
  case 0xb4:
  case 0xbc:
  case 0xc4:
    goto code_r0x000103eed7b4;
  case 0xc0:
  case 0xf9:
    goto code_r0x000103eed600;
  case 200:
    goto code_r0x000103eed680;
  case 0xd4:
    goto code_r0x000103eed6f0;
  case 0xd8:
    goto code_r0x000103eed794;
  case 0xdc:
    param_27 = (code *)&stack0xffffffffffffffc0;
    goto code_r0x000103eed794;
  case 0xec:
  case 0xf4:
  case 0xfc:
code_r0x000103eed794:
    param_1[param_25] = SUB81(param_24,0);
    *(code **)param_27 = param_1;
    *(code **)(param_27 + 8) = param_29;
    pcVar1 = param_27;
code_r0x000103eed79c:
    param_1 = pcVar1;
    _objc_msgSendSuper2(param_1,PTR_s_init_1125d9248);
code_r0x000103eed7b4:
code_r0x000103eed7b8:
    return param_1;
  case 0xf0:
    goto code_r0x000103eed5e4;
  case 0xf1:
    puStack_90 = param_6;
    pcStack_70 = param_5;
    goto code_r0x000103eed5d0;
  case 0xf2:
    goto code_r0x000103eed84c;
  case 0xf8:
    goto code_r0x000103eed670;
  }
  return param_1;
code_r0x000103eed5d0:
code_r0x000103eed5e4:
  _objc_retain();
  param_29 = param_1;
code_r0x000103eed600:
code_r0x000103eed604:
code_r0x000103eed60c:
code_r0x000103eed610:
code_r0x000103eed63c:
  goto code_r0x000103eed640;
code_r0x000103eed6d4:
  _swift_getObjectType();
  param_2 = PTR_s_dealloc_112525b20;
  goto code_r0x000103eed6e4;
code_r0x000103eed640:
  param_2 = &stack0xffffffffffffffc0;
code_r0x000103eed64c:
code_r0x000103eed650:
  param_4 = &stack0xffffffffffffffa0;
  param_6 = auStack_80;
code_r0x000103eed670:
code_r0x000103eed680:
  param_1 = (code *)0x103eed000;
code_r0x000103eed684:
  param_1 = param_1 + 0x9c0;
code_r0x000103eed688:
  param_3 = (code *)0x103eed000;
code_r0x000103eed68c:
  param_3 = param_3 + 0x9cc;
code_r0x000103eed694:
  param_5 = (code *)0x103eed9d0;
  param_7 = (code *)0x103eed9d4;
code_r0x000103eed6a4:
  param_8 = auStack_a0;
  pcVar3 = param_1;
  pcVar2 = param_29;
code_r0x000103eed6a8:
  param_1 = pcVar2;
  FUN_103eed49c(pcVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
code_r0x000103eed6b0:
  _objc_release(param_1);
code_r0x000103eed6b8:
  goto code_r0x000103eed6bc;
code_r0x000103eed6e4:
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,param_2);
  param_1 = pcVar4;
code_r0x000103eed6f0:
  return param_1;
code_r0x000103eed6bc:
code_r0x000103eed6c0:
  return param_1;
}



/* Entry: 103eed5a4; end: 103eed6c3; -[SCPostableContentDestinationType matchMyStory:myStoryCustom:myStoryFriendsOnly:businessStory:fanPassStory:ourStory:privateStory:customStory:sharedStory:communityStory:friendOfGroupStory:spotlightStory:] */

void FUN_103eed5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103eed49c(0x103eed9c0,auStack_40,0x103eed9cc,auStack_60,0x103eed9d0,auStack_80,0x103eed9d4,
                auStack_a0,0x103eed9d8,auStack_c0,0x103eed9dc,auStack_e0,0x103eed9e0,auStack_100,
                0x103eed9e4,auStack_120,0x103eed9e8,auStack_140,0x103eed9ec,auStack_160,0x103eed9f0,
                auStack_180,0x103eed9f4,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 103eed6c4; end: 103eed6f7;  */

void FUN_103eed6c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eed6f8; end: 103eed7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103eed6f8(byte *param_1,undefined *param_2,uint param_3)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte *pbVar15;
  undefined1 **ppuVar16;
  char *pcVar17;
  uint uVar18;
  undefined *puVar19;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined **ppuVar25;
  undefined1 **ppuVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 *apuStack_e0 [2];
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *apuStack_c0 [2];
  undefined1 *apuStack_b0 [2];
  undefined1 *apuStack_a0 [2];
  undefined1 *apuStack_90 [2];
  undefined1 *apuStack_80 [2];
  undefined1 *apuStack_70 [2];
  undefined1 *apuStack_60 [2];
  undefined1 *apuStack_50 [2];
  undefined1 *apuStack_40 [2];
  undefined1 *apuStack_30 [2];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  ppuVar16 = apuStack_e0;
  uVar14 = (uint)((ulong)apuStack_e0 >> 8);
  iVar27 = (int)apuStack_e0;
  uVar21 = (uint)apuStack_e0;
  iVar9 = (int)apuStack_e0;
  iVar28 = (int)apuStack_e0;
  iVar10 = (int)apuStack_e0;
  iVar13 = (int)apuStack_e0;
  iVar12 = (int)apuStack_e0;
  iVar11 = (int)apuStack_e0;
  ppuVar25 = apuStack_e0;
  ppuVar26 = apuStack_e0;
  pbVar15 = param_1;
  FUN_103eed7e8();
  pcVar17 = (char *)pbVar15;
  _objc_allocWithZone();
  uVar30 = (ulong)param_1 & 0xff;
  uVar18 = (uint)param_2;
  ppuVar1 = apuStack_e0;
  ppuVar2 = apuStack_e0;
  ppuVar3 = apuStack_e0;
  uVar29 = _DAT_11302d230;
  uVar4 = (uint)apuStack_e0;
  iVar22 = (int)apuStack_e0;
  iVar24 = (int)apuStack_e0;
  iVar5 = (int)apuStack_e0;
  iVar6 = (int)apuStack_e0;
  iVar7 = (int)apuStack_e0;
  iVar8 = (int)apuStack_e0;
  iVar23 = (int)apuStack_e0;
  switch(uVar30) {
  case 0:
    break;
  default:
    ppuVar3 = &puStack_d0;
  case 0x7c:
  case 0x8a:
  case 0xc2:
    ppuVar16 = ppuVar3;
    break;
  case 2:
    ppuVar16 = apuStack_c0;
    break;
  case 3:
    ppuVar16 = apuStack_b0;
    break;
  case 4:
  case 0xad:
  case 0xdc:
    ppuVar1 = apuStack_a0;
  case 0x93:
  case 0xcb:
    ppuVar16 = ppuVar1;
    break;
  case 5:
    ppuVar16 = apuStack_90;
    break;
  case 6:
    ppuVar16 = apuStack_80;
    break;
  case 7:
    ppuVar16 = apuStack_70;
    break;
  case 8:
    ppuVar16 = apuStack_60;
    break;
  case 9:
    ppuVar16 = apuStack_50;
    break;
  case 10:
    ppuVar16 = apuStack_40;
    break;
  case 0xb:
  case 0x6f:
  case 0x83:
  case 0x97:
  case 0xab:
  case 0xb3:
  case 0xbb:
  case 0xcf:
  case 0xe3:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    ppuVar2 = apuStack_30;
  case 0x7a:
  case 0xa2:
  case 0xa4:
  case 0xda:
    ppuVar16 = ppuVar2;
    break;
  case 0x14:
  case 0x44:
    goto code_r0x000103eed880;
  case 0x15:
  case 0x1d:
  case 0x2c:
  case 0x45:
  case 0x4d:
  case 0x5c:
    goto code_r0x000103eed8fc;
  case 0x16:
  case 0x25:
  case 0x46:
  case 0x55:
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0xa9:
  case 0xb1:
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    goto code_r0x000103eed90c;
  case 0x17:
  case 0x1f:
  case 0x22:
  case 0x26:
  case 0x2a:
  case 0x47:
  case 0x4f:
  case 0x52:
  case 0x56:
  case 0x5a:
  case 0x65:
    goto code_r0x000103eed910;
  case 0x18:
  case 0x29:
  case 0x48:
  case 0x59:
    goto code_r0x000103eed8c4;
  case 0x19:
  case 0x33:
  case 0x49:
  case 100:
    goto code_r0x000103eed8c8;
  case 0x1a:
  case 0x4a:
    goto code_r0x000103eed8f0;
  case 0x1b:
  case 0x20:
  case 0x24:
  case 0x31:
  case 0x4b:
  case 0x50:
  case 0x54:
  case 0x61:
  case 0x68:
    goto code_r0x000103eed8d4;
  case 0x1c:
  case 0x4c:
    goto code_r0x000103eed84c;
  case 0x1e:
  case 0x21:
  case 0x28:
  case 0x2d:
  case 0x4e:
  case 0x51:
  case 0x58:
  case 0x5d:
    goto code_r0x000103eed8f8;
  case 0x23:
  case 0x53:
    goto code_r0x000103eed850;
  case 0x27:
  case 0x2b:
  case 0x57:
  case 0x5b:
    goto code_r0x000103eed8e4;
  case 0x2e:
  case 0x5e:
    goto code_r0x000103eed890;
  case 0x2f:
  case 0x5f:
  case 0x66:
    goto code_r0x000103eed924;
  case 0x30:
  case 0x60:
  case 0x67:
    goto code_r0x000103eed900;
  case 0x32:
  case 0xac:
    goto LAB_103eed87c;
  case 0x34:
    goto code_r0x000103eed8e8;
  case 0x35:
    goto code_r0x000103eed8cc;
  case 0x62:
    goto code_r0x000103eed88c;
  case 99:
    goto code_r0x000103eed914;
  case 0x6c:
    goto code_r0x000103eeda84;
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xce:
  case 0xe2:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto code_r0x000103eed9c0;
  case 0x70:
    goto code_r0x000103eedb20;
  case 0x71:
  case 0x99:
  case 0xd1:
  case 0x72:
  case 0x9a:
  case 0xd2:
    func_0x0001000e2834();
    pcVar17 = "https://us-central1-gcp.api.snapchat.com/df-mixer-prod";
    param_2 = (undefined *)0x36;
code_r0x000103eeda20:
    __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC();
code_r0x000103eeda24:
    pbRam00000001138122f0 = (byte *)pcVar17;
    auVar43._8_8_ = param_2;
    auVar43._0_8_ = pcVar17;
    return auVar43;
  case 0x80:
    func_0x0001000e2834(0);
    pcVar17 = "https://us-central1-gcp.api.snapchat.com/df-spotlight-prod";
    param_2 = (undefined *)0x3a;
    __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
              ("https://us-central1-gcp.api.snapchat.com/df-spotlight-prod",0x3a,2);
  case 0x98:
    ppuVar26 = (undefined1 **)0x113812000;
code_r0x000103eeda84:
    *(char **)((long)ppuVar26 + 0x2f8) = pcVar17;
code_r0x000103eeda8c:
    auVar44._8_8_ = param_2;
    auVar44._0_8_ = pcVar17;
    return auVar44;
  case 0x84:
    goto code_r0x000103eed9c0;
  case 0x85:
  case 0xb5:
  case 0xbd:
    goto code_r0x000103eed844;
  case 0x86:
  case 0xb6:
  case 0xbe:
  case 0xee:
  case 0xf6:
  case 0xfe:
    auVar32._1_7_ = 0;
    auVar32[0] = pcVar17[(long)apuStack_e0];
    _objc_release();
    auVar32._8_8_ = param_2;
    return auVar32;
  case 0x87:
  case 0xb7:
  case 0xbf:
  case 0xef:
  case 0xf7:
  case 0xff:
    goto code_r0x000103eedb18;
  case 0x90:
    if ((bool)in_CY) {
      uVar14 = uVar18 + 0xb >> 8;
      in_CY = 0xfffeff < uVar18 + 0xb;
      uVar29 = 4;
      goto code_r0x000103eed824;
    }
    goto LAB_103eed884;
  case 0x91:
  case 0xc9:
    uStack_c8 = 0x103eed718;
    puStack_d0 = &stack0xfffffffffffffff0;
code_r0x000103eedb18:
    func_0x0001000e2834(0);
code_r0x000103eedb20:
    pcVar17 = "https://gcp.api.snapchat.com/df-mixer-prod";
    uVar20 = 0x2a;
    __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
              ("https://gcp.api.snapchat.com/df-mixer-prod",0x2a,2);
    pcRam0000000113812308 = pcVar17;
    auVar45._8_8_ = uVar20;
    auVar45._0_8_ = pcVar17;
    return auVar45;
  case 0x92:
  case 0xca:
    pcVar17 = pcVar17 + 0x108;
    param_2 = &UNK_110720000;
  case 0xe0:
  case 0xe8:
  case 0xf0:
  case 0xf8:
    param_2 = param_2 + 0x4c8;
    _swift_getWitnessTable();
    ppuVar25 = &PTR_DAT_11302d000;
code_r0x000103eed9a0:
    ppuVar25[0x4c] = pcVar17;
    auVar41._8_8_ = param_2;
    auVar41._0_8_ = pcVar17;
    return auVar41;
  case 0x94:
    goto code_r0x000103eeda24;
  case 0xa8:
  case 0xb0:
  case 0xb8:
code_r0x000103eed9c0:
    pcVar17 = *(char **)(pbVar15 + 0x10);
code_r0x000103eed9c4:
    UNRECOVERED_JUMPTABLE = *(code **)(pcVar17 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103eed9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar42._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar42._0_8_ = pcVar17;
    return auVar42;
  case 0xae:
  case 0xfc:
    goto code_r0x000103eeda20;
  case 0xb4:
  case 0xed:
  case 0xf5:
  case 0xfd:
code_r0x000103eed840:
    in_ZR = iVar27 == 2;
code_r0x000103eed844:
    if ((bool)in_ZR) {
      uVar21 = (uint)*(ushort *)(pcVar17 + 1);
code_r0x000103eed84c:
      if (uVar21 != 0) goto LAB_103eed868;
code_r0x000103eed850:
    }
    else {
LAB_103eed87c:
      uVar4 = (uint)(byte)pcVar17[1];
code_r0x000103eed880:
      uVar21 = uVar4;
joined_r0x000103eed864:
      if (uVar21 != 0) {
LAB_103eed868:
        auVar34._4_4_ = 0;
        auVar34._0_4_ = ((uint)(byte)*pcVar17 | uVar21 << 8) - 0xb;
        auVar34._8_8_ = param_2;
        return auVar34;
      }
    }
LAB_103eed884:
    in_CY = 0xb < (byte)*pcVar17;
    iVar9 = (byte)*pcVar17 - 0xc;
code_r0x000103eed88c:
    iVar22 = iVar9;
    if (!(bool)in_CY) {
      iVar22 = -1;
    }
code_r0x000103eed890:
    auVar35._4_4_ = 0;
    auVar35._0_4_ = iVar22 + 1;
    auVar35._8_8_ = param_2;
    return auVar35;
  case 0xbc:
    goto code_r0x000103eed8c0;
  case 200:
    goto code_r0x000103eed930;
  case 0xcc:
    goto code_r0x000103eed9c4;
  case 0xd0:
  case 0xf4:
    goto code_r0x000103eed9a0;
  case 0xe4:
code_r0x000103eed824:
    iVar27 = 2;
    if ((bool)in_CY) {
      iVar27 = (int)uVar29;
    }
    if ((uVar14 & 0xffffff) < 0xff) {
      iVar27 = 1;
    }
    if (iVar27 != 4) goto code_r0x000103eed840;
    uVar21 = *(uint *)(pcVar17 + 1);
    goto joined_r0x000103eed864;
  case 0xe5:
    auVar33._8_8_ = 0;
    auVar33._0_8_ = pcVar17;
    return auVar33;
  case 0xe6:
    goto code_r0x000103eeda8c;
  case 0xec:
    iVar28 = (int)_DAT_11302d230;
    if (((uint)((ulong)apuStack_e0 >> 8) & 0xffffff) < 0xff) {
      iVar28 = 1;
    }
    in_CY = 0xf4 < param_3;
code_r0x000103eed8c0:
    iVar23 = 0;
    if ((bool)in_CY) {
      iVar23 = iVar28;
    }
code_r0x000103eed8c4:
    in_CY = 0xf3 < uVar18;
    in_ZR = uVar18 == 0xf4;
    iVar8 = iVar23;
code_r0x000103eed8c8:
    iVar13 = iVar8;
    iVar5 = iVar13;
    if ((bool)in_CY && !(bool)in_ZR) {
code_r0x000103eed8e4:
      uVar30 = (ulong)(uVar18 - 0xf5);
      iVar7 = iVar13;
code_r0x000103eed8e8:
      iVar12 = iVar7;
      uVar29 = (ulong)((int)(uVar30 >> 8) + 1);
code_r0x000103eed8f0:
      *pcVar17 = (byte)uVar30;
      in_OV = SBORROW4(iVar12,1);
      in_NG = iVar12 + -1 < 0;
      in_ZR = iVar12 == 1;
      iVar6 = iVar12;
code_r0x000103eed8f8:
      iVar11 = iVar6;
      iVar24 = iVar11;
      if (!(bool)in_ZR && in_NG == in_OV) {
code_r0x000103eed924:
        if (iVar24 != 2) {
          *(int *)(pcVar17 + 1) = (int)uVar29;
          auVar40._8_8_ = param_2;
          auVar40._0_8_ = pcVar17;
          return auVar40;
        }
        *(short *)(pcVar17 + 1) = (short)uVar29;
code_r0x000103eed930:
        auVar38._8_8_ = param_2;
        auVar38._0_8_ = pcVar17;
        return auVar38;
      }
code_r0x000103eed8fc:
      if (iVar11 != 0) {
code_r0x000103eed900:
        pcVar17[1] = (byte)uVar29;
        auVar36._8_8_ = param_2;
        auVar36._0_8_ = pcVar17;
        return auVar36;
      }
      goto code_r0x000103eed93c;
    }
code_r0x000103eed8cc:
    iVar10 = iVar5;
    if (iVar10 < 2) {
code_r0x000103eed8d4:
      if (iVar10 == 0) goto code_r0x000103eed914;
      pcVar17[1] = 0;
    }
    else {
      in_ZR = iVar10 == 2;
code_r0x000103eed90c:
      if (!(bool)in_ZR) {
        pcVar17[1] = 0;
        pcVar17[2] = 0;
        pcVar17[3] = 0;
        pcVar17[4] = 0;
        if (uVar18 == 0) goto code_r0x000103eed93c;
        goto code_r0x000103eed918;
      }
code_r0x000103eed910:
      pcVar17[1] = 0;
      pcVar17[2] = 0;
code_r0x000103eed914:
    }
    if (uVar18 != 0) {
code_r0x000103eed918:
      *pcVar17 = (char)param_2 + 0xb;
      auVar37._8_8_ = param_2;
      auVar37._0_8_ = pcVar17;
      return auVar37;
    }
code_r0x000103eed93c:
    auVar39._8_8_ = param_2;
    auVar39._0_8_ = pcVar17;
    return auVar39;
  }
  pcVar17[_DAT_11302d230] = (byte)param_1;
  *ppuVar16 = pcVar17;
  ppuVar16[1] = pbVar15;
  puVar19 = PTR_s_init_1125d9248;
  _objc_msgSendSuper2(ppuVar16,PTR_s_init_1125d9248);
  auVar31._8_8_ = puVar19;
  auVar31._0_8_ = ppuVar16;
  return auVar31;
}



/* Entry: 103eed7e8; end: 103eed807;  */

void FUN_103eed7e8(void)

{
  _objc_opt_self(&PTR_PTR_112963738);
  return;
}



/* Entry: 103eed808; end: 103eed96f;  */

int FUN_103eed808(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eed884;
        goto LAB_103eed868;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eed868:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_103eed884:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eed970; end: 103eed9af;  */

void FUN_103eed970(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9108;
  _swift_getWitnessTable(&UNK_10dca9108,&UNK_1107204c8);
  puRam000000011302d260 = puVar1;
  return;
}



/* Entry: 103eed9b0; end: 103eed9f7;  */

ulong FUN_103eed9b0(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 103eed9f8; end: 103eeda37;  */

void FUN_103eed9f8(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-mixer-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-mixer-prod",0x36,2);
  pcRam00000001138122f0 = pcVar1;
  return;
}



/* Entry: 103eeda38; end: 103eeda53; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints defaultEndpoint] */

void FUN_103eeda38(void)

{
  if (lRam000000011302d268 != -1) {
    _swift_once(0x11302d268,FUN_103eed9f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138122f0);
  return;
}



/* Entry: 103eeda54; end: 103eeda93;  */

void FUN_103eeda54(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-spotlight-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-spotlight-prod",0x3a,2);
  pcRam00000001138122f8 = pcVar1;
  return;
}



/* Entry: 103eeda94; end: 103eedaaf; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints spotlightDefaultEndpoint] */

void FUN_103eeda94(void)

{
  if (lRam000000011302d270 != -1) {
    _swift_once(0x11302d270,FUN_103eeda54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138122f8);
  return;
}



/* Entry: 103eedab0; end: 103eedaef;  */

void FUN_103eedab0(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-superfeed-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-superfeed-prod",0x3a,2);
  pcRam0000000113812300 = pcVar1;
  return;
}



/* Entry: 103eedaf0; end: 103eedb0b; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints superFeedDefaultEndpoint] */

void FUN_103eedaf0(void)

{
  if (lRam000000011302d278 != -1) {
    _swift_once(0x11302d278,FUN_103eedab0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812300);
  return;
}



/* Entry: 103eedb0c; end: 103eedb4b;  */

void FUN_103eedb0c(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://gcp.api.snapchat.com/df-mixer-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/df-mixer-prod",0x2a,2);
  pcRam0000000113812308 = pcVar1;
  return;
}



/* Entry: 103eedb4c; end: 103eedb67; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints dfRegionAgnosticEndpoint] */

void FUN_103eedb4c(void)

{
  if (lRam000000011302d280 != -1) {
    _swift_once(0x11302d280,FUN_103eedb0c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812308);
  return;
}



/* Entry: 103eedb68; end: 103eedba7;  */

void FUN_103eedb68(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://gcp.api.snapchat.com/df-spotlight-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/df-spotlight-prod",0x2e,2);
  pcRam0000000113812310 = pcVar1;
  return;
}



/* Entry: 103eedba8; end: 103eedbc3; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints spotlightRegionAgnosticEndpoint] */

void FUN_103eedba8(void)

{
  if (lRam000000011302d288 != -1) {
    _swift_once(0x11302d288,FUN_103eedb68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812310);
  return;
}



/* Entry: 103eedbc4; end: 103eedc03;  */

void FUN_103eedbc4(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/content-gateway";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/content-gateway",0x38,2);
  pcRam0000000113812318 = pcVar1;
  return;
}



/* Entry: 103eedc04; end: 103eedc1f; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints defaultGatewayEndpoint] */

void FUN_103eedc04(void)

{
  if (lRam000000011302d290 != -1) {
    _swift_once(0x11302d290,FUN_103eedbc4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812318);
  return;
}



/* Entry: 103eedc20; end: 103eedc5f;  */

void FUN_103eedc20(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "https://gcp.api.snapchat.com/content-gateway";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/content-gateway",0x2c,2);
  pcRam0000000113812320 = pcVar1;
  return;
}



/* Entry: 103eedc60; end: 103eedc7b; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints gatewayRegionAgnosticEndpoint] */

void FUN_103eedc60(void)

{
  if (lRam000000011302d298 != -1) {
    _swift_once(0x11302d298,FUN_103eedc20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812320);
  return;
}



/* Entry: 103eedc7c; end: 103eedcbf;  */

void FUN_103eedc7c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103eedcc0; end: 103eedcdf;  */

void FUN_103eedcc0(void)

{
  _objc_opt_self(&PTR_PTR_1129637f8);
  return;
}



/* Entry: 103eedce0; end: 103eedd1b; -[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints init] */

void FUN_103eedce0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103eedcc0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eedd1c; end: 103eedd4b;  */

void FUN_103eedd1c(void)

{
  FUN_103eedcc0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eedd4c; end: 103eedd63; -[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints .cxx_destruct] */

void FUN_103eedd4c(void)

{
  return;
}


