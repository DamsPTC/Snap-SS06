/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c51908; end: 101c5197f; -[_TtC45NotificationCenterBadgeServicesImplementation35NotificationCenterBadgeUpdateDriver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c51934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c51938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51908(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0baf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0baf8));
  return;
}



/* Entry: 101c51980; end: 101c51b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51980(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  char cStack_41;
  
  ppuVar3 = &puStack_80;
  func_0x000100087bd4(&cStack_41,FUN_101c523fc,&puStack_80,PTR___sSbN_11034dd40);
  if (cStack_41 == '\x01') {
    FUN_101c51b14();
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0bb00);
    func_0x000107c5e370(uVar1);
    func_0x000107c61180();
    puVar5 = &UNK_11045cc70;
    puVar2 = puVar5;
    func_0x000107c613fc(&UNK_11045cc70,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puVar2);
    uVar4 = uVar1;
    func_0x000107c5c320(uVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c3e924(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c613fc(&UNK_11045cc70,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000101c51fd0(0x101c5244c,puVar5);
    func_0x000107c61578(puVar5,2);
  }
  return;
}



/* Entry: 101c51b14; end: 101c51c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51b14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4d7cc(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = _DAT_112e0bb08;
  func_0x000107c61604(unaff_x20 + _DAT_112e0bb08,uVar2);
  func_0x000107c615e8(uVar2);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 101c51c9c; end: 101c51cb3;  */

void FUN_101c51c9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c51cb4,0,0);
  return;
}



/* Entry: 101c51cb4; end: 101c51d67;  */

void FUN_101c51cb4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = &UNK_11045cc70;
    func_0x000107c613fc(&UNK_11045cc70,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar2);
    func_0x000107c6157c(puVar1);
    func_0x000101c51fd0(0x101c5251c,puVar1);
    func_0x000107c61578(puVar1,2);
    func_0x000107c61170(lVar2);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar2 == 0;
                    /* WARNING: Could not recover jumptable at 0x000101c51d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c51d68; end: 101c5211f;  */

void FUN_101c51d68(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = param_1;
  func_0x000107c5c578();
  func_0x000107c61180();
  puVar2 = &UNK_11045cc70;
  func_0x000107c613fc(&UNK_11045cc70,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_11045cd10;
  func_0x000107c613fc(&UNK_11045cd10,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uStack_58 = 0x101c5245c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x101c52514;
  puStack_60 = &UNK_11045cd28;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5c8c8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101c52120; end: 101c522ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c52120(undefined8 *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c43e90();
  func_0x000107c61180();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c506c8();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      puVar2 = puVar1;
      if (param_3 != 0) {
        uVar3 = *(undefined8 *)(param_3 + _DAT_112e0baf0);
        func_0x000107c5d334(puVar1);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c4d664(uVar3);
        func_0x000107c61170(param_3);
        func_0x000107c61170(puVar1);
      }
      func_0x000107c61170(puVar2);
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101c52300; end: 101c5238b; -[_TtC45NotificationCenterBadgeServicesImplementation35NotificationCenterBadgeUpdateDriver onBadgeUpdated:] */

/* WARNING: Possible PIC construction at 0x000101c5236c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c52370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c52300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e0baf0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5d334(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c5238c; end: 101c523d7; -[_TtC45NotificationCenterBadgeServicesImplementation35NotificationCenterBadgeUpdateDriver init] */

void FUN_101c5238c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationCenterBadgeServicesImplementation.NotificationCenterBadgeUpdateDriver"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c523b8);
  (*pcVar1)();
}



/* Entry: 101c523d8; end: 101c523fb;  */

undefined8 FUN_101c523d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101c523fc; end: 101c5246b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c523fc(undefined1 *param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e0bb20) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e0bb20) = 1;
  *param_1 = 1;
  return;
}



/* Entry: 101c5246c; end: 101c524bf;  */

void FUN_101c5246c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c524c0;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c51cb4,0,0);
  return;
}



/* Entry: 101c524c0; end: 101c524fb;  */

void FUN_101c524c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c524f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c524fc; end: 101c5251f;  */

void FUN_101c524fc(long param_1,long param_2)

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



/* Entry: 101c52520; end: 101c5271f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c52520(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = param_1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c4a100();
    func_0x000107c615e8(uVar2);
    if ((uVar1 & 1) != 0) {
      func_0x000100083b20(&lStack_58);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112ecb310);
      func_0x000107c61174();
      func_0x000107c61170(lStack_58);
      func_0x000107c6157c(param_3);
      func_0x000100083b20(&lStack_60);
      uVar5 = *(undefined8 *)(lStack_60 + _DAT_113091b70);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(lStack_60);
      func_0x000101c523b8(0);
      func_0x000107c610f8();
      FUN_101c51728(uVar3,param_3,uVar5);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      puVar4 = &UNK_11045cdb0;
      func_0x000107c613fc(&UNK_11045cdb0,0x18,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar3;
      func_0x000107c61174(uVar3);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = 1;
      func_0x0001001ca524(1,0,0x98,4,0,0,&UNK_10d9e5130,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61574(param_2);
      param_2 = param_3;
      goto LAB_101c526f4;
    }
  }
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_1);
LAB_101c526f4:
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_4);
  return unaff_x20;
}



/* Entry: 101c52720; end: 101c52737;  */

void FUN_101c52720(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c52738,0,0);
  return;
}



/* Entry: 101c52738; end: 101c52767;  */

void FUN_101c52738(void)

{
  long unaff_x22;
  
  FUN_101c51980();
                    /* WARNING: Could not recover jumptable at 0x000101c52764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c52768; end: 101c527bf;  */

void FUN_101c52768(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c528c8;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c52738,0,0);
  return;
}



/* Entry: 101c527c0; end: 101c52807;  */

void FUN_101c527c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c52808; end: 101c52833;  */

undefined ** FUN_101c52808(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 101c52834; end: 101c5288b;  */

void FUN_101c52834(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c5288c;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c52738,0,0);
  return;
}



/* Entry: 101c5288c; end: 101c528c7;  */

void FUN_101c5288c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c528c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c528c8; end: 101c528cb;  */

void FUN_101c528c8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c528c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c528cc; end: 101c5293b;  */

void FUN_101c528cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000023;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010f005180;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000002d;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f0051b0;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101c5293c; end: 101c52a57;  */

uint FUN_101c5293c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  if (param_1 == 1) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar4,uVar1);
      lVar5 = lVar3;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar7 = lVar5;
        func_0x000107c6148c(lVar5,puVar6);
        if (lVar7 != 0) {
          func_0x0001007bbbf8(0);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c60118(lVar7,puVar6);
          func_0x000107c61170(lVar3);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar6);
          return (uint)lVar7 & 1;
        }
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar5);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 101c52a58; end: 101c52a93; -[_TtC49NotificationFeatureFlagStoreServiceImplementation28NotificationFeatureFlagStore isEnabled:] */

uint FUN_101c52a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101c5293c(param_3);
  func_0x000107c61574(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101c52a94; end: 101c52c77;  */

/* WARNING: Possible PIC construction at 0x000101c52b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c52b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c52b94) */
/* WARNING: Removing unreachable block (ram,0x000101c52c00) */
/* WARNING: Removing unreachable block (ram,0x000101c52b7c) */
/* WARNING: Removing unreachable block (ram,0x000101c52b6c) */
/* WARNING: Removing unreachable block (ram,0x000101c52b08) */
/* WARNING: Removing unreachable block (ram,0x000101c52b80) */
/* WARNING: Removing unreachable block (ram,0x000101c52b0c) */
/* WARNING: Removing unreachable block (ram,0x000101c52b8c) */
/* WARNING: Removing unreachable block (ram,0x000101c52b24) */
/* WARNING: Removing unreachable block (ram,0x000101c52b88) */

void FUN_101c52a94(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if (param_1 != 1) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      if (((param_2 ^ 1) & 1) == 0) {
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000103a982dc(0);
      func_0x000107c610f8();
      lVar3 = 1;
      func_0x000103a98294(1,param_2 & 1);
      func_0x000107c4d664(uVar4);
    }
    else {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c56bd8(lVar3);
    }
  }
  else {
    func_0x000107c5fadc(lVar3,uVar4);
    func_0x000107c4d9e8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101c52c78; end: 101c52c7f; -[_TtC49NotificationFeatureFlagStoreServiceImplementation28NotificationFeatureFlagStore enable:] */

void FUN_101c52c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101c52a94(param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101c52c80; end: 101c52c87; -[_TtC49NotificationFeatureFlagStoreServiceImplementation28NotificationFeatureFlagStore disable:] */

void FUN_101c52c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101c52a94(param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101c52c88; end: 101c52ccb;  */

void FUN_101c52c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6157c();
  FUN_101c52a94(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101c52ccc; end: 101c52d27;  */

void FUN_101c52ccc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c52d28; end: 101c52d37;  */

undefined1  [16] FUN_101c52d28(void)

{
  return ZEXT816(0x11045cf00);
}



/* Entry: 101c52d38; end: 101c52deb;  */

long FUN_101c52d38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar2 = 0;
  func_0x000101c52d08();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0xd000000000000023;
  *(undefined8 *)(lVar2 + 0x18) = 0x800000010f005180;
  *(undefined8 *)(lVar2 + 0x20) = 0xd00000000000002d;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f0051b0;
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61174(param_2);
  return lVar2;
}



/* Entry: 101c52dec; end: 101c52df3;  */

long FUN_101c52dec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  lVar3 = 0;
  func_0x000101c52d08();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0xd000000000000023;
  *(undefined8 *)(lVar3 + 0x18) = 0x800000010f005180;
  *(undefined8 *)(lVar3 + 0x20) = 0xd00000000000002d;
  *(undefined8 *)(lVar3 + 0x28) = 0x800000010f0051b0;
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  func_0x000107c61174(uVar1);
  return lVar3;
}



/* Entry: 101c52df4; end: 101c52e2b;  */

void FUN_101c52df4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c52e2c; end: 101c52e3b;  */

void FUN_101c52e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c52e3c; end: 101c52edb;  */

void FUN_101c52e3c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c52edc; end: 101c52eeb;  */

void FUN_101c52edc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101c52eec; end: 101c52f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c52eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0bcf0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e0bcf8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c52f58; end: 101c52f93; -[_TtC24SnapcodeValdiImageLoader24SnapcodeValdiImageLoader supportedURLSchemes] */

void FUN_101c52f58(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c52f94; end: 101c53173; -[_TtC24SnapcodeValdiImageLoader24SnapcodeValdiImageLoader requestPayloadWithURL:error:] */

void FUN_101c52f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c6061c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c53174; end: 101c531e3;  */

void FUN_101c53174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c531e4,uVar1,uVar2);
  return;
}



/* Entry: 101c531e4; end: 101c53283;  */

void FUN_101c531e4(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101c53284;
    plVar1[0xe] = lVar4;
    lVar2 = 0;
    func_0x000107c5fcec();
    plVar1[0xf] = lVar2;
    lVar4 = lVar2;
    func_0x000107c5fce8();
    plVar1[0x10] = lVar4;
    func_0x000100eea164();
    plVar1[0x11] = lVar4;
    func_0x000107c5fca8();
    plVar1[0x12] = lVar2;
    plVar1[0x13] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c534c0,lVar2,lVar4);
    return;
  }
  pcVar3 = *(code **)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  (*pcVar3)(0,0xf000000000000000,0);
                    /* WARNING: Could not recover jumptable at 0x000101c53280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c53284; end: 101c532f3;  */

void FUN_101c53284(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x70) = param_2;
    *(undefined8 *)(lVar4 + 0x78) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_101c532f4;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_101c5337c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c532f4; end: 101c5337b;  */

void FUN_101c532f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar4 = *(code **)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x00010006c00c(uVar2,uVar1);
  (*pcVar4)(uVar2,uVar1,0);
  func_0x000107c61170(uVar3);
  func_0x00010006c090(uVar2,uVar1);
  func_0x00010006c090(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c53378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c5337c; end: 101c533df;  */

void FUN_101c5337c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar3 = *(code **)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  (*pcVar3)(0,0xf000000000000000,0);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c533dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c533e0; end: 101c5344b;  */

void FUN_101c533e0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c540b0;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c531e4,lVar1,lVar2);
  return;
}



/* Entry: 101c5344c; end: 101c534bf;  */

void FUN_101c5344c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c534c0,uVar1,uVar2);
  return;
}



/* Entry: 101c534c0; end: 101c535af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c534c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  puVar1 = PTR_PTR_1126b0870;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0x4065e00000000000,0x4065e00000000000);
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  puVar2 = puVar1;
  FUN_101c53e78();
  puVar3 = puVar2;
  func_0x000107c610f8();
  *(undefined8 *)(puVar3 + _DAT_112e0bd30) = 0;
  *(undefined **)(puVar3 + _DAT_112e0bd28) = puVar1;
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = puVar3;
  *(undefined **)(unaff_x22 + 0x58) = puVar2;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(puVar1);
  func_0x000107c61154(puVar5,puVar2);
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar5;
  func_0x000107c5fce8();
  *(undefined8 **)(unaff_x22 + 0xb0) = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c535b0,puVar5);
  return;
}



/* Entry: 101c535b0; end: 101c53617;  */

void FUN_101c535b0(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x60;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101c53618;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101c5385c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c53618; end: 101c53683;  */

void FUN_101c53618(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 200) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    pcVar1 = FUN_101c53684;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    pcVar1 = FUN_101c53708;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c53684; end: 101c536bb;  */

void FUN_101c53684(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c536bc,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101c536bc; end: 101c53707;  */

void FUN_101c536bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101c53704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  return;
}



/* Entry: 101c53708; end: 101c5373f;  */

void FUN_101c53708(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c53740,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101c53740; end: 101c53787;  */

void FUN_101c53740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c53784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c53788; end: 101c537ab;  */

void FUN_101c53788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 101c537ac; end: 101c5385b; -[_TtC24SnapcodeValdiImageLoader24SnapcodeValdiImageLoader loadBytesWithRequestPayload:completion:] */

void FUN_101c537ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_11045d090;
  func_0x000107c613fc(&UNK_11045d090,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = puVar1;
  func_0x000101c53020();
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101c5385c; end: 101c539c7;  */

/* WARNING: Possible PIC construction at 0x000101c53948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c539a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5394c) */
/* WARNING: Removing unreachable block (ram,0x000101c539a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5385c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1;
  func_0x000107c5fd5c();
  if ((uVar1 & 1) != 0) {
    func_0x000101c53f38();
    puVar2 = &UNK_11045d128;
    func_0x000107c613f8(&UNK_11045d128,uVar1,0,0);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_1,uVar3);
    return;
  }
  *(ulong *)(param_2 + _DAT_112e0bd30) = param_1;
  puVar2 = PTR_PTR_1126b19a0;
  func_0x000107c61168(PTR_PTR_1126b19a0);
  uVar3 = *(undefined8 *)(param_3 + _DAT_112e0bcf8);
  func_0x000107c5fadc(uVar3,((undefined8 *)(param_3 + _DAT_112e0bcf8))[1]);
  func_0x000107c5daec(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c539c8; end: 101c539f3; -[_TtC24SnapcodeValdiImageLoader24SnapcodeValdiImageLoader init] */

void FUN_101c539c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapcodeValdiImageLoader.SnapcodeValdiImageLoader",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c539f4);
  (*pcVar1)();
}



/* Entry: 101c539f4; end: 101c53a2f; -[_TtC24SnapcodeValdiImageLoader24SnapcodeValdiImageLoader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c539f4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0bcf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0bcf8 + 8))
  ;
  return;
}



/* Entry: 101c53a30; end: 101c53b67;  */

/* WARNING: Possible PIC construction at 0x000101c53b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c53b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c53a30(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e0bd30);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112e0bd30) = 0;
  if (param_1 != 0) {
    func_0x000101c53f38();
    puVar1 = &UNK_11045d128;
    func_0x000107c613f8(&UNK_11045d128,param_1,0,0);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar2 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar4);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0bd28);
  puVar1 = &UNK_11045d068;
  func_0x000107c613fc(&UNK_11045d068,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(long *)(puVar1 + 0x18) = lVar3;
  func_0x000107c61174(uVar4);
  func_0x0001001ca524(2,2,0x2c,3,0,0,&UNK_10d9e5378,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c53b68; end: 101c53b7f;  */

void FUN_101c53b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c53b80,0,0);
  return;
}



/* Entry: 101c53b80; end: 101c53be7;  */

void FUN_101c53b80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c53be8,uVar1,uVar2);
  return;
}



/* Entry: 101c53be8; end: 101c53c87;  */

void FUN_101c53be8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450ac(param_1);
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c53c88,0,0);
  return;
}



/* Entry: 101c53c88; end: 101c53d9b;  */

void FUN_101c53c88(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c60bb8();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    if (lVar1 != 0) {
      lVar7 = *(long *)(unaff_x22 + 0x18);
      lVar2 = lVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar1);
      func_0x00010006c00c(lVar2,param_2);
      plVar6 = *(long **)(*(long *)(lVar7 + 0x40) + 0x28);
      *plVar6 = lVar2;
      plVar6[1] = param_2;
      func_0x000107c61450(lVar7);
      func_0x000107c61170(uVar9);
      func_0x00010006c090(lVar2,param_2);
      goto LAB_101c53d80;
    }
  }
  uVar3 = 0;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000101c53f38();
  puVar4 = &UNK_11045d128;
  func_0x000107c613f8(&UNK_11045d128,uVar3,0,0);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar5 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar5 = puVar4;
  func_0x000107c61454(uVar8,uVar3);
  func_0x000107c61170(uVar9);
LAB_101c53d80:
                    /* WARNING: Could not recover jumptable at 0x000101c53d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c53d9c; end: 101c53de7; -[_TtC24SnapcodeValdiImageLoader26SnapcodeScopeDelegateProxy snapcodeDidLoadWithError:] */

/* WARNING: Possible PIC construction at 0x000101c53dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c53dd4) */

void FUN_101c53d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  FUN_101c53a30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c53de8; end: 101c53e13; -[_TtC24SnapcodeValdiImageLoader26SnapcodeScopeDelegateProxy init] */

void FUN_101c53de8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapcodeValdiImageLoader.SnapcodeScopeDelegateProxy",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c53e14);
  (*pcVar1)();
}



/* Entry: 101c53e14; end: 101c53e17;  */

void FUN_101c53e14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c53e18; end: 101c53e4b;  */

void FUN_101c53e18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c53e4c; end: 101c53e77; -[_TtC24SnapcodeValdiImageLoader26SnapcodeScopeDelegateProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c53e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0bd28));
  return;
}



/* Entry: 101c53e78; end: 101c53e97;  */

void FUN_101c53e78(void)

{
  func_0x000107c61168(&PTR_PTR_1127fcd88);
  return;
}



/* Entry: 101c53e98; end: 101c53efb;  */

void FUN_101c53e98(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c53efc;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c53b80,0,0);
  return;
}



/* Entry: 101c53efc; end: 101c53f77;  */

void FUN_101c53efc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c53f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c53f78; end: 101c5406f;  */

/* WARNING: Possible PIC construction at 0x000100f153f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f153f4) */

void FUN_101c53f78(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_3 != 0) {
    func_0x000107c5ed2c(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c54070; end: 101c540af;  */

void FUN_101c54070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0bda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e53f0;
  func_0x000107c61520(&UNK_10d9e53f0,&UNK_11045d128);
  puRam0000000112e0bda0 = puVar1;
  return;
}



/* Entry: 101c540b0; end: 101c540c7;  */

void FUN_101c540b0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c53f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c540c8; end: 101c5419f;  */

undefined8 FUN_101c540c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11045d298;
  func_0x000107c613fc(&UNK_11045d298,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar2 = 6;
  func_0x0001001ca524(6,0x100,0x60,1,0,0,&UNK_10d9e54a0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return unaff_x20;
}



/* Entry: 101c541a0; end: 101c541b7;  */

void FUN_101c541a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c541b8,0,0);
  return;
}



/* Entry: 101c541b8; end: 101c5429f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c541b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  lVar3 = lVar2;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c43364();
    func_0x000107c615e8(lVar2);
    if ((int)lVar3 != 0) {
      func_0x000100083b20(unaff_x22 + 0x10);
      lVar3 = *(long *)(unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(lVar3 + _DAT_1130366d8);
      func_0x000107c6157c(uVar1);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(unaff_x22 + 0x18);
      func_0x000107c61574(uVar1);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000107c4b700(uVar1,param_2,0x67);
      func_0x000107c615e8(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101c5429c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c542a0; end: 101c542ef;  */

void FUN_101c542a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c543c4;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c541b8,0,0);
  return;
}



/* Entry: 101c542f0; end: 101c54337;  */

void FUN_101c542f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c54338; end: 101c54387;  */

void FUN_101c54338(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c54388;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c541b8,0,0);
  return;
}



/* Entry: 101c54388; end: 101c543c3;  */

void FUN_101c54388(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c543c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c543c4; end: 101c543c7;  */

void FUN_101c543c4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c543c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c543c8; end: 101c54447;  */

void FUN_101c543c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e05ca8,&UNK_10d9d8fc0);
  puVar1 = &UNK_11045d3e8;
  func_0x000107c613fc(&UNK_11045d3e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c54448,puVar1);
  return;
}



/* Entry: 101c54448; end: 101c54517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c54448(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101c555c8();
  lVar4 = param_2;
  func_0x000107c610f8();
  lVar3 = _DAT_112e0be88;
  puVar5 = PTR_PTR_1126a8ca0;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar3) = puVar5;
  lVar3 = _DAT_112e0be90;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar3) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112e0be98) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112e0bea0) = uVar2;
  lStack_60 = lVar4;
  lStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 101c54518; end: 101c545bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c54518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e0be88;
  puVar2 = PTR_PTR_1126a8ca0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0be90;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e0be98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e0bea0) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c545c0; end: 101c54637; -[_TtC40SCPlusBillboardFHPUIConfigImplementation32PlusBillboardFHPUIConfigProvider canHandleCampaignId:] */

uint FUN_101c545c0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffdd) && (param_2 == -0x7ffffffef0ffad80)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 101c54638; end: 101c54b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c54638(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100083b20(&puStack_a8);
  puVar5 = puStack_a8;
  uVar11 = *(undefined8 *)(puStack_a8 + _DAT_1130366d8);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(puVar5);
  func_0x0001000d224c(&puStack_a8);
  puVar5 = puStack_a8;
  puVar3 = puStack_a8;
  func_0x000107c3d104();
  func_0x000107c61180();
  func_0x000107c615e8(puVar5);
  uVar4 = 0;
  func_0x000103f77110(0);
  puVar5 = puVar3;
  func_0x000107c5f9e8(puVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar5 + 0x10) == 0) {
    func_0x000100083b20(&puStack_a8);
    puVar3 = puStack_a8;
    puVar6 = puStack_a8;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c54b3c);
      (*pcVar1)();
    }
    uVar4 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f0052b0);
    puVar3 = puVar6;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(uVar4);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c6142c(puVar5);
      puVar7 = PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c60734();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0be88);
      puVar3 = &UNK_11045d410;
      func_0x000107c613fc(&UNK_11045d410,0x38,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar11;
      *(undefined8 *)(puVar3 + 0x18) = uVar4;
      *(undefined8 *)(puVar3 + 0x20) = param_1;
      *(undefined **)(puVar3 + 0x28) = puVar7;
      *(long *)(puVar3 + 0x30) = lVar2;
      puVar5 = PTR_PTR_1126c0878;
      func_0x000107c610f8();
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_101c55320;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100288f10;
      puStack_90 = &UNK_11045d428;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c6157c(uVar11);
      func_0x000107c61174(uVar4);
      func_0x000107c61174(puVar7);
      func_0x000107c45ef4(0x4000000000000000);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_80);
      func_0x000107c5ba38(puVar5);
      func_0x0001000d224c(&puStack_a8);
      puVar3 = puStack_a8;
      puVar9 = puStack_a8;
      func_0x000107c3d108(puStack_a8);
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar10 = puVar9;
      func_0x000107c435e4(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar3 = &UNK_11045d460;
      func_0x000107c613fc(&UNK_11045d460,0x18,7);
      *(undefined **)(puVar3 + 0x10) = puVar5;
      pcStack_88 = (code *)0x101c55588;
      puStack_a8 = puVar6;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_101218f4c;
      puStack_90 = &UNK_11045d478;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar8);
      puVar3 = puStack_80;
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar3);
      puVar3 = puVar10;
      func_0x000107c5c320(puVar10);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c3e924(puVar3);
      func_0x000107c61170(puVar3);
      func_0x0001000d224c(&puStack_a8);
      puVar3 = puStack_a8;
      func_0x000107c4b700(puStack_a8);
      func_0x000107c615e8(puVar3);
      puVar3 = puVar7;
      func_0x000107c43bf4(puVar7);
      func_0x000107c61180();
      func_0x000107c61574(uVar11);
      func_0x000107c61170(puVar7);
      goto LAB_101c54b08;
    }
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e0be88);
    uVar4 = 0x64656c6261736964;
    func_0x000107c5fadc(0x64656c6261736964,0xee007974706d655f);
    func_0x000106c68a34(uVar12,uVar4,1);
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar6 = puVar5;
    FUN_101c55088(puVar5);
    func_0x000107c6142c(puVar5);
    uVar4 = 0;
    FUN_101c552dc(0);
    puVar5 = puVar6;
    func_0x000107c5fc48(puVar6,uVar4);
    func_0x000107c6142c(puVar6);
    func_0x000107c451b0(puVar3);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e0be88);
    uVar4 = 0x6d726177;
    func_0x000107c5fadc(0x6d726177,0xe400000000000000);
    func_0x000106c68a34(uVar12,uVar4,1);
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar6 = puVar5;
    FUN_101c55088(puVar5);
    func_0x000107c6142c(puVar5);
    uVar4 = 0;
    FUN_101c552dc(0);
    puVar5 = puVar6;
    func_0x000107c5fc48(puVar6,uVar4);
    func_0x000107c6142c(puVar6);
    func_0x000107c451b0(puVar3);
  }
  func_0x000107c61180();
  func_0x000107c61574(uVar11);
LAB_101c54b08:
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 101c54b3c; end: 101c54b6f; -[_TtC40SCPlusBillboardFHPUIConfigImplementation32PlusBillboardFHPUIConfigProvider configs] */

void FUN_101c54b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c54638();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c54b70; end: 101c54ba3;  */

void FUN_101c54b70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c54ba4; end: 101c54bfb; -[_TtC40SCPlusBillboardFHPUIConfigImplementation32PlusBillboardFHPUIConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c54be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c54be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c54ba4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0bea0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0be98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0be88));
  return;
}



/* Entry: 101c54bfc; end: 101c54c0f;  */

void FUN_101c54bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11045d4a0;
  return;
}



/* Entry: 101c54c10; end: 101c54c2b;  */

void FUN_101c54c10(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101c54c2c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101c54c2c; end: 101c54d4f;  */

undefined * FUN_101c54c2c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c54d50);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101c54d50();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101c552dc(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101c54d50; end: 101c54dab;  */

void FUN_101c54d50(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101c552dc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e0bf10;
  plVar5 = (long *)&UNK_10d9e5680;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101c54dac; end: 101c55087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c54dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 auStack_d0 [6];
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  puVar15 = auStack_a0 + lVar6;
  uStack_68 = 0;
  puStack_90 = &uStack_68;
  puStack_70 = puStack_90;
  func_0x000103f77490(FUN_101c555fc,auStack_80,0x101c55670,auStack_a0);
  func_0x000100029394(param_3 + _DAT_1138127b8,puVar15);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar7 + -8);
  uVar13 = 1;
  puVar8 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar7);
  if ((int)puVar8 == 1) {
    func_0x0001000293e4(puVar15);
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar16 + 8))(puVar15,lVar7);
    uVar1 = (ulong)puVar8 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar1 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar14 = PTR_PTR_1126ae8a8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar9 = PTR_PTR_1126aee78;
      func_0x000107c610f8(PTR_PTR_1126aee78);
      func_0x000107c453e4();
      func_0x000107c56f9c(puVar14);
      func_0x000107c61170(puVar9);
      puVar9 = puVar14;
      func_0x000107c4de20();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101c55088);
        (*pcVar5)();
      }
      func_0x000107c5fadc(puVar8,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c53f30(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      goto LAB_101c54f6c;
    }
    func_0x000107c6142c(uVar13);
  }
  puVar14 = (undefined *)0x0;
LAB_101c54f6c:
  uVar4 = uStack_68;
  uVar12 = *(undefined8 *)(param_3 + _DAT_113036830);
  uVar2 = ((undefined8 *)(param_3 + _DAT_113036830))[1];
  uVar11 = *(undefined8 *)(param_3 + _DAT_113036838);
  uVar3 = ((undefined8 *)(param_3 + _DAT_113036838))[1];
  uVar17 = *(undefined8 *)(param_3 + _DAT_1138127c0);
  puVar9 = PTR_PTR_1126aed90;
  func_0x000107c610f8(PTR_PTR_1126aed90);
  func_0x000107c5fadc(param_1,param_2);
  uVar10 = uVar12;
  func_0x000107c5fadc(uVar12,uVar2);
  func_0x000107c5fadc(uVar11,uVar3);
  func_0x000107c5fadc(uVar12,uVar2);
  *(undefined8 *)((long)auStack_d0 + lVar6 + 0x10) = 0;
  *(undefined8 *)((long)auStack_d0 + lVar6 + 0x18) = 0;
  *(undefined8 *)((long)auStack_d0 + lVar6 + 0x20) = uVar17;
  *(undefined8 *)((long)auStack_d0 + lVar6) = uVar4;
  *(undefined **)((long)auStack_d0 + lVar6 + 8) = puVar14;
  func_0x000107c45cc4(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  return puVar9;
}



/* Entry: 101c55088; end: 101c552db;  */

undefined * FUN_101c55088(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    FUN_101c54c10(0,lVar15,0);
    uVar1 = param_1 + 0x40;
    uVar16 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar11 = 0;
    iVar4 = *(int *)(param_1 + 0x24);
    do {
      if (uVar16 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552c8);
        (*pcVar6)();
      }
      uVar12 = uVar16 >> 6;
      uVar13 = 1L << (uVar16 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552cc);
        (*pcVar6)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552d0);
        (*pcVar6)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar16 * 0x10);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar16 * 8);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar10);
      FUN_101c54dac(uVar7,uVar3,uVar10);
      func_0x000107c61170(uVar10);
      func_0x000107c6142c(uVar3);
      uVar17 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar17) {
        FUN_101c54c10(1 < *(ulong *)(puVar5 + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar5 + uVar17 * 8 + 0x20) = uVar7;
      uVar17 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar17 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552d4);
        (*pcVar6)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar12 * 8);
      if ((uVar8 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552d8);
        (*pcVar6)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c552dc);
        (*pcVar6)();
      }
      uVar8 = uVar8 & -2L << (uVar16 & 0x3f);
      if (uVar8 == 0) {
        lVar14 = uVar12 << 6;
        puVar9 = (ulong *)(param_1 + 0x48 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar17 + 0x3f >> 6 <= uVar12) {
            FUN_101c555e8(uVar16,iVar4,0);
            uVar16 = uVar17;
            goto LAB_101c55124;
          }
          uVar13 = *puVar9;
          lVar14 = lVar14 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar13 == 0);
        FUN_101c555e8(uVar16,iVar4,0);
        uVar16 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + lVar14;
      }
      else {
        uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar16 & 0x7fffffffffffffc0;
      }
LAB_101c55124:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar15);
  }
  return puVar5;
}



/* Entry: 101c552dc; end: 101c5531f;  */

void FUN_101c552dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d38dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aed90;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d38dc8 = puVar1;
  return;
}



/* Entry: 101c55320; end: 101c5556b;  */

void FUN_101c55320(double param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  double dVar10;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  dVar10 = *(double *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&lStack_60);
  lVar5 = lStack_60;
  func_0x000107c3d104();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_60);
  uVar6 = 0;
  func_0x000103f77110(0);
  lVar7 = lVar5;
  func_0x000107c5f9e8(lVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar5);
  lStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  bVar4 = (param_2 & 1) == 0;
  uVar6 = 0x74756f656d6974;
  if (bVar4) {
    uVar6 = 0x646574696177;
  }
  uVar1 = 0xe700000000000000;
  if (bVar4) {
    uVar1 = 0xe600000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  bVar4 = *(long *)(lVar7 + 0x10) != 0;
  uVar6 = 0x7974706d65;
  if (bVar4) {
    uVar6 = 0x6465766c6f736572;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4) {
    uVar1 = 0xe800000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar6 = uStack_58;
  lVar5 = lStack_60;
  lVar8 = lStack_60;
  func_0x000107c5fadc(lStack_60,uStack_58);
  func_0x000106c68a34(uVar2,lVar8,1);
  func_0x000107c61170(lVar8);
  func_0x000107c5fadc(lVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c60734();
  dVar10 = (param_1 - dVar10) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c55564);
    (*pcVar3)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c55568);
    (*pcVar3)();
  }
  if (dVar10 < 9.223372036854776e+18) {
    func_0x000106c68ba8(uVar2,lVar5,(long)dVar10);
    func_0x000107c61170(lVar5);
    lVar5 = lVar7;
    FUN_101c55088(lVar7);
    func_0x000107c6142c(lVar7);
    uVar6 = 0;
    FUN_101c552dc(0);
    lVar7 = lVar5;
    func_0x000107c5fc48(lVar5,uVar6);
    func_0x000107c6142c(lVar5);
    func_0x000107c3fefc(uVar9);
    func_0x000107c61170(lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5556c);
  (*pcVar3)();
}


