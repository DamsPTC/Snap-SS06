/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cb8f7c; end: 102cb8faf;  */

void FUN_102cb8f7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb8fb0; end: 102cb902b; -[SCOperaEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cb8fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cb8ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb8fd4) */
/* WARNING: Removing unreachable block (ram,0x000102cb8ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0a568 + 8))
  ;
  return;
}



/* Entry: 102cb902c; end: 102cb903b;  */

ulong FUN_102cb902c(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 102cb903c; end: 102cb920b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb903c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_2 + _DAT_112f0a560);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar5 = ((undefined8 *)(param_2 + _DAT_112f0a568))[1];
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cb9134);
        (*pcVar2)();
      }
      lVar4 = ((undefined8 *)(param_2 + _DAT_112f0a570))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cb913c);
        (*pcVar2)();
      }
      uVar7 = *(undefined8 *)(param_2 + _DAT_112f0a568);
      uVar6 = *(undefined8 *)(param_2 + _DAT_112f0a570);
      func_0x000107c61434(lVar5);
      lVar8 = lVar4;
      goto LAB_102cb910c;
    }
    puVar3 = (undefined8 *)(param_2 + _DAT_112f0a578);
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cb90e8);
      (*pcVar2)();
    }
  }
  else if (bVar1 == 2) {
    puVar3 = (undefined8 *)(param_2 + _DAT_112f0a580);
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cb90d0);
      (*pcVar2)();
    }
  }
  else {
    puVar3 = (undefined8 *)(param_2 + _DAT_112f0a588);
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cb9138);
      (*pcVar2)();
    }
  }
  uVar6 = 0;
  lVar8 = 0;
  uVar7 = *puVar3;
  lVar5 = lVar4;
LAB_102cb910c:
  func_0x000107c61434(lVar4);
  *param_1 = uVar7;
  param_1[1] = lVar5;
  param_1[2] = uVar6;
  param_1[3] = lVar8;
  *(byte *)(param_1 + 4) = bVar1;
  return;
}



/* Entry: 102cb920c; end: 102cb943f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb920c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_102cb9440();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112f0a560) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0a568);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0a570);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_112f0a578);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0a580);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0a588);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 102cb9440; end: 102cb945f;  */

void FUN_102cb9440(void)

{
  func_0x000107c61168(&PTR_PTR_11289d220);
  return;
}



/* Entry: 102cb9460; end: 102cb95c7;  */

int FUN_102cb9460(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102cb94dc;
        goto LAB_102cb94c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102cb94c0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102cb94dc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102cb95c8; end: 102cb9607;  */

void FUN_102cb95c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d444;
  func_0x000107c61520(&UNK_10db3d444,&UNK_1105bdbb0);
  puRam0000000112f0a5b8 = puVar1;
  return;
}



/* Entry: 102cb9608; end: 102cb9613;  */

/* WARNING: Possible PIC construction at 0x000102409ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409acc) */

void FUN_102cb9608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cb9614; end: 102cb964b;  */

void FUN_102cb9614(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cb964c; end: 102cb9653;  */

void FUN_102cb964c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cb9654; end: 102cb96bf;  */

undefined8 * FUN_102cb9654(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb884c();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c00();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  return puVar2;
}



/* Entry: 102cb96c0; end: 102cb9747; -[SCOperaUITestsHelperPlugin registeredEventsForOperaSession] */

void FUN_102cb96c0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb884c();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c00();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102cb9748; end: 102cb974f;  */

/* WARNING: Possible PIC construction at 0x000102cb99f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb99fc) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a0c) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9748(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long unaff_x20;
  byte bStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar3 = param_1;
  func_0x000103bb9c00();
  plVar2 = (long *)*plVar3;
  if ((plVar2 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar2,plVar3[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
    lVar4 = unaff_x20 + _DAT_112f0a5c0;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  func_0x000103bb884c();
  plVar3 = (long *)*plVar2;
  if ((plVar3 != param_1 || plVar2[1] != param_2) &&
     (func_0x000107c605b8(plVar3,plVar2[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
    return;
  }
  if ((param_4 == 0) || (func_0x000103bb88c0(), *(long *)(param_4 + 0x10) == 0)) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar4 = *plVar3;
    uVar1 = plVar3[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_4);
    uVar6 = uVar1;
    func_0x000100029284(lVar4);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_4);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar4 * 0x20,&uStack_50);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_4);
      if (lStack_38 != 0) {
        pbVar5 = &bStack_51;
        func_0x000107c6147c(pbVar5,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if (((int)pbVar5 != 0) && ((bStack_51 & 1) != 0)) {
          return;
        }
        goto LAB_102cb9d94;
      }
    }
  }
  func_0x00010006e7f4(&uStack_50);
LAB_102cb9d94:
  func_0x000102cb991c();
  return;
}



/* Entry: 102cb9750; end: 102cb9807; -[SCOperaUITestsHelperPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102cb97ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb97f0) */

void FUN_102cb9750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102cb9c34(param_3,param_2,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cb9808; end: 102cb980b;  */

void FUN_102cb9808(void)

{
  return;
}



/* Entry: 102cb980c; end: 102cb980f; -[SCOperaUITestsHelperPlugin setPlaylistItemController:] */

void FUN_102cb980c(void)

{
  return;
}



/* Entry: 102cb9810; end: 102cb987f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9810(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      goto LAB_102cb9858;
    }
  }
  lVar1 = 0;
LAB_102cb9858:
  func_0x000107c61604(unaff_x20 + _DAT_112f0a5c0,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102cb9880; end: 102cb99d7; -[SCOperaUITestsHelperPlugin setOperaControlling:] */

/* WARNING: Possible PIC construction at 0x000102cb9904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb9908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c615f0();
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c615e8(param_3);
  }
  func_0x000107c61604(param_1 + _DAT_112f0a5c0,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102cb99d8; end: 102cb9a2f;  */

/* WARNING: Possible PIC construction at 0x000102cb99f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb99fc) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a0c) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb99d8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f0a5c0;
  func_0x000107c61618();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102cb9a30; end: 102cb9a8b; -[SCOperaUITestsHelperPlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9a30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112f0a5c0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_1 + _DAT_112f0a5c8) = 0;
  FUN_102cb9dac();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb9a8c; end: 102cb9a97;  */

void FUN_102cb9a8c(void)

{
  FUN_102cb9dac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb9a98; end: 102cb9acf; -[SCOperaUITestsHelperPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9a98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f0a5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0a5c8));
  return;
}



/* Entry: 102cb9ad0; end: 102cb9b9f; -[_TtC24OperaUITestsHelperPluginP33_EB93DF47355004F9203279AACE3397AD14PITNSignalView initWithFrame:] */

undefined1 *
FUN_102cb9ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &uStack_50;
  uVar2 = param_5;
  func_0x000102cb9dcc();
  uStack_50 = param_5;
  uStack_48 = uVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c54b80(0,0,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = 0x696d655f4e544950;
  func_0x000107c5fadc(0x696d655f4e544950,0xec00000064657474);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  return (undefined1 *)puVar1;
}



/* Entry: 102cb9ba0; end: 102cb9bf7; -[_TtC24OperaUITestsHelperPluginP33_EB93DF47355004F9203279AACE3397AD14PITNSignalView initWithCoder:] */

void FUN_102cb9ba0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "OperaUITestsHelperPlugin/OperaUITestsHelperPlugin.swift",0x37,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb9bf8);
  (*pcVar1)();
}



/* Entry: 102cb9bf8; end: 102cb9c03;  */

void FUN_102cb9bf8(void)

{
  (*(code *)0x102cb9dcc)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb9c04; end: 102cb9c33;  */

void FUN_102cb9c04(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb9c34; end: 102cb9dab;  */

/* WARNING: Possible PIC construction at 0x000102cb99f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb99fc) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a0c) */
/* WARNING: Removing unreachable block (ram,0x000102cb9a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9c34(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long unaff_x20;
  byte bStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar3 = param_1;
  func_0x000103bb9c00();
  plVar2 = (long *)*plVar3;
  if ((plVar2 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar2,plVar3[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
    lVar4 = unaff_x20 + _DAT_112f0a5c0;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  func_0x000103bb884c();
  plVar3 = (long *)*plVar2;
  if ((plVar3 != param_1 || plVar2[1] != param_2) &&
     (func_0x000107c605b8(plVar3,plVar2[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
    return;
  }
  if ((param_3 == 0) || (func_0x000103bb88c0(), *(long *)(param_3 + 0x10) == 0)) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar4 = *plVar3;
    uVar1 = plVar3[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar6 = uVar1;
    func_0x000100029284(lVar4);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(param_3);
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar4 * 0x20,&uStack_50);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (lStack_38 != 0) {
        pbVar5 = &bStack_51;
        func_0x000107c6147c(pbVar5,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if (((int)pbVar5 != 0) && ((bStack_51 & 1) != 0)) {
          return;
        }
        goto LAB_102cb9d94;
      }
    }
  }
  func_0x00010006e7f4(&uStack_50);
LAB_102cb9d94:
  func_0x000102cb991c();
  return;
}



/* Entry: 102cb9dac; end: 102cb9deb;  */

void FUN_102cb9dac(void)

{
  func_0x000107c61168(&PTR_PTR_11289d308);
  return;
}



/* Entry: 102cb9dec; end: 102cb9e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9dec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0a620) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb9e38; end: 102cb9e8f; -[SCOperaComposerEventsPlugin initWithComposerOperaEventProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb9e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f0a620) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102cb9e90; end: 102cb9e93; -[SCOperaComposerEventsPlugin setPlaylistItemController:] */

void FUN_102cb9e90(void)

{
  return;
}



/* Entry: 102cb9e94; end: 102cb9ecf; -[SCOperaComposerEventsPlugin registeredEventsForOperaSession] */

void FUN_102cb9e94(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_102cba4d4();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb9ed0; end: 102cba3d3;  */

/* WARNING: Possible PIC construction at 0x000102cb9f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cb9fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cb9fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba6f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cba804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cba7f4) */
/* WARNING: Removing unreachable block (ram,0x000102cba7c0) */
/* WARNING: Removing unreachable block (ram,0x000102cba3bc) */
/* WARNING: Removing unreachable block (ram,0x000102cba3ac) */
/* WARNING: Removing unreachable block (ram,0x000102cba398) */
/* WARNING: Removing unreachable block (ram,0x000102cba364) */
/* WARNING: Removing unreachable block (ram,0x000102cba2ec) */
/* WARNING: Removing unreachable block (ram,0x000102cba73c) */
/* WARNING: Removing unreachable block (ram,0x000102cba728) */
/* WARNING: Removing unreachable block (ram,0x000102cba6f4) */
/* WARNING: Removing unreachable block (ram,0x000102cba108) */
/* WARNING: Removing unreachable block (ram,0x000102cba05c) */
/* WARNING: Removing unreachable block (ram,0x000102cb9fbc) */
/* WARNING: Removing unreachable block (ram,0x000102cb9fa8) */
/* WARNING: Removing unreachable block (ram,0x000102cb9f74) */
/* WARNING: Removing unreachable block (ram,0x000102cb9f98) */
/* WARNING: Removing unreachable block (ram,0x000102cba808) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102cb9ed0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar2 = param_1;
  func_0x000103bb9ca8();
  if ((param_1 == (long *)*plVar2 && param_2 == plVar2[1]) ||
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0),
     ((ulong)plVar3 & 1) != 0)) {
    FUN_102cba580(PTR_PTR_1133e0ba0,param_3);
    puVar7 = PTR_PTR_1126ac1e8;
    func_0x000107c610f8(PTR_PTR_1126ac1e8);
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126ac1f0;
    func_0x000107c610f8(PTR_PTR_1126ac1f0);
    func_0x000107c45938();
    func_0x000107c56fe8(puVar7);
    goto code_r0x000107c61170;
  }
  func_0x000103bb9ee0();
  if ((param_1 == (long *)*plVar3 && param_2 == plVar3[1]) ||
     (plVar2 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar3,plVar3[1],0),
     ((ulong)plVar2 & 1) != 0)) {
    FUN_102cba580(PTR_PTR_1133e0ba8,param_3);
    puVar7 = PTR_PTR_1126ac1e8;
    func_0x000107c610f8(PTR_PTR_1126ac1e8);
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126ac200;
    func_0x000107c610f8(PTR_PTR_1126ac200);
    func_0x000107c45938();
    func_0x000107c534c4(puVar7);
    goto code_r0x000107c61170;
  }
  func_0x000103bb9f54();
  if (((param_1 == (long *)*plVar2) && (param_2 == plVar2[1])) ||
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0),
     ((ulong)plVar3 & 1) != 0)) {
    FUN_102cba580(PTR_PTR_1133e0bc0,param_3);
    puVar7 = PTR_PTR_1126ac1e8;
    func_0x000107c610f8(PTR_PTR_1126ac1e8);
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126ac208;
    func_0x000107c610f8(PTR_PTR_1126ac208);
    func_0x000107c45938();
    func_0x000107c545c4(puVar7);
    goto code_r0x000107c61170;
  }
  func_0x000103bb9c00();
  if (((param_1 == (long *)*plVar3) && (param_2 == plVar3[1])) ||
     (plVar2 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar3,plVar3[1],0),
     ((ulong)plVar2 & 1) != 0)) {
    FUN_102cba580(PTR_PTR_1133e0bb0,param_3);
    puVar7 = PTR_PTR_1126ac1e8;
    func_0x000107c610f8(PTR_PTR_1126ac1e8);
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126ac210;
    func_0x000107c610f8(PTR_PTR_1126ac210);
    func_0x000107c45938();
    func_0x000107c56fe4(puVar7);
    goto code_r0x000107c61170;
  }
  func_0x000103bb9c70();
  if (((param_1 != (long *)*plVar2) || (param_2 != plVar2[1])) &&
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0),
     ((ulong)plVar3 & 1) == 0)) {
    func_0x000103bb8034();
    if (((param_1 != (long *)*plVar3) || (param_2 != plVar3[1])) &&
       (func_0x000107c605b8(param_1,param_2,(long *)*plVar3,plVar3[1],0), ((ulong)param_1 & 1) == 0)
       ) {
      return;
    }
    FUN_102cba580(PTR_PTR_1133e0bc8,param_3);
    puVar7 = PTR_PTR_1126ac220;
    func_0x000107c610f8(PTR_PTR_1126ac220);
    func_0x000107c453e4();
    puVar8 = PTR_PTR_1126ac228;
    func_0x000107c610f8(PTR_PTR_1126ac228);
    func_0x000107c45938();
    func_0x000107c5614c(puVar7);
    goto code_r0x000107c61170;
  }
  plVar2 = (long *)PTR_PTR_1133e0bb8;
  FUN_102cba580(PTR_PTR_1133e0bb8,param_3);
  if (param_4 != 0) {
    func_0x000103bb740c();
    if (*(long *)(param_4 + 0x10) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      lVar4 = *plVar2;
      uVar1 = plVar2[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(param_4);
      uVar9 = uVar1;
      func_0x000100029284(lVar4);
      if ((uVar9 & 1) == 0) {
        func_0x000107c6142c(param_4);
        uStack_58 = 0;
        uStack_60 = 0;
        lStack_48 = 0;
        uStack_50 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar4 * 0x20,&uStack_60);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_4);
        if (lStack_48 != 0) {
          uVar5 = 0;
          func_0x0001002ed07c(0);
          ppuVar6 = &puStack_68;
          func_0x000107c6147c(ppuVar6,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
          if (((ulong)ppuVar6 & 1) != 0) {
            func_0x000107c3ebcc(puStack_68);
            puVar8 = puStack_68;
            goto code_r0x000107c61170;
          }
          goto LAB_102cba31c;
        }
      }
    }
    func_0x00010006e7f4(&uStack_60);
  }
LAB_102cba31c:
  puVar7 = PTR_PTR_1126ac1e8;
  func_0x000107c610f8(PTR_PTR_1126ac1e8);
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126ac218;
  func_0x000107c610f8(PTR_PTR_1126ac218);
  func_0x000107c4593c();
  func_0x000107c534c0(puVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 102cba3d4; end: 102cba48f; -[SCOperaComposerEventsPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102cba474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cba478) */

void FUN_102cba3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102cb9ed0(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cba490; end: 102cba4c3;  */

void FUN_102cba490(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cba4c4; end: 102cba4d3; -[SCOperaComposerEventsPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cba4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0a620));
  return;
}



/* Entry: 102cba4d4; end: 102cba57f;  */

undefined8 * FUN_102cba4d4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 0xc;
  puVar2[2] = 6;
  puVar3 = puVar2;
  func_0x000103bb9ca8();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9ee0();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9f54();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c00();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[10] = *puVar4;
  puVar2[0xb] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9c70();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[0xc] = *puVar3;
  puVar2[0xd] = puVar4;
  func_0x000107c61434();
  func_0x000103bb8034();
  uVar1 = puVar4[1];
  puVar2[0xe] = *puVar4;
  puVar2[0xf] = uVar1;
  func_0x000107c61434();
  return puVar2;
}



/* Entry: 102cba580; end: 102cba68b;  */

undefined * FUN_102cba580(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar2 = PTR_PTR_1126ac1f8;
  func_0x000107c610f8(PTR_PTR_1126ac1f8);
  func_0x000107c48d3c(param_1 * 1000.0);
  if (param_3 != 0) {
    func_0x000107c3b9ac();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar1);
    }
  }
  func_0x000107c571ac(puVar2);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 102cba68c; end: 102cba823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cba68c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1133e0bb0;
  FUN_102cba580(PTR_PTR_1133e0bb0,param_1);
  puVar2 = PTR_PTR_1126ac1e8;
  func_0x000107c610f8(PTR_PTR_1126ac1e8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ac210;
  func_0x000107c610f8(PTR_PTR_1126ac210);
  func_0x000107c45938();
  func_0x000107c56fe4(puVar2);
  func_0x000107c61170(puVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a620);
  func_0x000107c5df5c(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5cb34();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c4d664(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 102cba824; end: 102cba927;  */

void FUN_102cba824(void)

{
  func_0x000107c61168(&PTR_PTR_11289d4e0);
  return;
}



/* Entry: 102cba928; end: 102cba947; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin init] */

void FUN_102cba928(void)

{
  func_0x000102cba844();
  return;
}



/* Entry: 102cba948; end: 102cba94b;  */

void FUN_102cba948(void)

{
  return;
}



/* Entry: 102cba94c; end: 102cba94f; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin setPlaylistItemController:] */

void FUN_102cba94c(void)

{
  return;
}



/* Entry: 102cba950; end: 102cbab2b;  */

/* WARNING: Possible PIC construction at 0x000102cba9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbaa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbaaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbac48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cba9d0) */
/* WARNING: Removing unreachable block (ram,0x000102cbaa7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cba950(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  
  lVar3 = _DAT_112f0a650;
  func_0x000107c61604(unaff_x20 + _DAT_112f0a650,param_1);
  if (param_1 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f0a690) = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c4dec0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar7 = *(ulong *)(lVar2 + _DAT_11307a250);
      func_0x000107c615f0(uVar7);
      func_0x000107c61170(lVar2);
      if (uVar7 != 0) {
        func_0x000107c5cfcc(uVar7);
        goto code_r0x000107c615e8;
      }
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f0a690) = 0;
    lVar2 = param_1;
    func_0x000107c40110();
    func_0x000107c61180();
    if ((lVar2 != 0) &&
       (cVar1 = *(char *)(lVar2 + _DAT_113079320), func_0x000107c61170(), cVar1 == '\x01')) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0a680) = 0;
      return;
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f0a680) = 1;
  uVar7 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (uVar7 == 0) {
    if (param_1 != 0) {
      func_0x000107c4dec0();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar7 = *(ulong *)(param_1 + _DAT_11307a1b8);
        func_0x000107c615f0(uVar7);
        func_0x000107c61170(param_1);
        if (uVar7 != 0) {
          func_0x000107c61604(unaff_x20 + _DAT_112f0a668,uVar7);
          func_0x000107c3d740(uVar7);
          goto code_r0x000107c615e8;
        }
      }
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0a660);
    if ((lVar3 != 0) && (func_0x000107c4a15c(), (int)lVar3 != 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
    }
    if ((*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') &&
       ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0)) {
      uVar7 = unaff_x20 + _DAT_112f0a668;
      func_0x000107c61618();
      if (uVar7 != 0) {
        uVar4 = uVar7;
        func_0x000107c5dad4();
        uVar5 = uVar7;
        func_0x000107c5dacc();
        uVar6 = uVar7;
        func_0x000107c5dad0();
        if (((((uVar4 & 1) == 0) && ((uVar5 & 1) == 0)) &&
            (((uint)*(byte *)(unaff_x20 + _DAT_112f0a690) & (uint)uVar6 & 1) == 0)) &&
           ((*(byte *)(unaff_x20 + _DAT_112f0a670) & 1) == 0)) {
          *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 1;
          uVar4 = unaff_x20 + _DAT_112f0a650;
          func_0x000107c61618();
          if (uVar4 != 0) {
            uVar5 = uVar4;
            func_0x000107c5df08();
            func_0x000107c61180();
            if (uVar5 == 0) {
              func_0x000107c615e8(uVar4);
            }
            else {
              func_0x000107c568bc();
              uVar7 = uVar5;
            }
          }
        }
        goto code_r0x000107c615e8;
      }
    }
    return;
  }
  func_0x000107c4117c();
  func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
  return;
}



/* Entry: 102cbab2c; end: 102cbab73; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin setOperaControlling:] */

void FUN_102cbab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cba950(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbab74; end: 102cbac77;  */

/* WARNING: Possible PIC construction at 0x000102cbac48: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbab74(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0)) {
    uVar1 = unaff_x20 + _DAT_112f0a668;
    func_0x000107c61618();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5dad4();
      uVar3 = uVar1;
      func_0x000107c5dacc();
      uVar4 = uVar1;
      func_0x000107c5dad0();
      if (((((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) &&
          (((uint)*(byte *)(unaff_x20 + _DAT_112f0a690) & (uint)uVar4 & 1) == 0)) &&
         ((*(byte *)(unaff_x20 + _DAT_112f0a670) & 1) == 0)) {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 1;
        uVar2 = unaff_x20 + _DAT_112f0a650;
        func_0x000107c61618();
        if (uVar2 != 0) {
          uVar3 = uVar2;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (uVar3 == 0) {
            func_0x000107c615e8(uVar2);
          }
          else {
            func_0x000107c568bc();
            uVar1 = uVar3;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 102cbac78; end: 102cbac7b;  */

void FUN_102cbac78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102cbac7c; end: 102cbac87; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin updateOperaDependencies:] */

void FUN_102cbac7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_3);
  return;
}



/* Entry: 102cbac88; end: 102cbacc3; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin registeredEventsForOperaSession] */

void FUN_102cbac88(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_102cbb984();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cbacc4; end: 102cbacc7;  */

/* WARNING: Possible PIC construction at 0x000102cbaf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbb5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbb530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbbcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbbb6c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbacc4(ulong *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long unaff_x20;
  
  lVar2 = _DAT_112f0a680;
  lVar9 = _DAT_112f0a660;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) != '\x01') {
    return;
  }
  puVar10 = param_1;
  if (*(long *)(unaff_x20 + _DAT_112f0a658) == 0) {
    puVar10 = *(ulong **)(unaff_x20 + _DAT_112f0a660);
    if ((puVar10 == (ulong *)0x0) || (func_0x000107c4a15c(), (int)puVar10 == 0)) {
      lVar5 = _DAT_112f0a688;
      if ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0) {
        FUN_102cbad7c();
        FUN_102cbb0d0();
        if ((*(char *)(unaff_x20 + lVar2) == '\x01') && ((*(byte *)(unaff_x20 + lVar5) & 1) == 0)) {
          puVar10 = *(ulong **)(unaff_x20 + lVar9);
          if (puVar10 != (ulong *)0x0) {
            func_0x000107c4a15c();
          }
          *(char *)(unaff_x20 + _DAT_112f0a678) = (char)puVar10;
          FUN_102cbaeb4();
        }
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
      if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
        puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
        func_0x000107c61618();
        if (puVar10 != (ulong *)0x0) {
          puVar7 = puVar10;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (puVar7 != (ulong *)0x0) {
            func_0x000107c568bc();
            goto code_r0x000107c615e8;
          }
          func_0x000107c615e8();
        }
      }
    }
  }
  func_0x000103bba108();
  puVar7 = (ulong *)*puVar10;
  if ((puVar7 != param_1 || puVar10[1] != param_2) &&
     (func_0x000107c605b8(puVar7,puVar10[1],param_1,param_2,0), ((ulong)puVar7 & 1) == 0)) {
    func_0x000103bb9fc4();
    puVar8 = (undefined8 *)*puVar7;
    if (((puVar8 != param_1) || (puVar7[1] != param_2)) &&
       (func_0x000107c605b8(puVar8,puVar7[1],param_1,param_2,0), ((ulong)puVar8 & 1) == 0)) {
      func_0x000103bb9f8c();
      puVar10 = (ulong *)*puVar8;
      if (((puVar10 != param_1) || (puVar8[1] != param_2)) &&
         (func_0x000107c605b8(puVar10,puVar8[1],param_1,param_2,0), ((ulong)puVar10 & 1) == 0)) {
        func_0x000103bb9f54();
        puVar7 = (ulong *)*puVar10;
        if (((puVar7 != param_1) || (puVar10[1] != param_2)) &&
           (func_0x000107c605b8(puVar7,puVar10[1],param_1,param_2,0), ((ulong)puVar7 & 1) == 0)) {
          func_0x000103bb9ea8();
          puVar10 = (ulong *)*puVar7;
          if (((puVar10 != param_1) || (puVar7[1] != param_2)) &&
             (func_0x000107c605b8(puVar10,puVar7[1],param_1,param_2,0), ((ulong)puVar10 & 1) == 0))
          {
            return;
          }
          puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a668);
          func_0x000107c61618();
          if (puVar7 != (ulong *)0x0) {
            func_0x000107c4ff64();
            goto code_r0x000107c615e8;
          }
        }
        lVar9 = _DAT_112f0a658;
        func_0x000107c5bdf4(*(undefined8 *)(unaff_x20 + _DAT_112f0a658));
        uVar4 = 0;
        if (*(long *)(unaff_x20 + lVar9) != 0) {
          func_0x000107c4ff64();
          uVar4 = *(undefined8 *)(unaff_x20 + lVar9);
        }
        *(undefined8 *)(unaff_x20 + lVar9) = 0;
        func_0x000107c61170(uVar4);
        puVar8 = (undefined8 *)(unaff_x20 + _DAT_112f0a698);
        *puVar8 = 0;
        *(undefined1 *)(puVar8 + 1) = 1;
        return;
      }
      lVar2 = _DAT_112f0a680;
      lVar9 = _DAT_112f0a660;
      if (*(char *)(unaff_x20 + _DAT_112f0a680) != '\x01') {
        return;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112f0a660);
      if (lVar5 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000107c4a15c();
        uVar3 = (uint)lVar5;
      }
      puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a668);
      func_0x000107c61618();
      if (puVar7 == (ulong *)0x0) {
        return;
      }
      puVar10 = puVar7;
      func_0x000107c51b18();
      if (((int)puVar10 == 0) ||
         (((puVar6 = puVar7, func_0x000107c5dad4(), ((ulong)puVar6 & 1) == 0 &&
           (puVar6 = puVar7, func_0x000107c5dacc(), ((ulong)puVar6 & 1) == 0)) &&
          ((*(char *)(unaff_x20 + _DAT_112f0a690) != '\x01' ||
           (puVar6 = puVar7, func_0x000107c5dad0(), (int)puVar6 == 0)))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar5 = _DAT_112f0a688;
      if (*(char *)(unaff_x20 + _DAT_112f0a688) == '\x01') {
        if (((uVar3 & 1) == 0 && !bVar1) &&
           (*(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 0, ((ulong)puVar10 & 1) != 0)) {
LAB_102cbb548:
          puVar10 = puVar7;
          func_0x000107c5dad4();
          if ((((((ulong)puVar10 & 1) != 0) ||
               (puVar10 = puVar7, func_0x000107c5dacc(), ((ulong)puVar10 & 1) != 0)) ||
              ((*(char *)(unaff_x20 + _DAT_112f0a690) == '\x01' &&
               (puVar10 = puVar7, func_0x000107c5dad0(), (int)puVar10 != 0)))) &&
             (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01')) {
            *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
            puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
            func_0x000107c61618();
            if (puVar10 != (ulong *)0x0) {
              puVar6 = puVar10;
              func_0x000107c5df08();
              func_0x000107c61180();
              if (puVar6 != (ulong *)0x0) {
                func_0x000107c568bc();
                puVar7 = puVar6;
                goto code_r0x000107c615e8;
              }
              func_0x000107c615e8(puVar10);
            }
          }
        }
      }
      else {
        if (uVar3 != 0 || bVar1) {
          *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
          if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
            *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
            puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
            func_0x000107c61618();
            if (puVar10 != (ulong *)0x0) {
              puVar6 = puVar10;
              func_0x000107c5df08();
              func_0x000107c61180();
              if (puVar6 != (ulong *)0x0) {
                func_0x000107c568bc();
                puVar7 = puVar6;
                goto code_r0x000107c615e8;
              }
              func_0x000107c615e8(puVar10);
            }
          }
          FUN_102cbade8();
          goto code_r0x000107c615e8;
        }
        if ((int)puVar10 != 0) goto LAB_102cbb548;
      }
      FUN_102cbb25c();
      if ((*(byte *)(unaff_x20 + lVar5) & 1) == 0) {
        FUN_102cbad7c();
        FUN_102cbb0d0();
        if ((*(char *)(unaff_x20 + lVar2) == '\x01') && ((*(byte *)(unaff_x20 + lVar5) & 1) == 0)) {
          lVar9 = *(long *)(unaff_x20 + lVar9);
          if (lVar9 != 0) {
            func_0x000107c4a15c();
          }
          *(char *)(unaff_x20 + _DAT_112f0a678) = (char)lVar9;
          FUN_102cbaeb4();
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  if ((*(char *)(unaff_x20 + lVar2) != '\x01') || ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) != 0)
     ) {
    return;
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112f0a660);
  if (lVar9 != 0) {
    func_0x000107c4a15c();
  }
  uVar3 = (uint)lVar9;
  *(char *)(unaff_x20 + _DAT_112f0a678) = (char)lVar9;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') {
    FUN_102cbaf50();
    if ((uVar3 & 1) != (uint)*(byte *)(unaff_x20 + _DAT_112f0a670)) {
      *(char *)(unaff_x20 + _DAT_112f0a670) = (char)(uVar3 & 1);
      puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a650);
      func_0x000107c61618();
      if (puVar7 != (ulong *)0x0) {
        puVar10 = puVar7;
        func_0x000107c5df08();
        func_0x000107c61180();
        if (puVar10 != (ulong *)0x0) {
          func_0x000107c568bc();
          puVar7 = puVar10;
        }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 102cbacc8; end: 102cbad7b; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102cbad60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbad64) */

void FUN_102cbacc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102cbba20(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cbad7c; end: 102cbade7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbad7c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b6df8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112f0a658;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0a658);
  *(undefined **)(unaff_x20 + _DAT_112f0a658) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d740(puVar2);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + lVar1),PTR_s_start_112671080);
  return;
}



/* Entry: 102cbade8; end: 102cbae43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbade8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112f0a658;
  func_0x000107c5bdf4(*(undefined8 *)(unaff_x20 + _DAT_112f0a658));
  uVar3 = 0;
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c4ff64();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a698);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 102cbae44; end: 102cbaeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbae44(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  FUN_102cbade8();
  puVar2 = PTR_PTR_1126b6df8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112f0a658;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0a658);
  *(undefined **)(unaff_x20 + _DAT_112f0a658) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d740(puVar2);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + lVar1),PTR_s_start_112671080);
  return;
}



/* Entry: 102cbaeb4; end: 102cbaf4f;  */

/* WARNING: Possible PIC construction at 0x000102cbaf30: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbaeb4(uint param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') {
    FUN_102cbaf50();
    if ((param_1 & 1) != (uint)*(byte *)(unaff_x20 + _DAT_112f0a670)) {
      *(char *)(unaff_x20 + _DAT_112f0a670) = (char)(param_1 & 1);
      lVar1 = unaff_x20 + _DAT_112f0a650;
      func_0x000107c61618();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5df08();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c568bc();
          lVar1 = lVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 102cbaf50; end: 102cbb0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbaf50(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  uVar1 = unaff_x20 + _DAT_112f0a668;
  func_0x000107c61618();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c51b18();
  uVar3 = uVar1;
  func_0x000107c5dad4();
  uVar4 = uVar1;
  func_0x000107c5dacc();
  uVar5 = uVar1;
  func_0x000107c5dad0();
  if (((uVar3 & 1) == 0) && ((int)uVar4 == 0)) {
    if (*(char *)(unaff_x20 + _DAT_112f0a690) == '\x01') {
      if ((uVar2 & 1) == 0) {
        if ((int)uVar5 != 0) goto LAB_102cbb040;
      }
      else if ((int)uVar5 != 0) goto LAB_102cbafd0;
    }
    lVar7 = *(long *)(unaff_x20 + _DAT_112f0a660);
    if (lVar7 == 0) {
      func_0x000107c615e8(uVar1);
    }
    else {
      func_0x000107c615f0(lVar7);
      func_0x000107c4a15c();
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(uVar1);
    }
  }
  else {
    if ((uVar2 & 1) != 0) {
LAB_102cbafd0:
      *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
      if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
        lVar7 = unaff_x20 + _DAT_112f0a650;
        func_0x000107c61618();
        if (lVar7 != 0) {
          lVar6 = lVar7;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c568bc();
            func_0x000107c615e8(lVar6);
          }
          func_0x000107c615e8(lVar7);
        }
      }
      FUN_102cbade8();
    }
LAB_102cbb040:
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102cbb0d0; end: 102cbb203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbb0d0(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112f0a668;
    func_0x000107c61618();
    if (lVar1 != 0) {
      pcVar2 = "handleInitialHeadphonesState()";
      func_0x0001000c10c0("handleInitialHeadphonesState()");
      func_0x000107c61180();
      puVar3 = &UNK_1105bde20;
      func_0x000107c613fc(&UNK_1105bde20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1105bdf08;
      func_0x000107c613fc(&UNK_1105bdf08,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar1;
      pcStack_40 = FUN_102cbc0a8;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      pcStack_50 = FUN_102cbb204;
      puStack_48 = &UNK_1105bdf20;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      puVar3 = puStack_38;
      func_0x000107c615f0(pcVar2);
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c3f9a0(lVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c615ec(pcVar2,2);
    }
  }
  return;
}



/* Entry: 102cbb204; end: 102cbb25b;  */

void FUN_102cbb204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102cbb25c; end: 102cbb277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbb25c(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar4 = &UNK_1105bdeb8;
  ppuVar5 = &puStack_80;
  if ((*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0)) {
    lVar1 = unaff_x20 + _DAT_112f0a668;
    func_0x000107c61618();
    if (lVar1 != 0) {
      pcVar2 = "updateHeadphonesState()";
      func_0x0001000c10c0("updateHeadphonesState()");
      func_0x000107c61180();
      puVar3 = &UNK_1105bde20;
      func_0x000107c613fc(&UNK_1105bde20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      func_0x000107c613fc(&UNK_1105bdeb8,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar1;
      pcStack_60 = FUN_102cbc09c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_102cbb204;
      puStack_68 = &UNK_1105bded0;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c615f0(pcVar2);
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c3f9a0(lVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c615ec(pcVar2,2);
    }
  }
  return;
}



/* Entry: 102cbb278; end: 102cbb3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbb278(ulong param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_48 [24];
  
  uVar4 = (uint)param_3;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5dacc();
    func_0x000107c5dad0();
    lVar3 = _DAT_112f0a688;
    if ((((param_1 & 1) == 0) && ((param_3 & 1) == 0)) &&
       ((*(byte *)(param_2 + _DAT_112f0a690) & uVar4 & 1) == 0)) {
      if (*(char *)(param_2 + _DAT_112f0a688) == '\x01') {
        *(undefined1 *)(param_2 + _DAT_112f0a688) = 0;
        FUN_102cbae44();
        if ((*(char *)(param_2 + _DAT_112f0a680) == '\x01') &&
           ((*(byte *)(param_2 + lVar3) & 1) == 0)) {
          lVar3 = *(long *)(param_2 + _DAT_112f0a660);
          if (lVar3 != 0) {
            func_0x000107c4a15c();
          }
          *(char *)(param_2 + _DAT_112f0a678) = (char)lVar3;
          FUN_102cbaeb4();
        }
      }
    }
    else if ((*(byte *)(param_2 + _DAT_112f0a688) & 1) == 0) {
      if (*(char *)(param_2 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(param_2 + _DAT_112f0a670) = 0;
        lVar1 = param_2 + _DAT_112f0a650;
        func_0x000107c61618();
        if (lVar1 != 0) {
          lVar2 = lVar1;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c568bc();
            func_0x000107c615e8(lVar2);
          }
          func_0x000107c615e8(lVar1);
        }
      }
      *(undefined1 *)(param_2 + lVar3) = 1;
      FUN_102cbade8();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102cbb3e0; end: 102cbb63f;  */

/* WARNING: Possible PIC construction at 0x000102cbb5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbb530: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbb3e0(void)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar2 = _DAT_112f0a680;
  lVar8 = _DAT_112f0a660;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) != '\x01') {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0a660);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c4a15c();
    uVar3 = (uint)lVar4;
  }
  uVar5 = unaff_x20 + _DAT_112f0a668;
  func_0x000107c61618();
  if (uVar5 == 0) {
    return;
  }
  uVar6 = uVar5;
  func_0x000107c51b18();
  if (((int)uVar6 == 0) ||
     (((uVar7 = uVar5, func_0x000107c5dad4(), (uVar7 & 1) == 0 &&
       (uVar7 = uVar5, func_0x000107c5dacc(), (uVar7 & 1) == 0)) &&
      ((*(char *)(unaff_x20 + _DAT_112f0a690) != '\x01' ||
       (uVar7 = uVar5, func_0x000107c5dad0(), (int)uVar7 == 0)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar4 = _DAT_112f0a688;
  if (*(char *)(unaff_x20 + _DAT_112f0a688) == '\x01') {
    if (((uVar3 & 1) == 0 && !bVar1) &&
       (*(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 0, (uVar6 & 1) != 0)) {
LAB_102cbb548:
      uVar6 = uVar5;
      func_0x000107c5dad4();
      if (((((uVar6 & 1) != 0) || (uVar6 = uVar5, func_0x000107c5dacc(), (uVar6 & 1) != 0)) ||
          ((*(char *)(unaff_x20 + _DAT_112f0a690) == '\x01' &&
           (uVar6 = uVar5, func_0x000107c5dad0(), (int)uVar6 != 0)))) &&
         (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01')) {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
        uVar6 = unaff_x20 + _DAT_112f0a650;
        func_0x000107c61618();
        if (uVar6 != 0) {
          uVar7 = uVar6;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (uVar7 != 0) {
            func_0x000107c568bc();
            uVar5 = uVar7;
            goto code_r0x000107c615e8;
          }
          func_0x000107c615e8(uVar6);
        }
      }
    }
  }
  else {
    if (uVar3 != 0 || bVar1) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
      if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
        uVar6 = unaff_x20 + _DAT_112f0a650;
        func_0x000107c61618();
        if (uVar6 != 0) {
          uVar7 = uVar6;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (uVar7 != 0) {
            func_0x000107c568bc();
            uVar5 = uVar7;
            goto code_r0x000107c615e8;
          }
          func_0x000107c615e8(uVar6);
        }
      }
      FUN_102cbade8();
      goto code_r0x000107c615e8;
    }
    if ((int)uVar6 != 0) goto LAB_102cbb548;
  }
  FUN_102cbb25c();
  if ((*(byte *)(unaff_x20 + lVar4) & 1) == 0) {
    FUN_102cbad7c();
    FUN_102cbb0d0();
    if ((*(char *)(unaff_x20 + lVar2) == '\x01') && ((*(byte *)(unaff_x20 + lVar4) & 1) == 0)) {
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 != 0) {
        func_0x000107c4a15c();
      }
      *(char *)(unaff_x20 + _DAT_112f0a678) = (char)lVar8;
      FUN_102cbaeb4();
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 102cbb640; end: 102cbb66f;  */

void FUN_102cbb640(void)

{
  func_0x000102cba908();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cbb670; end: 102cbb6c7; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cbb68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbb690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cbb670(long param_1)

{
  param_1 = param_1 + _DAT_112f0a650;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cbb6c8; end: 102cbb7cf;  */

void FUN_102cbb6c8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "secretFeatureChecker(_:didCheck:)";
  func_0x0001000c10c0("secretFeatureChecker(_:didCheck:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105bde20;
  func_0x000107c613fc(&UNK_1105bde20,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105bde48;
  func_0x000107c613fc(&UNK_1105bde48,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_50 = FUN_102cbbce8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105bde60;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102cbb7d0; end: 102cbb827; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin secretFeatureChecker:didCheckSecretFeatureMode:] */

/* WARNING: Possible PIC construction at 0x000102cbb810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbb814) */

void FUN_102cbb7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbb6c8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cbb828; end: 102cbb86b; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin audioSession:didChangeVolume:] */

void FUN_102cbb828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbbde0();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbb86c; end: 102cbb887; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_102cbb86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbbe70(&UNK_1105bdfa8,0x102cbc1f4,&UNK_1105bdfc0);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbb888; end: 102cbb8a3; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_102cbb888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbbe70(&UNK_1105bdf58,0x102cbc1f0,&UNK_1105bdf70);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbb8a4; end: 102cbb90f;  */

void FUN_102cbb8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbbe70(param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbb910; end: 102cbb953; -[_TtC31OperaAmbientAudioBehaviorPlugin31OperaAmbientAudioBehaviorPlugin audioSessionDidBeginInterruption:] */

void FUN_102cbb910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbbfbc();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbb954; end: 102cbb983;  */

bool FUN_102cbb954(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102cbb984; end: 102cbba1f;  */

undefined8 * FUN_102cbb984(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 10;
  puVar2[2] = 5;
  puVar3 = puVar2;
  func_0x000103bba108();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9fc4();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9f8c();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9f54();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[10] = *puVar4;
  puVar2[0xb] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9ea8();
  uVar1 = puVar3[1];
  puVar2[0xc] = *puVar3;
  puVar2[0xd] = uVar1;
  func_0x000107c61434();
  return puVar2;
}



/* Entry: 102cbba20; end: 102cbbce7;  */

/* WARNING: Possible PIC construction at 0x000102cbaf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbb5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbb530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbbcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbbb6c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbba20(ulong *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long unaff_x20;
  
  lVar2 = _DAT_112f0a680;
  lVar9 = _DAT_112f0a660;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) != '\x01') {
    return;
  }
  puVar10 = param_1;
  if (*(long *)(unaff_x20 + _DAT_112f0a658) == 0) {
    puVar10 = *(ulong **)(unaff_x20 + _DAT_112f0a660);
    if ((puVar10 == (ulong *)0x0) || (func_0x000107c4a15c(), (int)puVar10 == 0)) {
      lVar5 = _DAT_112f0a688;
      if ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0) {
        FUN_102cbad7c();
        FUN_102cbb0d0();
        if ((*(char *)(unaff_x20 + lVar2) == '\x01') && ((*(byte *)(unaff_x20 + lVar5) & 1) == 0)) {
          puVar10 = *(ulong **)(unaff_x20 + lVar9);
          if (puVar10 != (ulong *)0x0) {
            func_0x000107c4a15c();
          }
          *(char *)(unaff_x20 + _DAT_112f0a678) = (char)puVar10;
          FUN_102cbaeb4();
        }
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
      if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
        puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
        func_0x000107c61618();
        if (puVar10 != (ulong *)0x0) {
          puVar7 = puVar10;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (puVar7 != (ulong *)0x0) {
            func_0x000107c568bc();
            goto code_r0x000107c615e8;
          }
          func_0x000107c615e8();
        }
      }
    }
  }
  func_0x000103bba108();
  puVar7 = (ulong *)*puVar10;
  if ((puVar7 != param_1 || puVar10[1] != param_2) &&
     (func_0x000107c605b8(puVar7,puVar10[1],param_1,param_2,0), ((ulong)puVar7 & 1) == 0)) {
    func_0x000103bb9fc4();
    puVar8 = (undefined8 *)*puVar7;
    if (((puVar8 != param_1) || (puVar7[1] != param_2)) &&
       (func_0x000107c605b8(puVar8,puVar7[1],param_1,param_2,0), ((ulong)puVar8 & 1) == 0)) {
      func_0x000103bb9f8c();
      puVar10 = (ulong *)*puVar8;
      if (((puVar10 != param_1) || (puVar8[1] != param_2)) &&
         (func_0x000107c605b8(puVar10,puVar8[1],param_1,param_2,0), ((ulong)puVar10 & 1) == 0)) {
        func_0x000103bb9f54();
        puVar7 = (ulong *)*puVar10;
        if (((puVar7 != param_1) || (puVar10[1] != param_2)) &&
           (func_0x000107c605b8(puVar7,puVar10[1],param_1,param_2,0), ((ulong)puVar7 & 1) == 0)) {
          func_0x000103bb9ea8();
          puVar10 = (ulong *)*puVar7;
          if (((puVar10 != param_1) || (puVar7[1] != param_2)) &&
             (func_0x000107c605b8(puVar10,puVar7[1],param_1,param_2,0), ((ulong)puVar10 & 1) == 0))
          {
            return;
          }
          puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a668);
          func_0x000107c61618();
          if (puVar7 != (ulong *)0x0) {
            func_0x000107c4ff64();
            goto code_r0x000107c615e8;
          }
        }
        lVar9 = _DAT_112f0a658;
        func_0x000107c5bdf4(*(undefined8 *)(unaff_x20 + _DAT_112f0a658));
        uVar4 = 0;
        if (*(long *)(unaff_x20 + lVar9) != 0) {
          func_0x000107c4ff64();
          uVar4 = *(undefined8 *)(unaff_x20 + lVar9);
        }
        *(undefined8 *)(unaff_x20 + lVar9) = 0;
        func_0x000107c61170(uVar4);
        puVar8 = (undefined8 *)(unaff_x20 + _DAT_112f0a698);
        *puVar8 = 0;
        *(undefined1 *)(puVar8 + 1) = 1;
        return;
      }
      lVar2 = _DAT_112f0a680;
      lVar9 = _DAT_112f0a660;
      if (*(char *)(unaff_x20 + _DAT_112f0a680) != '\x01') {
        return;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112f0a660);
      if (lVar5 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000107c4a15c();
        uVar3 = (uint)lVar5;
      }
      puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a668);
      func_0x000107c61618();
      if (puVar7 == (ulong *)0x0) {
        return;
      }
      puVar10 = puVar7;
      func_0x000107c51b18();
      if (((int)puVar10 == 0) ||
         (((puVar6 = puVar7, func_0x000107c5dad4(), ((ulong)puVar6 & 1) == 0 &&
           (puVar6 = puVar7, func_0x000107c5dacc(), ((ulong)puVar6 & 1) == 0)) &&
          ((*(char *)(unaff_x20 + _DAT_112f0a690) != '\x01' ||
           (puVar6 = puVar7, func_0x000107c5dad0(), (int)puVar6 == 0)))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar5 = _DAT_112f0a688;
      if (*(char *)(unaff_x20 + _DAT_112f0a688) == '\x01') {
        if (((uVar3 & 1) == 0 && !bVar1) &&
           (*(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 0, ((ulong)puVar10 & 1) != 0)) {
LAB_102cbb548:
          puVar10 = puVar7;
          func_0x000107c5dad4();
          if ((((((ulong)puVar10 & 1) != 0) ||
               (puVar10 = puVar7, func_0x000107c5dacc(), ((ulong)puVar10 & 1) != 0)) ||
              ((*(char *)(unaff_x20 + _DAT_112f0a690) == '\x01' &&
               (puVar10 = puVar7, func_0x000107c5dad0(), (int)puVar10 != 0)))) &&
             (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01')) {
            *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
            puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
            func_0x000107c61618();
            if (puVar10 != (ulong *)0x0) {
              puVar6 = puVar10;
              func_0x000107c5df08();
              func_0x000107c61180();
              if (puVar6 != (ulong *)0x0) {
                func_0x000107c568bc();
                puVar7 = puVar6;
                goto code_r0x000107c615e8;
              }
              func_0x000107c615e8(puVar10);
            }
          }
        }
      }
      else {
        if (uVar3 != 0 || bVar1) {
          *(undefined1 *)(unaff_x20 + _DAT_112f0a688) = 1;
          if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
            *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
            puVar10 = (ulong *)(unaff_x20 + _DAT_112f0a650);
            func_0x000107c61618();
            if (puVar10 != (ulong *)0x0) {
              puVar6 = puVar10;
              func_0x000107c5df08();
              func_0x000107c61180();
              if (puVar6 != (ulong *)0x0) {
                func_0x000107c568bc();
                puVar7 = puVar6;
                goto code_r0x000107c615e8;
              }
              func_0x000107c615e8(puVar10);
            }
          }
          FUN_102cbade8();
          goto code_r0x000107c615e8;
        }
        if ((int)puVar10 != 0) goto LAB_102cbb548;
      }
      FUN_102cbb25c();
      if ((*(byte *)(unaff_x20 + lVar5) & 1) == 0) {
        FUN_102cbad7c();
        FUN_102cbb0d0();
        if ((*(char *)(unaff_x20 + lVar2) == '\x01') && ((*(byte *)(unaff_x20 + lVar5) & 1) == 0)) {
          lVar9 = *(long *)(unaff_x20 + lVar9);
          if (lVar9 != 0) {
            func_0x000107c4a15c();
          }
          *(char *)(unaff_x20 + _DAT_112f0a678) = (char)lVar9;
          FUN_102cbaeb4();
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  if ((*(char *)(unaff_x20 + lVar2) != '\x01') || ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) != 0)
     ) {
    return;
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112f0a660);
  if (lVar9 != 0) {
    func_0x000107c4a15c();
  }
  uVar3 = (uint)lVar9;
  *(char *)(unaff_x20 + _DAT_112f0a678) = (char)lVar9;
  if (*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') {
    FUN_102cbaf50();
    if ((uVar3 & 1) != (uint)*(byte *)(unaff_x20 + _DAT_112f0a670)) {
      *(char *)(unaff_x20 + _DAT_112f0a670) = (char)(uVar3 & 1);
      puVar7 = (ulong *)(unaff_x20 + _DAT_112f0a650);
      func_0x000107c61618();
      if (puVar7 != (ulong *)0x0) {
        puVar10 = puVar7;
        func_0x000107c5df08();
        func_0x000107c61180();
        if (puVar10 != (ulong *)0x0) {
          func_0x000107c568bc();
          puVar7 = puVar10;
        }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 102cbbce8; end: 102cbbdc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbbce8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (((*(char *)(lVar3 + _DAT_112f0a680) == '\x01') &&
        ((*(byte *)(lVar3 + _DAT_112f0a688) & 1) == 0)) &&
       (*(long *)(lVar3 + _DAT_112f0a658) != 0 && lVar4 == *(long *)(lVar3 + _DAT_112f0a658))) {
      plVar1 = (long *)(lVar3 + _DAT_112f0a698);
      if ((((char)plVar1[1] == '\x01') || (*plVar1 != lVar2)) &&
         (*(long *)(lVar3 + _DAT_112f0a660) != 0)) {
        func_0x000107c4a15c();
      }
      *plVar1 = lVar2;
      *(undefined1 *)(plVar1 + 1) = 0;
      FUN_102cbaeb4();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102cbbdc4; end: 102cbbddf;  */

void FUN_102cbbdc4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102cbbde0; end: 102cbbe6f;  */

/* WARNING: Possible PIC construction at 0x000102cbbe50: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbbde0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f0a660) != 0) {
    func_0x000107c4e1bc();
  }
  if (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
    lVar1 = unaff_x20 + _DAT_112f0a650;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5df08();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c568bc();
        lVar1 = lVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102cbbe70; end: 102cbbfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbbe70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_80;
  if ((*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') &&
     ((*(byte *)(unaff_x20 + _DAT_112f0a688) & 1) == 0)) {
    lVar2 = unaff_x20 + _DAT_112f0a668;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar3 = "updateHeadphonesState()";
      func_0x0001000c10c0("updateHeadphonesState()");
      func_0x000107c61180();
      puVar4 = &UNK_1105bde20;
      func_0x000107c613fc(&UNK_1105bde20,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      func_0x000107c613fc(param_1,0x20,7);
      *(undefined **)(param_1 + 0x10) = puVar4;
      *(long *)(param_1 + 0x18) = lVar2;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_102cbb204;
      uStack_68 = param_3;
      uStack_60 = param_2;
      lStack_58 = param_1;
      func_0x000107c60bc4(&puStack_80);
      lVar1 = lStack_58;
      func_0x000107c615f0(pcVar3);
      func_0x000107c615f0(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c3f9a0(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c615ec(pcVar3,2);
    }
  }
  return;
}



/* Entry: 102cbbfbc; end: 102cbc04b;  */

/* WARNING: Possible PIC construction at 0x000102cbc02c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbbfbc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_112f0a680) == '\x01') &&
     (*(char *)(unaff_x20 + _DAT_112f0a670) == '\x01')) {
    *(undefined1 *)(unaff_x20 + _DAT_112f0a670) = 0;
    lVar1 = unaff_x20 + _DAT_112f0a650;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5df08();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c568bc();
        lVar1 = lVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102cbc04c; end: 102cbc09b;  */

void FUN_102cbc04c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f0a6c8 != 0) {
    return;
  }
  puVar1 = &UNK_1105bde98;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f0a6c8 = param_1;
  return;
}



/* Entry: 102cbc09c; end: 102cbc0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc09c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = (uint)uVar3;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5dacc();
    func_0x000107c5dad0();
    lVar6 = _DAT_112f0a688;
    if ((((param_3 & 1) == 0) && ((uVar3 & 1) == 0)) &&
       ((*(byte *)(lVar2 + _DAT_112f0a690) & uVar1 & 1) == 0)) {
      if (*(char *)(lVar2 + _DAT_112f0a688) == '\x01') {
        *(undefined1 *)(lVar2 + _DAT_112f0a688) = 0;
        FUN_102cbae44();
        if ((*(char *)(lVar2 + _DAT_112f0a680) == '\x01') && ((*(byte *)(lVar2 + lVar6) & 1) == 0))
        {
          lVar6 = *(long *)(lVar2 + _DAT_112f0a660);
          if (lVar6 != 0) {
            func_0x000107c4a15c();
          }
          *(char *)(lVar2 + _DAT_112f0a678) = (char)lVar6;
          FUN_102cbaeb4();
        }
      }
    }
    else if ((*(byte *)(lVar2 + _DAT_112f0a688) & 1) == 0) {
      if (*(char *)(lVar2 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(lVar2 + _DAT_112f0a670) = 0;
        lVar4 = lVar2 + _DAT_112f0a650;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c568bc();
            func_0x000107c615e8(lVar5);
          }
          func_0x000107c615e8(lVar4);
        }
      }
      *(undefined1 *)(lVar2 + lVar6) = 1;
      FUN_102cbade8();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102cbc0a8; end: 102cbc1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc0a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = (uint)uVar3;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5dacc();
    func_0x000107c5dad0();
    if ((((param_3 & 1) != 0) || ((uVar3 & 1) != 0)) ||
       ((*(byte *)(lVar2 + _DAT_112f0a690) & uVar1 & 1) != 0)) {
      if (*(char *)(lVar2 + _DAT_112f0a670) == '\x01') {
        *(undefined1 *)(lVar2 + _DAT_112f0a670) = 0;
        lVar4 = lVar2 + _DAT_112f0a650;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c568bc();
            func_0x000107c615e8(lVar5);
          }
          func_0x000107c615e8(lVar4);
        }
      }
      *(undefined1 *)(lVar2 + _DAT_112f0a688) = 1;
      FUN_102cbade8();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102cbc1a4; end: 102cbc1cf;  */

void FUN_102cbc1a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102cbc1d0; end: 102cbc20b;  */

void FUN_102cbc1d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102cbc20c; end: 102cbc2b7;  */

void FUN_102cbc20c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102cbc2b8; end: 102cbc3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc2b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f0a6d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f0a6d8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f0a6e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a6e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a6f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a6f8) = 0;
  lVar2 = _DAT_1134e5280;
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_1134e5288) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1134e5290) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1134e5298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1134e52a0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cbc3b8; end: 102cbc3d7; -[SCOperaScrollAffordancePlugin init] */

void FUN_102cbc3b8(void)

{
  FUN_102cbc2b8();
  return;
}



/* Entry: 102cbc3d8; end: 102cbc3eb; -[SCOperaScrollAffordancePlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f0a6d8,param_3);
  return;
}



/* Entry: 102cbc3ec; end: 102cbc3ff; -[SCOperaScrollAffordancePlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f0a6d0,param_3);
  return;
}



/* Entry: 102cbc400; end: 102cbc43b; -[SCOperaScrollAffordancePlugin registeredEventsForOperaSession] */

void FUN_102cbc400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000102cbd84c();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cbc43c; end: 102cbccaf;  */

/* WARNING: Possible PIC construction at 0x000102cbc52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbcc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbcc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbcf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbc9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbcb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cbcbe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbcb78) */
/* WARNING: Removing unreachable block (ram,0x000102cbcb8c) */
/* WARNING: Removing unreachable block (ram,0x000102cbcbb4) */
/* WARNING: Removing unreachable block (ram,0x000102cbcbbc) */
/* WARNING: Removing unreachable block (ram,0x000102cbc9cc) */
/* WARNING: Removing unreachable block (ram,0x000102cbcf44) */
/* WARNING: Removing unreachable block (ram,0x000102cbcf64) */
/* WARNING: Removing unreachable block (ram,0x000102cbcf6c) */
/* WARNING: Removing unreachable block (ram,0x000102cbcf84) */
/* WARNING: Removing unreachable block (ram,0x000102cbcfa0) */
/* WARNING: Removing unreachable block (ram,0x000102cbc60c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc678) */
/* WARNING: Removing unreachable block (ram,0x000102cbc67c) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc3c) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc8c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc91c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc92c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc7e0) */
/* WARNING: Removing unreachable block (ram,0x000102cbc7f8) */
/* WARNING: Removing unreachable block (ram,0x000102cbc828) */
/* WARNING: Removing unreachable block (ram,0x000102cbc83c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc868) */
/* WARNING: Removing unreachable block (ram,0x000102cbcbd8) */
/* WARNING: Removing unreachable block (ram,0x000102cbc87c) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc68) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc70) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8c4) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc7c) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8d0) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc94) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8d8) */
/* WARNING: Removing unreachable block (ram,0x000102cbcc98) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8e0) */
/* WARNING: Removing unreachable block (ram,0x000102cbcca8) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8e4) */
/* WARNING: Removing unreachable block (ram,0x000102cbccac) */
/* WARNING: Removing unreachable block (ram,0x000102cbc8f4) */
/* WARNING: Removing unreachable block (ram,0x000102cbc904) */
/* WARNING: Removing unreachable block (ram,0x000102cbc810) */
/* WARNING: Removing unreachable block (ram,0x000102cbc530) */
/* WARNING: Removing unreachable block (ram,0x000102cbc940) */
/* WARNING: Removing unreachable block (ram,0x000102cbc534) */
/* WARNING: Removing unreachable block (ram,0x000102cbcbe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbc43c(double param_1,long *param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_a0 [16];
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar4 = param_2;
  func_0x000103bb6d50();
  plVar3 = (long *)*plVar4;
  uVar11 = plVar4[1];
  if ((plVar3 == param_2 && uVar11 == param_3) ||
     (func_0x000107c605b8(plVar3,uVar11,param_2,param_3,0), ((ulong)plVar3 & 1) != 0)) {
    if (param_4 == 0) {
      lVar7 = 0;
      param_5 = 0;
      uVar5 = uVar11;
    }
    else {
      lVar12 = param_4;
      func_0x000107c3b9ac();
      func_0x000107c61180();
      lVar7 = lVar12;
      func_0x000107c5faec();
      uVar5 = uVar11;
      func_0x000107c61170(lVar12);
      param_5 = uVar11;
    }
    if (*(byte *)(unaff_x20 + _DAT_112f0a6e0) < 2) {
      if (*(byte *)(unaff_x20 + _DAT_112f0a6e0) == 0) {
        uVar11 = ((long *)(unaff_x20 + _DAT_112f0a6e8))[1];
        if (uVar11 == 0) {
          if (param_4 != 0) {
            func_0x000107c3b9ac();
            func_0x000107c61180();
            lVar7 = _DAT_112f0a6d8;
            if (param_4 == 0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              param_5 = uVar5;
            }
            else {
              lVar12 = unaff_x20 + _DAT_112f0a6d8;
              func_0x000107c61618();
              if (lVar12 == 0) {
                func_0x000107c61170(param_4);
              }
              else {
                lVar13 = lVar12;
                func_0x000107c4e9d8();
                func_0x000107c61180();
                func_0x000107c615e8(lVar12);
                func_0x000107c61170(param_4);
                if (lVar13 != 0) {
                  lVar12 = lVar13;
                  func_0x000107c444d0();
                  func_0x000107c61180();
                  if (lVar12 != 0) {
                    uVar11 = unaff_x20 + lVar7;
                    func_0x000107c61618();
                    if (uVar11 != 0) {
                      uVar5 = uVar11;
                      func_0x000107c4e9c4();
                      func_0x000107c61180();
                      func_0x000107c615e8(uVar11);
                      if (uVar5 != 0) {
                        uStack_90 = uVar5;
                        func_0x000107c4455c();
                        func_0x000107c61180();
                        uVar17 = 0x112e9eb00;
                        func_0x0001000285a8(0x112e9eb00,&UNK_10daaeeb0);
                        param_5 = uVar5;
                        func_0x000107c5fc54(uVar5,uVar17);
                        func_0x000107c61170(uVar5);
                        if (param_5 >> 0x3e == 0) {
                          uVar11 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
                        }
                        else {
                          uVar11 = param_5 & 0xffffffffffffff8;
                          if (0x7fffffffffffffff < param_5) {
                            uVar11 = param_5;
                          }
                          func_0x000107c60480();
                        }
                        if (uVar11 != 0) {
                          uVar5 = uVar11 - 1;
                          if (SBORROW8(uVar11,1)) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbcc50);
                            (*pcVar2)();
                          }
                          if ((param_5 & 0xc000000000000001) == 0) {
                            if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbcc64);
                              (*pcVar2)();
                            }
                            if (*(ulong *)((param_5 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x102cbcc68);
                              (*pcVar2)();
                            }
                            func_0x000107c615f0(*(undefined8 *)(param_5 + uVar5 * 8 + 0x20));
                          }
                          else {
                            func_0x0001024a78bc(uVar5,param_5);
                          }
                          func_0x000107c615e8(lVar13);
                          func_0x000107c615e8(uStack_90);
                        }
                        goto code_r0x000107c6142c;
                      }
                    }
                    func_0x000107c615e8(lVar13);
                    lVar13 = lVar12;
                  }
                  func_0x000107c615e8(lVar13);
                }
              }
            }
          }
        }
        else {
          if (param_5 == 0) {
            return;
          }
          lVar12 = *(long *)(unaff_x20 + _DAT_112f0a6e8);
          if (lVar7 != lVar12 || param_5 != uVar11) {
            func_0x000107c605b8(lVar7,param_5,lVar12,uVar11,0);
          }
        }
      }
      else {
        uVar11 = ((long *)(unaff_x20 + _DAT_112f0a6e8))[1];
        if (param_5 == 0) {
          if (uVar11 != 0) {
            return;
          }
          FUN_102cbd0a0();
          func_0x000109128f54();
          *(double *)(unaff_x20 + _DAT_1134e5288) = param_1;
          lVar7 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar10 = &stack0xffffffffffffff90 + -extraout_x8_01;
          func_0x000107c5eea0(puVar10);
          lVar7 = 0;
          func_0x000107c5eea4();
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar10,0,1,lVar7);
          lVar7 = _DAT_1134e5280;
          func_0x000107c61428(unaff_x20 + _DAT_1134e5280,&stack0xffffffffffffff90,0x21,0);
          func_0x000100ed9cbc(puVar10,unaff_x20 + lVar7);
          func_0x000107c614a8(&stack0xffffffffffffff90);
          puVar8 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
          func_0x000107c61168();
          uVar17 = *(undefined8 *)(unaff_x20 + _DAT_1134e5288);
          puVar9 = &UNK_1105be160;
          func_0x000107c613fc(&UNK_1105be160,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,unaff_x20);
          puVar10 = &stack0xffffffffffffff90;
          func_0x000107c60bc4(puVar10);
          func_0x000107c61574(puVar9);
          func_0x000107c51924(uVar17);
          func_0x000107c61180();
          func_0x000107c60bd0(puVar10);
          lVar7 = _DAT_112f0a6f8;
          func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,&stack0xffffffffffffff90,1,0);
          uVar17 = *(undefined8 *)(unaff_x20 + lVar7);
          *(undefined **)(unaff_x20 + lVar7) = puVar8;
          func_0x000107c61170(uVar17);
          return;
        }
        if ((uVar11 != 0) &&
           (lVar12 = *(long *)(unaff_x20 + _DAT_112f0a6e8), lVar7 != lVar12 || param_5 != uVar11)) {
          func_0x000107c605b8(lVar7,param_5,lVar12,uVar11,0);
        }
      }
    }
  }
  else {
    func_0x000103bb9c00();
    plVar4 = (long *)*plVar3;
    uVar11 = plVar3[1];
    if ((plVar4 == param_2 && uVar11 == param_3) ||
       (func_0x000107c605b8(plVar4,uVar11,param_2,param_3,0), ((ulong)plVar4 & 1) != 0)) {
      param_5 = uVar11;
      uVar11 = ((long *)(unaff_x20 + _DAT_112f0a6e8))[1];
      if (uVar11 == 0) {
        return;
      }
      if (param_4 != 0) {
        lVar12 = *(long *)(unaff_x20 + _DAT_112f0a6e8);
        func_0x000107c61434(uVar11);
        func_0x000107c3b9ac();
        func_0x000107c61180();
        lVar7 = param_4;
        func_0x000107c5faec();
        func_0x000107c61170(param_4);
        if (lVar7 != lVar12 || uVar11 != param_5) {
          func_0x000107c605b8(lVar7,param_5,lVar12,uVar11,0);
        }
        goto code_r0x000107c6142c;
      }
    }
    else {
      func_0x000103bb9f54();
      plVar3 = (long *)*plVar4;
      if (((plVar3 == param_2) && (plVar4[1] == param_3)) ||
         (func_0x000107c605b8(plVar3,plVar4[1],param_2,param_3,0), ((ulong)plVar3 & 1) != 0)) {
        lVar7 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
        puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar14 = (long)puVar10 - extraout_x12;
        lVar12 = 0;
        func_0x000107c5eea4();
        lVar16 = *(long *)(lVar12 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
        lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar7 = _DAT_1134e5280;
        lVar13 = lVar15 - extraout_x12_00;
        if (*(char *)(unaff_x20 + _DAT_112f0a6e0) == '\x01') {
          func_0x000107c61428(unaff_x20 + _DAT_1134e5280,auStack_88,0,0);
          func_0x0001009f0578(unaff_x20 + lVar7,lVar14);
          lVar6 = lVar14;
          (**(code **)(lVar16 + 0x30))(lVar14,1,lVar12);
          if ((int)lVar6 == 1) {
            func_0x000102cbd8f8(lVar14,0x112d373d8,&UNK_10d9014c0);
          }
          else {
            (**(code **)(lVar16 + 0x20))(lVar13,lVar14,lVar12);
            func_0x000107c5eea0(lVar15);
            func_0x000107c5ee68(lVar13);
            pcVar2 = *(code **)(lVar16 + 8);
            (*pcVar2)(lVar15,lVar12);
            param_1 = *(double *)(unaff_x20 + _DAT_1134e5288) - param_1;
            if (param_1 < 0.0) {
              param_1 = 0.0;
            }
            *(double *)(unaff_x20 + _DAT_1134e5288) = param_1;
            lVar14 = _DAT_112f0a6f8;
            func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,auStack_a0,0x21,0);
            lVar15 = *(long *)(unaff_x20 + lVar14);
            if (lVar15 == 0) {
              (*pcVar2)(lVar13,lVar12);
              func_0x000107c614a8(auStack_a0);
            }
            else {
              func_0x000107c614a8(auStack_a0);
              func_0x000107c498f8(lVar15);
              (*pcVar2)(lVar13,lVar12);
            }
            uVar17 = *(undefined8 *)(unaff_x20 + lVar14);
            *(undefined8 *)(unaff_x20 + lVar14) = 0;
            func_0x000107c61170(uVar17);
            (**(code **)(lVar16 + 0x38))(puVar10,1,1,lVar12);
            func_0x000107c61428(unaff_x20 + lVar7,auStack_a0,0x21,0);
            func_0x000100ed9cbc(puVar10,unaff_x20 + lVar7);
            func_0x000107c614a8(auStack_a0);
          }
        }
        return;
      }
      func_0x000103bb9f8c();
      plVar4 = (long *)*plVar3;
      if (((plVar4 == param_2) && (plVar3[1] == param_3)) ||
         (func_0x000107c605b8(plVar4,plVar3[1],param_2,param_3,0), ((ulong)plVar4 & 1) != 0)) {
        lVar7 = _DAT_112f0a6f8;
        if ((*(char *)(unaff_x20 + _DAT_112f0a6e0) == '\x01') &&
           (func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,&uStack_80,0,0),
           *(long *)(unaff_x20 + lVar7) == 0)) {
          if (*(double *)(unaff_x20 + _DAT_1134e5288) <= 0.0) {
            FUN_102cbd330();
          }
          else {
            FUN_102cbd18c();
          }
        }
        return;
      }
      func_0x000103bb9ea8();
      plVar3 = (long *)*plVar4;
      if (((plVar3 != param_2) || (plVar4[1] != param_3)) &&
         (func_0x000107c605b8(plVar3,plVar4[1],param_2,param_3,0), ((ulong)plVar3 & 1) == 0)) {
        func_0x000103bb5d50();
        plVar4 = (long *)*plVar3;
        if (((plVar4 != param_2) || (plVar3[1] != param_3)) &&
           (func_0x000107c605b8(plVar4,plVar3[1],param_2,param_3,0), ((ulong)plVar4 & 1) == 0)) {
          return;
        }
        if ((param_5 == 0) || (func_0x00010442f980(), *(long *)(param_5 + 0x10) == 0)) {
          uStack_78 = 0;
          uStack_80 = 0;
          func_0x000102cbd8f8(&uStack_80,0x112d387f8,&UNK_10d902650);
          FUN_102cbcf20();
          return;
        }
        lVar7 = *plVar4;
        uVar11 = plVar4[1];
        func_0x000107c61434(uVar11);
        func_0x000107c61434(param_5);
        uVar5 = uVar11;
        func_0x000100029284(lVar7);
        if ((uVar5 & 1) != 0) {
          func_0x0001000bb420(*(long *)(param_5 + 0x38) + lVar7 * 0x20,&uStack_80);
          param_5 = uVar11;
        }
        goto code_r0x000107c6142c;
      }
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a6e8);
    param_5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102cbccb0; end: 102cbcf1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbccb0(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = _DAT_1134e5280;
  lVar6 = lVar8 - extraout_x12_00;
  if (*(char *)(unaff_x20 + _DAT_112f0a6e0) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_1134e5280,auStack_88,0,0);
    func_0x0001009f0578(unaff_x20 + lVar1,lVar7);
    lVar3 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000102cbd8f8(lVar7,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar6,lVar7,lVar2);
      func_0x000107c5eea0(lVar8);
      func_0x000107c5ee68(lVar6);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar8,lVar2);
      param_1 = *(double *)(unaff_x20 + _DAT_1134e5288) - param_1;
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
      *(double *)(unaff_x20 + _DAT_1134e5288) = param_1;
      lVar7 = _DAT_112f0a6f8;
      func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,auStack_a0,0x21,0);
      lVar8 = *(long *)(unaff_x20 + lVar7);
      if (lVar8 == 0) {
        (*pcVar10)(lVar6,lVar2);
        func_0x000107c614a8(auStack_a0);
      }
      else {
        func_0x000107c614a8(auStack_a0);
        func_0x000107c498f8(lVar8);
        (*pcVar10)(lVar6,lVar2);
      }
      uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
      *(undefined8 *)(unaff_x20 + lVar7) = 0;
      func_0x000107c61170(uVar4);
      (**(code **)(lVar9 + 0x38))(puVar5,1,1,lVar2);
      func_0x000107c61428(unaff_x20 + lVar1,auStack_a0,0x21,0);
      func_0x000100ed9cbc(puVar5,unaff_x20 + lVar1);
      func_0x000107c614a8(auStack_a0);
    }
  }
  return;
}



/* Entry: 102cbcf20; end: 102cbcfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbcf20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a6e8);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112f0a6f0) = 0;
  FUN_102cbd0a0();
  lVar2 = _DAT_1134e5290;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_1134e5290) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  lVar2 = _DAT_1134e52a0;
  if (*(long *)(unaff_x20 + _DAT_1134e52a0) != 0) {
    func_0x000107c3f478(*(long *)(unaff_x20 + _DAT_1134e52a0),param_2,0,0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c615e8(uVar3);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f0a6e0) = 3;
  return;
}



/* Entry: 102cbcfbc; end: 102cbd077; -[SCOperaScrollAffordancePlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102cbd05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbd060) */

void FUN_102cbcfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102cbc43c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cbd078; end: 102cbd09f; -[SCOperaScrollAffordancePlugin teardown] */

void FUN_102cbd078(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cbcf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cbd0a0; end: 102cbd18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbd0a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_112f0a6f8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,auStack_48,1,0);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar2);
  lVar2 = _DAT_1134e5280;
  func_0x000107c61428(unaff_x20 + _DAT_1134e5280,auStack_60,0x21,0);
  func_0x000100ed9cbc(auStack_60 + -extraout_x8,unaff_x20 + lVar2);
  func_0x000107c614a8(auStack_60);
  return;
}



/* Entry: 102cbd18c; end: 102cbd32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbd18c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&puStack_70 - extraout_x8;
  func_0x000107c5eea0(lVar5);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,0,1,lVar1);
  lVar1 = _DAT_1134e5280;
  func_0x000107c61428(unaff_x20 + _DAT_1134e5280,&puStack_70,0x21,0);
  func_0x000100ed9cbc(lVar5,unaff_x20 + lVar1);
  func_0x000107c614a8(&puStack_70);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1134e5288);
  puVar3 = &UNK_1105be160;
  func_0x000107c613fc(&UNK_1105be160,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_50 = FUN_102cbdcfc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100fef460;
  puStack_58 = &UNK_1105be178;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_48);
  func_0x000107c51924(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  lVar1 = _DAT_112f0a6f8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,&puStack_70,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 102cbd330; end: 102cbd58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cbd330(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = _DAT_112f0a6e0;
  if (*(char *)(unaff_x20 + _DAT_112f0a6e0) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112f0a6d0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4d4b8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        *(undefined1 *)(unaff_x20 + lVar4) = 2;
        lVar4 = _DAT_112f0a6f8;
        func_0x000107c61428(unaff_x20 + _DAT_112f0a6f8,auStack_58,1,0);
        uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
        *(undefined8 *)(unaff_x20 + lVar4) = 0;
        func_0x000107c61170(uVar3);
        lVar4 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar4);
        lVar4 = _DAT_1134e5280;
        func_0x000107c61428(unaff_x20 + _DAT_1134e5280,auStack_70,0x21,0);
        func_0x000100ed9cbc(auStack_70 + -extraout_x8,unaff_x20 + lVar4);
        func_0x000107c614a8(auStack_70);
        uVar7 = 0;
        lVar4 = lVar2;
        func_0x000107c5baf0(0,0,0,0);
        func_0x000107c61180();
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1134e52a0);
        *(long *)(unaff_x20 + _DAT_1134e52a0) = lVar4;
        func_0x000107c615f0();
        func_0x000107c615e8(uVar3);
        func_0x000107c6071c();
        *(undefined8 *)(unaff_x20 + _DAT_1134e5298) = uVar7;
        puVar5 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
        func_0x000107c61168();
        func_0x000107c42110();
        func_0x000107c61180();
        puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c4c8b4();
        func_0x000107c61170(puVar6);
        func_0x000107c576a4(puVar5);
        puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        func_0x000107c4c190();
        func_0x000107c61180();
        func_0x000107c3d8fc(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1134e5290);
        *(undefined **)(unaff_x20 + _DAT_1134e5290) = puVar5;
        func_0x000107c61170(uVar3);
        return;
      }
    }
    *(undefined1 *)(unaff_x20 + lVar4) = 3;
  }
  return;
}



/* Entry: 102cbd58c; end: 102cbd5d7; -[SCOperaScrollAffordancePlugin displayLinkTick:] */

/* WARNING: Possible PIC construction at 0x000102cbd5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cbd5c4) */

void FUN_102cbd58c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102cbdbd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102cbd5d8; end: 102cbd60b;  */

void FUN_102cbd5d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


