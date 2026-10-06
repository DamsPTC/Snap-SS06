/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100870c30; end: 100870cb7; -[SCFriendsFeedFetchContext copyWithZone:] */

undefined8 FUN_100870c30(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100870cb8; end: 100870cc7;  */

void FUN_100870cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100870cc8; end: 100870cfb;  */

void FUN_100870cc8(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100870cfc; end: 100870dbb; -[SCFriendsFeedReadyLogger _didSyncForSyncResult:] */

void FUN_100870cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + 0x20) == 1) && (*(long *)(param_1 + 0x80) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_1054e62bc;
    puStack_30 = &UNK_110846710;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_100870e70;
    puStack_58 = &UNK_110846710;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    puStack_88 = &UNK_1054e62d4;
    puStack_80 = &UNK_1108450c8;
    lStack_78 = param_1;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x000107c4c768(param_3,param_2,&puStack_48,&puStack_70,&puStack_98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100870dbc; end: 100870e6f; -[SCFriendsFeedReadySyncResult matchSuccess:successNoRender:failure:] */

/* WARNING: Possible PIC construction at 0x000100870e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100870e54) */

void FUN_100870dbc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_100870e4c;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      pcVar2 = *(code **)(param_4 + 0x10);
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_100870e4c;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      pcVar2 = *(code **)(param_3 + 0x10);
      param_4 = param_3;
    }
    (*pcVar2)(uVar3,param_4);
  }
LAB_100870e4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100870e70; end: 100870e9f;  */

void FUN_100870e70(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x80) = 3;
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x88) = param_1;
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(long *)(lVar1 + 0xd0) != 0) && (*(long *)(lVar1 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be540b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__logGrapheneAndBlizzardMetrics_1125729c8);
    return;
  }
  return;
}



/* Entry: 100870ea0; end: 100871157;  */

void FUN_100870ea0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c61160();
    func_0x000107c3d72c(param_2);
    puVar1 = puVar12;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar13 = puVar1;
    func_0x000107c40290(0);
    func_0x000107c61180();
    puVar2 = puVar12;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c40290(0);
    func_0x000107c61180();
    puVar4 = puVar12;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar5 = param_2;
    func_0x000107c3f75c(param_2);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = puVar12;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar8 = param_2;
    func_0x000107c3ec1c(param_2);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar1);
    func_0x000107c61174(puVar10);
    puVar1 = puVar10;
    func_0x000107c4080c();
    lVar5 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          func_0x000107c61128(puVar10);
        }
        func_0x000107c5784c(0x437a0000,*(undefined8 *)((long)puVar13 * 8));
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar1 = puVar10;
      func_0x000107c4080c();
    }
    func_0x000107c61170(puVar10);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 0x20,0);
  return;
}



/* Entry: 100871158; end: 100871173; -[SCFriendsFeedReadySyncResult .cxx_destruct] */

void FUN_100871158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100871174; end: 100871237;  */

void FUN_100871174(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if ((long)param_1[2] < 1) {
    uVar1 = *param_1;
    FUN_10002b838(auStack_60,&UNK_10f4b1dff);
    func_0x000107c60de8(auStack_48,param_2);
    func_0x00010885ea84(uVar1,auStack_60);
    FUN_1005ee9d0(auStack_60);
    param_1[2] = param_2;
  }
  return;
}



/* Entry: 100871238; end: 10087127b;  */

void FUN_100871238(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x18);
  uStack_18 = CONCAT17(*(undefined1 *)(lVar2 + 0x20),(undefined7)uStack_18);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48();
    uStack_18 = 0;
    if (plVar1[2] != 0) {
      func_0x000107c60d6c();
    }
    return;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,(long)&uStack_18 + 7,lVar2 + 0x28);
  return;
}



/* Entry: 10087127c; end: 100871297;  */

void FUN_10087127c(long param_1)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c60d6c();
  }
  return;
}



/* Entry: 100871298; end: 1008712df;  */

void FUN_100871298(void)

{
  long unaff_x21;
  undefined8 uStack_40;
  
  FUN_10087127c();
  if (uStack_40 != 0) {
    FUN_100871320();
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x21 + 0xb8) + -1;
  }
  FUN_100871818();
  return;
}



/* Entry: 1008712e0; end: 10087131f;  */

void FUN_1008712e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100871320; end: 10087132f;  */

void FUN_100871320(void)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  long extraout_x10;
  int extraout_w11;
  byte unaff_w20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_e8 [40];
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)(unaff_x21 + 0x10);
  lVar7 = *(long *)(unaff_x21 + 0x50);
  if ((lVar7 != 0) || (*(long *)(unaff_x21 + 0x80) != 0)) {
    puVar5 = puVar1;
    FUN_1006ad1a4();
    uStack_88 = puVar5[1];
    uStack_90 = *puVar5;
    if (puVar5[1] != 0) {
      do {
        FUN_100574708();
      } while (extraout_w10 != 0);
      lVar7 = *(long *)(unaff_x21 + 0x50);
    }
    lStack_80 = puVar5[2];
    if (lVar7 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = lStack_80 ==
              *(long *)(*(long *)(*(long *)(unaff_x21 + 0x30) +
                                 (*(ulong *)(unaff_x21 + 0x48) / 0xaa) * 8) +
                        (*(ulong *)(unaff_x21 + 0x48) % 0xaa) * 0x18 + 0x10);
    }
    FUN_1008715f4(puVar1);
    if ((unaff_w20 & bVar2) == 1) {
      while (*(long *)(unaff_x21 + 0x50) != 0) {
        puVar5 = (undefined8 *)
                 (*(long *)(*(long *)(unaff_x21 + 0x30) + (*(ulong *)(unaff_x21 + 0x48) / 0xaa) * 8)
                 + (*(ulong *)(unaff_x21 + 0x48) % 0xaa) * 0x18);
        plVar3 = (long *)*puVar5;
        lStack_70 = puVar5[1];
        plStack_78 = plVar3;
        if (lStack_70 != 0) {
          do {
            func_0x0001006acbb4();
            puVar5 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        uStack_68 = puVar5[2];
        plVar8 = *(long **)(unaff_x21 + 0x18);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        ppuStack_b8 = &PTR_DAT_110a609a8;
        uStack_98 = 100;
        FUN_1006ad1e0();
        plStack_c0 = plVar3;
        (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_b8,&plStack_c0);
        func_0x000108708240();
        (**(code **)(*plStack_78 + 0x20))();
        FUN_1008715f4(puVar1);
        FUN_1006b3a6c(&plStack_78);
      }
    }
    if ((((unaff_w20 ^ 1) & bVar2) == 1) && (*(long *)(unaff_x21 + 0x50) != 0)) {
      puVar5 = puVar1;
      FUN_1006ad1a4();
      lVar6 = puVar5[2];
      FUN_1006ad1c8(*(undefined8 *)(unaff_x21 + 0x30));
      lVar9 = *(long *)(extraout_x8_00 + extraout_x9 * extraout_x10 + 0x10);
      plVar3 = *(long **)(unaff_x21 + 0x18);
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppuStack_b8 = &PTR_DAT_110a609a8;
      uStack_b0 = 0;
      uStack_98 = 0x65;
      FUN_10002b838(&plStack_78,PTR_DAT_113268be0);
      lVar7 = 0xb8;
      if (lVar6 != lVar9) {
        lVar7 = 0xb0;
      }
      pppuVar4 = &ppuStack_b8;
      FUN_1005504ac(pppuVar4,&plStack_78,*(undefined8 *)((long)&PTR_s_success_113269028 + lVar7));
      func_0x000107c60ca0(&plStack_78);
      func_0x0001005505a0(auStack_e8,pppuVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,auStack_e8);
      FUN_1006ad208();
      func_0x000108708240();
    }
    FUN_1006ad098(puVar1);
    FUN_1006b3a6c(&uStack_90);
  }
  return;
}



/* Entry: 100871330; end: 1008715f3;  */

void FUN_100871330(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  long extraout_x10;
  int extraout_w11;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_e8 [40];
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_1[8];
  if ((lVar6 != 0) || (param_1[0xe] != 0)) {
    puVar4 = param_1;
    FUN_1006ad1a4();
    uStack_88 = puVar4[1];
    uStack_90 = *puVar4;
    if (puVar4[1] != 0) {
      do {
        FUN_100574708();
      } while (extraout_w10 != 0);
      lVar6 = param_1[8];
    }
    lStack_80 = puVar4[2];
    if (lVar6 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = lStack_80 ==
              *(long *)(*(long *)(param_1[4] + ((ulong)param_1[7] / 0xaa) * 8) +
                        ((ulong)param_1[7] % 0xaa) * 0x18 + 0x10);
    }
    FUN_1008715f4(param_1);
    if ((param_2 & bVar1) == 1) {
      while (param_1[8] != 0) {
        puVar4 = (undefined8 *)
                 (*(long *)(param_1[4] + ((ulong)param_1[7] / 0xaa) * 8) +
                 ((ulong)param_1[7] % 0xaa) * 0x18);
        plVar2 = (long *)*puVar4;
        lStack_70 = puVar4[1];
        plStack_78 = plVar2;
        if (lStack_70 != 0) {
          do {
            func_0x0001006acbb4();
            puVar4 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        uStack_68 = puVar4[2];
        plVar7 = (long *)param_1[1];
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        ppuStack_b8 = &PTR_DAT_110a609a8;
        uStack_98 = 100;
        FUN_1006ad1e0();
        plStack_c0 = plVar2;
        (**(code **)(*plVar7 + 0x18))(plVar7,&ppuStack_b8,&plStack_c0);
        func_0x000108708240();
        (**(code **)(*plStack_78 + 0x20))(plStack_78,param_3);
        FUN_1008715f4(param_1);
        FUN_1006b3a6c(&plStack_78);
      }
    }
    if ((((param_2 ^ 1) & bVar1) == 1) && (param_1[8] != 0)) {
      puVar4 = param_1;
      FUN_1006ad1a4();
      lVar5 = puVar4[2];
      FUN_1006ad1c8(param_1[4]);
      lVar8 = *(long *)(extraout_x8_00 + extraout_x9 * extraout_x10 + 0x10);
      plVar2 = (long *)param_1[1];
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppuStack_b8 = &PTR_DAT_110a609a8;
      uStack_b0 = 0;
      uStack_98 = 0x65;
      FUN_10002b838(&plStack_78,PTR_DAT_113268be0);
      lVar6 = 0xb8;
      if (lVar5 != lVar8) {
        lVar6 = 0xb0;
      }
      pppuVar3 = &ppuStack_b8;
      FUN_1005504ac(pppuVar3,&plStack_78,*(undefined8 *)((long)&PTR_s_success_113269028 + lVar6));
      func_0x000107c60ca0(&plStack_78);
      func_0x0001005505a0(auStack_e8,pppuVar3);
      (**(code **)(*plVar2 + 0x50))(plVar2,auStack_e8);
      FUN_1006ad208();
      func_0x000108708240();
    }
    FUN_1006ad098(param_1);
    FUN_1006b3a6c(&uStack_90);
  }
  return;
}



/* Entry: 1008715f4; end: 100871607;  */

bool FUN_1008715f4(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  FUN_1006ad134();
  FUN_1006ad1c8(*(undefined8 *)(param_1 + 8));
  FUN_1006b3a6c(extraout_x8 + extraout_x9 * extraout_x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x153 < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    func_0x000107c60e14(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
  }
  return bVar1;
}



/* Entry: 100871608; end: 1008716af;  */

bool FUN_100871608(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  FUN_1006ad1c8(*(undefined8 *)(param_1 + 8));
  FUN_1006b3a6c(extraout_x8 + extraout_x9 * extraout_x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x153 < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    func_0x000107c60e14(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
  }
  return bVar1;
}



/* Entry: 1008716b0; end: 1008716d7;  */

void FUN_1008716b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008716bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1008716d8; end: 10087171f;  */

undefined8 * FUN_1008716d8(undefined8 *param_1)

{
  func_0x0001008716c4(&PTR_DAT_110a68490);
  FUN_1006b3a34();
  FUN_1005fe494(param_1 + 0x12);
  FUN_1006b3ab0(param_1 + 0xe);
  FUN_1006acbd0(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a685c8;
  FUN_100558bb4(param_1 + 5);
  FUN_1006acb08(param_1 + 1);
  return param_1;
}



/* Entry: 100871720; end: 100871733;  */

void FUN_100871720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010087172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 100871734; end: 10087176b;  */

undefined8 * FUN_100871734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a677d0;
  FUN_1005fce88(param_1 + 4);
  FUN_10087176c();
  return param_1;
}



/* Entry: 10087176c; end: 10087179b;  */

void FUN_10087176c(void)

{
  long unaff_x20;
  
  func_0x00010054e7b4();
  if (unaff_x20 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10087179c; end: 1008717c7;  */

undefined8 * FUN_10087179c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67818;
  func_0x0001006b3aec(param_1 + 1);
  return param_1;
}



/* Entry: 1008717c8; end: 1008717db;  */

void FUN_1008717c8(void)

{
  FUN_10087179c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008717dc; end: 100871817;  */

undefined8 * FUN_1008717dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a685c8;
  FUN_100558bb4(param_1 + 5);
  FUN_1006acb08(param_1 + 1);
  return param_1;
}



/* Entry: 100871818; end: 100871833;  */

void FUN_100871818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100871834; end: 100871a0b;  */

void FUN_100871834(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long unaff_x19;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  func_0x0001006304fc();
  if ((extraout_x8 & 1) != 0) goto LAB_100871910;
  while( true ) {
    plVar9 = (long *)(unaff_x19 + 0x28);
    pbVar1 = (byte *)(*plVar9 + 0xa8);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
    if ((*(long *)(*plVar9 + 0xe8) == 0) && ((*(byte *)(*plVar9 + 0xb8) & 1) != 0)) break;
    FUN_100871a0c();
    FUN_1006716e8(extraout_x8_00 + 0x10);
    func_0x000100871a30();
    plVar9 = *(long **)(unaff_x19 + 0x38);
    FUN_100871a3c(unaff_x19 + 0x30);
    func_0x000100633798(*(undefined8 *)(unaff_x19 + 0x30));
    do {
      func_0x000100633778();
    } while (extraout_w10 != 0);
    func_0x0001006337a4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x000100871d78();
      lVar10 = *plVar9;
      if (lVar10 == 0) {
        FUN_10054ef74();
        lVar10 = *plVar9;
      }
      plVar6 = (long *)(unaff_x19 + 0x38);
      do {
        if (*plVar6 == 0) {
          func_0x0001006337c0();
          plVar6 = extraout_x8_02;
          uVar5 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x000108705070();
          plVar6 = extraout_x8_01;
          uVar5 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(unaff_x19 + 0xb8);
          func_0x000108705004();
          if ((bool)in_ZR) {
            func_0x000108704f9c();
            func_0x000108704f5c();
            func_0x000108704f6c();
            *(long **)(lVar8 + 8) = plVar9;
            *(long **)(unaff_x19 + 0xb8) = plVar9;
          }
          func_0x000108704ff4();
          *(long *)(extraout_x8_04 + 0x20) = lVar10;
          func_0x000108704f8c(*(undefined8 *)(unaff_x19 + 0xb8));
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
LAB_100871910:
    func_0x000100871d60();
    func_0x000100871d68();
    func_0x000100871d70();
    func_0x000100633764();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000100633778();
      } while (extraout_w10_02 != 0);
    }
    plVar9 = (long *)(unaff_x19 + 0x20);
    func_0x00010061e2f8();
    if (((ulong)plVar9 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 0;
      func_0x000100871d78();
      if (*plVar9 == 0) {
        FUN_10054ef74();
      }
      func_0x000100633788();
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
  }
  FUN_1006716e8(*plVar9 + 0x58);
  func_0x000100871a30();
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100871a0c; end: 100871a3b;  */

void FUN_100871a0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_x9;
  ulong uVar3;
  
  uVar1 = *(long *)(param_1 + 0xd8) + 1;
  uVar3 = *(ulong *)(param_1 + 0xa0);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  *(ulong *)(param_1 + 0xd8) = uVar1 - uVar2 * uVar3;
  *(long *)(param_1 + 0xe8) = in_x9 + -1;
  return;
}



/* Entry: 100871a3c; end: 100871d3f;  */

void FUN_100871a3c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = (undefined8 *)0xc0;
  func_0x000107c60e20();
  *puVar4 = &UNK_108704c50;
  puVar4[1] = &UNK_108704d60;
  puVar4[0x16] = param_2;
  FUN_1005f0ecc();
  plVar5 = puVar4 + 2;
  FUN_10054f4ac(param_1);
  uVar3 = *(char *)(param_2 + 0xe0) == '\x01';
  if (((bool)uVar3) && ((*(byte *)(param_2 + 0xa4) & 1) == 0)) {
    puVar4[0xc] = &PTR_DAT_110a68030;
    puVar4[0xd] = param_2;
    puVar4[0xf] = puVar4 + 0xc;
    func_0x0001087051cc(puVar4 + 0x14);
    func_0x000100633798(puVar4[0x14]);
    do {
      func_0x000100633778();
    } while (extraout_w10_02 != 0);
    func_0x0001006337a4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x17) = 0;
      lVar10 = puVar4[4];
      func_0x000100633754();
      lVar11 = *plVar5;
      if (lVar11 == 0) {
        FUN_10054ef74();
        lVar11 = *plVar5;
      }
      plVar7 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x0001006337c0();
          plVar7 = extraout_x8_02;
          uVar2 = extraout_w10_04;
          uVar8 = extraout_w11_02;
        }
        else {
          func_0x000108705070();
          plVar7 = extraout_x8_01;
          uVar2 = extraout_w10_03;
          uVar8 = extraout_w11_01;
        }
        if ((uVar8 & 1) != 0) {
LAB_100871c8c:
          lVar9 = *(long *)(lVar10 + 0x90);
          func_0x000108705004();
          if ((bool)uVar3) {
            func_0x000108704f9c();
            func_0x000108704f5c();
            func_0x000108704f6c();
            *(long **)(lVar9 + 8) = plVar5;
            *(long **)(lVar10 + 0x90) = plVar5;
          }
          func_0x000108704ff4();
          *(long *)(extraout_x8_05 + 0x20) = lVar11;
          func_0x000108704f8c(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    FUN_1005fbafc(puVar4 + 4);
    lVar10 = puVar4[0x16];
    func_0x000100871d68();
    func_0x000108705014();
    func_0x000108705104();
    if (*(char *)(lVar10 + 0xa4) == '\x01') {
      func_0x000100630a44(*(undefined8 *)(puVar4[0x16] + 0x30));
      (*extraout_x8_03)();
      func_0x000108705148(puVar4[0x16]);
      (*extraout_x8_04)();
      func_0x0001087052b4();
      func_0x000108705200();
    }
  }
  else if (((*(byte *)(param_2 + 0x91) & 1) != 0) ||
          (uVar3 = true, *(char *)(param_2 + 0x98) == '\x01')) {
    *(undefined1 *)(param_2 + 0x91) = 0;
    *(undefined4 *)(puVar4 + 4) = 1;
    *(undefined1 *)((long)puVar4 + 0x24) = 0;
    *(undefined4 *)(puVar4 + 5) = 0x14;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 8) = 0;
    puVar4[0x10] = &PTR_DAT_110a680c0;
    puVar4[0x11] = param_2;
    puVar4[0x13] = puVar4 + 0x10;
    func_0x0001087051cc(puVar4 + 0x15);
    puVar4[0x14] = puVar4[0x15];
    do {
      func_0x000100633778();
    } while (extraout_w10 != 0);
    func_0x000100633810(puVar4[0x14]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x17) = 1;
      lVar10 = puVar4[0x14];
      func_0x000100633754();
      lVar11 = *plVar5;
      if (lVar11 == 0) {
        FUN_10054ef74();
        lVar11 = *plVar5;
      }
      plVar7 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x0001006337c0();
          plVar7 = extraout_x8_00;
          uVar2 = extraout_w10_01;
          uVar8 = extraout_w11_00;
        }
        else {
          func_0x000108705070();
          plVar7 = extraout_x8;
          uVar2 = extraout_w10_00;
          uVar8 = extraout_w11;
        }
        if ((uVar8 & 1) != 0) goto LAB_100871c8c;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    puVar6 = puVar4 + 0x14;
    FUN_1005fbafc();
    lVar10 = puVar4[0x16];
    uVar1 = *(undefined4 *)puVar6;
    *(undefined1 *)(lVar10 + 0x98) = *(undefined1 *)((long)puVar6 + 4);
    *(undefined4 *)(lVar10 + 0x94) = uVar1;
    func_0x000108705014();
    func_0x0001087050b4();
    func_0x000108705104();
    lVar10 = puVar4[0x16];
    if (((*(byte *)(lVar10 + 0xf9) & 1) == 0) && (*(char *)(lVar10 + 0x98) == '\x01')) {
      *(undefined1 *)(lVar10 + 0x98) = 0;
    }
    func_0x0001087050bc();
  }
  FUN_100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 100871d40; end: 100871d87;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_100871d40(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_1005ed54c(*puVar5,puVar5);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 100871d88; end: 100871e77;  */

void FUN_100871d88(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  
  FUN_1005f8c3c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1005f8d30();
    FUN_100871e78();
    func_0x0001005f96b8();
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f96c8();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      FUN_10061e858();
      func_0x00010061de64();
      if (*param_1 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010061de14();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005fbafc(unaff_x19 + 0x30);
  func_0x0001005fbcac();
  func_0x0001005f96e0();
  func_0x0001005f96e8();
  func_0x0001005f96a0();
  func_0x0001005f96f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100871e78; end: 100871f77;  */

void FUN_100871e78(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x0001005f8d3c();
  plVar2 = param_1;
  FUN_1005f9928(FUN_1008ca240);
  func_0x0001005f9930();
  func_0x0001005f8e5c();
  FUN_100871f78();
  FUN_1005f95f0();
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9600();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010061debc();
    if (*plVar2 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010061de14();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005fbc94();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100871f78; end: 1008720b7;  */

void FUN_100871f78(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar2 = (long *)0x38;
  func_0x000107c60e20();
  plVar3 = plVar2;
  FUN_1005f9928(FUN_1008ca1f0);
  func_0x0001005f9930();
  func_0x0001005f9b68(*(undefined8 *)(lVar5 + 0x130));
  if (((extraout_w8 >> 1 & 1) != 0) &&
     (func_0x0001005f9b68(*(undefined8 *)(lVar5 + 0x130)), (extraout_w8_00 >> 5 & 1) == 0)) {
    plVar3 = (long *)(lVar5 + 0x130);
    func_0x00010086e5b8();
    if ((*plVar3 & 0x100000000) == 0) {
      plVar3 = (long *)(lVar5 + 0x188);
      func_0x0001005529b4();
    }
  }
  func_0x0001005f8e5c();
  FUN_1005fd01c();
  FUN_1005f95f0();
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9600();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x00010061debc();
    if (*plVar3 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010061de14();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108738318();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000108738134();
          func_0x0001087380a0();
          func_0x000108738020();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005fbc94();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1008720b8; end: 1008720c3;  */

void FUN_1008720b8(long param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c60c94(param_1,&stack0x00000008);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  *(undefined8 *)(param_1 + 0x20) = unaff_x20[1];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100564108();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1008720c4; end: 1008720cf; -[SCNMessagingSyncFeedUpdateMetadata .cxx_destruct] */

void FUN_1008720c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1008720d0; end: 10087210b; -[SCNMessagingSyncFeedMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008720e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008720ec) */

void FUN_1008720d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10087210c; end: 10087215f;  */

void FUN_10087210c(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100872160; end: 1008722b7; -[SCMainCameraScreenRouterImpl _viewContainerDidPresentUIContainer:] */

void FUN_100872160(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1008722b8;
    pcStack_40 = FUN_100872768;
    uStack_38 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_1;
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c5dc68(uVar3);
    func_0x000107c61170(lVar1);
    lVar1 = puStack_58[5];
    func_0x000107c3e5e8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 != 0) {
      uVar3 = puStack_58[5];
      func_0x000107c3e5e8(uVar3);
      func_0x000107c61180();
      uVar2 = puStack_58[5];
      func_0x000107c3f2e4(uVar2);
      func_0x000107c61180();
      func_0x000107c3ae04(param_1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c60bcc(&uStack_60,8);
    func_0x000107c61170(uStack_38);
  }
  return;
}



/* Entry: 1008722b8; end: 1008722c7;  */

void FUN_1008722b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1008722c8; end: 1008722ff;  */

void FUN_1008722c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100872300; end: 10087230f; -[SCCameraOverlayView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100872300(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276282c);
}



/* Entry: 100872310; end: 10087231f; -[SCCameraOverlayView cameraViewFinderBottomAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100872310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127627e0),PTR_s_bottomAnchor_1125a5988);
  return;
}



/* Entry: 100872320; end: 100872767; -[SCMainCameraScreenRouterImpl _attachBaseContainerToView:viewfinderBottomAnchor:] */

/* WARNING: Possible PIC construction at 0x0001008723ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008724f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008725d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087262c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100872670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008726d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008726f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087270c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087271c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100872710) */
/* WARNING: Removing unreachable block (ram,0x0001008726f8) */
/* WARNING: Removing unreachable block (ram,0x0001008726d4) */
/* WARNING: Removing unreachable block (ram,0x000100872674) */
/* WARNING: Removing unreachable block (ram,0x0001008726dc) */
/* WARNING: Removing unreachable block (ram,0x000100872688) */
/* WARNING: Removing unreachable block (ram,0x000100872664) */
/* WARNING: Removing unreachable block (ram,0x000100872654) */
/* WARNING: Removing unreachable block (ram,0x000100872644) */
/* WARNING: Removing unreachable block (ram,0x000100872630) */
/* WARNING: Removing unreachable block (ram,0x0001008725d4) */
/* WARNING: Removing unreachable block (ram,0x00010087250c) */
/* WARNING: Removing unreachable block (ram,0x0001008724fc) */
/* WARNING: Removing unreachable block (ram,0x00010087243c) */
/* WARNING: Removing unreachable block (ram,0x000100872444) */
/* WARNING: Removing unreachable block (ram,0x000100872448) */
/* WARNING: Removing unreachable block (ram,0x000100872414) */
/* WARNING: Removing unreachable block (ram,0x0001008723f0) */
/* WARNING: Removing unreachable block (ram,0x000100872720) */
/* WARNING: Removing unreachable block (ram,0x000100872764) */
/* WARNING: Removing unreachable block (ram,0x000100872740) */

void FUN_100872320(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  func_0x000107c61174(param_4);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x000107c61174(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  dVar3 = *(double *)(param_1 + 0x18);
  if ((param_4 == 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    lVar1 = lVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      param_3 = lVar1;
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (param_3 != 0) {
        lVar1 = param_3;
      }
      func_0x000107c61174(lVar1);
      goto code_r0x000107c61170;
    }
    dVar3 = 0.0;
    func_0x000107c61170(0);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    else {
      func_0x000107c4fec0(lVar2);
    }
  }
  func_0x000107c3d89c(param_3,param_2,lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c515ac(param_3);
  func_0x000107c61180();
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c40284(-dVar3,lVar2,param_2,param_3);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100872768; end: 10087276f;  */

void FUN_100872768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100872770; end: 10087277f; -[_TtC18SCCameraUIServices18SCCameraUIServices cameraServicePromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100872770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130385b8));
  return;
}



/* Entry: 100872780; end: 100872a3b;  */

void FUN_100872780(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100872a3c; end: 100872a47;  */

undefined ** FUN_100872a3c(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 100872a48; end: 100872a73;  */

void FUN_100872a48(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 100872a74; end: 100872a7b;  */

void FUN_100872a74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b016e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100872a7c; end: 100872aff;  */

void FUN_100872a7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b016e4,param_2,FUN_100872b00,param_2,&UNK_102b016e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100872b00; end: 100872b27;  */

void FUN_100872b00(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100872b28; end: 100872b33;  */

void FUN_100872b28(void)

{
  long unaff_x20;
  
  FUN_100872b34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 100872b34; end: 100872f0b;  */

void FUN_100872b34(long *param_1,long param_2)

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
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1005b6344();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abf58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar9 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0x7672655364416b73;
  func_0x000107c5fadc(0x7672655364416b73,0xec00000073656369);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  lVar10 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar8 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0edd50);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(long *)(param_2 + 0x40) = lVar10;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100872f0c);
  (*pcVar1)();
}



/* Entry: 100872f0c; end: 10087325f; -[SCMainCameraLensViewThroughTrackingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100872f0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f0638;
  lStack_70 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_begin_1125a3840);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112743140;
    func_0x000107c61148();
  }
  lVar1 = lVar11;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(lVar11);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar11);
    puVar4 = PTR_PTR_1126c8d18;
    if ((int)lVar2 != 0) {
      lVar11 = param_1;
      FUN_100873260(param_1);
      func_0x000107c61180();
      lVar1 = param_1;
      FUN_1008736ec(param_1);
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000100873710(param_1);
      func_0x000107c61180();
      func_0x000107c5df24(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar11);
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11274313c);
      }
      func_0x000107c42c20(uVar3);
      goto LAB_100873220;
    }
  }
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  lVar11 = param_1;
  FUN_100873260(param_1);
  func_0x000107c61180();
  lVar1 = lVar11;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar11);
  puVar5 = PTR_PTR_1126c8d20;
  func_0x000107c610f4(PTR_PTR_1126c8d20);
  lVar11 = lVar2;
  func_0x000107c5b0b0(lVar2);
  func_0x000107c61180();
  lVar1 = lVar2;
  FUN_100873628(lVar2);
  func_0x000107c61180();
  func_0x000107c47a50(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar11);
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c61160(PTR_PTR_1126ae820);
  func_0x000107c4d664();
  puVar7 = PTR_PTR_1126c8d28;
  func_0x000107c610f4(PTR_PTR_1126c8d28);
  lVar11 = param_1;
  FUN_1008736ec(param_1);
  func_0x000107c61180();
  lVar1 = lVar11;
  func_0x000107c5b0b4();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000100873710(param_1);
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5b0a8();
  func_0x000107c61180();
  func_0x000107c477f0(puVar7);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar11);
  puVar10 = PTR_PTR_1126c8d30;
  func_0x000107c610f4(PTR_PTR_1126c8d30);
  func_0x000107c49534();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274313c);
  }
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar2);
LAB_100873220:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100873260; end: 100873283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100873260(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112743130);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100873284; end: 100873297; -[SCAdConfigProviderImpl skAdNetworkIdentifier] */

void FUN_100873284(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddb858,
             &PTR____CFConstantStringClassReference_110ddb878);
  return;
}



/* Entry: 100873298; end: 10087331b; -[SCAdConfigProviderImpl _getStringWithKey:defaultValue:] */

void FUN_100873298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c1e8();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10087331c; end: 1008733c7; -[_TtC20AdConfigProviderImpl16AdConfigProvider stringValueForKey:defaultValue:] */

void FUN_10087331c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  FUN_1008733c8(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(param_3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1008733c8; end: 10087358b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1008733c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  FUN_10006c804();
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,&uStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar7 + 0x10) == 0) {
    ppuStack_70 = (undefined **)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    func_0x000107c61434(param_2);
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c61434(lVar7);
    lVar3 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      ppuStack_70 = (undefined **)0x0;
      lStack_88 = 0;
      uStack_90 = 0;
      puStack_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      FUN_10048eeb8(*(long *)(lVar7 + 0x38) + lVar3 * 0x28,&uStack_90);
      func_0x000107c6142c(lVar7);
    }
  }
  func_0x000107c614a8(&uStack_68);
  uVar5 = 0x112dbe728;
  FUN_1000285a8(0x112dbe728,&UNK_10d979918);
  puVar1 = PTR___sSSN_11034da80;
  puVar4 = &uStack_68;
  func_0x000107c6147c(puVar4,&uStack_90,uVar5,PTR___sSSN_11034da80,6);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe730);
    lVar7 = param_1;
    FUN_10087358c(uVar5,param_1,param_2,param_3,param_4);
    puStack_78 = puVar1;
    ppuStack_70 = &PTR_DAT_110738348;
    uStack_90 = uVar5;
    lStack_88 = lVar7;
    func_0x000107c61428(unaff_x20 + lVar2,&uStack_68,0x21,0);
    func_0x000107c61434(lVar7);
    FUN_1003ff25c(&uStack_90,param_1,param_2);
    func_0x000107c614a8(&uStack_68);
  }
  else {
    func_0x000107c6142c(param_2);
    uVar5 = uStack_68;
    lVar7 = lStack_60;
  }
  FUN_100070bfc();
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 10087358c; end: 100873627;  */

undefined1  [16]
FUN_10087358c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5c1dc(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  uVar1 = param_1;
  func_0x000107c5faec(param_1);
  func_0x000107c61170(param_1);
  auVar2._8_8_ = param_5;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 100873628; end: 100873647;  */

void FUN_100873628(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5b0b8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100873648; end: 10087365b; -[SCAdConfigProviderImpl skAdNetworkSourceAppIdentifier] */

void FUN_100873648(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddb898,
             &PTR____CFConstantStringClassReference_110ddb8b8);
  return;
}



/* Entry: 10087365c; end: 1008736eb; -[SCSponsoredLensTrackerADConfig initWithNetworkIdentifier:networkSourceAppIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087365c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef39e0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef39e8);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008736ec; end: 100873753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008736ec(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112743134);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100873754; end: 10087381f; -[SCSponsoredSocialUnlockViewThroughTracker initWithMetricsManager:skViewThroughPerformer:adConfig:adNetwork:mediaCaptured:] */

undefined8
FUN_100873754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100873734();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = param_6;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  FUN_100873840(param_4,param_5,param_7,lVar1);
  lVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,lVar1,0x59,7);
  return param_4;
}



/* Entry: 100873820; end: 10087383f;  */

void FUN_100873820(void)

{
  func_0x000107c61168(&PTR_PTR_11288b640);
  return;
}



/* Entry: 100873840; end: 100873997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100873840(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined8 *puVar7;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  long *aplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar6 = *param_4;
  ppuStack_58 = &PTR_DAT_11059e078;
  lVar2 = param_1;
  aplStack_78[0] = param_4;
  lStack_60 = lVar6;
  FUN_100873820();
  lVar3 = lVar2;
  func_0x000107c610f8();
  FUN_1000c6518(aplStack_78,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  lVar1 = _DAT_112ef3a38;
  alStack_b0[2] = *puVar7;
  ppuStack_80 = &PTR_DAT_11059e078;
  puVar4 = PTR_PTR_1126ae810;
  lStack_88 = lVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112ef3a40) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ef3a48) = 0;
  *(long *)(lVar3 + _DAT_112ef3a18) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ef3a20) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ef3a28) = param_3;
  FUN_100873998(alStack_b0 + 2,lVar3 + _DAT_112ef3a30);
  plVar5 = alStack_b0;
  alStack_b0[0] = lVar3;
  alStack_b0[1] = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(aplStack_78);
  return plVar5;
}



/* Entry: 100873998; end: 1008739db;  */

long FUN_100873998(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1008739dc; end: 100873a53; -[_TtC31SCSponsoredSocialUnlockServices50SCSponsoredSocialUnlockViewThroughTrackingServices initWithViewThroughTracker:mediaCaptured:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008739dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ef3c58) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ef3c60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100873a54; end: 100873a5f;  */

undefined ** FUN_100873a54(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 100873a60; end: 100873a8b;  */

void FUN_100873a60(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 100873a8c; end: 100873a93;  */

void FUN_100873a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b01b58);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100873a94; end: 100873b17;  */

void FUN_100873a94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b01b58,param_2,FUN_100873b18,param_2,&UNK_102b01b5c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100873b18; end: 100873b3f;  */

void FUN_100873b18(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100873b40; end: 100873b53;  */

undefined ** FUN_100873b40(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 100873b54; end: 100873bfb;  */

void FUN_100873b54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11059b010;
  func_0x000107c613fc(&UNK_11059b010,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_100873bfc;
  FUN_1000823a8(FUN_100873bfc,puVar1);
  FUN_100082720("SCMainCameraScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100873bfc; end: 100873c03;  */

void FUN_100873bfc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11059a3a0;
  func_0x000107c613fc(&UNK_11059a3a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102afc2b0;
  FUN_10058fa64(&UNK_102afc2b0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100873c04; end: 100873cc7;  */

void FUN_100873c04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11059a3a0;
  func_0x000107c613fc(&UNK_11059a3a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102afc2b0;
  FUN_10058fa64(&UNK_102afc2b0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100873cc8; end: 100873ceb;  */

void FUN_100873cc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100873cec; end: 100873d23;  */

void FUN_100873cec(long *param_1)

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



/* Entry: 100873d24; end: 100873d2b;  */

void FUN_100873d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100873d2c; end: 100873d57;  */

void FUN_100873d2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100873d58; end: 100873d5b;  */

void FUN_100873d58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100873d5c; end: 100873d73; -[SCNavigationService swipeViewContainer] */

void FUN_100873d5c(long param_1)

{
  func_0x000107c61148(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100873d74; end: 100873d77;  */

void FUN_100873d74(void)

{
  return;
}



/* Entry: 100873d78; end: 100873de3; -[SCNavigationService _doPresentAnimated:fromUserInteraction:completion:] */

/* WARNING: Possible PIC construction at 0x000100873dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100873dcc) */

void FUN_100873d78(long param_1)

{
  undefined8 in_x4;
  
  func_0x000107c61174(in_x4);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c5c684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 100873de4; end: 100873e57; -[SCActiveUserNGSNavigationRouter tabWantsToPresent:fromUserInteraction:animated:completion:] */

void FUN_100873de4(undefined8 param_1)

{
  undefined8 in_x5;
  
  func_0x000107c61174(in_x5);
  func_0x000107c3ca1c(param_1);
  func_0x000107c3c824(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 100873e58; end: 100873f0f; -[SCActiveUserNGSNavigationRouter _swipeViewTypeOfTabItemContainer:] */

undefined8 FUN_100873e58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  FUN_10010fab4(param_3,PTR_DAT_1126a5638);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  if (lVar1 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 400);
    func_0x000107c3db64(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c49820();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 100873f10; end: 10087420b; -[SCActiveUserNGSNavigationRouter _showSwipeViewType:from:fromUserInteraction:shouldAnimate:completion:] */

void FUN_100873f10(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_108 [8];
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_7);
  func_0x000107c3c254(param_1);
  if (*(char *)(param_1 + 0x1a9) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x140);
    func_0x000107c3de48();
    func_0x000107c61180();
    uVar7 = uVar1;
    func_0x000107c2bd28();
    func_0x000107c61170(uVar1);
  }
  else {
    uVar7 = 0;
  }
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && ((uVar7 & 1) == 0)) {
    puVar2 = PTR_PTR_1126ce530;
    func_0x000107c610fc(PTR_PTR_1126ce530);
    if (param_3 < 6) {
      ppuVar5 = (undefined **)(&PTR_PTR_110941570)[param_3];
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e60878;
    }
    func_0x000106814030(puVar2,ppuVar5,1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c61144(auStack_78,param_1);
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      lVar3 = *(long *)(param_1 + 0x1d0);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,0);
      }
      lVar3 = param_7;
      func_0x000107c40794();
      lVar4 = lVar3;
      func_0x000107c61184();
      uVar6 = *(undefined8 *)(param_1 + 0x1d0);
      *(long *)(param_1 + 0x1d0) = lVar4;
      func_0x000107c61170(uVar6);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      puStack_b0 = &UNK_106802f2c;
      puStack_a8 = &UNK_110883440;
      func_0x000107c6111c(auStack_98,auStack_78);
      uStack_90 = param_3;
      uStack_88 = param_4;
      uStack_80 = param_6;
      func_0x000107c61174(lVar3);
      ppuVar5 = &puStack_c0;
      lStack_a0 = lVar3;
      func_0x000107c40794();
      uVar6 = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined ***)(param_1 + 0x1c8) = ppuVar5;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lStack_a0);
      func_0x000107c61120(auStack_98);
    }
    else {
      *(undefined1 *)(param_1 + 0x1a9) = 0;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_1008edf84;
      puStack_d8 = &UNK_110849380;
      func_0x000107c61174(param_7);
      lStack_d0 = param_7;
      func_0x000107c6111c(auStack_c8,auStack_78);
      ppuVar5 = &puStack_f0;
      func_0x000107c61184();
      func_0x000107c6111c(auStack_108,auStack_78);
      uStack_100 = param_3;
      uStack_f8 = param_5;
      uStack_f7 = param_6;
      func_0x000107c61174(ppuVar5);
      func_0x000107c3c104(param_1);
      func_0x000107c61170(ppuVar5);
      func_0x000107c61120(auStack_108);
      func_0x000107c61170(ppuVar5);
      func_0x000107c61120(auStack_c8);
      lVar3 = lStack_d0;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_7);
  return;
}



/* Entry: 10087420c; end: 1008742af; -[SCActiveUserNGSNavigationRouter _refreshLocalizedTabBarLabelsIfNeeded] */

/* WARNING: Possible PIC construction at 0x00010087425c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100874290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100874260) */
/* WARNING: Removing unreachable block (ram,0x000100874274) */
/* WARNING: Removing unreachable block (ram,0x000100874280) */
/* WARNING: Removing unreachable block (ram,0x000100874294) */
/* WARNING: Removing unreachable block (ram,0x00010087429c) */

void FUN_10087420c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  func_0x000107c4ecb0();
  func_0x000107c61180();
  func_0x000107c43638();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008742b0; end: 10087447b; -[SCActiveUserNGSNavigationRouter _performPreNoninteractiveTransitionWorkTransitioningToSwipeViewType:readyBlock:] */

void FUN_1008742b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_4);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = param_1 + 0x20;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c4f078();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10087447c;
  puStack_70 = &UNK_110848708;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(param_4);
  ppuVar3 = &puStack_88;
  uStack_68 = param_4;
  func_0x000107c61184();
  if ((uVar2 == 0) || (uVar1 = uVar2, func_0x000107c49aa0(), (uVar1 & 1) != 0)) {
    (*(code *)ppuVar3[2])(ppuVar3);
    goto LAB_100874408;
  }
  if (param_3 == 1) {
    puVar4 = PTR_PTR_1126cb710;
    func_0x000107c61158(PTR_PTR_1126cb710);
    uVar1 = uVar2;
    func_0x000107c6115c(uVar2,puVar4);
    if ((uVar1 & 1) == 0) goto LAB_1008743dc;
    func_0x000107c61174(uVar2);
    func_0x000107c42080(PTR_PTR_1126cb718);
    uVar1 = uVar2;
  }
  else {
LAB_1008743dc:
    uVar1 = param_1 + 0x20;
    func_0x000107c61148(uVar1);
    func_0x000107c3b538(param_1);
  }
  func_0x000107c61170(uVar1);
LAB_100874408:
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10087447c; end: 100874537;  */

void FUN_10087447c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  lVar2 = param_2 + 0x28;
  func_0x000107c61148(lVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100874754;
  puStack_48 = &UNK_110860cf8;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000107c61174(uVar3);
  uStack_40 = uVar3;
  func_0x000107c3bc2c(lVar2,param_3,&puStack_60);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uStack_40);
  return;
}



/* Entry: 100874538; end: 100874753; -[SCActiveUserNGSNavigationRouter _legacy_popToRootVCWithCompletion:] */

void FUN_100874538(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
  uVar2 = param_1 + 0x28;
  func_0x000107c61148();
  uVar3 = uVar2;
  func_0x000107c4f078();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if ((uVar3 == 0) || (uVar2 = uVar3, func_0x000107c49aa0(), (uVar2 & 1) != 0)) {
    func_0x000107c3e108(PTR__OBJC_CLASS___UIView_1126aec20);
    lVar4 = param_1 + 0x28;
    func_0x000107c61148(lVar4);
    lVar6 = lVar4;
    func_0x000107c5de94();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c40808(lVar6);
    lVar4 = lVar6;
    func_0x000107c43638(lVar6);
    func_0x000107c61180();
    lVar5 = lVar6;
    func_0x000107c4aa28(lVar6);
    func_0x000107c61180();
    func_0x000107c3e740(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x000107c5362c(PTR__OBJC_CLASS___CATransaction_1126b5718);
    param_1 = param_1 + 0x28;
    func_0x000107c61148(param_1);
    func_0x000107c4eb40();
    func_0x000107c611b0();
    func_0x000107c61170(param_1);
    func_0x000107c3fe58(PTR__OBJC_CLASS___CATransaction_1126b5718);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  else {
    puVar1 = PTR_PTR_1126cb710;
    func_0x000107c61158(PTR_PTR_1126cb710);
    uVar2 = uVar3;
    func_0x000107c6115c(uVar3,puVar1);
    if ((uVar2 & 1) != 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_1008746c8;
    }
    lVar6 = param_1 + 0x28;
    func_0x000107c61148(lVar6);
    func_0x000107c3b538(param_1);
  }
  func_0x000107c61170(lVar6);
LAB_1008746c8:
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100874754; end: 1008747db;  */

void FUN_100874754(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100874798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1008747dc; end: 100874cdf; -[SCActiveUserNGSNavigationRouter _presentSwipeViewType:fromUserInteraction:animated:completion:] */

void FUN_1008747dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_7);
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c45340(uVar4);
  func_0x000107c61170(puVar1);
  uVar5 = *(ulong *)(param_2 + 0x188);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c3ae1c(param_2);
  uVar6 = uVar5;
  func_0x000107c3f9d4();
  func_0x000107c61180();
  func_0x000107c61170();
  if (uVar6 == 0) {
    *(long *)(param_2 + 0x1b0) = param_4;
    uVar4 = param_7;
    func_0x000107c61184();
    uVar6 = *(ulong *)(param_2 + 0x1b8);
    *(undefined8 *)(param_2 + 0x1b8) = uVar4;
  }
  else {
    *(undefined8 *)(param_2 + 0x1b0) = 0xffffffffffffffff;
    uVar6 = uVar5;
    if (*(long *)(param_2 + 0x1a0) == -1) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c61170(puVar1);
      func_0x000107c3f9d4();
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(param_2 + 0x180);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x1008edf18;
      puStack_a0 = &UNK_1109414c0;
      uStack_80 = param_1;
      func_0x000107c61174(uVar5);
      uStack_98 = uVar5;
      uStack_90 = uVar6;
      func_0x000107c61174(param_7);
      uStack_88 = param_7;
      func_0x000107c61174(uVar6);
      func_0x000107c4f020(uVar4);
      func_0x000107c61170(uStack_88);
      func_0x000107c61170(uStack_90);
      func_0x000107c61170(uStack_98);
    }
    else if (*(long *)(param_2 + 0x1a0) == param_4) {
      uVar2 = uVar5;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar2 == 0) {
        uVar2 = uVar5;
        func_0x000107c61164(uVar5,PTR_s_handleUserTriggeredNavigationAct_1125d25d8);
        if ((uVar2 & 1) != 0) {
          func_0x000107c44670(uVar5);
        }
      }
      else {
        func_0x000107c3b538(param_2);
      }
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c61170(puVar1);
      func_0x000107c3f9d4();
      func_0x000107c61180();
      *(undefined1 *)(param_2 + 0x1a8) = 1;
      func_0x000107c61144(auStack_c0,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x180);
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      puStack_f8 = &UNK_106802f6c;
      puStack_f0 = &UNK_11085e498;
      uStack_c8 = param_1;
      func_0x000107c61174(uVar5);
      uStack_e8 = uVar5;
      func_0x000107c61174(uVar6);
      uStack_e0 = uVar6;
      func_0x000107c6111c(auStack_d0,auStack_c0);
      func_0x000107c61174(param_7);
      uStack_d8 = param_7;
      func_0x000107c4f020(uVar4);
      func_0x000107c61170(uStack_d8);
      func_0x000107c61120(auStack_d0);
      func_0x000107c61170(uStack_e0);
      func_0x000107c61170(uStack_e8);
      func_0x000107c61120(auStack_c0);
    }
    else {
      uVar6 = *(ulong *)(param_2 + 0x188);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      uVar2 = uVar6;
      func_0x000107c61164(uVar6,PTR_s_didTapNewTabToDismiss_1125bcd10);
      if ((uVar2 & 1) != 0) {
        func_0x000107c41d9c(uVar6);
      }
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c61170(puVar1);
      uVar2 = uVar6;
      func_0x000107c3f9d4(uVar6);
      func_0x000107c61180();
      uVar3 = uVar5;
      func_0x000107c3f9d4();
      func_0x000107c61180();
      *(undefined1 *)(param_2 + 0x1a8) = 1;
      func_0x000107c61144(auStack_c0,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x180);
      uStack_110 = param_1;
      func_0x000107c61174(uVar5);
      func_0x000107c61174(uVar3);
      func_0x000107c6111c(auStack_118,auStack_c0);
      func_0x000107c61174(param_7);
      func_0x000107c4f020(uVar4);
      func_0x000107c61170(param_7);
      func_0x000107c61120(auStack_118);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      func_0x000107c61120(auStack_c0);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_7);
  return;
}



/* Entry: 100874ce0; end: 100874e23; -[SCActiveUserNGSNavigationRouter _attachSwipeViewTypeIfNecessary:] */

/* WARNING: Possible PIC construction at 0x000100874d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100874d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100874da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100874de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100874df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100874de4) */
/* WARNING: Removing unreachable block (ram,0x000100874d98) */
/* WARNING: Removing unreachable block (ram,0x000100874d30) */
/* WARNING: Removing unreachable block (ram,0x000100874e10) */
/* WARNING: Removing unreachable block (ram,0x000100874d34) */
/* WARNING: Removing unreachable block (ram,0x000100874da8) */
/* WARNING: Removing unreachable block (ram,0x000100874d40) */
/* WARNING: Removing unreachable block (ram,0x000100874df8) */

void FUN_100874ce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c40404(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100874e24; end: 100874e33; -[SIGTabBarItemContainer dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100874e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c5dc);
}



/* Entry: 100874e34; end: 100874edb; -[SCDeckContainerDataSource inflateViewController] */

void FUN_100874e34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c498f8(*(undefined8 *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x40) = 0;
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    func_0x000107c61170(uVar1);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100874edc; end: 100874f03; -[SCNavigationService _inflateViewController] */

void FUN_100874edc(long param_1)

{
  func_0x000107c3bddc();
  func_0x000107c61148(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100874f04; end: 100874f33; -[SCSwipeViewContainerViewController childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100874f04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


