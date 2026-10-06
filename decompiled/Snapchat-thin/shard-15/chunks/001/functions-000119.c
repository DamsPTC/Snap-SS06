/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b89f3cc; end: 10b89f40b; -[SCCBlizzardEvent initWithName:parameters:userTracked:] */

void FUN_10b89f3cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89f40c; end: 10b89f423; +[SCCBlizzardEvent valdiMarshallableObjectDescriptor] */

void FUN_10b89f40c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6ffc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f424; end: 10b89f45f; -[SCCComposerAnalyticsContext initWithPageType:sessionId:] */

void FUN_10b89f424(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf90;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89f460; end: 10b89f47f; +[SCCComposerAnalyticsContext valdiMarshallableObjectDescriptor] */

void FUN_10b89f460(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d70028;
  param_1[1] = &PTR_DAT_110d70070;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f480; end: 10b89f487; -[SCBridgeObserverEvent__Enum init] */

void FUN_10b89f480(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b89f488; end: 10b89f4b7; -[SCBridgeError initWithMessage:] */

void FUN_10b89f488(void)

{
  func_0x000107c39f20();
  func_0x000107c39f14();
  return;
}



/* Entry: 10b89f4b8; end: 10b89f4cf; +[SCBridgeError valdiMarshallableObjectDescriptor] */

void FUN_10b89f4b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_message_110d70080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f4d0; end: 10b89f513; -[SCBridgeObservable initWithSubscribe:] */

undefined8 FUN_10b89f4d0(undefined8 param_1)

{
  func_0x00010b89f688();
  func_0x000107c39f20();
  func_0x000107c39f14();
  func_0x000107c39f1c();
  return param_1;
}



/* Entry: 10b89f514; end: 10b89f533; +[SCBridgeObservable valdiMarshallableObjectDescriptor] */

void FUN_10b89f514(undefined8 *param_1)

{
  *param_1 = &PTR_s_subscribe_110d700f8;
  param_1[1] = &PTR_DAT_110d70128;
  param_1[2] = &PTR_DAT_110d700c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f534; end: 10b89f563;  */

undefined8 FUN_10b89f534(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1),param_2[2],param_2[3],param_2[4]);
  return 0;
}



/* Entry: 10b89f564; end: 10b89f5e3;  */

void FUN_10b89f564(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b89f648;
  puStack_30 = &UNK_110d70248;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b89f5e4; end: 10b89f627; -[SCBridgeObserver initWithOnEvent:] */

undefined8 FUN_10b89f5e4(undefined8 param_1)

{
  func_0x00010b89f688();
  func_0x000107c39f20();
  func_0x000107c39f14();
  func_0x000107c39f1c();
  return param_1;
}



/* Entry: 10b89f628; end: 10b89f647; +[SCBridgeObserver valdiMarshallableObjectDescriptor] */

void FUN_10b89f628(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d70170;
  param_1[1] = &PTR_DAT_110d701a0;
  param_1[2] = &PTR_DAT_110d70140;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f648; end: 10b89f67b;  */

void FUN_10b89f648(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b89f67c; end: 10b89f693;  */

void FUN_10b89f67c(void)

{
  return;
}



/* Entry: 10b89f694; end: 10b89f6ef; -[SCCFoundationProvider initWithGet:] */

undefined8 FUN_10b89f694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x00010b89f794();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b89f6f0; end: 10b89f6ff; +[SCCFoundationProvider valdiMarshallableObjectDescriptor] */

void FUN_10b89f6f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d70278;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f700; end: 10b89f733; -[SCValdiFoundationError initWithMessage:] */

void FUN_10b89f700(undefined8 param_1)

{
  func_0x00010b89f794(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89f734; end: 10b89f743; +[SCValdiFoundationError valdiMarshallableObjectDescriptor] */

void FUN_10b89f734(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_message_110d702a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f744; end: 10b89f777; -[SCValdiFoundationLong initWithLowBits:highBits:] */

void FUN_10b89f744(undefined8 param_1)

{
  func_0x00010b89f794(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b89f778; end: 10b89f79f; +[SCValdiFoundationLong valdiMarshallableObjectDescriptor] */

void FUN_10b89f778(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d702f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f7a0; end: 10b89f7d3; -[SCCValdiCoreOptional init] */

void FUN_10b89f7a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bfd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b89f7d4; end: 10b89f7eb; +[SCCValdiCoreOptional valdiMarshallableObjectDescriptor] */

void FUN_10b89f7d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_data_110d70338;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f7ec; end: 10b89f827; -[SCCCoreUtilsMediaTimeRange initWithStartMs:durationMs:] */

void FUN_10b89f7ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bfd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89f828; end: 10b89f83f; +[SCCCoreUtilsMediaTimeRange valdiMarshallableObjectDescriptor] */

void FUN_10b89f828(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_startMs_110d70368;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f840; end: 10b89f87f; -[SCElementFrame initWithX:y:width:height:] */

void FUN_10b89f840(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bfe0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b89f880; end: 10b89f88f; +[SCElementFrame valdiMarshallableObjectDescriptor] */

void FUN_10b89f880(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d703b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f890; end: 10b89f8b3; -[SCPoint initWithX:y:] */

void FUN_10b89f890(void)

{
  func_0x00010b89f8f8(PTR_PTR_11270bfe8);
  return;
}



/* Entry: 10b89f8b4; end: 10b89f8c3; +[SCPoint valdiMarshallableObjectDescriptor] */

void FUN_10b89f8b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d70428;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f8c4; end: 10b89f8e7; -[SCSize initWithWidth:height:] */

void FUN_10b89f8c4(void)

{
  func_0x00010b89f8f8(PTR_PTR_11270bff0);
  return;
}



/* Entry: 10b89f8e8; end: 10b89f91f; +[SCSize valdiMarshallableObjectDescriptor] */

void FUN_10b89f8e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_width_110d70470;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b89f920; end: 10b89fbdb;  */

undefined8 * FUN_10b89f920(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [22];
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined4 auStack_c8 [12];
  undefined1 auStack_98 [48];
  undefined8 uStack_68;
  
  puVar1 = param_1;
  func_0x00010b8a06e8();
  *puVar1 = &PTR_FUN_110d704c8;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  uStack_68 = extraout_x8;
  func_0x00010b89fdb4(auStack_98,0xc,auStack_c8,auStack_e0,&uStack_c9);
  puVar2 = auStack_c8;
  func_0x00010b89fdb4(puVar2,6,auStack_e0,&uStack_c9,&uStack_ca);
  func_0x00010b8a0700();
  func_0x00010b8a0644();
  *puVar2 = 0;
  func_0x00010b8a0668();
  pcVar3 = "view";
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  pcVar3[0] = '\x01';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  func_0x00010b8a0668();
  pcVar3 = "image";
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  pcVar3[0] = '\x04';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&DAT_10f3971cc;
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  *puVar2 = 3;
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&UNK_10f7ca3c2;
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  *puVar2 = 5;
  func_0x00010b8a0668();
  pcVar3 = "text";
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  pcVar3[0] = '\x02';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&DAT_10f311774;
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  *puVar2 = 6;
  func_0x00010b8a0668();
  func_0x00010b8a0670("link");
  func_0x00010b8a0644();
  func_0x00010b8a065c(8);
  func_0x00010b8a0670("header");
  func_0x00010b8a0644();
  func_0x00010b8a065c(7);
  func_0x00010b8a0670(&DAT_10f7ca3cf);
  func_0x00010b8a0644();
  func_0x00010b8a065c(9);
  func_0x00010b8a0670(&DAT_10f7ca3d8);
  func_0x00010b8a0644();
  func_0x00010b8a065c(10);
  puVar2 = (undefined4 *)&UNK_10f7ca3de;
  func_0x00010b8a0670();
  func_0x00010b8a0644();
  func_0x00010b8a065c(0xb);
  func_0x00010b8a0700();
  func_0x00010b8a0650();
  *puVar2 = 0;
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&UNK_10f7ca3eb;
  func_0x00010b8a0670();
  func_0x00010b8a0650();
  *puVar2 = 1;
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&UNK_10f7ca3f7;
  func_0x00010b8a0670();
  func_0x00010b8a0650();
  *puVar2 = 2;
  func_0x00010b8a0668();
  puVar2 = (undefined4 *)&DAT_10f43e819;
  func_0x00010b8a0670();
  func_0x00010b8a0650();
  *puVar2 = 3;
  func_0x00010b8a0668();
  pcVar3 = "group";
  func_0x00010b8a0670();
  func_0x00010b8a0650();
  pcVar3[0] = '\x04';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  func_0x00010b8a0668();
  pcVar3 = "ignored";
  func_0x00010b8a0670();
  func_0x00010b8a0650();
  pcVar3[0] = '\x05';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  func_0x00010b8a0668();
  FUN_10b8a04a0(auStack_e0,auStack_98);
  FUN_10b89fc04(puVar1 + 3,auStack_e0);
  func_0x00010b8a06f8();
  FUN_10b8a04a0(auStack_e0,auStack_c8);
  FUN_10b89fc04(puVar1 + 5,auStack_e0);
  func_0x00010b8a06f8();
  FUN_10b89fed0(auStack_c8);
  FUN_10b89fed0(auStack_98);
  func_0x00010b8a06a4(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10b89fbdc;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10b89ff74(auStack_108);
  return (undefined8 *)(lStack_100 + 8);
}



/* Entry: 10b89fbdc; end: 10b89fc03;  */

long FUN_10b89fbdc(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b89ff74(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b89fc04; end: 10b89fc7f;  */

undefined8 * FUN_10b89fc04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b8a06f8();
  return param_1;
}



/* Entry: 10b89fc80; end: 10b89fc83;  */

undefined8 * FUN_10b89fc80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d704c8;
  FUN_10b89ff4c(param_1 + 5);
  FUN_10b89ff4c(param_1 + 3);
  return param_1;
}



/* Entry: 10b89fc84; end: 10b89fc97;  */

void FUN_10b89fc84(void)

{
  func_0x00010b89fc44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b89fc98; end: 10b89fe1f;  */

void FUN_10b89fc98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uStack_28 = param_2;
  func_0x00010b8a070c(&uStack_30,&UNK_10f7ca3fc,0x15,0x10b8cc480,param_5,param_1 + 0x18);
  func_0x00010b8a070c(&uStack_30,&UNK_10f7ca412,0x17,FUN_10b8cc4b8);
  func_0x00010b8a478c(&uStack_30,&UNK_10f7ca42a,0x15,FUN_10b8cc4f0,0);
  func_0x00010b8a06c0();
  func_0x00010b8a46d0(&uStack_30,&UNK_10f7ca453,0x11,0x10b8cc594,0);
  func_0x00010b8a06c0();
  func_0x00010b8a06d0();
  func_0x00010b8a06d0();
  func_0x00010b8a4614(&uStack_30,&UNK_10f7ca4ae,0x1c,FUN_10b8cc69c,0);
  return;
}



/* Entry: 10b89fe20; end: 10b89fe8f;  */

void FUN_10b89fe20(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  plVar2 = param_1 + 5;
  FUN_10b89fe90(plVar2,lVar1 + param_2 * 0x10);
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + lVar1;
  _memset();
  *(undefined1 *)(*param_1 + param_2) = 0xff;
  lVar1 = 6;
  if (param_2 != 7) {
    lVar1 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 10b89fe90; end: 10b89fecf;  */

void FUN_10b89fe90(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x00010b89feb4(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 10b89fed0; end: 10b89ff4b;  */

void FUN_10b89fed0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        func_0x000107c278f4(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b89ff4c; end: 10b89ff73;  */

long FUN_10b89ff4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b89ff74; end: 10b89fff7;  */

void FUN_10b89ff74(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  plVar2 = param_2;
  FUN_10b89fff8();
  plVar3 = param_2;
  puVar5 = param_3;
  func_0x00010b8a001c(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    lVar1 = *param_2;
    puVar5 = (undefined8 *)(param_2[1] + (long)plVar3 * 0x10);
    *puVar5 = *param_3;
    *param_3 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x00010b8a0678();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10b89fff8; end: 10b8a00ef;  */

void FUN_10b89fff8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8a00d8(&lStack_18);
  return;
}



/* Entry: 10b8a00f0; end: 10b8a016b;  */

void FUN_10b8a00f0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10b8a016c();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      func_0x00010b8a01b8(param_1);
      plVar1 = param_1;
      FUN_10b8a016c(param_1,param_2);
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10b8a016c; end: 10b8a01e7;  */

ulong FUN_10b8a016c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 10b8a01e8; end: 10b8a02b7;  */

void FUN_10b8a01e8(long *param_1,long param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_10b89fe20();
  param_1[3] = param_2;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_10b8a0464(pplVar2,lVar4);
      plVar3 = param_1;
      FUN_10b8a016c(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x00010b8a0678();
      FUN_10b8a0484(param_1 + 5,param_1[1] + (long)plVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10b8a02b8; end: 10b8a0463;  */

void FUN_10b8a02b8(long *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long *aplStack_60 [3];
  undefined8 uStack_48;
  
  plVar5 = param_1;
  func_0x00010b8a06e8();
  uStack_48 = extraout_x8;
  func_0x000104bda340(*plVar5,param_1[3]);
  for (uVar8 = 0; uVar8 != param_1[3]; uVar8 = uVar8 + 1) {
    if (*(char *)(*param_1 + uVar8) == -2) {
      pplVar6 = aplStack_60;
      aplStack_60[0] = param_1 + 5;
      FUN_10b8a0464(aplStack_60,param_1[1] + uVar8 * 0x10);
      plVar5 = param_1;
      FUN_10b8a016c();
      uVar7 = param_1[3] & (ulong)pplVar6 >> 7;
      if ((((long)plVar5 - uVar7 ^ uVar8 - uVar7) & param_1[3]) < 8) {
        *(byte *)(*param_1 + uVar8) = (byte)pplVar6 & 0x7f;
        func_0x00010b8a0678();
      }
      else {
        cVar2 = *(char *)(*param_1 + (long)plVar5);
        bVar3 = (byte)pplVar6 & 0x7f;
        *(byte *)(*param_1 + (long)plVar5) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar5 + -1)) + 1) = bVar3;
        if (cVar2 == -0x80) {
          func_0x00010b8a06e0();
          *(undefined1 *)(*param_1 + uVar8) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar8 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          func_0x00010b8a06e0();
          func_0x00010b8a06e0();
          func_0x00010b8a06e0();
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  bVar4 = uVar8 == 7;
  lVar1 = 6;
  if (!bVar4) {
    lVar1 = uVar8 - (uVar8 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  func_0x00010b8a06a4(uStack_48);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8a0690();
  return;
}



/* Entry: 10b8a0464; end: 10b8a046b;  */

void FUN_10b8a0464(undefined8 param_1,long param_2)

{
  func_0x00010b8a0690(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 10b8a046c; end: 10b8a0483;  */

void FUN_10b8a046c(void)

{
  func_0x00010b8a0690();
  return;
}



/* Entry: 10b8a0484; end: 10b8a049f;  */

void FUN_10b8a0484(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8a04a0; end: 10b8a04c3;  */

void FUN_10b8a04a0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b8a04c4(&uStack_11,param_1);
  return;
}



/* Entry: 10b8a04c4; end: 10b8a055b;  */

/* WARNING: Possible PIC construction at 0x00010b8a04ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8a04f0) */
/* WARNING: Removing unreachable block (ram,0x00010b8a0530) */
/* WARNING: Removing unreachable block (ram,0x00010b8a0520) */

undefined1 * FUN_10b8a04c4(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b8a06e8();
  uStack_38 = 1;
  FUN_10b8a055c();
  return auStack_40;
}



/* Entry: 10b8a055c; end: 10b8a058b;  */

undefined8 * FUN_10b8a055c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    puVar1 = (undefined8 *)(param_2 * 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70510;
  param_1[1] = 0;
  func_0x00010b8a05e4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a058c; end: 10b8a05bf;  */

undefined8 * FUN_10b8a058c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70510;
  param_1[1] = 0;
  func_0x00010b8a05e4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a05c0; end: 10b8a05c3;  */

void FUN_10b8a05c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8a05c4; end: 10b8a05d7;  */

void FUN_10b8a05c4(void)

{
  func_0x00010b8a0620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a05d8; end: 10b8a0723;  */

void FUN_10b8a05d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*(long *)(param_1 + 0x18) + lVar3)) {
        func_0x000107c278f4(*(long *)(param_1 + 0x20) + lVar2);
        lVar1 = *(long *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x18) = (long)&UNK_10dd5b8b0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b8a0724; end: 10b8a0da3;  */

undefined8 * FUN_10b8a0724(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d70560;
  func_0x00010b8a0948(param_1 + 5);
  func_0x000108107324(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8a0da4; end: 10b8a1117;  */

long * FUN_10b8a0da4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long lVar12;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_1;
  FUN_10b8a3bac(uVar5,"src",3);
  uVar6 = *param_1;
  uStack_b8 = uVar5;
  FUN_10b8a3bac(uVar6,&DAT_10f33c7a6,6);
  uVar7 = *param_1;
  uStack_c0 = uVar6;
  FUN_10b8a3bac(uVar7,&UNK_10f7ca4cb,0xc);
  uStack_d0 = 0;
  lStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  plVar8 = &lStack_e0;
  uStack_c8 = uVar7;
  FUN_10b8a152c(plVar8,1);
  FUN_10b8a15f0(&lStack_b0,plVar8,(long)puStack_d8 - lStack_e0 >> 4,&uStack_d0);
  *puStack_a0 = uVar5;
  *(undefined2 *)(puStack_a0 + 1) = 0x101;
  puStack_a0 = puStack_a0 + 2;
  lVar12 = lStack_a8 - ((long)puStack_d8 - lStack_e0);
  _memcpy(lVar12);
  puVar11 = puStack_a0;
  uVar5 = uStack_d0;
  uStack_d0 = uStack_98;
  puStack_d8 = puStack_a0;
  puStack_a0 = (undefined8 *)lStack_e0;
  uStack_98 = uVar5;
  lStack_b0 = lStack_e0;
  lStack_a8 = lStack_e0;
  lStack_e0 = lVar12;
  FUN_10b8a1678(&lStack_b0);
  puStack_d8 = puVar11;
  FUN_10b8a3bac(*param_1,&DAT_10f793619,0xb);
  func_0x00010b8a23a4();
  FUN_10b8a3bac(*param_1,&DAT_10f78fd8c,9);
  func_0x00010b8a23a4();
  if (*(int *)(param_1 + 1) == 6) {
    puVar11 = &uStack_c8;
  }
  else {
    puVar11 = &uStack_c0;
  }
  lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
  func_0x00010b8a1158(&lStack_e0,puVar11,&lStack_b0);
  plVar8 = (long *)&UNK_10f7ca4d8;
  func_0x000107c31088(&lStack_b0);
  func_0x00010b8a2408();
  plStack_f0 = plVar8;
  FUN_10b8a1198(&uStack_e8,&plStack_f0,&lStack_b0,&lStack_e0);
  uVar5 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  plVar8 = (long *)0x18;
  __Znwm();
  plVar10 = plVar8 + 1;
  *plVar10 = 1;
  *plVar8 = (long)&PTR_DAT_110d705c8;
  *(undefined4 *)(plVar8 + 2) = uVar1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_f0 = plVar8;
  FUN_10b8a9ea8(uVar5,param_2,&uStack_e8,&plStack_f0,1);
  plVar9 = plStack_f0;
  func_0x0001080ceeb8();
  do {
    lVar12 = *plVar10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar12 + -1 == 0) {
    (**(code **)(*plVar8 + 8))();
    plVar9 = plVar8;
  }
  func_0x00010b8a2408();
  lVar12 = param_2;
  plStack_f0 = plVar9;
  FUN_10b8a120c(param_2,&plStack_f0);
  *(undefined1 *)(lVar12 + 0x92) = 1;
  lVar12 = param_2;
  func_0x0001081034b0(param_2,&uStack_b8);
  pcStack_88 = FUN_10b8a20f8;
  ppuStack_80 = &PTR_DAT_110d70660;
  pcStack_78 = FUN_10b8a1234;
  FUN_10b8a2cb0(lVar12 + 0x60,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  *(undefined1 *)(lVar12 + 0x92) = 1;
  if (*(int *)(param_1 + 1) != 6) {
    func_0x0001081034b0(param_2,&uStack_c0);
    FUN_10b8a2b54();
  }
  plVar8 = (long *)0x10;
  __Znwm();
  plVar10 = plVar8 + 1;
  *plVar10 = 1;
  *plVar8 = (long)&PTR_DAT_110d70690;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar5 = *param_3;
  *param_3 = plVar8;
  func_0x0001080cfa50(uVar5);
  func_0x0001080cfa50(0);
  do {
    uVar4 = *plVar10 + -1 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bool)uVar4) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  func_0x0001081044e0(uStack_e8);
  func_0x000107c278f8(lStack_b0);
  plVar8 = &lStack_e0;
  FUN_10b8a1a98();
  func_0x00010b8a22dc(uStack_58);
  if ((bool)uVar4) {
    return plVar8;
  }
  ___stack_chk_fail();
  if ((ulong)plVar8[1] < (ulong)plVar8[2]) {
    func_0x00010b8a23bc();
    plVar10 = (long *)(extraout_x8 + 0x10);
  }
  else {
    plVar10 = plVar8;
    FUN_10b8a16c8();
  }
  plVar8[1] = (long)plVar10;
  return plVar10 + -2;
}



/* Entry: 10b8a1118; end: 10b8a1197;  */

long FUN_10b8a1118(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b8a23bc();
    lVar1 = extraout_x8 + 0x10;
  }
  else {
    lVar1 = param_1;
    FUN_10b8a16c8();
  }
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 + -0x10;
}



/* Entry: 10b8a1198; end: 10b8a120b;  */

void FUN_10b8a1198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = 0x40;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  func_0x00010b8a9dd4();
  *param_1 = uVar1;
  FUN_10b8a1a98(&uStack_50);
  return;
}



/* Entry: 10b8a120c; end: 10b8a1233;  */

long FUN_10b8a120c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8a202c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8a1234; end: 10b8a133b;  */

long ***** FUN_10b8a1234(float param_1,long *****param_2,long *****param_3)

{
  long ***ppplVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long ****pppplVar8;
  long *****ppppplVar9;
  int extraout_w10;
  int extraout_w10_00;
  long *****unaff_x19;
  long *****unaff_x20;
  long ***ppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  long lVar14;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ***ppplStack_118;
  undefined2 uStack_110;
  long ***appplStack_108 [10];
  undefined8 uStack_b8;
  code *pcStack_68;
  long ****pppplStack_60;
  undefined1 auStack_58 [16];
  long ***ppplStack_48;
  long ****pppplStack_40;
  undefined8 uStack_38;
  
  ppppplVar9 = param_3;
  func_0x00010b8a22f0();
  uVar3 = *(byte *)(ppppplVar9 + 1) == 1;
  ppppplVar6 = param_2;
  uStack_38 = extraout_x8;
  if ((*(byte *)(ppppplVar9 + 1) < 2) ||
     (ppppplVar6 = param_3, FUN_10b8a1728(), (int)ppppplVar6 != 0)) {
    func_0x00010b8a22dc(uStack_38);
    ppppplVar9 = (long *****)register0x00000008;
    if ((bool)uVar3) goto SUB_10b8a1764;
  }
  else {
    func_0x00010b926e10(&ppplStack_48,param_2,param_3);
    pppplVar8 = pppplStack_40;
    uVar3 = (long ****)ppplStack_48 == (long ****)0x1;
    if ((bool)uVar3) {
      if (((long *****)pppplStack_40 != (long *****)0x0) &&
         ((long ****)pppplStack_40[2] != (long ****)0x0)) {
        do {
          func_0x00010b8a2414();
        } while (extraout_w10 != 0);
      }
      pppplStack_60 = pppplVar8;
      func_0x00010b9a8f78(auStack_58,&pppplStack_60);
      func_0x000104bf351c();
      FUN_10b9a8d98(auStack_58);
      func_0x000104bddf04(pppplVar8);
      param_3 = (long *****)pppplVar8;
    }
    else {
      *unaff_x19 = (long ****)0x2;
      unaff_x19[1] = pppplStack_40;
      pppplStack_40 = (long ****)0x0;
    }
    ppppplVar6 = (long *****)&ppplStack_48;
    FUN_10b8a1810();
    func_0x00010b8a22dc(uStack_38);
    if ((bool)uVar3) {
      return ppppplVar6;
    }
  }
  unaff_x20 = param_3;
  ___stack_chk_fail();
  pcStack_68 = FUN_10b8a133c;
  ppppplVar7 = ppppplVar6;
  func_0x00010b8a22f0();
  bVar2 = *(byte *)(ppppplVar6 + 1);
  bVar4 = bVar2 == 1;
  if (bVar2 < 2) {
    func_0x00010b8a22dc(extraout_x8_00);
    ppppplVar9 = &pppplStack_60;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = pcStack_68;
    if (bVar4) {
SUB_10b8a1764:
      *(long ******)((long)ppppplVar9 + -0x20) = unaff_x20;
      *(long ******)((long)ppppplVar9 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppppplVar9 + -0x10) = unaff_x29;
      *(code **)((long)ppppplVar9 + -8) = unaff_x30;
      *unaff_x19 = (long ****)0x1;
      FUN_10b9a8f04(unaff_x19 + 1);
      return unaff_x19;
    }
  }
  else {
    uVar3 = bVar2 == 9;
    uStack_b8 = extraout_x8_00;
    if (((bool)uVar3) && (pppplVar8 = *ppppplVar7, pppplVar8 != (long ****)0x0)) {
      if (pppplVar8[2] == (long ***)0x0) {
        uStack_110 = 0;
        ppplStack_118 = (long ***)0x0;
        func_0x00010b8a23f0();
        ppppplVar6 = (long *****)&ppplStack_118;
        FUN_10b9a8d98();
      }
      else {
        FUN_10b8a1868(&pppplStack_120);
        ppplVar12 = pppplVar8[2];
        ppplVar10 = (long ***)0x0;
        while (pppplVar11 = pppplStack_120, uVar3 = ppplVar10 == ppplVar12, ppplVar10 < ppplVar12) {
          iVar5 = (int)(pppplVar8 + 3) + (int)ppplVar10 * 0x10;
          FUN_10b9a9518();
          pppplVar11 = pppplStack_120;
          if (iVar5 == 2) {
            ppplVar1 = (long ***)((long)ppplVar10 + 0x15);
            uVar3 = ppplVar1 == ppplVar12;
            if (ppplVar12 <= ppplVar1 && !(bool)uVar3) {
LAB_10b8a1494:
              FUN_10b8a185c(&ppplStack_118);
LAB_10b8a14f4:
              func_0x00010b8a2374();
              goto LAB_10b8a14f8;
            }
            pppplVar11 = pppplVar8 + (long)ppplVar10 * 2 + 5;
            for (lVar14 = 0; lVar14 != 0x50; lVar14 = lVar14 + 4) {
              FUN_10b9aa3b0(pppplVar11);
              *(float *)((long)appplStack_108 + lVar14) = param_1;
              pppplVar11 = pppplVar11 + 2;
            }
            ppppplVar7 = (long *****)appplStack_108;
            FUN_10b98c13c(pppplStack_120);
            ppplVar10 = ppplVar1;
          }
          else {
            uVar3 = iVar5 == 1;
            if (!(bool)uVar3) goto LAB_10b8a1494;
            ppplVar1 = (long ***)((long)ppplVar10 + 2);
            uVar3 = ppplVar1 == ppplVar12;
            if (ppplVar12 <= ppplVar1 && !(bool)uVar3) goto LAB_10b8a1494;
            param_1 = *(float *)(pppplStack_120 + 0xd);
            uVar3 = param_1 == 0.0;
            if (!(bool)uVar3) {
              ppppplVar7 = (long *****)&UNK_10f7ca4e2;
              FUN_10b99f5f8(&ppplStack_118);
              goto LAB_10b8a14f4;
            }
            FUN_10b9aa3b0(pppplVar8 + 3 + ((long)ppplVar10 + 1) * 2);
            *(float *)(pppplVar11 + 0xd) = param_1;
            ppplVar10 = ppplVar1;
          }
        }
        if (((long *****)pppplStack_120 != (long *****)0x0) &&
           ((long ****)pppplStack_120[2] != (long ****)0x0)) {
          do {
            func_0x00010b8a2414();
          } while (extraout_w10_00 != 0);
        }
        pppplStack_128 = pppplVar11;
        ppppplVar7 = &pppplStack_128;
        func_0x00010b9a8f78(&ppplStack_118);
        func_0x00010b8a23f0();
        FUN_10b9a8d98(&ppplStack_118);
        func_0x000104bddf04(pppplVar11);
LAB_10b8a14f8:
        func_0x0001080cb940();
        ppppplVar6 = (long *****)pppplStack_120;
      }
    }
    else {
      ppppplVar6 = (long *****)&ppplStack_118;
      FUN_10b8a185c();
      func_0x00010b8a2374();
    }
    func_0x00010b8a22dc(uStack_b8);
    if ((bool)uVar3) {
      return ppppplVar6;
    }
  }
  ___stack_chk_fail();
  if ((ulong)ppppplVar7 >> 0x3c == 0) {
    ppppplVar9 = (long *****)((long)ppppplVar6[2] - (long)*ppppplVar6 >> 3);
    if (ppppplVar9 <= ppppplVar7) {
      ppppplVar9 = ppppplVar7;
    }
    if (0x7fffffffffffffef < (ulong)((long)ppppplVar6[2] - (long)*ppppplVar6)) {
      ppppplVar9 = (long *****)0xfffffffffffffff;
    }
    return ppppplVar9;
  }
  FUN_10b8a15e4();
  ppppplVar13 = (long *****)((long)ppppplVar7[1] - ((long)ppppplVar6[1] - (long)*ppppplVar6));
  ppppplVar9 = ppppplVar13;
  _memcpy(ppppplVar13);
  ppppplVar7[1] = (long ****)ppppplVar13;
  pppplVar8 = *ppppplVar6;
  ppppplVar6[1] = pppplVar8;
  *ppppplVar6 = ppppplVar7[1];
  ppppplVar7[1] = pppplVar8;
  pppplVar8 = ppppplVar6[1];
  ppppplVar6[1] = ppppplVar7[2];
  ppppplVar7[2] = pppplVar8;
  pppplVar8 = ppppplVar6[2];
  ppppplVar6[2] = ppppplVar7[3];
  ppppplVar7[3] = pppplVar8;
  *ppppplVar7 = ppppplVar7[1];
  return ppppplVar9;
}



/* Entry: 10b8a133c; end: 10b8a152b;  */

long ***** FUN_10b8a133c(float param_1,long *****param_2)

{
  long ***ppplVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *****ppppplVar6;
  undefined8 extraout_x8;
  long ****pppplVar7;
  long *****ppppplVar8;
  int extraout_w10;
  long *****unaff_x19;
  long ***ppplVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  long *****ppppplVar12;
  long lVar13;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long ***ppplStack_b8;
  undefined2 uStack_b0;
  long ***appplStack_a8 [10];
  undefined8 uStack_58;
  
  ppppplVar6 = param_2;
  func_0x00010b8a22f0();
  bVar2 = *(byte *)(param_2 + 1);
  bVar3 = bVar2 == 1;
  if (bVar2 < 2) {
    func_0x00010b8a22dc(extraout_x8);
    if (bVar3) {
      *unaff_x19 = (long ****)0x1;
      FUN_10b9a8f04(unaff_x19 + 1);
      return unaff_x19;
    }
  }
  else {
    uVar4 = bVar2 == 9;
    uStack_58 = extraout_x8;
    if (((bool)uVar4) && (pppplVar7 = *ppppplVar6, pppplVar7 != (long ****)0x0)) {
      if (pppplVar7[2] == (long ***)0x0) {
        uStack_b0 = 0;
        ppplStack_b8 = (long ***)0x0;
        func_0x00010b8a23f0();
        param_2 = (long *****)&ppplStack_b8;
        FUN_10b9a8d98();
      }
      else {
        FUN_10b8a1868(&pppplStack_c0);
        ppplVar11 = pppplVar7[2];
        ppplVar9 = (long ***)0x0;
        while (pppplVar10 = pppplStack_c0, uVar4 = ppplVar9 == ppplVar11, ppplVar9 < ppplVar11) {
          iVar5 = (int)(pppplVar7 + 3) + (int)ppplVar9 * 0x10;
          FUN_10b9a9518();
          pppplVar10 = pppplStack_c0;
          if (iVar5 == 2) {
            ppplVar1 = (long ***)((long)ppplVar9 + 0x15);
            uVar4 = ppplVar1 == ppplVar11;
            if (ppplVar11 <= ppplVar1 && !(bool)uVar4) {
LAB_10b8a1494:
              FUN_10b8a185c(&ppplStack_b8);
LAB_10b8a14f4:
              func_0x00010b8a2374();
              goto LAB_10b8a14f8;
            }
            pppplVar10 = pppplVar7 + (long)ppplVar9 * 2 + 5;
            for (lVar13 = 0; lVar13 != 0x50; lVar13 = lVar13 + 4) {
              FUN_10b9aa3b0(pppplVar10);
              *(float *)((long)appplStack_a8 + lVar13) = param_1;
              pppplVar10 = pppplVar10 + 2;
            }
            ppppplVar6 = (long *****)appplStack_a8;
            FUN_10b98c13c(pppplStack_c0);
            ppplVar9 = ppplVar1;
          }
          else {
            uVar4 = iVar5 == 1;
            if (!(bool)uVar4) goto LAB_10b8a1494;
            ppplVar1 = (long ***)((long)ppplVar9 + 2);
            uVar4 = ppplVar1 == ppplVar11;
            if (ppplVar11 <= ppplVar1 && !(bool)uVar4) goto LAB_10b8a1494;
            param_1 = *(float *)(pppplStack_c0 + 0xd);
            uVar4 = param_1 == 0.0;
            if (!(bool)uVar4) {
              ppppplVar6 = (long *****)&UNK_10f7ca4e2;
              FUN_10b99f5f8(&ppplStack_b8);
              goto LAB_10b8a14f4;
            }
            FUN_10b9aa3b0(pppplVar7 + 3 + ((long)ppplVar9 + 1) * 2);
            *(float *)(pppplVar10 + 0xd) = param_1;
            ppplVar9 = ppplVar1;
          }
        }
        if (((long *****)pppplStack_c0 != (long *****)0x0) &&
           ((long ****)pppplStack_c0[2] != (long ****)0x0)) {
          do {
            func_0x00010b8a2414();
          } while (extraout_w10 != 0);
        }
        pppplStack_c8 = pppplVar10;
        ppppplVar6 = &pppplStack_c8;
        func_0x00010b9a8f78(&ppplStack_b8);
        func_0x00010b8a23f0();
        FUN_10b9a8d98(&ppplStack_b8);
        func_0x000104bddf04(pppplVar10);
LAB_10b8a14f8:
        func_0x0001080cb940();
        param_2 = (long *****)pppplStack_c0;
      }
    }
    else {
      param_2 = (long *****)&ppplStack_b8;
      FUN_10b8a185c();
      func_0x00010b8a2374();
    }
    func_0x00010b8a22dc(uStack_58);
    if ((bool)uVar4) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  if ((ulong)ppppplVar6 >> 0x3c == 0) {
    ppppplVar8 = (long *****)((long)param_2[2] - (long)*param_2 >> 3);
    if (ppppplVar8 <= ppppplVar6) {
      ppppplVar8 = ppppplVar6;
    }
    if (0x7fffffffffffffef < (ulong)((long)param_2[2] - (long)*param_2)) {
      ppppplVar8 = (long *****)0xfffffffffffffff;
    }
    return ppppplVar8;
  }
  FUN_10b8a15e4();
  ppppplVar12 = (long *****)((long)ppppplVar6[1] - ((long)param_2[1] - (long)*param_2));
  ppppplVar8 = ppppplVar12;
  _memcpy(ppppplVar12);
  ppppplVar6[1] = (long ****)ppppplVar12;
  pppplVar7 = *param_2;
  param_2[1] = pppplVar7;
  *param_2 = ppppplVar6[1];
  ppppplVar6[1] = pppplVar7;
  pppplVar7 = param_2[1];
  param_2[1] = ppppplVar6[2];
  ppppplVar6[2] = pppplVar7;
  pppplVar7 = param_2[2];
  param_2[2] = ppppplVar6[3];
  ppppplVar6[3] = pppplVar7;
  *ppppplVar6 = ppppplVar6[1];
  return ppppplVar8;
}



/* Entry: 10b8a152c; end: 10b8a156b;  */

undefined8 * FUN_10b8a152c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_10b8a15e4();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 10b8a156c; end: 10b8a15e3;  */

void FUN_10b8a156c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b8a15e4; end: 10b8a15ef;  */

long * FUN_10b8a15e4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8a1638();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8a15f0; end: 10b8a165b;  */

long * FUN_10b8a15f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8a1638();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8a165c; end: 10b8a1677;  */

long * FUN_10b8a165c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_10b8a16a4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8a1678; end: 10b8a16a3;  */

long * FUN_10b8a1678(long *param_1)

{
  FUN_10b8a16a4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8a16a4; end: 10b8a16c7;  */

void FUN_10b8a16a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b8a16c8; end: 10b8a1727;  */

void FUN_10b8a16c8(void)

{
  func_0x00010b8a2338();
  func_0x00010b8a2358();
  func_0x00010b8a2304();
  func_0x00010b8a2438();
  return;
}



/* Entry: 10b8a1728; end: 10b8a180f;  */

bool FUN_10b8a1728(void)

{
  long lStack_28;
  
  func_0x00010b8a178c(&lStack_28);
  func_0x0001080cb914();
  return lStack_28 != 0;
}



/* Entry: 10b8a1810; end: 10b8a1837;  */

long * FUN_10b8a1810(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x0001080d5938(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8a1838; end: 10b8a185b;  */

undefined8 * FUN_10b8a1838(undefined8 *param_1)

{
  func_0x0001080d5938(*param_1);
  return param_1;
}



/* Entry: 10b8a185c; end: 10b8a1867;  */

undefined8 FUN_10b8a185c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c31088(auStack_28,&UNK_10f7ca50a);
  func_0x00010b99feb0();
  func_0x00010b99fe90(param_1);
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return param_1;
}



/* Entry: 10b8a1868; end: 10b8a18a7;  */

void FUN_10b8a1868(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8a22f0();
  uStack_28 = extraout_x8;
  FUN_10b8a18a8(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x00010b8a22dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b8a18a8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10b8a18c8(&uStack_51);
  return;
}



/* Entry: 10b8a18a8; end: 10b8a18c7;  */

void FUN_10b8a18a8(void)

{
  undefined1 uStack_11;
  
  FUN_10b8a18c8(&uStack_11);
  return;
}



/* Entry: 10b8a18c8; end: 10b8a1927;  */

void FUN_10b8a18c8(void)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x00010b8a22f0();
  uStack_28 = extraout_x8;
  FUN_10b8a1944(auStack_40,1);
  FUN_10b8a1994(lStack_30);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10b8a1928(lVar6 + 0x18);
  FUN_10b8a1a88();
  func_0x00010b8a22dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b8a1928;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b8a1928; end: 10b8a1943;  */

void FUN_10b8a1928(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a1944; end: 10b8a196b;  */

long FUN_10b8a1944(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8a196c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8a196c; end: 10b8a1993;  */

void FUN_10b8a196c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_DAT_110d70700;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110d7d7f0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  return;
}



/* Entry: 10b8a1994; end: 10b8a19eb;  */

void FUN_10b8a1994(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d70700;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110d7d7f0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  return;
}



/* Entry: 10b8a19ec; end: 10b8a19ff;  */

void FUN_10b8a19ec(void)

{
  func_0x00010b8a1a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a1a00; end: 10b8a1a1b;  */

void FUN_10b8a1a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a2404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8a1a1c; end: 10b8a1a87;  */

void FUN_10b8a1a1c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8a1a88; end: 10b8a1a97;  */

void FUN_10b8a1a88(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a1a98; end: 10b8a1acb;  */

undefined8 FUN_10b8a1a98(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b8a1acc(&uStack_28);
  return param_1;
}



/* Entry: 10b8a1acc; end: 10b8a1aeb;  */

void FUN_10b8a1acc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a1aec; end: 10b8a1d77;  */

void FUN_10b8a1aec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar8;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  byte bStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x00010b8a22f0();
  uVar4 = (char)param_6[1] == '\t';
  uStack_68 = extraout_x8;
  if (((!(bool)uVar4) || (lVar8 = *param_6, lVar8 == 0)) ||
     (uVar4 = *(long *)(lVar8 + 0x10) == 4, !(bool)uVar4)) {
    FUN_10b99f5f8(&lStack_c8,&UNK_10f47ab86);
    *unaff_x19 = 2;
    unaff_x19[1] = lStack_c8;
    lStack_c8 = 0;
    func_0x000104bda960(0);
    goto LAB_10b8a1bfc;
  }
  FUN_10b9a8f04(auStack_88,lVar8 + 0x18);
  func_0x00010b9a9710(&uStack_90,lVar8 + 0x28);
  lVar6 = lVar8 + 0x38;
  FUN_10b9a9608(lVar6);
  FUN_10b9a8f04(auStack_a0,lVar8 + 0x48);
  iVar5 = (int)auStack_88;
  FUN_10b8a1728();
  if (iVar5 == 0) {
    uStack_a8 = 0;
    uVar4 = bStack_80 == 2;
    if (bStack_80 < 2) {
LAB_10b8a1d18:
      FUN_10b8a1f34(param_1,param_2,param_3,param_4,&uStack_a8,&uStack_90,auStack_a0,lVar6);
      func_0x0001080d5938(uStack_a8);
      goto LAB_10b8a1d44;
    }
    func_0x00010b926e10(&lStack_78,param_3,auStack_88);
    plVar3 = plStack_70;
    if (lStack_78 == 1) {
      lVar8 = *(long *)(param_3 + 0x1f0);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = *(long **)(*(long *)(*(long *)(param_3 + 0x1d0) + 0x28) + 0x10);
      (**(code **)(*plVar7 + 0x10))();
      uStack_b8 = 0x100;
      if ((*(long *)(param_3 + 0x18) != 0) &&
         (uStack_b8 = 0x100, (*(byte *)(*(long *)(param_3 + 0x18) + 0x230) & 3) == 2)) {
        uStack_b8 = 0x101;
      }
      uStack_c0 = (ulong)plVar7 & 0xffffffff | 0x100000000;
      lStack_c8 = lVar8;
      (**(code **)(*plVar3 + 0x40))(&uStack_b0,plVar3,&lStack_c8);
      FUN_10b8a1efc(&uStack_a8,&uStack_b0);
      func_0x0001080d5938(uStack_b0);
      func_0x00010b8a2000(lStack_c8);
      func_0x00010b8a2000(0);
    }
    else {
      *unaff_x19 = 2;
      unaff_x19[1] = plStack_70;
      plStack_70 = (long *)0x0;
    }
    FUN_10b8a1810(&lStack_78);
    uVar4 = lStack_78 == 1;
    if ((bool)uVar4) goto LAB_10b8a1d18;
    func_0x0001080d5938(uStack_a8);
  }
  else {
    FUN_10b8a1dcc(&lStack_c8,param_1,param_3);
    lVar8 = lStack_c8;
    func_0x00010b8a178c(&lStack_78,auStack_88);
    func_0x00010b8d0b38(lVar8,param_2,param_4,&lStack_78,&uStack_90,auStack_a0,lVar6);
    func_0x0001080cb914(lStack_78);
    func_0x00010b8a1fe8(lVar8);
LAB_10b8a1d44:
    *unaff_x19 = 1;
  }
  FUN_10b9a8d98(auStack_a0);
  func_0x000104bda3ac(uStack_90);
  FUN_10b9a8d98(auStack_88);
LAB_10b8a1bfc:
  func_0x00010b8a22dc(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_10b8a1d78;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10b8a1f34();
    FUN_10b9a8d98(&uStack_100);
    func_0x000104bda3ac(uStack_f0);
    func_0x0001080d5938(uStack_e8);
    return;
  }
  return;
}



/* Entry: 10b8a1d78; end: 10b8a1dcb;  */

void FUN_10b8a1d78(void)

{
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_10b8a1f34();
  FUN_10b9a8d98(&uStack_30);
  func_0x000104bda3ac(uStack_20);
  func_0x0001080d5938(uStack_18);
  return;
}



/* Entry: 10b8a1dcc; end: 10b8a1efb;  */

undefined ** FUN_10b8a1dcc(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int extraout_w10;
  long *plVar10;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  
  ppuVar4 = *(undefined ***)(param_3 + 0x1e8);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar8 = &PTR_DAT_110d706d8;
    func_0x00010b8a2430(ppuVar4,&PTR_DAT_110d706d8,&PTR_DAT_110d72008);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar4;
      FUN_10b9a5818();
      if (((ulong)ppuVar5 & 1) != 0) {
        *param_1 = (long)ppuVar4;
        return ppuVar5;
      }
      FUN_10b9a5890();
      if (ppuVar5 != ppuVar8) {
        puVar9 = *ppuVar8;
        *ppuVar8 = (undefined *)0x0;
        puVar7 = *ppuVar5;
        *ppuVar5 = puVar9;
        func_0x0001080d5938(puVar7);
      }
      return ppuVar5;
    }
  }
  *param_1 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  plVar10 = puVar6 + 1;
  *plVar10 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110d70620;
  ppuVar4 = (undefined **)(puVar6 + 3);
  FUN_10b8d0470(ppuVar4,param_3,uVar1);
  if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_50 = ppuVar4;
    puStack_48 = puVar6;
    func_0x000107c278e4(puVar6 + 4,&ppuStack_50);
    func_0x000107c284e8(&ppuStack_50);
  }
  *param_1 = (long)ppuVar4;
  func_0x00010b8a1fe8(0);
  func_0x00010b8a1fe8(0);
  if (puVar6[5] != 0) {
    do {
      func_0x00010b8a2414();
    } while (extraout_w10 != 0);
  }
  ppuStack_50 = ppuVar4;
  func_0x00010b8cbdc0(param_3 + 0x1e8,&ppuStack_50);
  func_0x00010b8a1ff4(ppuStack_50);
  return ppuStack_50;
}



/* Entry: 10b8a1efc; end: 10b8a1f33;  */

undefined8 * FUN_10b8a1efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x0001080d5938(uVar1);
  }
  return param_1;
}



/* Entry: 10b8a1f34; end: 10b8a1fb7;  */

void FUN_10b8a1f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lStack_58;
  
  FUN_10b8a1dcc(&lStack_58,param_1);
  func_0x00010b8d0820(lStack_58,param_2,param_4,param_5,param_6,param_7,param_8);
  if (lStack_58 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10b8a1fb8; end: 10b8a1fbb;  */

void FUN_10b8a1fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70620;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8a1fbc; end: 10b8a1fcf;  */

void FUN_10b8a1fbc(void)

{
  func_0x00010b8a1fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a1fd0; end: 10b8a202b;  */

void FUN_10b8a1fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a2404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8a202c; end: 10b8a20f7;  */

void FUN_10b8a202c(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar3 = param_2;
  func_0x00010810553c();
  plVar4 = param_2;
  puVar5 = param_3;
  func_0x000108105560(param_2,param_3,plVar3);
  if (((ulong)puVar5 & 1) != 0) {
    puVar6 = (undefined8 *)(param_2[1] + (long)plVar4 * 0xa0);
    *puVar6 = *param_3;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 7;
    puVar6[6] = 1;
    puVar6[5] = 0;
    puVar6[0xe] = 0;
    puVar6[0xd] = 0;
    puVar6[0x10] = 0;
    puVar6[0xf] = 0;
    puVar6[0x12] = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    *(undefined1 *)((long)puVar6 + 0x9c) = 1;
    bVar2 = (byte)plVar3 & 0x7f;
    *(byte *)(*param_2 + (long)plVar4) = bVar2;
    *(byte *)(*param_2 + (param_2[3] & (ulong)(plVar4 + -1)) + (param_2[3] & 7U) + 1) = bVar2;
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar4;
  param_1[1] = lVar1 + (long)plVar4 * 0xa0;
  *(char *)(param_1 + 2) = (char)puVar5;
  return;
}



/* Entry: 10b8a20f8; end: 10b8a2113;  */

void FUN_10b8a20f8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8a20fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))();
  return;
}



/* Entry: 10b8a2114; end: 10b8a226b;  */

float FUN_10b8a2114(float param_1,float param_2,undefined8 param_3,undefined8 param_4,int param_5,
                   int param_6,ushort param_7)

{
  long lVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  long lStack_90;
  undefined8 uStack_88;
  ushort uStack_80;
  undefined8 uStack_78;
  long *aplStack_70 [2];
  
  FUN_10b9a8f54(aplStack_70);
  FUN_10b9aa82c(&lStack_90,aplStack_70,&UNK_10f7ca4d8);
  lVar1 = lStack_90;
  cVar2 = (char)uStack_88;
  FUN_10b9a8d98(&lStack_90);
  FUN_10b9a8d98(aplStack_70);
  fVar5 = 0.0;
  if ((cVar2 == '\t' && lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    FUN_10b9a94ec(&lStack_90,lVar1 + 0x18);
    FUN_10b8a226c(aplStack_70,&lStack_90);
    func_0x000104bddf04(lStack_90);
    if (aplStack_70[0] != (long *)0x0) {
      uStack_80 = param_7 | 0x100;
      lStack_90 = 0;
      uStack_88 = 0;
      (**(code **)(*aplStack_70[0] + 0x40))(&uStack_78,aplStack_70[0],&lStack_90);
      FUN_10b8a1efc(aplStack_70,&uStack_78);
      func_0x0001080d5938(uStack_78);
      func_0x00010b8a2000(lStack_90);
      func_0x00010b8a2000(0);
      if (aplStack_70[0] != (long *)0x0) {
        dVar3 = -1.0;
        if (param_5 != 0) {
          dVar3 = (double)param_1;
        }
        dVar4 = -1.0;
        if (param_6 != 0) {
          dVar4 = (double)param_2;
        }
        FUN_10b98e894(dVar3,dVar4);
        fVar5 = (float)dVar3;
      }
    }
    func_0x0001080d5938(aplStack_70[0]);
  }
  return fVar5;
}


