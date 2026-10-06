/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10198ffac; end: 10199005f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10198ffac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(lVar5 + _DAT_113021a48);
  FUN_1019910bc();
  *(long *)(unaff_x22 + 0x20) = lVar5;
  func_0x000107c6142c(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  lVar4 = *(long *)(lVar3 + 0x30);
  func_0x0001000a8868(lVar3 + 0x10,uVar2);
  piVar7 = *(int **)(lVar4 + 0x20);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101990060;
                    /* WARNING: Could not recover jumptable at 0x00010199005c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar8,lVar5,uVar2,lVar4);
  return;
}



/* Entry: 101990060; end: 1019900cb;  */

void FUN_101990060(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019900cc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019900c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1019900cc; end: 1019900fb;  */

void FUN_1019900cc(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001019900f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019900fc; end: 1019901c3; -[_TtC29FriendingBadgeServiceProvider25FriendingBadgeMutatorImpl replaceBadgeInfo:] */

/* WARNING: Possible PIC construction at 0x000101990198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010199019c) */

void FUN_1019900fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104202e0;
  func_0x000107c613fc(&UNK_1104202e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(param_3);
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a7ff8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1019901c4; end: 1019901db;  */

void FUN_1019901c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x538) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019901dc,0,0);
  return;
}



/* Entry: 1019901dc; end: 101990253;  */

void FUN_1019901dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = PTR___sytN_11034f1b0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x538);
  func_0x000107c61418(unaff_x22 + 0x10,0,PTR___sytN_11034f1b0 + 8,&UNK_10d9a8020,uVar2);
  func_0x000107c61418(unaff_x22 + 0x290,0,puVar1 + 8,&UNK_10d9a8030,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101990254; end: 10199032b;  */

void FUN_101990254(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x540) = unaff_x20;
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_finish_110350058)
              (unaff_x22 + 0x290,param_2,0x1019902f0,unaff_x22 + 0x510);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)
            (unaff_x22 + 0x290,param_2,0x101990284,unaff_x22 + 0x510);
  return;
}



/* Entry: 10199032c; end: 10199035b;  */

void FUN_10199032c(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x540));
                    /* WARNING: Could not recover jumptable at 0x000101990358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199035c; end: 101990397;  */

void FUN_10199035c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101990370,0,0);
  return;
}



/* Entry: 101990398; end: 1019903c7;  */

void FUN_101990398(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x548));
                    /* WARNING: Could not recover jumptable at 0x0001019903c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019903c8; end: 1019903df;  */

void FUN_1019903c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019903e0,0,0);
  return;
}



/* Entry: 1019903e0; end: 10199045b;  */

void FUN_1019903e0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101991798;
                    /* WARNING: Could not recover jumptable at 0x000101990458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 10199045c; end: 101990473;  */

void FUN_10199045c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101990474,0,0);
  return;
}



/* Entry: 101990474; end: 1019904ef;  */

void FUN_101990474(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  lVar3 = *(long *)(lVar5 + 0x58);
  func_0x0001000a8868(lVar5 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1019904f0;
                    /* WARNING: Could not recover jumptable at 0x0001019904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1019904f0; end: 10199052b;  */

void FUN_1019904f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101990528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10199052c; end: 10199059f; -[_TtC29FriendingBadgeServiceProvider25FriendingBadgeMutatorImpl clearNotificationBadgeInfos] */

void FUN_10199052c(undefined8 param_1)

{
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a7ff0,param_1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61578(param_1,2);
  return;
}



/* Entry: 1019905a0; end: 10199077f;  */

void FUN_1019905a0(ulong *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  func_0x000107c61174();
  func_0x000103e6bddc();
  param_3 = param_3 & 0xff;
  if (param_3 < 4) {
    if (param_3 < 2) {
      uVar7 = 0xd00000000000001b;
      pcVar6 = "RECENTLY_JOINED_SUGGESTIONS";
      if (param_3 == 0) {
        uVar7 = 0xd00000000000001c;
        pcVar6 = "UNVIEWED_FRIEND_SUGGESTIONS";
      }
      uVar5 = (ulong)pcVar6 | 0x8000000000000000;
    }
    else {
      pcVar6 = "INCOMING_FRIEND_REQUEST";
      uVar7 = 0xd00000000000001b;
      if (param_3 != 2) {
        pcVar6 = "CONTACT_SYNC_REMINDER";
        uVar7 = 0xd000000000000017;
      }
      uVar5 = (ulong)pcVar6 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0xeb0000000052454d;
    uVar7 = 0x49545f4c41434f4c;
    if (param_3 != 6) {
      uVar5 = 0xe700000000000000;
      uVar7 = 0x4e574f4e4b4e55;
    }
    pcVar6 = "PENDING_FRIEND_REQUEST";
    uVar1 = 0xd000000000000015;
    if (param_3 != 4) {
      pcVar6 = "before checker was resolved";
      uVar1 = 0xd000000000000016;
    }
    if (param_3 < 6) {
      uVar7 = uVar1;
      uVar5 = (ulong)pcVar6 | 0x8000000000000000;
    }
  }
  uVar8 = *param_1;
  uVar2 = uVar8;
  func_0x000107c61558();
  *param_1 = uVar8;
  uVar3 = uVar8;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_101993c0c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *param_1 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar8 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_101993c0c(uVar8,uVar2 + 1,1,uVar3);
    *param_1 = uVar8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
  lVar4 = uVar8 + uVar2 * 0x30;
  *(undefined8 *)(lVar4 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = param_2;
  *(undefined8 *)(lVar4 + 0x40) = uVar7;
  *(ulong *)(lVar4 + 0x48) = uVar5;
  return;
}



/* Entry: 101990780; end: 1019909e7;  */

void FUN_101990780(long param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    uStack_a0 = 0x800000010efc4e50;
    puVar11 = (undefined8 *)(param_1 + 0x28);
    uStack_a8 = 0xd000000000000017;
    do {
      uVar1 = puVar11[-1];
      uVar2 = *puVar11;
      func_0x000107c61434(uVar2);
      uVar3 = param_4;
      func_0x000107c61174();
      func_0x000103e6bddc();
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 4) {
        if (uVar3 < 2) {
          if (uVar3 == 0) {
            uVar7 = uStack_a0;
            uVar10 = 0xd00000000000001c;
          }
          else {
            uVar7 = 0x800000010efc4e30;
            uVar10 = 0xd00000000000001b;
          }
        }
        else if (uVar3 == 2) {
          uVar7 = 0x800000010efc4e10;
          uVar10 = 0xd00000000000001b;
        }
        else {
          uVar7 = 0x800000010efc4df0;
          uVar10 = uStack_a8;
        }
      }
      else if (uVar3 < 6) {
        if (uVar3 == 4) {
          uVar10 = 0xd000000000000015;
          uVar7 = 0x800000010efc4dd0;
        }
        else {
          uVar10 = 0xd000000000000016;
          uVar7 = 0x800000010efc4db0;
        }
      }
      else if (uVar3 == 6) {
        uVar10 = 0x49545f4c41434f4c;
        uVar7 = 0xeb0000000052454d;
      }
      else {
        uVar7 = 0xe700000000000000;
        uVar10 = 0x4e574f4e4b4e55;
      }
      uVar8 = *param_2;
      func_0x000107c61434(uVar2);
      uVar4 = uVar8;
      func_0x000107c61558();
      *param_2 = uVar8;
      uVar5 = uVar8;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_101993c0c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
        *param_2 = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar8 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_101993c0c(uVar8,uVar4 + 1,1,uVar5);
        *param_2 = uVar8;
      }
      puVar11 = puVar11 + 2;
      *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
      lVar6 = uVar8 + uVar4 * 0x30;
      *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + 0x28) = uVar1;
      *(undefined8 *)(lVar6 + 0x30) = uVar2;
      *(undefined8 *)(lVar6 + 0x38) = param_3;
      *(undefined8 *)(lVar6 + 0x40) = uVar10;
      *(undefined8 *)(lVar6 + 0x48) = uVar7;
      func_0x000107c6142c(uVar2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 1019909e8; end: 101990ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019909e8(ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  double dVar19;
  undefined8 uStack_390;
  undefined8 uStack_388;
  double dStack_320;
  undefined8 uStack_318;
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
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
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
  double dStack_240;
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
  undefined8 uStack_1c8;
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
  double dStack_160;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar11 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar16 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar16 != 0) {
    uVar18 = 0;
    uStack_388 = 0x800000010efc4e50;
    uStack_390 = 0xd000000000000017;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101990e80);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar11;
      }
      else {
        uVar5 = uVar18;
        uVar8 = param_1;
        FUN_101994194();
      }
      lVar12 = _DAT_113021a60;
      uVar1 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101990e7c);
        (*pcVar2)();
      }
      lVar6 = *(long *)(uVar5 + _DAT_113021a60);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar11 = uVar8;
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        uVar11 = param_2;
        func_0x0001019a145c(&dStack_320,*(undefined8 *)(uVar5 + lVar12));
        uStack_198 = uStack_278;
        uStack_1a0 = uStack_280;
        uStack_188 = uStack_268;
        uStack_190 = uStack_270;
        uStack_178 = uStack_258;
        uStack_180 = uStack_260;
        uStack_168 = uStack_248;
        uStack_170 = uStack_250;
        uStack_1d8 = uStack_2b8;
        uStack_1e0 = uStack_2c0;
        uStack_1c8 = uStack_2a8;
        uStack_1d0 = uStack_2b0;
        uStack_1b8 = uStack_298;
        uStack_1c0 = uStack_2a0;
        uStack_1a8 = uStack_288;
        uStack_1b0 = uStack_290;
        uStack_218 = uStack_2f8;
        uStack_220 = uStack_300;
        uStack_208 = uStack_2e8;
        uStack_210 = uStack_2f0;
        uStack_1f8 = uStack_2d8;
        uStack_200 = uStack_2e0;
        uStack_1e8 = uStack_2c8;
        uStack_1f0 = uStack_2d0;
        uStack_238 = uStack_318;
        dStack_240 = dStack_320;
        uStack_228 = uStack_308;
        uStack_230 = uStack_310;
        iVar3 = (int)&dStack_240;
        func_0x0001019916b4();
        if (iVar3 == 1) {
          func_0x000107c6142c(uVar8);
        }
        else {
          uStack_b8 = uStack_198;
          uStack_c0 = uStack_1a0;
          uStack_a8 = uStack_188;
          uStack_b0 = uStack_190;
          uStack_98 = uStack_178;
          uStack_a0 = uStack_180;
          uStack_88 = uStack_168;
          uStack_90 = uStack_170;
          uStack_f8 = uStack_1d8;
          uStack_100 = uStack_1e0;
          uStack_e8 = uStack_1c8;
          uStack_f0 = uStack_1d0;
          uStack_d8 = uStack_1b8;
          uStack_e0 = uStack_1c0;
          uStack_c8 = uStack_1a8;
          uStack_d0 = uStack_1b0;
          uStack_138 = uStack_218;
          uStack_140 = uStack_220;
          uStack_128 = uStack_208;
          uStack_130 = uStack_210;
          uStack_118 = uStack_1f8;
          uStack_120 = uStack_200;
          uStack_108 = uStack_1e8;
          uStack_110 = uStack_1f0;
          uStack_158 = uStack_238;
          dStack_160 = dStack_240;
          uStack_148 = uStack_228;
          uStack_150 = uStack_230;
          dVar19 = dStack_240;
          func_0x000107c5ee8c(_DAT_113812208);
          if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101990e84);
            (*pcVar2)();
          }
          if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101990e88);
            (*pcVar2)();
          }
          if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101990e8c);
            (*pcVar2)();
          }
          uVar10 = param_2;
          func_0x000107c61174();
          uVar4 = (uint)uVar10;
          func_0x000103e6bddc();
          uVar4 = uVar4 & 0xff;
          if (uVar4 < 4) {
            if (uVar4 < 2) {
              if (uVar4 == 0) {
                uVar15 = 0xd00000000000001c;
                uVar17 = uStack_388;
              }
              else {
                uVar17 = 0x800000010efc4e30;
                uVar15 = 0xd00000000000001b;
              }
            }
            else if (uVar4 == 2) {
              uVar17 = 0x800000010efc4e10;
              uVar15 = 0xd00000000000001b;
            }
            else {
              uVar17 = 0x800000010efc4df0;
              uVar15 = uStack_390;
            }
          }
          else if (uVar4 < 6) {
            if (uVar4 == 4) {
              uVar15 = 0xd000000000000015;
              uVar17 = 0x800000010efc4dd0;
            }
            else {
              uVar15 = 0xd000000000000016;
              uVar17 = 0x800000010efc4db0;
            }
          }
          else if (uVar4 == 6) {
            uVar15 = 0x49545f4c41434f4c;
            uVar17 = 0xeb0000000052454d;
          }
          else {
            uVar17 = 0xe700000000000000;
            uVar15 = 0x4e574f4e4b4e55;
          }
          uVar13 = *param_3;
          uVar10 = uVar13;
          func_0x000107c61558();
          *param_3 = uVar13;
          uVar14 = uVar13;
          if ((uVar10 & 1) == 0) {
            uVar11 = *(long *)(uVar13 + 0x10) + 1;
            uVar14 = 0;
            func_0x000101993c0c(0,uVar11,1,uVar13);
            *param_3 = uVar14;
          }
          uVar13 = *(ulong *)(uVar14 + 0x10);
          uVar10 = uVar13 + 1;
          uVar9 = uVar14;
          if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar13) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
            uVar11 = uVar10;
            func_0x000101993c0c(uVar9,uVar10,1,uVar14);
            *param_3 = uVar9;
          }
          *(ulong *)(uVar9 + 0x10) = uVar10;
          lVar12 = uVar9 + uVar13 * 0x30;
          *(undefined8 *)(lVar12 + 0x20) = 0xffffffffffffffff;
          *(long *)(lVar12 + 0x28) = lVar7;
          *(ulong *)(lVar12 + 0x30) = uVar8;
          *(long *)(lVar12 + 0x38) = (long)dVar19;
          *(undefined8 *)(lVar12 + 0x40) = uVar15;
          *(undefined8 *)(lVar12 + 0x48) = uVar17;
          uVar14 = *param_4;
          uVar8 = uVar14;
          func_0x000107c61558();
          *param_4 = uVar14;
          uVar10 = uVar14;
          if ((uVar8 & 1) == 0) {
            uVar11 = *(long *)(uVar14 + 0x10) + 1;
            uVar10 = 0;
            func_0x000101993d28(0,uVar11,1,uVar14);
            *param_4 = uVar10;
          }
          uVar14 = *(ulong *)(uVar10 + 0x10);
          uVar8 = uVar14 + 1;
          uVar13 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar14) {
            uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            uVar11 = uVar8;
            func_0x000101993d28(uVar13,uVar8,1,uVar10);
            *param_4 = uVar13;
          }
          *(ulong *)(uVar13 + 0x10) = uVar8;
          lVar12 = uVar13 + uVar14 * 0xe0;
          *(undefined8 *)(lVar12 + 0x28) = uStack_158;
          *(double *)(lVar12 + 0x20) = dStack_160;
          *(undefined8 *)(lVar12 + 0x38) = uStack_148;
          *(undefined8 *)(lVar12 + 0x30) = uStack_150;
          *(undefined8 *)(lVar12 + 0x68) = uStack_118;
          *(undefined8 *)(lVar12 + 0x60) = uStack_120;
          *(undefined8 *)(lVar12 + 0x78) = uStack_108;
          *(undefined8 *)(lVar12 + 0x70) = uStack_110;
          *(undefined8 *)(lVar12 + 0x48) = uStack_138;
          *(undefined8 *)(lVar12 + 0x40) = uStack_140;
          *(undefined8 *)(lVar12 + 0x58) = uStack_128;
          *(undefined8 *)(lVar12 + 0x50) = uStack_130;
          *(undefined8 *)(lVar12 + 0xa8) = uStack_d8;
          *(undefined8 *)(lVar12 + 0xa0) = uStack_e0;
          *(undefined8 *)(lVar12 + 0xb8) = uStack_c8;
          *(undefined8 *)(lVar12 + 0xb0) = uStack_d0;
          *(undefined8 *)(lVar12 + 0x88) = uStack_f8;
          *(undefined8 *)(lVar12 + 0x80) = uStack_100;
          *(undefined8 *)(lVar12 + 0x98) = uStack_e8;
          *(undefined8 *)(lVar12 + 0x90) = uStack_f0;
          *(undefined8 *)(lVar12 + 0xe8) = uStack_98;
          *(undefined8 *)(lVar12 + 0xe0) = uStack_a0;
          *(undefined8 *)(lVar12 + 0xf8) = uStack_88;
          *(undefined8 *)(lVar12 + 0xf0) = uStack_90;
          *(undefined8 *)(lVar12 + 200) = uStack_b8;
          *(undefined8 *)(lVar12 + 0xc0) = uStack_c0;
          *(undefined8 *)(lVar12 + 0xd8) = uStack_a8;
          *(undefined8 *)(lVar12 + 0xd0) = uStack_b0;
        }
      }
      func_0x000107c61170(uVar5);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar16);
  }
  return;
}



/* Entry: 101990ec8; end: 101990ef3;  */

void FUN_101990ec8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101990ef4; end: 101990f53;  */

undefined1  [16] FUN_101990ef4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000103e6d380(0);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 101990f54; end: 101990f97;  */

void FUN_101990f54(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101990f98);
  (*pcVar2)();
}



/* Entry: 101990f98; end: 101991053;  */

undefined1  [16] FUN_101990f98(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000103e6d380(0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 101991054; end: 1019910bb;  */

void FUN_101991054(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1019910bc; end: 10199120f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1019910bc(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c0 [16];
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puStack_60 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = *(undefined8 *)(param_2 + _DAT_113021a48);
  func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101991208);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      lStack_a8 = (long)param_1;
      ppuStack_d8 = &puStack_58;
      ppuStack_d0 = &puStack_60;
      uStack_e0 = uVar3;
      ppuStack_b0 = ppuStack_d8;
      uStack_a0 = uVar3;
      ppuStack_80 = ppuStack_d8;
      lStack_78 = lStack_a8;
      uStack_70 = uVar3;
      func_0x000103e6c3f0(FUN_101991690,auStack_90,0x10199169c,auStack_c0,0x1019916a8,auStack_f0);
      auVar5._8_8_ = puStack_60;
      auVar5._0_8_ = puStack_58;
      return auVar5;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101991210);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10199120c);
  (*pcVar1)();
}



/* Entry: 101991210; end: 1019913db;  */

undefined * FUN_101991210(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112de07f8);
    puVar3 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar8 + -1);
      uVar7 = (ulong)bVar1;
      uVar9 = *puVar8;
      func_0x000101990f24();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019912f0);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019912f4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1019913dc; end: 1019913fb;  */

void FUN_1019913dc(void)

{
  func_0x000107c61168(&PTR_PTR_112de0788);
  return;
}



/* Entry: 1019913fc; end: 10199144f;  */

void FUN_1019913fc(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x550;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101991450;
  plVar1[0xa7] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019901dc,0,0);
  return;
}



/* Entry: 101991450; end: 1019914b7;  */

void FUN_101991450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101991488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019914b8; end: 10199151b;  */

void FUN_1019914b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019917a8;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198ffac,0,0);
  return;
}



/* Entry: 10199151c; end: 101991547;  */

void FUN_10199151c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101991548; end: 1019915ab;  */

void FUN_101991548(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x5b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019917ac;
  plVar3[0xb0] = lVar2;
  plVar3[0xa7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fa88,0,0);
  return;
}



/* Entry: 1019915ac; end: 1019915ff;  */

void FUN_1019915ac(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10199179c;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019903e0,0,0);
  return;
}



/* Entry: 101991600; end: 101991653;  */

void FUN_101991600(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101991654;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101990474,0,0);
  return;
}



/* Entry: 101991654; end: 10199168f;  */

void FUN_101991654(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x00010199168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101991690; end: 1019916cb;  */

void FUN_101991690(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (uint)*(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174();
  func_0x000103e6bddc();
  uVar4 = uVar4 & 0xff;
  if (uVar4 < 4) {
    if (uVar4 < 2) {
      uVar10 = 0xd00000000000001b;
      pcVar9 = "RECENTLY_JOINED_SUGGESTIONS";
      if (uVar4 == 0) {
        uVar10 = 0xd00000000000001c;
        pcVar9 = "UNVIEWED_FRIEND_SUGGESTIONS";
      }
      uVar8 = (ulong)pcVar9 | 0x8000000000000000;
    }
    else {
      pcVar9 = "INCOMING_FRIEND_REQUEST";
      uVar10 = 0xd00000000000001b;
      if (uVar4 != 2) {
        pcVar9 = "CONTACT_SYNC_REMINDER";
        uVar10 = 0xd000000000000017;
      }
      uVar8 = (ulong)pcVar9 | 0x8000000000000000;
    }
  }
  else {
    uVar8 = 0xeb0000000052454d;
    uVar10 = 0x49545f4c41434f4c;
    if (uVar4 != 6) {
      uVar8 = 0xe700000000000000;
      uVar10 = 0x4e574f4e4b4e55;
    }
    pcVar9 = "PENDING_FRIEND_REQUEST";
    uVar3 = 0xd000000000000015;
    if (uVar4 != 4) {
      pcVar9 = "before checker was resolved";
      uVar3 = 0xd000000000000016;
    }
    if (uVar4 < 6) {
      uVar10 = uVar3;
      uVar8 = (ulong)pcVar9 | 0x8000000000000000;
    }
  }
  uVar11 = *puVar1;
  uVar5 = uVar11;
  func_0x000107c61558();
  *puVar1 = uVar11;
  uVar6 = uVar11;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    FUN_101993c0c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    *puVar1 = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar11 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_101993c0c(uVar11,uVar5 + 1,1,uVar6);
    *puVar1 = uVar11;
  }
  *(ulong *)(uVar11 + 0x10) = uVar5 + 1;
  lVar7 = uVar11 + uVar5 * 0x30;
  *(undefined8 *)(lVar7 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = uVar2;
  *(undefined8 *)(lVar7 + 0x40) = uVar10;
  *(ulong *)(lVar7 + 0x48) = uVar8;
  return;
}



/* Entry: 1019916cc; end: 10199172f;  */

void FUN_1019916cc(void)

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
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019917a0;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fd70,0,0);
  return;
}



/* Entry: 101991730; end: 101991793;  */

void FUN_101991730(void)

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
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1019917a4;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10198fe48,0,0);
  return;
}



/* Entry: 101991794; end: 1019917af;  */

void FUN_101991794(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010198fe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019917b0; end: 1019917b7; -[_TtC29FriendingBadgeServiceProvider28FriendingBadgeRepositoryImpl badgeResultSubject] */

void FUN_1019917b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1019917b8; end: 101991867;  */

undefined8
FUN_1019917b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001000c6518(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1019945a4(param_1,lVar1,param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_6);
  func_0x0001000834e4(param_2);
  return param_1;
}



/* Entry: 101991868; end: 101991a3f;  */

/* WARNING: Possible PIC construction at 0x000101991968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101991a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010199196c) */
/* WARNING: Removing unreachable block (ram,0x000101991a0c) */

void FUN_101991868(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  code *pcVar7;
  
  lVar2 = *(long *)(unaff_x20 + 0x70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    plVar3 = *(long **)(unaff_x20 + 0x30);
    lVar1 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,plVar3);
    (**(code **)(lVar1 + 8))(plVar3,lVar1);
    puVar4 = &UNK_1104203a8;
    func_0x000107c613fc(&UNK_1104203a8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_1104203d0;
    func_0x000107c613fc(&UNK_1104203d0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar2;
    pcVar7 = *(code **)(*plVar3 + 0x60);
    func_0x000107c615f0(lVar2);
    pcVar6 = FUN_1019948b0;
    puVar4 = puVar5;
    (*pcVar7)(FUN_1019948b0);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar5);
    pcVar7 = pcVar6;
    func_0x000107c614f0(pcVar6);
    (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + 0x40),pcVar7,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar6);
    return;
  }
  return;
}



/* Entry: 101991a40; end: 101991a57;  */

void FUN_101991a40(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101991a58,0,0);
  return;
}



/* Entry: 101991a58; end: 101991ad3;  */

void FUN_101991a58(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x38);
  func_0x0001000a8868(lVar5 + 0x18,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101991ad4;
                    /* WARNING: Could not recover jumptable at 0x000101991ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 101991ad4; end: 101991b33;  */

void FUN_101991ad4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101991b34;
  }
  else {
    pcVar1 = FUN_101991dc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101991b34; end: 101991c9f;  */

void FUN_101991b34(void)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar12 = 0;
  lVar13 = *(long *)(unaff_x22 + 0x20);
  uVar14 = *(ulong *)(lVar13 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    *(undefined **)(unaff_x22 + 0x30) = puVar7;
    puVar9 = (undefined8 *)(lVar13 + -8 + uVar12 * 0x30);
    do {
      if (uVar14 == uVar12) {
        lVar11 = *(long *)(unaff_x22 + 0x10);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x20));
        uVar15 = *(undefined8 *)(lVar11 + 0x60);
        lVar13 = *(long *)(lVar11 + 0x68);
        func_0x0001000a8868(lVar11 + 0x48,uVar15);
        piVar10 = *(int **)(lVar13 + 8);
        iVar2 = *piVar10;
        plVar8 = (long *)(ulong)(uint)piVar10[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x38) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101991ca0;
                    /* WARNING: Could not recover jumptable at 0x000101991c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar10))(puVar7,uVar15,lVar13);
        return;
      }
      if (*(ulong *)(lVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101991ca0);
        (*pcVar4)();
      }
      puVar1 = puVar9 + 6;
      uVar12 = uVar12 + 1;
      lVar11 = puVar9[7];
      puVar9 = puVar1;
    } while (lVar11 == 0);
    uVar15 = *puVar1;
    func_0x000107c61434(lVar11);
    puVar5 = puVar7;
    func_0x000107c61558();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar3 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar3 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar15;
    *(long *)(puVar7 + uVar3 * 0x10 + 0x28) = lVar11;
  } while( true );
}



/* Entry: 101991ca0; end: 101991d07;  */

void FUN_101991ca0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x40) = param_1;
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101991d08;
  }
  else {
    pcVar2 = (code *)0x101991df8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101991d08; end: 101991dbf;  */

void FUN_101991d08(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x40);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101991d88);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101991d8c);
          (*pcVar1)();
        }
      }
      else {
        func_0x00010103193c(uVar2,*(undefined8 *)(unaff_x22 + 0x40));
        func_0x000107c615e8();
        if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101991d84);
          (*pcVar1)();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101991dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 101991dc0; end: 101991e2f;  */

void FUN_101991dc0(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101991df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101991e30; end: 101991f5b; -[_TtC29FriendingBadgeServiceProvider28FriendingBadgeRepositoryImpl fetchBadgedSnapchattersWithCompletionHandler:] */

void FUN_101991e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110420330;
  func_0x000107c613fc(&UNK_110420330,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110420358;
  func_0x000107c613fc(&UNK_110420358,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9a80f0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110420380;
  func_0x000107c613fc(&UNK_110420380,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9a80f8;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9a8100,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101991f5c; end: 101991fb3;  */

void FUN_101991f5c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x50;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101991fb4;
  plVar1[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101991a58,0,0);
  return;
}



/* Entry: 101991fb4; end: 10199203f;  */

void FUN_101991fb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000107c61574(uVar2);
  uVar1 = 0;
  FUN_101994830(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010199203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 101992040; end: 101992057;  */

void FUN_101992040(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992058,0,0);
  return;
}



/* Entry: 101992058; end: 1019920db;  */

void FUN_101992058(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1019920dc;
    plVar1[0x16] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101992280,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019920d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019920dc; end: 101992147;  */

void FUN_1019920dc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x48) = param_1;
    pcVar1 = FUN_101992148;
  }
  else {
    pcVar1 = FUN_1019921d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101992148; end: 1019921d3;  */

void FUN_101992148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar4);
  func_0x000107c46ed0(puVar1,param_2,uVar3);
  func_0x000107c4d664(uVar4,param_2,puVar1);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001019921d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019921d4; end: 101992267;  */

void FUN_1019921d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar4);
  func_0x000107c46ed0(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c4d664(uVar4,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(lVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101992264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101992268; end: 10199227f;  */

void FUN_101992268(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992280,0,0);
  return;
}



/* Entry: 101992280; end: 1019922fb;  */

void FUN_101992280(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x38);
  func_0x0001000a8868(lVar5 + 0x18,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1019922fc;
                    /* WARNING: Could not recover jumptable at 0x0001019922f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 1019922fc; end: 101992363;  */

void FUN_1019922fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101992340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992364,0,0);
  return;
}



/* Entry: 101992364; end: 1019925b7;  */

void FUN_101992364(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0xc0);
  uVar13 = *(ulong *)(lVar8 + 0x10);
  *(ulong *)(unaff_x22 + 200) = uVar13;
  if (uVar13 == 0) {
    lVar9 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c6142c(lVar8);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101994914(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar8 = *(long *)(lVar9 + 0x70);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c6142c(puVar2);
    }
    else {
      uVar12 = 0;
      func_0x000103e6d380(0);
      uVar3 = uVar12;
      FUN_101994c60();
      puVar4 = puVar2;
      func_0x000107c5f9dc(puVar2,uVar12,PTR___sSiN_11034deb0,uVar3);
      func_0x000107c6142c(puVar2);
      func_0x000107c5d3fc(lVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001019925b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0xffffffffffffffff);
    return;
  }
  uVar6 = 0;
  puVar11 = (undefined8 *)(lVar8 + 0x48);
  while( true ) {
    if (*(ulong *)(lVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019925b8);
      (*pcVar1)();
    }
    lVar10 = puVar11[-1];
    uVar3 = *puVar11;
    uVar12 = puVar11[-3];
    lVar9 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar3);
    func_0x000107c604c4(lVar9,lVar10,uVar3);
    if (lVar9 == 5) break;
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(uVar3);
    uVar6 = uVar6 + 1;
    puVar11 = puVar11 + 6;
    if (uVar13 == uVar6) {
      bVar7 = 0;
      lVar10 = 0;
LAB_101992524:
      *(byte *)(unaff_x22 + 0x110) = bVar7 & 1;
      plVar5 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1019925b8;
      lVar8 = *(long *)(unaff_x22 + 0xc0);
      lVar9 = *(long *)(unaff_x22 + 0xb0);
      plVar5[3] = lVar10;
      plVar5[4] = lVar9;
      *(byte *)(plVar5 + 8) = bVar7 & 1;
      plVar5[2] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10199364c,0,0);
      return;
    }
  }
  lVar8 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(uVar12);
  func_0x000107c6142c(uVar3);
  uVar6 = *(ulong *)(lVar8 + 0xb0);
  uVar13 = uVar6;
  func_0x000107c4b940();
  bVar7 = *(byte *)(lVar8 + 0xb8);
  if (bVar7 == 2) {
    (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0xa0))();
    bVar7 = (byte)uVar13;
    *(ulong *)(lVar8 + 0xb8) = uVar13 & 1;
    *(long *)(lVar8 + 0xc0) = lVar10;
  }
  else {
    lVar10 = *(long *)(lVar8 + 0xc0);
  }
  func_0x000107c5d278(uVar6);
  goto LAB_101992524;
}



/* Entry: 1019925b8; end: 101992607;  */

void FUN_1019925b8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992608,0,0);
  return;
}



/* Entry: 101992608; end: 101992a7b;  */

void FUN_101992608(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puStack_88;
  
  uVar13 = 0;
  lVar9 = *(long *)(unaff_x22 + 0xc0);
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = *(undefined **)(unaff_x22 + 0xc0);
    uVar19 = *(ulong *)(puVar5 + 0x10);
    puVar12 = (undefined8 *)(lVar9 + -8 + uVar13 * 0x30);
    do {
      if (*(ulong *)(unaff_x22 + 200) == uVar13) {
        if (uVar19 <= *(ulong *)(unaff_x22 + 200) - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101992a7c);
          (*pcVar4)();
        }
        if (*(char *)(unaff_x22 + 0x110) != '\x01') {
          puVar6 = puVar5;
          func_0x000107c61434();
          puVar16 = puVar5;
          goto LAB_101992880;
        }
        uVar13 = 0;
        goto LAB_101992730;
      }
      if (uVar19 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101992a74);
        (*pcVar4)();
      }
      puVar1 = puVar12 + 6;
      uVar13 = uVar13 + 1;
      lVar14 = puVar12[7];
      puVar12 = puVar1;
    } while (lVar14 == 0);
    uVar18 = *puVar1;
    func_0x000107c61434(lVar14);
    puVar5 = puStack_88;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      plVar7 = (long *)(puStack_88 + 0x10);
      puStack_88 = (undefined *)0x0;
      func_0x0001000d182c(0,*plVar7 + 1,1);
    }
    uVar19 = *(ulong *)(puStack_88 + 0x10);
    if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar19) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puStack_88 + 0x18));
      func_0x0001000d182c(puVar5,uVar19 + 1,1,puStack_88);
      puStack_88 = puVar5;
    }
    *(ulong *)(puStack_88 + 0x10) = uVar19 + 1;
    *(undefined8 *)(puStack_88 + uVar19 * 0x10 + 0x20) = uVar18;
    *(long *)(puStack_88 + uVar19 * 0x10 + 0x28) = lVar14;
  } while( true );
LAB_101992730:
  do {
    lVar9 = uVar13 * 0x30 + 0x48;
    uVar19 = uVar13;
    while( true ) {
      uVar13 = uVar19 + 1;
      if (*(ulong *)(*(long *)(unaff_x22 + 0xc0) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101992a78);
        (*pcVar4)();
      }
      plVar7 = (long *)(*(long *)(unaff_x22 + 0xc0) + lVar9);
      lVar26 = plVar7[-2];
      lVar24 = plVar7[-3];
      lVar23 = plVar7[-4];
      lVar21 = plVar7[-5];
      lVar15 = plVar7[-3];
      lVar3 = plVar7[-1];
      puVar5 = (undefined *)*plVar7;
      lVar14 = 0x112d3cde0;
      func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
      func_0x000107c61538();
      func_0x000107c61434(lVar15);
      func_0x000107c61438(puVar5,2);
      func_0x000107c604c4(lVar14,lVar3,puVar5);
      func_0x000107c6142c(puVar5);
      if (lVar14 != 5) break;
      uVar20 = *(ulong *)(unaff_x22 + 200);
      func_0x000107c6142c(lVar15);
      func_0x000107c6142c();
      lVar9 = lVar9 + 0x30;
      uVar19 = uVar13;
      if (uVar13 == uVar20) {
        uVar19 = *(ulong *)(puVar16 + 0x10);
        puVar6 = puVar5;
        goto LAB_101992880;
      }
    }
    puVar6 = puVar16;
    func_0x000107c61558();
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x00010199735c(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar20 = *(ulong *)(puVar16 + 0x10);
    uVar19 = uVar20 + 1;
    if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar20) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
      func_0x00010199735c(puVar6,uVar19,1);
    }
    uVar10 = *(ulong *)(unaff_x22 + 200);
    *(ulong *)(puVar16 + 0x10) = uVar19;
    *(long *)(puVar16 + uVar20 * 0x30 + 0x28) = lVar23;
    *(long *)(puVar16 + uVar20 * 0x30 + 0x20) = lVar21;
    *(long *)(puVar16 + uVar20 * 0x30 + 0x38) = lVar26;
    *(long *)(puVar16 + uVar20 * 0x30 + 0x30) = lVar24;
    *(long *)(puVar16 + uVar20 * 0x30 + 0x40) = lVar3;
    *(undefined **)(puVar16 + uVar20 * 0x30 + 0x48) = puVar5;
  } while (uVar10 != uVar13);
LAB_101992880:
  *(ulong *)(unaff_x22 + 0xe0) = uVar19;
  puVar12 = (undefined8 *)(puVar16 + 0x48);
  uVar13 = 0;
  do {
    uVar20 = uVar13;
    *(ulong *)(unaff_x22 + 0xe8) = uVar20;
    if (uVar19 == uVar20) break;
    uVar18 = puVar12[-1];
    uVar17 = *puVar12;
    uVar22 = puVar12[-5];
    uVar8 = puVar12[-2];
    uVar25 = puVar12[-3];
    *(undefined8 *)(unaff_x22 + 0x18) = puVar12[-4];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
    FUN_10199c4b8();
    puVar12 = puVar12 + 6;
    uVar13 = uVar20 + 1;
  } while (((ulong)puVar6 & 0xff) == 0);
  lVar14 = *(long *)(puVar16 + 0x10);
  *(long *)(unaff_x22 + 0xf0) = lVar14;
  func_0x000107c6142c(puVar16);
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  if (((uVar19 == uVar20) && (lVar14 != 0)) && (*(long *)(lVar9 + 0x10) == 0)) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar14 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c6142c(puStack_88);
    func_0x000107c6142c(lVar9);
    FUN_101994914(uVar18);
    lVar9 = *(long *)(lVar14 + 0x70);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
    if (lVar9 == 0) {
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar18);
    }
    else {
      uVar8 = 0;
      func_0x000103e6d380(0);
      uVar22 = uVar8;
      FUN_101994c60();
      uVar25 = uVar18;
      func_0x000107c5f9dc(uVar18,uVar8,PTR___sSiN_11034deb0,uVar22);
      func_0x000107c6142c(uVar18);
      func_0x000107c5d3fc(lVar9);
      func_0x000107c6142c(uVar17);
      func_0x000107c61170(uVar25);
      func_0x000107c615e8(lVar9);
    }
                    /* WARNING: Could not recover jumptable at 0x000101992a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar14 = *(long *)(unaff_x22 + 0xb0);
  func_0x00010109a32c();
  puVar5 = puStack_88;
  FUN_101994d90();
  *(undefined **)(unaff_x22 + 0xf8) = puVar5;
  func_0x000107c6142c(puStack_88);
  uVar18 = *(undefined8 *)(lVar14 + 0x60);
  lVar9 = *(long *)(lVar14 + 0x68);
  func_0x0001000a8868(lVar14 + 0x48,uVar18);
  piVar11 = *(int **)(lVar9 + 8);
  iVar2 = *piVar11;
  plVar7 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101992a7c;
                    /* WARNING: Could not recover jumptable at 0x00010199298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar11))(puVar5,uVar18,lVar9);
  return;
}



/* Entry: 101992a7c; end: 101992af7;  */

void FUN_101992a7c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x108) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
  if (unaff_x20 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0xf8));
    func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101992ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992af8,0,0);
  return;
}



/* Entry: 101992af8; end: 101993223;  */

void FUN_101992af8(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x22;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar14 = *(ulong *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  if (uVar14 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c(uVar3);
    if (uVar20 == 0) goto LAB_101992f10;
    uVar17 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
joined_r0x000101992be0:
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar14 & 0xc000000000000001) == 0) {
          if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101992b9c);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101992ba0);
            (*pcVar2)();
          }
        }
        else {
          func_0x00010103193c(uVar18,*(undefined8 *)(unaff_x22 + 0x108));
          func_0x000107c615e8();
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101992b98);
            (*pcVar2)();
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(unaff_x22 + 200) != 0) {
      uVar17 = 0;
      lVar12 = *(long *)(unaff_x22 + 0x108);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        while( true ) {
          if (*(ulong *)(*(long *)(unaff_x22 + 0xc0) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101993220);
            (*pcVar2)();
          }
          lVar13 = *(long *)(unaff_x22 + 0xc0) + uVar17 * 0x30;
          uVar3 = *(undefined8 *)(lVar13 + 0x20);
          uVar18 = *(ulong *)(lVar13 + 0x28);
          lVar19 = *(long *)(lVar13 + 0x30);
          uVar10 = *(undefined8 *)(lVar13 + 0x38);
          uVar24 = *(undefined8 *)(lVar13 + 0x40);
          uVar25 = *(undefined8 *)(lVar13 + 0x48);
          uVar17 = uVar17 + 1;
          if (lVar19 != 0) break;
          func_0x000107c61434();
LAB_101992e70:
          puVar7 = puVar9;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010199735c(0,*(long *)(puVar9 + 0x10) + 1,1);
          }
          uVar21 = *(ulong *)(puVar9 + 0x10);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar21) {
            func_0x00010199735c(1 < *(ulong *)(puVar9 + 0x18),uVar21 + 1,1);
          }
          *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
          *(undefined8 *)(puVar9 + uVar21 * 0x30 + 0x20) = uVar3;
          *(ulong *)(puVar9 + uVar21 * 0x30 + 0x28) = uVar18;
          *(long *)(puVar9 + uVar21 * 0x30 + 0x30) = lVar19;
          *(undefined8 *)(puVar9 + uVar21 * 0x30 + 0x38) = uVar10;
          *(undefined8 *)(puVar9 + uVar21 * 0x30 + 0x40) = uVar24;
          *(undefined8 *)(puVar9 + uVar21 * 0x30 + 0x48) = uVar25;
          if (uVar17 == *(ulong *)(unaff_x22 + 200)) goto LAB_101992fc4;
        }
        func_0x000107c61434();
        func_0x000107c61434(lVar19);
        uVar4 = uVar20;
        func_0x0001011bf650(0,uVar20,0);
        plVar15 = (long *)(lVar12 + 0x20);
        uVar21 = uVar20;
        if ((uVar14 & 0xc000000000000001) == 0) {
          do {
            lVar6 = *plVar15;
            func_0x000107c61174();
            func_0x000107c61174();
            lVar13 = lVar6;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (lVar13 == 0) {
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar6);
              lVar22 = 0;
              uVar23 = 0;
              uVar5 = uVar4;
            }
            else {
              lVar22 = lVar13;
              func_0x000107c5faec();
              uVar5 = uVar4;
              func_0x000107c61170(lVar13);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar6);
              uVar23 = uVar4;
            }
            uVar4 = uVar5;
            uVar1 = *(ulong *)(puVar8 + 0x10);
            uVar5 = uVar1 + 1;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              uVar4 = uVar5;
              func_0x0001011bf650(1 < *(ulong *)(puVar8 + 0x18),uVar5,1);
            }
            *(ulong *)(puVar8 + 0x10) = uVar5;
            *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar22;
            *(ulong *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar23;
            uVar21 = uVar21 - 1;
            plVar15 = plVar15 + 1;
          } while (uVar21 != 0);
        }
        else {
          uVar21 = 0;
          do {
            uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
            uVar4 = uVar21;
            func_0x00010103193c();
            uVar5 = uVar4;
            func_0x000107c615f0();
            func_0x000107c5d984();
            func_0x000107c61180();
            if (uVar5 == 0) {
              func_0x000107c615ec(uVar4,2);
              uVar23 = 0;
              uVar11 = 0;
            }
            else {
              uVar23 = uVar5;
              func_0x000107c5faec();
              func_0x000107c61170(uVar5);
              func_0x000107c615ec(uVar4,2);
            }
            uVar4 = *(ulong *)(puVar8 + 0x10);
            uVar5 = uVar4 + 1;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
              func_0x0001011bf650(1 < *(ulong *)(puVar8 + 0x18),uVar5,1);
            }
            uVar21 = uVar21 + 1;
            *(ulong *)(puVar8 + 0x10) = uVar5;
            *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar23;
            *(undefined8 *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar11;
          } while (uVar20 != uVar21);
        }
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        plVar15 = (long *)(puVar8 + 0x28);
        do {
          lVar13 = *plVar15;
          if ((lVar13 != 0) &&
             ((uVar21 = plVar15[-1], uVar21 == uVar18 && lVar13 == lVar19 ||
              (func_0x000107c605b8(uVar21,lVar13,uVar18,lVar19,0), (uVar21 & 1) != 0)))) {
            func_0x000107c6142c(puVar8);
            puVar8 = puVar7;
            goto LAB_101992e70;
          }
          plVar15 = plVar15 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        uVar18 = *(ulong *)(unaff_x22 + 200);
        func_0x000107c6142c(puVar8);
        func_0x000107c6142c(uVar25);
        func_0x000107c6142c(lVar19);
        puVar8 = puVar7;
      } while (uVar17 != uVar18);
    }
LAB_101992fc4:
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xc0));
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = *(ulong *)(puVar9 + 0x10);
    if (uVar14 != 0) {
      uVar17 = 0;
      do {
        puVar16 = (undefined8 *)(puVar9 + uVar17 * 0x30 + 0x28);
        uVar18 = uVar17;
        while( true ) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101993224);
            (*pcVar2)();
          }
          uVar24 = *puVar16;
          uVar3 = puVar16[-1];
          uVar10 = puVar16[1];
          uVar11 = puVar16[4];
          uVar25 = puVar16[3];
          *(undefined8 *)(unaff_x22 + 0x58) = puVar16[2];
          *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
          *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
          *(undefined8 *)(unaff_x22 + 0x60) = uVar25;
          *(undefined8 *)(unaff_x22 + 0x48) = uVar24;
          *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
          uVar24 = puVar16[1];
          uVar3 = *puVar16;
          *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x68);
          *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x60);
          *(undefined8 *)(unaff_x22 + 0x88) = uVar24;
          *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
          uVar17 = uVar18 + 1;
          func_0x000101223174(unaff_x22 + 0x80,unaff_x22 + 0x90);
          uVar21 = unaff_x22 + 0x70;
          func_0x000100402194(uVar21,unaff_x22 + 0xa0);
          FUN_10199c4b8();
          if ((uVar21 & 0xff) != 0) break;
          FUN_101994d34(unaff_x22 + 0x80);
          func_0x000100bcb1dc(unaff_x22 + 0x70);
          puVar16 = puVar16 + 6;
          uVar18 = uVar17;
          if (uVar14 == uVar17) goto LAB_101993108;
        }
        puVar7 = puVar8;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010199735c(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar21 = *(ulong *)(puVar8 + 0x10);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
          func_0x00010199735c(1 < *(ulong *)(puVar8 + 0x18),uVar21 + 1,1);
        }
        *(ulong *)(puVar8 + 0x10) = uVar21 + 1;
        uVar24 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x30) = uVar10;
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x48) = uVar11;
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x40) = uVar25;
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x28) = uVar24;
        *(undefined8 *)(puVar8 + uVar21 * 0x30 + 0x20) = uVar3;
      } while (uVar14 - 1 != uVar18);
    }
LAB_101993108:
    lVar19 = *(long *)(unaff_x22 + 0xb0);
    lVar12 = *(long *)(puVar8 + 0x10);
    func_0x000107c61574(puVar8);
    puVar8 = puVar9;
    FUN_101994ebc(puVar9,uVar20 - lVar12 & ((long)(uVar20 - lVar12) >> 0x3f ^ 0xffffffffffffffffU));
    lVar12 = *(long *)(lVar19 + 0x70);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
    if (lVar12 != 0) {
      uVar10 = 0;
      func_0x000103e6d380(0);
      uVar24 = uVar10;
      FUN_101994c60();
      puVar7 = puVar8;
      func_0x000107c5f9dc(puVar8,uVar10,PTR___sSiN_11034deb0,uVar24);
      func_0x000107c6142c(puVar8);
      func_0x000107c5d3fc(lVar12);
      func_0x000107c6142c(uVar3);
      func_0x000107c61574(puVar9);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(lVar12);
      goto LAB_1019931e4;
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(puVar9);
LAB_1019931c8:
    func_0x000107c6142c(puVar8);
  }
  else {
    uVar17 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar17 = uVar14;
    }
    uVar20 = uVar17;
    func_0x000107c60480();
    func_0x000107c6142c(uVar3);
    if (0 < (long)uVar20) {
      func_0x000107c60480();
      goto joined_r0x000101992be0;
    }
LAB_101992f10:
    lVar12 = *(long *)(unaff_x22 + 0xe0);
    lVar19 = *(long *)(unaff_x22 + 0xe8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x108));
    if (lVar19 == lVar12) {
      puVar8 = *(undefined **)(unaff_x22 + 0xc0);
      if (*(long *)(unaff_x22 + 0xf0) != 0) {
        lVar12 = *(long *)(unaff_x22 + 0xb0);
        FUN_101994914();
        lVar12 = *(long *)(lVar12 + 0x70);
        func_0x000107c5c734();
        func_0x000107c61180();
        uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
        if (lVar12 != 0) {
          uVar10 = 0;
          func_0x000103e6d380(0);
          uVar24 = uVar10;
          FUN_101994c60();
          puVar9 = puVar8;
          func_0x000107c5f9dc(puVar8,uVar10,PTR___sSiN_11034deb0,uVar24);
          func_0x000107c6142c(puVar8);
          func_0x000107c5d3fc(lVar12);
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(puVar9);
          func_0x000107c615e8(lVar12);
          uVar20 = 0;
          goto LAB_1019931e4;
        }
        func_0x000107c6142c(uVar3);
        uVar20 = 0;
        goto LAB_1019931c8;
      }
    }
    else {
      puVar8 = *(undefined **)(unaff_x22 + 0xc0);
    }
    func_0x000107c6142c(puVar8);
    uVar20 = 0xffffffffffffffff;
  }
LAB_1019931e4:
                    /* WARNING: Could not recover jumptable at 0x00010199320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar20);
  return;
}



/* Entry: 101993224; end: 101993563;  */

void FUN_101993224(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_78 [24];
  
  lVar14 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (lVar14 != 0) {
      uVar12 = *(ulong *)(lVar14 + 0x10);
      if (uVar12 != 0) {
        lVar5 = lVar14;
        FUN_101994914(lVar14);
        uVar6 = 0;
        func_0x000103e6d380();
        uVar7 = uVar6;
        FUN_101994c60();
        lVar8 = lVar5;
        func_0x000107c5f9dc(lVar5,uVar6,PTR___sSiN_11034deb0);
        func_0x000107c6142c(lVar5);
        func_0x000107c4531c(param_3);
        func_0x000107c61170(lVar8);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar11 = 0;
        do {
          puVar13 = (undefined8 *)(lVar14 + 0x30 + uVar11 * 0x30);
          uVar15 = uVar11;
LAB_101993348:
          if (*(ulong *)(lVar14 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101993564);
            (*pcVar4)();
          }
          uVar18 = puVar13[-1];
          uVar17 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar19 = *puVar13;
          uVar16 = *puVar13;
          uVar1 = puVar13[2];
          uVar3 = puVar13[3];
          lVar5 = 0x112d3cde0;
          func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
          func_0x000107c61538();
          func_0x000107c61438(uVar16,2);
          func_0x000107c61438(uVar3,2);
          func_0x000107c604c4(lVar5,uVar1,uVar3);
          func_0x000107c6142c(uVar16);
          if (lVar5 == 1) {
            func_0x000107c6142c(uVar16);
            uVar16 = uVar3;
LAB_101993328:
            uVar15 = uVar15 + 1;
            func_0x000107c6142c(uVar3);
            func_0x000107c6142c(uVar16);
            puVar13 = puVar13 + 6;
            if (uVar12 == uVar15) break;
            goto LAB_101993348;
          }
          if ((lVar5 != 0) && (lVar5 != 2)) {
            func_0x000107c6142c(uVar3);
            if (lVar5 - 3U < 3) goto LAB_1019933e8;
            goto LAB_101993328;
          }
          func_0x000107c6142c(uVar3);
LAB_1019933e8:
          puVar9 = puVar10;
          func_0x000107c61558();
          if (((ulong)puVar9 & 1) == 0) {
            func_0x00010199735c(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
            func_0x00010199735c(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
          }
          uVar11 = uVar15 + 1;
          *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x28) = uVar18;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x20) = uVar17;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x38) = uVar20;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x30) = uVar19;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x40) = uVar1;
          *(undefined8 *)(puVar10 + uVar2 * 0x30 + 0x48) = uVar3;
        } while (uVar12 - 1 != uVar15);
        puVar9 = puVar10;
        FUN_101994914(puVar10);
        func_0x000107c61574(puVar10);
        puVar10 = puVar9;
        func_0x000107c5f9dc(puVar9,uVar6,PTR___sSiN_11034deb0,uVar7);
        func_0x000107c6142c(puVar9);
        func_0x000107c45324(param_3);
        func_0x000107c61170(puVar10);
      }
      puVar10 = &UNK_1104203a8;
      func_0x000107c613fc(&UNK_1104203a8,0x18,7);
      func_0x000107c61644(puVar10 + 0x10,param_2);
      func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8120,puVar10,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_2);
      func_0x000107c61574(puVar10);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101993564; end: 10199362b;  */

void FUN_101993564(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar1 = &UNK_1104203a8;
    func_0x000107c613fc(&UNK_1104203a8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    uVar2 = 9;
    func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8110,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10199362c; end: 10199364b;  */

void FUN_10199362c(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199364c,0,0);
  return;
}



/* Entry: 10199364c; end: 1019937cb;  */

void FUN_10199364c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x48);
    do {
      uVar2 = puVar10[-1];
      uVar3 = *puVar10;
      uVar8 = puVar10[-3];
      lVar6 = 0x112d3cde0;
      func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
      func_0x000107c61538();
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar3);
      func_0x000107c604c4(lVar6,uVar2,uVar3);
      if (lVar6 == 5) {
        lVar9 = *(long *)(unaff_x22 + 0x18);
        cVar4 = *(char *)(unaff_x22 + 0x40);
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar3);
        if ((cVar4 == '\x01') && (0 < lVar9)) {
          lVar6 = *(long *)(unaff_x22 + 0x20);
          uVar2 = *(undefined8 *)(lVar6 + 0x90);
          lVar9 = *(long *)(lVar6 + 0x98);
          func_0x0001000a8868(lVar6 + 0x78,uVar2);
          piVar7 = *(int **)(lVar9 + 0x20);
          iVar1 = *piVar7;
          plVar5 = (long *)(ulong)(uint)piVar7[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x28) = plVar5;
          *plVar5 = unaff_x22;
          plVar5[1] = (long)FUN_1019937cc;
                    /* WARNING: Could not recover jumptable at 0x00010199379c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar7))(0,0x7fffffffffffffff,uVar2,lVar9);
          return;
        }
        break;
      }
      puVar10 = puVar10 + 6;
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar3);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001019937c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1019937cc; end: 10199382b;  */

void FUN_1019937cc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10199382c;
  }
  else {
    pcVar1 = FUN_101993938;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10199382c; end: 101993937;  */

void FUN_10199382c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x22;
  ulong uVar6;
  
  puVar4 = *(undefined **)(unaff_x22 + 0x30);
  uVar3 = *(ulong *)(puVar4 + 0x10);
  if (uVar3 == 0) {
    func_0x000107c6142c(puVar4);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if (*(ulong *)(unaff_x22 + 0x18) <= uVar3) {
      uVar3 = *(ulong *)(unaff_x22 + 0x18);
    }
    uVar1 = 0;
    func_0x000107c605fc(0);
    puVar2 = puVar4;
    func_0x000107c615f4(puVar4,2);
    func_0x000107c61480();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c615e8(puVar4);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar6 = *(ulong *)(puVar2 + 0x10);
    func_0x000107c61574();
    puVar5 = *(undefined **)(unaff_x22 + 0x30);
    puVar2 = puVar5;
    if (uVar6 == uVar3) {
      func_0x000107c61480(puVar5,uVar1);
      func_0x000107c615e8(puVar5);
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x30));
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    }
    else {
      func_0x000107c615e8(puVar5);
      FUN_101994330(puVar5,puVar4 + 0x20,0,uVar3 << 1 | 1);
      func_0x000107c615e8(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001019938fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2);
  return;
}



/* Entry: 101993938; end: 10199396f;  */

void FUN_101993938(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010199396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 101993970; end: 101993b97;  */

undefined * FUN_101993970(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    FUN_101997340(0,lVar10,0);
    uVar1 = param_1 + 0x40;
    uVar5 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    func_0x000103e6d380();
    lVar9 = 0;
    do {
      if (uVar5 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101993b88);
        (*pcVar4)();
      }
      uVar13 = uVar5 >> 6;
      uVar11 = 1L << (uVar5 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101993b8c);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar5 * 8);
      uVar6 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + uVar5);
      func_0x000103e6bd00();
      uVar8 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar8) {
        FUN_101997340(1 < *(ulong *)(puVar3 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar3 + uVar8 * 0x10 + 0x20) = uVar6;
      *(undefined8 *)(puVar3 + uVar8 * 0x10 + 0x28) = uVar14;
      uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar8 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101993b90);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar6 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101993b94);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101993b98);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar5 & 0x3f);
      if (uVar6 == 0) {
        lVar12 = uVar13 << 6;
        puVar7 = (ulong *)(param_1 + 0x48 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar8 + 0x3f >> 6 <= uVar13) {
            FUN_101994d7c(uVar5,iVar2,0);
            goto LAB_101993a10;
          }
          uVar11 = *puVar7;
          lVar12 = lVar12 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar11 == 0);
        FUN_101994d7c(uVar5,iVar2,0);
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + lVar12;
      }
      else {
        uVar13 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
LAB_101993a10:
      lVar9 = lVar9 + 1;
      uVar5 = uVar8;
    } while (lVar9 != lVar10);
  }
  return puVar3;
}



/* Entry: 101993b98; end: 101993c0b;  */

void FUN_101993b98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x0001000834e4(unaff_x20 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 101993c0c; end: 101993e4b;  */

undefined * FUN_101993c0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101993d28);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112de09d8;
    func_0x0001000285a8(0x112de09d8,&UNK_10d9a82d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110420f70);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101993e4c; end: 101994193;  */

void FUN_101993e4c(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar10 = *param_3;
    uVar5 = param_2;
    func_0x000107c61174();
    uVar11 = uVar3;
    FUN_101990ef4();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_1019940d8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019940dc);
      (*pcVar2)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      uVar8 = (ulong)((uint)param_2 & 1);
      FUN_10199786c(lVar1);
      uVar11 = uVar3;
      FUN_101990ef4();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_101993ee8:
        func_0x000103e6d380(0);
        func_0x000107c60624();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101993ef8);
        (*pcVar2)();
      }
    }
    else {
      uVar8 = uVar5;
      if ((param_2 & 1) == 0) {
        FUN_1019975c4();
      }
    }
    if ((uVar5 & 1) != 0) {
LAB_101993f00:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar13 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar13 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c61170(uVar3);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uVar6 = 0;
      uStack_78 = uVar3;
      func_0x000103e6d380(0);
      func_0x000107c603d0(&uStack_78,&uStack_70,uVar6,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101994194);
      (*pcVar2)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar11 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar11 * 8) = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar11 * 8) = uVar6;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1019940dc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019940e0);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar13 != 1) {
      puVar12 = (undefined8 *)(param_1 + 0x38);
      uVar11 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019940e4);
          (*pcVar2)();
        }
        uVar3 = puVar12[-1];
        uVar6 = *puVar12;
        lVar10 = *param_3;
        func_0x000107c61174();
        uVar5 = uVar3;
        FUN_101990ef4();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_1019940d8;
        uVar9 = uVar8;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          uVar9 = 1;
          FUN_10199786c(lVar1);
          uVar5 = uVar3;
          FUN_101990ef4();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_101993ee8;
        }
        if ((uVar8 & 1) != 0) goto LAB_101993f00;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        *(ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 8) = uVar3;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar6;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1019940dc;
        uVar11 = uVar11 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar12 = puVar12 + 2;
        uVar8 = uVar9;
      } while (uVar13 != uVar11);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 101994194; end: 10199432f;  */

ulong FUN_101994194(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101994264);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101994268);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103e6d3c8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103e6d3c8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000022,0x800000010efc4e90);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101994330);
  (*pcVar2)();
}



/* Entry: 101994330; end: 101994403;  */

undefined * FUN_101994330(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101994404);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101994400);
      (*pcVar3)();
    }
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,PTR___sSSN_11034da80);
  }
  return puVar4;
}



/* Entry: 101994404; end: 1019945a3;  */

long FUN_101994404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_9;
  lStack_60 = param_8;
  func_0x0001000c5db4(auStack_78);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))();
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_7 + 0x10) = puVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_7 + 0x40) = uVar2;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_7 + 0xb0) = puVar1;
  *(undefined8 *)(param_7 + 0xc0) = 0;
  *(undefined8 *)(param_7 + 0xb8) = 2;
  FUN_101994f8c(param_1,param_7 + 0x18);
  FUN_101994f8c(auStack_78,param_7 + 0x48);
  *(undefined8 *)(param_7 + 0x70) = param_3;
  FUN_101994f8c(param_4,param_7 + 0x78);
  *(undefined8 *)(param_7 + 0xa0) = param_5;
  *(undefined8 *)(param_7 + 0xa8) = param_6;
  puVar1 = &UNK_1104203a8;
  func_0x000107c613fc(&UNK_1104203a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_7);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_6);
  uVar2 = 9;
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8158,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  FUN_101991868();
  func_0x0001000834e4(param_4);
  func_0x0001000834e4(param_1);
  func_0x0001000834e4(auStack_78);
  return param_7;
}



/* Entry: 1019945a4; end: 101994683;  */

void FUN_1019945a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_8 + -8);
  uStack_68 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc(param_7,200,7);
  (**(code **)(lVar2 + 0x10))(auStack_70 + lVar1,param_2,param_8);
  *(undefined8 *)((long)auStack_80 + lVar1) = param_9;
  FUN_101994404(param_1,auStack_70 + lVar1,param_3,param_4,param_5,uStack_68,param_7,param_8);
  return;
}



/* Entry: 101994684; end: 1019946a3;  */

void FUN_101994684(void)

{
  func_0x000107c61168(&PTR_PTR_112de0840);
  return;
}



/* Entry: 1019946a4; end: 101994707;  */

void FUN_1019946a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10199502c;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x50;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101991fb4;
  plVar4[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101991a58,0,0);
  return;
}



/* Entry: 101994708; end: 10199477f;  */

void FUN_101994708(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101995024;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101994780; end: 1019947ab;  */

void FUN_101994780(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019947ac; end: 10199482f;  */

void FUN_1019947ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101995028;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101994830; end: 101994873;  */

void FUN_101994830(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4ed88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b15c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4ed88 = puVar1;
  return;
}



/* Entry: 101994874; end: 1019948af;  */

void FUN_101994874(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019948b0; end: 1019948bf;  */

void FUN_1019948b0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar16 = *param_1;
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    if (lVar16 != 0) {
      uVar14 = *(ulong *)(lVar16 + 0x10);
      if (uVar14 != 0) {
        lVar7 = lVar16;
        FUN_101994914(lVar16);
        uVar8 = 0;
        func_0x000103e6d380();
        uVar9 = uVar8;
        FUN_101994c60();
        lVar10 = lVar7;
        func_0x000107c5f9dc(lVar7,uVar8,PTR___sSiN_11034deb0);
        func_0x000107c6142c(lVar7);
        func_0x000107c4531c(uVar4);
        func_0x000107c61170(lVar10);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar13 = 0;
        do {
          puVar15 = (undefined8 *)(lVar16 + 0x30 + uVar13 * 0x30);
          uVar17 = uVar13;
LAB_101993348:
          if (*(ulong *)(lVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101993564);
            (*pcVar5)();
          }
          uVar20 = puVar15[-1];
          uVar19 = puVar15[-2];
          uVar22 = puVar15[1];
          uVar21 = *puVar15;
          uVar18 = *puVar15;
          uVar1 = puVar15[2];
          uVar3 = puVar15[3];
          lVar7 = 0x112d3cde0;
          func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
          func_0x000107c61538();
          func_0x000107c61438(uVar18,2);
          func_0x000107c61438(uVar3,2);
          func_0x000107c604c4(lVar7,uVar1,uVar3);
          func_0x000107c6142c(uVar18);
          if (lVar7 == 1) {
            func_0x000107c6142c(uVar18);
            uVar18 = uVar3;
LAB_101993328:
            uVar17 = uVar17 + 1;
            func_0x000107c6142c(uVar3);
            func_0x000107c6142c(uVar18);
            puVar15 = puVar15 + 6;
            if (uVar14 == uVar17) break;
            goto LAB_101993348;
          }
          if ((lVar7 != 0) && (lVar7 != 2)) {
            func_0x000107c6142c(uVar3);
            if (lVar7 - 3U < 3) goto LAB_1019933e8;
            goto LAB_101993328;
          }
          func_0x000107c6142c(uVar3);
LAB_1019933e8:
          puVar11 = puVar12;
          func_0x000107c61558();
          if (((ulong)puVar11 & 1) == 0) {
            func_0x00010199735c(0,*(long *)(puVar12 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(puVar12 + 0x10);
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
            func_0x00010199735c(1 < *(ulong *)(puVar12 + 0x18),uVar2 + 1,1);
          }
          uVar13 = uVar17 + 1;
          *(ulong *)(puVar12 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x28) = uVar20;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x20) = uVar19;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x38) = uVar22;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x30) = uVar21;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x40) = uVar1;
          *(undefined8 *)(puVar12 + uVar2 * 0x30 + 0x48) = uVar3;
        } while (uVar14 - 1 != uVar17);
        puVar11 = puVar12;
        FUN_101994914(puVar12);
        func_0x000107c61574(puVar12);
        puVar12 = puVar11;
        func_0x000107c5f9dc(puVar11,uVar8,PTR___sSiN_11034deb0,uVar9);
        func_0x000107c6142c(puVar11);
        func_0x000107c45324(uVar4);
        func_0x000107c61170(puVar12);
      }
      puVar12 = &UNK_1104203a8;
      func_0x000107c613fc(&UNK_1104203a8,0x18,7);
      func_0x000107c61644(puVar12 + 0x10,lVar6);
      func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8120,puVar12,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(lVar6);
      func_0x000107c61574(puVar12);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1019948c0; end: 101994913;  */

void FUN_1019948c0(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101995030;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992058,0,0);
  return;
}



/* Entry: 101994914; end: 101994c5f;  */

/* WARNING: Removing unreachable block (ram,0x000101994c40) */

undefined * FUN_101994914(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101991210();
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar16 = puVar12[4];
      uVar15 = puVar12[3];
      uStack_98 = *puVar12;
      uStack_a0 = puVar12[-1];
      uStack_88 = puVar12[2];
      uStack_90 = puVar12[1];
      uStack_68 = puVar12[1];
      uStack_70 = *puVar12;
      uStack_80 = uVar15;
      uStack_78 = uVar16;
      func_0x000101223174(&uStack_70,apuStack_b0);
      uVar4 = uVar16;
      func_0x000107c61434();
      FUN_10199c4b8();
      uVar13 = (ulong)((uVar4 & 0xff) != 0);
      uVar4 = 0x112d3cde0;
      func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
      uVar5 = uVar4;
      func_0x000107c61538();
      func_0x000107c61434(uVar16);
      func_0x000107c604c4(uVar5,uVar15,uVar16);
      func_0x000107c6142c(uVar16);
      if (6 < uVar5) {
        uVar5 = 7;
      }
      func_0x000107c61538(uVar4,0x112de08f0);
      func_0x000107c61434(uVar16);
      func_0x000107c604c4(uVar4,uVar15,uVar16);
      func_0x000107c6142c(uVar16);
      if (*(long *)(puVar3 + 0x10) == 0) {
        lVar10 = 0;
      }
      else {
        if (6 < uVar4) {
          uVar4 = 7;
        }
        func_0x000107c61434(puVar3);
        func_0x000101990f24();
        if ((uVar15 & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(puVar3 + 0x38) + uVar4 * 8);
        }
        func_0x000107c6142c(puVar3);
      }
      lVar1 = lVar10 + uVar13;
      if (SCARRY8(lVar10,uVar13)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101994c28);
        (*pcVar2)();
      }
      puVar6 = puVar3;
      func_0x000107c61558();
      uVar9 = (uint)puVar6;
      uVar4 = uVar5;
      apuStack_b0[0] = puVar3;
      func_0x000101990f24();
      uVar13 = (ulong)~(uint)uVar15 & 1;
      lVar10 = *(long *)(puVar3 + 0x10) + uVar13;
      if (SCARRY8(*(long *)(puVar3 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101994c2c);
        (*pcVar2)();
      }
      if (*(long *)(puVar3 + 0x18) < lVar10) {
        func_0x000101997acc(lVar10);
        uVar4 = uVar5;
        func_0x000101990f24();
        if (((uint)uVar15 & 1) != (uVar9 & 1)) {
          func_0x000107c60624(&UNK_110719878);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101994c40);
          (*pcVar2)();
        }
LAB_101994b18:
        if ((uVar15 & 1) == 0) goto LAB_101994b20;
LAB_101994964:
        puVar3 = apuStack_b0[0];
        *(long *)(*(long *)(apuStack_b0[0] + 0x38) + uVar4 * 8) = lVar1;
        FUN_101994d34(&uStack_70);
        func_0x000107c6142c(uVar16);
      }
      else {
        if (((ulong)puVar6 & 1) != 0) goto LAB_101994b18;
        FUN_101997720();
        if ((uVar15 & 1) != 0) goto LAB_101994964;
LAB_101994b20:
        puVar3 = apuStack_b0[0];
        *(ulong *)(apuStack_b0[0] + (uVar4 >> 6) * 8 + 0x40) =
             *(ulong *)(apuStack_b0[0] + (uVar4 >> 6) * 8 + 0x40) | 1L << (uVar4 & 0x3f);
        *(char *)(*(long *)(apuStack_b0[0] + 0x30) + uVar4) = (char)uVar5;
        *(long *)(*(long *)(apuStack_b0[0] + 0x38) + uVar4 * 8) = lVar1;
        FUN_101994d34(&uStack_70);
        func_0x000107c6142c(uVar16);
        if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101994c30);
          (*pcVar2)();
        }
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      }
      puVar12 = puVar12 + 6;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar6 = puVar3;
  FUN_101993970();
  puVar11 = *(undefined **)(puVar6 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar7 = 0x112de07f0;
    func_0x0001000285a8(0x112de07f0,&UNK_10d9a8130);
    func_0x000107c60498(puVar11,uVar7);
    puVar8 = puVar11;
  }
  apuStack_b0[0] = puVar8;
  func_0x000107c61434(puVar6);
  FUN_101993e4c();
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(puVar6);
  return apuStack_b0[0];
}



/* Entry: 101994c60; end: 101994ca3;  */

void FUN_101994c60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112de08e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103e6d380(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112de08e0 = puVar2;
  return;
}



/* Entry: 101994ca4; end: 101994cf7;  */

void FUN_101994ca4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101994cf8;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992058,0,0);
  return;
}



/* Entry: 101994cf8; end: 101994d33;  */

void FUN_101994cf8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101994d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101994d34; end: 101994d7b;  */

undefined8 FUN_101994d34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101994d7c; end: 101994d8f;  */

void FUN_101994d7c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101994d90; end: 101994ebb;  */

undefined * FUN_101994d90(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar3 = *puVar9;
      func_0x000107c61438(uVar3,2);
      puVar4 = auStack_68;
      func_0x000100403b00(puVar4,uVar1,uVar3);
      func_0x000107c6142c(uStack_60);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar2 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          func_0x0001000d182c(puVar7,uVar2 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  func_0x000107c6142c(puStack_58);
  return puVar7;
}



/* Entry: 101994ebc; end: 101994f8b;  */

long FUN_101994ebc(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_2;
  FUN_101994914();
  if (0 < (long)param_2) {
    func_0x000103e6d380(0);
    lVar2 = 5;
    func_0x000103e6bd00();
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c61434(param_1);
      lVar5 = lVar2;
      FUN_101990ef4();
      if ((uVar4 & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x38) + lVar5 * 8);
      }
      func_0x000107c6142c(param_1);
    }
    if (SCARRY8(lVar5,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101994f8c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c61558(param_1);
    FUN_101997e84(lVar5 + param_2,lVar2,lVar3);
    func_0x000107c61170(lVar2);
  }
  return param_1;
}



/* Entry: 101994f8c; end: 101994fcf;  */

long FUN_101994f8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101994fd0; end: 101995023;  */

void FUN_101994fd0(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101995034;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992058,0,0);
  return;
}



/* Entry: 101995024; end: 101995037;  */

void FUN_101995024(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101994d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


