/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033834d4; end: 10338350f;  */

void FUN_1033834d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010338350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103383510; end: 10338357f;  */

void FUN_103383510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103383580;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103383580; end: 103383583;  */

void FUN_103383580(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010338350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103383584; end: 103383617;  */

void FUN_103383584(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5f1a8,&UNK_10dbb9ee0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103383618,param_1);
  return;
}



/* Entry: 103383618; end: 10338361f;  */

void FUN_103383618(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x000103b6f0fc(0);
  func_0x000107c610f8();
  func_0x000103b6f040(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 103383620; end: 1033836b7;  */

void FUN_103383620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f5f1b0,&UNK_10dbb9ee8);
  puVar1 = &UNK_110647680;
  func_0x000107c613fc(&UNK_110647680,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103383868,puVar1);
  return;
}



/* Entry: 1033836b8; end: 103383867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033836b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = auStack_80;
  func_0x000100083b20(&lStack_58);
  uVar7 = *(undefined8 *)(lStack_58 + _DAT_11305e778);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lStack_58);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(uVar7);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar2 = 2;
  func_0x000100774b74(2,0x39,0,uStack_68,uStack_60,puVar1);
  func_0x0001000834e4(auStack_80);
  puVar3 = PTR_PTR_1126bc1b8;
  func_0x000107c61168(PTR_PTR_1126bc1b8);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f144680);
  func_0x000107c61174(uVar2);
  func_0x000100083b20(auStack_80);
  uVar7 = auStack_80[0];
  func_0x000107c44580(auStack_80[0]);
  func_0x000107c61180();
  func_0x000107c61170(auStack_80[0]);
  func_0x000106b139c8(puVar3,uVar4,uVar2,uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  puVar5 = PTR_PTR_1126ad1a0;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  lVar6 = 0;
  func_0x00010338331c();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar5;
  *(undefined8 *)(lVar6 + 0x18) = param_4;
  *param_1 = lVar6;
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 103383868; end: 103383893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103383868(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = auStack_80;
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_11305e778);
  func_0x000107c6157c(uVar8);
  func_0x000107c61170(lStack_58);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(uVar8);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar2 = 2;
  func_0x000100774b74(2,0x39,0,uStack_68,uStack_60,puVar1);
  func_0x0001000834e4(auStack_80);
  puVar3 = PTR_PTR_1126bc1b8;
  func_0x000107c61168(PTR_PTR_1126bc1b8);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f144680);
  func_0x000107c61174(uVar2);
  func_0x000100083b20(auStack_80);
  uVar8 = auStack_80[0];
  func_0x000107c44580(auStack_80[0]);
  func_0x000107c61180();
  func_0x000107c61170(auStack_80[0]);
  func_0x000106b139c8(puVar3,uVar4,uVar2,uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  puVar5 = PTR_PTR_1126ad1a0;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  lVar6 = 0;
  func_0x00010338331c();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar5;
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  *param_1 = lVar6;
  func_0x000107c6157c(uVar7);
  return;
}



/* Entry: 103383894; end: 103383a2b;  */

undefined1  [16] FUN_103383894(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1446a0);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f1446c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103383960);
  (*pcVar1)();
}



/* Entry: 103383a2c; end: 103383a73; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103383a2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5f1b8;
  func_0x000107c61428(param_1 + _DAT_112f5f1b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103383a74; end: 103383acb; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103383a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5f1b8;
  func_0x000107c61428(param_1 + _DAT_112f5f1b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103383acc; end: 103383beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103383acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f1c0);
  *puVar1 = 0xd00000000000005f;
  puVar1[1] = 0x800000010f144710;
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f200) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103383bec; end: 103383e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103383bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f1c0);
  *puVar1 = 0xd00000000000005f;
  puVar1[1] = 0x800000010f144710;
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f200) = 0;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103383e3c; end: 103383e9b; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin initWithContentBlocker:discoverFeedEventLogger:storiesConfigProvider:] */

void FUN_103383e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000103383d00(param_3,param_4,param_5);
  return;
}



/* Entry: 103383e9c; end: 103383fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103383e9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  puVar2 = auStack_50;
  func_0x000107c614f0();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f1c0);
  *puVar1 = 0xd00000000000005f;
  puVar1[1] = 0x800000010f144710;
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5f1d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f1f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f200) = 0;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar2;
}



/* Entry: 103383fd4; end: 10338401b; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin initWithContentBlocker:discoverFeedEventLogger:] */

void FUN_103383fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_103383e9c(param_3,param_4);
  return;
}



/* Entry: 10338401c; end: 10338402f; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338401c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f5f1d0,param_3);
  return;
}



/* Entry: 103384030; end: 1033840bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103384030(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f5f1d8,param_1);
  lVar1 = param_1;
  if (param_1 != 0) {
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
    }
  }
  func_0x000107c61604(unaff_x20 + _DAT_112f5f1c8,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1033840bc; end: 103384103; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin setOperaControlling:] */

void FUN_1033840bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103384030(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103384104; end: 10338417b; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin registeredEventsForOperaSession] */

void FUN_103384104(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb4988();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10338417c; end: 10338438f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338417c(long *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_78 [5];
  
  plVar1 = param_1;
  uVar5 = param_2;
  func_0x000103bb4988();
  if ((param_1 != (long *)*plVar1 || param_2 != plVar1[1]) &&
     (func_0x000107c605b8(), uVar5 = param_2, ((ulong)param_1 & 1) == 0)) {
    return;
  }
  if (param_3 == 0) {
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
  }
  else {
    lVar8 = *(long *)(param_3 + _DAT_11307abc8);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61434(lVar8);
      uVar6 = uVar5;
      func_0x000100029284(ppuVar2);
      if ((uVar6 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + (long)ppuVar2 * 0x20,alStack_78 + 1);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(lVar8);
        if (alStack_78[4] != 0) {
          uVar3 = 0;
          func_0x0001044b8ee8(0);
          plVar1 = alStack_78;
          func_0x000107c6147c(plVar1,alStack_78 + 1,PTR___sypN_11034f1a8 + 8,uVar3,6);
          if (((ulong)plVar1 & 1) == 0) {
            return;
          }
          lVar8 = *(long *)(alStack_78[0] + _DAT_11307f530);
          if (lVar8 != 0) {
            lVar9 = ((long *)(lVar8 + _DAT_11307f3b0))[1];
            if (lVar9 != 0) {
              lVar7 = *(long *)(lVar8 + _DAT_11307f3b0);
              func_0x000107c61174();
              func_0x000107c61434(lVar9);
              lVar4 = lVar7;
              func_0x000107c5fb5c(lVar7,lVar9);
              if (lVar4 != 0) {
                FUN_103385bf4(param_4);
                FUN_103384390(lVar7,lVar9,param_4,param_3);
                func_0x000107c6142c(lVar9);
                func_0x000107c61170(alStack_78[0]);
                func_0x000107c61170(lVar8);
                func_0x000107c6142c(param_4);
                return;
              }
              func_0x000107c6142c(lVar9);
              func_0x000107c61170(alStack_78[0]);
              func_0x000107c61170(lVar8);
              return;
            }
          }
          func_0x000107c61170(alStack_78[0]);
          return;
        }
        goto LAB_103384334;
      }
      func_0x000107c6142c(lVar8);
    }
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
    func_0x000107c6142c(uVar5);
  }
LAB_103384334:
  func_0x00010338601c(alStack_78 + 1,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103384390; end: 103384b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103384390(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 ****param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined1 uVar20;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_4 == (undefined8 ****)0x0) {
    uStack_98 = 0;
    ppuStack_a0 = (undefined8 ***)0x0;
    puStack_88 = (undefined *)0x0;
    puStack_90 = (undefined *)0x0;
LAB_1033844a4:
    pppuVar5 = (undefined8 ***)0x112d387f8;
    ppppuVar3 = (undefined8 ****)&ppuStack_a0;
    func_0x00010338601c(ppppuVar3,0x112d387f8,&UNK_10d902650);
LAB_1033844bc:
    uVar20 = 0;
  }
  else {
    lVar18 = *(long *)((long)param_4 + _DAT_11307abc8);
    ppuVar9 = &PTR____CFConstantStringClassReference_110dcadf8;
    uVar16 = param_2;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_103384494:
      uStack_98 = 0;
      ppuStack_a0 = (undefined8 ***)0x0;
      puStack_88 = (undefined *)0x0;
      puStack_90 = (undefined *)0x0;
      func_0x000107c6142c(uVar16);
      goto LAB_1033844a4;
    }
    func_0x000107c61434(lVar18);
    uVar14 = uVar16;
    func_0x000100029284(ppuVar9);
    if ((uVar14 & 1) == 0) {
      func_0x000107c6142c(lVar18);
      goto LAB_103384494;
    }
    func_0x0001000bb420(*(long *)(lVar18 + 0x38) + (long)ppuVar9 * 0x20,&ppuStack_a0);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(lVar18);
    if (puStack_88 == (undefined *)0x0) goto LAB_1033844a4;
    uVar2 = 0;
    func_0x0001044b8ee8(0);
    ppppuVar3 = &pppuStack_b0;
    pppuVar5 = &ppuStack_a0;
    func_0x000107c6147c(ppppuVar3,pppuVar5,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)ppppuVar3 & 1) == 0) goto LAB_1033844bc;
    uVar20 = *(undefined1 *)((long)pppuStack_b0 + _DAT_11307f670);
    ppppuVar3 = (undefined8 ****)pppuStack_b0;
    func_0x000107c61170();
  }
  func_0x00010338608c();
  puVar4 = &UNK_110647790;
  func_0x000107c613fc(&UNK_110647790,0x31,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  puVar4[0x30] = uVar20;
  func_0x000107c61434(param_3);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(ppppuVar3,pppuVar5);
  func_0x000107c6142c(pppuVar5);
  uVar15 = 0x800000010f1447c0;
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1447c0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_103385f10;
  ppuStack_a0 = (undefined8 **)PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_1106477a8;
  pppuVar5 = &ppuStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(pppuVar5);
  ppppuVar6 = (undefined8 ****)PTR_PTR_1126aed70;
  func_0x000107c61168();
  ppppuVar7 = ppppuVar6;
  func_0x000107c3dac8();
  func_0x000107c61180();
  func_0x000107c60bd0(pppuVar5);
  func_0x000107c61170(ppppuVar3);
  func_0x000107c61170(uVar2);
  puVar4 = puStack_78;
  func_0x000107c61574(puStack_78);
  func_0x0001033860b0();
  uVar2 = uVar15;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar15);
  pcStack_80 = FUN_1033852ac;
  puStack_78 = (undefined *)0x0;
  ppuStack_a0 = (undefined8 **)puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_1106477d0;
  pppuVar5 = &ppuStack_a0;
  func_0x000107c60bc4(pppuVar5);
  ppppuVar3 = ppppuVar6;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(pppuVar5);
  func_0x000107c61170(puVar4);
  puVar8 = puStack_78;
  func_0x000107c61574(puStack_78);
  func_0x0001033860d0();
  puVar4 = &UNK_110647808;
  func_0x000107c613fc(&UNK_110647808,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  func_0x000107c6157c(puVar4);
  func_0x000107c5fadc(puVar8,uVar2);
  func_0x000107c6142c(uVar2);
  pcStack_80 = (code *)0x103385f3c;
  ppuStack_a0 = (undefined8 **)puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_110647820;
  pppuVar5 = &ppuStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(pppuVar5);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(pppuVar5);
  func_0x000107c61170(puVar8);
  puVar1 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  lVar17 = *(long *)(unaff_x20 + _DAT_112f5f1f8);
  lVar18 = 0x112d360a8;
  func_0x000103385b7c(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
  uVar16 = (ulong)*(uint *)(lVar18 + 0x30) + 7 & 0x1fffffff8;
  if (lVar17 == 0) {
    ppppuVar12 = (undefined8 ****)(uVar16 + 0x10);
    func_0x000107c613fc();
    *(undefined8 *)(lVar18 + 0x18) = 5;
    *(undefined8 *)(lVar18 + 0x10) = 2;
    *(undefined8 *****)(lVar18 + 0x20) = ppppuVar7;
    *(undefined8 *****)(lVar18 + 0x28) = ppppuVar3;
    func_0x000107c61174(ppppuVar7);
    param_4 = ppppuVar3;
    func_0x000107c61174(ppppuVar3);
  }
  else {
    ppppuVar12 = (undefined8 ****)(uVar16 + 0x18);
    func_0x000107c613fc();
    *(undefined8 *)(lVar18 + 0x18) = 7;
    *(undefined8 *)(lVar18 + 0x10) = 3;
    *(undefined8 *****)(lVar18 + 0x20) = ppppuVar7;
    *(undefined8 *****)(lVar18 + 0x28) = ppppuVar6;
    *(undefined8 *****)(lVar18 + 0x30) = ppppuVar3;
    if (param_4 == (undefined8 ****)0x0) {
      func_0x000107c61174(ppppuVar7);
      func_0x000107c61174(ppppuVar3);
      param_4 = ppppuVar6;
      func_0x000107c61174(ppppuVar6);
    }
    else {
      ppppuVar19 = *(undefined8 *****)((long)param_4 + _DAT_11307abc8);
      ppuVar9 = &PTR____CFConstantStringClassReference_110f0dcf8;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dcf8);
      if (ppppuVar19[2] == (undefined8 ***)0x0) {
        uStack_98 = 0;
        ppuStack_a0 = (undefined8 ***)0x0;
        puStack_88 = (undefined *)0x0;
        puStack_90 = (undefined *)0x0;
        func_0x000107c61174(ppppuVar7);
        func_0x000107c61174(ppppuVar3);
        func_0x000107c61174(ppppuVar6);
        func_0x000107c61174(param_4);
      }
      else {
        func_0x000107c61174(ppppuVar7);
        func_0x000107c61174(ppppuVar3);
        func_0x000107c61174(ppppuVar6);
        func_0x000107c61174(param_4);
        func_0x000107c61434(ppppuVar19);
        ppppuVar10 = ppppuVar12;
        func_0x000100029284(ppuVar9);
        if (((ulong)ppppuVar10 & 1) == 0) {
          func_0x000107c6142c(ppppuVar19);
          uStack_98 = 0;
          ppuStack_a0 = (undefined8 ***)0x0;
          puStack_88 = (undefined *)0x0;
          puStack_90 = (undefined *)0x0;
        }
        else {
          func_0x0001000bb420(ppppuVar19[7] + (long)ppuVar9 * 4,&ppuStack_a0);
          func_0x000107c6142c(ppppuVar12);
          ppppuVar12 = ppppuVar19;
        }
      }
      func_0x000107c6142c(ppppuVar12);
      puVar4 = PTR___sypN_11034f1a8;
      if (puStack_88 == (undefined *)0x0) {
        func_0x000107c61170(param_4);
      }
      else {
        ppppuVar10 = &pppuStack_b0;
        ppppuVar12 = (undefined8 ****)&ppuStack_a0;
        func_0x000107c6147c(ppppuVar10,ppppuVar12,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        ppppuVar13 = (undefined8 ****)pppuStack_a8;
        pppuVar5 = pppuStack_b0;
        if (((ulong)ppppuVar10 & 1) == 0) {
          func_0x000107c61170(param_4);
          goto LAB_103384a44;
        }
        ppuVar9 = &PTR____CFConstantStringClassReference_110f0dd18;
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dd18);
        if (ppppuVar19[2] == (undefined8 ***)0x0) {
LAB_103384948:
          uStack_98 = 0;
          ppuStack_a0 = (undefined8 ***)0x0;
          puStack_88 = (undefined *)0x0;
          puStack_90 = (undefined *)0x0;
        }
        else {
          func_0x000107c61434(ppppuVar19);
          ppppuVar10 = ppppuVar12;
          func_0x000100029284(ppuVar9);
          if (((ulong)ppppuVar10 & 1) == 0) {
            func_0x000107c6142c(ppppuVar19);
            goto LAB_103384948;
          }
          func_0x0001000bb420(ppppuVar19[7] + (long)ppuVar9 * 4,&ppuStack_a0);
          func_0x000107c6142c(ppppuVar12);
          ppppuVar12 = ppppuVar19;
        }
        func_0x000107c6142c(ppppuVar12);
        puVar1 = PTR___sSSN_11034da80;
        if (puStack_88 != (undefined *)0x0) {
          ppppuVar19 = &pppuStack_b0;
          ppppuVar12 = (undefined8 ****)&ppuStack_a0;
          func_0x000107c6147c(ppppuVar19,ppppuVar12,puVar4 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppppuVar19 & 1) != 0) {
            func_0x00010338619c();
            lVar17 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar17 + 0x18) = 4;
            *(undefined8 *)(lVar17 + 0x10) = 2;
            *(undefined **)(lVar17 + 0x38) = puVar1;
            lVar11 = lVar17;
            func_0x00010075bbf0();
            *(undefined8 ****)(lVar17 + 0x20) = pppuVar5;
            *(undefined8 *****)(lVar17 + 0x28) = ppppuVar13;
            *(undefined **)(lVar17 + 0x60) = puVar1;
            *(long *)(lVar17 + 0x68) = lVar11;
            *(long *)(lVar17 + 0x40) = lVar11;
            *(undefined8 ****)(lVar17 + 0x48) = pppuStack_b0;
            *(undefined8 ****)(lVar17 + 0x50) = pppuStack_a8;
            ppppuVar13 = ppppuVar12;
            func_0x000107c5fb00(ppppuVar19,ppppuVar12,lVar17);
            ppppuVar10 = ppppuVar13;
            func_0x000107c6142c(ppppuVar12);
            func_0x000103386268();
            func_0x000107c61170(param_4);
            param_4 = ppppuVar19;
            ppppuVar19 = ppppuVar12;
            goto LAB_103384a5c;
          }
          func_0x000107c61170(param_4);
          func_0x000107c6142c(ppppuVar13);
          param_4 = ppppuVar13;
          goto LAB_103384a44;
        }
        func_0x000107c61170(param_4);
        func_0x000107c6142c(ppppuVar13);
      }
      ppppuVar12 = (undefined8 ****)0x112d387f8;
      param_4 = (undefined8 ****)&ppuStack_a0;
      func_0x00010338601c(param_4,0x112d387f8,&UNK_10d902650);
    }
  }
LAB_103384a44:
  func_0x000103386334();
  ppppuVar19 = param_4;
  ppppuVar10 = ppppuVar12;
  func_0x000103386400();
  ppppuVar13 = ppppuVar12;
LAB_103384a5c:
  puVar4 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(param_4,ppppuVar13);
  func_0x000107c6142c(ppppuVar13);
  func_0x000107c5fadc(ppppuVar19,ppppuVar10);
  func_0x000107c6142c(ppppuVar10);
  uVar2 = 0;
  FUN_103385fdc(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar17 = lVar18;
  func_0x000107c5fc48(lVar18,uVar2);
  func_0x000107c6142c(lVar18);
  func_0x000107c48d50(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(ppppuVar19);
  func_0x000107c61170(lVar17);
  func_0x000107c53dec(puVar4);
  func_0x000107c59bc8(puVar4);
  lVar18 = unaff_x20 + _DAT_112f5f1c8;
  func_0x000107c61618();
  if (lVar18 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(lVar18);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppppuVar3);
  func_0x000107c61170(ppppuVar6);
  func_0x000107c61170(ppppuVar7);
  return;
}



/* Entry: 103384ba0; end: 103384d43; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000103384c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103384c44) */

void FUN_103384ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10338417c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103384d44; end: 103384ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103384d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_a0 [12];
  uint uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_1 + _DAT_112f5f1e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    FUN_103385fdc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    uStack_94 = param_5;
    (**(code **)(lVar6 + 0x68))
              (puVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    puVar4 = puVar7;
    func_0x000107c5fff0(puVar7);
    (**(code **)(lVar6 + 8))(puVar7,lVar1);
    pcStack_70 = FUN_103384ef4;
    uStack_68 = 0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f3aa0;
    puStack_78 = &UNK_110647910;
    ppuVar5 = &puStack_90;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c3eb0c(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    param_5 = uStack_94;
    func_0x000107c61170(puVar4);
  }
  FUN_103384ef8(param_2,param_3,param_4,param_5 & 1);
  return;
}



/* Entry: 103384ef4; end: 103384ef7;  */

void FUN_103384ef4(void)

{
  return;
}



/* Entry: 103384ef8; end: 1033852ab;  */

/* WARNING: Removing unreachable block (ram,0x0001033852a4) */
/* WARNING: Removing unreachable block (ram,0x0001033852a8) */
/* WARNING: Removing unreachable block (ram,0x0001033852a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103384ef8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [144];
  
  lVar4 = 0x112e9e1e8;
  func_0x0001000285a8(0x112e9e1e8,&UNK_10daadee0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined8 *)(lVar4 + 0x20) = &PTR____CFConstantStringClassReference_110daf5b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  uVar2 = 0;
  FUN_103385fdc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar4 + 0x40) = uVar2;
  *(undefined **)(lVar4 + 0x28) = puVar1;
  *(undefined ***)(lVar4 + 0x48) = &PTR____CFConstantStringClassReference_110f42818;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *(undefined8 *)(lVar4 + 0x68) = uVar2;
  *(undefined **)(lVar4 + 0x50) = puVar1;
  lVar3 = lVar4;
  func_0x0001024932ac(lVar4);
  func_0x000107c61588(lVar4);
  uVar5 = 0x112e9e1f0;
  func_0x0001000285a8(0x112e9e1f0,&UNK_10db2b4f0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar5);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f5f1e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c6142c(lVar3);
  }
  else {
    uVar5 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f11a610);
    lVar6 = lVar3;
    func_0x0001024925ac(lVar3);
    func_0x000107c6142c(lVar3);
    lVar3 = lVar6;
    func_0x000107c5f9dc(lVar6,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar6);
    func_0x000107c41dbc(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f41518);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
  }
  uVar7 = unaff_x20 + _DAT_112f5f1d0;
  func_0x000107c61618();
  if (uVar7 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f5f1f0);
  if (lVar4 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000103f1e694();
      lVar3 = lVar4;
      func_0x000107c3ebc0();
      func_0x000107c615e8(lVar4);
      lVar4 = _DAT_112f5f1b8;
      if ((int)lVar3 != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112f5f1b8,auStack_108,0,0);
        lVar3 = unaff_x20 + lVar4;
        func_0x000107c61618();
        if (lVar3 != 0) {
          lVar6 = lVar3;
          func_0x000107c50648();
          func_0x000107c615e8(lVar3);
          if ((int)lVar6 != 0) {
            uVar8 = unaff_x20 + lVar4;
            func_0x000107c61618();
            if (uVar8 != 0) {
              uVar9 = uVar8;
              func_0x000107c61150();
              if ((uVar9 & 1) != 0) {
                func_0x000107c615f0(uVar7);
                func_0x000107c5fadc(param_1,param_2);
                if (param_3 != 0) {
                  func_0x000107c5fc48(param_3,uVar2);
                }
                func_0x000107c4fed0(uVar8);
                func_0x000107c615e8(uVar8);
                func_0x000107c615ec(uVar7,2);
                func_0x000107c61170(param_1);
                func_0x000107c61170(param_3);
                return;
              }
              func_0x000107c615e8(uVar7);
              uVar7 = uVar8;
            }
            goto LAB_10338526c;
          }
        }
      }
    }
  }
  lVar4 = _DAT_112f5f1b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f5f1b8,auStack_f0,0,0);
  lVar4 = unaff_x20 + lVar4;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4fecc(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(param_1);
  }
LAB_10338526c:
  func_0x000107c615e8(uVar7);
  return;
}



/* Entry: 1033852ac; end: 1033852b7;  */

void FUN_1033852ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1033852b8; end: 103385357;  */

void FUN_1033852b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x103385f44;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110647848;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103385358; end: 1033853ab;  */

void FUN_103385358(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033853ac();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033853ac; end: 103385947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033853ac(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 auStack_110 [7];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  puStack_a8 = auStack_d0 + -extraout_x8;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)(auStack_d0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined1 *)(lVar2 - extraout_x12);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar17 = (long)puVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar11 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - extraout_x12_02;
  func_0x000107c5edd0(lVar11,*(undefined8 *)(unaff_x20 + _DAT_112f5f1c0),
                      ((undefined8 *)(unaff_x20 + _DAT_112f5f1c0))[1]);
  lVar2 = lVar11;
  (**(code **)(lVar13 + 0x30))(lVar11,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x00010338601c(lVar11,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcStack_b8 = *(code **)(lVar13 + 0x20);
    (*pcStack_b8)(lVar14,lVar11,lVar3);
    lVar2 = unaff_x20 + _DAT_112f5f1c8;
    func_0x000107c61618();
    if (lVar2 == 0) {
      pcVar12 = *(code **)(lVar13 + 8);
    }
    else {
      lStack_b0 = lVar14;
      if (*(long *)(unaff_x20 + _DAT_112f5f1f8) == 0) {
        (**(code **)(lVar13 + 8))(lVar14,lVar3);
        func_0x000107c61170(lVar2);
        return;
      }
      func_0x000100083b20(&puStack_90);
      puStack_c8 = puStack_90;
      func_0x000100083b20(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c5194c();
      func_0x000107c61180();
      lStack_c0 = lVar2;
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c61170(puStack_90);
      }
      else {
        func_0x000107c61170();
        puVar4 = puStack_90;
        func_0x000107c4ffe8(puStack_90);
        func_0x000107c61180();
        func_0x000107c61170(puStack_90);
        func_0x000107c615e8(puVar4);
      }
      pcVar12 = *(code **)(lVar13 + 0x38);
      (*pcVar12)(lVar10,1,1,lVar3);
      (*pcVar12)(lVar17,1,1,lVar3);
      lVar2 = 0;
      func_0x0001046305a8();
      puVar1 = puStack_a8;
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puStack_a8,1,1,lVar2);
      *(undefined1 *)(lVar14 + -8) = 0;
      *(undefined8 *)(lVar14 + -0x10) = 0;
      *(undefined8 *)(lVar14 + -0x18) = 0;
      *(undefined8 *)(lVar14 + -0x20) = 0;
      *(undefined8 *)(lVar14 + -0x28) = 0;
      *(undefined8 *)(lVar14 + -0x30) = 0;
      *(undefined8 *)(lVar14 + -0x38) = 0;
      *(undefined1 **)(lVar14 + -0x40) = puVar1;
      puStack_a8 = puVar15;
      func_0x000104638e24(puVar15,0x15,lVar10,0,lVar17,0,0,0,0);
      puVar5 = PTR_PTR_1126ae560;
      func_0x000107c610f8(PTR_PTR_1126ae560);
      func_0x000107c453e4();
      puVar8 = puVar5;
      func_0x000107c43bf4();
      func_0x000107c61180();
      (**(code **)(lVar13 + 0x10))(lVar19,lStack_b0,lVar3);
      uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar16 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
      puVar4 = &UNK_110647880;
      func_0x000107c613fc(&UNK_110647880,uVar16 + lVar18,uVar9 | 7);
      (*pcStack_b8)(puVar4 + uVar16,lVar19,lVar3);
      pcStack_70 = FUN_103385f4c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100e38b5c;
      puStack_78 = &UNK_110647898;
      ppuVar6 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_68);
      pcVar7 = "openLearnMorePage()";
      func_0x0001000c10c0("openLearnMorePage()");
      func_0x000107c61180();
      func_0x000107c5dc68(puVar8);
      func_0x000107c615e8(pcVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar8);
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      if (*(long *)(unaff_x20 + _DAT_112f5f200) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000956f0(0);
        func_0x000107c610f8();
        func_0x000107c453e4();
      }
      else {
        func_0x000100083b20(&puStack_90);
        puVar8 = puStack_90;
      }
      lVar2 = lStack_a0;
      puVar15 = puStack_a8;
      func_0x000100e39298(puStack_a8,lStack_a0);
      func_0x000104652fec(0);
      func_0x000107c610f8();
      func_0x000104651d90(lVar2);
      func_0x000107c61174(puVar4);
      lVar14 = lVar2;
      func_0x000103c5d254(lVar2,puVar5,puVar4,unaff_x20,0,0,0,0);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
      puVar8 = puStack_c8;
      func_0x000107c42c1c(puStack_c8);
      func_0x000107c61170(lStack_c0);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar14);
      func_0x000100e392dc(puVar15);
      pcVar12 = *(code **)(lVar13 + 8);
      lVar14 = lStack_b0;
    }
    (*pcVar12)(lVar14,lVar3);
  }
  return;
}



/* Entry: 103385948; end: 103385997;  */

void FUN_103385948(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103385998; end: 1033859f7; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin init] */

void FUN_103385998(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentBlockingOperaPlugin.SCContentBlockingOperaPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033859c4);
  (*pcVar1)();
}



/* Entry: 1033859f8; end: 103385ab3; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103385a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103385a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103385a7c) */
/* WARNING: Removing unreachable block (ram,0x000103385a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033859f8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5f1e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5f1e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5f1f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5f1f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5f200));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5f1c0 + 8));
  param_1 = param_1 + _DAT_112f5f1b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103385ab4; end: 103385bf3; -[_TtC28SCContentBlockingOperaPlugin28SCContentBlockingOperaPlugin webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103385ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  if (*(long *)(param_1 + _DAT_112f5f1f8) != 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
    func_0x000100083b20(&lStack_38);
    lVar1 = lStack_38;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lStack_38);
    }
    else {
      func_0x000107c61170();
      lVar1 = lStack_38;
      func_0x000107c4ffe8(lStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lStack_38);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103385bf4; end: 103385eef;  */

undefined * FUN_103385bf4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_98;
  undefined *apuStack_90 [4];
  undefined1 auStack_70 [32];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    uVar6 = 0;
    lVar2 = -0x2fffffffffffffea;
    func_0x000100029284(0xd000000000000016);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,apuStack_90);
      func_0x000107c6142c(param_1);
      func_0x000100102924(apuStack_90,auStack_70);
      func_0x0001000bb420(auStack_70,apuStack_90);
      uVar3 = 0x112da1fa0;
      func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
      puVar1 = PTR___sypN_11034f1a8;
      ppuVar4 = &puStack_98;
      func_0x000107c6147c(ppuVar4,apuStack_90,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000100183ab8(auStack_70);
        return puStack_98;
      }
      func_0x0001000bb420(auStack_70,apuStack_90);
      uVar3 = 0x112d4b170;
      func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
      ppuVar4 = &puStack_98;
      func_0x000107c6147c(ppuVar4,apuStack_90,puVar1 + 8,uVar3,6);
      if ((int)ppuVar4 == 0) {
        func_0x0001000bb420(auStack_70,apuStack_90);
        uVar3 = 0x112d5ac28;
        func_0x0001000285a8(0x112d5ac28,&UNK_10d921e20);
        ppuVar4 = &puStack_98;
        func_0x000107c6147c(ppuVar4,apuStack_90,puVar1 + 8,uVar3,6);
        if ((int)ppuVar4 == 0) {
          func_0x000100183ab8(auStack_70);
          return (undefined *)0x0;
        }
        lVar2 = *(long *)(puStack_98 + 0x10);
        if (lVar2 == 0) goto LAB_103385ec8;
        apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001002ecff4(0,lVar2,0);
        do {
          puVar1 = apuStack_90[0];
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c490d8();
          uVar6 = *(ulong *)(puVar1 + 0x10);
          apuStack_90[0] = puVar1;
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
            func_0x0001002ecff4(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(apuStack_90[0] + 0x10) = uVar6 + 1;
          *(undefined **)(apuStack_90[0] + uVar6 * 8 + 0x20) = puVar5;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      else {
        lVar2 = *(long *)(puStack_98 + 0x10);
        if (lVar2 == 0) {
LAB_103385ec8:
          func_0x000107c6142c(puStack_98);
          func_0x000100183ab8(auStack_70);
          return PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001002ecff4(0,lVar2,0);
        do {
          puVar1 = apuStack_90[0];
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          uVar6 = *(ulong *)(puVar1 + 0x10);
          apuStack_90[0] = puVar1;
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
            func_0x0001002ecff4(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(apuStack_90[0] + 0x10) = uVar6 + 1;
          *(undefined **)(apuStack_90[0] + uVar6 * 8 + 0x20) = puVar5;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      puVar1 = apuStack_90[0];
      func_0x000107c6142c(puStack_98);
      func_0x000100183ab8(auStack_70);
      return puVar1;
    }
    func_0x000107c6142c(param_1);
  }
  return (undefined *)0x0;
}



/* Entry: 103385ef0; end: 103385f0f;  */

void FUN_103385ef0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2b88);
  return;
}



/* Entry: 103385f10; end: 103385f4b;  */

void FUN_103385f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  ppuVar7 = &puStack_70;
  puVar6 = &UNK_1106478d0;
  func_0x000107c613fc(&UNK_1106478d0,0x31,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  puVar6[0x30] = uVar5;
  pcStack_50 = FUN_103385fcc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106478e8;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 103385f4c; end: 103385f97;  */

void FUN_103385f4c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103385f98; end: 103385fcb;  */

void FUN_103385f98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103385fcc; end: 103385fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103385fcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 auStack_a0 [12];
  uint uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  bVar4 = *(byte *)(unaff_x20 + 0x30);
  uVar11 = (uint)bVar4;
  lVar5 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar6 + _DAT_112f5f1e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar7 = uVar2;
    func_0x000107c5fadc(uVar2,uVar1);
    FUN_103385fdc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    uStack_94 = (uint)bVar4;
    (**(code **)(lVar10 + 0x68))
              (puVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar5);
    puVar8 = puVar12;
    func_0x000107c5fff0(puVar12);
    (**(code **)(lVar10 + 8))(puVar12,lVar5);
    pcStack_70 = FUN_103384ef4;
    uStack_68 = 0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f3aa0;
    puStack_78 = &UNK_110647910;
    ppuVar9 = &puStack_90;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c3eb0c(lVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar7);
    uVar11 = uStack_94;
    func_0x000107c61170(puVar8);
  }
  FUN_103384ef8(uVar2,uVar1,uVar3,uVar11 & 1);
  return;
}



/* Entry: 103385fdc; end: 10338605b;  */

void FUN_103385fdc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10338605c; end: 1033860eb;  */

void FUN_10338605c(long param_1,long param_2)

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



/* Entry: 1033860ec; end: 1033864cb;  */

undefined1  [16] FUN_1033860ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f144820);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338619c);
  (*pcVar1)();
}



/* Entry: 1033864cc; end: 1033864db; -[SCPlaceStoryPageLaunchAnalytics sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033864cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f230);
}



/* Entry: 1033864dc; end: 1033864eb; -[SCPlaceStoryPageLaunchAnalytics contentViewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033864dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f238);
}



/* Entry: 1033864ec; end: 1033864fb; -[SCPlaceStoryPageLaunchAnalytics mapStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033864ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f240);
}



/* Entry: 1033864fc; end: 10338650b; -[SCPlaceStoryPageLaunchAnalytics mapSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033864fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f248);
}



/* Entry: 10338650c; end: 103386567; -[SCPlaceStoryPageLaunchAnalytics mapPlaceComponentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338650c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f5f250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f5f250);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103386568; end: 103386577; -[SCPlaceStoryPageLaunchAnalytics mapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103386568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f258);
}



/* Entry: 103386578; end: 103386587; -[SCPlaceStoryPageLaunchAnalytics mapViewportSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103386578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f260);
}



/* Entry: 103386588; end: 103386597; -[SCPlaceStoryPageLaunchAnalytics placeSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103386588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f268);
}



/* Entry: 103386598; end: 10338667b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5f230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f238) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f240) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f248) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f250);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f258) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f260) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f268) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338667c; end: 103386773; -[SCPlaceStoryPageLaunchAnalytics initWithSourceType:contentViewSource:mapStoryType:mapSourceType:mapPlaceComponentType:mapSessionId:mapViewportSessionId:placeSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338667c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112f5f230) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f5f238) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f5f240) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f5f248) = param_6;
  plVar1 = (long *)(param_1 + _DAT_112f5f250);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f5f258) = param_8;
  *(undefined8 *)(param_1 + _DAT_112f5f260) = param_9;
  *(undefined8 *)(param_1 + _DAT_112f5f268) = param_10;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103386774; end: 1033867d3; -[SCPlaceStoryPageLaunchAnalytics init] */

void FUN_103386774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaceStoryPageLaunchAPI.PlaceStoryPageLaunchAnalytics",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033867a0);
  (*pcVar1)();
}



/* Entry: 1033867d4; end: 1033867e7; -[SCPlaceStoryPageLaunchAnalytics .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033867d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f5f250 + 8))
  ;
  return;
}



/* Entry: 1033867e8; end: 103386807;  */

void FUN_1033867e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2c90);
  return;
}



/* Entry: 103386808; end: 10338682f;  */

void FUN_103386808(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106479d0;
  if (lRam0000000112f5f298 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f5f298 = param_1;
  }
  return;
}



/* Entry: 103386830; end: 103386873;  */

void FUN_103386830(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103386874; end: 10338687b;  */

undefined8 FUN_103386874(void)

{
  return 1;
}



/* Entry: 10338687c; end: 10338691b;  */

void FUN_10338687c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10338691c; end: 10338691f;  */

void FUN_10338691c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5f2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb9fe0;
  func_0x000107c61520(&UNK_10dbb9fe0,&UNK_110647a80);
  puRam0000000112f5f2a8 = puVar1;
  return;
}



/* Entry: 103386920; end: 10338695f;  */

void FUN_103386920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5f2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb9fe0;
  func_0x000107c61520(&UNK_10dbb9fe0,&UNK_110647a80);
  puRam0000000112f5f2a8 = puVar1;
  return;
}



/* Entry: 103386960; end: 103386a6f;  */

void FUN_103386960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103386a70; end: 103386b47;  */

void FUN_103386a70(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103386b48; end: 103386b67;  */

void FUN_103386b48(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103386b68; end: 103386ba7;  */

void FUN_103386b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5f2b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbba0b0;
  func_0x000107c61520(&UNK_10dbba0b0,&UNK_110647b00);
  puRam0000000112f5f2b0 = puVar1;
  return;
}



/* Entry: 103386ba8; end: 103386bb7;  */

undefined1  [16] FUN_103386ba8(void)

{
  return ZEXT816(0x110647b00);
}



/* Entry: 103386bb8; end: 103386c03; -[SCPlaceStoryPageLaunchPayload verrazanoId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386bb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f5f2b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f5f2b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103386c04; end: 103386c13; -[SCPlaceStoryPageLaunchPayload useGooglePhotos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103386c04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f5f2c0);
}



/* Entry: 103386c14; end: 103386c23; -[SCPlaceStoryPageLaunchPayload includesProviderPhotos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103386c14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f5f2c8);
}



/* Entry: 103386c24; end: 103386c33; -[SCPlaceStoryPageLaunchPayload useAlternateRanking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103386c24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f5f2d0);
}



/* Entry: 103386c34; end: 103386c3f; -[SCPlaceStoryPageLaunchPayload requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386c34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f5f2d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f5f2d8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103386c40; end: 103386c4b; -[SCPlaceStoryPageLaunchPayload initialSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386c40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f5f2e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f5f2e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103386c4c; end: 103386ca3;  */

void FUN_103386c4c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103386ca4; end: 103386cff; -[SCPlaceStoryPageLaunchPayload prefetchedStorySequences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386ca4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f5f2e8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001044b2684(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103386d00; end: 103386d0f; -[SCPlaceStoryPageLaunchPayload source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103386d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f2f0);
}



/* Entry: 103386d10; end: 103386d1f; -[SCPlaceStoryPageLaunchPayload transition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103386d10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f5f2f8);
}



/* Entry: 103386d20; end: 103386d2f; -[SCPlaceStoryPageLaunchPayload analytics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f5f300));
  return;
}



/* Entry: 103386d30; end: 103386d4f; -[SCPlaceStoryPageLaunchPayload uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386d30(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f5f308));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103386d50; end: 103386d5f; -[SCPlaceStoryPageLaunchPayload baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f5f310));
  return;
}



/* Entry: 103386d60; end: 103387007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103386d60(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f2b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f5f2c0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112f5f2c8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f5f2d0) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f2d8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5f2e0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f2e8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f2f0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f2f8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f300) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f308) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112f5f310) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103387008; end: 10338711f; -[SCPlaceStoryPageLaunchPayload initWithVerrazanoId:useGooglePhotos:includesProviderPhotos:useAlternateRanking:requestId:initialSnapId:prefetchedStorySequences:source:transition:analytics:uiContainer:baseView:] */

void FUN_103387008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  if (param_7 == 0) {
    param_7 = 0;
    uVar3 = 0;
    uVar2 = param_2;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_7);
    uVar2 = uVar3;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  if (param_9 != 0) {
    uVar1 = 0;
    func_0x0001044b2684(0);
    func_0x000107c5fc54(param_9,uVar1);
  }
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  func_0x000107c61174();
  func_0x000103386eb4(param_3,param_2,param_4,param_5,param_6,param_7,uVar3,param_8,uVar2,param_9,
                      param_10,param_11,param_12,param_13,param_14);
  return;
}



/* Entry: 103387120; end: 10338717f; -[SCPlaceStoryPageLaunchPayload init] */

void FUN_103387120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaceStoryPageLaunchAPI.PlaceStoryPageLaunchPayload",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338714c);
  (*pcVar1)();
}



/* Entry: 103387180; end: 103387213; -[SCPlaceStoryPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033871e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033871ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103387180(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5f2b8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5f2d8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5f2e0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5f2e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5f300));
  return;
}



/* Entry: 103387214; end: 103387233;  */

void FUN_103387214(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2d88);
  return;
}



/* Entry: 103387234; end: 10338724b;  */

bool FUN_103387234(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10338724c; end: 10338728b;  */

void FUN_10338724c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5f340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbba190;
  func_0x000107c61520(&UNK_10dbba190,&UNK_110647b78);
  puRam0000000112f5f340 = puVar1;
  return;
}



/* Entry: 10338728c; end: 103387337;  */

void FUN_10338728c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103387338; end: 10338736f;  */

void FUN_103387338(ulong *param_1,ulong *param_2)

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



/* Entry: 103387370; end: 1033873db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103387370(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103387764();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5f350) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1033873dc; end: 103387447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033873dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5f350) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103387448; end: 1033874a7; -[_TtC42MobileSettingsScopedFactoryServiceProvider30SCMobileSettingsScopedServices init] */

void FUN_103387448(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MobileSettingsScopedFactoryServiceProvider.SCMobileSettingsScopedServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103387474);
  (*pcVar1)();
}



/* Entry: 1033874a8; end: 1033874b7; -[_TtC42MobileSettingsScopedFactoryServiceProvider30SCMobileSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033874a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5f350));
  return;
}



/* Entry: 1033874b8; end: 103387523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033874b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110647da8;
  func_0x000107c613fc(&UNK_110647da8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1033877fc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103387524; end: 1033875bf;  */

void FUN_103387524(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110647cb8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110647cb8;
  return;
}



/* Entry: 1033875c0; end: 1033875f7;  */

void FUN_1033875c0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1033875f8; end: 1033875ff;  */

undefined8 FUN_1033875f8(void)

{
  return 0x1b;
}



/* Entry: 103387600; end: 103387733;  */

void FUN_103387600(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110647dd0;
  func_0x000107c613fc(&UNK_110647dd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1033877d4;
  func_0x00010058fa64(FUN_1033877d4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103387734; end: 103387763;  */

undefined ** FUN_103387734(void)

{
  return &PTR_DAT_113066da8;
}



/* Entry: 103387764; end: 103387783;  */

void FUN_103387764(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2ea0);
  return;
}


