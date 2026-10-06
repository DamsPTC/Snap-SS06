/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000255b0; end: 10002569b;  */

undefined1  [16] FUN_1000255b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_100051048;
  _objc_opt_self(PTR__OBJC_CLASS___UIScreen_100051048);
  func_0x00010003b2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b360();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_100051060;
  _objc_allocWithZone();
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  func_0x00010003b180(param_1);
  _objc_release(param_2);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_100025688;
    }
    _objc_release(puVar1);
  }
  puVar3 = (undefined *)0x0;
  param_3 = 0xf000000000000000;
LAB_100025688:
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Entry: 10002569c; end: 100026267;  */

undefined * FUN_10002569c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_10004ce08;
  if (puVar7 != (undefined *)0x0) {
    FUN_100010860(0x100052310,&UNK_10003cb30);
    puVar3 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &uStack_88;
      FUN_100026a1c(param_1,puVar5,0x100052318,&UNK_10003cb38);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_100024a34();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000257bc);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100026338(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000257c0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 100026268; end: 100026337;  */

undefined8 FUN_100026268(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000522f0;
  FUN_100010860(0x1000522f0,&UNK_10003cb10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100026338; end: 100026347;  */

undefined8 * FUN_100026338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100026348; end: 100026383;  */

long FUN_100026348(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100026384; end: 10002638b;  */

void FUN_100026384(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cb48;
  _swift_getKeyPath(&UNK_10003cb48);
  puVar2 = &UNK_10003cb70;
  _swift_getKeyPath(&UNK_10003cb70);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 10002638c; end: 1000263f7;  */

void FUN_10002638c(void)

{
  FUN_1000245dc();
  return;
}



/* Entry: 1000263f8; end: 10002643b;  */

undefined8 FUN_1000263f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002643c; end: 1000264c3;  */

void FUN_10002643c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 1000264c4; end: 100026507;  */

undefined8 FUN_1000264c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100026508; end: 100026583;  */

void FUN_100026508(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100026584;
  plVar4[5] = lVar3;
  plVar4[6] = unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff));
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar4[7] = lVar3;
  lVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar4[8] = lVar2;
  plVar4[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_1000228b4,lVar2,lVar3);
  return;
}



/* Entry: 100026584; end: 1000265bf;  */

void FUN_100026584(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000265bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1000265c0; end: 100026643;  */

void FUN_1000265c0(long *param_1,code *param_2,long param_3)

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



/* Entry: 100026644; end: 100026697;  */

long * FUN_100026644(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100026698; end: 100026717;  */

undefined8 FUN_100026698(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100026718; end: 10002671f;  */

void FUN_100026718(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cc98;
  _swift_getKeyPath(&UNK_10003cc98);
  puVar2 = &UNK_10003ccc0;
  _swift_getKeyPath(&UNK_10003ccc0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 100026720; end: 1000267af;  */

void FUN_100026720(void)

{
  FUN_1000245dc();
  return;
}



/* Entry: 1000267b0; end: 1000267bf;  */

void FUN_1000267b0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cd78;
  _swift_getKeyPath(&UNK_10003cd78);
  puVar2 = &UNK_10003cda0;
  _swift_getKeyPath(&UNK_10003cda0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 1000267c0; end: 1000267eb;  */

void FUN_1000267c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 1000267ec; end: 100026857;  */

void FUN_1000267ec(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100026a74;
  plVar4[6] = lVar2;
  plVar4[7] = lVar5;
  plVar4[5] = lVar3;
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar4[8] = lVar3;
  lVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar4[9] = lVar2;
  plVar4[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100021a3c,lVar2,lVar3);
  return;
}



/* Entry: 100026858; end: 10002687b;  */

void FUN_100026858(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10002687c; end: 1000268e3;  */

void FUN_10002687c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100026a78;
  *(undefined1 *)(plVar4 + 0xb) = uVar1;
  plVar4[5] = lVar5;
  lVar3 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_10004d028;
  lVar5 = lVar3;
  __sScM6sharedScMvgZ();
  plVar4[6] = lVar5;
  lVar5 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar2,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar4[7] = lVar3;
  plVar4[8] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100022bd4,lVar3,lVar5);
  return;
}



/* Entry: 1000268e4; end: 100026923;  */

undefined8 FUN_1000268e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100010860(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100026924; end: 10002698b;  */

void FUN_100026924(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100026a7c;
  *(undefined1 *)(plVar4 + 0xb) = uVar1;
  plVar4[5] = lVar5;
  lVar3 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_10004d028;
  lVar5 = lVar3;
  __sScM6sharedScMvgZ();
  plVar4[6] = lVar5;
  lVar5 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar2,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar4[7] = lVar3;
  plVar4[8] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100022bd4,lVar3,lVar5);
  return;
}



/* Entry: 10002698c; end: 100026993;  */

void FUN_10002698c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003ce50;
  _swift_getKeyPath(&UNK_10003ce50);
  puVar2 = &UNK_10003ce78;
  _swift_getKeyPath(&UNK_10003ce78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 100026994; end: 1000269c7;  */

undefined8 FUN_100026994(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___s23ExtensionsStickerPicker19AppGroupSessionDataVN_10004cae0 + -8) + 8
              ))();
  return param_1;
}



/* Entry: 1000269c8; end: 100026a1b;  */

void FUN_1000269c8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100026a80;
  plVar4[5] = unaff_x20;
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_10004d028;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar4[6] = lVar3;
  lVar3 = 0x100051400;
  FUN_1000265c0(0x100051400,puVar1,PTR___sScMScAsMc_10004d030);
  __sScA15unownedExecutorScevgTj();
  plVar4[7] = lVar2;
  plVar4[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(FUN_100020424,lVar2,lVar3);
  return;
}



/* Entry: 100026a1c; end: 100026a63;  */

undefined8 FUN_100026a1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100026a64; end: 100026a8b;  */

void FUN_100026a64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100026a8c; end: 100026b27;  */

void FUN_100026a8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___sBi64_WV_10004cc78 + 0x40;
  puStack_50 = &UNK_10003cf08;
  puStack_38 = PTR___syycWV_10004cdf8 + 0x40;
  puStack_40 = &UNK_10003cf20;
  lVar1 = 0x13f;
  puStack_30 = puStack_38;
  FUN_100016cf8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,6,&puStack_50,param_1 + 0x20);
  }
  return;
}



/* Entry: 100026b28; end: 100026c3f;  */

long * FUN_100026b28(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    param_1[1] = param_2[1];
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar3 = param_2[4];
    lVar6 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar6;
    lVar6 = param_2[6];
    lVar7 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar7;
    lVar7 = (long)*(int *)(param_3 + 0x34);
    _swift_unknownObjectRetain();
    _swift_retain(lVar3);
    _swift_retain(lVar6);
    uVar4 = 0x100051d68;
    FUN_100010860(0x100051d68,&UNK_10003c420);
    lVar3 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar3,uVar4);
    bVar2 = (int)lVar3 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
      _swift_retain();
    }
    else {
      lVar3 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3)
      ;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,uVar4,!bVar2);
  }
  else {
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 100026c40; end: 100026ccb;  */

void FUN_100026c40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _swift_unknownObjectRelease(*param_1);
  _swift_release(param_1[4]);
  _swift_release(param_1[6]);
  lVar3 = (long)*(int *)(param_2 + 0x34);
  uVar1 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar2 = (long)param_1 + lVar3;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
                    /* WARNING: Could not recover jumptable at 0x000100026cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*(undefined8 *)((long)param_1 + lVar3));
  return;
}



/* Entry: 100026ccc; end: 100026edb;  */

undefined8 * FUN_100026ccc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_2[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  uVar4 = param_2[6];
  uVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  lVar5 = (long)*(int *)(param_3 + 0x34);
  _swift_unknownObjectRetain();
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar2 = (long)param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  bVar1 = (int)lVar2 != 1;
  if (bVar1) {
    *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
    _swift_retain();
  }
  else {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar5,uVar3,!bVar1);
  return param_1;
}



/* Entry: 100026edc; end: 100026f9f;  */

undefined8 * FUN_100026edc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  lVar3 = (long)*(int *)(param_3 + 0x34);
  lVar1 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar2 = (long)param_2 + lVar3;
  _swift_getEnumCaseMultiPayload(lVar2,lVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar2);
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar3,lVar1,1);
  }
  else {
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 100026fa0; end: 1000270af;  */

undefined8 * FUN_100026fa0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  _swift_release(uVar1);
  uVar1 = param_1[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  _swift_release(uVar1);
  if (param_1 != param_2) {
    lVar4 = (long)*(int *)(param_3 + 0x34);
    lVar2 = 0x100051d68;
    FUN_100028538((long)param_1 + lVar4,0x100051d68,&UNK_10003c420);
    FUN_100010860(0x100051d68,&UNK_10003c420);
    lVar3 = (long)param_2 + lVar4;
    _swift_getEnumCaseMultiPayload(lVar3,lVar2);
    if ((int)lVar3 == 1) {
      lVar3 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3)
      ;
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar4,lVar2,1);
    }
    else {
      _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
              *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Entry: 1000270b0; end: 1000270bb;  */

void FUN_1000270b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_10004cea8)();
  return;
}



/* Entry: 1000270bc; end: 100027147;  */

ulong FUN_1000270bc(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x100051d78;
  FUN_100010860(0x100051d78,&UNK_10003c430);
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
                    /* WARNING: Could not recover jumptable at 0x000100027144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100027148; end: 100027153;  */

void FUN_100027148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_10004cf70)();
  return;
}



/* Entry: 100027154; end: 1000271d3;  */

void FUN_100027154(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0x100051d78;
  FUN_100010860(0x100051d78,&UNK_10003c430);
                    /* WARNING: Could not recover jumptable at 0x0001000271d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x34),param_2,param_2,lVar1);
  return;
}



/* Entry: 1000271d4; end: 1000271df;  */

void FUN_1000271d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_10003e2f0);
  return;
}



/* Entry: 1000271e0; end: 100027213;  */

void FUN_1000271e0(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e32c,1);
  return;
}



/* Entry: 100027214; end: 10002722b;  */

void FUN_100027214(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100027228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1,param_2);
  return;
}



/* Entry: 10002722c; end: 1000273eb;  */

void FUN_10002722c(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  undefined8 *puVar2;
  long extraout_x8_01;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == 1) {
    lVar8 = *(long *)(param_4 & 0xffffffffffffffe);
    (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_10004c8a8)(param_3 << 3);
    lVar8 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar9 = &stack0xffffffffffffffb0 + lVar8;
    if (param_3 != 0) {
      uVar4 = 0;
      uVar1 = param_4 & 0xfffffffffffffffe;
      if ((3 < param_3) && (0x1f < (long)puVar9 - uVar1)) {
        uVar4 = param_3 & 0xfffffffffffffffc;
        puVar2 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar8);
        puVar5 = (undefined8 *)(uVar1 + 0x10);
        uVar6 = uVar4;
        do {
          uVar11 = puVar5[-2];
          uVar13 = puVar5[1];
          uVar12 = *puVar5;
          puVar2[-1] = puVar5[-1];
          puVar2[-2] = uVar11;
          puVar2[1] = uVar13;
          *puVar2 = uVar12;
          puVar2 = puVar2 + 4;
          puVar5 = puVar5 + 4;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (param_3 == uVar4) goto LAB_100027330;
      }
      lVar8 = param_3 - uVar4;
      puVar2 = (undefined8 *)(uVar1 + uVar4 * 8);
      puVar5 = (undefined8 *)(puVar9 + uVar4 * 8);
      do {
        *puVar5 = *puVar2;
        lVar8 = lVar8 + -1;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
    }
LAB_100027330:
    lVar8 = 0;
    _swift_getTupleTypeMetadata(0,param_3,puVar9,0,0);
    (*(code *)PTR____chkstk_darwin_10004c8a8)
              (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar9 = &stack0xffffffffffffffb0 + -extraout_x8_01;
    if (param_3 == 0) goto LAB_1000273c0;
  }
  lVar10 = 0x20;
  plVar7 = (long *)(param_4 & 0xfffffffffffffffe);
  uVar1 = param_3;
  do {
    if (param_3 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)*(int *)(lVar8 + lVar10);
    }
    (**(code **)(*(long *)(*plVar7 + -8) + 0x10))(puVar9 + lVar3,*param_2);
    lVar10 = lVar10 + 0x10;
    uVar1 = uVar1 - 1;
    param_2 = param_2 + 1;
    plVar7 = plVar7 + 1;
  } while (uVar1 != 0);
LAB_1000273c0:
  __s7SwiftUI9TupleViewVyACyxGxcfC(param_1,puVar9,lVar8);
  return;
}



/* Entry: 1000273ec; end: 100027577;  */

void FUN_1000273ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = 0x100052400;
  func_0x0001000118b8(0x100052400,&UNK_10003cf98);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0xff;
  FUN_100016cec(0xff,uVar1,uVar2);
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar5,uVar3,0,0);
  uVar5 = 0xff;
  __s7SwiftUI9TupleViewVMa(0xff,uVar4);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_10004c868,uVar5);
  lVar7 = 0;
  __s7SwiftUI6VStackVMa(0,uVar5,puVar6);
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar11 = (long)puVar10 - extraout_x12;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  __s7SwiftUI6VStackV9alignment7spacing7contentACyxGAA19HorizontalAlignmentV_12CoreGraphics7CGFloatVSgxyXEtcfC
            (puVar10);
  _swift_getWitnessTable(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_10004c760,lVar7);
  pcVar8 = *(code **)(lVar12 + 0x10);
  (*pcVar8)(lVar11,puVar10,lVar7);
  pcVar9 = *(code **)(lVar12 + 8);
  (*pcVar9)(puVar10,lVar7);
  (*pcVar8)(param_1,lVar11,lVar7);
  (*pcVar9)(lVar11,lVar7);
  return;
}



/* Entry: 100027578; end: 1000278bf;  */

void FUN_100027578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_d0 [5];
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puVar6;
  
  lVar3 = 0;
  alStack_d0[3] = param_1;
  FUN_100016cec();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar4 = 0x100052400;
  alStack_d0[2] = lVar10 - extraout_x12;
  FUN_100010860(0x100052400,&UNK_10003cf98);
  lVar5 = lVar4;
  alStack_d0[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (lVar10 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[1] = lVar9;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  plVar15 = (long *)(lVar9 - extraout_x12_00);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar15 = lVar5;
  plVar15[1] = 0;
  *(undefined1 *)(plVar15 + 2) = 1;
  lVar5 = 0x100052408;
  FUN_100010860(0x100052408,&UNK_10003cfa0);
  puVar6 = param_6;
  FUN_1000278c0((long)plVar15 + (long)*(int *)(lVar5 + 0x2c),param_6,param_7,param_8);
  uVar2 = SUB81(puVar6,0);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  lVar5 = 0x100052410;
  FUN_100010860(0x100052410,&UNK_10003cfa8);
  puVar1 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x28] = 1;
  __s7SwiftUI4EdgeO3SetV3topAEvgZ();
  uVar16 = 0x4010000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar9 = 0x100052418;
  uVar8 = param_3;
  uVar17 = param_4;
  uVar12 = param_5;
  FUN_100010860(0x100052418,&UNK_10003cfb0);
  puVar1 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar9 + 0x24));
  *puVar1 = (char)lVar5;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar16 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  puVar1 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = (char)lVar9;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar12;
  puVar1[0x28] = 0;
  uVar12 = *param_6;
  uVar16 = param_6[1];
  uVar2 = *(undefined1 *)(param_6 + 2);
  uVar8 = param_6[3];
  uVar17 = param_6[4];
  _swift_unknownObjectRetain(uVar12);
  _swift_retain(uVar17);
  FUN_100017d1c(lVar10,uVar16,uVar12,0,0,uVar2,uVar8,uVar17,param_7,param_8);
  puVar7 = &UNK_10003c4c8;
  _swift_getWitnessTable(&UNK_10003c4c8,lVar3);
  lVar5 = alStack_d0[2];
  pcVar13 = *(code **)(lVar14 + 0x10);
  (*pcVar13)(alStack_d0[2],lVar10,lVar3);
  pcVar11 = *(code **)(lVar14 + 8);
  (*pcVar11)(lVar10,lVar3);
  lVar4 = alStack_d0[1];
  FUN_100028c00(plVar15,alStack_d0[1],0x100052400,&UNK_10003cf98);
  lStack_90 = lVar4;
  (*pcVar13)(lVar10,lVar5,lVar3);
  lStack_a0 = alStack_d0[0];
  uVar8 = 0x100052420;
  lStack_98 = lVar3;
  lStack_88 = lVar10;
  FUN_100028488(0x100052420,0x100052400,&UNK_10003cf98,0x100027e94);
  alStack_d0[4] = uVar8;
  puStack_a8 = puVar7;
  FUN_10002722c(alStack_d0[3],&lStack_90,2,&lStack_a0,alStack_d0 + 4);
  (*pcVar11)(lVar5,lVar3);
  FUN_100028538(plVar15,0x100052400,&UNK_10003cf98);
  (*pcVar11)(lVar10,lVar3);
  FUN_100028538(lVar4,0x100052400,&UNK_10003cf98);
  return;
}



/* Entry: 1000278c0; end: 100027aeb;  */

void FUN_1000278c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  puStack_98 = param_1;
  FUN_1000271d4();
  lVar11 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_b0 + -extraout_x8;
  lVar3 = 0x100052448;
  FUN_100010860(0x100052448,&UNK_10003cfc0);
  lStack_a0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar8 = lVar8 - extraout_x12;
  (**(code **)(lVar11 + 0x10))(puVar13,param_2,lVar2);
  uVar7 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &UNK_10004e370;
  _swift_allocObject(&UNK_10004e370,uVar9 + lVar12,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar9,puVar13,lVar2);
  uVar5 = 0x100052450;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_2;
  FUN_100010860(0x100052450,&UNK_10003cfc8);
  uVar6 = 0x100052458;
  FUN_100028488(0x100052458,0x100052450,&UNK_10003cfc8,0x100028464);
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar8,FUN_100028418,puVar4,FUN_100028458,auStack_90,uVar5,uVar6);
  lVar12 = lStack_a0;
  lVar11 = lStack_a8;
  pcVar10 = *(code **)(lStack_a0 + 0x10);
  (*pcVar10)(lStack_a8,lVar8,lVar3);
  puVar1 = puStack_98;
  *puStack_98 = 0;
  *(undefined1 *)(puStack_98 + 1) = 1;
  lVar2 = 0x100052478;
  FUN_100010860(0x100052478,&UNK_10003cfd8);
  (*pcVar10)((long)puVar1 + (long)*(int *)(lVar2 + 0x30),lVar11,lVar3);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x40));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  pcVar10 = *(code **)(lVar12 + 8);
  (*pcVar10)(lVar8,lVar3);
  (*pcVar10)(lVar11,lVar3);
  return;
}



/* Entry: 100027aec; end: 100027e03;  */

void FUN_100027aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [152];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
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
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  lVar2 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_3b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar6 = (long)puVar5 - extraout_x12;
  FUN_1000271d4(0,param_7,param_8);
  FUN_100027f2c(uVar6);
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_10004c170,lVar2);
  uVar3 = uVar6;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uVar6,puVar5);
  pcVar4 = *(code **)(lVar7 + 8);
  (*pcVar4)(puVar5,lVar2);
  (*pcVar4)(uVar6,lVar2);
  uStack_130 = (undefined1)uVar6;
  uStack_140 = 0xd4;
  if ((uVar3 & 1) == 0) {
    uStack_140 = 0xd5;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar8 = 0x4030000000000000;
  uVar1 = uStack_130;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_108 = 0;
  uStack_168 = 0x2f4;
  uStack_160 = 0;
  uStack_158 = 0x4034000000000000;
  uStack_150 = 0x6b72616d78;
  uStack_148 = 0xe500000000000000;
  uStack_138 = 1;
  uStack_128 = uVar8;
  uStack_120 = param_3;
  uStack_118 = param_4;
  uStack_110 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_2c8 = uStack_120;
  uStack_2d0 = uStack_128;
  uStack_2b8 = uStack_110;
  uStack_2c0 = uStack_118;
  uStack_2b0 = uStack_108;
  uStack_308 = CONCAT71(uStack_15f,uStack_160);
  uStack_310 = uStack_168;
  uStack_2f8 = uStack_150;
  uStack_300 = uStack_158;
  uStack_2d8 = CONCAT71(uStack_12f,uStack_130);
  uStack_2e0 = CONCAT71(uStack_137,uStack_138);
  uStack_2e8 = uStack_140;
  uStack_2f0 = uStack_148;
  uVar8 = uStack_148;
  FUN_100028c00(&uStack_310,&uStack_200,0x100052468,&UNK_10003cfd0);
  uVar9 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_a8 = uStack_2b8;
  uStack_b0 = uStack_2c0;
  uStack_a0 = uStack_2b0;
  uStack_f8 = uStack_308;
  uStack_100 = uStack_310;
  uStack_e8 = uStack_2f8;
  uStack_f0 = uStack_300;
  uStack_d8 = uStack_2e8;
  uStack_e0 = uStack_2f0;
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  FUN_100028538(&uStack_168,0x100052468,&UNK_10003cfd0);
  uStack_258 = uStack_b8;
  uStack_260 = uStack_c0;
  uStack_248 = uStack_a8;
  uStack_250 = uStack_b0;
  uStack_298 = uStack_f8;
  uStack_2a0 = uStack_100;
  uStack_288 = uStack_e8;
  uStack_290 = uStack_f0;
  uStack_278 = uStack_d8;
  uStack_280 = uStack_e0;
  uStack_268 = uStack_c8;
  uStack_270 = uStack_d0;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_240 = CONCAT71(uStack_9f,uStack_a0);
  uStack_1a0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_210 = 0;
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_170 = 0;
  uStack_238 = uVar1;
  uStack_230 = uVar9;
  uStack_228 = uVar8;
  uStack_220 = param_4;
  uStack_218 = param_5;
  uStack_198 = uVar1;
  uStack_190 = uVar9;
  uStack_188 = uVar8;
  uStack_180 = param_4;
  uStack_178 = param_5;
  FUN_100028c00(&uStack_2a0,auStack_3a8,0x100052450,&UNK_10003cfc8);
  FUN_100028538(&uStack_200,0x100052450,&UNK_10003cfc8);
  param_1[0xd] = CONCAT71(uStack_237,uStack_238);
  param_1[0xc] = uStack_240;
  param_1[0xf] = uStack_228;
  param_1[0xe] = uStack_230;
  param_1[0x11] = uStack_218;
  param_1[0x10] = uStack_220;
  *(undefined1 *)(param_1 + 0x12) = uStack_210;
  param_1[5] = uStack_278;
  param_1[4] = uStack_280;
  param_1[7] = uStack_268;
  param_1[6] = uStack_270;
  param_1[9] = uStack_258;
  param_1[8] = uStack_260;
  param_1[0xb] = uStack_248;
  param_1[10] = uStack_250;
  param_1[1] = uStack_298;
  *param_1 = uStack_2a0;
  param_1[3] = uStack_288;
  param_1[2] = uStack_290;
  return;
}



/* Entry: 100027e04; end: 100027e77;  */

void FUN_100027e04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  lVar2 = 0;
  FUN_1000271d4(0,param_9,param_10);
  iVar1 = *(int *)(lVar2 + 0x34);
  puVar3 = &UNK_10003cfe8;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar1) = puVar3;
  uVar4 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
                    /* WARNING: Could not recover jumptable at 0x00010003ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagMultiPayload_10004cf68)((long)param_1 + (long)iVar1,uVar4,0);
  return;
}



/* Entry: 100027e78; end: 100027edb;  */

void FUN_100027e78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100027edc; end: 100027f2b;  */

void FUN_100027edc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100052438 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052440;
  func_0x0001000118b8(0x100052440,&UNK_10003cfb8);
  puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
  _swift_getWitnessTable(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730,uVar1);
  puRam0000000100052438 = puVar2;
  return;
}



/* Entry: 100027f2c; end: 10002834f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100027f2c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s7SwiftUI17EnvironmentValuesVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  FUN_100028c00();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar9 = puVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    puVar4 = puVar9;
    _os_log_type_enabled();
    if ((int)puVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x686353726f6c6f43;
      auStack_70[1] = uVar6;
      FUN_100028578(0x686353726f6c6f43,0xeb00000000656d65,auStack_70 + 1);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      __os_log_impl(0x100000000,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,puVar5,0xc);
      FUN_100028640(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 100028350; end: 100028417;  */

void FUN_100028350(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  FUN_1000271d4(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)));
  _swift_unknownObjectRelease(*puVar1);
  _swift_release(puVar1[4]);
  _swift_release(puVar1[6]);
  lVar4 = (long)*(int *)(lVar2 + 0x34);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar2 = (long)puVar1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar1 + lVar4,lVar2);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100028418; end: 100028457;  */

void FUN_100028418(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000271d4(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)) + 0x28))();
  return;
}



/* Entry: 100028458; end: 100028487;  */

void FUN_100028458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [152];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
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
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_3b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar6 = (long)puVar5 - extraout_x12;
  FUN_1000271d4(0,uVar8,uVar9);
  FUN_100027f2c(uVar6);
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_10004c170,lVar2);
  uVar3 = uVar6;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uVar6,puVar5);
  pcVar4 = *(code **)(lVar7 + 8);
  (*pcVar4)(puVar5,lVar2);
  (*pcVar4)(uVar6,lVar2);
  uStack_130 = (undefined1)uVar6;
  uStack_140 = 0xd4;
  if ((uVar3 & 1) == 0) {
    uStack_140 = 0xd5;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar8 = 0x4030000000000000;
  uVar1 = uStack_130;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_108 = 0;
  uStack_168 = 0x2f4;
  uStack_160 = 0;
  uStack_158 = 0x4034000000000000;
  uStack_150 = 0x6b72616d78;
  uStack_148 = 0xe500000000000000;
  uStack_138 = 1;
  uStack_128 = uVar8;
  uStack_120 = param_3;
  uStack_118 = param_4;
  uStack_110 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_2c8 = uStack_120;
  uStack_2d0 = uStack_128;
  uStack_2b8 = uStack_110;
  uStack_2c0 = uStack_118;
  uStack_2b0 = uStack_108;
  uStack_308 = CONCAT71(uStack_15f,uStack_160);
  uStack_310 = uStack_168;
  uStack_2f8 = uStack_150;
  uStack_300 = uStack_158;
  uStack_2d8 = CONCAT71(uStack_12f,uStack_130);
  uStack_2e0 = CONCAT71(uStack_137,uStack_138);
  uStack_2e8 = uStack_140;
  uStack_2f0 = uStack_148;
  uVar8 = uStack_148;
  FUN_100028c00(&uStack_310,&uStack_200,0x100052468,&UNK_10003cfd0);
  uVar9 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_a8 = uStack_2b8;
  uStack_b0 = uStack_2c0;
  uStack_a0 = uStack_2b0;
  uStack_f8 = uStack_308;
  uStack_100 = uStack_310;
  uStack_e8 = uStack_2f8;
  uStack_f0 = uStack_300;
  uStack_d8 = uStack_2e8;
  uStack_e0 = uStack_2f0;
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  FUN_100028538(&uStack_168,0x100052468,&UNK_10003cfd0);
  uStack_258 = uStack_b8;
  uStack_260 = uStack_c0;
  uStack_248 = uStack_a8;
  uStack_250 = uStack_b0;
  uStack_298 = uStack_f8;
  uStack_2a0 = uStack_100;
  uStack_288 = uStack_e8;
  uStack_290 = uStack_f0;
  uStack_278 = uStack_d8;
  uStack_280 = uStack_e0;
  uStack_268 = uStack_c8;
  uStack_270 = uStack_d0;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_240 = CONCAT71(uStack_9f,uStack_a0);
  uStack_1a0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_210 = 0;
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_170 = 0;
  uStack_238 = uVar1;
  uStack_230 = uVar9;
  uStack_228 = uVar8;
  uStack_220 = param_4;
  uStack_218 = param_5;
  uStack_198 = uVar1;
  uStack_190 = uVar9;
  uStack_188 = uVar8;
  uStack_180 = param_4;
  uStack_178 = param_5;
  FUN_100028c00(&uStack_2a0,auStack_3a8,0x100052450,&UNK_10003cfc8);
  FUN_100028538(&uStack_200,0x100052450,&UNK_10003cfc8);
  param_1[0xd] = CONCAT71(uStack_237,uStack_238);
  param_1[0xc] = uStack_240;
  param_1[0xf] = uStack_228;
  param_1[0xe] = uStack_230;
  param_1[0x11] = uStack_218;
  param_1[0x10] = uStack_220;
  *(undefined1 *)(param_1 + 0x12) = uStack_210;
  param_1[5] = uStack_278;
  param_1[4] = uStack_280;
  param_1[7] = uStack_268;
  param_1[6] = uStack_270;
  param_1[9] = uStack_258;
  param_1[8] = uStack_260;
  param_1[0xb] = uStack_248;
  param_1[10] = uStack_250;
  param_1[1] = uStack_298;
  *param_1 = uStack_2a0;
  param_1[3] = uStack_288;
  param_1[2] = uStack_290;
  return;
}



/* Entry: 100028488; end: 1000284f7;  */

void FUN_100028488(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_10004c2f8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1000284f8; end: 100028537;  */

void FUN_1000284f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100052470 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s23ExtensionsStickerPicker12SIGIconImageV7SwiftUI4ViewAAMc_10004caa8;
  _swift_getWitnessTable
            (PTR___s23ExtensionsStickerPicker12SIGIconImageV7SwiftUI4ViewAAMc_10004caa8,
             PTR___s23ExtensionsStickerPicker12SIGIconImageVN_10004cab8);
  puRam0000000100052470 = puVar1;
  return;
}



/* Entry: 100028538; end: 100028577;  */

undefined8 FUN_100028538(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100010860(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100028578; end: 10002863f;  */

undefined * FUN_100028578(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_100028660(&puStack_60,0,0,1,param_1,param_2);
  puVar1 = puStack_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    puStack_60 = param_1;
    puStack_48 = PTR___ss11_StringGutsVN_10004cd38;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    puStack_60 = (undefined *)ppuVar2;
    puStack_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_100026348(&puStack_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100028640(&puStack_60);
  return puVar1;
}



/* Entry: 100028640; end: 10002865f;  */

void FUN_100028640(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100028654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*param_1);
  return;
}



/* Entry: 100028660; end: 10002876f;  */

void FUN_100028660(ulong *param_1,ulong param_2,long param_3,char param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if ((param_5 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_5,param_6);
        if (param_5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100028770);
          (*pcVar1)();
        }
      }
      else {
        param_5 = (param_6 & 0xfffffffffffffff) + 0x20;
      }
      *param_1 = param_5;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != 0)) &&
          (uVar2 = param_6 >> 0x38 & 0xf, uVar2 < param_3 - param_2)) {
    uStack_38 = param_6 & 0xffffffffffffff;
    uStack_40 = param_5;
    _memcpy(param_2,&uStack_40,uVar2);
    *(undefined1 *)(param_2 + uVar2) = 0;
    *param_1 = param_2;
    return;
  }
  FUN_100028770(param_5);
  *param_1 = param_6;
  return;
}



/* Entry: 100028770; end: 1000287d3;  */

void FUN_100028770(void)

{
  FUN_1000287d4();
  FUN_100010860(0x1000524b0,&UNK_10003cfe0);
  _swift_initStaticObject();
  func_0x000100028908();
  return;
}



/* Entry: 1000287d4; end: 1000289f7;  */

undefined * FUN_1000287d4(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffff);
    puVar5 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar4;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar5;
    }
    puVar3 = PTR___swiftEmptyArrayStorage_10004ce00;
    if (puVar2 != (undefined *)0x0) {
      FUN_1000289f8(puVar2,0);
      puVar3 = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1);
          if ((long)puVar4 < (long)param_2) goto LAB_100028904;
        }
        else {
          param_1 = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar4;
          if (SBORROW8((long)puVar4,(long)puVar4)) {
LAB_100028904:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100028908);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,param_1,param_2);
        if (param_2 != puVar4) {
LAB_100028870:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100028874);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        puStack_50 = param_1;
        _memcpy(puVar2 + 0x20,&puStack_50,puVar5);
      }
    }
  }
  else {
    puVar2 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    puVar3 = PTR___swiftEmptyArrayStorage_10004ce00;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      FUN_1000289f8();
      puVar4 = puVar3 + 0x20;
      puVar5 = puVar2;
      __ss11_StringGutsV16_foreignCopyUTF84intoSiSgSrys5UInt8VG_tF(puVar4,puVar2,param_1,param_2);
      if (((uint)puVar5 & 0xff) == 1) goto LAB_100028904;
      if (puVar4 != puVar2) goto LAB_100028870;
    }
  }
  return puVar3;
}



/* Entry: 1000289f8; end: 100028a67;  */

undefined * FUN_1000289f8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x1000524b0;
    FUN_100010860(0x1000524b0,&UNK_10003cfe0);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 100028a68; end: 100028bf7;  */

undefined * FUN_100028a68(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100028b58);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x1000524b0;
    FUN_100010860(0x1000524b0,&UNK_10003cfe0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 100028bf8; end: 100028bff;  */

void FUN_100028bf8(void)

{
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovg();
  return;
}



/* Entry: 100028c00; end: 100028c47;  */

undefined8 FUN_100028c00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100028c48; end: 100028c4f;  */

void FUN_100028c48(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100027228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1,param_2);
  return;
}



/* Entry: 100028c50; end: 100028cf7;  */

long FUN_100028c50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100028cf8; end: 100028d6b;  */

undefined1 * FUN_100028cf8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Entry: 100028d6c; end: 100028d7f;  */

void FUN_100028d6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 100028d80; end: 100028dd3;  */

undefined1 * FUN_100028d80(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_release(uVar1);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Entry: 100028dd4; end: 100028e87;  */

int FUN_100028dd4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100028e88; end: 1000290fb;  */

void FUN_100028e88(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  
  lVar5 = 0x1000524d8;
  FUN_100010860(0x1000524d8,&UNK_10003d0a0);
  lVar7 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar9 = (long)puVar8 - extraout_x12;
  lVar6 = 0x1000524e0;
  FUN_100010860(0x1000524e0,&UNK_10003d0a8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar11 = lVar10 - extraout_x12_00;
  bVar2 = (*param_2 & 1) == 0;
  if (!bVar2) {
    uStack_98 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uStack_80 = 0x65626f6c67;
    uStack_78 = 0xe500000000000000;
    pbStack_70 = param_2;
    FUN_1000284f8();
    _swift_retain(uVar3);
    __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
              (lVar11,uStack_98,uVar3,FUN_100029408,auStack_90,
               PTR___s23ExtensionsStickerPicker12SIGIconImageVN_10004cab8,lVar6);
  }
  lVar6 = lVar11;
  (**(code **)(lVar7 + 0x38))(lVar11,bVar2,1,lVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uStack_80 = 0x6472616f6279656b;
  uStack_78 = 0xe800000000000000;
  pbStack_70 = param_2;
  FUN_1000284f8();
  _swift_retain(uVar4);
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar9,uVar3,uVar4,FUN_100029218,auStack_90,
             PTR___s23ExtensionsStickerPicker12SIGIconImageVN_10004cab8,lVar6);
  FUN_10002921c(lVar11,lVar10);
  pcVar12 = *(code **)(lVar7 + 0x10);
  (*pcVar12)(puVar8,lVar9,lVar5);
  FUN_10002921c(lVar10,param_1);
  lVar6 = 0x1000524e8;
  FUN_100010860(0x1000524e8,&UNK_10003d0b0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x30));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (*pcVar12)(param_1 + *(int *)(lVar6 + 0x40),puVar8,lVar5);
  pcVar12 = *(code **)(lVar7 + 8);
  (*pcVar12)(lVar9,lVar5);
  func_0x00010002926c(lVar11);
  (*pcVar12)(puVar8,lVar5);
  func_0x00010002926c(lVar10);
  return;
}



/* Entry: 1000290fc; end: 100029107;  */

void FUN_1000290fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100029108; end: 100029217;  */

void FUN_100029108(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = 0x90;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar3 = 0x1000524c0;
  FUN_100010860(0x1000524c0,&UNK_10003d088);
  FUN_100028e88((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar5 = 0x4032000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar3 = 0x1000524c8;
  uVar7 = uVar6;
  uVar8 = param_4;
  uVar9 = param_5;
  FUN_100010860(0x1000524c8,&UNK_10003d090);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar5 = 0x4024000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0x1000524d0;
  FUN_100010860(0x1000524d0,&UNK_10003d098);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = (char)lVar3;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 100029218; end: 10002921b;  */

void FUN_100029218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0xd4;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x28) & 1) == 0) {
    uVar1 = 0x48;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0x4038000000000000;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)();
  return;
}



/* Entry: 10002921c; end: 1000292b3;  */

undefined8 FUN_10002921c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000524e0;
  FUN_100010860(0x1000524e0,&UNK_10003d0a8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000292b4; end: 1000292ef;  */

void FUN_1000292b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0xd4;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x28) & 1) == 0) {
    uVar1 = 0x48;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0x4038000000000000;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)();
  return;
}



/* Entry: 1000292f0; end: 100029323;  */

void FUN_1000292f0(void)

{
  FUN_100029348(0x1000524f0,0x1000524d0,&UNK_10003d098,FUN_100029324);
  return;
}



/* Entry: 100029324; end: 100029347;  */

void FUN_100029324(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0x1000524c8;
  if (puRam00000001000524f8 == (undefined *)0x0) {
    func_0x0001000118b8(0x1000524c8,&UNK_10003d090);
    uVar2 = uVar1;
    FUN_1000293b8();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_10004c2f8;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
    uStack_40 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,
               uVar1,&uStack_40);
    puRam00000001000524f8 = puVar3;
  }
  return;
}



/* Entry: 100029348; end: 1000293b7;  */

void FUN_100029348(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_10004c2f8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1000293b8; end: 100029407;  */

void FUN_1000293b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100052500 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052508;
  func_0x0001000118b8(0x100052508,&UNK_10003d0b8);
  puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
  _swift_getWitnessTable(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730,uVar1);
  puRam0000000100052500 = puVar2;
  return;
}



/* Entry: 100029408; end: 10002942b;  */

void FUN_100029408(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0xd4;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x28) & 1) == 0) {
    uVar1 = 0x48;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0x4038000000000000;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)();
  return;
}



/* Entry: 10002942c; end: 1000299c7;  */

void FUN_10002942c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_970 [248];
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined1 uStack_858;
  undefined8 uStack_857;
  undefined8 uStack_84f;
  undefined8 uStack_847;
  undefined8 uStack_83f;
  undefined8 uStack_837;
  undefined7 uStack_82f;
  undefined1 uStack_828;
  undefined7 uStack_827;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined1 uStack_5b0;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
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
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined1 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
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
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
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
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
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
  undefined *puStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 auStack_e8 [48];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  func_0x00010003870c();
  uVar1 = param_2;
  uVar6 = param_3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_e8,0,1,0x4044000000000000,0,uVar1,uVar6);
  uStack_2b9 = (undefined1)auStack_e8._8_8_;
  uStack_2b8 = SUB87(auStack_e8._8_8_,1);
  uStack_2c1 = (undefined1)auStack_e8._0_8_;
  uStack_2c0 = SUB87(auStack_e8._0_8_,1);
  uStack_2a9 = (undefined1)auStack_e8._24_8_;
  uStack_2a8 = SUB87(auStack_e8._24_8_,1);
  uStack_2b1 = (undefined1)auStack_e8._16_8_;
  uStack_2b0 = SUB87(auStack_e8._16_8_,1);
  uStack_299 = (undefined1)auStack_e8._40_8_;
  uStack_298 = SUB87(auStack_e8._40_8_,1);
  uStack_2a1 = (undefined1)auStack_e8._32_8_;
  uStack_2a0 = SUB87(auStack_e8._32_8_,1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_8f = uStack_2c0;
  uStack_88 = uStack_2b9;
  uStack_97 = uStack_2c8;
  uStack_90 = uStack_2c1;
  uStack_6f = uStack_2a0;
  uStack_77 = uStack_2a8;
  uStack_70 = uStack_2a1;
  uStack_a8 = 0x4031000000000000;
  uStack_a0 = 0x51;
  uStack_98 = 0;
  uStack_68 = uStack_299;
  uStack_67 = uStack_298;
  uStack_7f = uStack_2b0;
  uStack_78 = uStack_2a9;
  uStack_87 = uStack_2b8;
  uStack_80 = uStack_2b1;
  uStack_b8 = param_2;
  uStack_b0 = param_3;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_238,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_268 = CONCAT71(uStack_8f,uStack_90);
  uStack_270 = CONCAT71(uStack_97,uStack_98);
  uStack_258 = CONCAT71(uStack_7f,uStack_80);
  uStack_260 = CONCAT71(uStack_87,uStack_88);
  uStack_248 = CONCAT71(uStack_6f,uStack_70);
  uStack_250 = CONCAT71(uStack_77,uStack_78);
  uStack_240 = CONCAT71(uStack_67,uStack_68);
  uStack_288 = uStack_b0;
  uStack_290 = uStack_b8;
  uStack_278 = uStack_a0;
  uStack_280 = uStack_a8;
  uStack_868 = 0x4031000000000000;
  uStack_860 = 0x51;
  uStack_858 = 0;
  uStack_84f = CONCAT17(uStack_2b9,uStack_2c0);
  uStack_857 = CONCAT17(uStack_2c1,uStack_2c8);
  uStack_83f = CONCAT17(uStack_2a9,uStack_2b0);
  uStack_847 = CONCAT17(uStack_2b1,uStack_2b8);
  uStack_837 = CONCAT17(uStack_2a1,uStack_2a8);
  uStack_827 = uStack_298;
  uStack_82f = uStack_2a0;
  uStack_828 = uStack_299;
  uStack_878 = param_2;
  uStack_870 = param_3;
  FUN_1000299d8(&uStack_b8,&uStack_3c0,0x100052510,&UNK_10003d148);
  func_0x000100029a20(&uStack_878,0x100052510,&UNK_10003d148);
  puVar2 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self();
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar3 = puVar2;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_778 = uStack_1e8;
  uStack_780 = uStack_1f0;
  uStack_768 = uStack_1d8;
  uStack_770 = uStack_1e0;
  uStack_7b8 = uStack_228;
  uStack_7c0 = uStack_230;
  uStack_7a8 = uStack_218;
  uStack_7b0 = uStack_220;
  uStack_798 = uStack_208;
  uStack_7a0 = uStack_210;
  uStack_788 = uStack_1f8;
  uStack_790 = uStack_200;
  uStack_7f8 = uStack_268;
  uStack_800 = uStack_270;
  uStack_7e8 = uStack_258;
  uStack_7f0 = uStack_260;
  uStack_7d8 = uStack_248;
  uStack_7e0 = uStack_250;
  uStack_7c8 = uStack_238;
  uStack_7d0 = uStack_240;
  uStack_818 = uStack_288;
  uStack_820 = uStack_290;
  uStack_808 = uStack_278;
  uStack_810 = uStack_280;
  uStack_6a8 = uStack_1e8;
  uStack_6b0 = uStack_1f0;
  uStack_698 = uStack_1d8;
  uStack_6a0 = uStack_1e0;
  uStack_6e8 = uStack_228;
  uStack_6f0 = uStack_230;
  uStack_6d8 = uStack_218;
  uStack_6e0 = uStack_220;
  uStack_6c8 = uStack_208;
  uStack_6d0 = uStack_210;
  uStack_6b8 = uStack_1f8;
  uStack_6c0 = uStack_200;
  uStack_728 = uStack_268;
  uStack_730 = uStack_270;
  uStack_718 = uStack_258;
  uStack_720 = uStack_260;
  uStack_708 = uStack_248;
  uStack_710 = uStack_250;
  uStack_6f8 = uStack_238;
  uStack_700 = uStack_240;
  uStack_760 = uStack_1d0;
  uStack_690 = uStack_1d0;
  uStack_748 = uStack_288;
  uStack_750 = uStack_290;
  uStack_738 = uStack_278;
  uStack_740 = uStack_280;
  FUN_1000299d8(&uStack_820,&uStack_3c0,0x100052518,&UNK_10003d150);
  puVar4 = &uStack_750;
  func_0x000100029a20(puVar4,0x100052518,&UNK_10003d150);
  __s7SwiftUI5ColorV5blackACvgZ();
  puVar5 = puVar4;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fc999999999999a);
  _swift_release(puVar4);
  uStack_5d8 = uStack_1e8;
  uStack_5e0 = uStack_1f0;
  uStack_5c8 = uStack_1d8;
  uStack_5d0 = uStack_1e0;
  uStack_618 = uStack_228;
  uStack_620 = uStack_230;
  uStack_608 = uStack_218;
  uStack_610 = uStack_220;
  uStack_5f8 = uStack_208;
  uStack_600 = uStack_210;
  uStack_5e8 = uStack_1f8;
  uStack_5f0 = uStack_200;
  uStack_658 = uStack_268;
  uStack_660 = uStack_270;
  uStack_648 = uStack_258;
  uStack_650 = uStack_260;
  uStack_638 = uStack_248;
  uStack_640 = uStack_250;
  uStack_628 = uStack_238;
  uStack_630 = uStack_240;
  uStack_678 = uStack_288;
  uStack_680 = uStack_290;
  uStack_668 = uStack_278;
  uStack_670 = uStack_280;
  uStack_5c0 = uStack_1d0;
  uStack_118 = uStack_1e8;
  uStack_120 = uStack_1f0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  uStack_158 = uStack_228;
  uStack_160 = uStack_230;
  uStack_148 = uStack_218;
  uStack_150 = uStack_220;
  uStack_138 = uStack_208;
  uStack_140 = uStack_210;
  uStack_128 = uStack_1f8;
  uStack_130 = uStack_200;
  uStack_198 = uStack_268;
  uStack_1a0 = uStack_270;
  uStack_188 = uStack_258;
  uStack_190 = uStack_260;
  uStack_178 = uStack_248;
  uStack_180 = uStack_250;
  uStack_168 = uStack_238;
  uStack_170 = uStack_240;
  uStack_1b8 = uStack_288;
  uStack_1c0 = uStack_290;
  uStack_1a8 = uStack_278;
  uStack_1b0 = uStack_280;
  uStack_100 = uStack_1d0;
  uStack_4f8 = uStack_1e8;
  uStack_500 = uStack_1f0;
  uStack_4e8 = uStack_1d8;
  uStack_4f0 = uStack_1e0;
  uStack_538 = uStack_228;
  uStack_540 = uStack_230;
  uStack_528 = uStack_218;
  uStack_530 = uStack_220;
  uStack_508 = uStack_1f8;
  uStack_510 = uStack_200;
  uStack_518 = uStack_208;
  uStack_520 = uStack_210;
  uStack_578 = uStack_268;
  uStack_580 = uStack_270;
  uStack_568 = uStack_258;
  uStack_570 = uStack_260;
  uStack_548 = uStack_238;
  uStack_550 = uStack_240;
  uStack_558 = uStack_248;
  uStack_560 = uStack_250;
  uStack_5b0 = SUB81(puVar3,0);
  uStack_588 = uStack_278;
  uStack_590 = uStack_280;
  uStack_598 = uStack_288;
  uStack_5a0 = uStack_290;
  uStack_4e0 = uStack_1d0;
  puStack_5b8 = puVar2;
  puStack_4d8 = puVar2;
  uStack_4d0 = uStack_5b0;
  puStack_f8 = puVar2;
  uStack_f0 = uStack_5b0;
  FUN_1000299d8(&uStack_680,&uStack_3c0,0x100052520,&UNK_10003d158);
  func_0x000100029a20(&uStack_5a0,0x100052520,&UNK_10003d158);
  uStack_418 = uStack_118;
  uStack_420 = uStack_120;
  uStack_408 = uStack_108;
  uStack_410 = uStack_110;
  puStack_3f8 = puStack_f8;
  uStack_400 = uStack_100;
  uStack_458 = uStack_158;
  uStack_460 = uStack_160;
  uStack_448 = uStack_148;
  uStack_450 = uStack_150;
  uStack_438 = uStack_138;
  uStack_440 = uStack_140;
  uStack_428 = uStack_128;
  uStack_430 = uStack_130;
  uStack_498 = uStack_198;
  uStack_4a0 = uStack_1a0;
  uStack_488 = uStack_188;
  uStack_490 = uStack_190;
  uStack_478 = uStack_178;
  uStack_480 = uStack_180;
  uStack_468 = uStack_168;
  uStack_470 = uStack_170;
  uStack_4b8 = uStack_1b8;
  uStack_4c0 = uStack_1c0;
  uStack_4a8 = uStack_1a8;
  uStack_4b0 = uStack_1b0;
  uStack_318 = uStack_118;
  uStack_320 = uStack_120;
  uStack_308 = uStack_108;
  uStack_310 = uStack_110;
  puStack_2f8 = puStack_f8;
  uStack_300 = uStack_100;
  uStack_358 = uStack_158;
  uStack_360 = uStack_160;
  uStack_348 = uStack_148;
  uStack_350 = uStack_150;
  uStack_338 = uStack_138;
  uStack_340 = uStack_140;
  uStack_328 = uStack_128;
  uStack_330 = uStack_130;
  uStack_398 = uStack_198;
  uStack_3a0 = uStack_1a0;
  uStack_388 = uStack_188;
  uStack_390 = uStack_190;
  uStack_3f0 = CONCAT71(uStack_ef,uStack_f0);
  uStack_2f0 = CONCAT71(uStack_ef,uStack_f0);
  uStack_378 = uStack_178;
  uStack_380 = uStack_180;
  uStack_368 = uStack_168;
  uStack_370 = uStack_170;
  uStack_3d8 = 0;
  uStack_3e0 = 0x4018000000000000;
  uStack_3d0 = 0x4008000000000000;
  uStack_3b8 = uStack_1b8;
  uStack_3c0 = uStack_1c0;
  uStack_3a8 = uStack_1a8;
  uStack_3b0 = uStack_1b0;
  uStack_2d8 = 0;
  uStack_2e0 = 0x4018000000000000;
  uStack_2d0 = 0x4008000000000000;
  puStack_3e8 = puVar5;
  puStack_2e8 = puVar5;
  FUN_1000299d8(&uStack_4c0,auStack_970,0x100052528,&UNK_10003d160);
  func_0x000100029a20(&uStack_3c0,0x100052528,&UNK_10003d160);
  param_1[0x19] = puStack_3f8;
  param_1[0x18] = uStack_400;
  param_1[0x1b] = puStack_3e8;
  param_1[0x1a] = uStack_3f0;
  param_1[0x1d] = uStack_3d8;
  param_1[0x1c] = uStack_3e0;
  param_1[0x1e] = uStack_3d0;
  param_1[0x11] = uStack_438;
  param_1[0x10] = uStack_440;
  param_1[0x13] = uStack_428;
  param_1[0x12] = uStack_430;
  param_1[0x15] = uStack_418;
  param_1[0x14] = uStack_420;
  param_1[0x17] = uStack_408;
  param_1[0x16] = uStack_410;
  param_1[9] = uStack_478;
  param_1[8] = uStack_480;
  param_1[0xb] = uStack_468;
  param_1[10] = uStack_470;
  param_1[0xd] = uStack_458;
  param_1[0xc] = uStack_460;
  param_1[0xf] = uStack_448;
  param_1[0xe] = uStack_450;
  param_1[1] = uStack_4b8;
  *param_1 = uStack_4c0;
  param_1[3] = uStack_4a8;
  param_1[2] = uStack_4b0;
  param_1[5] = uStack_498;
  param_1[4] = uStack_4a0;
  param_1[7] = uStack_488;
  param_1[6] = uStack_490;
  return;
}



/* Entry: 1000299c8; end: 1000299d7;  */

void FUN_1000299c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 1000299d8; end: 100029a5f;  */

undefined8 FUN_1000299d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100029a60; end: 100029a63;  */

void FUN_100029a60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100052530 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052528;
  func_0x0001000118b8(0x100052528,&UNK_10003d160);
  uVar2 = uVar1;
  func_0x000100029adc();
  puStack_28 = PTR___s7SwiftUI13_ShadowEffectVAA12ViewModifierAAWP_10004c288;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052530 = puVar3;
  return;
}



/* Entry: 100029a64; end: 100029c43;  */

void FUN_100029a64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100052530 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052528;
  func_0x0001000118b8(0x100052528,&UNK_10003d160);
  uVar2 = uVar1;
  func_0x000100029adc();
  puStack_28 = PTR___s7SwiftUI13_ShadowEffectVAA12ViewModifierAAWP_10004c288;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100052530 = puVar3;
  return;
}



/* Entry: 100029c44; end: 100029cd3;  */

void FUN_100029c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000100052550 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s23ExtensionsStickerPicker7SIGTextV7SwiftUI4ViewAAMc_10004cc18;
  _swift_getWitnessTable
            (PTR___s23ExtensionsStickerPicker7SIGTextV7SwiftUI4ViewAAMc_10004cc18,
             PTR___s23ExtensionsStickerPicker7SIGTextVN_10004cc28);
  puRam0000000100052550 = puVar1;
  return;
}



/* Entry: 100029cd4; end: 100029cf7;  */

undefined8 * FUN_100029cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100029cd4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100029cf8; end: 100029d93;  */

undefined8 * FUN_100029cf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100029cd4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100029d94; end: 100029da7;  */

void FUN_100029d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100029da8; end: 100029deb;  */

undefined8 * FUN_100029da8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000100029cf0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100029dec; end: 100029e97;  */

int FUN_100029dec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100029e98; end: 10002adc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100029e98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong *puVar15;
  undefined8 uVar16;
  ulong auStack_230 [5];
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_168;
  long lStack_160;
  undefined1 uStack_158;
  ulong auStack_148 [2];
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar7 = 0x100052568;
  uStack_1c8 = param_1;
  FUN_100010860(0x100052568,&UNK_10003d1d8);
  lStack_1e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x100052570;
  lStack_1d0 = (long)auStack_230 - extraout_x8;
  FUN_100010860(0x100052570,&UNK_10003d1e0);
  auStack_230[4] = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = ((long)auStack_230 - extraout_x8) - extraout_x8_00;
  lVar7 = 0x100052578;
  lStack_208 = lVar14;
  FUN_100010860(0x100052578,&UNK_10003d1e8);
  lStack_1d8 = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar7 = 0x100052580;
  lStack_200 = lVar14;
  FUN_100010860(0x100052580,&UNK_10003d1f0);
  lStack_1e8 = lVar7;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (ulong *)(lVar14 - extraout_x8_02);
  uVar8 = 0;
  FUN_100023588(0);
  uVar12 = uVar8;
  FUN_10002addc();
  lVar7 = param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
  puVar13 = &UNK_10003d1f8;
  _swift_getKeyPath(&UNK_10003d1f8);
  puVar9 = &UNK_10003d220;
  _swift_getKeyPath(&UNK_10003d220);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_148,lVar7,puVar13,puVar9);
  _swift_release(puVar13);
  _swift_release(puVar9);
  _swift_release(lVar7);
  if ((byte)auStack_148[0] < 2) {
    if ((byte)auStack_148[0] == 0) {
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      func_0x000100026600(lVar7 + _DAT_100054338,auStack_138);
      _swift_release(lVar7);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      uVar16 = *(undefined8 *)(lVar7 + _DAT_100054350);
      _swift_retain(uVar16);
      _swift_release(lVar7);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      puVar13 = &UNK_10003d260;
      _swift_getKeyPath(&UNK_10003d260);
      puVar9 = &UNK_10003d288;
      _swift_getKeyPath(&UNK_10003d288);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                (auStack_108,lVar7,puVar13,puVar9);
      _swift_release(lVar7);
      _swift_release(puVar13);
      _swift_release(puVar9);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      uVar4 = *(undefined1 *)(lVar7 + _DAT_100054340);
      _swift_release();
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      puVar1 = (undefined8 *)(param_2 + _DAT_100054348);
      auStack_230[3] = puVar1[1];
      auStack_230[2] = *puVar1;
      _swift_retain(puVar1[1]);
      _swift_release(param_2);
      uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
      __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(auStack_148,&uStack_1c0,PTR___sSbN_10004ccf0);
      lVar7 = lStack_208;
      uStack_f0 = auStack_230[3];
      uStack_f8 = auStack_230[2];
      uVar12 = 0x1000525c8;
      puVar13 = &UNK_10003d258;
      uStack_110 = uVar16;
      uStack_100 = uVar4;
      FUN_10002b08c(auStack_148,lStack_208,0x1000525c8,&UNK_10003d258);
      _swift_storeEnumTagMultiPayload(lVar7,auStack_230[4],1);
      uVar11 = uVar12;
      FUN_100010860(0x1000525c8,&UNK_10003d258);
      uVar8 = 0x1000525b8;
      func_0x00010002aee0(0x1000525b8,0x100052580,&UNK_10003d1f0,&UNK_10003d738);
      uVar16 = 0x1000525c0;
      func_0x00010002aee0(0x1000525c0,0x1000525c8,&UNK_10003d258,&UNK_10003d4f0);
      lVar14 = lStack_200;
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (lStack_200,lVar7,lStack_1e8,uVar11,uVar8,uVar16);
      lVar7 = lStack_1d0;
      FUN_10002b08c(lVar14,lStack_1d0,0x100052578,&UNK_10003d1e8);
      _swift_storeEnumTagMultiPayload(lVar7,lStack_1e0,0);
      uVar8 = 0x1000525a8;
      FUN_100010860(0x1000525a8,&UNK_10003d250);
      uVar16 = uVar8;
      func_0x00010002ae28();
      uVar11 = uVar16;
      func_0x00010002af24();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_1c8,lVar7,lStack_1d8,uVar8,uVar16,uVar11);
      func_0x00010002b0d4(lVar14,0x100052578,&UNK_10003d1e8);
      puVar15 = auStack_148;
    }
    else {
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      func_0x000100026600(lVar7 + _DAT_100054338,&uStack_c8);
      _swift_release(lVar7);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      lStack_1e8 = *(long *)(lVar7 + _DAT_100054330);
      _swift_retain();
      _swift_release(lVar7);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      uVar16 = *(undefined8 *)(lVar7 + _DAT_100054350);
      _swift_retain(uVar16);
      _swift_release(lVar7);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      puVar13 = &UNK_10003d260;
      _swift_getKeyPath(&UNK_10003d260);
      puVar9 = &UNK_10003d288;
      _swift_getKeyPath(&UNK_10003d288);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                (&uStack_90,lVar7,puVar13,puVar9);
      _swift_release(lVar7);
      _swift_release(puVar13);
      _swift_release(puVar9);
      lVar7 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      uVar4 = *(undefined1 *)(lVar7 + _DAT_100054340);
      _swift_release();
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
      plVar3 = (long *)(param_2 + _DAT_100054348);
      lStack_1f8 = plVar3[1];
      lStack_200 = *plVar3;
      _swift_retain(plVar3[1]);
      _swift_release(param_2);
      auStack_148[0]._0_1_ = 0;
      __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_d8,auStack_148,PTR___sSbN_10004ccf0);
      lStack_a0 = lStack_1e8;
      lStack_78 = lStack_1f8;
      lStack_80 = lStack_200;
      uVar12 = 0x100052590;
      puVar13 = &UNK_10003d248;
      uStack_98 = uVar16;
      uStack_88 = uVar4;
      FUN_10002b08c(&uStack_d8,&uStack_1c0,0x100052590,&UNK_10003d248);
      uStack_158 = 0;
      uVar10 = uVar12;
      FUN_100010860(0x100052590,&UNK_10003d248);
      uVar8 = 0x100052588;
      FUN_100010860(0x100052588,&UNK_10003d240);
      uVar16 = 0x100052598;
      func_0x00010002aee0(0x100052598,0x100052590,&UNK_10003d248,&UNK_10003d600);
      uVar11 = 0x1000525a0;
      func_0x00010002aee0(0x1000525a0,0x100052588,&UNK_10003d240,&UNK_10003d8f0);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (auStack_148,&uStack_1c0,uVar10,uVar8,uVar16,uVar11);
      lVar7 = lStack_1d0;
      uVar8 = 0x1000525a8;
      FUN_10002b08c(auStack_148,lStack_1d0,0x1000525a8,&UNK_10003d250);
      _swift_storeEnumTagMultiPayload(lVar7,lStack_1e0,1);
      FUN_100010860(0x1000525a8,&UNK_10003d250);
      uVar16 = uVar8;
      func_0x00010002ae28();
      uVar11 = uVar16;
      func_0x00010002af24();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_1c8,lVar7,lStack_1d8,uVar8,uVar16,uVar11);
      func_0x00010002b0d4(auStack_148,0x1000525a8,&UNK_10003d250);
      puVar15 = &uStack_d8;
    }
  }
  else if ((byte)auStack_148[0] == 2) {
    lVar7 = param_2;
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
    auStack_230[2] = *(undefined8 *)(lVar7 + _DAT_100054350);
    _swift_retain();
    _swift_release(lVar7);
    lVar7 = param_2;
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
    puVar13 = &UNK_10003d260;
    _swift_getKeyPath(&UNK_10003d260);
    puVar9 = &UNK_10003d288;
    _swift_getKeyPath(&UNK_10003d288);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              ((long)puVar15 + (long)*(int *)(lStack_1e8 + 0x30),lVar7,puVar13,puVar9);
    _swift_release(lVar7);
    _swift_release(puVar13);
    _swift_release(puVar9);
    lVar7 = param_2;
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
    uVar4 = *(undefined1 *)(lVar7 + _DAT_100054340);
    _swift_release();
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
    puVar2 = (ulong *)(param_2 + _DAT_100054348);
    auStack_230[1] = puVar2[1];
    auStack_230[0] = *puVar2;
    _swift_retain(puVar2[1]);
    _swift_release(param_2);
    puVar13 = &UNK_10003d2a8;
    _swift_getKeyPath();
    *puVar15 = (ulong)puVar13;
    uVar12 = 0x1000524b8;
    FUN_100010860(0x1000524b8,&UNK_10003d6a0);
    _swift_storeEnumTagMultiPayload(puVar15,uVar12,0);
    lVar6 = lStack_1e8;
    iVar5 = *(int *)(lStack_1e8 + 0x24);
    puVar13 = &UNK_10003d2e0;
    _swift_getKeyPath();
    *(undefined **)((long)puVar15 + (long)iVar5) = puVar13;
    uVar12 = 0x100051d68;
    FUN_100010860(0x100051d68,&UNK_10003c420);
    _swift_storeEnumTagMultiPayload((long)puVar15 + (long)iVar5,uVar12,0);
    auStack_148[0]._0_1_ = 0;
    __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC
              ((long)puVar15 + (long)*(int *)(lVar6 + 0x28),auStack_148,PTR___sSbN_10004ccf0);
    *(ulong *)((long)puVar15 + (long)*(int *)(lVar6 + 0x2c)) = auStack_230[2];
    *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar6 + 0x34)) = uVar4;
    puVar2 = (ulong *)((long)puVar15 + (long)*(int *)(lVar6 + 0x38));
    puVar2[1] = auStack_230[1];
    *puVar2 = auStack_230[0];
    lVar7 = lStack_208;
    puVar13 = &UNK_10003d1f0;
    FUN_10002b08c(puVar15,lStack_208,0x100052580,&UNK_10003d1f0);
    _swift_storeEnumTagMultiPayload(lVar7,auStack_230[4],0);
    uVar12 = 0x1000525c8;
    FUN_100010860(0x1000525c8,&UNK_10003d258);
    uVar8 = 0x1000525b8;
    func_0x00010002aee0(0x1000525b8,0x100052580,&UNK_10003d1f0,&UNK_10003d738);
    uVar16 = 0x1000525c0;
    func_0x00010002aee0(0x1000525c0,0x1000525c8,&UNK_10003d258,&UNK_10003d4f0);
    lVar14 = lStack_200;
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (lStack_200,lVar7,lVar6,uVar12,uVar8,uVar16);
    lVar7 = lStack_1d0;
    FUN_10002b08c(lVar14,lStack_1d0,0x100052578,&UNK_10003d1e8);
    _swift_storeEnumTagMultiPayload(lVar7,lStack_1e0,0);
    uVar12 = 0x1000525a8;
    FUN_100010860(0x1000525a8,&UNK_10003d250);
    uVar8 = uVar12;
    func_0x00010002ae28();
    uVar16 = uVar8;
    func_0x00010002af24();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_1c8,lVar7,lStack_1d8,uVar12,uVar8,uVar16);
    func_0x00010002b0d4(lVar14,0x100052578,&UNK_10003d1e8);
    uVar12 = 0x100052580;
  }
  else {
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar8,uVar12);
    func_0x00010002aae0(&uStack_d8);
    uStack_178 = uStack_90;
    uStack_180 = uStack_98;
    lStack_168 = lStack_80;
    lStack_160 = lStack_78;
    uStack_1b8 = uStack_d0;
    uStack_1c0 = uStack_d8;
    uStack_1a8 = uStack_c0;
    uStack_1b0 = uStack_c8;
    uStack_198 = uStack_b0;
    uStack_1a0 = uStack_b8;
    lStack_188 = lStack_a0;
    uStack_190 = uStack_a8;
    uStack_158 = 1;
    uVar12 = 0x100052588;
    FUN_10002b08c(&uStack_d8,auStack_148,0x100052588,&UNK_10003d240);
    uVar8 = 0x100052590;
    FUN_100010860(0x100052590,&UNK_10003d248);
    FUN_100010860(0x100052588,&UNK_10003d240);
    uVar16 = 0x100052598;
    func_0x00010002aee0(0x100052598,0x100052590,&UNK_10003d248,&UNK_10003d600);
    uVar11 = 0x1000525a0;
    func_0x00010002aee0(0x1000525a0,0x100052588,&UNK_10003d240,&UNK_10003d8f0);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (auStack_148,&uStack_1c0,uVar8,uVar12,uVar16,uVar11);
    lVar7 = lStack_1d0;
    uVar12 = 0x1000525a8;
    FUN_10002b08c(auStack_148,lStack_1d0,0x1000525a8,&UNK_10003d250);
    _swift_storeEnumTagMultiPayload(lVar7,lStack_1e0,1);
    FUN_100010860(0x1000525a8,&UNK_10003d250);
    uVar8 = uVar12;
    func_0x00010002ae28();
    uVar16 = uVar8;
    func_0x00010002af24();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_1c8,lVar7,lStack_1d8,uVar12,uVar8,uVar16);
    func_0x00010002b0d4(&uStack_d8,0x100052588,&UNK_10003d240);
    puVar15 = auStack_148;
    uVar12 = 0x1000525a8;
    puVar13 = &UNK_10003d250;
  }
  func_0x00010002b0d4(puVar15,uVar12,puVar13);
  return;
}



/* Entry: 10002adc4; end: 10002addb;  */

void FUN_10002adc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10002addc; end: 10002ae1f;  */

void FUN_10002addc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000522e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100023588(0xff);
  puVar2 = &UNK_10003cad8;
  _swift_getWitnessTable(&UNK_10003cad8,uVar1);
  puRam00000001000522e0 = puVar2;
  return;
}



/* Entry: 10002ae20; end: 10002ae27;  */

void FUN_10002ae20(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003ce50;
  _swift_getKeyPath(&UNK_10003ce50);
  puVar2 = &UNK_10003ce78;
  _swift_getKeyPath(&UNK_10003ce78);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 10002ae28; end: 10002afdb;  */

void FUN_10002ae28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000525b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100052578;
  func_0x0001000118b8(0x100052578,&UNK_10003d1e8);
  uVar2 = 0x1000525b8;
  func_0x00010002aee0(0x1000525b8,0x100052580,&UNK_10003d1f0,&UNK_10003d738);
  uVar3 = 0x1000525c0;
  func_0x00010002aee0(0x1000525c0,0x1000525c8,&UNK_10003d258,&UNK_10003d4f0);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar1,
             &uStack_30);
  puRam00000001000525b0 = puVar4;
  return;
}



/* Entry: 10002afdc; end: 10002afe3;  */

void FUN_10002afdc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003cd78;
  _swift_getKeyPath(&UNK_10003cd78);
  puVar2 = &UNK_10003cda0;
  _swift_getKeyPath(&UNK_10003cda0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}


