/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101073a1c; end: 101073eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101073a1c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d580f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126a6300;
      func_0x000107c610f8(PTR_PTR_1126a6300);
      func_0x000107c453e4();
      uVar8 = 0;
      if (param_2 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        uVar8 = param_1;
      }
      func_0x000107c54c3c(puVar4);
      func_0x000107c61170(uVar8);
      puVar5 = &UNK_11037c358;
      func_0x000107c613fc(&UNK_11037c358,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = PTR_PTR_1126a6308;
      func_0x000107c610f8(PTR_PTR_1126a6308);
      uStack_50 = 0x101074930;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11037c4d8;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c6157c(puVar5);
      func_0x000107c47c28(puVar6);
      func_0x000107c60bd0(ppuVar7);
      puVar1 = puStack_48;
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar1);
      puVar5 = PTR_PTR_1126a6310;
      func_0x000107c610f8(PTR_PTR_1126a6310);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar6);
      func_0x000107c49520(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 101073eb8; end: 101073f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101073eb8(long param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      if (param_2 == *(long *)(param_1 + _DAT_112d580d0)) {
        func_0x000101073bec(param_2);
      }
      func_0x000107c61170(param_1);
      param_1 = param_2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101073f5c; end: 101074093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101073f5c(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = "dismissTakeover()";
    func_0x0001000c10c0("dismissTakeover()");
    func_0x000107c61180();
    puVar2 = &UNK_11037c510;
    func_0x000107c613fc(&UNK_11037c510,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    uStack_58 = 0x101074938;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11037c528;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar1);
    lVar5 = param_1 + _DAT_112d580b8;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar5 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar5 + 0x10))();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101074094; end: 10107424b;  */

void FUN_101074094(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if (param_1 != 0) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10107424c);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar3 = lVar2;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        (*param_3)(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
        return;
      }
    }
  }
  uVar4 = 0;
  func_0x0001010748ac(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar5 = &UNK_11037c3d0;
  func_0x000107c613fc(&UNK_11037c3d0,0x20,7);
  *(code **)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  pcStack_50 = FUN_1010748ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100f6151c;
  puStack_58 = &UNK_11037c3e8;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c4fa04(param_5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10107424c; end: 101074257;  */

void FUN_10107424c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar7 = &puStack_70;
  if (param_1 != 0) {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10107424c);
          (*pcVar2)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        (*pcVar2)(lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
        return;
      }
    }
  }
  uVar5 = 0;
  func_0x0001010748ac(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar6 = &UNK_11037c3d0;
  func_0x000107c613fc(&UNK_11037c3d0,0x20,7);
  *(code **)(puVar6 + 0x10) = pcVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  pcStack_50 = FUN_1010748ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100f6151c;
  puStack_58 = &UNK_11037c3e8;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c4fa04(uVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101074258; end: 101074337;  */

void FUN_101074258(ulong param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101074338);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        goto LAB_1010742f0;
      }
    }
    param_1 = 0;
  }
LAB_1010742f0:
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 101074338; end: 101074353;  */

void FUN_101074338(long param_1,long param_2)

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



/* Entry: 101074354; end: 10107437f; -[_TtC36MutualFriendsEducationalBillboardFST45MutualFriendsEducationalBillboardFSTPresenter init] */

void FUN_101074354(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsEducationalBillboardFST.MutualFriendsEducationalBillboardFSTPresenter"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101074380);
  (*pcVar1)();
}



/* Entry: 101074380; end: 101074383;  */

void FUN_101074380(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101074384; end: 10107441b; -[_TtC36MutualFriendsEducationalBillboardFST45MutualFriendsEducationalBillboardFSTPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010743b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010743d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010743f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010743d4) */
/* WARNING: Removing unreachable block (ram,0x0001010743b4) */
/* WARNING: Removing unreachable block (ram,0x0001010743f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074384(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d580e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d580f0));
  return;
}



/* Entry: 10107441c; end: 10107441f; -[_TtC36MutualFriendsEducationalBillboardFST45MutualFriendsEducationalBillboardFSTPresenter tray:positionDidChange:] */

void FUN_10107441c(void)

{
  return;
}



/* Entry: 101074420; end: 1010744af; -[_TtC36MutualFriendsEducationalBillboardFST45MutualFriendsEducationalBillboardFSTPresenter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074420(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = param_1 + _DAT_112d580b8;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 0x18);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1010744b0; end: 101074517; -[_TtC36MutualFriendsEducationalBillboardFST45MutualFriendsEducationalBillboardFSTPresenter tray:heightForPosition:] */

undefined8
FUN_1010744b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_101074708(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101074518; end: 101074527; -[_TtC36MutualFriendsEducationalBillboardFST59MutualFriendsEducationalBillboardFSTContainerViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101074518(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d58130);
}



/* Entry: 101074528; end: 101074577; -[_TtC36MutualFriendsEducationalBillboardFST59MutualFriendsEducationalBillboardFSTContainerViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d58130) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 101074578; end: 101074647; -[_TtC36MutualFriendsEducationalBillboardFST59MutualFriendsEducationalBillboardFSTContainerViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101074578(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_112d58130) = 0;
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    *(undefined1 *)(param_1 + _DAT_112d58130) = 0;
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 101074648; end: 1010746d3; -[_TtC36MutualFriendsEducationalBillboardFST59MutualFriendsEducationalBillboardFSTContainerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101074648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d58130) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1010746d4; end: 101074707;  */

void FUN_1010746d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101074708; end: 101074847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101074708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  
  dVar6 = -1.0;
  if (param_5 != 8) {
    return -1.0;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d580d0);
  if (lVar2 == 0) {
    return -1.0;
  }
  func_0x000107c61174(0xbff0000000000000);
  lVar3 = lVar2;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c447b4();
    func_0x000107c615e8(lVar3);
    if ((int)lVar4 != 0) {
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112d580c8);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
      }
      else {
        func_0x000107c5de64();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101074790);
          (*pcVar1)();
        }
      }
      func_0x000107c3ec60();
      func_0x000107c61170(puVar5);
      func_0x000107c609cc(dVar6,param_2,param_3,param_4);
      dVar7 = 1.79769313486232e+308;
      func_0x000107c5b098(lVar2);
      FUN_101073450();
      func_0x000107c61170(lVar2);
      dVar7 = dVar7 + dVar6;
      goto LAB_101074828;
    }
  }
  FUN_101073450();
  func_0x000107c61170(lVar2);
  dVar7 = dVar6 + 500.0;
LAB_101074828:
  return dVar7 + 24.0;
}



/* Entry: 101074848; end: 101074887;  */

void FUN_101074848(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac2a8);
  return;
}



/* Entry: 101074888; end: 1010748eb;  */

undefined8 FUN_101074888(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1010748ec; end: 1010748fb;  */

void FUN_1010748ec(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101074338);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = param_2;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        goto LAB_1010742f0;
      }
    }
    param_1 = 0;
  }
LAB_1010742f0:
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 1010748fc; end: 101074927;  */

void FUN_1010748fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101074928; end: 101074983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074928(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (lVar2 == *(long *)(lVar1 + _DAT_112d580d0)) {
        func_0x000101073bec(lVar2);
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101074984; end: 1010749f7; -[_TtC36MutualFriendsEducationalBillboardFST44MutualFriendsEducationalBillboardFSTProvider canShowCampaign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101074984(long param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if (param_3 == *(long *)(param_1 + _DAT_112d58198) &&
        param_2 == ((long *)(param_1 + _DAT_112d58198))[1]) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 1010749f8; end: 101074c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010749f8(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d58180);
    *(long *)(unaff_x20 + _DAT_112d58180) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(uVar7);
    plVar1 = (long *)(unaff_x20 + _DAT_112d58188);
    lVar6 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = param_3;
    plVar1[1] = param_4;
    func_0x000107c6157c(param_4);
    func_0x00010058d43c(lVar6,lVar4);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d58160);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d58170);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d58178);
    lVar3 = 0;
    FUN_101074848();
    lVar4 = lVar3;
    func_0x000107c610f8();
    lVar6 = lVar4 + _DAT_112d580b8;
    *(undefined8 *)(lVar6 + 8) = 0;
    func_0x000107c61614(lVar6,0);
    *(undefined8 *)(lVar4 + _DAT_112d580c0) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d580c8) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d580d0) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d580d8) = 0x407f400000000000;
    *(undefined8 *)(lVar4 + _DAT_112d580e0) = 0x4038000000000000;
    *(long *)(lVar4 + _DAT_112d580e8) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112d580f0) = uVar9;
    *(undefined8 *)(lVar4 + _DAT_112d580f8) = uVar8;
    *(undefined8 *)(lVar4 + _DAT_112d58100) = uVar7;
    *(undefined ***)(lVar6 + 8) = &PTR_DAT_11037c550;
    func_0x000107c61604();
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_70,puVar2);
    lVar6 = _DAT_112d58190;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d58190);
    *(long **)(unaff_x20 + _DAT_112d58190) = plVar5;
    func_0x000107c61170(uVar7);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 == 0) {
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      func_0x00010058d43c(param_3,param_4);
    }
    else {
      func_0x000107c61174();
      FUN_101073668();
      func_0x000107c615e8(param_2);
      func_0x000107c61170(param_1);
      func_0x00010058d43c(param_3,param_4);
      func_0x000107c61170(lVar6);
    }
  }
  return;
}



/* Entry: 101074c34; end: 101074cfb; -[_TtC36MutualFriendsEducationalBillboardFST44MutualFriendsEducationalBillboardFSTProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000101074cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101074cdc) */

void FUN_101074c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_11037c580;
    func_0x000107c613fc(&UNK_11037c580,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x101075164;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1010749f8(param_3,param_4,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101074cfc; end: 101074d5b; -[_TtC36MutualFriendsEducationalBillboardFST44MutualFriendsEducationalBillboardFSTProvider init] */

void FUN_101074cfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsEducationalBillboardFST.MutualFriendsEducationalBillboardFSTProvider"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101074d28);
  (*pcVar1)();
}



/* Entry: 101074d5c; end: 101074dfb; -[_TtC36MutualFriendsEducationalBillboardFST44MutualFriendsEducationalBillboardFSTProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074d5c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58160));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58168));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58170));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58178));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58180));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d58188),
                      ((undefined8 *)(param_1 + _DAT_112d58188))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58190));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d58198 + 8))
  ;
  return;
}



/* Entry: 101074dfc; end: 101074e1b;  */

void FUN_101074dfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac468);
  return;
}



/* Entry: 101074e1c; end: 101074ee7;  */

/* WARNING: Possible PIC construction at 0x000101074ec0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074e1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d58180);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d58168);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101074ee8; end: 101075157;  */

/* WARNING: Possible PIC construction at 0x000101074f90: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101074ee8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d58180);
  if (puVar1 != (undefined *)0x0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d58168);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000101074fc4();
    }
    else {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar1 = puVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar2);
      func_0x000107c4c4c0(lVar3);
      func_0x000107c615e8(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101075158; end: 10107516f;  */

/* WARNING: Possible PIC construction at 0x000101074ec0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075158(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d58180);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d58168);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101075170; end: 10107517b; -[SCMutualFriendsEducationalBillboardFSTEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d581c8;
  func_0x000107c61428(param_1 + _DAT_112d581c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10107517c; end: 101075187; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107517c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d581c8;
  func_0x000107c61428(param_1 + _DAT_112d581c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101075188; end: 101075193; -[SCMutualFriendsEducationalBillboardFSTEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075188(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d581d0;
  func_0x000107c61428(param_1 + _DAT_112d581d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101075194; end: 10107519f; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075194(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d581d0;
  func_0x000107c61428(param_1 + _DAT_112d581d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010751a0; end: 1010751ab; -[SCMutualFriendsEducationalBillboardFSTEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010751a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d581d8;
  func_0x000107c61428(param_1 + _DAT_112d581d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010751ac; end: 1010751b7; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010751ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d581d8;
  func_0x000107c61428(param_1 + _DAT_112d581d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010751b8; end: 1010751c3; -[SCMutualFriendsEducationalBillboardFSTEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010751b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d581e0;
  func_0x000107c61428(param_1 + _DAT_112d581e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010751c4; end: 1010751cf; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010751c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d581e0;
  func_0x000107c61428(param_1 + _DAT_112d581e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010751d0; end: 1010751db; -[SCMutualFriendsEducationalBillboardFSTEntryPoint friendingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010751d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d581e8;
  func_0x000107c61428(param_1 + _DAT_112d581e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010751dc; end: 10107521f;  */

void FUN_1010751dc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101075220; end: 10107522b; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setFriendingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d581e8;
  func_0x000107c61428(param_1 + _DAT_112d581e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10107522c; end: 10107527f;  */

void FUN_10107522c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101075280; end: 10107550f;  */

/* WARNING: Possible PIC construction at 0x00010107543c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107544c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107546c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010754d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010754e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010754c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010754ec) */
/* WARNING: Removing unreachable block (ram,0x0001010754dc) */
/* WARNING: Removing unreachable block (ram,0x000101075470) */
/* WARNING: Removing unreachable block (ram,0x000101075460) */
/* WARNING: Removing unreachable block (ram,0x000101075450) */
/* WARNING: Removing unreachable block (ram,0x000101075440) */
/* WARNING: Removing unreachable block (ram,0x0001010754cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075280(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c3e8cc();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c5b490();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c43a20();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_101073430(0);
            func_0x000107c613fc();
            func_0x000107c5dbd4();
            func_0x000107c61180();
            func_0x000107c43b5c();
            func_0x000107c61180();
            lVar7 = 0;
            FUN_101074dfc();
            lVar8 = lVar7;
            func_0x000107c610f8();
            *(undefined8 *)(lVar8 + _DAT_112d58180) = 0;
            puVar1 = (undefined8 *)(lVar8 + _DAT_112d58188);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar8 + _DAT_112d58190) = 0;
            puVar1 = (undefined8 *)(lVar8 + _DAT_112d58198);
            *puVar1 = 0xd000000000000031;
            puVar1[1] = 0x800000010ef22720;
            *(long *)(lVar8 + _DAT_112d58160) = lVar4;
            *(long *)(lVar8 + _DAT_112d58168) = lVar5;
            *(long *)(lVar8 + _DAT_112d58170) = lVar6;
            *(long *)(lVar8 + _DAT_112d58178) = unaff_x20;
            puVar2 = PTR_s_init_1125d9248;
            lStack_70 = lVar8;
            lStack_68 = lVar7;
            func_0x000107c61174(lVar6);
            func_0x000107c61174(unaff_x20);
            func_0x000107c61154(&lStack_70,puVar2);
            func_0x000107c4e9e4(lVar3);
            func_0x000107c61180();
            func_0x000107c4fba8();
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 101075510; end: 101075537; -[SCMutualFriendsEducationalBillboardFSTEntryPoint begin] */

void FUN_101075510(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101075280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101075538; end: 10107557b; -[SCMutualFriendsEducationalBillboardFSTEntryPoint end] */

void FUN_101075538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10107557c; end: 101075853;  */

void FUN_10107557c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c536e0();
    }
    else {
      uVar2 = 0xd000000000000019;
      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
         (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c50();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10dd950)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef226b0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "MutualFriendsEducationalBillboardFST/SCMutualFriendsEducationalBillboardFSTEntryPoint.swift"
                                  ,0x5b,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101075854);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c54c48();
            goto LAB_101075608;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
    }
  }
LAB_101075608:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101075854; end: 1010758ff; -[SCMutualFriendsEducationalBillboardFSTEntryPoint setValue:forIvarName:] */

void FUN_101075854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10107557c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101075900; end: 1010759af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075900(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d581c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d581d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d581d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d581e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d581e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d581f0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010759b0; end: 1010759cf; -[SCMutualFriendsEducationalBillboardFSTEntryPoint init] */

void FUN_1010759b0(void)

{
  FUN_101075900();
  return;
}



/* Entry: 1010759d0; end: 101075a03;  */

void FUN_1010759d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101075a04; end: 101075a7b; -[SCMutualFriendsEducationalBillboardFSTEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075a04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d581c8);
  func_0x000107c61610(param_1 + _DAT_112d581d0);
  func_0x000107c61610(param_1 + _DAT_112d581d8);
  func_0x000107c61610(param_1 + _DAT_112d581e0);
  func_0x000107c61610(param_1 + _DAT_112d581e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d581f0));
  return;
}



/* Entry: 101075a7c; end: 101075a9b;  */

void FUN_101075a7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac560);
  return;
}



/* Entry: 101075a9c; end: 101075ad7;  */

void FUN_101075a9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101075ad8; end: 101075cc3;  */

/* WARNING: Possible PIC construction at 0x000101075b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101075bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101075c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101075c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101075ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101075c9c) */
/* WARNING: Removing unreachable block (ram,0x000101075c04) */
/* WARNING: Removing unreachable block (ram,0x000101075bd8) */
/* WARNING: Removing unreachable block (ram,0x000101075b28) */
/* WARNING: Removing unreachable block (ram,0x000101075b2c) */
/* WARNING: Removing unreachable block (ram,0x000101075b50) */
/* WARNING: Removing unreachable block (ram,0x000101075b48) */
/* WARNING: Removing unreachable block (ram,0x000101075b54) */
/* WARNING: Removing unreachable block (ram,0x000101075cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075ad8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113081210);
  func_0x000107c5dd3c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101075cc4; end: 101075d6b; -[_TtC27SCMapHeaderButtonEntryPoint25MapHeaderButtonEntryPoint _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075cc4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f312f8;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112f312f8,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c6157c(param_1);
    func_0x000107c41d90(lVar2);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101075d6c; end: 101075d97;  */

void FUN_101075d6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101075d98; end: 101075db7;  */

void FUN_101075d98(void)

{
  FUN_101075ad8();
  return;
}



/* Entry: 101075db8; end: 101075dbf;  */

undefined8 FUN_101075db8(void)

{
  return 0;
}



/* Entry: 101075dc0; end: 101075ddf;  */

void FUN_101075dc0(void)

{
  func_0x000107c61168(&PTR_PTR_112d58268);
  return;
}



/* Entry: 101075de0; end: 101075eab;  */

undefined1  [16] FUN_101075de0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x745f6e6f74747562;
  func_0x000107c5fadc(0x745f6e6f74747562,0xec000000656c7469);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228a0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101075eac);
  (*pcVar1)();
}



/* Entry: 101075eac; end: 101075eb7; -[SCMapHeaderButtonEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075eac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d582d8;
  func_0x000107c61428(param_1 + _DAT_112d582d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101075eb8; end: 101075ec3; -[SCMapHeaderButtonEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d582d8;
  func_0x000107c61428(param_1 + _DAT_112d582d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101075ec4; end: 101075ecf; -[SCMapHeaderButtonEntryPoint cameraConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075ec4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d582e0;
  func_0x000107c61428(param_1 + _DAT_112d582e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101075ed0; end: 101075f13;  */

void FUN_101075ed0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101075f14; end: 101075f1f; -[SCMapHeaderButtonEntryPoint setCameraConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d582e0;
  func_0x000107c61428(param_1 + _DAT_112d582e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101075f20; end: 101075f73;  */

void FUN_101075f20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101075f74; end: 101076057;  */

/* WARNING: Possible PIC construction at 0x000101075ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101076000) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101075f74(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c3f084();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_101075dc0();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    *(long *)(lVar2 + 0x18) = unaff_x20;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    FUN_101075ad8();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101076058; end: 10107607f; -[SCMapHeaderButtonEntryPoint begin] */

void FUN_101076058(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101075f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101076080; end: 1010760c3; -[SCMapHeaderButtonEntryPoint end] */

void FUN_101076080(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010760c4; end: 10107625b;  */

void FUN_1010760c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10dd740)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef228c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCMapHeaderButtonEntryPoint/SCMapHeaderButtonEntryPoint.swift",0x3d,2,
                            0x28,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10107625c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52fdc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10107625c; end: 101076307; -[SCMapHeaderButtonEntryPoint setValue:forIvarName:] */

void FUN_10107625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010760c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101076308; end: 10107637b; -[SCMapHeaderButtonEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076308(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d582d8,0);
  func_0x000107c61614(param_1 + _DAT_112d582e0,0);
  *(undefined8 *)(param_1 + _DAT_112d582e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10107637c; end: 1010763af;  */

void FUN_10107637c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010763b0; end: 1010763f7; -[SCMapHeaderButtonEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010763b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d582d8);
  func_0x000107c61610(param_1 + _DAT_112d582e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d582e8));
  return;
}



/* Entry: 1010763f8; end: 101076417;  */

void FUN_1010763f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac640);
  return;
}



/* Entry: 101076418; end: 1010764bf; +[SCFriendingImpressionLimitHelper impressionLimitReachedWithUserPreferences:limit:cooldownDays:currentCountKey:cooldownKey:] */

uint FUN_101076418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_6);
  uVar2 = param_2;
  func_0x000107c5faec(param_7);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_10107652c();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 1010764c0; end: 1010764fb; -[SCFriendingImpressionLimitHelper init] */

void FUN_1010764c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_10107684c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010764fc; end: 10107652b;  */

void FUN_1010764fc(void)

{
  FUN_10107684c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10107652c; end: 10107684b;  */

undefined8
FUN_10107652c(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  lStack_88 = param_4;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  if (param_3 < 1) {
    return 0;
  }
  uStack_90 = param_7;
  uStack_80 = param_5;
  uStack_78 = param_6;
  func_0x000107c5fadc(param_5,param_6);
  lVar2 = param_2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar9 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    if (lVar9 != 0) {
      func_0x000107c49820();
      func_0x000107c615e8(lVar2);
      if (param_3 <= lVar9) {
        uVar4 = uStack_90;
        func_0x000107c5fadc(uStack_90,param_8);
        lVar2 = param_2;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (lVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x000107c61168(PTR__OBJC_CLASS___NSDate_1126ae770);
          lVar9 = lVar2;
          func_0x000107c6148c(lVar2,puVar3);
          if (lVar9 != 0) {
            func_0x000107c5ee94(lVar7);
            func_0x000107c5eea0(lVar6);
            func_0x000107c5ee68(lVar7);
            pcVar8 = *(code **)(lVar10 + 8);
            (*pcVar8)(lVar6,lVar1);
            if (SUB168(SEXT816(lStack_88) * SEXT816(0x15180),8) != lStack_88 * 0x15180 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10107684c);
              (*pcVar8)();
            }
            if (param_1 < (double)(lStack_88 * 0x15180)) {
              (*pcVar8)(lVar7,lVar1);
              func_0x000107c615e8(lVar2);
              return 1;
            }
            uVar4 = uStack_90;
            func_0x000107c5fadc(uStack_90,param_8);
            func_0x000107c56bd8(param_2);
            func_0x000107c61170(uVar4);
            func_0x0001002ed07c(0);
            uVar5 = 1;
            func_0x000107c60110(1);
            uVar4 = uStack_80;
            func_0x000107c5fadc(uStack_80,uStack_78);
            func_0x000107c56bd8(param_2);
            func_0x000107c615e8(lVar2);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar4);
            (*pcVar8)(lVar7,lVar1);
            return 0;
          }
          func_0x000107c615e8(lVar2);
        }
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x000107c453e4();
        uVar4 = uStack_90;
        func_0x000107c5fadc(uStack_90,param_8);
        func_0x000107c56bd8(param_2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar4);
        return 1;
      }
      goto LAB_10107670c;
    }
    func_0x000107c615e8(lVar2);
  }
  lVar9 = 0;
LAB_10107670c:
  func_0x0001002ed07c(0);
  lVar9 = lVar9 + 1;
  func_0x000107c60110(lVar9);
  uVar4 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c56bd8(param_2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar4);
  return 0;
}



/* Entry: 10107684c; end: 10107686b;  */

void FUN_10107684c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac708);
  return;
}



/* Entry: 10107686c; end: 10107687b; -[FacebookLinkingServices facebookLinkingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107686c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d58340));
  return;
}



/* Entry: 10107687c; end: 101076913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107687c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d58340) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101076914; end: 101076973; -[FacebookLinkingServices init] */

void FUN_101076914(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FacebookLinkingServices.FacebookLinkingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101076940);
  (*pcVar1)();
}



/* Entry: 101076974; end: 101076983; -[FacebookLinkingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d58340));
  return;
}



/* Entry: 101076984; end: 1010769a3;  */

void FUN_101076984(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac7b8);
  return;
}



/* Entry: 1010769a4; end: 101076bb7;  */

byte FUN_1010769a4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if (bVar1 == 2) {
    if (uVar3 == 2) {
      return 1;
    }
  }
  else if (bVar1 == 3) {
    if (uVar3 == 3) {
      return 1;
    }
  }
  else if (bVar1 == 4) {
    if (bVar2 == 4) {
      return 1;
    }
  }
  else if (2 < uVar3 - 2) {
    return (bVar2 ^ bVar1 ^ 1) & 1;
  }
  return 0;
}



/* Entry: 101076bb8; end: 101076c8b;  */

void FUN_101076bb8(void)

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



/* Entry: 101076c8c; end: 101076cab;  */

void FUN_101076c8c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 101076cac; end: 101076cf3; -[SCFacebookLinkingStatus description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076cac(long param_1)

{
  code *pcVar1;
  
  if ((2 < *(byte *)(param_1 + _DAT_112d58370)) && (*(char *)(param_1 + _DAT_112d58378) == '\x02'))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101076cf4);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101076cf4; end: 101076d3b; -[SCFacebookLinkingStatus init] */

void FUN_101076cf4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FacebookLinkingServices/FacebookLinkingStatusWrapper.swift",0x3a,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101076d3c);
  (*pcVar1)();
}



/* Entry: 101076d3c; end: 101076dd7; -[SCFacebookLinkingStatus hash] */

void FUN_101076d3c(void)

{
  func_0x000101076d5c();
  return;
}



/* Entry: 101076dd8; end: 101076ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_101076dd8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar5 = *(byte *)(unaff_x20 + _DAT_112d58370);
      if (bVar5 == *(byte *)(lStack_58 + _DAT_112d58370)) {
        if ((bVar5 < 2) || (bVar5 == 2)) {
          func_0x000107c61170();
          bVar5 = 1;
        }
        else {
          bVar1 = *(byte *)(unaff_x20 + _DAT_112d58378);
          bVar2 = *(byte *)(lStack_58 + _DAT_112d58378);
          func_0x000107c61170();
          bVar5 = bVar2 == 2 && bVar1 == 2;
          if (bVar1 != 2 && bVar2 != 2) {
            bVar5 = bVar1 ^ bVar2 ^ 1;
          }
        }
        goto LAB_101076e80;
      }
      func_0x000107c61170();
    }
  }
  bVar5 = 0;
LAB_101076e80:
  return bVar5 & 1;
}



/* Entry: 101076ed8; end: 101076f57; -[SCFacebookLinkingStatus isEqual:] */

uint FUN_101076ed8(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101076dd8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101076f58; end: 101076f63; -[SCFacebookLinkingStatus copyWithZone:] */

void FUN_101076f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101076f64; end: 101076f73; +[SCFacebookLinkingStatus authenticatingWithFacebook] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076f64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112d58370) = 0;
  *(undefined1 *)(lVar1 + _DAT_112d58378) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101076f74; end: 101076f83; +[SCFacebookLinkingStatus linkingFacebookAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076f74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112d58370) = 1;
  *(undefined1 *)(lVar1 + _DAT_112d58378) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101076f84; end: 101076fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076f84(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d58370) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112d58378) = 2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


