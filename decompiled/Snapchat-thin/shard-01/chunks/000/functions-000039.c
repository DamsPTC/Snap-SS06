/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c865cc; end: 100c865e3; -[SCALensCarouselActivationRequested setMassSnapId:] */

void FUN_100c865cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdddb8,8,param_3,0);
  return;
}



/* Entry: 100c865e4; end: 100c865fb; -[SCALensCarouselActivationRequested setNotificationId:] */

void FUN_100c865e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f42398,9,param_3,0);
  return;
}



/* Entry: 100c865fc; end: 100c8667b; -[SCALensCarouselActivationRequested setActivationSourcePage:] */

/* WARNING: Possible PIC construction at 0x000100c86664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86668) */

void FUN_100c865fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c82f80(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fddd98,3,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8667c; end: 100c866cf; -[SCALensCarouselActivationRequested setActivationRequestedTimestampMicros:] */

void FUN_100c8667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fdddf8,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c866d0; end: 100c866eb; -[SCALensCarouselActivationRequested getEventName] */

undefined ** FUN_100c866d0(void)

{
  return &PTR____CFConstantStringClassReference_110fddd58;
}



/* Entry: 100c866ec; end: 100c86743;  */

/* WARNING: Possible PIC construction at 0x000100c86700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c86730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86724) */
/* WARNING: Removing unreachable block (ram,0x000100c86714) */
/* WARNING: Removing unreachable block (ram,0x000100c86704) */
/* WARNING: Removing unreachable block (ram,0x000100c86734) */

void FUN_100c866ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100c86744; end: 100c8674b; -[SCALensCarouselActivationRequested getEventQoS] */

undefined8 FUN_100c86744(void)

{
  return 1;
}



/* Entry: 100c8674c; end: 100c86807;  */

void FUN_100c8674c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  func_0x000107c61574(unaff_x20[4]);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(lVar1);
  lVar2 = *(long *)(*unaff_x20 + 0x70);
  uStack_40 = *(undefined8 *)(lVar3 + 0x60);
  uStack_48 = *(undefined8 *)(lVar3 + 0x58);
  uStack_50 = *(undefined8 *)(lVar3 + 0x50);
  puStack_38 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0;
  func_0x00010061efbc(0,&uStack_50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  return;
}



/* Entry: 100c86808; end: 100c868c3;  */

void FUN_100c86808(void)

{
  FUN_100c8674c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c868c4; end: 100c868d3;  */

void FUN_100c868c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c868d4; end: 100c868f7;  */

void FUN_100c868d4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c868f8; end: 100c86907;  */

void FUN_100c868f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar8 = **(long **)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    pcVar7 = *(code **)(lVar1 + 0x60);
    lVar3 = lVar6;
    (*pcVar7)(lVar6,lVar1);
    func_0x00010006c804();
    func_0x000107c61574(lVar3);
    pcVar4 = (code *)auStack_88;
    lVar3 = lVar6;
    (**(code **)(lVar1 + 0x50))(pcVar4,lVar6,lVar1);
    pcVar5 = (code *)auStack_a8;
    func_0x000107c61564();
    *(undefined1 *)
     (lVar3 + *(int *)(*(long *)(lVar8 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720 + 8) + 0x30
                      )) = 1;
    (*pcVar5)(auStack_a8,0);
    (*pcVar4)(auStack_88,0);
    (**(code **)(lVar1 + 0x78))(lVar6,lVar1);
    (*pcVar7)(lVar6,lVar1);
    func_0x000100070bfc();
    func_0x000107c61574(lVar6);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 100c86908; end: 100c86953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86908(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_113096700))();
  return;
}



/* Entry: 100c86954; end: 100c86a83;  */

void FUN_100c86954(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar5 = *param_2;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar4 = *(code **)(param_5 + 0x60);
    lVar1 = param_3;
    (*pcVar4)(param_3,param_5);
    func_0x00010006c804();
    func_0x000107c61574(lVar1);
    pcVar2 = (code *)auStack_88;
    lVar1 = param_3;
    (**(code **)(param_5 + 0x50))(pcVar2,param_3,param_5);
    pcVar3 = (code *)auStack_a8;
    func_0x000107c61564();
    *(undefined1 *)
     (lVar1 + *(int *)(*(long *)(lVar5 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720 + 8) + 0x30
                      )) = 1;
    (*pcVar3)(auStack_a8,0);
    (*pcVar2)(auStack_88,0);
    (**(code **)(param_5 + 0x78))(param_3,param_5);
    (*pcVar4)(param_3,param_5);
    func_0x000100070bfc();
    func_0x000107c61574(param_3);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 100c86a84; end: 100c86ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86a84(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815470;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113094cc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113094cd0 + 8));
  return;
}



/* Entry: 100c86ae8; end: 100c86b2f;  */

void FUN_100c86ae8(void)

{
  FUN_100c86a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c86b30; end: 100c86b3b;  */

undefined * FUN_100c86b30(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 100c86b3c; end: 100c86ba7;  */

/* WARNING: Possible PIC construction at 0x000100c86b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86b90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127620ac);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c42c1c(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c86ba8; end: 100c86bc3;  */

void FUN_100c86ba8(void)

{
  func_0x000107c61160(PTR_PTR_1126d3ed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c86bc4; end: 100c86bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86bc4(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  if ((*param_2 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_100c82230();
      func_0x000107c6071c();
      lStack_60 = lVar1;
      uStack_58 = param_1;
      func_0x000100087bd4(&UNK_102a357e4,auStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100c86bcc; end: 100c86c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86bcc(undefined8 param_1,byte *param_2,long param_3)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  if ((*param_2 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_100c82230();
      func_0x000107c6071c();
      lStack_60 = param_3;
      uStack_58 = param_1;
      func_0x000100087bd4(&UNK_102a357e4,auStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 100c86c74; end: 100c86cef; -[SCLegacyNonCriticalStartupCommandsEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c86cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c86ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86c74(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127620b8;
    func_0x000107c61148(param_1);
  }
  func_0x000107c496a8(param_1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4c4cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c86cf0; end: 100c86cf7; -[SCLegacyWarmStartupInitiatorServices initiator] */

undefined8 FUN_100c86cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c86cf8; end: 100c86d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c86cf8(void)

{
  func_0x000107c610f4(PTR_PTR_1126cebe8);
  func_0x000107c49574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c86d40; end: 100c86daf; -[SCWarmStartupInitiatorImpl initWithWarmStartupScopeExposer:] */

undefined1 * FUN_100c86d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702dd8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c86db0; end: 100c86dc7; -[SCWarmStartupInitiatorImpl markColdStartupCompleted] */

void FUN_100c86db0(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 100c86dc8; end: 100c86edf;  */

void FUN_100c86dc8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c3ebcc();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c4d608(PTR_PTR_1126ae6b8);
    func_0x000107c61180();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x000107c413c0(0x3fd3333333333333,puVar2);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c61174(uVar4);
    func_0x000107c6111c(auStack_38,param_1 + 0x38);
    puVar3 = puVar2;
    func_0x000107c5c51c(puVar2);
    func_0x000107c61180();
    func_0x000107c61120(auStack_38);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c86ee0; end: 100c87043;  */

void FUN_100c86ee0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_106123084;
  puStack_40 = &UNK_106123094;
  uStack_38 = 0;
  func_0x000107c4c7b0(param_2);
  func_0x000107c3ebcc(puStack_58[5]);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c53130();
  func_0x000107c61170(param_1);
  uVar1 = puStack_58[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c87044; end: 100c8705f;  */

void FUN_100c87044(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____kCFBooleanTrue_11034ab68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c87060; end: 100c8706f; -[SCSponsoredLensWarmupWorkflow setCameraVisible:] */

void FUN_100c87060(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 100c87070; end: 100c8717b; -[SCQueuePerformerObserver complete] */

void FUN_100c87070(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c61144(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_10bcb9b14;
    puStack_38 = &UNK_1108434b0;
    ppuVar2 = &puStack_50;
    func_0x000107c6111c(auStack_30,auStack_28);
    func_0x000107c4e590(uVar1);
  }
  else {
    func_0x000107c61144(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    puStack_68 = &UNK_10bcb9b48;
    puStack_60 = &UNK_1108434b0;
    ppuVar2 = &puStack_78;
    func_0x000107c6111c(auStack_58,auStack_28);
    func_0x000107c4e524(uVar1);
  }
  func_0x000107c61120(ppuVar2 + 4);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c8717c; end: 100c871af;  */

void FUN_100c8717c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3dfbc(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c871b0; end: 100c871b7; -[SCALensCarouselActivationRequested getPayloadIdentifier] */

undefined8 FUN_100c871b0(void)

{
  return 0x1197;
}



/* Entry: 100c871b8; end: 100c871c3; -[SCALensCarouselActivationRequested toProtoWithAllowedFields:] */

void FUN_100c871b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 100c871c4; end: 100c8720f; -[SCSpectaclesHomeWifiManager applicationStartupComplete] */

/* WARNING: Possible PIC construction at 0x000100c871fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c87200) */

void FUN_100c871c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5b9cc(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c43828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c87210; end: 100c87307; -[SCIdleMonitorV1 markStartComplete] */

void FUN_100c87210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x4d) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    func_0x000107c427f8(*(undefined8 *)(param_1 + 0x80));
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    func_0x000107c61170(uVar1);
    func_0x000107c61144(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_10b5d9984;
    puStack_38 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_30,auStack_28);
    uVar1 = 0;
    func_0x0001008553e8(0,&puStack_50);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c4e528((double)*(float *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x58));
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
  }
  return;
}



/* Entry: 100c87308; end: 100c8731b;  */

void FUN_100c87308(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(lVar1 + 0xb8) = 0xff;
  return;
}



/* Entry: 100c8731c; end: 100c876b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c8731c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d3bc20;
  puVar6 = &UNK_10d904ef0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = (long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar2 + -8);
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100c876dc();
  *(long *)(param_1 + 0xcc) = lVar1;
  *(undefined **)(param_1 + 0xd4) = puVar6;
  *(undefined8 *)(param_1 + 0xdc) = param_3;
  *(undefined8 *)(param_1 + 0xe4) = param_4;
  *(undefined1 *)(param_1 + 0xec) = 0;
  lVar1 = _DAT_11305f908;
  func_0x000107c61428(unaff_x20 + _DAT_11305f908,auStack_88,0,0);
  func_0x0001000c78e8(unaff_x20 + lVar1,lVar8);
  lVar3 = lVar8;
  (**(code **)(lVar13 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001000c7938(lVar8,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar12,lVar8,lVar2);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar3 = *(long *)(unaff_x20 + 0x70);
    func_0x0001000a8868(unaff_x20 + 0x50,uVar9);
    (**(code **)(lVar3 + 0x10))(lVar12,uVar9,lVar3);
    (**(code **)(lVar13 + 8))(lVar12,lVar2);
    (**(code **)(lVar13 + 0x38))(lVar11,1,1,lVar2);
    func_0x000107c61428(unaff_x20 + lVar1,&puStack_d0,0x21,0);
    func_0x0001000c90cc(lVar11,unaff_x20 + lVar1);
    func_0x000107c614a8(&puStack_d0);
  }
  func_0x000107c59814(*(undefined8 *)(unaff_x20 + 0x78));
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x000107c61428(param_1 + 0x70,auStack_a0,0,0);
  func_0x000107c50298(uVar9);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100c89b7c(param_1,(bRam0000000113813100 ^ 0xff) & 1);
  bRam0000000113813100 = 1;
  FUN_100c95c60(*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x78));
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  lVar1 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c614f0();
  uVar5 = uVar4;
  (**(code **)(lVar1 + 0x28))();
  if ((((uVar5 & 1) == 0) &&
      (uVar5 = uVar4, (**(code **)(lVar1 + 8))(uVar4,lVar1), (uVar5 & 1) != 0)) &&
     ((**(code **)(lVar1 + 0x10))(uVar4,lVar1), (uVar4 & 1) == 0)) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar9 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f1edb00);
    fVar14 = 0.0;
    func_0x000107c436e4(uVar10);
    func_0x000107c61170(uVar9);
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    uVar15 = NEON_fminnm(fVar14,0x40a00000);
    puVar6 = &UNK_110743780;
    func_0x000107c613fc(&UNK_110743780,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puStack_b0 = &UNK_1040b5dbc;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1107437e8;
    ppuVar7 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_a8);
    FUN_100c749e0(uVar15,"GhostToSignaler.completed.scopeGraphLaunch",ppuVar7);
    func_0x000107c60bd0(ppuVar7);
  }
  return;
}



/* Entry: 100c876b4; end: 100c876d7;  */

void FUN_100c876b4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c876d8; end: 100c876db;  */

void FUN_100c876d8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c876dc; end: 100c8776b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c876dc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 8;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  func_0x000107c61678(iVar1,2,&uStack_40,&uStack_44);
  uVar2 = uStack_40;
  uVar5 = uStack_38;
  uVar7 = uStack_30;
  uVar8 = uStack_28;
  if (iVar1 != 0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    func_0x000107c60e78(uVar2,uVar5,uVar7,uVar8);
    lVar3 = 0;
    func_0x0001000c2d68();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    puVar9 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar4 = 0x113060130;
    func_0x0001000285a8(0x113060130,&UNK_10dcd5720);
    lVar10 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar5 = 0x113060148;
    uStack_c0 = uVar2;
    func_0x0001000285a8(0x113060148,&UNK_10dcd5730);
    func_0x000100075034(&lStack_b8,FUN_100c87a14,auStack_d0,uVar5);
    if (lStack_b8 != 0) {
      func_0x000107c6157c(lStack_b8);
      func_0x000107c5fd50();
      func_0x000107c61574(lStack_b8);
      lVar6 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar9,uVar2,lVar6);
      func_0x000107c6159c(puVar9,lVar3,1);
      uVar2 = 0x113060140;
      func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
      func_0x000107c5fd28((long)puVar9 - extraout_x8_00,puVar9,uVar2);
      func_0x000107c61574(lStack_b8);
      (**(code **)(lVar10 + 8))((long)puVar9 - extraout_x8_00,lVar4);
    }
    return;
  }
  return;
}



/* Entry: 100c8776c; end: 100c8791b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c8776c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x0001000c2d68();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x113060130;
  func_0x0001000285a8(0x113060130,&UNK_10dcd5720);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x113060148;
  uStack_70 = param_1;
  func_0x0001000285a8(0x113060148,&UNK_10dcd5730);
  func_0x000100075034(&lStack_68,FUN_100c87a14,auStack_80,uVar3);
  if (lStack_68 != 0) {
    func_0x000107c6157c(lStack_68);
    func_0x000107c5fd50();
    func_0x000107c61574(lStack_68);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar5,param_1,lVar4);
    func_0x000107c6159c(puVar5,lVar1,1);
    uVar3 = 0x113060140;
    func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
    func_0x000107c5fd28((long)puVar5 - extraout_x8_00,puVar5,uVar3);
    func_0x000107c61574(lStack_68);
    (**(code **)(lVar6 + 8))((long)puVar5 - extraout_x8_00,lVar2);
  }
  return;
}



/* Entry: 100c8791c; end: 100c8793b;  */

void FUN_100c8791c(void)

{
  FUN_100c8776c();
  return;
}



/* Entry: 100c8793c; end: 100c87a13;  */

void FUN_100c8793c(undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *param_2;
  uVar3 = param_3;
  func_0x000107c61434(lVar4);
  func_0x0001000c8928();
  func_0x000107c6142c(lVar4);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = (int)*param_2;
    func_0x000107c61558();
    lVar4 = *param_2;
    if (iVar1 == 0) {
      func_0x0001040b83b8();
    }
    lVar5 = *(long *)(lVar4 + 0x30);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_3,lVar2);
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_3 * 8);
    FUN_100c87a2c(param_3,lVar4);
    *param_2 = lVar4;
  }
  *param_1 = uVar6;
  return;
}



/* Entry: 100c87a14; end: 100c87a2b;  */

void FUN_100c87a14(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c8793c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100c87a2c; end: 100c87c83;  */

void FUN_100c87a2c(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar8);
    uStack_70 = uVar13 + 1 & uVar8;
    lVar10 = *(long *)(lVar12 + 0x48);
    pcStack_78 = *(code **)(lVar12 + 0x10);
    lStack_68 = lVar12;
    do {
      lVar12 = lVar10 * uVar11;
      (*pcStack_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    *(long *)(param_2 + 0x30) + lVar12,lVar6);
      uVar13 = *(ulong *)(param_2 + 0x28);
      uVar7 = 0x112d6c668;
      func_0x0001040b8600(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSHAAMc_110350c48);
      func_0x000107c5fa4c(uVar13,lVar6,uVar7);
      (**(code **)(lStack_68 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
      uVar13 = uVar13 & uVar8;
      if ((long)param_1 < (long)uStack_70) {
        if (uStack_70 <= uVar13 || (long)uVar13 <= (long)param_1) {
LAB_100c87ba0:
          lVar9 = lVar10 * param_1;
          uVar13 = *(long *)(param_2 + 0x30) + lVar9;
          lVar2 = *(long *)(param_2 + 0x30) + lVar12;
          if ((lVar9 < lVar12) || ((ulong)(lVar2 + lVar10) <= uVar13)) {
            func_0x000107c61414(uVar13,lVar2,1,lVar6);
          }
          else if (lVar9 - lVar12 != 0) {
            func_0x000107c61410(uVar13,lVar2,1,lVar6);
          }
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 8);
          if ((param_1 != uVar11) || (puVar4 + 1 <= puVar3)) {
            *puVar3 = *puVar4;
            param_1 = uVar11;
          }
        }
      }
      else if (uStack_70 <= uVar13 && (long)uVar13 <= (long)param_1) goto LAB_100c87ba0;
      uVar11 = uVar11 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100c87c84);
  (*pcVar5)();
}



/* Entry: 100c87c84; end: 100c87d6b; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor setStartupCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c87c84(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11307cde0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c87d6c);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x0001044745d4(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c59814(uVar5);
      func_0x000107c615e8(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100c87d6c; end: 100c87e13;  */

void FUN_100c87d6c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100c87e14,0,0);
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  pcVar1 = *(code **)(lVar5 + 0x40);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  (**(code **)(*(long *)(lVar5 + 0x50) + 8))(uVar3,*(undefined8 *)(lVar5 + 0x48));
  (*pcVar1)(uVar4,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100c87e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))();
  return;
}



/* Entry: 100c87e14; end: 100c87e17;  */

void FUN_100c87e14(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar1 = *(code **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x48));
  (*pcVar1)(uVar4,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100c87e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c87e18; end: 100c87e7f;  */

void FUN_100c87e18(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar1 = *(code **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x48));
  (*pcVar1)(uVar4,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100c87e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c87e80; end: 100c87edb;  */

void FUN_100c87e80(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)&UNK_1040b804c;
  }
  else {
    pcVar1 = FUN_100c87edc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100c87edc; end: 100c87f6b;  */

void FUN_100c87edc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c614ac(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100c87f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c87f6c; end: 100c87fa7;  */

void FUN_100c87f6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100c87fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100c87fa8; end: 100c87fcf; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor setStartupCompleted] */

void FUN_100c87fa8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c87fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c87fd0; end: 100c88187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c87fd0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  func_0x000107c5eea0(lVar8);
  (**(code **)(lVar11 + 0x10))(lVar9,lVar8,lVar1);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1103b6798;
  func_0x000107c613fc(&UNK_1103b6798,uVar10 + lVar7,uVar5 | 7);
  (**(code **)(lVar11 + 0x20))(puVar2 + uVar10,lVar9,lVar1);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7f3e8);
    puVar3 = &UNK_1103b67c0;
    func_0x000107c613fc(&UNK_1103b67c0,0x28,7);
    *(code **)(puVar3 + 0x10) = FUN_100c8872c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(long *)(puVar3 + 0x20) = lVar7;
    uStack_60 = 0x100c88728;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103b67d8;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_58;
    func_0x000107c61580(lVar7,2);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar7);
  }
  func_0x000107c61574(puVar2);
  (**(code **)(lVar11 + 8))(lVar8,lVar1);
  return;
}



/* Entry: 100c88188; end: 100c882af;  */

void FUN_100c88188(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar1 = 0;
  func_0x000107c5f83c();
  lVar8 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  uVar10 = *(long *)(lVar8 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar2 + -8);
  uVar6 = uVar10 + *(byte *)(lVar11 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  lVar7 = *(long *)(lVar11 + 0x40);
  lVar3 = 0x113060140;
  func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
  lVar9 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar8 + 8))(unaff_x20 + uVar5,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar10));
  (**(code **)(lVar11 + 8))(unaff_x20 + uVar6,lVar2);
  (**(code **)(lVar9 + 8))(unaff_x20 + (uVar6 + lVar7 + uVar4 & (uVar4 ^ 0xffffffffffffffff)),lVar3)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c882b0; end: 100c882b3;  */

void FUN_100c882b0(long param_1,long param_2)

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



/* Entry: 100c882b4; end: 100c882b7; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl setStartupCompleted] */

void FUN_100c882b4(void)

{
  return;
}



/* Entry: 100c882b8; end: 100c882fb; -[_TtC30SaberInterceptorImplementation27SaberStartupMetricsReporter reportSaberStartupMetricsWithStartupDestination:startupType:] */

void FUN_100c882b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_100c882fc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c882fc; end: 100c883e7;  */

/* WARNING: Possible PIC construction at 0x000100c883c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c883cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c882fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  code *pcVar7;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d9dab0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d9dab8) = param_2;
  lVar2 = unaff_x20 + _DAT_112d9dac0;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  puVar5 = &UNK_1103b89d8;
  func_0x000107c613fc(&UNK_1103b89d8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1103b8a00;
  func_0x000107c613fc(&UNK_1103b8a00,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(code **)(puVar6 + 0x18) = FUN_101438dd8;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  pcVar7 = *(code **)(lVar4 + 0x18);
  func_0x000107c6157c(puVar5);
  (*pcVar7)(0x100c88568,puVar6,uVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 100c883e8; end: 100c88407;  */

void FUN_100c883e8(void)

{
  FUN_100c88418();
  return;
}



/* Entry: 100c88408; end: 100c88417;  */

void FUN_100c88408(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c88418; end: 100c884ab;  */

/* WARNING: Possible PIC construction at 0x000100c8848c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c88490) */
/* WARNING: Removing unreachable block (ram,0x000100c88494) */
/* WARNING: Removing unreachable block (ram,0x000100c88498) */

void FUN_100c88418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  FUN_100c88408(uVar1,uVar2);
  cVar3 = *(char *)(unaff_x20 + 0x10);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  if (cVar3 != '\x01') {
    func_0x000107c61428(unaff_x20 + 0x20,auStack_48,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100c884ac; end: 100c88557;  */

void FUN_100c884ac(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c61428(unaff_x20 + 0x18,auStack_58,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    FUN_100c88558(pcVar1,uVar2);
    func_0x000107c61434(uVar3);
    (*pcVar1)();
    func_0x000107c6142c(uVar3);
    FUN_100c88408(pcVar1,uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_100c88408(uVar2,uVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 100c88558; end: 100c88573;  */

void FUN_100c88558(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c88574; end: 100c886eb;  */

void FUN_100c88574(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [24];
  
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001000ad274(0);
  FUN_100c88720();
  uVar2 = uVar1;
  func_0x0001000ad2e8();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x0001000aad1c(0);
  func_0x0001000fb25c();
  puVar4 = &UNK_1103b89d8;
  func_0x000107c613fc(&UNK_1103b89d8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar5 = &UNK_1103b8a48;
  func_0x000107c613fc(&UNK_1103b8a48,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  *(undefined8 *)(puVar5 + 0x28) = param_4;
  func_0x000107c6157c(puVar4);
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_4);
  uVar1 = uVar2;
  func_0x000100947c8c(uVar2,uVar3,0,0,FUN_101439720,puVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 100c886ec; end: 100c8871f;  */

void FUN_100c886ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c88720; end: 100c8872b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c88720(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b850) = 6;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c8872c; end: 100c88767;  */

void FUN_100c8872c(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  cVar1 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (cVar1 == '\x02') {
    func_0x000107c61428(param_1 + 0x80,auStack_48,0,0);
    uVar4 = *(ulong *)(param_1 + 0x80);
    if ((uVar4 & 0xc000000000000001) == 0) {
      uVar5 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      func_0x000107c61434(uVar4);
      func_0x000107c6029c();
      func_0x000107c6142c(uVar4);
    }
    if (uVar5 == 0) {
      FUN_100c88808(unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    }
  }
  return;
}



/* Entry: 100c88768; end: 100c88807;  */

void FUN_100c88768(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (cVar1 == '\x02') {
    func_0x000107c61428(param_1 + 0x80,auStack_48,0,0);
    uVar2 = *(ulong *)(param_1 + 0x80);
    if ((uVar2 & 0xc000000000000001) == 0) {
      uVar3 = *(ulong *)(uVar2 + 0x10);
    }
    else {
      uVar3 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar3 = uVar2;
      }
      func_0x000107c61434(uVar2);
      func_0x000107c6029c();
      func_0x000107c6142c(uVar2);
    }
    if (uVar3 == 0) {
      FUN_100c88808(param_2);
    }
  }
  return;
}



/* Entry: 100c88808; end: 100c89a3b;  */

/* WARNING: Removing unreachable block (ram,0x000100c89a34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c88808(double param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 ******ppppppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar23;
  undefined8 *****pppppuVar24;
  undefined8 ****ppppuVar25;
  char *pcVar26;
  undefined8 *******pppppppuVar27;
  long unaff_x20;
  undefined8 ****ppppuVar28;
  long lVar29;
  undefined8 ****ppppuVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 ******ppppppuVar34;
  ulong uVar35;
  undefined8 *puVar36;
  double dVar37;
  undefined8 uVar38;
  undefined8 ******ppppppuVar39;
  undefined *puStack_180;
  code *pcStack_178;
  ulong uStack_170;
  long lStack_168;
  char *pcStack_160;
  ulong uStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  ulong uStack_140;
  undefined8 ******ppppppuStack_110;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *******pppppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = (long)&puStack_180 - extraout_x8;
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar33 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar29 = lVar31 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar21 = (ulong)*(byte *)(unaff_x20 + 0x58);
  FUN_100c89a3c(uVar8,uVar21,*(undefined8 *)(unaff_x20 + 0x68));
  puVar17 = PTR_PTR_1126a6d68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar12 = _DAT_112d7f420;
  func_0x000107c61428(unaff_x20 + _DAT_112d7f420,auStack_90,0,0);
  func_0x0001009f0578(unaff_x20 + lVar12,lVar31);
  lVar12 = lVar31;
  (**(code **)(lVar33 + 0x30))(lVar31,1,lVar7);
  if ((int)lVar12 == 1) {
    func_0x000107c6142c(uVar21);
    func_0x000107c61170(puVar17);
    func_0x000100c8a528(lVar31,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar33 + 0x20))(lVar29,lVar31,lVar7);
    func_0x000107c5ee68(lVar29);
    func_0x000107c61428(unaff_x20 + 0x18,auStack_a8,0,0);
    FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
    lVar12 = lStack_b0;
    uVar32 = uStack_b8;
    func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
    uStack_140 = uVar21;
    (**(code **)(lVar12 + 0x38))(param_1,uVar8,uVar21,uVar32,lVar12);
    func_0x0001000834e4(&pppppppuStack_d0);
    puStack_180 = puVar17;
    func_0x000107c59f70((double)(long)(param_1 * 1000000.0) / 1000000.0,puVar17);
    (**(code **)(lVar33 + 8))(lVar29,lVar7);
    ppppppuVar34 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    pppppppuVar9 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1010fe67c();
    pppppppuVar10 = (undefined8 *******)ppppppuVar34;
    FUN_1010fe67c();
    ppppppuStack_110 = ppppppuVar34;
    func_0x0001003d21d8();
    func_0x0001001830b8();
    ppppppuStack_148 = ppppppuVar34;
    func_0x000107c61428(unaff_x20 + 0x70,auStack_e8,1,0);
    lStack_168 = *(long *)(unaff_x20 + 0x70);
    uVar21 = *(ulong *)(lStack_168 + 0x10);
    func_0x000107c61434();
    uStack_170 = uVar21;
    if (uVar21 != 0) {
      uVar21 = 0;
      pcVar26 = (char *)(lStack_168 + 0x48);
      uVar35 = uStack_140;
      do {
        if (*(ulong *)(lStack_168 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a00);
          (*pcVar23)();
        }
        ppppuVar30 = *(undefined8 *****)(pcVar26 + -0x28);
        ppppuVar1 = *(undefined8 *****)(pcVar26 + -0x20);
        ppppuVar28 = *(undefined8 *****)(pcVar26 + -0x18);
        ppppuVar2 = *(undefined8 *****)(pcVar26 + -0x10);
        dVar37 = *(double *)(pcVar26 + -8);
        pcStack_160 = pcVar26;
        uStack_158 = uVar21;
        ppppppuStack_150 = pppppppuVar9;
        if (*pcVar26 == '\x01') {
          FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
          lVar12 = lStack_b0;
          uVar32 = uStack_b8;
          func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
          pcStack_178 = *(code **)(lVar12 + 0x10);
          func_0x000107c61434(ppppuVar1);
          func_0x000107c61434(ppppuVar2);
          (*pcStack_178)(dVar37,ppppuVar30,ppppuVar1,uVar8,uVar35,ppppuVar28,ppppuVar2,uVar32,lVar12
                        );
          func_0x0001000834e4(&pppppppuStack_d0);
          FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
          lVar12 = lStack_b0;
          uVar32 = uStack_b8;
          func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
          pcVar23 = *(code **)(lVar12 + 0x28);
        }
        else {
          FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
          lVar12 = lStack_b0;
          uVar32 = uStack_b8;
          func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
          pcStack_178 = *(code **)(lVar12 + 8);
          func_0x000107c61434(ppppuVar1);
          func_0x000107c61434(ppppuVar2);
          (*pcStack_178)(dVar37,ppppuVar30,ppppuVar1,uVar8,uVar35,ppppuVar28,ppppuVar2,uVar32,lVar12
                        );
          func_0x0001000834e4(&pppppppuStack_d0);
          FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
          lVar12 = lStack_b0;
          uVar32 = uStack_b8;
          func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
          pcVar23 = *(code **)(lVar12 + 0x20);
        }
        (*pcVar23)(dVar37,ppppuVar30,ppppuVar1,uVar8,uVar35,ppppuVar28,ppppuVar2,uVar32,lVar12);
        func_0x0001000834e4(&pppppppuStack_d0);
        pppppppuVar9 = (undefined8 *******)ppppppuStack_150;
        ppppppuVar34 = ppppppuStack_150;
        func_0x000107c61558();
        pppppppuStack_d0 = pppppppuVar9;
        ppppuVar11 = ppppuVar28;
        ppppuVar25 = ppppuVar2;
        func_0x000100029284();
        uVar21 = (ulong)~(uint)ppppuVar25 & 1;
        lVar12 = (long)pppppppuVar9[2] + uVar21;
        if (SCARRY8((long)pppppppuVar9[2],uVar21)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a04);
          (*pcVar23)();
        }
        if ((long)pppppppuVar9[3] < lVar12) {
          FUN_101432e00(lVar12,ppppppuVar34);
          pppppppuVar9 = pppppppuStack_d0;
          ppppuVar11 = ppppuVar28;
          ppppuVar22 = ppppuVar2;
          func_0x000100029284();
          if (((uint)ppppuVar25 & 1) != ((uint)ppppuVar22 & 1)) goto LAB_100c89a24;
        }
        else if (((ulong)ppppppuVar34 & 1) == 0) {
          FUN_101432c98();
          pppppppuVar9 = pppppppuStack_d0;
        }
        if (((ulong)ppppuVar25 & 1) == 0) {
          pppppppuVar9[((ulong)ppppuVar11 >> 6) + 8] =
               (undefined8 ******)
               ((ulong)pppppppuVar9[((ulong)ppppuVar11 >> 6) + 8] | 1L << ((ulong)ppppuVar11 & 0x3f)
               );
          pppppuVar24 = pppppppuVar9[6];
          pppppuVar24[(long)ppppuVar11 * 2] = ppppuVar28;
          (pppppuVar24 + (long)ppppuVar11 * 2)[1] = ppppuVar2;
          pppppppuVar9[7][(long)ppppuVar11] = (undefined8 *****)0x0;
          if (SCARRY8((long)pppppppuVar9[2],1)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a18);
            (*pcVar23)();
          }
          pppppppuVar9[2] = (undefined8 ******)((long)pppppppuVar9[2] + 1);
          func_0x000107c61434(ppppuVar2);
        }
        pppppppuVar9[7][(long)ppppuVar11] =
             (undefined8 *****)(dVar37 + (double)pppppppuVar9[7][(long)ppppuVar11]);
        ppppppuVar34 = pppppppuVar10;
        func_0x000107c61558();
        ppppuVar11 = ppppuVar30;
        ppppuVar25 = ppppuVar1;
        pppppppuStack_d0 = pppppppuVar10;
        func_0x000100029284();
        uVar21 = (ulong)~(uint)ppppuVar25 & 1;
        lVar12 = (long)pppppppuVar10[2] + uVar21;
        if (SCARRY8((long)pppppppuVar10[2],uVar21)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a08);
          (*pcVar23)();
        }
        if ((long)pppppppuVar10[3] < lVar12) {
          FUN_101432e00(lVar12,ppppppuVar34);
          pppppppuVar10 = pppppppuStack_d0;
          ppppuVar11 = ppppuVar30;
          ppppuVar22 = ppppuVar1;
          func_0x000100029284();
          if (((uint)ppppuVar25 & 1) != ((uint)ppppuVar22 & 1)) goto LAB_100c89a24;
        }
        else if (((ulong)ppppppuVar34 & 1) == 0) {
          FUN_101432c98();
          pppppppuVar10 = pppppppuStack_d0;
        }
        if (((ulong)ppppuVar25 & 1) == 0) {
          pppppppuVar10[((ulong)ppppuVar11 >> 6) + 8] =
               (undefined8 ******)
               ((ulong)pppppppuVar10[((ulong)ppppuVar11 >> 6) + 8] |
               1L << ((ulong)ppppuVar11 & 0x3f));
          pppppuVar24 = pppppppuVar10[6];
          pppppuVar24[(long)ppppuVar11 * 2] = ppppuVar30;
          (pppppuVar24 + (long)ppppuVar11 * 2)[1] = ppppuVar1;
          pppppppuVar10[7][(long)ppppuVar11] = (undefined8 *****)0x0;
          if (SCARRY8((long)pppppppuVar10[2],1)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a1c);
            (*pcVar23)();
          }
          pppppppuVar10[2] = (undefined8 ******)((long)pppppppuVar10[2] + 1);
          func_0x000107c61434(ppppuVar1);
        }
        pppppppuVar10[7][(long)ppppuVar11] =
             (undefined8 *****)(dVar37 + (double)pppppppuVar10[7][(long)ppppuVar11]);
        ppppppuVar34 = ppppppuStack_110;
        func_0x000107c61558();
        ppppuVar11 = ppppuVar30;
        ppppuVar25 = ppppuVar1;
        pppppppuStack_d0 = (undefined8 *******)ppppppuStack_110;
        func_0x000100029284();
        uVar21 = (ulong)~(uint)ppppuVar25 & 1;
        lVar12 = (long)ppppppuStack_110[2] + uVar21;
        if (SCARRY8((long)ppppppuStack_110[2],uVar21)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a0c);
          (*pcVar23)();
        }
        if ((long)ppppppuStack_110[3] < lVar12) {
          func_0x00010113678c(lVar12,ppppppuVar34);
          ppppppuStack_110 = pppppppuStack_d0;
          ppppuVar11 = ppppuVar30;
          ppppuVar22 = ppppuVar1;
          func_0x000100029284();
          if (((uint)ppppuVar25 & 1) != ((uint)ppppuVar22 & 1)) goto LAB_100c89a24;
        }
        else if (((ulong)ppppppuVar34 & 1) == 0) {
          func_0x000101136368();
          ppppppuStack_110 = pppppppuStack_d0;
        }
        if (((ulong)ppppuVar25 & 1) == 0) {
          ppppppuStack_110[((ulong)ppppuVar11 >> 6) + 8] =
               (undefined8 *****)
               ((ulong)ppppppuStack_110[((ulong)ppppuVar11 >> 6) + 8] |
               1L << ((ulong)ppppuVar11 & 0x3f));
          pppppuVar24 = ppppppuStack_110[6];
          pppppuVar24[(long)ppppuVar11 * 2] = ppppuVar30;
          (pppppuVar24 + (long)ppppuVar11 * 2)[1] = ppppuVar1;
          ppppppuStack_110[7][(long)ppppuVar11] = (undefined8 ****)0x0;
          if (SCARRY8((long)ppppppuStack_110[2],1)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a20);
            (*pcVar23)();
          }
          ppppppuStack_110[2] = (undefined8 *****)((long)ppppppuStack_110[2] + 1);
          func_0x000107c61434(ppppuVar1);
        }
        ppppuVar25 = ppppppuStack_110[7][(long)ppppuVar11];
        if (SCARRY8((long)ppppuVar25,1)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a10);
          (*pcVar23)();
        }
        ppppppuStack_110[7][(long)ppppuVar11] = (undefined8 ****)((long)ppppuVar25 + 1);
        func_0x000107c61434(ppppuVar2);
        ppppppuVar34 = ppppppuStack_148;
        ppppppuVar39 = ppppppuStack_148;
        func_0x000107c61558();
        pppppppuStack_d0 = (undefined8 *******)ppppppuVar34;
        ppppuVar11 = ppppuVar30;
        ppppuVar25 = ppppuVar1;
        func_0x000100029284();
        uVar21 = (ulong)~(uint)ppppuVar25 & 1;
        lVar12 = (long)ppppppuVar34[2] + uVar21;
        if (SCARRY8((long)ppppppuVar34[2],uVar21)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a14);
          (*pcVar23)();
        }
        if ((long)ppppppuVar34[3] < lVar12) {
          func_0x0001001833c8(lVar12,ppppppuVar39);
          ppppuVar11 = ppppuVar30;
          ppppuVar22 = ppppuVar1;
          func_0x000100029284();
          if (((uint)ppppuVar25 & 1) != ((uint)ppppuVar22 & 1)) {
LAB_100c89a24:
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a34);
            (*pcVar23)();
          }
        }
        else if (((ulong)ppppppuVar39 & 1) == 0) {
          func_0x000100184498();
        }
        pppppppuVar27 = pppppppuStack_d0;
        uVar35 = uStack_140;
        ppppppuStack_148 = pppppppuStack_d0;
        if (((ulong)ppppuVar25 & 1) == 0) {
          pppppppuStack_d0[((ulong)ppppuVar11 >> 6) + 8] =
               (undefined8 ******)
               ((ulong)pppppppuStack_d0[((ulong)ppppuVar11 >> 6) + 8] |
               1L << ((ulong)ppppuVar11 & 0x3f));
          pppppuVar24 = pppppppuStack_d0[6];
          pppppuVar24[(long)ppppuVar11 * 2] = ppppuVar30;
          (pppppuVar24 + (long)ppppuVar11 * 2)[1] = ppppuVar1;
          pppppuVar24 = pppppppuStack_d0[7];
          pppppuVar24[(long)ppppuVar11 * 2] = ppppuVar28;
          (pppppuVar24 + (long)ppppuVar11 * 2)[1] = ppppuVar2;
          func_0x000107c6142c(ppppuVar2);
          pppppuVar24 = pppppppuVar27[2];
          if (SCARRY8((long)pppppuVar24,1)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100c89a24);
            (*pcVar23)();
          }
          pppppppuVar27[2] = (undefined8 ******)((long)pppppuVar24 + 1);
        }
        else {
          pppppuVar24 = pppppppuStack_d0[7] + (long)ppppuVar11 * 2;
          ppppuVar30 = pppppuVar24[1];
          *pppppuVar24 = ppppuVar28;
          pppppuVar24[1] = ppppuVar2;
          func_0x000107c6142c(ppppuVar2);
          func_0x000107c6142c(ppppuVar1);
          func_0x000107c6142c(ppppuVar30);
        }
        uVar21 = uStack_158 + 1;
        pcVar26 = pcStack_160 + 0x30;
      } while (uStack_170 != uVar21);
    }
    ppppppuStack_150 = pppppppuVar9;
    func_0x000107c6142c(lStack_168);
    func_0x000107c61428(unaff_x20 + 0x78,auStack_100,1,0);
    lVar12 = *(long *)(unaff_x20 + 0x78);
    uVar21 = *(ulong *)(lVar12 + 0x10);
    func_0x000107c61434();
    if (uVar21 != 0) {
      uVar35 = 0;
      puVar36 = (undefined8 *)(lVar12 + 0x30);
      do {
        if (*(ulong *)(lVar12 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100c899fc);
          (*pcVar23)();
        }
        uVar35 = uVar35 + 1;
        uVar38 = *puVar36;
        uVar32 = puVar36[-2];
        uVar3 = puVar36[-1];
        FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
        lVar7 = lStack_b0;
        uVar6 = uStack_b8;
        func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
        pcVar23 = *(code **)(lVar7 + 0x18);
        func_0x000107c61434(uVar3);
        uVar5 = uStack_140;
        (*pcVar23)(uVar38,uVar32,uVar3,uVar8,uStack_140,uVar6,lVar7);
        func_0x0001000834e4(&pppppppuStack_d0);
        FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
        lVar7 = lStack_b0;
        uVar6 = uStack_b8;
        func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
        (**(code **)(lVar7 + 0x30))(uVar38,uVar32,uVar3,uVar8,uVar5,uVar6,lVar7);
        func_0x000107c6142c(uVar3);
        func_0x0001000834e4(&pppppppuStack_d0);
        puVar36 = puVar36 + 3;
      } while (uVar21 != uVar35);
    }
    func_0x000107c6142c(lVar12);
    ppppppuVar34 = ppppppuStack_150;
    pppppppuVar27 = (undefined8 *******)ppppppuStack_150[2];
    pppppppuVar9 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar27 != (undefined8 *******)0x0) {
      func_0x000107c61434(ppppppuStack_150);
      pppppppuVar9 = pppppppuVar27;
      func_0x000101431f78(pppppppuVar27,0);
      pppppppuVar13 = &pppppppuStack_d0;
      FUN_101433164(pppppppuVar13,pppppppuVar9 + 4,pppppppuVar27,ppppppuVar34);
      FUN_101433a28(pppppppuStack_d0,uStack_c8,uStack_c0,uStack_b8,lStack_b0);
      if (pppppppuVar13 != pppppppuVar27) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100c8933c);
        (*pcVar23)();
      }
    }
    pppppppuStack_d0 = pppppppuVar9;
    FUN_101432198(&pppppppuStack_d0);
    pppppppuVar9 = pppppppuStack_d0;
    ppppppuVar34 = pppppppuStack_d0[2];
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppppppuVar34 != (undefined8 ******)0x0) {
      pppppppuVar27 = pppppppuStack_d0 + 6;
      do {
        ppppppuVar39 = *pppppppuVar27;
        if (0.0001 < (double)ppppppuVar39) {
          ppppppuVar19 = pppppppuVar27[-2];
          ppppppuVar4 = pppppppuVar27[-1];
          puVar20 = PTR_PTR_1126a6d70;
          func_0x000107c610f8();
          func_0x000107c61434(ppppppuVar4);
          func_0x000107c453e4();
          ppppppuVar16 = ppppppuVar19;
          func_0x000107c5fadc(ppppppuVar19,ppppppuVar4);
          func_0x000107c55954(puVar20);
          func_0x000107c61170(ppppppuVar16);
          func_0x000107c5436c((double)(long)((double)ppppppuVar39 * 1000000.0) / 1000000.0,puVar20);
          func_0x000107c61174();
          puVar15 = puVar17;
          func_0x000107c61550();
          if ((((int)puVar15 == 0) || ((long)puVar17 < 0)) ||
             (puVar15 = puVar17, ((ulong)puVar17 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar17 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar17) {
                puVar14 = puVar17;
              }
              func_0x000107c60480(puVar14);
            }
            puVar15 = (undefined *)0x0;
            FUN_101431d88(0,puVar14 + 1,1,puVar17,0x112d7f548,&PTR_PTR_1126a6d70,0x112d7f558,
                          &UNK_10d93d788);
          }
          uVar35 = (ulong)puVar15 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar35 + 0x10);
          puVar17 = puVar15;
          if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar21) {
            puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
            FUN_101431d88(puVar17,uVar21 + 1,1,puVar15,0x112d7f548,&PTR_PTR_1126a6d70,0x112d7f558,
                          &UNK_10d93d788);
            uVar35 = (ulong)puVar17 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar35 + 0x10) = uVar21 + 1;
          *(undefined **)(uVar35 + uVar21 * 8 + 0x20) = puVar20;
          FUN_1014334bc(unaff_x20 + 0x18,&pppppppuStack_d0);
          lVar12 = lStack_b0;
          uVar32 = uStack_b8;
          func_0x0001000a8868(&pppppppuStack_d0,uStack_b8);
          (**(code **)(lVar12 + 0x40))
                    (ppppppuVar39,uVar8,uStack_140,ppppppuVar19,ppppppuVar4,uVar32,lVar12);
          func_0x000107c6142c(ppppppuVar4);
          func_0x000107c61170(puVar20);
          func_0x0001000834e4(&pppppppuStack_d0);
        }
        pppppppuVar27 = pppppppuVar27 + 3;
        ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
      } while (ppppppuVar34 != (undefined8 ******)0x0);
    }
    func_0x000107c61574(pppppppuVar9);
    func_0x000107c6142c(uStack_140);
    uVar8 = 0;
    FUN_101433a30(0,0x112d7f548,&PTR_PTR_1126a6d70);
    puVar20 = puVar17;
    func_0x000107c5fc48(puVar17,uVar8);
    func_0x000107c59c3c(puStack_180);
    func_0x000107c61170(puVar20);
    pppppppuVar27 = (undefined8 *******)pppppppuVar10[2];
    pppppppuVar9 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar27 != (undefined8 *******)0x0) {
      func_0x000107c61434(pppppppuVar10);
      pppppppuVar9 = pppppppuVar27;
      func_0x000101431f78(pppppppuVar27,0);
      pppppppuVar13 = &pppppppuStack_d0;
      FUN_101433164(pppppppuVar13,pppppppuVar9 + 4,pppppppuVar27,pppppppuVar10);
      FUN_101433a28(pppppppuStack_d0,uStack_c8,uStack_c0,uStack_b8,lStack_b0);
      if (pppppppuVar13 != pppppppuVar27) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100c8961c);
        (*pcVar23)();
      }
    }
    pppppppuStack_d0 = pppppppuVar9;
    FUN_101432198(&pppppppuStack_d0);
    pppppppuVar9 = pppppppuStack_d0;
    ppppppuVar34 = pppppppuStack_d0[2];
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppppppuVar34 != (undefined8 ******)0x0) {
      pppppppuVar27 = pppppppuStack_d0 + 6;
      do {
        ppppppuVar39 = *pppppppuVar27;
        if (0.0001 < (double)ppppppuVar39) {
          ppppppuVar19 = pppppppuVar27[-2];
          ppppppuVar4 = pppppppuVar27[-1];
          puVar15 = PTR_PTR_1126a6d78;
          func_0x000107c610f8();
          func_0x000107c61434(ppppppuVar4);
          func_0x000107c453e4();
          ppppppuVar16 = ppppppuVar19;
          func_0x000107c5fadc(ppppppuVar19,ppppppuVar4);
          func_0x000107c56954(puVar15);
          func_0x000107c61170(ppppppuVar16);
          func_0x000107c5436c((double)(long)((double)ppppppuVar39 * 1000000.0) / 1000000.0,puVar15);
          if (ppppppuStack_110[2] != (undefined8 *****)0x0) {
            func_0x000107c61434(ppppppuStack_110);
            func_0x000100029284();
            func_0x000107c6142c(ppppppuStack_110);
          }
          func_0x000107c539f4(puVar15);
          ppppppuVar39 = ppppppuStack_148;
          if (ppppppuStack_148[2] == (undefined8 *****)0x0) {
            ppppuVar28 = (undefined8 ****)0xe700000000000000;
            ppppuVar30 = (undefined8 ****)0x6e776f6e6b6e75;
          }
          else {
            func_0x000107c61434(ppppppuStack_148);
            ppppppuVar16 = ppppppuVar4;
            func_0x000100029284();
            if (((ulong)ppppppuVar16 & 1) == 0) {
              ppppuVar28 = (undefined8 ****)0xe700000000000000;
              ppppuVar30 = (undefined8 ****)0x6e776f6e6b6e75;
            }
            else {
              pppppuVar24 = ppppppuVar39[7] + (long)ppppppuVar19 * 2;
              ppppuVar30 = *pppppuVar24;
              ppppuVar28 = pppppuVar24[1];
              func_0x000107c61434(ppppuVar28);
            }
            func_0x000107c6142c(ppppppuVar39);
          }
          func_0x000107c6142c(ppppppuVar4);
          func_0x000107c5fadc(ppppuVar30,ppppuVar28);
          func_0x000107c6142c(ppppuVar28);
          func_0x000107c55954(puVar15);
          func_0x000107c61170(ppppuVar30);
          func_0x000107c61174();
          puVar14 = puVar20;
          func_0x000107c61550();
          if ((((int)puVar14 == 0) || ((long)puVar20 < 0)) ||
             (puVar14 = puVar20, ((ulong)puVar20 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar20 >> 0x3e == 0) {
              puVar18 = *(undefined **)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar18 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar20) {
                puVar18 = puVar20;
              }
              func_0x000107c60480(puVar18);
            }
            puVar14 = (undefined *)0x0;
            FUN_101431d88(0,puVar18 + 1,1,puVar20,0x112d7f550,&PTR_PTR_1126a6d78,0x112d7f560,
                          &UNK_10d93d798);
          }
          uVar35 = (ulong)puVar14 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar35 + 0x10);
          puVar20 = puVar14;
          if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar21) {
            puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
            FUN_101431d88(puVar20,uVar21 + 1,1,puVar14,0x112d7f550,&PTR_PTR_1126a6d78,0x112d7f560,
                          &UNK_10d93d798);
            uVar35 = (ulong)puVar20 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar35 + 0x10) = uVar21 + 1;
          *(undefined **)(uVar35 + uVar21 * 8 + 0x20) = puVar15;
          func_0x000107c61170(puVar15);
        }
        pppppppuVar27 = pppppppuVar27 + 3;
        ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
      } while (ppppppuVar34 != (undefined8 ******)0x0);
    }
    func_0x000107c61574(pppppppuVar9);
    uVar8 = 0;
    FUN_101433a30(0,0x112d7f550,&PTR_PTR_1126a6d78);
    puVar14 = puVar20;
    func_0x000107c5fc48(puVar20,uVar8);
    puVar15 = puStack_180;
    func_0x000107c54608(puStack_180);
    func_0x000107c61170(puVar14);
    if (((*(char *)(unaff_x20 + 0x58) != '\x01') &&
        ((*(int *)(unaff_x20 + 0x50) == 0x67 || (*(int *)(unaff_x20 + 0x50) == 0x1f)))) &&
       (lVar12 = *(long *)(unaff_x20 + 0x40), lVar12 != 0)) {
      func_0x000107c615f0(lVar12);
      func_0x000107c4bf74();
      func_0x000107c615e8(lVar12);
    }
    func_0x000107c61170(puVar15);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar8);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined **)(unaff_x20 + 0x78) = puVar15;
    func_0x000107c6142c(ppppppuStack_150);
    func_0x000107c6142c(pppppppuVar10);
    func_0x000107c6142c(ppppppuStack_110);
    func_0x000107c6142c(ppppppuStack_148);
    func_0x000107c6142c(puVar17);
    func_0x000107c6142c(puVar20);
    func_0x000107c6142c(uVar8);
  }
  return;
}



/* Entry: 100c89a3c; end: 100c89b2b;  */

undefined1  [16] FUN_100c89a3c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0x5445534e55;
  if (((uint)param_2 & 0xff) == 1) {
    param_1 = lVar2;
    uVar3 = 0xe500000000000000;
  }
  else {
    func_0x0001000e48c0();
    uVar3 = param_2;
  }
  func_0x0001005a8a60();
  func_0x000107c61180();
  if (param_3 == 0) {
    param_2 = 0xe500000000000000;
  }
  else {
    lVar2 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  func_0x000107c61434(uVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c6142c(uVar3);
  func_0x000107c61434(uVar3);
  func_0x000107c5fb78(lVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 100c89b2c; end: 100c89b7b;  */

void FUN_100c89b2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c89b7c; end: 100c89f8f;  */

void FUN_100c89b7c(char *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long extraout_x8;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  undefined *apuStack_220 [2];
  undefined1 auStack_210 [8];
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  long lStack_180;
  
  if ((param_2 & 1) != 0) {
    iVar9 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    if (iVar9 != 0) {
      if (param_1[200] == '\x01') {
        func_0x000107c61428(param_1 + 0x70,auStack_200,0,0);
        uVar19 = 0x1f;
        if (param_1[0x78] != '\x01') {
          uVar19 = *(undefined8 *)(param_1 + 0x70);
        }
      }
      else {
        uVar19 = *(undefined8 *)(param_1 + 0xc0);
      }
      apuStack_220[0] = PTR___sytN_11034f1b0 + 8;
      func_0x0001001ca524(uVar19,0,0x6c,4,0,0,&UNK_10dcd4b90,0);
      func_0x000107c61574();
    }
  }
  FUN_100c89f90(0);
  func_0x000107c61534();
  pcVar10 = param_1;
  func_0x000107c6157c();
  FUN_100c89fcc();
  if (pcVar10[0x84] != '\x01') {
    uVar3 = *(undefined4 *)(pcVar10 + 0x68);
    pcVar11 = pcVar10;
    func_0x000107c60034();
    pcVar12 = pcVar11;
    FUN_100c8bac0();
    uVar19 = *(undefined8 *)pcVar12;
    lVar16 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar16 + 0x18) = 4;
    *(undefined8 *)(lVar16 + 0x10) = 2;
    puVar14 = PTR___sSis7CVarArgsWP_11034df08;
    dVar20 = *(double *)(pcVar10 + 0x40);
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100c89f84);
      (*pcVar8)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100c89f88);
      (*pcVar8)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100c89f8c);
      (*pcVar8)();
    }
    *(undefined **)(lVar16 + 0x38) = PTR___sSiN_11034deb0;
    *(undefined **)(lVar16 + 0x40) = puVar14;
    puVar14 = PTR___ss5Int32VN_11034ee20;
    *(long *)(lVar16 + 0x20) = (long)dVar20;
    puVar7 = PTR___ss5Int32Vs7CVarArgsWP_11034ee40;
    *(undefined **)(lVar16 + 0x60) = puVar14;
    *(undefined **)(lVar16 + 0x68) = puVar7;
    *(undefined4 *)(lVar16 + 0x48) = uVar3;
    lVar13 = 0;
    func_0x000107c5f13c();
    lVar18 = *(long *)(lVar13 + -8);
    puStack_208 = auStack_210;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
    lVar17 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar15 = auStack_210 + lVar17;
    func_0x000107c61174(uVar19);
    func_0x000107c5f138(puVar15);
    *(long *)((long)apuStack_220 + lVar17) = lVar16;
    auStack_228[lVar17] = 2;
    *(undefined8 *)((long)&uStack_230 + lVar17) = 0x22;
    func_0x000107c5f128(pcVar11,0x100000000,uVar19,"g2x",3,2,puVar15,
                        "g2x_latency_ms:%d, g2x_page_ins:%d");
    func_0x000107c61170(uVar19);
    func_0x000107c61574(lVar16);
    (**(code **)(lVar18 + 8))(puVar15,lVar13);
  }
  func_0x000100083b20(&uStack_1e8);
  uVar19 = uStack_1e8;
  pcVar11 = pcVar10;
  FUN_100c8bb00();
  func_0x000107c4bf74(uVar19);
  func_0x000107c615e8(uVar19);
  func_0x000107c61170();
  func_0x0001005e3364();
  if (*pcVar11 == '\x01') {
    puVar14 = PTR_PTR_1126b1600;
    func_0x000107c61168();
    func_0x000107c5aa18();
    func_0x000107c61180();
    if (puVar14 != (undefined *)0x0) {
      pcVar11 = pcVar10;
      func_0x0001040b413c(pcVar10);
      func_0x000107c4bcd4(puVar14);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(pcVar11);
    }
  }
  FUN_100c8df54(pcVar10);
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    cVar4 = param_1[0x6a];
    cVar5 = param_1[0x68];
    cVar6 = param_1[0x69];
    func_0x000100083b20(auStack_1a0);
    puVar15 = auStack_1a0;
    func_0x0001000a8868();
    lVar16 = *(long *)(pcVar10 + 0x10);
    puStack_208 = puVar15;
    func_0x0001005a8a60();
    func_0x000107c61180();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100c89f90);
      (*pcVar8)();
    }
    uVar19 = 0x30;
    if (cVar5 != '\0') {
      uVar19 = 0x31;
    }
    uVar1 = 0x30;
    if (cVar4 != '\0') {
      uVar1 = 0x31;
    }
    uVar2 = 0x30;
    if (cVar6 != '\0') {
      uVar2 = 0x31;
    }
    lVar17 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
    uStack_1e8 = 1;
    uStack_1d8 = 0xe100000000000000;
    uStack_1c8 = 0xe100000000000000;
    uStack_1b8 = 0xe100000000000000;
    uStack_1e0 = uVar2;
    uStack_1d0 = uVar1;
    uStack_1c0 = uVar19;
    lStack_1b0 = lVar17;
    (**(code **)(lStack_180 + 8))
              (&uStack_1e8,&UNK_110743690,&PTR_DAT_110743608,uStack_188,lStack_180);
    func_0x000100c950b8(&uStack_1e8);
    func_0x0001000834e4(auStack_1a0);
  }
  FUN_100c950ec(pcVar10);
  func_0x000107c61574(pcVar10);
  return;
}



/* Entry: 100c89f90; end: 100c89faf;  */

void FUN_100c89f90(void)

{
  func_0x000107c61168(&PTR_PTR_11305f820);
  return;
}



/* Entry: 100c89fb0; end: 100c89fcb;  */

undefined * FUN_100c89fb0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x11305f7d0);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      (*(code *)&SUB_100086a50)();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6874);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6878);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 100c89fcc; end: 100c8a36b;  */

undefined * FUN_100c89fcc(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *unaff_x20;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  unaff_x20[0x28] = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  unaff_x20[0x38] = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xbff0000000000000;
  *(undefined8 *)(unaff_x20 + 0x6c) = 0;
  *(undefined8 *)(unaff_x20 + 100) = 0;
  *(undefined8 *)(unaff_x20 + 0x7c) = 0;
  *(undefined8 *)(unaff_x20 + 0x74) = 0;
  unaff_x20[0x84] = 1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  unaff_x20[0xa8] = 1;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100c89fb0();
  *(undefined **)(unaff_x20 + 0xb0) = puVar7;
  puVar7 = puVar15;
  func_0x0001000c6878();
  *(undefined **)(unaff_x20 + 0xb8) = puVar7;
  puVar7 = puVar15;
  FUN_100c8a36c();
  *(undefined **)(unaff_x20 + 0xc0) = puVar7;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  puVar7 = PTR_PTR_1126adc18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0xf0) = puVar7;
  func_0x0001000c6894();
  *(undefined **)(unaff_x20 + 0xf8) = puVar15;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  unaff_x20[0x108] = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = *(undefined8 *)(param_1 + 0x58);
  unaff_x20[0x108] = *(undefined1 *)(param_1 + 0x6b);
  cVar9 = *(char *)(param_1 + 0xb8);
  if (cVar9 == -4) {
    cVar9 = '\x02';
    uVar12 = 3;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0xb0);
  }
  *(undefined8 *)(unaff_x20 + 0x58) = uVar12;
  unaff_x20[0x60] = cVar9;
  uVar3 = *(undefined1 *)(param_1 + 200);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(param_1 + 0xc0);
  unaff_x20[0x38] = uVar3;
  *(undefined8 *)(unaff_x20 + 0x10) =
       *(undefined8 *)(&UNK_10dcd4ca0 + (ulong)*(byte *)(param_1 + 0x11) * 8);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(param_1 + 0x70,auStack_80,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(param_1 + 0x70);
  unaff_x20[0x28] = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0xec);
  uVar12 = *(undefined8 *)(param_1 + 0xcc);
  uVar22 = *(undefined8 *)(param_1 + 0xe4);
  uVar14 = *(undefined8 *)(param_1 + 0xdc);
  *(undefined8 *)(unaff_x20 + 0x6c) = *(undefined8 *)(param_1 + 0xd4);
  *(undefined8 *)(unaff_x20 + 100) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x7c) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x74) = uVar14;
  unaff_x20[0x84] = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar14;
  unaff_x20[0xa8] = uVar3;
  lVar17 = *(long *)(param_1 + 0x90);
  func_0x0001000285a8(0x11305f7c0,&UNK_10dcd4ba8);
  lVar8 = lVar17;
  func_0x000107c6048c();
  uVar13 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(lVar17 + 0x40);
  func_0x000107c61434(lVar17);
  lVar21 = 0;
  if (uVar20 == 0) goto LAB_100c8a1ec;
  do {
    uVar10 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar20 = uVar20 - 1 & uVar20;
    while( true ) {
      uVar10 = LZCOUNT(uVar10);
      uVar19 = uVar10 | lVar21 << 6;
      uVar16 = *(ulong *)(*(long *)(lVar17 + 0x38) + uVar19 * 8);
      uVar12 = *(undefined8 *)(*(long *)(lVar17 + 0x30) + uVar19 * 8);
      uStack_88 = 0;
      func_0x000107c6109c(&uStack_88);
      if (uStack_88._4_4_ == 0) {
        uVar11 = 0;
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar16;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uStack_88 & 0xffffffff;
        if (SUB168(auVar4 * auVar5,8) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8a368);
          (*pcVar6)();
        }
        uVar11 = 0;
        if ((ulong)uStack_88._4_4_ * 1000 != 0) {
          uVar11 = (uVar16 * (uStack_88 & 0xffffffff)) / ((ulong)uStack_88._4_4_ * 1000);
        }
      }
      uVar16 = (uVar10 & 0xffffffffffffffc0 | lVar21 << 6) >> 3;
      *(ulong *)(lVar8 + 0x40 + uVar16) = *(ulong *)(lVar8 + 0x40 + uVar16) | 1L << (uVar10 & 0x3f);
      *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar19 * 8) = uVar12;
      *(ulong *)(*(long *)(lVar8 + 0x38) + uVar19 * 8) = uVar11;
      if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8a364);
        (*pcVar6)();
      }
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
      if (uVar20 != 0) break;
LAB_100c8a1ec:
      do {
        lVar1 = lVar21 + 1;
        if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8a360);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar1) {
          func_0x000107c6142c(lVar17);
          uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
          *(long *)(unaff_x20 + 0xc0) = lVar8;
          func_0x000107c6142c(uVar12);
          FUN_100c8a388(param_1);
          uVar12 = *(undefined8 *)(unaff_x20 + 0xf8);
          *(undefined8 *)(unaff_x20 + 0xf8) = *(undefined8 *)(param_1 + 0xa8);
          func_0x000107c61434();
          func_0x000107c6142c(uVar12);
          FUN_100c8aba8(param_1);
          uVar14 = *(undefined8 *)(param_1 + 0xb0);
          cVar9 = *(char *)(param_1 + 0xb8);
          func_0x000107c61574();
          uVar12 = 3;
          if (cVar9 != -4) {
            uVar12 = uVar14;
          }
          cVar2 = '\x02';
          if (cVar9 != -4) {
            cVar2 = cVar9;
          }
          *(undefined8 *)(unaff_x20 + 0x58) = uVar12;
          unaff_x20[0x60] = cVar2;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return unaff_x20;
          }
          func_0x000107c60e78();
          uVar20 = 0;
          puVar15 = *(undefined **)(param_1 + 0x10);
          puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          if (puVar15 != (undefined *)0x0) {
            func_0x0001000285a8(0x11305f7c0);
            puVar7 = puVar15;
            func_0x000107c60498();
            puVar18 = (undefined8 *)(param_1 + 0x28);
            do {
              uVar13 = puVar18[-1];
              uVar12 = *puVar18;
              uVar10 = uVar13;
              (*(code *)&UNK_1040b7fe4)();
              if ((uVar20 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c6874);
                (*pcVar6)();
              }
              uVar16 = uVar10 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(puVar7 + uVar16 + 0x40) =
                   *(ulong *)(puVar7 + uVar16 + 0x40) | 1L << (uVar10 & 0x3f);
              *(ulong *)(*(long *)(puVar7 + 0x30) + uVar10 * 8) = uVar13;
              *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar10 * 8) = uVar12;
              if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c6878);
                (*pcVar6)();
              }
              puVar18 = puVar18 + 2;
              *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
              puVar15 = puVar15 + -1;
            } while (puVar15 != (undefined *)0x0);
          }
          return puVar7;
        }
        uVar20 = ((ulong *)(lVar17 + 0x40))[lVar1];
        lVar21 = lVar21 + 1;
      } while (uVar20 == 0);
      uVar10 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar21 = lVar1;
    }
  } while( true );
}



/* Entry: 100c8a36c; end: 100c8a387;  */

undefined * FUN_100c8a36c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x11305f7c0);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      (*(code *)&UNK_1040b7fe4)();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6874);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c6878);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 100c8a388; end: 100c8a47f;  */

void FUN_100c8a388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  func_0x000107c5561c(uVar2,param_2,*(undefined1 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0xec) != '\x01') {
    puVar1 = PTR_PTR_1126adc20;
    func_0x000107c610f8(PTR_PTR_1126adc20);
    func_0x000107c453e4();
    func_0x000107c53924();
    func_0x000107c571b0(puVar1);
    func_0x000107c571a0(puVar1);
    func_0x000107c53a38(puVar1);
    func_0x000107c56180(puVar1);
    func_0x000107c5a198(puVar1);
    func_0x000107c59c24(uVar2);
    func_0x000107c61170(puVar1);
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c193030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setDyldPageInCount__112642628,(long)*(int *)(param_1 + 0x24));
  return;
}



/* Entry: 100c8a480; end: 100c8a4d3; -[SCAIosPlatformInfo setIsDyldClosuresEnabled:] */

void FUN_100c8a480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff58f8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8a4d4; end: 100c8a567; -[SCATaskEventsInfo setContextSwitchCount:] */

void FUN_100c8a4d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fbf778,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8a568; end: 100c8a56b;  */

void FUN_100c8a568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c8a56c; end: 100c8a5c3;  */

void FUN_100c8a56c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c8a5c4; end: 100c8a82f;  */

void FUN_100c8a5c4(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  long *unaff_x20;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar3 = (ulong *)(param_1 + 0x38);
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar3;
  func_0x000107c61434();
  lVar4 = 0;
  lVar5 = lVar4;
  while( true ) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      func_0x0001040be700();
      lVar5 = lVar4;
    }
    bVar2 = SCARRY8(lVar4,1);
    lVar4 = lVar4 + 1;
    if (bVar2) break;
    if ((long)(0x3f - uVar6 >> 6) <= lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar3,~uVar6,lVar5,0);
      return;
    }
    uVar7 = puVar3[lVar4];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8a6ac);
  (*pcVar1)();
}



/* Entry: 100c8a830; end: 100c8a967;  */

undefined * FUN_100c8a830(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
    puVar2 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar4 + uVar3 * 8) == (int)uVar10) goto LAB_100c8a8b4;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8a968);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_100c8a8b4:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 100c8a968; end: 100c8a9bb; -[SCATaskEventsInfo setPageInCount:] */

void FUN_100c8a968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024a38,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8a9bc; end: 100c8aa0f; -[SCATaskEventsInfo setPageFaultCount:] */

void FUN_100c8a9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024a18,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8aa10; end: 100c8aa63; -[SCATaskEventsInfo setCowFaultCount:] */

void FUN_100c8aa10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_1110249d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8aa64; end: 100c8aab7; -[SCATaskEventsInfo setMachSysCallCount:] */

void FUN_100c8aa64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_1110249f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8aab8; end: 100c8ab0b; -[SCATaskEventsInfo setUnixSysCallCount:] */

void FUN_100c8aab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024a58,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8ab0c; end: 100c8ab53; -[SCAIosPlatformInfo setTaskEventsInfo:] */

void FUN_100c8ab0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c40794(param_3);
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9858,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c8ab54; end: 100c8aba7; -[SCAIosPlatformInfo setDyldPageInCount:] */

void FUN_100c8ab54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110ff5918,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c8aba8; end: 100c8b58f;  */

/* WARNING: Removing unreachable block (ram,0x000100c8b57c) */

void FUN_100c8aba8(ulong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(unaff_x20 + 0xb8,auStack_88,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar12;
  func_0x000107c61434(uVar12);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x70,auStack_a0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c61428(unaff_x20 + 0xb8,&uStack_e0,0x21,0);
  func_0x000107c61434(uVar16);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xb8);
  func_0x000107c61558(uVar12);
  auStack_b8[0] = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0x8000000000000000;
  FUN_100c8b590(uVar16,0x100c8b7c8,0,uVar12,auStack_b8,&UNK_100086c38,&UNK_10008989c);
  *(undefined8 *)(unaff_x20 + 0xb8) = auStack_b8[0];
  func_0x000107c614a8(&uStack_e0);
  lVar19 = *(long *)(param_1 + 0x50);
  func_0x0001000285a8(0x11305f7d0,&UNK_10dcd4c90);
  lVar15 = lVar19;
  func_0x000107c6048c();
  uVar11 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar19 + 0x40);
  func_0x000107c61434(lVar19);
  lVar18 = 0;
  if (uVar17 == 0) goto LAB_100c8ad34;
  do {
    uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar17 = uVar17 - 1 & uVar17;
    while( true ) {
      uVar9 = LZCOUNT(uVar9);
      uVar13 = uVar9 | lVar18 << 6;
      uVar14 = *(ulong *)(*(long *)(lVar19 + 0x38) + uVar13 * 8);
      uVar12 = *(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar13 * 8);
      uStack_e0 = 0;
      func_0x000107c6109c(&uStack_e0);
      if (uStack_e0._4_4_ == 0) {
        uVar10 = 0;
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar14;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uStack_e0 & 0xffffffff;
        if (SUB168(auVar2 * auVar4,8) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b560);
          (*pcVar6)();
        }
        uVar10 = 0;
        if ((ulong)uStack_e0._4_4_ * 1000 != 0) {
          uVar10 = (uVar14 * (uStack_e0 & 0xffffffff)) / ((ulong)uStack_e0._4_4_ * 1000);
        }
      }
      uVar14 = (uVar9 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
      *(ulong *)(lVar15 + 0x40 + uVar14) = *(ulong *)(lVar15 + 0x40 + uVar14) | 1L << (uVar9 & 0x3f)
      ;
      *(undefined8 *)(*(long *)(lVar15 + 0x30) + uVar13 * 8) = uVar12;
      *(ulong *)(*(long *)(lVar15 + 0x38) + uVar13 * 8) = uVar10;
      if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b558);
        (*pcVar6)();
      }
      *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      if (uVar17 != 0) break;
LAB_100c8ad34:
      do {
        lVar7 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b504);
          (*pcVar6)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar7) {
          func_0x000107c6142c(lVar19);
          func_0x000107c61428(unaff_x20 + 0xb0,auStack_b8,1,0);
          uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
          *(long *)(unaff_x20 + 0xb0) = lVar15;
          func_0x000107c6142c(uVar12);
          lVar19 = *(long *)(param_1 + 0x98);
          lVar15 = lVar19;
          func_0x000107c6048c();
          uVar11 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
            uVar17 = ~(-1L << (uVar11 & 0x3f));
          }
          uVar17 = uVar17 & *(ulong *)(lVar19 + 0x40);
          func_0x000107c61434(lVar19);
          lVar18 = 0;
          goto joined_r0x000100c8ae74;
        }
        uVar17 = ((ulong *)(lVar19 + 0x40))[lVar7];
        lVar18 = lVar18 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar18 = lVar7;
    }
  } while( true );
joined_r0x000100c8ae74:
  if (uVar17 == 0) {
    do {
      lVar7 = lVar18 + 1;
      if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b508);
        (*pcVar6)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar7) {
        func_0x000107c6142c(lVar19);
        func_0x000107c61428(unaff_x20 + 0xb0,&uStack_e0,0x21,0);
        uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
        func_0x000107c61558(uVar12);
        auStack_f8[0] = *(undefined8 *)(unaff_x20 + 0xb0);
        *(undefined8 *)(unaff_x20 + 0xb0) = 0x8000000000000000;
        uVar17 = 0;
        FUN_100c8b590(lVar15,0x100c8b7d8,0,uVar12,auStack_f8,&UNK_1040b7f58,&UNK_1040b7f44);
        *(undefined8 *)(unaff_x20 + 0xb0) = auStack_f8[0];
        func_0x000107c614a8(&uStack_e0);
        lVar15 = *(long *)(param_1 + 0x50);
        if (*(long *)(lVar15 + 0x10) != 0) {
          lVar19 = 0x37;
          func_0x000100086a50();
          if ((uVar17 & 1) != 0) {
            lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + lVar19 * 8);
            puVar8 = &uStack_e0;
            func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
            lVar15 = *(long *)(unaff_x20 + 0xb0);
            if (*(long *)(lVar15 + 0x10) != 0) {
              lVar18 = 0x55;
              func_0x000100086a50();
              if (((ulong)puVar8 & 1) != 0) {
                lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + lVar18 * 8);
                func_0x000107c614a8(&uStack_e0);
                puVar8 = &uStack_e0;
                func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
                lVar18 = *(long *)(unaff_x20 + 0xb0);
                if (*(long *)(lVar18 + 0x10) != 0) {
                  lVar7 = 0x2f;
                  func_0x000100086a50();
                  if (((ulong)puVar8 & 1) != 0) {
                    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + lVar7 * 8);
                    func_0x000107c614a8(&uStack_e0);
                    if (lVar19 < 0) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b568);
                      (*pcVar6)();
                    }
                    lVar7 = lVar18 - lVar15;
                    if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b56c);
                      (*pcVar6)();
                    }
                    if (SCARRY8(lVar19,lVar7)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b570);
                      (*pcVar6)();
                    }
                    func_0x000107c61428(unaff_x20 + 0xb0,&uStack_e0,0x21,0);
                    uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
                    func_0x000107c61558(uVar12);
                    auStack_f8[0] = *(undefined8 *)(unaff_x20 + 0xb0);
                    *(undefined8 *)(unaff_x20 + 0xb0) = 0x8000000000000000;
                    func_0x000100c8b7dc(lVar19 + lVar7,0x37,uVar12);
                    *(undefined8 *)(unaff_x20 + 0xb0) = auStack_f8[0];
                  }
                }
              }
            }
            func_0x000107c614a8(&uStack_e0);
          }
        }
        lVar15 = *(long *)(param_1 + 0x80);
        if ((lVar15 != 0) && ((*(byte *)(param_1 + 0x88) & 1) == 0)) {
          FUN_100c8b7f8();
          func_0x000107c61428(unaff_x20 + 0xb0,&uStack_e0,0x21,0);
          uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
          func_0x000107c61558(uVar12);
          auStack_f8[0] = *(undefined8 *)(unaff_x20 + 0xb0);
          *(undefined8 *)(unaff_x20 + 0xb0) = 0x8000000000000000;
          func_0x000100c8b7dc(lVar15,1,uVar12);
          *(undefined8 *)(unaff_x20 + 0xb0) = auStack_f8[0];
          func_0x000107c614a8(&uStack_e0);
        }
        uVar17 = param_1;
        FUN_100c8b888();
        if ((long)uVar17 < 1) {
          if (*(byte *)(param_1 + 0xb8) < 0xfc) goto LAB_100c8b51c;
          uVar12 = 4;
LAB_100c8b2d4:
          *(undefined8 *)(param_1 + 0xb0) = uVar12;
          *(undefined1 *)(param_1 + 0xb8) = 2;
          goto LAB_100c8b51c;
        }
        bVar1 = *(byte *)(param_1 + 0xb8);
        if (bVar1 < 0xfe) {
          if (bVar1 == 0xfc) {
            uVar12 = 3;
            goto LAB_100c8b2d4;
          }
          if (bVar1 != 0xfd) goto LAB_100c8b51c;
          puVar8 = &uStack_e0;
          func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
          lVar15 = *(long *)(unaff_x20 + 0xb0);
          if (*(long *)(lVar15 + 0x10) != 0) {
            lVar19 = 0x3b;
            func_0x000100086a50();
            if (((ulong)puVar8 & 1) != 0) {
              lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + lVar19 * 8);
              func_0x000107c614a8(&uStack_e0);
              goto LAB_100c8b308;
            }
          }
          func_0x000107c614a8(&uStack_e0);
          uVar12 = 3;
LAB_100c8b514:
          *(undefined8 *)(param_1 + 0xb0) = uVar12;
        }
        else {
          if (bVar1 == 0xfe) {
            lVar15 = *(long *)(param_1 + 0x80);
            if ((lVar15 != 0) && (*(char *)(param_1 + 0x88) == '\x01')) {
              FUN_100c8b7f8(lVar15);
LAB_100c8b308:
              func_0x000107c61428(unaff_x20 + 0xb0,&uStack_e0,0x21,0);
              uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
              func_0x000107c61558(uVar12);
              auStack_f8[0] = *(undefined8 *)(unaff_x20 + 0xb0);
              *(undefined8 *)(unaff_x20 + 0xb0) = 0x8000000000000000;
              uVar16 = 0xf;
LAB_100c8b344:
              func_0x000100c8b7dc(lVar15,uVar16,uVar12);
              *(undefined8 *)(unaff_x20 + 0xb0) = auStack_f8[0];
              func_0x000107c614a8(&uStack_e0);
              uVar11 = param_1;
              FUN_100c8b9d0();
              if ((long)uVar11 < 1) {
                if (*(byte *)(param_1 + 0xb8) < 0xfc) goto LAB_100c8b51c;
                uVar12 = 5;
              }
              else {
                if (uVar17 <= uVar11 && uVar11 - uVar17 != 0) {
                  *(double *)(unaff_x20 + 0x40) = (double)(uVar11 - uVar17) / 1000.0;
                  puVar8 = &uStack_e0;
                  func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
                  lVar15 = *(long *)(unaff_x20 + 0xb0);
                  if (*(long *)(lVar15 + 0x10) != 0) {
                    lVar19 = 0x3f;
                    func_0x000100086a50();
                    if (((ulong)puVar8 & 1) != 0) {
                      lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + lVar19 * 8);
                      func_0x000107c614a8(&uStack_e0);
                      if (lVar15 < (long)uVar17) goto LAB_100c8b51c;
                      *(ulong *)(unaff_x20 + 0x48) = lVar15 - uVar17;
                      puVar8 = &uStack_e0;
                      func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
                      lVar19 = *(long *)(unaff_x20 + 0xb0);
                      if (*(long *)(lVar19 + 0x10) != 0) {
                        lVar18 = 1;
                        func_0x000100086a50();
                        if (((ulong)puVar8 & 1) != 0) {
                          lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + lVar18 * 8);
                          func_0x000107c614a8(&uStack_e0);
                          if (((lVar15 <= lVar19) &&
                              (*(long *)(unaff_x20 + 0x50) = lVar19 - lVar15,
                              *(char *)(unaff_x20 + 0x28) != '\x01')) &&
                             (*(long *)(unaff_x20 + 0x20) == 0x67)) {
                            uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
                            uVar11 = 0;
                            func_0x0001040b3738();
                            uVar17 = uVar11;
                            func_0x000107c613fc();
                            *(undefined8 *)(uVar17 + 0x10) = uVar12;
                            *(long *)(uVar17 + 0x18) = lVar15;
                            *(long *)(uVar17 + 0x20) = lVar19;
                            *(undefined8 *)(uVar17 + 0x28) = 0;
                            ppuStack_c0 = &PTR_DAT_110743550;
                            uStack_e0 = uVar17;
                            uStack_c8 = uVar11;
                            func_0x000107c61428(unaff_x20 + 200,auStack_f8,0x21,0);
                            func_0x000107c61434(uVar12);
                            func_0x0001040b55ac(&uStack_e0,unaff_x20 + 200);
                            func_0x000107c614a8(auStack_f8);
                          }
                          goto LAB_100c8b51c;
                        }
                      }
                    }
                  }
                  func_0x000107c614a8(&uStack_e0);
                  goto LAB_100c8b51c;
                }
                uVar12 = 6;
              }
              goto LAB_100c8b2d4;
            }
            uVar12 = 4;
            goto LAB_100c8b514;
          }
          if (bVar1 != 0xff) goto LAB_100c8b51c;
          puVar8 = &uStack_e0;
          func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
          lVar15 = *(long *)(unaff_x20 + 0xb0);
          if (*(long *)(lVar15 + 0x10) != 0) {
            lVar19 = 2;
            func_0x000100086a50();
            if (((ulong)puVar8 & 1) != 0) {
              lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + lVar19 * 8);
              func_0x000107c614a8(&uStack_e0);
              puVar8 = &uStack_e0;
              func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
              lVar15 = *(long *)(unaff_x20 + 0xb0);
              if (*(long *)(lVar15 + 0x10) != 0) {
                lVar18 = 0x41;
                func_0x000100086a50();
                if (((ulong)puVar8 & 1) != 0) {
                  lVar18 = *(long *)(*(long *)(lVar15 + 0x38) + lVar18 * 8);
                  func_0x000107c614a8(&uStack_e0);
                  puVar8 = &uStack_e0;
                  func_0x000107c61428(unaff_x20 + 0xb0,puVar8,0x20,0);
                  lVar15 = *(long *)(unaff_x20 + 0xb0);
                  if (*(long *)(lVar15 + 0x10) != 0) {
                    lVar7 = 1;
                    func_0x000100086a50();
                    if (((ulong)puVar8 & 1) != 0) {
                      lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + lVar7 * 8);
                      func_0x000107c614a8(&uStack_e0);
                      if (lVar18 <= lVar19) {
                        lVar18 = lVar19;
                      }
                      if (lVar15 <= lVar18) {
                        lVar15 = lVar18;
                      }
                      func_0x000107c61428(unaff_x20 + 0xb0,&uStack_e0,0x21,0);
                      uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
                      func_0x000107c61558(uVar12);
                      auStack_f8[0] = *(undefined8 *)(unaff_x20 + 0xb0);
                      *(undefined8 *)(unaff_x20 + 0xb0) = 0x8000000000000000;
                      uVar16 = 0;
                      goto LAB_100c8b344;
                    }
                  }
                  func_0x000107c614a8(&uStack_e0);
                  uVar12 = 2;
                  goto LAB_100c8b514;
                }
              }
              func_0x000107c614a8(&uStack_e0);
              uVar12 = 1;
              goto LAB_100c8b514;
            }
          }
          func_0x000107c614a8(&uStack_e0);
          *(undefined8 *)(param_1 + 0xb0) = 0;
        }
        *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_100c8b51c:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
          func_0x000107c60e78();
          func_0x000107c614ac(0);
          func_0x000107c614a8(&uStack_e0);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b590);
          (*pcVar6)();
        }
        return;
      }
      uVar17 = ((ulong *)(lVar19 + 0x40))[lVar7];
      lVar18 = lVar18 + 1;
    } while (uVar17 == 0);
    uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar17 = uVar17 - 1 & uVar17;
  }
  else {
    uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar17 = uVar17 - 1 & uVar17;
    lVar7 = lVar18;
  }
  uVar9 = LZCOUNT(uVar9);
  uVar13 = uVar9 | lVar7 << 6;
  uVar14 = *(ulong *)(*(long *)(lVar19 + 0x38) + uVar13 * 8);
  uVar12 = *(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar13 * 8);
  uStack_e0 = 0;
  func_0x000107c6109c(&uStack_e0);
  if (uStack_e0._4_4_ == 0) {
    uVar10 = 0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_e0 & 0xffffffff;
    if (SUB168(auVar3 * auVar5,8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b564);
      (*pcVar6)();
    }
    uVar10 = 0;
    if ((ulong)uStack_e0._4_4_ * 1000 != 0) {
      uVar10 = (uVar14 * (uStack_e0 & 0xffffffff)) / ((ulong)uStack_e0._4_4_ * 1000);
    }
  }
  uVar14 = (uVar9 & 0xffffffffffffffc0 | lVar7 << 6) >> 3;
  *(ulong *)(lVar15 + 0x40 + uVar14) = *(ulong *)(lVar15 + 0x40 + uVar14) | 1L << (uVar9 & 0x3f);
  *(undefined8 *)(*(long *)(lVar15 + 0x30) + uVar13 * 8) = uVar12;
  *(ulong *)(*(long *)(lVar15 + 0x38) + uVar13 * 8) = uVar10;
  if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100c8b55c);
    (*pcVar6)();
  }
  *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
  lVar18 = lVar7;
  goto joined_r0x000100c8ae74;
}



/* Entry: 100c8b590; end: 100c8b7c7;  */

void FUN_100c8b590(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5,
                  code *param_6,code *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  pcVar2 = param_2;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar11 = 0;
  while( true ) {
    while (uVar12 != 0) {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = lVar11 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3;
      uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar6);
      uStack_68 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6);
      (*param_2)(&uStack_80,&uStack_70);
      uVar1 = uStack_78;
      uVar6 = uStack_80;
      lVar10 = *param_5;
      uVar4 = uStack_80;
      func_0x000100086a50();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar9 = (ulong)~(uint)pcVar2 & 1;
      if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8b7b4);
        (*pcVar2)();
      }
      if (*(long *)(lVar10 + 0x18) < (long)(lVar7 + uVar9)) {
        pcVar5 = (code *)(ulong)(param_4 & 1);
        (*param_6)();
        uVar4 = uVar6;
        func_0x000100086a50();
        if (((uint)pcVar2 & 1) != ((uint)pcVar5 & 1)) {
          func_0x000100086eb8(0);
          func_0x000107c60624();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8b7c8);
          (*pcVar2)();
        }
      }
      else {
        pcVar5 = pcVar2;
        if ((param_4 & 1) == 0) {
          (*param_7)();
        }
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar7 = *param_5;
      if (((ulong)pcVar2 & 1) == 0) {
        lVar10 = lVar7 + (uVar4 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
        *(ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 8) = uVar6;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 8) = uVar1;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8b7b8);
          (*pcVar2)();
        }
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      }
      else {
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 8) = uVar1;
      }
      param_4 = 1;
      pcVar2 = pcVar5;
    }
    bVar3 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c8b7b0);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar11) break;
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar11];
  }
  func_0x000107c61578(param_3,2);
  func_0x000107c6142c(param_1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 100c8b7c8; end: 100c8b7f7;  */

void FUN_100c8b7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 100c8b7f8; end: 100c8b887;  */

ulong FUN_100c8b7f8(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0;
  func_0x000107c6109c(&uStack_30);
  if (uStack_30._4_4_ == 0) {
    uVar4 = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_30 & 0xffffffff;
    if (SUB168(auVar1 * auVar2,8) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c8b884);
      (*pcVar3)();
    }
    uVar4 = 0;
    if ((ulong)uStack_30._4_4_ * 1000 != 0) {
      uVar4 = (param_1 * (uStack_30 & 0xffffffff)) / ((ulong)uStack_30._4_4_ * 1000);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar4;
  }
  func_0x000107c60e78();
  if (0 < (long)*(ulong *)(uVar4 + 0x60)) {
    return *(ulong *)(uVar4 + 0x60);
  }
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 - 6U < 2) {
    uVar8 = 0;
    uVar9 = 5;
  }
  else if (lVar7 == 5) {
    uVar8 = 0;
    uVar9 = 6;
  }
  else if (lVar7 == 4) {
    puVar6 = auStack_78;
    func_0x000107c61428(unaff_x20 + 0xb0,puVar6,0x20,0);
    if ((*(long *)(*(long *)(unaff_x20 + 0xb0) + 0x10) == 0) ||
       (func_0x000100086a50(0x2f), ((ulong)puVar6 & 1) == 0)) {
      func_0x000107c614a8(auStack_78);
      uVar8 = 0;
      uVar9 = 6;
    }
    else {
      func_0x000107c614a8(auStack_78);
      puVar6 = auStack_78;
      func_0x000107c61428(unaff_x20 + 0xb0,puVar6,0x20,0);
      lVar7 = *(long *)(unaff_x20 + 0xb0);
      if (*(long *)(lVar7 + 0x10) != 0) {
        lVar5 = 0x37;
        func_0x000100086a50();
        if (((ulong)puVar6 & 1) != 0) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + lVar5 * 8);
          func_0x000107c614a8(auStack_78);
          uVar9 = 7;
          if (0 < lVar7) {
            uVar9 = 4;
          }
          uVar8 = 0;
          if (0 < lVar7) {
            uVar8 = 2;
          }
          goto LAB_100c8b9ac;
        }
      }
      func_0x000107c614a8(auStack_78);
      uVar8 = 0;
      uVar9 = 7;
    }
  }
  else {
    uVar9 = 2;
    uVar8 = 2;
  }
LAB_100c8b9ac:
  *(undefined8 *)(uVar4 + 0xb0) = uVar9;
  *(undefined1 *)(uVar4 + 0xb8) = uVar8;
  return 0;
}



/* Entry: 100c8b888; end: 100c8b9cf;  */

long FUN_100c8b888(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (0 < *(long *)(param_1 + 0x60)) {
    return *(long *)(param_1 + 0x60);
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 - 6U < 2) {
    uVar4 = 0;
    uVar5 = 5;
  }
  else if (lVar3 == 5) {
    uVar4 = 0;
    uVar5 = 6;
  }
  else if (lVar3 == 4) {
    puVar2 = auStack_48;
    func_0x000107c61428(unaff_x20 + 0xb0,puVar2,0x20,0);
    if ((*(long *)(*(long *)(unaff_x20 + 0xb0) + 0x10) == 0) ||
       (func_0x000100086a50(0x2f), ((ulong)puVar2 & 1) == 0)) {
      func_0x000107c614a8(auStack_48);
      uVar4 = 0;
      uVar5 = 6;
    }
    else {
      func_0x000107c614a8(auStack_48);
      puVar2 = auStack_48;
      func_0x000107c61428(unaff_x20 + 0xb0,puVar2,0x20,0);
      lVar3 = *(long *)(unaff_x20 + 0xb0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        lVar1 = 0x37;
        func_0x000100086a50();
        if (((ulong)puVar2 & 1) != 0) {
          lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
          func_0x000107c614a8(auStack_48);
          uVar5 = 7;
          if (0 < lVar3) {
            uVar5 = 4;
          }
          uVar4 = 0;
          if (0 < lVar3) {
            uVar4 = 2;
          }
          goto LAB_100c8b9ac;
        }
      }
      func_0x000107c614a8(auStack_48);
      uVar4 = 0;
      uVar5 = 7;
    }
  }
  else {
    uVar5 = 2;
    uVar4 = 2;
  }
LAB_100c8b9ac:
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined1 *)(param_1 + 0xb8) = uVar4;
  return 0;
}



/* Entry: 100c8b9d0; end: 100c8babf;  */

undefined8 FUN_100c8b9d0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_38 [24];
  
  if (*(byte *)(unaff_x20 + 0x60) - 0xfd < 2) {
    puVar2 = auStack_38;
    func_0x000107c61428(unaff_x20 + 0xb0,puVar2,0x20,0);
    lVar4 = *(long *)(unaff_x20 + 0xb0);
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar1 = 0xf;
      func_0x000100086a50();
      if (((ulong)puVar2 & 1) != 0) {
LAB_100c8ba68:
        uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
        func_0x000107c614a8(auStack_38);
        return uVar3;
      }
    }
    func_0x000107c614a8(auStack_38);
    uVar3 = 8;
  }
  else {
    if (*(byte *)(unaff_x20 + 0x60) != 0xff) {
      *(undefined8 *)(param_1 + 0xb0) = 3;
      *(undefined1 *)(param_1 + 0xb8) = 2;
      return 0;
    }
    puVar2 = auStack_38;
    func_0x000107c61428(unaff_x20 + 0xb0,puVar2,0x20,0);
    lVar4 = *(long *)(unaff_x20 + 0xb0);
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar1 = 0;
      func_0x000100086a50();
      if (((ulong)puVar2 & 1) != 0) goto LAB_100c8ba68;
    }
    func_0x000107c614a8(auStack_38);
    uVar3 = 9;
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return 0;
}



/* Entry: 100c8bac0; end: 100c8baff;  */

undefined8 FUN_100c8bac0(void)

{
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,&UNK_1000285f8);
  }
  return 0x113813650;
}



/* Entry: 100c8bb00; end: 100c8be03;  */

undefined * FUN_100c8bb00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126adc08;
  func_0x000107c610f8(PTR_PTR_1126adc08);
  func_0x000107c453e4();
  func_0x000107c5983c();
  func_0x000107c59820(puVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar9 = 0;
    uVar2 = param_2;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000e48c0(uVar9);
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59838(puVar1);
  func_0x000107c61170(uVar9);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x0001000e48c0(uVar9);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c57e30(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c59850(puVar1);
  uVar8 = (ulong)*(byte *)(param_1 + 0x60);
  if (*(byte *)(param_1 + 0x60) < 0xfd) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x0001040b2854(uVar2);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
    func_0x000107c59834(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c55520(puVar1);
  puVar3 = PTR_PTR_1126adc10;
  func_0x000107c610f8(PTR_PTR_1126adc10);
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4a014();
  func_0x000107c61170(puVar4);
  func_0x000107c55710(puVar3);
  func_0x000107c5744c(puVar1);
  lVar5 = param_1;
  FUN_100c8c0d8(param_1);
  uVar2 = 0;
  FUN_100c8c768(0,0x11305f650,&PTR_PTR_1126adc00);
  lVar6 = lVar5;
  func_0x000107c5fc48(lVar5,uVar2);
  func_0x000107c6142c(lVar5);
  func_0x000107c54924(puVar1);
  func_0x000107c61170(lVar6);
  lVar5 = param_1;
  FUN_100c8c7f0(param_1);
  uVar2 = 0;
  FUN_100c8c768(0,0x11305f640,&PTR_PTR_1126e2bb0);
  lVar6 = lVar5;
  func_0x000107c5fc48(lVar5,uVar2);
  func_0x000107c6142c(lVar5);
  func_0x000107c548ec(puVar1);
  func_0x000107c61170(lVar6);
  FUN_100c8d2d4(param_1);
  uVar2 = 0;
  FUN_100c8c768(0,0x11305f630,&PTR_PTR_1126adbf8);
  lVar5 = param_1;
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c6142c(param_1);
  func_0x000107c57450(puVar1);
  func_0x000107c61170(lVar5);
  puVar4 = PTR_PTR_1126b2930;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c3ed14();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c570d8(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  return puVar1;
}


