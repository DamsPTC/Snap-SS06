/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001ee78; end: 10001ee8b;  */

bool FUN_10001ee78(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10001ee8c; end: 10001ef37;  */

void FUN_10001ee8c(void)

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



/* Entry: 10001ef38; end: 10001ef47;  */

void FUN_10001ef38(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_1000b1448)();
  return;
}



/* Entry: 10001ef48; end: 10001ef7f;  */

void FUN_10001ef48(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010001ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 10001ef80; end: 10001ef83;  */

void FUN_10001ef80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit13TimelineEntryPAAE9relevanceAA0cD9RelevanceVSgvg_1000b0a98)();
  return;
}



/* Entry: 10001ef84; end: 10001efaf;  */

undefined8 * FUN_10001ef84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _objc_retain();
  return param_1;
}



/* Entry: 10001efb0; end: 10001efb7;  */

void FUN_10001efb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10001efb8; end: 10001eff7;  */

undefined8 * FUN_10001efb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10001eff8; end: 10001f003;  */

void FUN_10001eff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 10001f004; end: 10001f033;  */

undefined8 * FUN_10001f004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10001f034; end: 10001f0c7;  */

int FUN_10001f034(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10001f0c8; end: 10001f0eb;  */

void FUN_10001f0c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010001cc94();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10001f0ec; end: 10001f117;  */

void FUN_10001f0ec(void)

{
  FUN_10001f8dc(0x1000c4b88,FUN_10001edd0,&UNK_1000898e8);
  return;
}



/* Entry: 10001f118; end: 10001f2df;  */

void FUN_10001f118(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar3 = 0x1000c4bc0;
  func_0x0001000100d0(0x1000c4bc0,&UNK_1000899f0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = (long)puVar6 - extraout_x12;
  lVar3 = 0;
  FUN_10001edd0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 1;
  FUN_10001fae8(1,param_1);
  bVar2 = *(long *)(lVar4 + 0x10) == 0;
  if (bVar2) {
    _swift_bridgeObjectRelease();
  }
  else {
    func_0x00010001d0f8(lVar4 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),lVar8);
    _swift_bridgeObjectRelease(lVar4);
  }
  (**(code **)(lVar10 + 0x38))(lVar8,bVar2,1,lVar3);
  FUN_100020378(lVar8,puVar6);
  pcVar9 = *(code **)(lVar10 + 0x30);
  puVar5 = puVar6;
  (*pcVar9)(puVar6,1,lVar3);
  if ((int)puVar5 == 1) {
    __s10Foundation4DateVACycfC(lVar7);
    puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar3 + 0x14));
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 2;
    puVar5 = puVar6;
    (*pcVar9)(puVar6,1,lVar3);
    if ((int)puVar5 != 1) {
      func_0x0001000203c8(puVar6,0x1000c4bc0,&UNK_1000899f0);
    }
  }
  else {
    FUN_1000202fc(puVar6,lVar7);
  }
  (*param_3)(lVar7);
  FUN_100020280(lVar7);
  return;
}



/* Entry: 10001f2e0; end: 10001f4cf;  */

void FUN_10001f2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar7 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_allocObject(param_6,0x30,7);
  *(undefined8 *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  puStack_90 = PTR___NSConcreteStackBlock_1000b0c60;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100024234;
  uStack_78 = uStack_b0;
  ppuVar3 = &puStack_90;
  uStack_70 = param_7;
  lStack_68 = param_6;
  __Block_copy(ppuVar3);
  _objc_retain(param_5);
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_1000b14d0;
  uVar4 = 0x1000c4b90;
  FUN_10001f8dc(0x1000c4b90,PTR___s8Dispatch0A13WorkItemFlagsVMa_1000b1730,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_1000b1740);
  uVar5 = 0x1000c4b98;
  func_0x0001000100d0(0x1000c4b98,&UNK_100089e30);
  uVar6 = uVar5;
  FUN_10001f91c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar7,&puStack_98,uVar5,uVar6,lVar1,uVar4)
  ;
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar7,ppuVar3);
  __Block_release(ppuVar3);
  (**(code **)(lStack_a0 + 8))(lVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,lStack_a8);
  _swift_release(lStack_68);
  return;
}



/* Entry: 10001f4d0; end: 10001f743;  */

void FUN_10001f4d0(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  
  lVar1 = 0;
  uStack_80 = param_4;
  pcStack_78 = param_3;
  __s10Foundation4DateVMa();
  lStack_98 = *(long *)(lVar1 + -8);
  lStack_90 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_98 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar7 = (long)puVar11 - extraout_x12;
  lVar2 = 0;
  FUN_10001edd0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x1000c4ba8;
  func_0x0001000100d0(0x1000c4ba8,&UNK_1000899d0);
  lVar6 = *(long *)(lVar1 + -8);
  lStack_88 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar5 - extraout_x8_02;
  lVar3 = 0;
  FUN_10001fae8(0,param_1);
  lVar1 = *(long *)(lVar3 + 0x10) + -1;
  if (*(long *)(lVar3 + 0x10) == 0 || lVar1 == 0) {
    __s9WidgetKit20TimelineReloadPolicyV5neverACvgZ(lVar5);
    uVar4 = 0x1000c4b88;
    FUN_10001f8dc(0x1000c4b88,FUN_10001edd0,&UNK_1000898e8);
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lVar9,lVar3,lVar5,lVar2,uVar4);
  }
  else {
    func_0x00010001d0f8(lVar3 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar10 + 0x48) * lVar1,lVar8);
    lVar10 = lStack_90;
    lVar1 = lStack_98;
    (**(code **)(lStack_98 + 0x10))(puVar11,lVar8,lStack_90);
    __s10Foundation4DateV12timeInterval5sinceACSd_ACtcfC(lVar7,(double)param_1,puVar11);
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(lVar5,lVar7);
    uVar4 = 0x1000c4b88;
    FUN_10001f8dc(0x1000c4b88,FUN_10001edd0,&UNK_1000898e8);
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lVar9,lVar3,lVar5,lVar2,uVar4);
    (**(code **)(lVar1 + 8))(lVar7,lVar10);
    FUN_100020280(lVar8);
  }
  (*pcStack_78)(lVar9);
  (**(code **)(lVar6 + 8))(lVar9,lStack_88);
  return;
}



/* Entry: 10001f744; end: 10001f7a7;  */

void FUN_10001f744(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (param_3,&PTR_DAT_1000b2700);
  __s10Foundation4DateVACycfC(param_1);
  lVar2 = 0;
  FUN_10001edd0();
  puVar1 = (ulong *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_3 & 1;
  *(undefined1 *)(puVar1 + 1) = 2;
  return;
}



/* Entry: 10001f7a8; end: 10001f807;  */

void FUN_10001f7a8(void)

{
  FUN_10001f2e0();
  return;
}



/* Entry: 10001f808; end: 10001f873;  */

void FUN_10001f808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaFTu_1000b0aa8
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10001f874;
                    /* WARNING: Could not recover jumptable at 0x000100085688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaF_1000b0aa0)
            (plVar1,param_1,param_2,param_3);
  return;
}



/* Entry: 10001f874; end: 10001f8af;  */

void FUN_10001f874(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001f8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10001f8b0; end: 10001f8db;  */

void FUN_10001f8b0(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10001f8dc; end: 10001f91b;  */

void FUN_10001f8dc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10001f91c; end: 10001f96b;  */

void FUN_10001f91c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4ba0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4b98;
  func_0x000100010120(0x1000c4b98,&UNK_100089e30);
  puVar2 = PTR___sSayxGSTsMc_1000b11d0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_1000b11d0,uVar1);
  puRam00000001000c4ba0 = puVar2;
  return;
}



/* Entry: 10001f96c; end: 10001fae7;  */

undefined * FUN_10001f96c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10001fae8);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x1000c4188;
    func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
    lVar5 = 0;
    FUN_10001edd0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001fae0);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001fae4);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_10001edd0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 10001fae8; end: 10002027f;  */

/* WARNING: Removing unreachable block (ram,0x00010001fc4c) */

undefined1 * FUN_10001fae8(ulong param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long extraout_x8;
  undefined8 *puVar22;
  undefined1 uVar23;
  long extraout_x12;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined *puStack_e0;
  ulong auStack_d8 [2];
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar5 = 0;
  FUN_10001edd0();
  lVar24 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = (long)&puStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar26 = lVar25 - extraout_x12;
  puVar17 = &UNK_1000b26e8;
  ppuVar18 = &PTR_DAT_1000b2700;
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg();
  if (((ulong)puVar17 & 1) == 0) {
    puVar9 = (undefined1 *)0x1000c4188;
    func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
    bVar2 = *(byte *)(lVar24 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    __s10Foundation4DateVACycfC
              (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
    puVar22 = (undefined8 *)
              (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
              *(int *)(lVar5 + 0x14));
    *puVar22 = 0;
LAB_10001fd38:
    uVar23 = 2;
  }
  else {
    __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
    if (ppuVar18 == (undefined **)0x0) {
      puVar9 = (undefined1 *)0x1000c4188;
      func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
      bVar2 = *(byte *)(lVar24 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      puVar10 = puVar9;
      __s10Foundation4DateVACycfC
                (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
      FUN_1000202bc();
      puVar17 = &UNK_1000b2840;
      _swift_allocError(&UNK_1000b2840,puVar10,0,0);
      *puVar10 = 0;
      puVar22 = (undefined8 *)
                (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                *(int *)(lVar5 + 0x14));
      *puVar22 = puVar17;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_1000b74e0;
      ppuVar19 = ppuVar18;
      lStack_c0 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_1000b74e0);
      ppuVar7 = &PTR____CFConstantStringClassReference_1000b74c0;
      ppuVar20 = ppuVar19;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_1000b74c0);
      ppuVar21 = ppuVar18;
      __s21SnapchatWidgetsShared12AppGroupDataO04fileF06userId13directoryName8filenameSo6NSDataCSgSS_S2StFZ
                (puVar17,ppuVar18,ppuVar6,ppuVar19,ppuVar7,ppuVar20);
      _swift_bridgeObjectRelease(ppuVar18);
      _swift_bridgeObjectRelease(ppuVar19);
      _swift_bridgeObjectRelease(ppuVar20);
      if (puVar17 == (undefined *)0x0) {
        puVar9 = (undefined1 *)0x1000c4188;
        func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
        bVar2 = *(byte *)(lVar24 + 0x50);
        _swift_allocObject();
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        puVar10 = puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
        puVar11 = puVar9;
        __s10Foundation4DateVACycfC(puVar10);
        FUN_1000202bc();
        puVar17 = &UNK_1000b2840;
        _swift_allocError(&UNK_1000b2840,puVar11,0,0);
        *puVar11 = 1;
        iVar3 = *(int *)(lVar5 + 0x14);
        *(undefined **)(puVar10 + iVar3) = puVar17;
        *(undefined1 *)((long)(puVar10 + iVar3) + 8) = 1;
        return puVar9;
      }
      puVar8 = puVar17;
      _objc_retain();
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar8);
      _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
      puVar15 = puVar17;
      FUN_10001ccd4(puVar17,ppuVar21);
      func_0x000100018c5c(puVar17,ppuVar21);
      if (puVar15 == (undefined *)0x0) {
        puVar9 = (undefined1 *)0x1000c4188;
        func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
        bVar2 = *(byte *)(lVar24 + 0x50);
        _swift_allocObject();
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        puVar10 = puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
        puVar11 = puVar9;
        __s10Foundation4DateVACycfC(puVar10);
        FUN_1000202bc();
        puVar17 = &UNK_1000b2840;
        _swift_allocError(&UNK_1000b2840,puVar11,0,0);
        *puVar11 = 2;
      }
      else {
        func_0x000100087440(puVar15);
        puStack_c8 = puVar15;
        func_0x0001000867a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 == (undefined *)0x0) {
          uStack_a8 = 0;
          puStack_b0 = (undefined *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_b0);
          _swift_unknownObjectRelease(puVar15);
        }
        uStack_88 = uStack_a8;
        puStack_90 = puStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x0001000203c8(&puStack_90,0x1000c49f8,&UNK_1000899e0);
        }
        else {
          uVar14 = 0x1000c4bb8;
          func_0x0001000100d0(0x1000c4bb8,&UNK_1000899e8);
          puVar12 = &uStack_b8;
          _swift_dynamicCast(puVar12,&puStack_90,PTR___sypN_1000b14c8 + 8,uVar14,6);
          if (((ulong)puVar12 & 1) != 0) {
            if (uStack_b8 >> 0x3e == 0) {
              uVar13 = *(ulong *)((uStack_b8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar13 = uStack_b8 & 0xffffffffffffff8;
              if ((uStack_b8 & 0x8000000000000000) != 0) {
                uVar13 = uStack_b8;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            if (uVar13 != 0) {
              if ((param_1 & 1) == 0) {
                puStack_90 = PTR___swiftEmptyArrayStorage_1000b14d0;
                func_0x00010001029c(0,0,0);
                puVar17 = puStack_90;
                if (uStack_b8 >> 0x3e == 0) {
                  uVar13 = *(ulong *)((uStack_b8 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  uVar13 = uStack_b8 & 0xffffffffffffff8;
                  if ((uStack_b8 & 0x8000000000000000) != 0) {
                    uVar13 = uStack_b8;
                  }
                  __ss18_CocoaArrayWrapperV8endIndexSivg();
                }
                if (uVar13 != 0) {
                  uVar27 = 0;
                  auStack_d8[1] = uStack_b8 & 0xc000000000000001;
                  auStack_d8[0] = uStack_b8 & 0xffffffffffffff8;
                  puStack_e0 = puVar8;
                  do {
                    if (auStack_d8[1] == 0) {
                      if (*(ulong *)(auStack_d8[0] + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000201c0);
                        (*pcVar4)();
                      }
                      uVar16 = *(ulong *)(uStack_b8 + uVar27 * 8 + 0x20);
                      _objc_retain();
                    }
                    else {
                      uVar16 = uVar27;
                      func_0x000100010848(uVar27,uStack_b8);
                    }
                    uVar1 = uVar27 + 1;
                    if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000201bc);
                      (*pcVar4)();
                    }
                    if (SUB168(SEXT816(lStack_c0) * SEXT816((long)uVar27),8) !=
                        (long)(lStack_c0 * uVar27) >> 0x3f) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000201c4);
                      (*pcVar4)();
                    }
                    __s10Foundation4DateV20timeIntervalSinceNowACSd_tcfC
                              (lVar25,(double)(long)(lStack_c0 * uVar27));
                    puVar12 = (ulong *)(lVar25 + *(int *)(lVar5 + 0x14));
                    *puVar12 = uVar16;
                    *(undefined1 *)(puVar12 + 1) = 0;
                    uVar16 = *(ulong *)(puVar17 + 0x10);
                    puStack_90 = puVar17;
                    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar16) {
                      func_0x00010001029c(1 < *(ulong *)(puVar17 + 0x18),uVar16 + 1,1);
                    }
                    puVar17 = puStack_90;
                    *(ulong *)(puStack_90 + 0x10) = uVar16 + 1;
                    FUN_1000202fc(lVar25,puStack_90 +
                                         *(long *)(lVar24 + 0x48) * uVar16 +
                                         ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                         ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)));
                    uVar27 = uVar27 + 1;
                    puVar8 = puStack_e0;
                  } while (uVar1 != uVar13);
                }
                _objc_release(puVar8);
                _swift_bridgeObjectRelease(uStack_b8);
              }
              else {
                __s10Foundation4DateVACycfC(lVar26);
                if ((uStack_b8 & 0xc000000000000001) == 0) {
                  if (*(long *)((uStack_b8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100020280);
                    (*pcVar4)();
                  }
                  uVar14 = *(undefined8 *)(uStack_b8 + 0x20);
                  _objc_retain();
                }
                else {
                  uVar14 = 0;
                  func_0x000100010848(0,uStack_b8);
                }
                _swift_bridgeObjectRelease(uStack_b8);
                puVar22 = (undefined8 *)(lVar26 + *(int *)(lVar5 + 0x14));
                *puVar22 = uVar14;
                *(undefined1 *)(puVar22 + 1) = 0;
                puVar15 = (undefined *)0x0;
                FUN_10001f96c(0,1,1,PTR___swiftEmptyArrayStorage_1000b14d0);
                uVar13 = *(ulong *)(puVar15 + 0x10);
                puVar17 = puVar15;
                if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar13) {
                  puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
                  FUN_10001f96c(puVar17,uVar13 + 1,1,puVar15);
                }
                *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
                FUN_1000202fc(lVar26,puVar17 + *(long *)(lVar24 + 0x48) * uVar13 +
                                               ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                               ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff
                                               )));
                _objc_release(puVar8);
              }
              _objc_release(puStack_c8);
              return puVar17;
            }
            _swift_bridgeObjectRelease(uStack_b8);
            puVar9 = (undefined1 *)0x1000c4188;
            func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
            bVar2 = *(byte *)(lVar24 + 0x50);
            _swift_allocObject();
            *(undefined8 *)(puVar9 + 0x18) = 2;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            __s10Foundation4DateVACycfC
                      (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
            _objc_release(puStack_c8);
            _objc_release(puVar8);
            puVar22 = (undefined8 *)
                      (puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                      *(int *)(lVar5 + 0x14));
            *puVar22 = 1;
            goto LAB_10001fd38;
          }
        }
        puVar9 = (undefined1 *)0x1000c4188;
        func_0x0001000100d0(0x1000c4188,&UNK_100088b40);
        bVar2 = *(byte *)(lVar24 + 0x50);
        _swift_allocObject();
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        puVar10 = puVar9 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
        puVar11 = puVar9;
        __s10Foundation4DateVACycfC(puVar10);
        FUN_1000202bc();
        puVar17 = &UNK_1000b2840;
        _swift_allocError(&UNK_1000b2840,puVar11,0,0);
        *puVar11 = 3;
        _objc_release(puStack_c8);
      }
      _objc_release(puVar8);
      puVar22 = (undefined8 *)(puVar10 + *(int *)(lVar5 + 0x14));
      *puVar22 = puVar17;
    }
    uVar23 = 1;
  }
  *(undefined1 *)(puVar22 + 1) = uVar23;
  return puVar9;
}



/* Entry: 100020280; end: 1000202bb;  */

undefined8 FUN_100020280(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001edd0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1000202bc; end: 1000202fb;  */

void FUN_1000202bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100089a8c;
  _swift_getWitnessTable(&UNK_100089a8c,&UNK_1000b2840);
  puRam00000001000c4bb0 = puVar1;
  return;
}



/* Entry: 1000202fc; end: 10002033f;  */

undefined8 FUN_1000202fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001edd0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100020340; end: 10002036b;  */

void FUN_100020340(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10002036c; end: 100020377;  */

void FUN_10002036c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x20);
  lVar5 = 0x1000c4bc0;
  func_0x0001000100d0(0x1000c4bc0,&UNK_1000899f0,pcVar4,*(undefined8 *)(unaff_x20 + 0x28));
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = (long)puVar8 - extraout_x12;
  lVar5 = 0;
  FUN_10001edd0();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 1;
  FUN_10001fae8(1,uVar3);
  bVar2 = *(long *)(lVar6 + 0x10) == 0;
  if (bVar2) {
    _swift_bridgeObjectRelease();
  }
  else {
    func_0x00010001d0f8(lVar6 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),lVar10);
    _swift_bridgeObjectRelease(lVar6);
  }
  (**(code **)(lVar12 + 0x38))(lVar10,bVar2,1,lVar5);
  FUN_100020378(lVar10,puVar8);
  pcVar11 = *(code **)(lVar12 + 0x30);
  puVar7 = puVar8;
  (*pcVar11)(puVar8,1,lVar5);
  if ((int)puVar7 == 1) {
    __s10Foundation4DateVACycfC(lVar9);
    puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x14));
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 2;
    puVar7 = puVar8;
    (*pcVar11)(puVar8,1,lVar5);
    if ((int)puVar7 != 1) {
      func_0x0001000203c8(puVar8,0x1000c4bc0,&UNK_1000899f0);
    }
  }
  else {
    FUN_1000202fc(puVar8,lVar9);
  }
  (*pcVar4)(lVar9);
  FUN_100020280(lVar9);
  return;
}



/* Entry: 100020378; end: 100020407;  */

undefined8 FUN_100020378(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c4bc0;
  func_0x0001000100d0(0x1000c4bc0,&UNK_1000899f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100020408; end: 10002057b;  */

void FUN_100020408(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10002057c; end: 1000205bb;  */

void FUN_10002057c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100089a64;
  _swift_getWitnessTable(&UNK_100089a64,&UNK_1000b2840);
  puRam00000001000c4bc8 = puVar1;
  return;
}



/* Entry: 1000205bc; end: 1000205cf;  */

void FUN_1000205bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)(uVar1);
  return;
}



/* Entry: 1000205d0; end: 1000206ff;  */

long * FUN_1000205d0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    lVar6 = 0;
    FUN_10001edd0();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar8 = *puVar2;
    uVar4 = *(undefined1 *)(puVar2 + 1);
    func_0x00010001b1ac(uVar8,uVar4);
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = uVar4;
    lVar9 = (long)*(int *)(param_3 + 0x14);
    uVar8 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    lVar6 = (long)param_2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar6,uVar8);
    bVar5 = (int)lVar6 != 1;
    if (bVar5) {
      *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
      _swift_retain();
    }
    else {
      lVar6 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6)
      ;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,uVar8,!bVar5);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100020700; end: 1000207ab;  */

void FUN_100020700(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  lVar2 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  func_0x00010001b1d8(*puVar1,*(undefined1 *)(puVar1 + 1));
  lVar4 = (long)*(int *)(param_2 + 0x14);
  uVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar2 = param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s9WidgetKit0A6FamilyOMa();
                    /* WARNING: Could not recover jumptable at 0x000100020798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar4,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 1000207ac; end: 1000209cf;  */

long FUN_1000207ac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  lVar5 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar6 = *puVar2;
  uVar3 = *(undefined1 *)(puVar2 + 1);
  func_0x00010001b1ac(uVar6,uVar3);
  *puVar1 = uVar6;
  *(undefined1 *)(puVar1 + 1) = uVar3;
  lVar7 = (long)*(int *)(param_3 + 0x14);
  uVar6 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar5 = param_2 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar5,uVar6);
  bVar4 = (int)lVar5 != 1;
  if (bVar4) {
    *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
    _swift_retain();
  }
  else {
    lVar5 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1 + lVar7,param_2 + lVar7,lVar5);
  }
  _swift_storeEnumTagMultiPayload(param_1 + lVar7,uVar6,!bVar4);
  return param_1;
}



/* Entry: 1000209d0; end: 100020abb;  */

long FUN_1000209d0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  lVar3 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar4 = param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar3,1);
  }
  else {
    _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 100020abc; end: 100020bdb;  */

long FUN_100020abc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x28))(param_1,param_2,lVar5);
  lVar5 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar3 = *(undefined1 *)(puVar2 + 1);
  uVar6 = *puVar1;
  *puVar1 = *puVar2;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)(puVar1 + 1) = uVar3;
  func_0x00010001b1d8(uVar6,uVar4);
  if (param_1 != param_2) {
    lVar8 = (long)*(int *)(param_3 + 0x14);
    lVar5 = 0x1000c41d0;
    func_0x000100022ef0(param_1 + lVar8,0x1000c41d0,&UNK_100088d00);
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    lVar7 = param_2 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar7,lVar5);
    if ((int)lVar7 == 1) {
      lVar7 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))(param_1 + lVar8,param_2 + lVar8,lVar7);
      _swift_storeEnumTagMultiPayload(param_1 + lVar8,lVar5,1);
    }
    else {
      _memcpy(param_1 + lVar8,param_2 + lVar8,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Entry: 100020bdc; end: 100020be7;  */

void FUN_100020bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 100020be8; end: 100020c67;  */

void FUN_100020be8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10001edd0();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0x1000c4370;
    func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x000100020c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}



/* Entry: 100020c68; end: 100020c73;  */

void FUN_100020c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100020c74; end: 100020cfb;  */

void FUN_100020c74(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10001edd0();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0x1000c4370;
    func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x000100020cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 100020cfc; end: 100020d33;  */

void FUN_100020cfc(undefined8 param_1)

{
  if (lRam00000001000c4c28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f6ac);
  return;
}



/* Entry: 100020d34; end: 100020db7;  */

void FUN_100020d34(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_10001edd0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x00010001da80();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100020db8; end: 100020dc7;  */

void FUN_100020db8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f6f0,1);
  return;
}



/* Entry: 100020dc8; end: 100020ed7;  */

void FUN_100020dc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_168 [88];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  lVar1 = unaff_x20;
  FUN_100020ed8(&uStack_b8);
  uStack_98 = uStack_b0;
  uStack_e8 = (undefined1)lVar1;
  uStack_d8 = 0x4030000000000000;
  uStack_e0 = 0x4030000000000000;
  if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) {
    uStack_e0 = 0x4028000000000000;
  }
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = uStack_b8;
  uStack_f0 = uStack_b0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = uStack_b8;
  uStack_68 = 0;
  uStack_110 = param_6;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  uStack_b8 = param_6;
  uStack_90 = uStack_e8;
  uStack_88 = uStack_e0;
  uStack_80 = uStack_d8;
  uStack_78 = param_4;
  uStack_70 = param_5;
  func_0x000100022b58(&uStack_110,auStack_168,0x1000c4cc8,&UNK_100089bf8);
  func_0x000100022ef0(&uStack_b8,0x1000c4cc8,&UNK_100089bf8);
  param_1[5] = CONCAT71(uStack_e7,uStack_e8);
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  *(undefined1 *)(param_1 + 10) = uStack_c0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = CONCAT71(uStack_ff,uStack_100);
  return;
}



/* Entry: 100020ed8; end: 100021697;  */

void FUN_100020ed8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_510 [128];
  undefined *puStack_490;
  undefined **ppuStack_488;
  undefined1 uStack_480;
  undefined7 uStack_47f;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined7 uStack_45f;
  undefined *puStack_458;
  double dStack_450;
  undefined *puStack_448;
  undefined **ppuStack_440;
  undefined1 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined *puStack_410;
  double dStack_408;
  undefined *puStack_400;
  undefined **ppuStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined *puStack_3c8;
  double dStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  double dStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 uStack_390;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined *puStack_348;
  double dStack_340;
  undefined1 uStack_338;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined *puStack_2c8;
  double dStack_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined *puStack_248;
  double dStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  double dStack_1c0;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined *puStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  
  lVar14 = param_6[1];
  uVar2 = param_4;
  uVar12 = param_5;
  if (lVar14 == 0) {
LAB_100021264:
    uVar15 = 0;
    lVar14 = param_6[3];
    uVar9 = 0;
    if (lVar14 == 0) goto LAB_100021658;
  }
  else {
    puVar13 = (undefined *)*param_6;
    dVar16 = 18.0;
    if ((*(byte *)(param_6 + 4) & 1) == 0) {
      dVar16 = 16.0;
    }
    _swift_bridgeObjectRetain(lVar14);
    uVar2 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010009d550);
    puVar3 = PTR__OBJC_CLASS___UIFont_1000c20f0;
    _objc_opt_self();
    func_0x0001000869a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(lVar14);
      uVar2 = param_4;
      uVar12 = param_5;
      goto LAB_100021264;
    }
    puStack_130 = puVar13;
    ppuStack_128 = (undefined **)lVar14;
    FUN_100010174();
    ppuVar4 = &puStack_130;
    puVar6 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC();
    _objc_retain();
    puVar13 = puVar3;
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    puVar5 = puVar13;
    ppuVar11 = ppuVar4;
    puVar10 = puVar6;
    uVar9 = uVar2;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(puVar13);
    func_0x000100022a4c(ppuVar4,puVar6,uVar2);
    _swift_bridgeObjectRelease(param_9);
    puVar13 = &UNK_100089c00;
    _swift_getKeyPath();
    func_0x000100086f60(puVar3);
    dVar17 = 24.0 - dVar16;
    puVar6 = &UNK_100089c30;
    _swift_getKeyPath();
    puVar7 = puVar6;
    __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
    func_0x000100086f60(puVar3);
    uVar15 = 0x3fe0000000000000;
    dVar16 = (24.0 - dVar16) * 0.5;
    uStack_370 = CONCAT71(uStack_370._1_7_,(char)puVar10);
    uStack_358 = 2;
    uStack_350 = uStack_350 & 0xffffffffffffff00;
    puStack_380 = puVar5;
    ppuStack_378 = ppuVar11;
    uStack_368 = uVar9;
    puStack_360 = puVar13;
    puStack_348 = puVar6;
    dStack_340 = dVar17;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    uStack_3d8 = uStack_358;
    puStack_3e0 = puStack_360;
    puStack_3c8 = puStack_348;
    uStack_3d0 = uStack_350;
    dStack_3c0 = dStack_340;
    ppuStack_3f8 = ppuStack_378;
    puStack_400 = puStack_380;
    uStack_3e8 = uStack_368;
    uStack_3f0 = uStack_370;
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(char)puVar10);
    uStack_188 = 2;
    uStack_180 = uStack_180 & 0xffffffffffffff00;
    uVar2 = param_4;
    uVar12 = param_5;
    puStack_1b0 = puVar5;
    ppuStack_1a8 = ppuVar11;
    uStack_198 = uVar9;
    puStack_190 = puVar13;
    puStack_178 = puVar6;
    dStack_170 = dVar17;
    func_0x000100022b58(&puStack_380,&puStack_130,0x1000c4cd0,&UNK_100089c60);
    ppuVar4 = &puStack_1b0;
    func_0x000100022ef0(ppuVar4,0x1000c4cd0,&UNK_100089c60);
    __s7SwiftUI5ColorV5whiteACvgZ();
    uStack_2d8 = uStack_3d8;
    puStack_2e0 = puStack_3e0;
    puStack_2c8 = puStack_3c8;
    uStack_2d0 = uStack_3d0;
    dStack_2c0 = dStack_3c0;
    ppuStack_2f8 = ppuStack_3f8;
    puStack_300 = puStack_400;
    uStack_2e8 = uStack_3e8;
    uStack_2f0 = uStack_3f0;
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(char)puVar7);
    uStack_290 = uStack_290 & 0xffffffffffffff00;
    puVar13 = &UNK_100089c70;
    dStack_2b0 = dVar16;
    uStack_2a8 = uVar15;
    uStack_2a0 = param_4;
    uStack_298 = param_5;
    _swift_getKeyPath();
    uStack_e8 = uStack_2b8;
    dStack_f0 = dStack_2c0;
    uStack_d8 = uStack_2a8;
    dStack_e0 = dStack_2b0;
    uStack_c8 = uStack_298;
    uStack_d0 = uStack_2a0;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,(undefined1)uStack_290);
    ppuStack_128 = ppuStack_2f8;
    puStack_130 = puStack_300;
    uStack_118 = uStack_2e8;
    uStack_120 = uStack_2f0;
    uStack_108 = uStack_2d8;
    puStack_110 = puStack_2e0;
    puStack_f8 = puStack_2c8;
    uStack_100 = uStack_2d0;
    dStack_240 = dStack_3c0;
    uStack_258 = uStack_3d8;
    puStack_260 = puStack_3e0;
    puStack_248 = puStack_3c8;
    uStack_250 = uStack_3d0;
    ppuStack_278 = ppuStack_3f8;
    puStack_280 = puStack_400;
    uStack_268 = uStack_3e8;
    uStack_270 = uStack_3f0;
    uStack_238 = CONCAT71(uStack_238._1_7_,(char)puVar7);
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    param_9 = &UNK_100089c68;
    dStack_230 = dVar16;
    uStack_228 = uVar15;
    uStack_220 = param_4;
    uStack_218 = param_5;
    puStack_b8 = puVar13;
    ppuStack_b0 = ppuVar4;
    func_0x000100022b58(&puStack_300,auStack_510,0x1000c4cd8,&UNK_100089c68);
    func_0x000100022ef0(&puStack_280,0x1000c4cd8,&UNK_100089c68);
    uVar9 = 0x1000c4d50;
    func_0x0001000100d0(0x1000c4d50,&UNK_100089cd0);
    uVar8 = uVar9;
    func_0x000100022e58();
    uVar15 = 1;
    __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12toAccentableyAA03AnyC0VSbF(1,uVar9,uVar8);
    _objc_release(puVar3);
    func_0x000100022ef0(&puStack_130,0x1000c4d50,&UNK_100089cd0);
    _swift_retain(uVar15);
    lVar14 = param_6[3];
    if (lVar14 == 0) {
      uVar9 = 0;
      goto LAB_100021658;
    }
  }
  puVar13 = (undefined *)param_6[2];
  bVar1 = *(byte *)(param_6 + 4);
  dVar16 = 16.0;
  if ((bVar1 & 1) == 0) {
    dVar16 = 12.0;
  }
  _swift_bridgeObjectRetain(lVar14);
  uVar9 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010009d530);
  puVar3 = PTR__OBJC_CLASS___UIFont_1000c20f0;
  _objc_opt_self();
  func_0x0001000869a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(lVar14);
    uVar9 = 0;
  }
  else {
    puStack_130 = puVar13;
    ppuStack_128 = (undefined **)lVar14;
    FUN_100010174();
    ppuVar4 = &puStack_130;
    puVar5 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC();
    _objc_retain();
    puVar13 = puVar3;
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    puVar6 = puVar13;
    ppuVar11 = ppuVar4;
    puVar7 = puVar5;
    uVar8 = uVar9;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(puVar13);
    func_0x000100022a4c(ppuVar4,puVar5,uVar9);
    _swift_bridgeObjectRelease(param_9);
    puVar13 = &UNK_100089c00;
    _swift_getKeyPath();
    func_0x000100086f60(puVar3);
    dVar17 = 24.0;
    if ((bVar1 & 1) == 0) {
      dVar17 = 16.0;
    }
    dVar18 = dVar17 - dVar16;
    puVar5 = &UNK_100089c30;
    _swift_getKeyPath();
    puVar10 = puVar5;
    __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
    func_0x000100086f60(puVar3);
    uVar9 = 0x3fe0000000000000;
    dVar16 = (dVar17 - dVar16) * 0.5;
    uStack_468 = 2;
    uStack_460 = 0;
    puStack_490 = puVar6;
    ppuStack_488 = ppuVar11;
    uStack_480 = (char)puVar7;
    uStack_478 = uVar8;
    puStack_470 = puVar13;
    puStack_458 = puVar5;
    dStack_450 = dVar18;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    uStack_1d0 = CONCAT71(uStack_45f,uStack_460);
    uStack_1d8 = uStack_468;
    puStack_1e0 = puStack_470;
    puStack_1c8 = puStack_458;
    dStack_1c0 = dStack_450;
    uStack_1f0 = CONCAT71(uStack_47f,uStack_480);
    ppuStack_1f8 = ppuStack_488;
    puStack_200 = puStack_490;
    uStack_1e8 = uStack_478;
    uStack_420 = 2;
    uStack_418 = 0;
    puStack_448 = puVar6;
    ppuStack_440 = ppuVar11;
    uStack_438 = (char)puVar7;
    uStack_430 = uVar8;
    puStack_428 = puVar13;
    puStack_410 = puVar5;
    dStack_408 = dVar18;
    func_0x000100022b58(&puStack_490,&puStack_130,0x1000c4cd0,&UNK_100089c60);
    func_0x000100022ef0(&puStack_448,0x1000c4cd0,&UNK_100089c60);
    dStack_3c0 = dStack_1c0;
    uStack_3d8 = uStack_1d8;
    puStack_3e0 = puStack_1e0;
    puStack_3c8 = puStack_1c8;
    uStack_3d0 = uStack_1d0;
    uStack_188 = uStack_1d8;
    puStack_190 = puStack_1e0;
    puStack_178 = puStack_1c8;
    uStack_180 = uStack_1d0;
    ppuStack_3f8 = ppuStack_1f8;
    puStack_400 = puStack_200;
    uStack_3e8 = uStack_1e8;
    uStack_3f0 = uStack_1f0;
    uStack_3b8 = SUB81(puVar10,0);
    uStack_390 = 0;
    uStack_140 = 0;
    ppuStack_1a8 = ppuStack_1f8;
    puStack_1b0 = puStack_200;
    uStack_198 = uStack_1e8;
    uStack_1a0 = uStack_1f0;
    uStack_168 = CONCAT71(uStack_3b7,uStack_3b8);
    dStack_170 = dStack_1c0;
    dStack_340 = dStack_1c0;
    uStack_358 = uStack_1d8;
    puStack_360 = puStack_1e0;
    puStack_348 = puStack_1c8;
    uStack_350 = uStack_1d0;
    ppuStack_378 = ppuStack_1f8;
    puStack_380 = puStack_200;
    uStack_368 = uStack_1e8;
    uStack_370 = uStack_1f0;
    uStack_310 = 0;
    dStack_3b0 = dVar16;
    uStack_3a8 = uVar9;
    uStack_3a0 = uVar2;
    uStack_398 = uVar12;
    uStack_338 = uStack_3b8;
    dStack_330 = dVar16;
    uStack_328 = uVar9;
    uStack_320 = uVar2;
    uStack_318 = uVar12;
    dStack_160 = dVar16;
    uStack_158 = uVar9;
    uStack_150 = uVar2;
    uStack_148 = uVar12;
    func_0x000100022b58(&puStack_400,&puStack_130,0x1000c4cd8,&UNK_100089c68);
    ppuVar4 = &puStack_380;
    func_0x000100022ef0(ppuVar4,0x1000c4cd8,&UNK_100089c68);
    __s7SwiftUI5ColorV5whiteACvgZ();
    uStack_2b8 = uStack_168;
    dStack_2c0 = dStack_170;
    uStack_2a8 = uStack_158;
    dStack_2b0 = dStack_160;
    uStack_298 = uStack_148;
    uStack_2a0 = uStack_150;
    uStack_290 = CONCAT71(uStack_13f,uStack_140);
    ppuStack_2f8 = ppuStack_1a8;
    puStack_300 = puStack_1b0;
    uStack_2e8 = uStack_198;
    uStack_2f0 = uStack_1a0;
    uStack_2d8 = uStack_188;
    puStack_2e0 = puStack_190;
    puStack_2c8 = puStack_178;
    uStack_2d0 = uStack_180;
    puStack_288 = (undefined *)0x3fe6666666666666;
    ppuVar11 = (undefined **)&UNK_100089c70;
    _swift_getKeyPath();
    uStack_e8 = uStack_2b8;
    dStack_f0 = dStack_2c0;
    uStack_d8 = uStack_2a8;
    dStack_e0 = dStack_2b0;
    uStack_c8 = uStack_298;
    uStack_d0 = uStack_2a0;
    puStack_b8 = puStack_288;
    uStack_c0 = uStack_290;
    ppuStack_128 = ppuStack_2f8;
    puStack_130 = puStack_300;
    uStack_118 = uStack_2e8;
    uStack_120 = uStack_2f0;
    uStack_108 = uStack_2d8;
    puStack_110 = puStack_2e0;
    puStack_f8 = puStack_2c8;
    uStack_100 = uStack_2d0;
    uStack_238 = uStack_168;
    dStack_240 = dStack_170;
    uStack_228 = uStack_158;
    dStack_230 = dStack_160;
    uStack_218 = uStack_148;
    uStack_220 = uStack_150;
    uStack_210 = CONCAT71(uStack_13f,uStack_140);
    ppuStack_278 = ppuStack_1a8;
    puStack_280 = puStack_1b0;
    uStack_268 = uStack_198;
    uStack_270 = uStack_1a0;
    uStack_258 = uStack_188;
    puStack_260 = puStack_190;
    puStack_248 = puStack_178;
    uStack_250 = uStack_180;
    uStack_208 = 0x3fe6666666666666;
    ppuStack_b0 = ppuVar11;
    ppuStack_a8 = ppuVar4;
    func_0x000100022b58(&puStack_300,auStack_510,0x1000c4ce0,&UNK_100089ca0);
    func_0x000100022ef0(&puStack_280,0x1000c4ce0,&UNK_100089ca0);
    uVar2 = 0x1000c4ce8;
    func_0x0001000100d0(0x1000c4ce8,&UNK_100089ca8);
    uVar12 = uVar2;
    func_0x000100022ba0();
    uVar9 = 1;
    __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12toAccentableyAA03AnyC0VSbF(1,uVar2,uVar12);
    _objc_release(puVar3);
    func_0x000100022ef0(&puStack_130,0x1000c4ce8,&UNK_100089ca8);
    _swift_retain(uVar9);
  }
LAB_100021658:
  *param_1 = uVar15;
  param_1[1] = uVar9;
  _swift_release(uVar15);
  _swift_release(uVar9);
  return;
}



/* Entry: 100021698; end: 1000216a3;  */

void FUN_100021698(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 1000216a4; end: 1000216db;  */

void FUN_1000216a4(void)

{
  FUN_100020dc8();
  return;
}



/* Entry: 1000216dc; end: 100022223;  */

void FUN_1000216dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbStack_90;
  byte abStack_88 [8];
  byte *pbStack_80;
  ushort uStack_78;
  byte *pbStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  lVar4 = 0x1000c4c60;
  func_0x0001000100d0(0x1000c4c60,&UNK_100089b38);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar7 = abStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  pbVar12 = pbVar7 + -extraout_x12;
  lVar5 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)pbVar12 - extraout_x8_00;
  lVar5 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  pbVar11 = (byte *)*puVar1;
  cVar2 = *(char *)(puVar1 + 1);
  if (cVar2 == '\0') {
    pbVar7 = pbVar11;
    _objc_retain();
    func_0x000100021c24();
    uStack_68 = 1;
    pbStack_70 = pbVar7;
    _swift_retain();
    puVar3 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puVar8 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_90,&pbStack_70,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
               PTR___s7SwiftUI7AnyViewVN_1000b08c8,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    pbStack_80 = pbStack_90;
    uStack_78 = (ushort)abStack_88[0];
    _swift_retain(pbStack_90);
    uVar6 = 0x1000c4c68;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,puVar3,uVar9,puVar8);
    func_0x00010001b1d8(pbVar11,0);
    _swift_release(pbStack_90);
    _swift_release(pbVar7);
  }
  else if (cVar2 == '\x01' || pbVar11 != (byte *)0x0) {
    pbVar11 = (byte *)0x74706d652d6d656d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74706d652d6d656d,0xe900000000000079);
    puVar8 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
    }
    else {
      _objc_retain(puVar8);
      uVar6 = 0;
      uVar9 = 0;
      __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
                (lVar10,0,0,2);
      __s7SwiftUI9AlignmentV6centerACvgZ();
      *(undefined8 *)pbVar12 = uVar6;
      *(undefined8 *)(pbVar12 + 8) = uVar9;
      lVar5 = 0x1000c4c78;
      func_0x0001000100d0(0x1000c4c78,&UNK_100089b50);
      FUN_100022224(pbVar12 + *(int *)(lVar5 + 0x2c),puVar8,lVar10,0);
      FUN_1000225d4(pbVar12,pbVar7);
      uVar6 = 0x1000c4c80;
      func_0x000100022fcc(0x1000c4c80,0x1000c4c60,&UNK_100089b38,
                          PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pbVar7,lVar4,uVar6);
      _objc_release(puVar8);
      func_0x000100022750(pbVar12,0x1000c4c60,&UNK_100089b38);
      func_0x000100022ef0(lVar10,0x1000c4330,&UNK_1000890b0);
      _objc_release(puVar8);
      pbVar11 = pbVar7;
    }
    uStack_78 = 0x100;
    uVar6 = 0x1000c4c68;
    pbStack_80 = pbVar11;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,PTR___s7SwiftUI7AnyViewVN_1000b08c8,uVar9,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
  }
  else {
    pbVar11 = (byte *)0x6e69676f6c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e69676f6c,0xe500000000000000);
    puVar8 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
    }
    else {
      _objc_retain(puVar8);
      uVar6 = 0;
      uVar9 = 0;
      __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
                (lVar10,0,0,2);
      __s7SwiftUI9AlignmentV6centerACvgZ();
      *(undefined8 *)pbVar12 = uVar6;
      *(undefined8 *)(pbVar12 + 8) = uVar9;
      lVar5 = 0x1000c4c78;
      func_0x0001000100d0(0x1000c4c78,&UNK_100089b50);
      FUN_100022224(pbVar12 + *(int *)(lVar5 + 0x2c),puVar8,lVar10,0);
      FUN_1000225d4(pbVar12,pbVar7);
      uVar6 = 0x1000c4c80;
      func_0x000100022fcc(0x1000c4c80,0x1000c4c60,&UNK_100089b38,
                          PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pbVar7,lVar4,uVar6);
      _objc_release(puVar8);
      func_0x000100022750(pbVar12,0x1000c4c60,&UNK_100089b38);
      func_0x000100022ef0(lVar10,0x1000c4330,&UNK_1000890b0);
      _objc_release(puVar8);
      pbVar11 = pbVar7;
    }
    uStack_68 = 0;
    pbStack_70 = pbVar11;
    _swift_retain(pbVar11);
    puVar3 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puVar8 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_90,&pbStack_70,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
               PTR___s7SwiftUI7AnyViewVN_1000b08c8,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    pbStack_80 = pbStack_90;
    uStack_78 = (ushort)abStack_88[0];
    _swift_retain(pbStack_90);
    uVar6 = 0x1000c4c68;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,puVar3,uVar9,puVar8);
    _swift_release(pbStack_90);
    _swift_release(pbVar11);
  }
  *param_1 = pbStack_70;
  *(undefined1 *)(param_1 + 1) = uStack_68;
  *(undefined1 *)((long)param_1 + 9) = uStack_67;
  return;
}



/* Entry: 100022224; end: 100022567;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100022224(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_b0 [5];
  long lStack_88;
  
  lVar4 = 0;
  alStack_b0[0] = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x1000c4c98;
  func_0x0001000100d0(0x1000c4c98,&UNK_100089b68);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar10 - extraout_x12;
  _objc_retain(param_2);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar9 + 0x68))
            (lVar12,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar4);
  uVar14 = 0;
  lVar6 = lVar12;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar12,param_2);
  _swift_release(param_2);
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
  lVar4 = lVar6;
  __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
  _swift_release(lVar6);
  alStack_b0[1] = lVar4;
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lVar11,param_3,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
             PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
  _swift_release(lVar4);
  lVar6 = 0x1000c4ca0;
  func_0x0001000100d0(0x1000c4ca0,&UNK_100089b70);
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar6 + 0x24));
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0x101;
  lVar6 = 0x1000c4ca8;
  func_0x0001000100d0(0x1000c4ca8,&UNK_100089b78);
  *(undefined2 *)(lVar11 + *(int *)(lVar6 + 0x24)) = 0;
  *(undefined8 *)(lVar11 + *(int *)(lVar5 + 0x24)) = 0xbff0000000000000;
  lVar5 = 0;
  lVar6 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar12 = 0;
  if ((param_4 & 1) != 0) {
    lVar5 = 0x1000c49a8;
    func_0x0001000100d0(0x1000c49a8,&UNK_10008d190);
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 4;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    lVar6 = lVar5;
    __s7SwiftUI5ColorV5blackACvgZ();
    lVar4 = lVar6;
    __s7SwiftUI5ColorV7opacityyACSdF(0);
    _swift_release();
    *(long *)(lVar5 + 0x20) = lVar4;
    __s7SwiftUI5ColorV5blackACvgZ();
    uVar8 = 0x3fe3333333333333;
    lVar4 = lVar6;
    __s7SwiftUI5ColorV7opacityyACSdF(0x3fe3333333333333);
    _swift_release(lVar6);
    *(long *)(lVar5 + 0x28) = lVar4;
    __s7SwiftUI9UnitPointV6centerACvgZ();
    uVar13 = uVar8;
    uVar15 = uVar14;
    __s7SwiftUI9UnitPointV6bottomACvgZ();
    __s7SwiftUI8GradientV6colorsACSayAA5ColorVG_tcfC(lVar5);
    __s7SwiftUI14LinearGradientV8gradient10startPoint03endG0AcA0D0V_AA04UnitG0VAJtcfC
              (alStack_b0 + 1,uVar8,uVar14,uVar13,uVar15);
    lVar5 = alStack_b0[2];
    lVar6 = alStack_b0[1];
    lVar4 = alStack_b0[3];
    lVar9 = alStack_b0[4];
    lVar12 = lStack_88;
  }
  func_0x000100022700(lVar11,lVar10);
  lVar3 = alStack_b0[0];
  func_0x000100022700(lVar10,alStack_b0[0]);
  lVar7 = 0x1000c4cb0;
  func_0x0001000100d0(0x1000c4cb0,&UNK_100089b80);
  plVar2 = (long *)(lVar3 + *(int *)(lVar7 + 0x30));
  *plVar2 = lVar6;
  plVar2[1] = lVar5;
  plVar2[2] = lVar4;
  plVar2[3] = lVar9;
  plVar2[4] = lVar12;
  _swift_bridgeObjectRetain(lVar6);
  func_0x000100022750(lVar11,0x1000c4c98,&UNK_100089b68);
  _swift_bridgeObjectRelease(lVar6);
  func_0x000100022750(lVar10,0x1000c4c98,&UNK_100089b68);
  return;
}



/* Entry: 100022568; end: 10002256b;  */

void FUN_100022568(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbStack_90;
  byte abStack_88 [8];
  byte *pbStack_80;
  ushort uStack_78;
  byte *pbStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  lVar4 = 0x1000c4c60;
  func_0x0001000100d0(0x1000c4c60,&UNK_100089b38);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar7 = abStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  pbVar12 = pbVar7 + -extraout_x12;
  lVar5 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)pbVar12 - extraout_x8_00;
  lVar5 = 0;
  FUN_10001edd0();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  pbVar11 = (byte *)*puVar1;
  cVar2 = *(char *)(puVar1 + 1);
  if (cVar2 == '\0') {
    pbVar7 = pbVar11;
    _objc_retain();
    func_0x000100021c24();
    uStack_68 = 1;
    pbStack_70 = pbVar7;
    _swift_retain();
    puVar3 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puVar8 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_90,&pbStack_70,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
               PTR___s7SwiftUI7AnyViewVN_1000b08c8,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    pbStack_80 = pbStack_90;
    uStack_78 = (ushort)abStack_88[0];
    _swift_retain(pbStack_90);
    uVar6 = 0x1000c4c68;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,puVar3,uVar9,puVar8);
    func_0x00010001b1d8(pbVar11,0);
    _swift_release(pbStack_90);
    _swift_release(pbVar7);
  }
  else if (cVar2 == '\x01' || pbVar11 != (byte *)0x0) {
    pbVar11 = (byte *)0x74706d652d6d656d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74706d652d6d656d,0xe900000000000079);
    puVar8 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
    }
    else {
      _objc_retain(puVar8);
      uVar6 = 0;
      uVar9 = 0;
      __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
                (lVar10,0,0,2);
      __s7SwiftUI9AlignmentV6centerACvgZ();
      *(undefined8 *)pbVar12 = uVar6;
      *(undefined8 *)(pbVar12 + 8) = uVar9;
      lVar5 = 0x1000c4c78;
      func_0x0001000100d0(0x1000c4c78,&UNK_100089b50);
      FUN_100022224(pbVar12 + *(int *)(lVar5 + 0x2c),puVar8,lVar10,0);
      FUN_1000225d4(pbVar12,pbVar7);
      uVar6 = 0x1000c4c80;
      func_0x000100022fcc(0x1000c4c80,0x1000c4c60,&UNK_100089b38,
                          PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pbVar7,lVar4,uVar6);
      _objc_release(puVar8);
      func_0x000100022750(pbVar12,0x1000c4c60,&UNK_100089b38);
      func_0x000100022ef0(lVar10,0x1000c4330,&UNK_1000890b0);
      _objc_release(puVar8);
      pbVar11 = pbVar7;
    }
    uStack_78 = 0x100;
    uVar6 = 0x1000c4c68;
    pbStack_80 = pbVar11;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,PTR___s7SwiftUI7AnyViewVN_1000b08c8,uVar9,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
  }
  else {
    pbVar11 = (byte *)0x6e69676f6c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e69676f6c,0xe500000000000000);
    puVar8 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
    }
    else {
      _objc_retain(puVar8);
      uVar6 = 0;
      uVar9 = 0;
      __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildMemoriesDeepLinky10Foundation3URLVSgSSSg_SbSgtFZ
                (lVar10,0,0,2);
      __s7SwiftUI9AlignmentV6centerACvgZ();
      *(undefined8 *)pbVar12 = uVar6;
      *(undefined8 *)(pbVar12 + 8) = uVar9;
      lVar5 = 0x1000c4c78;
      func_0x0001000100d0(0x1000c4c78,&UNK_100089b50);
      FUN_100022224(pbVar12 + *(int *)(lVar5 + 0x2c),puVar8,lVar10,0);
      FUN_1000225d4(pbVar12,pbVar7);
      uVar6 = 0x1000c4c80;
      func_0x000100022fcc(0x1000c4c80,0x1000c4c60,&UNK_100089b38,
                          PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pbVar7,lVar4,uVar6);
      _objc_release(puVar8);
      func_0x000100022750(pbVar12,0x1000c4c60,&UNK_100089b38);
      func_0x000100022ef0(lVar10,0x1000c4330,&UNK_1000890b0);
      _objc_release(puVar8);
      pbVar11 = pbVar7;
    }
    uStack_68 = 0;
    pbStack_70 = pbVar11;
    _swift_retain(pbVar11);
    puVar3 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puVar8 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_90,&pbStack_70,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
               PTR___s7SwiftUI7AnyViewVN_1000b08c8,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    pbStack_80 = pbStack_90;
    uStack_78 = (ushort)abStack_88[0];
    _swift_retain(pbStack_90);
    uVar6 = 0x1000c4c68;
    func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
    uVar9 = uVar6;
    FUN_10002256c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&pbStack_70,&pbStack_80,uVar6,puVar3,uVar9,puVar8);
    _swift_release(pbStack_90);
    _swift_release(pbVar11);
  }
  *param_1 = pbStack_70;
  *(undefined1 *)(param_1 + 1) = uStack_68;
  *(undefined1 *)((long)param_1 + 9) = uStack_67;
  return;
}



/* Entry: 10002256c; end: 1000225d3;  */

void FUN_10002256c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c4c70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4c68;
  func_0x000100010120(0x1000c4c68,&UNK_100089b48);
  puStack_20 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puStack_18 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puVar2 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &puStack_20);
  puRam00000001000c4c70 = puVar2;
  return;
}



/* Entry: 1000225d4; end: 100022623;  */

undefined8 FUN_1000225d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c4c60;
  func_0x0001000100d0(0x1000c4c60,&UNK_100089b38);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100022624; end: 100022667;  */

void FUN_100022624(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4aa0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s9WidgetKit0A6FamilyOMa(0xff);
  puVar2 = PTR___s9WidgetKit0A6FamilyOSQAAMc_1000b0a78;
  _swift_getWitnessTable(PTR___s9WidgetKit0A6FamilyOSQAAMc_1000b0a78,uVar1);
  puRam00000001000c4aa0 = puVar2;
  return;
}



/* Entry: 100022668; end: 100022827;  */

void FUN_100022668(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4c90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4c88;
  func_0x000100010120(0x1000c4c88,&UNK_100089b58);
  uVar2 = 0x1000c4998;
  func_0x000100022fcc(0x1000c4998,0x1000c49a0,&UNK_100089740,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480);
  puStack_30 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_28 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_30);
  puRam00000001000c4c90 = puVar3;
  return;
}



/* Entry: 100022828; end: 10002289b;  */

undefined8 * FUN_100022828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10002289c; end: 1000228af;  */

void FUN_10002289c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1000228b0; end: 1000228fb;  */

undefined8 * FUN_1000228b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1000228fc; end: 1000229c3;  */

int FUN_1000228fc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1000229c4; end: 100022a3b;  */

void FUN_1000229c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c4cb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4cc0;
  func_0x000100010120(0x1000c4cc0,&UNK_100089ba0);
  uVar2 = uVar1;
  FUN_10002256c();
  puStack_28 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c4cb8 = puVar3;
  return;
}



/* Entry: 100022a3c; end: 100022a63;  */

void FUN_100022a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f718,1);
  return;
}



/* Entry: 100022a64; end: 100022f2f;  */

void FUN_100022a64(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 100022f30; end: 100022f33;  */

void FUN_100022f30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c4d60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4cc8;
  func_0x000100010120(0x1000c4cc8,&UNK_100089bf8);
  uVar2 = 0x1000c4d68;
  func_0x000100022fcc(0x1000c4d68,0x1000c4d70,&UNK_100089cd8,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c4d60 = puVar3;
  return;
}



/* Entry: 100022f34; end: 10002300f;  */

void FUN_100022f34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c4d60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4cc8;
  func_0x000100010120(0x1000c4cc8,&UNK_100089bf8);
  uVar2 = 0x1000c4d68;
  func_0x000100022fcc(0x1000c4d68,0x1000c4d70,&UNK_100089cd8,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c4d60 = puVar3;
  return;
}



/* Entry: 100023010; end: 100023027;  */

void FUN_100023010(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100023028; end: 100023053;  */

undefined8 * FUN_100023028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100023054; end: 10002305b;  */

void FUN_100023054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10002305c; end: 1000230cb;  */

undefined8 * FUN_10002305c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1000230cc; end: 10002316f;  */

int FUN_1000230cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100023170; end: 100023543;  */

void FUN_100023170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  long *plStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x1000c4120;
  uStack_98 = param_1;
  func_0x0001000100d0(0x1000c4120,&UNK_100088ab8);
  lStack_b8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar13 = auStack_c0 + -extraout_x8;
  lVar3 = 0x1000c4118;
  func_0x0001000100d0(0x1000c4118,&UNK_100088ab0);
  lStack_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = (long)puVar13 - extraout_x8_00;
  lVar7 = 0x1000c4110;
  func_0x0001000100d0(0x1000c4110,&UNK_100088aa8);
  lStack_a0 = *(long *)(lVar7 + -8);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = lVar15 - extraout_x8_01;
  uVar4 = 0;
  FUN_100025520();
  func_0x000100023774();
  func_0x0001000237b8();
  _swift_bridgeObjectRetain(param_3);
  *(undefined8 *)(lVar14 + -0x10) = uVar4;
  __s9WidgetKit19StaticConfigurationV4kind8provider7contentACyxGSS_qd__x5EntryQyd__ctcAA16TimelineProviderRd__lufC
            (puVar13,param_2,param_3);
  puVar5 = PTR__OBJC_CLASS___NSBundle_1000c2230;
  _objc_opt_self();
  puVar6 = puVar5;
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0xeb0000000065646f;
  *(undefined8 *)(lVar14 + -0x10) = 0xeb0000000065646f;
  lVar7 = 0x6370616e5320794d;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x6370616e5320794d,0xeb0000000065646f,0,0,puVar6,0,0xe000000000000000,
             0x6370616e5320794d);
  _objc_release();
  lStack_90 = lVar7;
  puStack_88 = (undefined *)uVar4;
  func_0x000100023724();
  puVar8 = puVar6;
  FUN_100010174();
  puVar1 = PTR___sSSN_1000b1180;
  __s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lF
            (lVar15,&lStack_90,lVar2,PTR___sSSN_1000b1180,puVar6,puVar8);
  _swift_bridgeObjectRelease(uVar4);
  (**(code **)(lStack_b8 + 8))(puVar13,lVar2);
  func_0x000100086fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(lVar14 + -0x10) = 0x800000010009d570;
  uVar4 = 0x65646f6370616e53;
  uVar11 = 0xed00006373654420;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x65646f6370616e53,0xed00006373654420,0,0,puVar5,0,0xe000000000000000,
             0xd000000000000022);
  _objc_release(puVar5);
  puStack_88 = puVar1;
  plVar9 = &lStack_90;
  lStack_90 = lVar2;
  plStack_80 = (long *)puVar6;
  puStack_78 = puVar8;
  uStack_70 = uVar4;
  uStack_68 = uVar11;
  _swift_getOpaqueTypeConformance
            (plVar9,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  __s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lF
            (lVar14,&uStack_70,lVar3,puVar1,plVar9,puVar8);
  _swift_bridgeObjectRelease(uVar11);
  (**(code **)(lStack_b0 + 8))(lVar15,lVar3);
  lVar2 = 0x1000c41c8;
  func_0x0001000100d0(0x1000c41c8,&UNK_100089230);
  lVar7 = 0;
  __s9WidgetKit0A6FamilyOMa();
  lVar15 = *(long *)(lVar7 + -8);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar2,uVar16 + *(long *)(lVar15 + 0x48),uVar12 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  (**(code **)(lVar15 + 0x68))
            (lVar2 + uVar16,
             *(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemSmallyA2CmFWC_1000b0a40,lVar7);
  puStack_88 = puVar1;
  plVar10 = &lStack_90;
  lStack_90 = lVar3;
  plStack_80 = plVar9;
  puStack_78 = puVar8;
  _swift_getOpaqueTypeConformance
            (plVar10,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  lVar3 = lStack_a8;
  __s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGF
            (uStack_98,lVar2,lStack_a8,plVar10);
  _swift_release(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar14,lVar3);
  return;
}



/* Entry: 100023544; end: 10002354b;  */

undefined8 FUN_100023544(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100024110();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10002354c; end: 100023587;  */

void FUN_10002354c(undefined8 *param_1)

{
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  *param_1 = 0xd000000000000015;
  param_1[1] = 0x800000010009d5a0;
  return;
}



/* Entry: 100023588; end: 100023723;  */

void FUN_100023588(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[1];
  lVar3 = 0x1000c4108;
  func_0x0001000100d0(0x1000c4108,&UNK_100088aa0);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&uStack_80 - extraout_x8;
  FUN_100023170(lVar11,uVar4,uVar5);
  iVar2 = 2;
  FUN_1000806c0(2,0x11,0,0);
  if (iVar2 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,lVar11,lVar3);
  }
  else {
    uVar4 = 0x1000c4110;
    func_0x000100010120(0x1000c4110,&UNK_100088aa8);
    uVar5 = 0x1000c4118;
    func_0x000100010120(0x1000c4118,&UNK_100088ab0);
    uVar6 = 0x1000c4120;
    func_0x000100010120(0x1000c4120,&UNK_100088ab8);
    uVar7 = uVar6;
    FUN_100023724();
    uVar8 = uVar7;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    puStack_78 = (undefined8 *)PTR___sSSN_1000b1180;
    puVar9 = &uStack_80;
    uStack_80 = uVar6;
    puStack_70 = (undefined8 *)uVar7;
    uStack_68 = uVar8;
    _swift_getOpaqueTypeConformance
              (puVar9,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    puStack_78 = (undefined8 *)puVar1;
    puVar10 = &uStack_80;
    uStack_80 = uVar5;
    puStack_70 = puVar9;
    uStack_68 = uVar8;
    _swift_getOpaqueTypeConformance
              (puVar10,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    puVar9 = &uStack_80;
    uStack_80 = uVar4;
    puStack_78 = puVar10;
    _swift_getOpaqueTypeConformance
              (puVar9,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
               ,1);
    __s7SwiftUI19WidgetConfigurationP0C3KitE23_contentMarginsDisabledQryF(param_1,lVar3,puVar9);
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
  }
  return;
}



/* Entry: 100023724; end: 1000237f7;  */

void FUN_100023724(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4128 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4120;
  func_0x000100010120(0x1000c4120,&UNK_100088ab8);
  puVar2 = PTR___s9WidgetKit19StaticConfigurationVyxG7SwiftUI0aD0AAMc_1000b0af0;
  _swift_getWitnessTable(PTR___s9WidgetKit19StaticConfigurationVyxG7SwiftUI0aD0AAMc_1000b0af0,uVar1)
  ;
  puRam00000001000c4128 = puVar2;
  return;
}



/* Entry: 1000237f8; end: 10002383b;  */

undefined8 FUN_1000237f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100024110();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002383c; end: 100023953;  */

void FUN_10002383c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar8 = &uStack_70;
  puVar9 = &uStack_70;
  puVar10 = &uStack_70;
  uVar2 = 0x1000c4108;
  func_0x000100010120(0x1000c4108,&UNK_100088aa0);
  uVar3 = 0x1000c4110;
  func_0x000100010120(0x1000c4110,&UNK_100088aa8);
  uVar4 = 0x1000c4118;
  func_0x000100010120(0x1000c4118,&UNK_100088ab0);
  uVar5 = 0x1000c4120;
  func_0x000100010120(0x1000c4120,&UNK_100088ab8);
  uVar6 = uVar5;
  FUN_100023724();
  uVar7 = uVar6;
  FUN_100010174();
  puVar1 = PTR___sSSN_1000b1180;
  puStack_68 = PTR___sSSN_1000b1180;
  uStack_70 = uVar5;
  puStack_60 = (undefined1 *)uVar6;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  puStack_68 = puVar1;
  uStack_70 = uVar4;
  puStack_60 = (undefined1 *)puVar8;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  uStack_70 = uVar3;
  puStack_68 = (undefined *)puVar9;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
             ,1);
  uStack_70 = uVar2;
  puStack_68 = (undefined *)puVar10;
  _swift_getOpaqueTypeConformance(&uStack_70,&DAT_10008f2a8,1);
  return;
}



/* Entry: 100023954; end: 10002395b;  */

undefined8 * FUN_100023954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10002395c; end: 100023bff;  */

long * FUN_10002395c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    lVar6 = (long)*(int *)(param_3 + 0x14);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar4 + -8);
    lVar3 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
    }
    else {
      lVar3 = 0x1000c4330;
      func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
    _objc_retain();
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100023c00; end: 100023d4f;  */

long FUN_100023c00(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar1 = param_1 + lVar5;
  (*pcVar7)(lVar1,1,lVar2);
  lVar3 = param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar1 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))(param_1 + lVar5,param_2 + lVar5,lVar2);
      goto LAB_100023cf4;
    }
    (**(code **)(lVar6 + 8))(param_1 + lVar5,lVar2);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1 + lVar5,0,1,lVar2);
    goto LAB_100023cf4;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
LAB_100023cf4:
  lVar1 = (long)*(int *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  _objc_retain();
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 100023d50; end: 100023e3f;  */

long FUN_100023d50(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  lVar2 = param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1 + lVar4,param_2 + lVar4,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1 + lVar4,0,1,lVar3);
  }
  else {
    lVar2 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy(param_1 + lVar4,param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  return param_1;
}



/* Entry: 100023e40; end: 100023f87;  */

long FUN_100023e40(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar1 = param_1 + lVar5;
  (*pcVar7)(lVar1,1,lVar2);
  lVar3 = param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar1 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x28))(param_1 + lVar5,param_2 + lVar5,lVar2);
      goto LAB_100023f34;
    }
    (**(code **)(lVar6 + 8))(param_1 + lVar5,lVar2);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1 + lVar5,0,1,lVar2);
    goto LAB_100023f34;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
LAB_100023f34:
  lVar1 = (long)*(int *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 100023f88; end: 100023f93;  */

void FUN_100023f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 100023f94; end: 100024053;  */

ulong FUN_100023f94(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  }
  else {
    lVar2 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    if ((int)param_2 != *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
      uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18));
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      uVar1 = (int)uVar3 - 1;
      if (0x7fffffff < uVar1) {
        uVar1 = 0xffffffff;
      }
      return (ulong)(uVar1 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010002401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar2);
  return param_1;
}



/* Entry: 100024054; end: 10002405f;  */

void FUN_100024054(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100024060; end: 10002410f;  */

void FUN_100024060(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    if (param_3 != *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x18)) = param_2 & 0xffffffff;
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000240f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 100024110; end: 100024147;  */

void FUN_100024110(undefined8 param_1)

{
  if (lRam00000001000c4de0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f784);
  return;
}



/* Entry: 100024148; end: 100024297;  */

void FUN_100024148(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x0001000241e0();
    if (param_2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &UNK_100089d60;
      puStack_28 = &UNK_100089d78;
      _swift_initStructMetadata(param_1,0x100,4,&lStack_40,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100024298; end: 1000242ab;  */

void FUN_100024298(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit13TimelineEntryPAAE9relevanceAA0cD9RelevanceVSgvg_1000b0a98)();
  return;
}



/* Entry: 1000242ac; end: 1000242d7;  */

void FUN_1000242ac(void)

{
  FUN_100024b6c(0x1000c4e28,FUN_100024110,&UNK_100089d90);
  return;
}



/* Entry: 1000242d8; end: 100024977;  */

void FUN_1000242d8(undefined8 param_1,code *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *apcStack_70 [2];
  
  lVar2 = 0;
  apcStack_70[1] = param_2;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)apcStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1000c4e38;
  func_0x0001000100d0(0x1000c4e38,&UNK_100089e40);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_00;
  lVar3 = 0x1000c4e30;
  func_0x0001000100d0(0x1000c4e30,&UNK_100089e38);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_01;
  lVar4 = 0;
  FUN_100024110();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000100024c30(param_1,lVar11);
  pcVar10 = *(code **)(lVar6 + 0x30);
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar4);
  if ((int)lVar3 == 1) {
    __s10Foundation4DateVACycfC(lVar9);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
              (lVar9 + *(int *)(lVar4 + 0x14),0);
    *(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x18)) = 0;
    *(undefined1 *)(lVar9 + *(int *)(lVar4 + 0x1c)) = 0;
    lVar3 = lVar11;
    (*pcVar10)(lVar11,1,lVar4);
    if ((int)lVar3 != 1) {
      func_0x000100024bac(lVar11);
    }
  }
  else {
    func_0x000100024c80(lVar11,lVar9);
  }
  lVar3 = 0x1000c4e40;
  func_0x0001000100d0(0x1000c4e40,&UNK_100089e48);
  bVar1 = *(byte *)(lVar6 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  FUN_1000237f8(lVar9,lVar3 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)));
  __s9WidgetKit20TimelineReloadPolicyV5neverACvgZ(lVar7);
  uVar5 = 0x1000c4e28;
  func_0x000100024b6c(0x1000c4e28,FUN_100024110,&UNK_100089d90);
  __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
            (lVar8,lVar3,lVar7,lVar4,uVar5);
  (*apcStack_70[1])(lVar8);
  (**(code **)(lVar12 + 8))(lVar8,lVar2);
  func_0x000100024bf4(lVar9);
  return;
}



/* Entry: 100024978; end: 1000249c3;  */

void FUN_100024978(long param_1)

{
  long lVar1;
  
  __s10Foundation4DateVACycfC();
  lVar1 = 0;
  FUN_100024110();
  __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
            (param_1 + *(int *)(lVar1 + 0x14),0);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x18)) = 0;
  *(undefined1 *)(param_1 + *(int *)(lVar1 + 0x1c)) = 0;
  return;
}



/* Entry: 1000249c4; end: 1000249cf;  */

void FUN_1000249c4(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined *puVar9;
  
  lVar2 = 0;
  FUN_100024110(0,param_3);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s21SnapchatWidgetsShared12AppGroupDataO13doesFileExist8filename11isDirectorySbSS_SbtFZ
            (0x6e49646567676f6c,0xe800000000000000,1);
  __s10Foundation4DateVACycfC(puVar8);
  uVar1 = (uint)uVar3 & 1;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
            (puVar8 + *(int *)(lVar2 + 0x14),uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = 0x65646f6370616e73;
    uVar7 = 0xe800000000000000;
    __s21SnapchatWidgetsShared12AppGroupDataO04fileF08filenameSo6NSDataCSgSS_tFZ
              (0x65646f6370616e73,0xe800000000000000);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      puVar9 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      lVar6 = lVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar7);
      func_0x000100086ca0();
      _objc_release(lVar6);
      func_0x000100018c5c(lVar5,uVar7);
      _objc_release(lVar4);
      goto LAB_100024de0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_100024de0:
  *(undefined **)(puVar8 + *(int *)(lVar2 + 0x18)) = puVar9;
  puVar8[*(int *)(lVar2 + 0x1c)] = (char)uVar1;
  (*param_2)(puVar8);
  func_0x000100024bf4(puVar8);
  return;
}



/* Entry: 1000249d0; end: 100024a2f;  */

void FUN_1000249d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1000b2ac8;
  _swift_allocObject(&UNK_1000b2ac8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_retain(param_3);
  func_0x000100024538(FUN_100024afc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(puVar1);
  return;
}



/* Entry: 100024a30; end: 100024a9b;  */

void FUN_100024a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaFTu_1000b0aa8
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100024a9c;
                    /* WARNING: Could not recover jumptable at 0x000100085688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit16TimelineProviderPAAE9relevanceAA0A9RelevanceVyytGyYaF_1000b0aa0)
            (plVar1,param_1,param_2,param_3);
  return;
}



/* Entry: 100024a9c; end: 100024afb;  */

void FUN_100024a9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100024ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100024afc; end: 100024b03;  */

void FUN_100024afc(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *apcStack_70 [2];
  
  apcStack_70[1] = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0;
  __s9WidgetKit20TimelineReloadPolicyVMa(0,apcStack_70[1],*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)apcStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1000c4e38;
  func_0x0001000100d0(0x1000c4e38,&UNK_100089e40);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_00;
  lVar3 = 0x1000c4e30;
  func_0x0001000100d0(0x1000c4e30,&UNK_100089e38);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_01;
  lVar4 = 0;
  FUN_100024110();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000100024c30(param_1,lVar11);
  pcVar10 = *(code **)(lVar6 + 0x30);
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar4);
  if ((int)lVar3 == 1) {
    __s10Foundation4DateVACycfC(lVar9);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
              (lVar9 + *(int *)(lVar4 + 0x14),0);
    *(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x18)) = 0;
    *(undefined1 *)(lVar9 + *(int *)(lVar4 + 0x1c)) = 0;
    lVar3 = lVar11;
    (*pcVar10)(lVar11,1,lVar4);
    if ((int)lVar3 != 1) {
      func_0x000100024bac(lVar11);
    }
  }
  else {
    func_0x000100024c80(lVar11,lVar9);
  }
  lVar3 = 0x1000c4e40;
  func_0x0001000100d0(0x1000c4e40,&UNK_100089e48);
  bVar1 = *(byte *)(lVar6 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  FUN_1000237f8(lVar9,lVar3 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)));
  __s9WidgetKit20TimelineReloadPolicyV5neverACvgZ(lVar7);
  uVar5 = 0x1000c4e28;
  func_0x000100024b6c(0x1000c4e28,FUN_100024110,&UNK_100089d90);
  __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
            (lVar8,lVar3,lVar7,lVar4,uVar5);
  (*apcStack_70[1])(lVar8);
  (**(code **)(lVar12 + 8))(lVar8,lVar2);
  func_0x000100024bf4(lVar9);
  return;
}



/* Entry: 100024b04; end: 100024b47;  */

void FUN_100024b04(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c49b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000c49b0 = puVar1;
  return;
}



/* Entry: 100024b48; end: 100024b6b;  */

void FUN_100024b48(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long alStack_70 [2];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar3 = 0x1000c4e30;
  func_0x0001000100d0(0x1000c4e30,&UNK_100089e38);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)alStack_70 - extraout_x8;
  lVar3 = 0;
  FUN_100024110();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s21SnapchatWidgetsShared12AppGroupDataO13doesFileExist8filename11isDirectorySbSS_SbtFZ
            (0x6e49646567676f6c,0xe800000000000000,1);
  __s10Foundation4DateVACycfC(lVar9);
  uVar1 = (uint)uVar4 & 1;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
            (lVar9 + *(int *)(lVar3 + 0x14),uVar1);
  if ((uVar4 & 1) != 0) {
    lVar5 = 0x65646f6370616e73;
    uVar6 = 0xe800000000000000;
    __s21SnapchatWidgetsShared12AppGroupDataO04fileF08filenameSo6NSDataCSgSS_tFZ
              (0x65646f6370616e73,0xe800000000000000);
    if (lVar5 != 0) {
      alStack_70[1] = lVar5;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      puVar10 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      alStack_70[0] = lVar5;
      _objc_allocWithZone();
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar6);
      func_0x000100086ca0();
      _objc_release(lVar5);
      func_0x000100018c5c(alStack_70[0],uVar6);
      _objc_release(alStack_70[1]);
      goto LAB_100024908;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_100024908:
  *(undefined **)(lVar9 + *(int *)(lVar3 + 0x18)) = puVar10;
  *(char *)(lVar9 + *(int *)(lVar3 + 0x1c)) = (char)uVar1;
  FUN_1000237f8(lVar9,lVar8);
  (**(code **)(lVar7 + 0x38))(lVar8,0,1,lVar3);
  (*pcVar2)(lVar8);
  func_0x000100024bac(lVar8);
  func_0x000100024bf4(lVar9);
  return;
}


