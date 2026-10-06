/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003f07ec; end: 1003f08e7; -[SCAppUserLifecycleEventHandlerFactoryImpl initWithUserSessionContext:applicationLifecycleEvents:applicationStateProvider:startupInfoService:] */

undefined1 *
FUN_1003f07ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e8bd8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f08e8; end: 1003f091b; -[SCAppUserLifecycleEventHandlerFactoryImpl createAppUserLifecycleEventHandlerForSource:] */

void FUN_1003f08e8(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba110);
  func_0x000107c493c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003f091c; end: 1003f0a33; -[SCAppUserLifecycleEventHandlerV2 initWithUserSessionContext:applicationLifecycleEvents:applicationStateProvider:startupInfoService:] */

undefined1 *
FUN_1003f091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e8be0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f0a34; end: 1003f0a73;  */

void FUN_1003f0a34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b7a0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003f0a74; end: 1003f0cf3; -[SCFriendsFeedLoggingServicesEntryPoint _friendsFeedReadyLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f0a74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1054ea9a8;
  puStack_88 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112724c90;
    func_0x000107c61148(lVar7);
  }
  lVar2 = lVar7;
  func_0x000107c3fa04(lVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puVar3 = PTR_PTR_1126ba0c0;
  func_0x000107c61160(PTR_PTR_1126ba0c0);
  FUN_1003f0d68(param_1);
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ba0c8;
  func_0x000107c610f4(PTR_PTR_1126ba0c8);
  func_0x000107c4752c();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1003f0cf4; end: 1003f0d67; -[SCGrapheneFriendsFeedMetric2 init] */

undefined1 * FUN_1003f0cf4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1870;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003f0d68; end: 1003f0d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f0d68(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112724c8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003f0d8c; end: 1003f0e83;  */

undefined * FUN_1003f0d8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4d58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6f1f8,
                        &UNK_10dde4190,&UNK_10dde41c8,6,0x1003f2c98,0);
    do {
      if (puRam00000001136c4d58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001136c4d58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4d58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4d58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4d58;
}



/* Entry: 1003f0e84; end: 1003f1007; -[SCFriendsFeedReadyLogger initWithLogger:performer:graphene:grapheneLoggerV2:circumstanceEngine:startupInfoService:] */

undefined1 *
FUN_1003f0e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e8b70;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined8 *)((long)puVar1 + 0x100) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x108);
    *(undefined8 *)((long)puVar1 + 0x108) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x110) = 0;
    *(undefined1 *)((long)puVar1 + 0x118) = 0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x120);
    *(undefined8 *)((long)puVar1 + 0x120) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f1008; end: 1003f1507; -[SCAppUserLifecycleEventHandlerV2 beginObservingWithAppUserLifecycleEventObserver:] */

void FUN_1003f1008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61170(uVar2);
  func_0x000107c61144(auStack_80,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c41bd0(uVar3);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_100c1de24;
  puStack_90 = &UNK_110846510;
  func_0x000107c6111c(auStack_88,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5e370(uVar3);
  func_0x000107c61180();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1054edc60;
  puStack_b8 = &UNK_110846510;
  func_0x000107c6111c(auStack_b0,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c419f0(uVar3);
  func_0x000107c61180();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_100c782f4;
  puStack_e0 = &UNK_110846510;
  func_0x000107c6111c(auStack_d8,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5e39c(uVar3);
  func_0x000107c61180();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1054edc8c;
  puStack_108 = &UNK_110846510;
  func_0x000107c6111c(auStack_100,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c41b80(uVar3);
  func_0x000107c61180();
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_1054edcb8;
  puStack_130 = &UNK_110846510;
  func_0x000107c6111c(auStack_128,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5e3d8(uVar3);
  func_0x000107c61180();
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  puStack_160 = &UNK_1054edce4;
  puStack_158 = &UNK_110846510;
  func_0x000107c6111c(auStack_150,auStack_80);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1003f1524;
  puStack_180 = &UNK_110849200;
  func_0x000107c6111c(auStack_178,auStack_80);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  puStack_1b0 = &UNK_1054edd10;
  puStack_1a8 = &UNK_110892500;
  func_0x000107c6111c(auStack_1a0,auStack_80);
  func_0x000107c6111c(auStack_1c8,auStack_80);
  func_0x000107c4c6fc(uVar2);
  func_0x000107c61120(auStack_1c8);
  func_0x000107c61120(auStack_1a0);
  func_0x000107c61120(auStack_178);
  func_0x000107c61120(auStack_150);
  func_0x000107c61120(auStack_128);
  func_0x000107c61120(auStack_100);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003f1508; end: 1003f151b; -[SCApplicationLifecycleEventsImpl didFinishLaunching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f1508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091dc8));
  return;
}



/* Entry: 1003f151c; end: 1003f1523; -[SCBlizzardFrameStart clientReferenceTsMillis] */

undefined8 FUN_1003f151c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1003f1524; end: 1003f160f;  */

void FUN_1003f1524(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1003f1610; end: 1003f162f; +[SCBlizzardFrameConstants getFrameConnectivityType:] */

int FUN_1003f1610(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  func_0x0001003f1558();
  iVar1 = 0;
  if (param_3 < 4) {
    iVar1 = (int)param_3 + 1;
  }
  return iVar1;
}



/* Entry: 1003f1630; end: 1003f1683; -[SCAppUserLifecycleEventHandlerV2 _handleUserResumedAfterLaunchWithDataUnavailable:] */

void FUN_1003f1630(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1;
  FUN_100288f58();
  if ((int)lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x000107c4f2bc();
    if ((uVar2 & 1) != 0) {
      bVar1 = true;
      goto LAB_1003f1670;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c3dfc0(lVar3);
  bVar1 = lVar3 != 2;
LAB_1003f1670:
                    /* WARNING: Could not recover jumptable at 0x00010c0e76f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onUserResumed_didLaunchWithDataU_1126177d0,bVar1,
             param_3);
  return;
}



/* Entry: 1003f1684; end: 1003f16a3; -[SCFriendsFeedReadyLogger onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_1003f1684(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  if ((param_4 & 1) == 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bec0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoggingForStartupType__11258dae8,3)
      ;
      return;
    }
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  return;
}



/* Entry: 1003f16a4; end: 1003f170f; -[SCFriendsFeedReadyLogger _startLoggingForStartupType:] */

void FUN_1003f16a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6071c();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1003f26f8;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x18),param_3,&puStack_58);
  return;
}



/* Entry: 1003f1710; end: 1003f1763;  */

void FUN_1003f1710(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f1764; end: 1003f17b3;  */

void FUN_1003f1764(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003f17b4; end: 1003f21c3;  */

void FUN_1003f17b4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
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
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100234c68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = PTR_PTR_1126a86f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  uVar17 = uVar21;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar23 = 0xd000000000000013;
  uVar17 = uVar23;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = uVar23;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda00);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda20);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  lVar22 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda40);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uVar18);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  lVar19 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efcda60);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(uVar23);
  lVar20 = *(long *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcda80);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c3e740(uVar23);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f21bc);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x98) = lVar22;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar19 != 0) {
    *(long *)(param_2 + 0xa0) = lVar19;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar20 != 0) {
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar16);
      *(long *)(param_2 + 0xa8) = lVar20;
      *param_1 = param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f21c4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f21c0);
  (*pcVar1)();
}



/* Entry: 1003f21c4; end: 1003f2213;  */

void FUN_1003f21c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003f2214; end: 1003f221b;  */

void FUN_1003f2214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f2218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1003f221c; end: 1003f22b3;  */

void FUN_1003f221c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001d4270();
  func_0x000107c613fc();
  FUN_1003f22b4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003f22b4; end: 1003f2497;  */

void FUN_1003f22b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8638;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1003f2498; end: 1003f26f7; -[SCUserExtensionStorageServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f2498(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112727310;
    func_0x000107c61148();
  }
  lVar1 = lVar7;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c44424();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112727300);
  *(long *)(param_1 + _DAT_112727300) = lVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112727304);
  *(undefined **)(param_1 + _DAT_112727304) = puVar4;
  func_0x000107c61170(uVar6);
  func_0x000107c61144(auStack_58,param_1);
  lVar7 = param_1 + _DAT_11272730c;
  func_0x000107c61148(lVar7);
  lVar1 = lVar7;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c41b80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  lVar5 = lVar3;
  func_0x000107c5c320(lVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  puVar4 = PTR_PTR_1126bc8d8;
  param_1 = param_1 + _DAT_112727308;
  func_0x000107c61148(param_1);
  lVar7 = param_1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c5a9fc(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003f26f8; end: 1003f2817;  */

void FUN_1003f26f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x20) != 0) goto LAB_1003f27d4;
  func_0x000107c3c360();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 - 1U < 2) {
LAB_1003f27bc:
    dVar6 = *(double *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x120);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5bcb8();
    func_0x000107c61170(lVar2);
    if (lVar3 - 4U < 4) {
      lVar1 = *(long *)(&UNK_10ddb0e30 + (lVar3 - 4U) * 8);
    }
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x120);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5bcb4();
    func_0x000107c61170(uVar4);
    if ((long)uVar5 < 1) goto LAB_1003f27bc;
    dVar6 = (double)uVar5 / 1000000.0;
  }
  *(double *)(*(long *)(param_1 + 0x20) + 0x70) = dVar6;
  *(long *)(*(long *)(param_1 + 0x20) + 0x110) = lVar1;
  lVar1 = *(long *)(param_1 + 0x20);
LAB_1003f27d4:
  if (*(long *)(lVar1 + 0x40) == 0) {
    func_0x000107c3c388();
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(lVar1 + 0x58) == 0) {
    func_0x000107c3c370();
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 1;
  }
  return;
}



/* Entry: 1003f2818; end: 1003f28c3; -[SCFriendsFeedReadyLogger _resetFFLoggerState] */

void FUN_1003f2818(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



/* Entry: 1003f28c4; end: 1003f2923;  */

void FUN_1003f28c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  FUN_1003f2924();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5bcac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1003f2924; end: 1003f2947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f2924(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112724c94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003f2948; end: 1003f29b3; -[_TtC17SCGhostToSignaler15GhostToSignaler startupTime] */

undefined8 FUN_1003f2948(long param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x50);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61574(param_1);
  func_0x000107c61574(lStack_38);
  return uVar1;
}



/* Entry: 1003f29b4; end: 1003f29e3; -[SCFriendsFeedReadyLogger _resetStoriesLoggerState] */

/* WARNING: Possible PIC construction at 0x0001003f29cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f29d0) */

void FUN_1003f29b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f29e4; end: 1003f2a13; -[SCFriendsFeedReadyLogger _resetMapsLoggerState] */

/* WARNING: Possible PIC construction at 0x0001003f29fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f2a00) */

void FUN_1003f29e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f2a14; end: 1003f2ba7; +[SCUserExtensionStorageServiceImpl sharedInstanceWithUserId:] */

void FUN_1003f2a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51758();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c610f4();
  func_0x000107c48b70();
  puVar4 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10044a2c8;
  puStack_68 = &UNK_110c98328;
  puStack_60 = puVar3;
  func_0x000107c61174(param_3);
  uStack_58 = param_3;
  func_0x000107c61174(puVar3);
  func_0x000107c3e4fc(puVar4,param_2,&puStack_80);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10063b618;
  puStack_90 = &UNK_110c982b8;
  uStack_88 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar5,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126deb78;
  func_0x000107c610f4(PTR_PTR_1126deb78);
  func_0x000107c456c8();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(puStack_60);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f2ba8; end: 1003f2bb3;  */

bool FUN_1003f2ba8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1003f2bb4; end: 1003f2c87;  */

undefined8 FUN_1003f2bb4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f16e38;
    func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110f16e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
      func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110dea458,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
        func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e1cc58;
          func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110e1cc58,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110df78d8;
            func_0x000107c3f6dc(&PTR____CFConstantStringClassReference_110df78d8,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1003f2c88; end: 1003f2caf; -[SCBlizzardEventLogger _convertPageTabTypeFromBlizzardSchemaToPbSchema:] */

int FUN_1003f2c88(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1003f2cb0; end: 1003f2ddf; -[SCBlizzardEventLogger _getSerializationMethodForEvent:] */

undefined8 FUN_1003f2cb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4f908();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c61164();
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4d3e4(param_3);
    func_0x000107c61180();
    func_0x000106ac4e18(uVar5,uVar1,1);
  }
  else {
    uVar2 = param_3;
    func_0x000107c4f908();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c441bc();
    func_0x000107c61170(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (0 < (long)uVar3) {
      uVar4 = 1;
      FUN_1003f2de8(uVar5,&PTR____CFConstantStringClassReference_110e6dd78,1);
      goto LAB_1003f2dc0;
    }
    func_0x000107c4d3e4(param_3);
    func_0x000107c61180();
    func_0x000106ac4f8c(uVar5,uVar1,1);
  }
  func_0x000107c61170(uVar1);
  FUN_1003f2de8(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e6dd98,1);
  uVar4 = 0;
LAB_1003f2dc0:
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 1003f2de0; end: 1003f2de7; -[SCAApplicationCrash getPayloadIdentifier] */

undefined8 FUN_1003f2de0(void)

{
  return 0xa6;
}



/* Entry: 1003f2de8; end: 1003f2f5b;  */

void FUN_1003f2de8(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11095c1f0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1003f2f5c; end: 1003f2f67; -[SCAApplicationCrash toProtoWithAllowedFields:] */

void FUN_1003f2f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,3,param_3);
  return;
}



/* Entry: 1003f2f68; end: 1003f3107; -[SCAMapSerializable toProtoWithBitmapLength:allowedFields:] */

void FUN_1003f2f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_4);
  uVar1 = 1;
  func_0x000107c60ee8(1,param_3);
  puVar2 = PTR__OBJC_CLASS___NSOutputStream_1126e2e10;
  func_0x000107c4e140(PTR__OBJC_CLASS___NSOutputStream_1126e2e10);
  func_0x000107c61180();
  func_0x000107c4de00();
  puVar3 = PTR_PTR_1126e2e18;
  func_0x000107c5c140();
  func_0x000107c61180();
  func_0x000107c4f52c(param_1);
  func_0x000107c61180();
  func_0x000107c61174(puVar3);
  func_0x000107c61174(param_4);
  func_0x000107c429c4(param_1);
  func_0x000107c61170(param_1);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e8(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x000107c61180();
  func_0x000107c5e8f4(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c43704(puVar3);
  puVar4 = puVar2;
  func_0x000107c4f500(puVar2);
  func_0x000107c61180();
  func_0x000107c3fc10(puVar2);
  func_0x000107c60fd0(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003f3108; end: 1003f31ab; -[SCUserExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_1003f3108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112709e88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f31ac; end: 1003f31df;  */

void FUN_1003f31ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f31e0; end: 1003f322f;  */

void FUN_1003f31e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003f3230; end: 1003f375b;  */

void FUN_1003f3230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_10009bfe8();
  func_0x000107c613fc();
  uVar1 = uStack_58;
  func_0x0001003f3324(uStack_58,uStack_60,uStack_68,uStack_70,uStack_78);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003f375c; end: 1003f37b3; +[GPBCodedOutputStream streamWithOutputStream:] */

void FUN_1003f375c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,
                      *(undefined8 *)PTR__vm_page_size_11034cda0);
  func_0x000107c610f4(param_1);
  func_0x000107c47cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autorelease_11034d1c8)();
  return;
}



/* Entry: 1003f37b4; end: 1003f3b97; -[SCFideliusClientInitEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f37b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1003f4e44;
  puStack_90 = &UNK_1108a8748;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_100737434;
  puStack_c0 = &UNK_1108a8778;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_108 = puVar6;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1003fafe4;
  puStack_f0 = &UNK_1108a87a8;
  func_0x000107c6111c(auStack_e0,auStack_80);
  puStack_e8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_148 = puVar6;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1004184bc;
  puStack_130 = &UNK_1108a87d8;
  func_0x000107c6111c(auStack_110,auStack_80);
  puStack_128 = puVar3;
  puStack_120 = puVar1;
  puStack_118 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_170 = puVar6;
  uStack_168 = 0xc2000000;
  puStack_160 = &UNK_1056c61c4;
  puStack_158 = &UNK_1108a8808;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_178,auStack_80);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112727b60);
  puVar7 = PTR_PTR_1126bd060;
  func_0x000107c610f4(PTR_PTR_1126bd060);
  func_0x000107c46e7c();
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(puVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112727b64);
  puVar7 = PTR_PTR_1126bd068;
  func_0x000107c610f4(PTR_PTR_1126bd068);
  func_0x000107c468e8();
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(puVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112727b68);
  puVar7 = PTR_PTR_1126bd070;
  func_0x000107c610f4(PTR_PTR_1126bd070);
  func_0x000107c468f4();
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_178);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_150);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1003f3b98; end: 1003f3bef; -[_TtC28SCFideliusClientInitServices28SCFideliusClientInitServices initWithInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f3b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11305b178) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003f3bf0; end: 1003f3dab;  */

/* WARNING: Possible PIC construction at 0x0001003f3c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f3c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f3ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f3d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f3d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f3d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f3d60) */
/* WARNING: Removing unreachable block (ram,0x0001003f3d10) */
/* WARNING: Removing unreachable block (ram,0x0001003f3d20) */
/* WARNING: Removing unreachable block (ram,0x0001003f3d64) */
/* WARNING: Removing unreachable block (ram,0x0001003f3d28) */
/* WARNING: Removing unreachable block (ram,0x0001003f3cd0) */
/* WARNING: Removing unreachable block (ram,0x0001003f3c8c) */
/* WARNING: Removing unreachable block (ram,0x0001003f3c98) */
/* WARNING: Removing unreachable block (ram,0x0001003f3c7c) */
/* WARNING: Removing unreachable block (ram,0x0001003f3d90) */

void FUN_1003f3bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c433dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c4f534(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1003f3dac; end: 1003f3e77; -[SCFideliusStorageServices initWithFideliusDeviceGraphServices:fideliusIdentityArchiveManager:fideliusTempIdentityManager:] */

undefined1 *
FUN_1003f3dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702d38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f3e78; end: 1003f44fb; -[SCAMapSerializable writeToStream:type:protoFieldNumber:value:fieldSetBitmap:] */

ulong FUN_1003f3e78(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_68;
  
  puVar6 = &uStack_5b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  uVar4 = param_1;
  puVar2 = param_6;
  func_0x000107c3bbc8();
  if (((uVar4 & 1) != 0) ||
     (uVar4 = param_1, puVar2 = param_6, func_0x000107c3bbc4(), (uVar4 & 1) != 0))
  goto LAB_1003f4480;
  uVar4 = param_1;
  func_0x000107c4eb50();
  puVar2 = param_7;
  puVar3 = param_6;
  switch(param_4) {
  case 0:
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar6 = param_6;
    func_0x000107c6115c(param_6,puVar1);
    puVar2 = param_7;
    if (((ulong)puVar6 & 1) != 0) {
      func_0x000107c5e9a0(param_3);
      puVar2 = param_5;
    }
    goto LAB_1003f4480;
  case 1:
    func_0x000107c3ebcc(param_6);
    func_0x000107c5e8ec(param_3);
    puVar2 = param_5;
    goto LAB_1003f4480;
  case 2:
  case 5:
    func_0x000107c4223c(param_6);
    func_0x000107c5e918(param_3);
    puVar2 = param_5;
    goto LAB_1003f4480;
  case 3:
    func_0x000107c49804(param_6);
    func_0x000107c5e920(param_3);
    puVar2 = param_5;
    goto LAB_1003f4480;
  case 4:
    func_0x000107c4c0a8(param_6);
    func_0x000107c5e95c(param_3);
    puVar2 = param_5;
    goto LAB_1003f4480;
  case 6:
    if (*(char *)(param_1 + 8) == '\x01') {
      func_0x000107c6110c();
      puVar6 = param_6;
      func_0x000107c5cb14(param_6);
      func_0x000107c61180();
      func_0x000107c5e8f4(param_3);
      func_0x000107c61170(puVar6);
      func_0x000107c61108(uVar4);
      puVar2 = param_5;
      goto LAB_1003f4480;
    }
    func_0x000107c5cb14();
    func_0x000107c61180();
    func_0x000107c5e8f4(param_3);
    puVar6 = param_5;
    break;
  case 7:
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_430;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_420;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_420 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_430;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 8:
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_470;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_460;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_460 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_470;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 9:
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_4b0;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_4a0;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_4a0 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_4b0;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 10:
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_4f0;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_4e0;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_4e0 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_4f0;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 0xb:
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_530;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_520;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_520 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_530;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 0xc:
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar6 = &uStack_570;
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_560;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_560 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_570;
        puVar2 = param_6;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  case 0xd:
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    plStack_5a0 = (long *)0x0;
    func_0x000107c61174(param_6);
    puVar2 = param_6;
    func_0x000107c4080c();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_5a0;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_5a0 != lVar5) {
            func_0x000107c61128(param_6);
          }
          func_0x000107c5e9b4(param_1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar2 = param_6;
        puVar6 = &uStack_5b0;
        func_0x000107c4080c();
      } while (puVar2 != (undefined8 *)0x0);
    }
    break;
  default:
    goto LAB_1003f4480;
  }
  func_0x000107c61170(puVar3);
  puVar2 = puVar6;
LAB_1003f4480:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSNull_1126aef28;
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 1;
  }
  else {
    func_0x000107c61174(puVar2);
    func_0x000107c4d8b8(puVar6);
    func_0x000107c61180();
    uVar4 = (ulong)(puVar2 == puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
  }
  return uVar4;
}



/* Entry: 1003f44fc; end: 1003f456b; -[SCAMapSerializable _isValueNull:] */

bool FUN_1003f44fc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  if (param_3 == (undefined *)0x0) {
    bVar1 = true;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c4d8b8(puVar2);
    func_0x000107c61180();
    bVar1 = param_3 == puVar2;
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar2);
  }
  return bVar1;
}



/* Entry: 1003f456c; end: 1003f45df; -[SCFideliusLoggingServices initWithFideliusLogger:] */

undefined1 * FUN_1003f456c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702d30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f45e0; end: 1003f4623;  */

void FUN_1003f45e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f4624; end: 1003f4673;  */

void FUN_1003f4624(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003f4674; end: 1003f4e3b; -[SCFideliusServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f4674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1003f7ab0;
  puStack_90 = &UNK_1108a8868;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1003f71e8;
  puStack_c0 = &UNK_1108a8898;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar36 = (long)_DAT_112727b70;
  lVar31 = param_1 + lVar36;
  func_0x000107c61148(lVar31);
  lVar32 = lVar31;
  func_0x000107c433a0();
  func_0x000107c61180();
  lVar3 = lVar32;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112727b74;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c5a2f8(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112727bb4;
    func_0x000107c61148();
  }
  lVar4 = lVar31;
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bd088;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112727ba4;
    func_0x000107c61148();
  }
  lVar7 = lVar32;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112727b78;
  func_0x000107c61148();
  lVar34 = (long)_DAT_112727b7c;
  lVar5 = param_1 + lVar34;
  func_0x000107c61148();
  lVar8 = lVar5;
  func_0x000107c44f4c();
  func_0x000107c61180();
  lVar34 = param_1 + lVar34;
  func_0x000107c61148();
  lVar9 = lVar34;
  func_0x000107c44f60();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_112727b80;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar35 = (long)_DAT_112727b84;
  lVar12 = param_1 + lVar35;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c43380();
  func_0x000107c61180();
  lVar14 = param_1 + lVar35;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c43390();
  func_0x000107c61180();
  lVar36 = param_1 + lVar36;
  func_0x000107c61148();
  lVar16 = lVar36;
  func_0x000107c433a0();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_112727b88;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112727b8c;
  func_0x000107c61148();
  lVar20 = param_1 + _DAT_112727b90;
  func_0x000107c61148();
  lVar21 = lVar20;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  lVar22 = param_1 + _DAT_112727b94;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar24 = param_1 + _DAT_112727b98;
  func_0x000107c61148();
  lVar25 = lVar24;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar26 = param_1 + _DAT_112727b9c;
  func_0x000107c61148();
  lVar27 = lVar26;
  func_0x000107c3dda8();
  func_0x000107c61180();
  lVar35 = param_1 + lVar35;
  func_0x000107c61148();
  lVar28 = lVar35;
  func_0x000107c433ac();
  func_0x000107c61180();
  func_0x000107c49394();
  lVar37 = (long)_DAT_112727ba0;
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar6;
  func_0x000107c61170(uVar33);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar32);
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  func_0x000107c52018(uVar33);
  func_0x000107c61180();
  func_0x000107c3e7a8();
  func_0x000107c61170(uVar33);
  lVar36 = param_1 + _DAT_112727ba4;
  func_0x000107c61148(lVar36);
  lVar32 = lVar36;
  func_0x000107c5da68();
  func_0x000107c61180();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c61170(lVar36);
  puStack_100 = puVar6;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1003f9a08;
  puStack_e8 = &UNK_110841f20;
  puStack_128 = puVar6;
  uStack_120 = 0xc2000000;
  puStack_118 = &UNK_1056c63a0;
  puStack_110 = &UNK_110885010;
  puStack_150 = puVar6;
  uStack_148 = 0xc2000000;
  puStack_140 = &UNK_1056c649c;
  puStack_138 = &UNK_110885040;
  lStack_130 = param_1;
  lStack_108 = param_1;
  lStack_e0 = param_1;
  func_0x000107c4c6fc(lVar32);
  puVar29 = PTR_PTR_1126ae720;
  puStack_178 = puVar6;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10041bdd4;
  puStack_160 = &UNK_1108a88c8;
  func_0x000107c6111c(auStack_158,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_180,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar33 = *(undefined8 *)(param_1 + _DAT_112727ba8);
  puVar30 = PTR_PTR_1126bd090;
  func_0x000107c610f4();
  func_0x000107c468ec();
  func_0x000107c42c20(uVar33);
  func_0x000107c61170(puVar30);
  uVar33 = *(undefined8 *)(param_1 + _DAT_112727bac);
  puVar30 = PTR_PTR_1126bd098;
  func_0x000107c610f4();
  func_0x000107c47078();
  func_0x000107c42c20(uVar33);
  func_0x000107c61170(puVar30);
  uVar33 = *(undefined8 *)(param_1 + _DAT_112727bb0);
  puVar30 = PTR_PTR_1126bd0a0;
  func_0x000107c610f4();
  func_0x000107c47074();
  func_0x000107c42c20(uVar33);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_180);
  func_0x000107c61170(puVar29);
  func_0x000107c61120(auStack_158);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1003f4e3c; end: 1003f4e43; -[SCFideliusLoggingServices fideliusLogger] */

undefined8 FUN_1003f4e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003f4e44; end: 1003f4f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f4e44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bd028;
    func_0x000107c610f4(PTR_PTR_1126bd028);
    lVar1 = param_1 + _DAT_112727b50;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_112727b54;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c5da04();
    func_0x000107c61180();
    func_0x000107c46b70(puVar5,param_2,lVar2,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1003f4f1c; end: 1003f4f2b; -[_TtC18SCBlizzardServices24SCSystemBlizzardServices userNotTrackedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f4f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083800));
  return;
}



/* Entry: 1003f4f2c; end: 1003f5013; -[SCFideliusLogger initWithGraphene:Blizzard:] */

undefined1 *
FUN_1003f4f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eaf80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f5014; end: 1003f5043; -[SCFideliusLogger setUserBlizzard:] */

void FUN_1003f5014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f5044; end: 1003f506f; -[SCAMapSerializable populateBitmap:fieldNumber:] */

void FUN_1003f5044(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(long)(int)(param_4 - 2U) >> 3;
  *(byte *)(param_3 + uVar1) =
       *(byte *)(param_3 + uVar1) | (byte)(1 << (ulong)((param_4 - 2U ^ 0xffffffff) & 7));
  return;
}



/* Entry: 1003f5070; end: 1003f50a3; -[GPBCodedOutputStream writeInt64:value:] */

void FUN_1003f5070(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x000100298744(param_1 + 8,param_3 << 3);
  plVar1 = (long *)(param_1 + 8);
  uVar4 = param_4;
  if (0x7f < param_4) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_1003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      param_4 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = param_4;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)param_4;
  return;
}



/* Entry: 1003f50a4; end: 1003f50ab; -[SCFideliusStorageServices fideliusDeviceGraphManager] */

undefined8 FUN_1003f50a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003f50ac; end: 1003f50b3; -[SCFideliusStorageServices fideliusIdentityArchiveManager] */

undefined8 FUN_1003f50ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003f50b4; end: 1003f50bb; -[SCBackgroundExecutionServices backgroundTaskWrapper] */

undefined8 FUN_1003f50b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003f50bc; end: 1003f50c3; -[SCUserExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_1003f50bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003f50c4; end: 1003f50cb; -[SCFideliusStorageServices fideliusTempIdentityManager] */

undefined8 FUN_1003f50c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1003f50cc; end: 1003f5717; -[SCFideliusManager initWithUserSession:snapchatterServices:httpMetadataService:httpRequestModifier:circumstanceEngine:appStartExperimentReader:deviceGraphManager:identityArchiveManager:logger:grapheneRegistry:userUnifiedGRPCServices:fideliusFriendMetadataCoordinator:backgroundTaskWrapper:applicationLifecycleEvents:userPreferences:appGroupPlistStorage:tempIdentityManager:] */

undefined8 *
FUN_1003f50cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  puVar1 = &UNK_10f3100c7;
  FUN_1000ba800(&UNK_10f3100c7);
  puStack_80 = PTR_PTR_1126eaf88;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126bd038;
    func_0x000107c4c260();
    func_0x000107c61180();
    uVar4 = puVar2[0x11];
    puVar2[0x11] = puVar3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126bd038;
    func_0x000107c4a8ec();
    func_0x000107c61180();
    uVar4 = puVar2[0x12];
    puVar2[0x12] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = puVar2[3];
    puVar2[3] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_18);
    uVar4 = puVar2[0x1a];
    puVar2[0x1a] = param_18;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar2[0x14];
    puVar2[0x14] = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar2[0xb];
    puVar2[0xb] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar2[0xc];
    puVar2[0xc] = param_6;
    func_0x000107c61170(uVar4);
    uVar4 = param_13;
    FUN_1003f5854(param_13,puVar2[0x11]);
    func_0x000107c61180();
    uVar5 = puVar2[0x15];
    puVar2[0x15] = uVar4;
    func_0x000107c61170(uVar5);
    uVar4 = param_13;
    func_0x0001003f5914(param_13,puVar2[0x11]);
    func_0x000107c61180();
    uVar5 = puVar2[0xd];
    puVar2[0xd] = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_7);
    uVar4 = puVar2[0x16];
    puVar2[0x16] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = puVar2[4];
    puVar2[4] = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar2[6];
    puVar2[6] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_10);
    uVar4 = puVar2[7];
    puVar2[7] = param_10;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_19);
    uVar4 = puVar2[8];
    puVar2[8] = param_19;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_11);
    uVar4 = puVar2[0x17];
    puVar2[0x17] = param_11;
    func_0x000107c61170(uVar4);
    func_0x000107c54978(puVar2);
    func_0x000107c5a3c4(puVar2);
    puVar3 = PTR_PTR_1126c05d0;
    func_0x000107c610fc();
    uVar4 = puVar2[1];
    puVar2[1] = puVar3;
    func_0x000107c61170(uVar4);
    uVar4 = 0;
    func_0x000107c60f6c();
    uVar5 = puVar2[0xf];
    puVar2[0xf] = uVar4;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126c05d8;
    func_0x000107c610f4(PTR_PTR_1126c05d8);
    uVar4 = puVar2[0x17];
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c475b8(puVar3);
    func_0x000107c58fb0(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar2[0xe];
    puVar2[0xe] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_90,puVar2);
    uVar4 = param_16;
    func_0x000107c5e370(param_16);
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_105940cec;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_c0,puVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_c8,auStack_c0);
    func_0x000107c61174(param_7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar2[10];
    puVar2[10] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_7);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1003f5718; end: 1003f578f; +[SCFideliusPerformerInitializer managerPerformer] */

void FUN_1003f5718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310ac5);
  func_0x000107c61180();
  func_0x000107c45454(puVar1,param_2,puVar2,0,0,0x18,
                      &PTR____CFConstantStringClassReference_110e10b38);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f5790; end: 1003f57e3; -[GPBCodedOutputStream writeBool:value:] */

void FUN_1003f5790(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  long lVar1;
  
  func_0x000100298744(param_1 + 8,param_3 << 3);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 8) + lVar1) = param_4;
  return;
}



/* Entry: 1003f57e4; end: 1003f5853; +[SCFideliusPerformerInitializer keyProviderPerformer] */

void FUN_1003f57e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310b14);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f5854; end: 1003f59d3;  */

void FUN_1003f5854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f59d4; end: 1003f5a5f;  */

void FUN_1003f59d4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1[4] == 0) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_11102f578,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
  if (param_1[2] != 0) {
    lVar1 = param_1[4];
    FUN_1003f5a60(lVar1,*param_1);
    if (lVar1 != param_1[2]) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
    param_1[2] = 0;
    param_1[3] = param_1[3] + lVar1;
  }
  return;
}



/* Entry: 1003f5a60; end: 1003f5aef;  */

long FUN_1003f5a60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = param_1;
  func_0x000107c5e8e4(param_1,param_2,param_2,param_3);
  if (lVar1 == param_3) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (lVar1 < 1) {
        if (lVar1 == 0) {
          return lVar2;
        }
        return lVar1;
      }
      lVar2 = lVar1 + lVar2;
      param_3 = param_3 - lVar1;
      lVar1 = param_1;
      func_0x000107c5e8e4();
    } while (lVar1 != param_3);
  }
  return param_3 + lVar2;
}



/* Entry: 1003f5af0; end: 1003f5af7; -[SCFideliusManager setFideliusStatus:] */

void FUN_1003f5af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 1003f5af8; end: 1003f5b27; -[SCFideliusManager setUserPreferences:] */

void FUN_1003f5af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f5b28; end: 1003f5b4b; -[SCFideliusUserDatabaseFetcher .cxx_construct] */

void FUN_1003f5b28(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 1003f5b4c; end: 1003f5bcb; -[SCFideliusUserDatabaseFetcher init] */

undefined1 * FUN_1003f5b4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eafe0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003f5bcc; end: 1003f5bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f5bcc(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x20);
  func_0x000107c40794();
  do {
    lVar6 = param_2;
    lVar9 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar9 + 0x1e);
    uVar2 = *(ushort *)(lVar9 + 0x1c);
    if ((uVar2 & 0xf02) == 0) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        FUN_10010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                      *(undefined4 *)(lVar9 + 0x10));
        uVar2 = *(ushort *)(lVar9 + 0x1c);
      }
      if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_3, func_0x000107c4adac(), lVar11 != 0)) {
        uVar7 = *(uint *)(lVar9 + 0x14);
        lVar11 = *(long *)(lVar6 + 0x40);
        if ((int)uVar7 < 0) {
          uVar8 = 0;
          if (param_3 != 0) {
            uVar8 = *(undefined4 *)(lVar9 + 0x10);
          }
          goto LAB_100109f58;
        }
        uVar10 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
        if (param_3 == 0) goto LAB_100109f84;
        *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) | uVar7;
      }
      else {
        func_0x000107c61170(param_3);
        uVar7 = *(uint *)(lVar9 + 0x14);
        lVar11 = *(long *)(lVar6 + 0x40);
        if ((int)uVar7 < 0) {
          param_3 = 0;
          uVar8 = 0;
LAB_100109f58:
          *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
        }
        else {
          uVar10 = (ulong)(uVar7 >> 5);
          uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
          param_3 = 0;
          *(uint *)(lVar11 + uVar10 * 4) = *(uint *)(lVar11 + uVar10 * 4) & (uVar7 ^ 0xffffffff);
        }
      }
      uVar10 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18));
      *(long *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x18)) = param_3;
      if (uVar10 != 0) {
        if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar6)) {
          func_0x00010029a5f8(uVar10);
        }
        goto LAB_100109fc4;
      }
    }
    else {
      uVar10 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18));
      *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar9 + 0x18)) = param_3;
      if (uVar10 != 0) {
        lVar9 = lVar11;
        func_0x000107c433d8();
        uVar5 = uVar10;
        if ((int)lVar9 == 1) {
          if (3 < bVar1 - 0xd) {
LAB_100109f38:
            if (*(long *)(uVar10 + 8) == lVar6) {
              *(undefined8 *)(uVar10 + 8) = 0;
            }
            goto LAB_100109fc4;
          }
          puVar4 = PTR_PTR_1126e3228;
          func_0x000107c61158(PTR_PTR_1126e3228);
          func_0x000107c6115c(uVar10,puVar4);
          iVar3 = _DAT_112796b30;
        }
        else {
          func_0x000107c4c354();
          if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
          puVar4 = PTR_PTR_1126e3230;
          func_0x000107c61158(PTR_PTR_1126e3230);
          func_0x000107c6115c(uVar10,puVar4);
          iVar3 = _DAT_112796db0;
        }
        if (((uVar5 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar6)) {
          *(undefined8 *)(uVar10 + (long)iVar3) = 0;
        }
LAB_100109fc4:
        func_0x000107c61170(uVar10);
      }
    }
    param_2 = *(long *)(lVar6 + 0x20);
    if (param_2 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar6 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(lVar6 + 0x30));
      return;
    }
    func_0x000107c61174();
    param_3 = lVar6;
  } while( true );
}



/* Entry: 1003f5c00; end: 1003f5f4f; -[SCFideliusServiceCoordinator initWithManager:snapchatterServices:httpMetadataService:httpRequestModifier:databaseFetcher:logger:fideliusFriendMetadataCoordinator:backgroundTaskWrapper:circumstanceEngine:grpcFideliusRecryptService:userPreferences:] */

undefined8 *
FUN_1003f5c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126eafa8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 2,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c04a8;
    func_0x000107c610f4(PTR_PTR_1126c04a8);
    puVar4 = puVar1 + 2;
    func_0x000107c61148(puVar4);
    uVar2 = puVar1[3];
    func_0x000107c5b4b0(uVar2);
    func_0x000107c61180();
    func_0x000107c463d0(puVar3);
    func_0x000107c5522c(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126c0630;
    func_0x000107c610f4();
    puVar4 = puVar1 + 2;
    func_0x000107c61148(puVar4);
    func_0x000107c463bc();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126c0638;
    func_0x000107c610f4();
    func_0x000107c463f0();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003f5f50; end: 1003f5f57; -[SCSnapchatterServices snapchattersDataFetcher] */

undefined8 FUN_1003f5f50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003f5f58; end: 1003f6153; -[SCFideliusIdentityService initWithDataSource:snapchatterDataFetcher:httpMetadataService:httpRequestModifier:logger:fideliusFriendMetadataCoordinator:circumstanceEngine:userPreferences:] */

undefined1 *
FUN_1003f5f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126eaf50;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126bd038;
    func_0x000107c45000();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f6154; end: 1003f61c3; +[SCFideliusPerformerInitializer identityServicePerformer] */

void FUN_1003f6154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310c4e);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f61c4; end: 1003f61cb; -[SCFideliusServiceCoordinator setIdentityService:] */

void FUN_1003f61c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1003f61cc; end: 1003f6333; -[SCFideliusRetryService initWithDataSource:httpMetadataService:httpRequestModifier:betaSyncDelegate:logger:backgroundTaskWrapper:circumstanceEngine:grpcFideliusRecryptService:] */

undefined1 *
FUN_1003f61cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126eaf98;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c0620;
    func_0x000107c610f4();
    puVar3 = PTR_PTR_1126bd038;
    func_0x000107c49698(PTR_PTR_1126bd038);
    func_0x000107c61180();
    func_0x000107c47df8();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f6334; end: 1003f63a3; +[SCFideliusPerformerInitializer initiateRecryptPerformer] */

void FUN_1003f6334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310c9e);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f63a4; end: 1003f65ab; -[SCFideliusBatchInitiateRecryptExecutor initWithPerformer:backgroundTaskWrapper:betaSyncDelegate:grpcFideliusRecryptService:circumstanceEngine:dataSource:] */

undefined8 *
FUN_1003f63a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126eaee8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 7,param_8);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126c0398;
    func_0x000107c610f4();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c47e00();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003f65ac; end: 1003f65db; -[SCBlizzardEvent setFrameEvent:] */

void FUN_1003f65ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f65dc; end: 1003f662b; -[SCBlizzardEventList addEvent:] */

/* WARNING: Possible PIC construction at 0x0001003f6618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f661c) */

void FUN_1003f65dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4d2d8(param_1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003f662c; end: 1003f6633; -[SCBlizzardEventList mutableEvents] */

undefined8 FUN_1003f662c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003f6634; end: 1003f6673; -[SCBlizzardEventLogger _onFrameEventLogged:] */

void FUN_1003f6634(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c40794(param_3);
    func_0x000107c3c404(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1003f6674; end: 1003f6733; -[SCBlizzardEventLogger _routeEventToRtusCacheOnFrameEventLogged:] */

/* WARNING: Possible PIC construction at 0x0001003f6704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f6714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f6708) */
/* WARNING: Removing unreachable block (ram,0x0001003f6718) */

void FUN_1003f6674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    func_0x000107c4f4ec(param_3);
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c4f540(param_1);
    func_0x000107c61180();
    func_0x000107c4f538(param_1);
    func_0x000107c4c8e4(uVar3,param_2,param_3,lVar1,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1003f6734; end: 1003f673b; -[SCBlizzardEventLogger protoQueueName] */

undefined8 FUN_1003f6734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1003f673c; end: 1003f68d3; -[SCBlizzardRtusEventRouter maybeRouteEventToCache:sessionId:logQueueName:logQueueSequenceId:] */

/* WARNING: Possible PIC construction at 0x0001003f67c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f6848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f689c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003f68ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f684c) */
/* WARNING: Removing unreachable block (ram,0x0001003f67cc) */
/* WARNING: Removing unreachable block (ram,0x0001003f67d0) */
/* WARNING: Removing unreachable block (ram,0x0001003f6878) */
/* WARNING: Removing unreachable block (ram,0x0001003f6898) */
/* WARNING: Removing unreachable block (ram,0x0001003f67d8) */
/* WARNING: Removing unreachable block (ram,0x0001003f68b0) */

void FUN_1003f673c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_4 == 0) {
    func_0x000107c4d3e4(param_3);
    func_0x000107c61180();
    func_0x000107c3c324(param_1,param_2,param_3);
    func_0x000107c61170(param_3);
  }
  else {
    func_0x000107c4f908();
    func_0x000107c61180();
    param_5 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    func_0x000107c441bc(param_3);
    func_0x000107c4a2c0(param_5,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1003f68d4; end: 1003f68db;  */

void FUN_1003f68d4(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126adb90;
  func_0x000107c610f8();
  func_0x000107c45db4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c615e8(uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003f68dc; end: 1003f695b;  */

void FUN_1003f68dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126adb90;
  func_0x000107c610f8();
  func_0x000107c45db4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c615e8(uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003f695c; end: 1003f6a2b; -[SCFideliusBatchRequestScheduler initWithPerformer:backgroundTaskWrapper:makeMeshRequestBlock:] */

long FUN_1003f695c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 != 0) {
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    func_0x000107c61174(param_5);
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    func_0x000107c61170(uVar3);
    uVar3 = param_5;
    func_0x000107c61184();
    func_0x000107c61170(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1003f6a2c; end: 1003f6b0f; -[SCRTUSConfigProviderImpl initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1003f6a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702e08;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126debb0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126debb8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3b9ec(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f6b10; end: 1003f6b83; -[SCGrapheneRtusConfigsMetric2 init] */

undefined1 * FUN_1003f6b10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702e10;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}


