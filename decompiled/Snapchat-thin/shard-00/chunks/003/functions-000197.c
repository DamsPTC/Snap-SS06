/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100474ad4; end: 100474c7b;  */

void FUN_100474ad4(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136a1dd0 & 1) == 0) {
    iVar2 = 0x136a1dd0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      FUN_100474c7c(&uStack_38);
      uVar3 = uStack_38;
      uStack_38 = 0;
      FUN_100474c88(&uStack_38,0);
      uRam00000001136a1dc8 = uVar3;
      func_0x000107c60e4c(0x1136a1dd0);
    }
  }
  uVar3 = uRam00000001136a1dc8;
  FUN_100460220(uRam00000001136a1dc8,"native");
  if ((int)uVar3 == 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                  ,0xbd,0,"Using native dns resolver");
    plVar5 = (long *)0x8;
    func_0x000107c60e20();
    *plVar5 = (long)&PTR_DAT_1107c27c0;
    plStack_40 = plVar5;
    FUN_100474d88(param_1 + 0xf0,&plStack_40);
    plVar5 = plStack_40;
    plStack_40 = (long *)0x0;
  }
  else {
    uVar1 = param_1 + 0xf0;
    uVar4 = uVar1;
    FUN_100474d3c(uVar1,&UNK_10f75d4dd,3);
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                  ,0xc2,0,"Using native dns resolver");
    plVar5 = (long *)0x8;
    func_0x000107c60e20();
    *plVar5 = (long)&PTR_DAT_1107c27c0;
    plStack_48 = plVar5;
    FUN_100474d88(uVar1,&plStack_48);
    plVar5 = plStack_48;
    plStack_48 = (long *)0x0;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return;
}



/* Entry: 100474c7c; end: 100474c87;  */

void FUN_100474c7c(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_1130a58c0;
  FUN_10045ff80();
  FUN_10046018c();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR_s__1130a58c8;
    FUN_1004601ac();
  }
  *param_1 = ppuVar1;
  return;
}



/* Entry: 100474c88; end: 100474caf;  */

void FUN_100474c88(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_100460314();
  }
  return;
}



/* Entry: 100474cb0; end: 100474d3b;  */

long * FUN_100474cb0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_100475284(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_100475284(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 100474d3c; end: 100474d77;  */

bool FUN_100474d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_100474cb0(param_1,&uStack_30);
  return param_1 + 8 != lVar1;
}



/* Entry: 100474d78; end: 100474d87;  */

undefined1  [16] FUN_100474d78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 3;
  auVar1._0_8_ = &UNK_10f75d4dd;
  return auVar1;
}



/* Entry: 100474d88; end: 100474ddf;  */

long * FUN_100474d88(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long *plStack_30;
  undefined8 *puStack_28;
  
  pplVar4 = &plStack_30;
  pplVar5 = &plStack_30;
  plVar1 = (long *)*param_2;
  puVar3 = param_2;
  (**(code **)(*plVar1 + 0x10))();
  plStack_30 = plVar1;
  puStack_28 = puVar3;
  func_0x000100474e7c(param_1,&plStack_30,&plStack_30,param_2);
  if (((ulong)pplVar4 & 1) != 0) {
    return param_1;
  }
  func_0x000107c2c38c();
  plVar6 = param_1 + 1;
  plVar1 = plVar6;
  if ((long *)*plVar6 != (long *)0x0) {
    param_1 = param_1 + 2;
    plVar2 = (long *)*plVar6;
    do {
      while( true ) {
        plVar6 = plVar2;
        plVar2 = param_1;
        FUN_100475284(param_1,pplVar5,plVar6 + 4);
        if ((int)plVar2 == 0) break;
        plVar2 = (long *)*plVar6;
        plVar1 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_100474e60;
      }
      plVar2 = param_1;
      FUN_100475284(param_1,plVar6 + 4,pplVar5);
      if ((int)plVar2 == 0) break;
      plVar1 = plVar6 + 1;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_100474e60:
  *pplVar4 = plVar6;
  return plVar1;
}



/* Entry: 100474de0; end: 100474f13;  */

long * FUN_100474de0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_100475284(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_100474e60;
      }
      lVar2 = param_1;
      FUN_100475284(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_100474e60:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 100474f14; end: 1004750ab;  */

void FUN_100474f14(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        plVar5 = plVar3;
        if ((long *)*plVar3 != param_2) {
          plVar5 = (long *)plVar3[1];
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          plVar3 = (long *)*plVar2;
        }
        *(undefined1 *)(plVar5 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar3[2] = plVar2[2];
        ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
LAB_1004750a4:
        plVar2[2] = (long)plVar3;
        return;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        plVar3 = param_2;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar3[2] = plVar2[2];
      ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      goto LAB_1004750a4;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}



/* Entry: 1004750ac; end: 1004750ff;  */

void FUN_1004750ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 100475100; end: 100475273;  */

void FUN_100475100(long param_1)

{
  long *plVar1;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  param_1 = param_1 + 0xf0;
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2cb0;
  plStack_28 = plVar1;
  FUN_100474d88(param_1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2d68;
  plStack_30 = plVar1;
  FUN_100474d88(param_1,&plStack_30);
  plVar1 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2dc0;
  plStack_38 = plVar1;
  FUN_100474d88(param_1,&plStack_38);
  plVar1 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2e18;
  plStack_40 = plVar1;
  FUN_100474d88(param_1,&plStack_40);
  plVar1 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 100475274; end: 100475283;  */

undefined1  [16] FUN_100475274(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = &DAT_10f3f0b4e;
  return auVar1;
}



/* Entry: 100475284; end: 1004752cb;  */

uint FUN_100475284(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_3[1];
  uVar3 = uVar5;
  if (uVar4 <= uVar5) {
    uVar3 = uVar4;
  }
  func_0x000107c610b0(uVar6,*param_3,uVar3);
  uVar1 = 0;
  if (uVar4 < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar2 = 0;
  if (uVar4 != uVar5) {
    uVar2 = uVar1;
  }
  uVar1 = (uint)uVar6;
  if ((uint)uVar6 == 0) {
    uVar1 = uVar2;
  }
  return uVar1 >> 0x1f;
}



/* Entry: 1004752cc; end: 10047537f; -[SCDisposableCreate initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004752cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e558;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796788);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796788) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100475380; end: 100475387;  */

void FUN_100475380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100475388; end: 1004753c7; -[SCLensProcessingGlobalTracker lensCoreDestroyedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100475388(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004753c8; end: 1004753f7;  */

undefined1  [16] FUN_1004753c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = &DAT_10f55a0ed;
  return auVar1;
}



/* Entry: 1004753f8; end: 10047547b;  */

void FUN_1004753f8(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2af0;
  plStack_28 = plVar1;
  FUN_100474d88(param_1 + 0xf0,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10047547c; end: 10047548b;  */

undefined1  [16] FUN_10047547c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = &UNK_10f5893af;
  return auVar1;
}



/* Entry: 10047548c; end: 1004756c3;  */

void FUN_10047548c(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_DAT_1107c3a70;
  pcStack_50 = FUN_100560c58;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1,1,0x7ffffffe,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_58;
LAB_100475504:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_100475504;
  }
  ppuStack_78 = &PTR_DAT_1107c3a70;
  pcStack_70 = FUN_100560c58;
  pppuStack_60 = &ppuStack_78;
  FUN_1004732f0(param_1,3,0x7ffffffe,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_78;
LAB_100475550:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_100475550;
  }
  ppuStack_98 = &PTR_DAT_1107c3a70;
  puStack_90 = &UNK_104adb718;
  pppuStack_80 = &ppuStack_98;
  FUN_1004732f0(param_1,4,0x7ffffffe,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_98;
LAB_1004755a4:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_1004755a4;
  }
  ppuStack_b8 = &PTR_DAT_1107c3a70;
  puStack_b0 = &UNK_104adb770;
  pppuStack_a0 = &ppuStack_b8;
  FUN_1004732f0(param_1,4,0x7ffffffd,&ppuStack_b8);
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_b8;
LAB_1004755fc:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_a0;
    if (pppuStack_a0 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_1004755fc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar3 = 4;
    pppuVar2 = &ppuStack_b8;
  }
  else {
    if (pppuStack_a0 == (undefined ***)0x0) goto LAB_1004756bc;
    lVar3 = 5;
    pppuVar2 = pppuStack_a0;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_1004756bc:
  func_0x000107c60bd8(pppuVar1);
  return;
}



/* Entry: 1004756c4; end: 1004756c7;  */

void FUN_1004756c4(void)

{
  return;
}



/* Entry: 1004756c8; end: 100475963;  */

void FUN_1004756c8(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_d8 [3];
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_DAT_1107c3a70;
  pcStack_50 = FUN_100560c2c;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1,1,10000,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_100475740:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_100475740;
  }
  ppuStack_78 = &PTR_DAT_1107c3a70;
  pcStack_70 = FUN_100560c2c;
  pppuStack_60 = &ppuStack_78;
  FUN_1004732f0(param_1,3,10000,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_78;
LAB_10047578c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_10047578c;
  }
  ppuStack_98 = &PTR_DAT_1107c3a70;
  pcStack_90 = FUN_100560c2c;
  pppuStack_80 = &ppuStack_98;
  FUN_1004732f0(param_1,4,10000,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_98;
LAB_1004757d8:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_1004757d8;
  }
  appuStack_b8[0] = &PTR_DAT_1107c6c88;
  pppuStack_a0 = appuStack_b8;
  FUN_1004732f0(param_1,2,10000,appuStack_b8);
  if (pppuStack_a0 == appuStack_b8) {
    lVar4 = 4;
    pppuVar1 = appuStack_b8;
LAB_10047582c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_a0;
    goto LAB_10047582c;
  }
  appuStack_d8[0] = &PTR_DAT_1107c6d08;
  puVar3 = (undefined8 *)0x4;
  pppuStack_c0 = appuStack_d8;
  FUN_1004732f0(param_1,4,0x7fffffff,appuStack_d8);
  if (pppuStack_c0 == appuStack_d8) {
    lVar4 = 4;
    pppuVar1 = appuStack_d8;
LAB_100475880:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_c0;
    if (pppuStack_c0 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100475880;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_c0 == appuStack_d8) {
    lVar4 = 4;
    pppuVar2 = appuStack_d8;
  }
  else {
    if (pppuStack_c0 == (undefined ***)0x0) goto LAB_10047595c;
    lVar4 = 5;
    pppuVar2 = pppuStack_c0;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_10047595c:
  func_0x000107c60bd8(pppuVar1);
  *puVar3 = &PTR_DAT_1107c6c88;
  return;
}



/* Entry: 100475964; end: 10047598b;  */

void FUN_100475964(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c6c88;
  return;
}



/* Entry: 10047598c; end: 1004759d3;  */

undefined8 FUN_10047598c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x120;
  func_0x000107c60e20(0x120);
  FUN_100475aa8();
  return uVar1;
}



/* Entry: 1004759d4; end: 100475a5f;  */

void FUN_1004759d4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4;
    plVar2 = (long *)param_1[1];
    if ((long *)param_1[1] != plVar4) {
      do {
        plVar5 = plVar2 + -4;
        plVar1 = (long *)plVar2[-1];
        if (plVar5 == plVar1) {
          lVar3 = 4;
          plVar1 = plVar5;
LAB_100475a24:
          (**(code **)(*plVar1 + lVar3 * 8))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_100475a24;
        }
        plVar2 = plVar5;
      } while (plVar5 != plVar4);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar4;
    func_0x000107c60e14(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 100475a60; end: 100475aa7;  */

void FUN_100475a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1004759d4(param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 100475aa8; end: 100475bc3;  */

long FUN_100475aa8(long param_1,long param_2)

{
  FUN_100475a60(param_1,param_2);
  FUN_100475c2c(param_1 + 0x18,param_2 + 0x18);
  FUN_100476b9c(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_100476c08((undefined8 *)(param_1 + 0xc0),param_2 + 0xc0);
  FUN_100476cdc(param_1 + 0xd8,param_2 + 0xd8);
  func_0x000100476d24(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



/* Entry: 100475bc4; end: 100475c2b;  */

void FUN_100475bc4(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___ZSt7nothrow_1103469d8;
  if (0 < (long)param_1) {
    if (0x333333333333332 < (long)param_1) {
      param_1 = 0x333333333333333;
    }
    do {
      lVar3 = param_1 * 0x28;
      func_0x000107c60e24(lVar3,puVar2);
      if (lVar3 != 0) {
        return;
      }
      bVar1 = 1 < param_1;
      param_1 = param_1 >> 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 100475c2c; end: 100475d93;  */

void FUN_100475c2c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  do {
    plVar2 = (long *)(param_2 + lVar6 * 0x18);
    lVar3 = *plVar2;
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    lVar1 = lVar4 - lVar3;
    lVar5 = (lVar1 >> 3) * -0x3333333333333333;
    if (lVar1 < 1) {
      lVar1 = 0;
      param_3 = 0;
    }
    else {
      lVar1 = lVar5;
      FUN_100475bc4();
    }
    FUN_100475d94(lVar3,lVar4,lVar5,lVar1,param_3);
    if (lVar1 != 0) {
      func_0x000107c60e14(lVar1);
    }
    param_3 = (*plVar7 - *plVar2 >> 3) * -0x3333333333333333;
    FUN_10047620c(param_1 + lVar6 * 3);
    lVar3 = *plVar7;
    for (lVar1 = *plVar2; lVar1 != lVar3; lVar1 = lVar1 + 0x28) {
      param_3 = lVar1;
      FUN_10047648c(param_1 + lVar6 * 3);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  return;
}



/* Entry: 100475d94; end: 100476133;  */

/* WARNING: Possible PIC construction at 0x000104ada04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ada050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100475d94(long *******param_1,long *******param_2,ulong param_3,long ******param_4,
                  long param_5)

{
  bool bVar1;
  long *******ppppppplVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long ******unaff_x19;
  long *******unaff_x20;
  long ******pppppplVar7;
  long *******unaff_x21;
  long *******unaff_x22;
  long ******pppppplVar8;
  long *******unaff_x23;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  long unaff_x24;
  ulong uVar11;
  long *******ppppppplVar12;
  long *******unaff_x25;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar16;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uStack_98;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  long *****ppppplStack_80;
  ulong *puStack_78;
  long ******pppppplStack_68;
  int iStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar2 = param_1;
  pppppplStack_90 = (long ******)param_2;
  pppppplStack_88 = (long ******)param_1;
  if (1 < param_3) {
    if (param_3 == 2) {
      pppppplStack_90 = (long ******)(param_2 + -5);
      if (*(int *)(param_2 + -1) < *(int *)(param_1 + 4)) {
        ppppppplVar2 = &pppppplStack_88;
        func_0x000104ad9d74(ppppppplVar2,&pppppplStack_90);
      }
    }
    else if ((long)param_3 < 1) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        lVar3 = 0;
        ppppppplVar13 = param_1 + 5;
        ppppppplVar9 = param_1;
        do {
          ppppppplVar15 = ppppppplVar13;
          if (*(int *)(ppppppplVar9 + 9) < *(int *)(ppppppplVar9 + 4)) {
            FUN_1004734d8(&ppppplStack_80,ppppppplVar15);
            iStack_60 = *(int *)(ppppppplVar9 + 9);
            lVar16 = lVar3;
            do {
              lVar4 = lVar16;
              lVar16 = (long)param_1 + lVar4;
              FUN_1004768d4(lVar16 + 0x28,lVar16);
              *(undefined4 *)(lVar16 + 0x48) = *(undefined4 *)(lVar16 + 0x20);
              ppppppplVar2 = param_1;
              if (lVar4 == 0) goto LAB_100475f38;
              lVar16 = lVar4 + -0x28;
            } while (iStack_60 < *(int *)((long)param_1 + lVar4 + -8));
            ppppppplVar2 = (long *******)((long)param_1 + lVar4);
LAB_100475f38:
            FUN_1004768d4(ppppppplVar2,&ppppplStack_80);
            *(int *)(ppppppplVar2 + 4) = iStack_60;
            if (pppppplStack_68 == &ppppplStack_80) {
              ppppppplVar2 = (long *******)&ppppplStack_80;
              lVar16 = 4;
            }
            else {
              ppppppplVar2 = (long *******)pppppplStack_68;
              if ((long *******)pppppplStack_68 == (long *******)0x0) goto LAB_100475f7c;
              lVar16 = 5;
            }
            (*(code *)(*ppppppplVar2)[lVar16])();
          }
LAB_100475f7c:
          lVar3 = lVar3 + 0x28;
          ppppppplVar13 = ppppppplVar15 + 5;
          ppppppplVar9 = ppppppplVar15;
        } while (ppppppplVar15 + 5 != param_2);
      }
    }
    else {
      uVar11 = param_3 >> 1;
      ppppppplVar13 = param_1 + uVar11 * 5;
      if (param_5 < (long)param_3) {
        FUN_100475d94(param_1,ppppppplVar13,uVar11,param_4,param_5);
        ppppppplVar9 = (long *******)(param_3 - uVar11);
        ppppppplVar2 = ppppppplVar13;
        FUN_100475d94(ppppppplVar13,param_2,ppppppplVar9,param_4,param_5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
code_r0x000104ad9e44:
          *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
          *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
          *(long ********)((long)register0x00000008 + -0x50) = unaff_x26;
          *(long ********)((long)register0x00000008 + -0x48) = unaff_x25;
          *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(long ********)((long)register0x00000008 + -0x38) = unaff_x23;
          *(long ********)((long)register0x00000008 + -0x30) = unaff_x22;
          *(long ********)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long ********)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long *******)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          *(long ********)((long)register0x00000008 + -0xb0) = ppppppplVar13;
          *(long ********)((long)register0x00000008 + -0xa8) = param_1;
          if (ppppppplVar9 == (long *******)0x0) {
            return;
          }
          *(long *******)((long)register0x00000008 + -0xc0) = param_4;
          *(long ********)((long)register0x00000008 + -0xb8) = param_2;
          ppppppplVar2 = ppppppplVar13;
          unaff_x22 = param_1;
          unaff_x23 = ppppppplVar9;
          ppppppplVar13 = *(long ********)((long)register0x00000008 + -0xb0);
          while ((param_5 < (long)unaff_x23 && (param_5 < (long)uVar11))) {
            if (uVar11 == 0) goto code_r0x000104ada0b8;
            lVar3 = 0;
            lVar16 = -uVar11;
            while (param_1 = (long *******)((long)unaff_x22 + lVar3),
                  *(int *)(param_1 + 4) <= *(int *)(ppppppplVar2 + 4)) {
              lVar3 = lVar3 + 0x28;
              bVar1 = lVar16 == -1;
              lVar16 = lVar16 + 1;
              if (bVar1) goto code_r0x000104ada0b8;
            }
            *(long ********)((long)register0x00000008 + -0xa8) = param_1;
            lVar4 = -lVar16;
            if (lVar4 < (long)unaff_x23) {
              ppppppplVar9 = unaff_x23;
              if ((long)unaff_x23 < 0) {
                ppppppplVar9 = (long *******)((long)unaff_x23 + 1);
              }
              ppppppplVar9 = (long *******)((long)ppppppplVar9 >> 1);
              lVar4 = (long)ppppppplVar2 + (-lVar3 - (long)unaff_x22);
              ppppppplVar13 = ppppppplVar2;
              if (lVar4 != 0) {
                uVar11 = (lVar4 >> 3) * -0x3333333333333333;
                ppppppplVar13 = param_1;
                do {
                  uVar6 = uVar11 >> 1;
                  uVar5 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
                  uVar11 = uVar6;
                  if (*(int *)(ppppppplVar13 + uVar6 * 5 + 4) <=
                      *(int *)(ppppppplVar2 + (long)ppppppplVar9 * 5 + 4)) {
                    uVar11 = uVar5;
                    ppppppplVar13 = ppppppplVar13 + uVar6 * 5 + 5;
                  }
                } while (uVar11 != 0);
              }
              unaff_x25 = ppppppplVar2 + (long)ppppppplVar9 * 5;
              uVar11 = ((long)ppppppplVar13 + (-lVar3 - (long)unaff_x22) >> 3) * -0x3333333333333333
              ;
            }
            else {
              if (lVar16 == -1) {
                *(long ********)((long)register0x00000008 + -0xb0) = ppppppplVar13;
                func_0x000104ad9d74((undefined1 *)((long)register0x00000008 + -0xa8),
                                    (undefined1 *)((long)register0x00000008 + -0xb0));
                return;
              }
              if (lVar4 < 0) {
                lVar4 = lVar4 + 1;
              }
              uVar11 = lVar4 >> 1;
              unaff_x25 = *(long ********)((long)register0x00000008 + -0xb8);
              if ((long)unaff_x25 - (long)ppppppplVar2 != 0) {
                uVar5 = ((long)unaff_x25 - (long)ppppppplVar2 >> 3) * -0x3333333333333333;
                ppppppplVar13 = ppppppplVar2;
                do {
                  uVar6 = uVar5 >> 1;
                  unaff_x25 = ppppppplVar13 + uVar6 * 5 + 5;
                  uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
                  if (*(int *)((long)unaff_x22 + lVar3 + uVar11 * 0x28 + 0x20) <=
                      *(int *)(ppppppplVar13 + uVar6 * 5 + 4)) {
                    unaff_x25 = ppppppplVar13;
                    uVar5 = uVar6;
                  }
                  ppppppplVar13 = unaff_x25;
                } while (uVar5 != 0);
              }
              ppppppplVar13 = (long *******)((long)unaff_x22 + lVar3 + uVar11 * 0x28);
              ppppppplVar9 = (long *******)
                             (((long)unaff_x25 - (long)ppppppplVar2 >> 3) * -0x3333333333333333);
            }
            param_2 = unaff_x25;
            if ((ppppppplVar13 != ppppppplVar2) &&
               (param_2 = ppppppplVar13, ppppppplVar2 != unaff_x25)) {
              func_0x000104ada3e4(ppppppplVar13,ppppppplVar2,unaff_x25);
              unaff_x22 = ppppppplVar9;
            }
            unaff_x27 = -(uVar11 + lVar16);
            unaff_x24 = (long)unaff_x23 - (long)ppppppplVar9;
            if ((long)(uVar11 + (long)ppppppplVar9) <
                (long)((long)unaff_x23 + (-lVar16 - (uVar11 + (long)ppppppplVar9))))
            goto code_r0x000104ada030;
            param_4 = *(long *******)((long)register0x00000008 + -0xc0);
            func_0x000104ad9e44(param_2,unaff_x25,*(undefined8 *)((long)register0x00000008 + -0xb8),
                                unaff_x27,unaff_x24);
            *(long ********)((long)register0x00000008 + -0xb8) = param_2;
            ppppppplVar2 = ppppppplVar13;
            unaff_x22 = param_1;
            unaff_x23 = ppppppplVar9;
            if (ppppppplVar9 == (long *******)0x0) {
code_r0x000104ada0b8:
              *(long ********)((long)register0x00000008 + -0xb0) = ppppppplVar13;
              return;
            }
          }
          *(long ********)((long)register0x00000008 + -0xb0) = ppppppplVar13;
          *(long *******)((long)register0x00000008 + -0xa0) = param_4;
          *(undefined1 **)((long)register0x00000008 + -0x98) =
               (undefined1 *)((long)register0x00000008 + -0x90);
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          if ((long)unaff_x23 < (long)uVar11) {
            ppppppplVar13 = *(long ********)((long)register0x00000008 + -0xb8);
            if (ppppppplVar2 == ppppppplVar13) goto code_r0x000104ada2ac;
            lVar3 = 0;
            do {
              lVar16 = (long)param_4 + lVar3;
              FUN_1004734d8(lVar16,(long)ppppppplVar2 + lVar3);
              *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)((long)ppppppplVar2 + lVar3 + 0x20);
              *(long *)((long)register0x00000008 + -0x90) =
                   *(long *)((long)register0x00000008 + -0x90) + 1;
              lVar3 = lVar3 + 0x28;
            } while ((long *******)((long)ppppppplVar2 + lVar3) != ppppppplVar13);
            if (lVar3 == 0) goto code_r0x000104ada2ac;
            pppppplVar7 = (long ******)((long)param_4 + lVar3);
            ppppppplVar15 = ppppppplVar13;
            ppppppplVar9 = ppppppplVar13;
            do {
              ppppppplVar12 = ppppppplVar9 + -5;
              if (ppppppplVar2 == unaff_x22) {
                func_0x000104ada354((undefined1 *)((long)register0x00000008 + -0x80),
                                    (undefined1 *)((long)register0x00000008 + -0x81),
                                    (long ******)((long)param_4 + lVar3),pppppplVar7,param_4,param_4
                                    ,ppppppplVar15,ppppppplVar13);
                break;
              }
              ppppppplVar15 = (long *******)(pppppplVar7 + -1);
              ppppppplVar14 = ppppppplVar2 + -1;
              if (*(int *)ppppppplVar15 < *(int *)ppppppplVar14) {
                ppppppplVar2 = ppppppplVar2 + -5;
                FUN_1004768d4(ppppppplVar12,ppppppplVar2);
                ppppppplVar15 = ppppppplVar14;
              }
              else {
                pppppplVar7 = pppppplVar7 + -5;
                FUN_1004768d4(ppppppplVar12,pppppplVar7);
              }
              *(int *)(ppppppplVar9 + -1) = *(int *)ppppppplVar15;
              ppppppplVar13 = ppppppplVar13 + -5;
              ppppppplVar15 = *(long ********)((long)register0x00000008 + -0xb8);
              ppppppplVar9 = ppppppplVar12;
            } while (pppppplVar7 != param_4);
          }
          else {
            ppppppplVar13 = *(long ********)((long)register0x00000008 + -0xb8);
            if (unaff_x22 == ppppppplVar2) goto code_r0x000104ada2ac;
            lVar3 = 0;
            do {
              lVar16 = (long)param_4 + lVar3;
              FUN_1004734d8(lVar16,(long)unaff_x22 + lVar3);
              *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)((long)unaff_x22 + lVar3 + 0x20);
              *(long *)((long)register0x00000008 + -0x90) =
                   *(long *)((long)register0x00000008 + -0x90) + 1;
              lVar3 = lVar3 + 0x28;
            } while ((long *******)((long)unaff_x22 + lVar3) != ppppppplVar2);
            if (lVar3 == 0) goto code_r0x000104ada2ac;
            pppppplVar7 = (long ******)((long)param_4 + lVar3);
            do {
              if (ppppppplVar2 == ppppppplVar13) {
                func_0x000104ada2e8((undefined1 *)((long)register0x00000008 + -0x80),param_4,
                                    pppppplVar7,unaff_x22);
                break;
              }
              if (*(int *)(ppppppplVar2 + 4) < *(int *)(param_4 + 4)) {
                FUN_1004768d4(unaff_x22,ppppppplVar2);
                *(undefined4 *)(unaff_x22 + 4) = *(undefined4 *)(ppppppplVar2 + 4);
                ppppppplVar2 = ppppppplVar2 + 5;
              }
              else {
                FUN_1004768d4(unaff_x22,param_4);
                *(undefined4 *)(unaff_x22 + 4) = *(undefined4 *)(param_4 + 4);
                param_4 = param_4 + 5;
              }
              unaff_x22 = unaff_x22 + 5;
            } while (pppppplVar7 != param_4);
          }
code_r0x000104ada2ac:
          FUN_10047696c((undefined1 *)((long)register0x00000008 + -0xa0),0);
          return;
        }
        goto LAB_1004760f0;
      }
      uStack_98 = 0;
      puStack_78 = &uStack_98;
      ppppplStack_80 = (long *****)param_4;
      FUN_100476590(param_1,ppppppplVar13,uVar11,param_4);
      pppppplVar8 = param_4 + uVar11 * 5;
      uStack_98 = uVar11;
      FUN_100476590(ppppppplVar13,param_2,param_3 - uVar11,pppppplVar8);
      pppppplVar10 = param_4 + param_3 * 5;
      pppppplVar7 = pppppplVar8;
      uStack_98 = param_3;
      do {
        if (pppppplVar7 == pppppplVar10) {
          if (param_4 != pppppplVar8) {
            lVar3 = 0;
            do {
              lVar16 = (long)param_4 + lVar3;
              FUN_1004768d4((long)param_1 + lVar3,lVar16);
              *(undefined4 *)((long)param_1 + lVar3 + 0x20) = *(undefined4 *)(lVar16 + 0x20);
              lVar3 = lVar3 + 0x28;
            } while ((long ******)(lVar16 + 0x28) != pppppplVar8);
          }
          goto LAB_1004760b0;
        }
        if (*(int *)(pppppplVar7 + 4) < *(int *)(param_4 + 4)) {
          FUN_1004768d4(param_1,pppppplVar7);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pppppplVar7 + 4);
          pppppplVar7 = pppppplVar7 + 5;
        }
        else {
          FUN_1004768d4(param_1,param_4);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
          param_4 = param_4 + 5;
        }
        param_1 = param_1 + 5;
      } while (param_4 != pppppplVar8);
      if (pppppplVar7 != pppppplVar10) {
        lVar3 = 0;
        do {
          lVar16 = (long)pppppplVar7 + lVar3;
          FUN_1004768d4((long)param_1 + lVar3,lVar16);
          *(undefined4 *)((long)param_1 + lVar3 + 0x20) = *(undefined4 *)(lVar16 + 0x20);
          lVar3 = lVar3 + 0x28;
        } while ((long ******)(lVar16 + 0x28) != pppppplVar10);
      }
LAB_1004760b0:
      ppppppplVar2 = (long *******)&ppppplStack_80;
      FUN_10047696c(ppppppplVar2,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_1004760f0:
  func_0x000107c60e78();
  FUN_10047696c(&ppppplStack_80,0);
  func_0x000107c60bd8(ppppppplVar2);
  func_0x000104bd46a0();
  func_0x000107c61174();
  ppppppplVar13 = ppppppplVar2;
  FUN_1004575f0();
  func_0x000107c61170(ppppppplVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppppplVar13);
  return;
code_r0x000104ada030:
  param_4 = *(long *******)((long)register0x00000008 + -0xc0);
  unaff_x30 = &UNK_104ada050;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  unaff_x19 = param_4;
  unaff_x20 = param_2;
  unaff_x21 = ppppppplVar13;
  unaff_x26 = param_1;
  unaff_x28 = param_5;
  goto code_r0x000104ad9e44;
}



/* Entry: 100476134; end: 100476173; -[SCLensProcessingGlobalTracker didEndLensUsageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100476134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100476174; end: 1004761d7; -[SCLensProcessingGlobalTracker setReporter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100476174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302b6d0;
  func_0x000107c61428(param_1 + _DAT_11302b6d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1004761d8; end: 10047620b;  */

undefined1  [16] FUN_1004761d8(long *param_1,long ***param_2)

{
  long lVar1;
  long ***ppplVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long **pplStack_68;
  long lStack_60;
  long lStack_58;
  long **pplStack_50;
  long **pplStack_48;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar1 = (long)param_2 << 5;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  ppplVar2 = (long ***)(param_1 + 2);
  lVar1 = *param_1;
  if ((long ***)((long)*ppplVar2 - lVar1 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104ada494();
      func_0x00010047645c(&pplStack_68);
      func_0x000107c60bd8();
      auVar6._0_8_ = param_1[1];
      auVar6._8_8_ = param_2;
      return auVar6;
    }
    lVar3 = param_1[1];
    pplStack_48 = (long **)ppplVar2;
    FUN_1004761d8();
    lStack_60 = (long)ppplVar2 + (lVar3 - lVar1);
    pplStack_50 = (long **)(ppplVar2 + (long)param_2 * 4);
    param_2 = &pplStack_68;
    pplStack_68 = (long **)ppplVar2;
    lStack_58 = lStack_60;
    FUN_100476348(param_1,param_2);
    ppplVar2 = &pplStack_68;
    func_0x00010047645c(ppplVar2);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = ppplVar2;
  return auVar5;
}



/* Entry: 10047620c; end: 10047629b;  */

long *** FUN_10047620c(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      func_0x000104ada494();
      func_0x00010047645c(&pplStack_48);
      func_0x000107c60bd8();
      return (long ***)param_1[1];
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_1004761d8();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2 * 4);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_100476348(param_1,&pplStack_48);
    ppplVar1 = &pplStack_48;
    func_0x00010047645c(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 10047629c; end: 1004762a3; -[SCLegacyLensDataFetcherServices legacyLensDataFetcher] */

undefined8 FUN_10047629c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004762a4; end: 100476347;  */

undefined1  [16]
FUN_1004762a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_1004734d8(param_7 + -0x20,param_3);
    param_7 = lStack_38 + -0x20;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_1004763bc(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 100476348; end: 1004763bb;  */

void FUN_100476348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_1004762a4(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1004763bc; end: 1004763ef;  */

long FUN_1004763bc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104ada4a8(param_1);
  }
  return param_1;
}



/* Entry: 1004763f0; end: 10047648b;  */

void FUN_1004763f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
joined_r0x000100476404:
  if (plVar3 == plVar1) {
    return;
  }
  plVar2 = plVar3 + -4;
  *(long **)(param_1 + 0x10) = plVar2;
  plVar4 = (long *)plVar3[-1];
  if (plVar4 != plVar2) goto code_r0x000100476420;
  lVar5 = 4;
  goto LAB_100476434;
code_r0x000100476420:
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    lVar5 = 5;
    plVar2 = plVar4;
LAB_100476434:
    (**(code **)(*plVar2 + lVar5 * 8))();
    plVar3 = *(long **)(param_1 + 0x10);
  }
  goto joined_r0x000100476404;
}



/* Entry: 10047648c; end: 10047658f;  */

long ****** FUN_10047648c(long ******param_1,long ******param_2,ulong param_3,long ******param_4)

{
  long ******pppppplVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long ******pppppplVar6;
  long *****ppppplVar7;
  long lVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long *****ppppplStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long *****ppppplStack_40;
  long *****ppppplStack_38;
  
  pppppplVar1 = param_1 + 2;
  ppppplVar7 = param_1[1];
  if (ppppplVar7 < *pppppplVar1) {
    FUN_1004734d8(ppppplVar7,param_2);
    ppppplVar7 = ppppplVar7 + 4;
    param_1[1] = ppppplVar7;
  }
  else {
    lVar8 = (long)ppppplVar7 - (long)*param_1 >> 5;
    uVar2 = lVar8 + 1;
    if (uVar2 >> 0x3b != 0) {
      func_0x000104ada494();
      func_0x00010047645c(&ppppplStack_58);
      func_0x000107c60bd8();
      if (param_3 != 0) {
        if (param_3 == 2) {
          plStack_c0 = &lStack_b8;
          lStack_b8 = 0;
          pppppplVar11 = param_2 + -1;
          pppppplVar6 = param_1 + 4;
          pppppplVar1 = pppppplVar6;
          pppppplVar10 = param_1;
          pppppplVar9 = param_2 + -5;
          if (*(int *)pppppplVar6 <= *(int *)pppppplVar11) {
            pppppplVar1 = pppppplVar11;
            pppppplVar11 = pppppplVar6;
            pppppplVar10 = param_2 + -5;
            pppppplVar9 = param_1;
          }
          FUN_1004734d8(param_4,pppppplVar9);
          *(int *)(param_4 + 4) = *(int *)pppppplVar11;
          lStack_b8 = lStack_b8 + 1;
          FUN_1004734d8(param_4 + 5,pppppplVar10);
          *(int *)(param_4 + 9) = *(int *)pppppplVar1;
        }
        else {
          if (param_3 == 1) {
            pppppplVar1 = param_4;
            FUN_1004734d8(param_4,param_1);
            *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
            return pppppplVar1;
          }
          ppppplStack_c8 = (long *****)param_4;
          if ((long)param_3 < 9) {
            if (param_1 == param_2) {
              return param_1;
            }
            plStack_c0 = &lStack_b8;
            lStack_b8 = 0;
            FUN_1004734d8(param_4,param_1);
            *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
            lStack_b8 = lStack_b8 + 1;
            if (param_1 + 5 != param_2) {
              lVar8 = 0;
              pppppplVar1 = param_1 + 5;
              pppppplVar11 = param_4;
              do {
                pppppplVar9 = pppppplVar1;
                pppppplVar10 = pppppplVar11 + 5;
                if (*(int *)(param_1 + 9) < *(int *)(pppppplVar11 + 4)) {
                  FUN_1004734d8(pppppplVar10,pppppplVar11);
                  *(undefined4 *)(pppppplVar11 + 9) = *(undefined4 *)(pppppplVar11 + 4);
                  lStack_b8 = lStack_b8 + 1;
                  pppppplVar1 = param_4;
                  lVar3 = lVar8;
                  if (pppppplVar11 != param_4) {
                    do {
                      pppppplVar1 = (long ******)((long)param_4 + lVar3);
                      if (*(int *)(pppppplVar1 + -1) <= *(int *)(param_1 + 9)) break;
                      FUN_1004768d4(pppppplVar1,pppppplVar1 + -5);
                      *(undefined4 *)((long)param_4 + lVar3 + 0x20) =
                           *(undefined4 *)(pppppplVar1 + -1);
                      lVar3 = lVar3 + -0x28;
                      pppppplVar1 = param_4;
                    } while (lVar3 != 0);
                  }
                  FUN_1004768d4(pppppplVar1,pppppplVar9);
                  *(undefined4 *)(pppppplVar1 + 4) = *(undefined4 *)(param_1 + 9);
                }
                else {
                  FUN_1004734d8(pppppplVar10,pppppplVar9);
                  *(undefined4 *)(pppppplVar11 + 9) = *(undefined4 *)(param_1 + 9);
                  lStack_b8 = lStack_b8 + 1;
                }
                lVar8 = lVar8 + 0x28;
                pppppplVar1 = pppppplVar9 + 5;
                param_1 = pppppplVar9;
                pppppplVar11 = pppppplVar10;
              } while (pppppplVar9 + 5 != param_2);
            }
          }
          else {
            uVar2 = param_3 >> 1;
            lVar8 = uVar2 * 4 + (param_3 >> 1);
            pppppplVar11 = param_1 + lVar8;
            FUN_100475d94(param_1,pppppplVar11,uVar2,param_4,uVar2);
            lVar3 = param_3 - (param_3 >> 1);
            FUN_100475d94(pppppplVar11,param_2,lVar3,param_4 + lVar8,lVar3);
            plStack_c0 = &lStack_b8;
            lStack_b8 = 0;
            pppppplVar1 = pppppplVar11;
            do {
              if (pppppplVar1 == param_2) {
                if (param_1 != pppppplVar11) {
                  lVar8 = 0;
                  do {
                    lVar3 = (long)param_4 + lVar8;
                    FUN_1004734d8(lVar3,(long)param_1 + lVar8);
                    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)((long)param_1 + lVar8 + 0x20);
                    lStack_b8 = lStack_b8 + 1;
                    lVar8 = lVar8 + 0x28;
                  } while ((long ******)((long)param_1 + lVar8) != pppppplVar11);
                }
                goto LAB_100476648;
              }
              pppppplVar9 = pppppplVar1 + 4;
              pppppplVar10 = param_1 + 4;
              if (*(int *)pppppplVar9 < *(int *)pppppplVar10) {
                FUN_1004734d8(param_4,pppppplVar1);
                pppppplVar1 = pppppplVar1 + 5;
                pppppplVar10 = pppppplVar9;
              }
              else {
                FUN_1004734d8(param_4,param_1);
                param_1 = param_1 + 5;
              }
              lStack_b8 = lStack_b8 + 1;
              *(int *)(param_4 + 4) = *(int *)pppppplVar10;
              param_4 = param_4 + 5;
            } while (param_1 != pppppplVar11);
            if (pppppplVar1 != param_2) {
              lVar8 = 0;
              do {
                lVar3 = (long)param_4 + lVar8;
                FUN_1004734d8(lVar3,(long)pppppplVar1 + lVar8);
                *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)((long)pppppplVar1 + lVar8 + 0x20);
                lStack_b8 = lStack_b8 + 1;
                lVar8 = lVar8 + 0x28;
              } while ((long ******)((long)pppppplVar1 + lVar8) != param_2);
            }
          }
        }
LAB_100476648:
        ppppplStack_c8 = (long *****)0x0;
        param_1 = &ppppplStack_c8;
        FUN_10047696c(param_1,0);
      }
      return param_1;
    }
    uVar4 = (long)*pppppplVar1 - (long)*param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    ppppplStack_38 = (long *****)pppppplVar1;
    if (uVar5 == 0) {
      ppppplStack_58 = (long *****)0x0;
    }
    else {
      FUN_1004761d8();
      ppppplStack_58 = (long *****)pppppplVar1;
    }
    pppppplVar1 = (long ******)(ppppplStack_58 + lVar8 * 4);
    ppppplStack_40 = ppppplStack_58 + uVar5 * 4;
    ppppplStack_50 = (long *****)pppppplVar1;
    FUN_1004734d8(pppppplVar1,param_2);
    ppppplStack_48 = (long *****)(pppppplVar1 + 4);
    FUN_100476348(param_1,&ppppplStack_58);
    ppppplVar7 = param_1[1];
    func_0x00010047645c(&ppppplStack_58);
  }
  param_1[1] = ppppplVar7;
  return (long ******)(ppppplVar7 + -4);
}



/* Entry: 100476590; end: 1004768d3;  */

void FUN_100476590(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      plStack_60 = &lStack_58;
      lStack_58 = 0;
      piVar7 = (int *)(param_2 + -8);
      piVar5 = (int *)(param_1 + 0x20);
      piVar9 = piVar5;
      lVar10 = param_1;
      lVar6 = param_2 + -0x28;
      if (*piVar5 <= *piVar7) {
        piVar9 = piVar7;
        piVar7 = piVar5;
        lVar10 = param_2 + -0x28;
        lVar6 = param_1;
      }
      FUN_1004734d8(param_4,lVar6);
      *(int *)(param_4 + 0x20) = *piVar7;
      lStack_58 = lStack_58 + 1;
      FUN_1004734d8(param_4 + 0x28,lVar10);
      *(int *)(param_4 + 0x48) = *piVar9;
    }
    else {
      if (param_3 == 1) {
        FUN_1004734d8(param_4,param_1);
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        return;
      }
      lStack_68 = param_4;
      if ((long)param_3 < 9) {
        if (param_1 == param_2) {
          return;
        }
        plStack_60 = &lStack_58;
        lStack_58 = 0;
        FUN_1004734d8(param_4,param_1);
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        lStack_58 = lStack_58 + 1;
        if (param_1 + 0x28 != param_2) {
          lVar10 = 0;
          lVar6 = param_1 + 0x28;
          lVar3 = param_4;
          do {
            lVar4 = lVar6;
            lVar1 = lVar3 + 0x28;
            if (*(int *)(param_1 + 0x48) < *(int *)(lVar3 + 0x20)) {
              FUN_1004734d8(lVar1,lVar3);
              *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar3 + 0x20);
              lStack_58 = lStack_58 + 1;
              lVar6 = param_4;
              lVar8 = lVar10;
              if (lVar3 != param_4) {
                do {
                  lVar6 = param_4 + lVar8;
                  if (*(int *)(lVar6 + -8) <= *(int *)(param_1 + 0x48)) break;
                  FUN_1004768d4(lVar6,lVar6 + -0x28);
                  *(undefined4 *)(param_4 + lVar8 + 0x20) = *(undefined4 *)(lVar6 + -8);
                  lVar8 = lVar8 + -0x28;
                  lVar6 = param_4;
                } while (lVar8 != 0);
              }
              FUN_1004768d4(lVar6,lVar4);
              *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_1 + 0x48);
            }
            else {
              FUN_1004734d8(lVar1,lVar4);
              *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(param_1 + 0x48);
              lStack_58 = lStack_58 + 1;
            }
            lVar10 = lVar10 + 0x28;
            lVar6 = lVar4 + 0x28;
            param_1 = lVar4;
            lVar3 = lVar1;
          } while (lVar4 + 0x28 != param_2);
        }
      }
      else {
        uVar2 = param_3 >> 1;
        lVar10 = uVar2 * 4 + (param_3 >> 1);
        lVar6 = param_1 + lVar10 * 8;
        FUN_100475d94(param_1,lVar6,uVar2,param_4,uVar2);
        lVar3 = param_3 - (param_3 >> 1);
        FUN_100475d94(lVar6,param_2,lVar3,param_4 + lVar10 * 8,lVar3);
        plStack_60 = &lStack_58;
        lStack_58 = 0;
        lVar10 = lVar6;
        do {
          if (lVar10 == param_2) {
            if (param_1 != lVar6) {
              lVar10 = 0;
              do {
                lVar3 = param_4 + lVar10;
                FUN_1004734d8(lVar3,param_1 + lVar10);
                *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + lVar10 + 0x20);
                lStack_58 = lStack_58 + 1;
                lVar10 = lVar10 + 0x28;
              } while (param_1 + lVar10 != lVar6);
            }
            goto LAB_100476648;
          }
          piVar7 = (int *)(lVar10 + 0x20);
          piVar9 = (int *)(param_1 + 0x20);
          if (*piVar7 < *piVar9) {
            FUN_1004734d8(param_4,lVar10);
            lVar10 = lVar10 + 0x28;
            piVar9 = piVar7;
          }
          else {
            FUN_1004734d8(param_4,param_1);
            param_1 = param_1 + 0x28;
          }
          lStack_58 = lStack_58 + 1;
          *(int *)(param_4 + 0x20) = *piVar9;
          param_4 = param_4 + 0x28;
        } while (param_1 != lVar6);
        if (lVar10 != param_2) {
          lVar6 = 0;
          do {
            lVar3 = param_4 + lVar6;
            FUN_1004734d8(lVar3,lVar10 + lVar6);
            *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar10 + lVar6 + 0x20);
            lStack_58 = lStack_58 + 1;
            lVar6 = lVar6 + 0x28;
          } while (lVar10 + lVar6 != param_2);
        }
      }
    }
LAB_100476648:
    lStack_68 = 0;
    FUN_10047696c(&lStack_68,0);
  }
  return;
}



/* Entry: 1004768d4; end: 100476963;  */

long * FUN_1004768d4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 4;
    plVar1 = param_1;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_100476918;
    lVar2 = 5;
  }
  (**(code **)(*plVar1 + lVar2 * 8))();
LAB_100476918:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 100476964; end: 10047696b; -[SCLensAssetsDeliveryServices remoteAssetsUploadManager] */

undefined8 FUN_100476964(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10047696c; end: 1004769e7;  */

void FUN_10047696c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  
  plVar4 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar4 != (long *)0x0) {
    puVar5 = (ulong *)param_1[1];
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        plVar1 = (long *)plVar4[3];
        if (plVar4 == plVar1) {
          lVar3 = 4;
          plVar1 = plVar4;
LAB_1004769b8:
          (**(code **)(*plVar1 + lVar3 * 8))();
          uVar2 = *puVar5;
        }
        else if (plVar1 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_1004769b8;
        }
        uVar6 = uVar6 + 1;
        plVar4 = plVar4 + 5;
      } while (uVar6 < uVar2);
    }
  }
  return;
}



/* Entry: 1004769e8; end: 1004769ef; -[SCLensDataLoggerServices resourceVerificationLogger] */

undefined8 FUN_1004769e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004769f0; end: 1004769f7; -[SCLensProcessingSharedServices dirtyFrameProvider] */

undefined8 FUN_1004769f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004769f8; end: 100476b1b; -[SCLensProcessingRemoteAssetsFactoryImpl initWithLensDataFetcher:assetsUploadManager:assetLogger:circumstanceEngine:dirtyFrameProvider:] */

undefined1 *
FUN_1004769f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126fe088;
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
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100476b1c; end: 100476b23; -[SCLensCrashLoggerOnCameraServices crashLoggerFactory] */

undefined8 FUN_100476b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100476b24; end: 100476b2b; -[SCLensCrashLoggerServices previewLogger] */

undefined8 FUN_100476b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100476b2c; end: 100476b9b;  */

void FUN_100476b2c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    func_0x000107c60e14(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 100476b9c; end: 100476c07;  */

void FUN_100476b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_100476b2c(param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_100476b2c(param_1 + 3);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 100476c08; end: 100476c5f;  */

void FUN_100476c08(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  plVar5 = param_1 + 1;
  lVar1 = *plVar5;
  lVar2 = param_1[2];
  plVar4 = param_2 + 1;
  lVar6 = *plVar4;
  param_1[2] = param_2[2];
  *plVar5 = lVar6;
  *plVar4 = lVar1;
  param_2[2] = lVar2;
  if (param_1[2] != 0) {
    param_1 = (undefined8 *)(*plVar5 + 0x10);
  }
  *param_1 = plVar5;
  if (lVar2 != 0) {
    param_2 = (undefined8 *)(param_2[1] + 0x10);
  }
  *param_2 = plVar4;
  return;
}



/* Entry: 100476c60; end: 100476cdb;  */

void FUN_100476c60(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 100476cdc; end: 100476de3;  */

void FUN_100476cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_30;
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  FUN_100476c60(&puStack_18);
  return;
}



/* Entry: 100476de4; end: 100476e3b;  */

void FUN_100476de4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_100476de4(param_1,*param_2);
    FUN_100476de4(param_1,param_2[1]);
    plVar1 = (long *)param_2[6];
    param_2[6] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 100476e3c; end: 100476f4f;  */

void FUN_100476e3c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 100476f50; end: 100476f6f; -[SCWebLensesActiveLensServices publishing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100476f50(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113070388));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100476f70; end: 100477423; -[SCLensProcessingFactoryImpl initWithTrackingHandler:lensPerformerProvider:launchDataStore:postCaptureLaunchDataStore:studySettingsProvider:circumstanceEngine:crashLoggerFactory:postCaptureCrashLogger:appInsightsMetadataStorage:lensLogger:processingGlobalTraker:lensProcessingGraphene:webLensesActiveLensPublishing:remoteAssetsFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100476f70(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_98;
  undefined *puStack_90;
  
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
  puStack_90 = PTR_PTR_1126fe078;
  puVar2 = &uStack_98;
  uStack_98 = param_4;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127798e8;
    func_0x000107c61174(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_1127798ec;
    func_0x000107c61174(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_18;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_1127798f0;
    func_0x000107c61174(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_19;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_1127798f4;
    func_0x000107c61174(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_6;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_1127798f8;
    func_0x000107c61174(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_1127798fc;
    func_0x000107c61174(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_9;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_112779900;
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_112779904;
    func_0x000107c61174(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_12;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112779908,param_10);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_11277990c,param_11);
    lVar5 = (long)_DAT_112779910;
    func_0x000107c61174(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_13;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_112779914;
    func_0x000107c61174(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
    *(double *)((long)puVar2 + (long)_DAT_112779918) = param_1;
    func_0x000107c61170(puVar4);
    lVar5 = (long)_DAT_11277991c;
    func_0x000107c61174(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    func_0x000107c61170(uVar3);
    lVar5 = (long)_DAT_112779920;
    func_0x000107c61174(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar2 + (long)_DAT_112779924) = 0;
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    iVar1 = (int)*(undefined8 *)((long)puVar2 + (long)_DAT_112779928);
    *(undefined **)((long)puVar2 + (long)_DAT_112779928) = puVar4;
    func_0x000107c61170();
    FUN_100478f84();
    if (iVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c609cc();
      dVar6 = param_1;
      func_0x000107c61170(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c609b0();
      dVar7 = dVar6;
      func_0x000107c61170(puVar4);
      func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
      *(long *)((long)puVar2 + (long)_DAT_11277992c) =
           (long)((param_1 * dVar6) / (double)(float)((dVar6 - dVar7) - param_3));
    }
    else {
      func_0x000107c5c738(PTR_PTR_1126b9e78);
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      dVar6 = param_1;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c609cc();
      func_0x000107c61170(puVar4);
      *(long *)((long)puVar2 + (long)_DAT_11277992c) = (long)dVar6;
      dVar6 = dVar6 / param_1;
    }
    *(long *)((long)puVar2 + (long)_DAT_112779930) = (long)dVar6;
  }
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
  return puVar2;
}



/* Entry: 100477424; end: 1004774bb;  */

void FUN_100477424(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)*param_1;
  plVar5 = (long *)*puVar4;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar1 = plVar5;
  plVar2 = (long *)puVar4[1];
  if ((long *)puVar4[1] != plVar5) {
    do {
      plVar6 = plVar2 + -4;
      plVar1 = (long *)plVar2[-1];
      if (plVar6 == plVar1) {
        lVar3 = 4;
        plVar1 = plVar6;
LAB_100477478:
        (**(code **)(*plVar1 + lVar3 * 8))();
      }
      else if (plVar1 != (long *)0x0) {
        lVar3 = 5;
        goto LAB_100477478;
      }
      plVar2 = plVar6;
    } while (plVar6 != plVar5);
    plVar1 = *(long **)*param_1;
  }
  puVar4[1] = plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 1004774bc; end: 100477993;  */

void FUN_1004774bc(undefined8 *param_1,ulong *param_2)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long ***ppplVar5;
  code *pcVar6;
  bool bVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long ***ppplVar15;
  ulong uVar16;
  undefined8 **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 **ppuVar21;
  long ****pppplVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  ulong uStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (ulong *)0x0) {
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_80 = &uStack_78;
    if (*param_2 != 0) {
      uVar18 = 0;
      do {
        uVar19 = param_2[1];
        pppplVar22 = *(long *****)(uVar19 + uVar18 * 0x20 + 8);
        pppplVar8 = pppplVar22;
        ppplStack_90 = (long ***)pppplVar22;
        func_0x000107c613d0();
        ppplStack_88 = (long ***)pppplVar8;
        if (pppplVar8 == (long ****)0x19) {
          pppplVar9 = pppplVar22;
          func_0x000107c610b0(pppplVar22,"grpc.secondary_user_agent",0x19);
          if ((int)pppplVar9 != 0) goto LAB_100477668;
LAB_1004775bc:
          if (*(int *)(uVar19 + uVar18 * 0x20) == 0) {
            ppplStack_a8 = (long ***)&ppplStack_90;
            ppuVar10 = &puStack_80;
            FUN_100477b48(ppuVar10,&ppplStack_90,&UNK_10dd5b8f9,&ppplStack_a8,&uStack_61);
            puVar23 = *(undefined8 **)(param_2[1] + uVar18 * 0x20 + 0x10);
            puVar13 = puVar23;
            func_0x000107c613d0();
            puVar14 = ppuVar10[7];
            ppuVar11 = ppuVar10 + 8;
            if (puVar14 < *ppuVar11) {
              *puVar14 = puVar23;
              puVar14[1] = puVar13;
              ppuVar21 = (undefined8 **)(puVar14 + 2);
            }
            else {
              ppuVar1 = ppuVar10 + 6;
              lVar20 = (long)puVar14 - (long)*ppuVar1 >> 4;
              uVar19 = lVar20 + 1;
              if (uVar19 >> 0x3c != 0) {
                func_0x000104a831e0(ppuVar1);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100477934);
                (*pcVar6)();
              }
              uVar12 = (long)*ppuVar11 - (long)*ppuVar1;
              uVar16 = (long)uVar12 >> 3;
              if (uVar16 <= uVar19) {
                uVar16 = uVar19;
              }
              if (0x7fffffffffffffef < uVar12) {
                uVar16 = 0xfffffffffffffff;
              }
              if (uVar16 == 0) {
                ppuVar11 = (undefined8 **)0x0;
              }
              else {
                func_0x000100477c28();
              }
              ppuVar21 = ppuVar11 + lVar20 * 2;
              *ppuVar21 = puVar23;
              ppuVar21[1] = puVar13;
              puVar13 = ppuVar10[6];
              puVar14 = ppuVar10[7];
              ppuVar17 = ppuVar21;
              if (puVar14 != puVar13) {
                do {
                  puVar23 = puVar14 + -1;
                  puVar24 = (undefined8 *)puVar14[-2];
                  puVar14 = puVar14 + -2;
                  ppuVar17[-1] = (undefined8 *)*puVar23;
                  ppuVar17[-2] = puVar24;
                  ppuVar17 = ppuVar17 + -2;
                } while (puVar14 != puVar13);
                puVar14 = *ppuVar1;
              }
              ppuVar21 = ppuVar21 + 2;
              ppuVar10[6] = ppuVar17;
              ppuVar10[7] = ppuVar21;
              ppuVar10[8] = ppuVar11 + uVar16 * 2;
              if (puVar14 != (undefined8 *)0x0) {
                func_0x000107c60e14(puVar14);
              }
            }
            ppuVar10[7] = ppuVar21;
          }
          else {
            uVar19 = ((ulong)pppplVar8 & 0xfffffffffffffff8) + 8;
            if (((ulong)pppplVar8 | 7) != 0x17) {
              uVar19 = (ulong)pppplVar8 | 7;
            }
            pppplVar22 = (long ****)(uVar19 + 1);
            func_0x000107c60e20();
            uStack_98 = uVar19 + 1 | 0x8000000000000000;
            ppplStack_a8 = (long ***)pppplVar22;
            ppplStack_a0 = (long ***)pppplVar8;
            func_0x000107c610b8();
            *(undefined1 *)((long)pppplVar22 + (long)pppplVar8) = 0;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                          ,0x207,2,"Channel argument \'%s\' should be a string");
            if ((long)uStack_98 < 0) {
              func_0x000107c60e14(ppplStack_a8);
            }
          }
        }
        else {
          if (pppplVar8 == (long ****)0x17) {
            if ((*pppplVar22 == (long ***)0x6972702e63707267 &&
                pppplVar22[1] == (long ***)0x6573755f7972616d) &&
                *(long *)((long)pppplVar22 + 0xf) == 0x746e6567615f7265) goto LAB_1004775bc;
LAB_100477668:
            if (*pppplVar22 == (long ***)0x746e692e63707267 &&
                *(long *)((long)pppplVar22 + 6) == 0x2e6c616e7265746e) goto LAB_10047781c;
          }
          else if ((long ****)0xd < pppplVar8) goto LAB_100477668;
          puVar13 = param_1;
          ppplStack_a8 = (long ***)pppplVar22;
          ppplStack_a0 = (long ***)pppplVar8;
          FUN_100477d50(param_1,&ppplStack_a8);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)(param_2[1] + uVar18 * 0x20);
            uStack_c8 = puVar13[1];
            uStack_d0 = *puVar13;
            uStack_b8 = puVar13[3];
            uStack_c0 = puVar13[2];
            FUN_100477dbc(&ppplStack_a8,param_1,&uStack_d0);
            func_0x000100478a50(param_1,&ppplStack_a8);
            ppplVar5 = ppplStack_a0;
            if ((long ****)ppplStack_a0 != (long ****)0x0) {
              pppplVar8 = (long ****)(ppplStack_a0 + 1);
              do {
                ppplVar15 = *pppplVar8;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
                if (bVar7) {
                  *pppplVar8 = (long ***)((long)ppplVar15 + -1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (ppplVar15 == (long ***)0x0) {
                (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
                func_0x000107c60d68(ppplVar5);
              }
            }
          }
        }
LAB_10047781c:
        uVar18 = uVar18 + 1;
        puVar13 = puStack_80;
      } while (uVar18 < *param_2);
      while (puVar13 != &uStack_78) {
        uVar2 = puVar13[4];
        uVar3 = puVar13[5];
        FUN_100479138(auStack_e8,puVar13[6],puVar13[7]," ",1);
        FUN_1004792c0(&ppplStack_a8,param_1,uVar2,uVar3,auStack_e8);
        func_0x000100478a50(param_1,&ppplStack_a8);
        ppplVar5 = ppplStack_a0;
        if ((long ****)ppplStack_a0 != (long ****)0x0) {
          pppplVar8 = (long ****)(ppplStack_a0 + 1);
          do {
            ppplVar15 = *pppplVar8;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
            if (bVar7) {
              *pppplVar8 = (long ***)((long)ppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppplVar15 == (long ***)0x0) {
            (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
            func_0x000107c60d68(ppplVar5);
          }
        }
        if (cStack_d1 < '\0') {
          func_0x000107c60e14(auStack_e8[0]);
        }
        puVar14 = (undefined8 *)puVar13[1];
        puVar23 = puVar13;
        if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
          do {
            puVar13 = (undefined8 *)puVar23[2];
            bVar7 = (undefined8 *)*puVar13 != puVar23;
            puVar23 = puVar13;
          } while (bVar7);
        }
        else {
          do {
            puVar13 = puVar14;
            puVar14 = (undefined8 *)*puVar13;
          } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
        }
      }
    }
    FUN_100479354(&puStack_80,uStack_78);
  }
  return;
}



/* Entry: 100477994; end: 100477aab;  */

void FUN_100477994(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_1004774bc(param_3);
  lVar8 = *param_2;
  lVar2 = param_2[1];
  while( true ) {
    if (lVar8 == lVar2) {
      return;
    }
    plStack_48 = (long *)param_1[1];
    uStack_50 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar6 = *(long **)(lVar8 + 0x18);
    if (plVar6 == (long *)0x0) break;
    (**(code **)(*plVar6 + 0x30))(auStack_40,plVar6,&uStack_50);
    func_0x000100478a50(param_1,auStack_40);
    plVar6 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        func_0x000107c60d68(plVar6);
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plVar6);
      }
    }
    lVar8 = lVar8 + 0x20;
  }
  func_0x000104a71f98();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100477a8c);
  (*pcVar5)();
}



/* Entry: 100477aac; end: 100477b47;  */

long * FUN_100477aac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_100475284(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_100477b2c;
      }
      lVar2 = param_1;
      FUN_100475284(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_100477b2c:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 100477b48; end: 100477bd3;  */

undefined1  [16] FUN_100477b48(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_100477aac(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x48;
    func_0x000107c60e20();
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    FUN_100477bd4(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 100477bd4; end: 100477c5b;  */

void FUN_100477bd4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 100477c5c; end: 100477d4f;  */

void FUN_100477c5c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    do {
      lVar9 = lVar10 + 0x10;
      bVar5 = *(byte *)(lVar10 + 0x27);
      uVar11 = (ulong)bVar5;
      lVar8 = lVar9;
      uVar12 = uVar11;
      if ((char)bVar5 < '\0') {
        lVar8 = *(long *)(lVar10 + 0x10);
        uVar12 = *(ulong *)(lVar10 + 0x18);
      }
      uVar2 = uVar4;
      if (uVar12 <= uVar4) {
        uVar2 = uVar12;
      }
      func_0x000107c610b0(lVar8,uVar3,uVar2);
      if ((int)lVar8 == 0) {
        if (uVar12 <= uVar4) goto LAB_100477cd4;
LAB_100477cc4:
        param_2 = (long *)(lVar10 + 0x48);
      }
      else {
        if (0 < (int)lVar8) goto LAB_100477cc4;
LAB_100477cd4:
        if ((char)bVar5 < '\0') {
          lVar9 = *(long *)(lVar10 + 0x10);
          uVar11 = *(ulong *)(lVar10 + 0x18);
        }
        uVar12 = uVar4;
        if (uVar11 <= uVar4) {
          uVar12 = uVar11;
        }
        func_0x000107c610b0(lVar9,uVar3,uVar12);
        if ((int)lVar9 == 0) {
          if (uVar4 <= uVar11) goto LAB_100477d2c;
        }
        else if (-1 < (int)lVar9) {
LAB_100477d2c:
          lVar9 = param_2[1];
          *param_1 = lVar10;
          param_1[1] = lVar9;
          if (lVar9 == 0) {
            return;
          }
          plVar1 = (long *)(lVar9 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          return;
        }
        param_2 = (long *)(lVar10 + 0x58);
      }
      lVar10 = *param_2;
    } while (lVar10 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 100477d50; end: 100477dbb;  */

long FUN_100477d50(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_100477c5c(&lStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plStack_28);
    }
  }
  lVar4 = 0;
  if (lStack_30 != 0) {
    lVar4 = lStack_30 + 0x28;
  }
  return lVar4;
}



/* Entry: 100477dbc; end: 100477f2f;  */

void FUN_100477dbc(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 ****ppppuVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x23;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined1 auStack_118 [32];
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_68;
  int aiStack_60 [6];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  piVar5 = (int *)&uStack_80;
  iVar2 = *param_3;
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(param_3 + 2);
    pcVar6 = *(char **)(param_3 + 4);
    uVar10 = uVar4;
    func_0x000107c613d0(uVar4);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "";
    }
    FUN_10002b024(&uStack_48,pcVar6);
    FUN_1004792c0(param_1,param_2,uVar4,uVar10,&uStack_48);
    if (unaff_x23 < 0) {
      func_0x000107c60e14(CONCAT44(uStack_44,uStack_48));
    }
    return;
  }
  if (iVar2 == 2) {
    uVar11 = *(undefined8 *)(param_3 + 2);
    uVar10 = uVar11;
    func_0x000107c613d0(uVar11);
    uVar4 = *(undefined8 *)(param_3 + 4);
    (*(code *)**(undefined8 **)(param_3 + 6))();
    ppuStack_78 = &PTR_DAT_1107c4910;
    if (*(undefined ***)(param_3 + 6) != (undefined **)0x0) {
      ppuStack_78 = *(undefined ***)(param_3 + 6);
    }
    uStack_68 = 2;
    uStack_80 = uVar4;
    FUN_100477f30(param_1,param_2,uVar11,uVar10,&uStack_80);
LAB_100477eb0:
    FUN_100478948(piVar5);
    return;
  }
  if (iVar2 == 1) {
    uVar10 = *(undefined8 *)(param_3 + 2);
    uVar4 = uVar10;
    func_0x000107c613d0(uVar10);
    aiStack_60[0] = param_3[4];
    uStack_48 = 0;
    FUN_100477f30(param_1,param_2,uVar10,uVar4,aiStack_60);
    piVar5 = aiStack_60;
    goto LAB_100477eb0;
  }
  pcVar6 = "return ChannelArgs()";
  pcVar8 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc";
  uVar9 = 0x51;
  func_0x000104a6e964();
  FUN_100478948(&uStack_80);
  func_0x000107c60bd8(pcVar6);
  if (0x7ffffffffffffff7 < uVar9) {
    ppppuVar7 = &pppuStack_f8;
    func_0x000104a6fa5c();
    FUN_100478948(auStack_118);
    if (uStack_e8._7_1_ < '\0') {
      func_0x000107c60e14(pppuStack_f8);
    }
    func_0x000107c60bd8();
    if (*(uint *)(ppppuVar7 + 3) != 0xffffffff) {
      (*(code *)(&PTR_FUN_1107c48f8)[*(uint *)(ppppuVar7 + 3)])(&uStack_151,ppppuVar7);
    }
    *(undefined4 *)(ppppuVar7 + 3) = 0xffffffff;
    uVar3 = *(uint *)(pcVar8 + 0x18);
    if (uVar3 != 0xffffffff) {
      (*(code *)(&PTR_FUN_1107c4928)[uVar3])(&uStack_152,ppppuVar7,pcVar8);
      *(uint *)(ppppuVar7 + 3) = uVar3;
    }
    return;
  }
  if (uVar9 < 0x17) {
    uStack_e8 = CONCAT17((char)uVar9,(undefined7)uStack_e8);
    ppppuVar7 = &pppuStack_f8;
    if (uVar9 == 0) goto LAB_100477fc4;
  }
  else {
    uVar1 = (uVar9 & 0xfffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = uVar9 | 7;
    }
    ppppuVar7 = (undefined8 ****)(uVar1 + 1);
    func_0x000107c60e20();
    uStack_e8 = uVar1 + 1 | 0x8000000000000000;
    pppuStack_f8 = ppppuVar7;
    uStack_f0 = uVar9;
  }
  func_0x000107c610b8(ppppuVar7,pcVar8,uVar9);
LAB_100477fc4:
  *(undefined1 *)((long)ppppuVar7 + uVar9) = 0;
  FUN_1004780e0(auStack_118,param_5);
  FUN_100478120(&uStack_e0,pcVar6,&pppuStack_f8,auStack_118);
  extraout_x8[1] = uStack_d8;
  *extraout_x8 = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_100478948(auStack_118);
  if ((long)uStack_e8 < 0) {
    func_0x000107c60e14(pppuStack_f8);
  }
  return;
}



/* Entry: 100477f30; end: 100478053;  */

void FUN_100477f30(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 auStack_98 [32];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (0x7ffffffffffffff7 < param_4) {
    pppuVar3 = &ppuStack_78;
    func_0x000104a6fa5c();
    FUN_100478948(auStack_98);
    if (uStack_68._7_1_ < '\0') {
      func_0x000107c60e14(ppuStack_78);
    }
    func_0x000107c60bd8();
    if (*(uint *)(pppuVar3 + 3) != 0xffffffff) {
      (*(code *)(&PTR_FUN_1107c48f8)[*(uint *)(pppuVar3 + 3)])(&uStack_d1,pppuVar3);
    }
    *(undefined4 *)(pppuVar3 + 3) = 0xffffffff;
    uVar2 = *(uint *)(param_3 + 0x18);
    if (uVar2 != 0xffffffff) {
      (*(code *)(&PTR_FUN_1107c4928)[uVar2])(&uStack_d2,pppuVar3,param_3);
      *(uint *)(pppuVar3 + 3) = uVar2;
    }
    return;
  }
  if (param_4 < 0x17) {
    uStack_68 = CONCAT17((char)param_4,(undefined7)uStack_68);
    pppuVar3 = &ppuStack_78;
    if (param_4 == 0) goto LAB_100477fc4;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    pppuVar3 = (undefined8 ***)(uVar1 + 1);
    func_0x000107c60e20();
    uStack_68 = uVar1 + 1 | 0x8000000000000000;
    ppuStack_78 = pppuVar3;
    uStack_70 = param_4;
  }
  func_0x000107c610b8(pppuVar3,param_3,param_4);
LAB_100477fc4:
  *(undefined1 *)((long)pppuVar3 + param_4) = 0;
  FUN_1004780e0(auStack_98,param_5);
  FUN_100478120(&uStack_60,param_2,&ppuStack_78,auStack_98);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_100478948(auStack_98);
  if ((long)uStack_68 < 0) {
    func_0x000107c60e14(ppuStack_78);
  }
  return;
}



/* Entry: 100478054; end: 1004780df;  */

void FUN_100478054(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c48f8)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4928)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1004780e0; end: 100478113;  */

undefined1 * FUN_1004780e0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_100478054();
  return param_1;
}



/* Entry: 100478114; end: 10047811f;  */

void FUN_100478114(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}



/* Entry: 100478120; end: 1004781c7;  */

void FUN_100478120(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  lStack_40 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1004780e0(auStack_70,param_4);
  FUN_1004781c8(&uStack_30,param_2,&uStack_50,auStack_70);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_100478948(auStack_70);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  return;
}



/* Entry: 1004781c8; end: 1004786db;  */

/* WARNING: Removing unreachable block (ram,0x0001004784dc) */
/* WARNING: Removing unreachable block (ram,0x000100478350) */

void FUN_1004781c8(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_200 [32];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c0 [32];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    FUN_1004780e0(auStack_a0,param_4);
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_c0 = 0;
    plStack_b8 = (long *)0x0;
    FUN_1004786dc(param_1,&uStack_80,auStack_a0,&uStack_b0,&uStack_c0);
    plVar2 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        func_0x000107c60d68(plVar2);
      }
    }
    plVar2 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        func_0x000107c60d68(plVar2);
      }
    }
    FUN_100478948(auStack_a0);
  }
  else {
    puVar15 = (undefined8 *)(lVar13 + 0x10);
    puVar12 = (undefined8 *)*puVar15;
    bVar4 = *(byte *)(lVar13 + 0x27);
    uVar14 = *(ulong *)(lVar13 + 0x18);
    puVar11 = puVar12;
    uVar8 = uVar14;
    if (-1 < (char)bVar4) {
      puVar11 = puVar15;
      uVar8 = (ulong)bVar4;
    }
    puVar10 = (undefined8 *)*param_3;
    uVar7 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar10 = param_3;
      uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    uVar3 = uVar7;
    if (uVar8 <= uVar7) {
      uVar3 = uVar8;
    }
    puVar9 = puVar11;
    func_0x000107c610b0(puVar11,puVar10,uVar3);
    bVar6 = uVar8 < uVar7;
    if ((int)puVar9 != 0) {
      bVar6 = (int)puVar9 < 0;
    }
    if (bVar6) {
      if ((char)bVar4 < '\0') {
        FUN_100033dac(&uStack_e0,puVar12,uVar14);
        lVar13 = *param_2;
      }
      else {
        uStack_d8 = *(undefined8 *)(lVar13 + 0x18);
        uStack_e0 = *puVar15;
        uStack_d0 = *(undefined8 *)(lVar13 + 0x20);
      }
      FUN_100478b40(auStack_100,lVar13 + 0x28);
      lVar13 = *param_2;
      uStack_118 = param_3[1];
      uStack_120 = *param_3;
      lStack_110 = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      FUN_1004780e0(auStack_140,param_4);
      FUN_1004781c8(&uStack_b0,lVar13 + 0x58,&uStack_120,auStack_140);
      FUN_100478b90(param_1,&uStack_e0,auStack_100,lVar13 + 0x48,&uStack_b0);
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar13 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          func_0x000107c60d68(plStack_a8);
        }
      }
      FUN_100478948(auStack_140);
      if (lStack_110 < 0) {
        func_0x000107c60e14(uStack_120);
      }
      FUN_100478948(auStack_100);
    }
    else {
      func_0x000107c610b0(puVar10,puVar11,uVar3);
      bVar6 = uVar7 < uVar8;
      if ((int)puVar10 != 0) {
        bVar6 = (int)puVar10 < 0;
      }
      if (bVar6) {
        if ((char)bVar4 < '\0') {
          FUN_100033dac(&uStack_160,puVar12,uVar14);
          lVar13 = *param_2;
        }
        else {
          uStack_158 = *(undefined8 *)(lVar13 + 0x18);
          uStack_160 = *puVar15;
          lStack_150 = *(long *)(lVar13 + 0x20);
        }
        FUN_100478b40(auStack_180,lVar13 + 0x28);
        lVar13 = *param_2;
        uStack_198 = param_3[1];
        uStack_1a0 = *param_3;
        lStack_190 = param_3[2];
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        FUN_1004780e0(auStack_1c0,param_4);
        FUN_1004781c8(&uStack_b0,lVar13 + 0x48,&uStack_1a0,auStack_1c0);
        FUN_100478b90(param_1,&uStack_160,auStack_180,&uStack_b0,*param_2 + 0x58);
        if (plStack_a8 != (long *)0x0) {
          plVar2 = plStack_a8 + 1;
          do {
            lVar13 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            func_0x000107c60d68(plStack_a8);
          }
        }
        FUN_100478948(auStack_1c0);
        if (lStack_190 < 0) {
          func_0x000107c60e14(uStack_1a0);
        }
        FUN_100478948(auStack_180);
        if (-1 < lStack_150) {
          return;
        }
        puVar11 = &uStack_160;
      }
      else {
        uStack_1d8 = param_3[1];
        uStack_1e0 = *param_3;
        lStack_1d0 = param_3[2];
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        FUN_1004780e0(auStack_200,param_4);
        FUN_1004786dc(param_1,&uStack_1e0,auStack_200,*param_2 + 0x48,*param_2 + 0x58);
        FUN_100478948(auStack_200);
        if (-1 < lStack_1d0) {
          return;
        }
        puVar11 = &uStack_1e0;
      }
      func_0x000107c60e14(*puVar11);
    }
  }
  return;
}



/* Entry: 1004786dc; end: 100478737;  */

void FUN_1004786dc(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lStack_20;
  undefined1 uStack_11;
  
  lStack_20 = 0;
  if (*param_3 != 0) {
    lStack_20 = *(long *)(*param_3 + 0x68);
  }
  lVar1 = 0;
  if (*param_4 != 0) {
    lVar1 = *(long *)(*param_4 + 0x68);
  }
  if (lStack_20 <= lVar1) {
    lStack_20 = lVar1;
  }
  lStack_20 = lStack_20 + 1;
  FUN_100478738(&uStack_11,param_1,param_2,param_3,param_4,&lStack_20);
  return;
}



/* Entry: 100478738; end: 1004787c7;  */

/* WARNING: Possible PIC construction at 0x000100478a04: Changing call to branch */

void FUN_100478738(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = 0x88;
  func_0x000107c60e20();
  FUN_1004788d8();
  lVar5 = lVar3 + 0x18;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  if ((lVar5 != 0) &&
     ((plVar4 = *(long **)(lVar3 + 0x20), plVar4 == (long *)0x0 || (plVar4[1] == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = *(long **)(lVar3 + 0x20);
    }
    *(long *)lVar5 = lVar5;
    *(long **)(lVar3 + 0x20) = plVar6;
    if (plVar4 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar4 = plVar6;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 1004787c8; end: 1004788d7;  */

undefined8 *
FUN_1004787c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 auStack_88 [4];
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_3;
  uStack_68 = (undefined7)param_3[1];
  uStack_61 = (undefined1)*(undefined8 *)((long)param_3 + 0xf);
  uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)param_3 + 0xf) >> 8);
  uVar7 = *(undefined1 *)((long)param_3 + 0x17);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar12 = param_5;
  puVar13 = param_6;
  FUN_1004780e0(auStack_88,param_4);
  uVar3 = *param_5;
  lVar5 = param_5[1];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar4 = *param_6;
  lVar6 = param_6[1];
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar14 = *param_7;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar2;
  param_2[3] = CONCAT17(uStack_61,uStack_68);
  *(ulong *)((long)param_2 + 0x1f) = CONCAT71(uStack_60,uStack_61);
  *(undefined1 *)((long)param_2 + 0x27) = uVar7;
  puVar11 = auStack_88;
  FUN_1004780e0(param_2 + 5,puVar11);
  param_2[9] = uVar3;
  param_2[10] = lVar5;
  param_2[0xb] = uVar4;
  param_2[0xc] = lVar6;
  param_2[0xd] = uVar14;
  puVar10 = auStack_88;
  FUN_100478948();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  func_0x000107c60e78();
  pcStack_98 = FUN_1004788d8;
  uStack_b0 = uVar14;
  puStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_1107c4968;
  FUN_1004787c8(&uStack_b1,puVar10 + 3,puVar11,param_3,param_4,puVar12,puVar13);
  return puVar10;
}



/* Entry: 1004788d8; end: 100478943;  */

undefined8 *
FUN_1004788d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c4968;
  FUN_1004787c8(&uStack_21,param_1 + 3,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}



/* Entry: 100478944; end: 100478947;  */

void FUN_100478944(void)

{
  return;
}



/* Entry: 100478948; end: 10047899f;  */

long FUN_100478948(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c4078)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 1004789a0; end: 100478ab3;  */

/* WARNING: Possible PIC construction at 0x000100478a04: Changing call to branch */

void FUN_1004789a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((plVar3 = (long *)param_2[1], plVar3 == (long *)0x0 || (plVar3[1] == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (plVar3 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plVar5;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 100478ab4; end: 100478b3f;  */

void FUN_100478ab4(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c48f8)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c49a8)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 100478b40; end: 100478b83;  */

undefined1 * FUN_100478b40(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_100478ab4();
  return param_1;
}



/* Entry: 100478b84; end: 100478b8f;  */

void FUN_100478b84(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}



/* Entry: 100478b90; end: 100478eab;  */

/* WARNING: Removing unreachable block (ram,0x000100478c64) */
/* WARNING: Removing unreachable block (ram,0x000100478da0) */

void FUN_100478b90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar1 = *param_4;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x68);
  }
  lVar3 = *param_5;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x68);
  }
  if (lVar4 - lVar5 == -2) {
    lVar1 = 0;
    if (*(long *)(lVar3 + 0x48) != 0) {
      lVar1 = *(long *)(*(long *)(lVar3 + 0x48) + 0x68);
    }
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x58) != 0) {
      lVar4 = *(long *)(*(long *)(lVar3 + 0x58) + 0x68);
    }
    if (lVar1 - lVar4 == 1) {
      uStack_d8 = param_2[1];
      uStack_e0 = *param_2;
      lStack_d0 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_1004780e0(auStack_100,param_3);
      func_0x000104aaa404(param_1,&uStack_e0,auStack_100,param_4,param_5);
      FUN_100478948(auStack_100);
      if (-1 < lStack_d0) {
        return;
      }
      puVar2 = &uStack_e0;
    }
    else {
      uStack_118 = param_2[1];
      uStack_120 = *param_2;
      lStack_110 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_1004780e0(auStack_140,param_3);
      FUN_10047ab60(param_1,&uStack_120,auStack_140,param_4,param_5);
      FUN_100478948(auStack_140);
      if (-1 < lStack_110) {
        return;
      }
      puVar2 = &uStack_120;
    }
  }
  else {
    if (lVar4 - lVar5 == 2) {
      lVar4 = 0;
      if (*(long *)(lVar1 + 0x48) != 0) {
        lVar4 = *(long *)(*(long *)(lVar1 + 0x48) + 0x68);
      }
      lVar3 = 0;
      if (*(long *)(lVar1 + 0x58) != 0) {
        lVar3 = *(long *)(*(long *)(lVar1 + 0x58) + 0x68);
      }
      if (lVar4 - lVar3 != -1) {
        uStack_98 = param_2[1];
        uStack_a0 = *param_2;
        uStack_90 = param_2[2];
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        FUN_1004780e0(auStack_c0,param_3);
        FUN_1008da540(param_1,&uStack_a0,auStack_c0,param_4,param_5);
        FUN_100478948(auStack_c0);
        return;
      }
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_50 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      FUN_1004780e0(auStack_80,param_3);
      func_0x000104aaa178(param_1,&uStack_60,auStack_80,param_4,param_5);
      FUN_100478948(auStack_80);
      return;
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100033dac(&uStack_160,*param_2,param_2[1]);
    }
    else {
      uStack_158 = param_2[1];
      uStack_160 = *param_2;
      lStack_150 = param_2[2];
    }
    FUN_100478b40(auStack_180,param_3);
    FUN_1004786dc(param_1,&uStack_160,auStack_180,param_4,param_5);
    FUN_100478948(auStack_180);
    if (-1 < lStack_150) {
      return;
    }
    puVar2 = &uStack_160;
  }
  func_0x000107c60e14(*puVar2);
  return;
}



/* Entry: 100478eac; end: 100478f5b;  */

long FUN_100478eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 100478f5c; end: 100478f7f;  */

void FUN_100478f5c(long param_1)

{
  undefined1 uStack_11;
  
  func_0x000100478f04(&uStack_11,param_1 + 0x18);
  return;
}



/* Entry: 100478f80; end: 100478f83;  */

void FUN_100478f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100478f84; end: 100478fc3;  */

undefined1 FUN_100478f84(void)

{
  if (lRam00000001137fbc80 != -1) {
    FUN_10002a2fc(0x1137fbc80,&PTR___NSConcreteGlobalBlock_110d62de0);
  }
  return uRam00000001137fbc54;
}



/* Entry: 100478fc4; end: 100479137;  */

void FUN_100478fc4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbc60 != -1) {
    FUN_10002a2fc(0x1137fbc60,&PTR___NSConcreteGlobalBlock_110d62d60);
  }
  uVar1 = uRam00000001137fbc58;
  func_0x000107c61174(uRam00000001137fbc58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100479138; end: 100479237;  */

void FUN_100479138(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    lVar2 = param_2[1];
    puVar3 = param_2 + 2;
    for (puVar1 = puVar3; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar2 = lVar2 + param_5 + puVar1[1];
    }
    if (lVar2 != 0) {
      FUN_100066b68(param_1);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      func_0x000107c610b4(puVar1,*param_2,param_2[1]);
      if (puVar3 != param_3) {
        lVar2 = (long)puVar1 + param_2[1];
        do {
          func_0x000107c610b4(lVar2,param_4,param_5);
          func_0x000107c610b4(lVar2 + param_5,*puVar3,puVar3[1]);
          lVar2 = lVar2 + param_5 + puVar3[1];
          puVar3 = puVar3 + 2;
        } while (puVar3 != param_3);
      }
    }
  }
  return;
}



/* Entry: 100479238; end: 1004792bf;  */

void FUN_100479238(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined1 auStack_528 [1024];
  undefined1 auStack_128 [256];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c616a0(auStack_528);
  puVar3 = (undefined8 *)0x4;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c1f0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_128);
  func_0x000107c61180();
  uVar1 = puRam00000001137fbc58;
  puRam00000001137fbc58 = puVar2;
  func_0x000107c61170(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  uStack_568 = puVar3[1];
  uStack_570 = *puVar3;
  uStack_560 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uStack_558 = 1;
  FUN_100477f30();
  FUN_100478948(&uStack_570);
  return;
}



/* Entry: 1004792c0; end: 100479323;  */

void FUN_1004792c0(void)

{
  undefined8 *in_x3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = in_x3[1];
  uStack_40 = *in_x3;
  uStack_30 = in_x3[2];
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  uStack_28 = 1;
  FUN_100477f30();
  FUN_100478948(&uStack_40);
  return;
}



/* Entry: 100479324; end: 100479353;  */

void FUN_100479324(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  return;
}



/* Entry: 100479354; end: 1004793a3;  */

/* WARNING: Possible PIC construction at 0x00010047938c: Changing call to branch */

void FUN_100479354(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_100479354(param_1,*param_2);
  FUN_100479354(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[6];
  if (puVar1 != (undefined8 *)0x0) {
    param_2[7] = puVar1;
    param_2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1004793a4; end: 1004793ab;  */

void FUN_1004793a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = *(code **)(param_1 + 8);
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plVar4);
    }
  }
  return;
}



/* Entry: 1004793ac; end: 100479433;  */

void FUN_1004793ac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plVar4);
    }
  }
  return;
}



/* Entry: 100479434; end: 100479473;  */

void FUN_100479434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_100477d50(param_1,&uStack_20);
  return;
}



/* Entry: 100479474; end: 10047952b;  */

void FUN_100479474(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plStack_28;
  
  puVar4 = param_2;
  FUN_100479434(param_2,"grpc.resource_quota",0x13);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_10047952c(&plStack_28);
    FUN_10047aa88(param_1,param_2,"grpc.resource_quota",0x13,&plStack_28);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



/* Entry: 10047952c; end: 10047960f;  */

void FUN_10047952c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  if ((bRam00000001136a2290 & 1) == 0) {
    iVar5 = 0x136a2290;
    func_0x000107c60e48();
    if (iVar5 != 0) {
      FUN_10002b024(auStack_50,"default_resource_quota");
      FUN_100479610(&lStack_38,auStack_50);
      lVar4 = lStack_38;
      lStack_38 = 0;
      if (cStack_39 < '\0') {
        func_0x000107c60e14(auStack_50[0]);
      }
      lRam00000001136a2288 = lVar4;
      func_0x000107c60e4c(0x1136a2290);
    }
  }
  lVar4 = lRam00000001136a2288;
  plVar1 = (long *)(lRam00000001136a2288 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar4;
  return;
}



/* Entry: 100479610; end: 1004796b3;  */

void FUN_100479610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = 0x28;
  func_0x000107c60e20();
  uVar3 = *param_2;
  lVar2 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10047970c();
  *param_1 = uVar1;
  if (-1 < lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar3);
  return;
}


