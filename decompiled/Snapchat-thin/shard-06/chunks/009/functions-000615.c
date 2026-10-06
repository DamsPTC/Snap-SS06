/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fd2d70; end: 104fd2e73; -[SCPlusGiftingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd2d70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_112718d08;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c076220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c102320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  lVar1 = param_1 + _DAT_112718cbc;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126e57a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fd2e74; end: 104fd2ed3; -[SCPlusGiftingEntryPoint _notifyDelegateDidDismissIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd2e74(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112718d0c) & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112718cbc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102240();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd2ed4; end: 104fd2ed7; -[SCPlusGiftingEntryPoint giftingViewControllerDidDismiss:] */

void FUN_104fd2ed4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyDelegateDidDismissIfNeede_112576b68);
  return;
}



/* Entry: 104fd2ed8; end: 104fd2ffb; -[SCPlusGiftingEntryPoint giftingViewController:wantsSwitchToManagementPageWithDidSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd2ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112718d0c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112718d0c) = 1;
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + _DAT_112718cbc;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    func_0x00010bf6f440(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fd2ffc; end: 104fd3183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd2ffc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b3470;
    _objc_alloc();
    lVar11 = (long)_DAT_112718cbc;
    lVar4 = lVar2 + lVar11;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2 + lVar11;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    lVar8 = lVar2 + lVar11;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c10f7c0();
    lVar11 = lVar2 + lVar11;
    _objc_loadWeakRetained(lVar11);
    lVar10 = lVar11;
    func_0x00010bfbc160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056e60(puVar3,param_2,lVar5,lVar7,lVar2,uVar1,lVar9,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar2 + _DAT_112718d08;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c102320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104fd3184; end: 104fd322f; -[SCPlusGiftingEntryPoint plusManagementDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd3184(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + _DAT_112718d0c) = 0;
  lVar4 = (long)_DAT_112718d08;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c076220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c102320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyDelegateDidDismissIfNeede_112576b68);
  return;
}



/* Entry: 104fd3230; end: 104fd3343; -[SCPlusGiftingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd3230(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718cfc,0);
  _objc_destroyWeak(param_1 + _DAT_112718d00);
  _objc_destroyWeak(param_1 + _DAT_112718d08);
  _objc_destroyWeak(param_1 + _DAT_112718cf8);
  _objc_destroyWeak(param_1 + _DAT_112718cf4);
  _objc_destroyWeak(param_1 + _DAT_112718d04);
  _objc_destroyWeak(param_1 + _DAT_112718cd4);
  _objc_destroyWeak(param_1 + _DAT_112718cec);
  _objc_destroyWeak(param_1 + _DAT_112718cc8);
  _objc_destroyWeak(param_1 + _DAT_112718cc4);
  _objc_destroyWeak(param_1 + _DAT_112718cc0);
  _objc_destroyWeak(param_1 + _DAT_112718cd0);
  _objc_destroyWeak(param_1 + _DAT_112718ccc);
  _objc_destroyWeak(param_1 + _DAT_112718ce4);
  _objc_destroyWeak(param_1 + _DAT_112718ce0);
  _objc_destroyWeak(param_1 + _DAT_112718cdc);
  _objc_destroyWeak(param_1 + _DAT_112718cd8);
  _objc_destroyWeak(param_1 + _DAT_112718ce8);
  _objc_destroyWeak(param_1 + _DAT_112718cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718cbc);
  return;
}



/* Entry: 104fd3344; end: 104fd3e7f; -[SCPlusManagementEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd3344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
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
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  undefined *puVar84;
  undefined *puVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  long lVar90;
  
  puVar1 = PTR_PTR_1126b3460;
  _objc_alloc();
  lVar90 = (long)_DAT_112718d10;
  lVar2 = param_1 + lVar90;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar90;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfbc160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027820(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112718d14;
  _objc_loadWeakRetained();
  puVar6 = PTR_PTR_1126b3478;
  _objc_alloc();
  uVar7 = param_1 + lVar90;
  _objc_loadWeakRetained();
  uVar8 = uVar7;
  func_0x00010bf7c180();
  lVar4 = param_1 + _DAT_112718d18;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112718d1c;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112718d20;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112718d24;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112718d28;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_112718d2c;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112718d30;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_112718d34;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0fbf40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112718d38;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112718d3c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112718d40;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_112718d44;
  _objc_loadWeakRetained();
  lVar24 = param_1 + _DAT_112718d48;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112718d4c;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112718d50;
  _objc_loadWeakRetained();
  lVar28 = param_1 + _DAT_112718d54;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_112718d58;
  _objc_loadWeakRetained();
  lVar30 = param_1 + _DAT_112718d5c;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_112718d60;
  _objc_loadWeakRetained();
  lVar32 = param_1 + _DAT_112718d64;
  _objc_loadWeakRetained();
  lVar33 = param_1 + _DAT_112718d68;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_112718d6c;
  _objc_loadWeakRetained();
  lVar35 = param_1 + _DAT_112718d70;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_112718d74;
  _objc_loadWeakRetained();
  lVar37 = param_1 + _DAT_112718d78;
  _objc_loadWeakRetained();
  lVar38 = param_1 + _DAT_112718d7c;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_112718d80;
  _objc_loadWeakRetained();
  lVar40 = param_1 + _DAT_112718d84;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112718d88;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_112718d8c;
  _objc_loadWeakRetained();
  lVar45 = param_1 + _DAT_112718d90;
  _objc_loadWeakRetained();
  lVar46 = param_1 + _DAT_112718d94;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bf1b5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_112718d98;
  _objc_loadWeakRetained();
  lVar49 = param_1 + _DAT_112718d9c;
  _objc_loadWeakRetained();
  lVar50 = param_1 + _DAT_112718da0;
  _objc_loadWeakRetained();
  lVar51 = param_1 + _DAT_112718da4;
  _objc_loadWeakRetained();
  lVar52 = param_1 + _DAT_112718da8;
  _objc_loadWeakRetained();
  lVar53 = param_1 + _DAT_112718dac;
  _objc_loadWeakRetained();
  lVar54 = param_1 + _DAT_112718db0;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_112718db4;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c2591e0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + _DAT_112718db8;
  _objc_loadWeakRetained();
  lVar58 = param_1 + _DAT_112718dbc;
  _objc_loadWeakRetained();
  uVar86 = *(undefined8 *)(param_1 + _DAT_112718dc0);
  lVar59 = param_1 + _DAT_112718dc4;
  _objc_loadWeakRetained();
  uVar87 = *(undefined8 *)(param_1 + _DAT_112718dc8);
  lVar60 = param_1 + _DAT_112718dcc;
  _objc_loadWeakRetained();
  lVar61 = param_1 + _DAT_112718dd0;
  _objc_loadWeakRetained();
  uVar88 = *(undefined8 *)(param_1 + _DAT_112718dd4);
  lVar62 = param_1 + _DAT_112718dd8;
  _objc_loadWeakRetained();
  uVar89 = *(undefined8 *)(param_1 + _DAT_112718ddc);
  lVar63 = param_1 + _DAT_112718de0;
  _objc_loadWeakRetained();
  lVar64 = param_1 + _DAT_112718de4;
  _objc_loadWeakRetained();
  lVar65 = param_1 + _DAT_112718de8;
  _objc_loadWeakRetained();
  lVar66 = param_1 + _DAT_112718e14;
  _objc_loadWeakRetained();
  lVar67 = param_1 + _DAT_112718dec;
  _objc_loadWeakRetained();
  lVar68 = param_1 + _DAT_112718df0;
  _objc_loadWeakRetained();
  lVar69 = param_1 + _DAT_112718df4;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_112718df8;
  _objc_loadWeakRetained();
  lVar72 = lVar71;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010c10f7c0();
  lVar75 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar76 = lVar75;
  func_0x00010bf68940();
  lVar77 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar78 = lVar77;
  func_0x00010c28d8e0();
  lVar79 = param_1 + _DAT_112718dfc;
  _objc_loadWeakRetained();
  lVar80 = param_1 + _DAT_112718e00;
  _objc_loadWeakRetained();
  lVar81 = param_1 + _DAT_112718e04;
  _objc_loadWeakRetained();
  lVar82 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c6c0(puVar6,param_2,uVar8 & 0xffffffff,lVar10,lVar11,lVar5,lVar12,lVar13,lVar14,
                      lVar15,lVar17,lVar18,lVar21,lVar22,lVar23,lVar25,lVar26,lVar27,lVar28,lVar29,
                      lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,lVar37,lVar38,lVar39,lVar41,
                      lVar43,lVar44,lVar45,lVar47,lVar48,lVar49,lVar50,lVar51,lVar52,lVar53,lVar54,
                      lVar56,lVar57,lVar58,uVar86,lVar59,uVar87,lVar60,lVar61,uVar88,lVar62,lVar2,
                      uVar89,lVar63,lVar64,lVar65,lVar66,lVar67,lVar68,lVar70,lVar72,puVar1,lVar74,
                      lVar76,lVar78,lVar79,lVar80,lVar81,lVar83);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar77);
  _objc_release(lVar75);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(uVar7);
  puVar84 = PTR_PTR_1126b3400;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112718e0c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar90;
  _objc_loadWeakRetained(lVar3);
  lVar12 = lVar3;
  func_0x00010c10f7c0();
  func_0x00010c040320(puVar84,param_2,puVar6,lVar5,lVar12);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar90 = param_1 + lVar90;
  _objc_loadWeakRetained();
  lVar4 = lVar90;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar4);
  _objc_release(lVar90);
  param_1 = param_1 + _DAT_112718e10;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0dc900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar85 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar5 = lVar3;
  FUN_104fd2658();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar85,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12de20(lVar3,param_2,puVar85);
  _objc_release(puVar85);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar84);
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd3e80; end: 104fd3f0b; -[SCPlusManagementEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd3e80(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112718d10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e57a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fd3f0c; end: 104fd4257; -[SCPlusManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd3f0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718de4);
  _objc_destroyWeak(param_1 + _DAT_112718de0);
  _objc_storeStrong(param_1 + _DAT_112718e08,0);
  _objc_storeStrong(param_1 + _DAT_112718ddc,0);
  _objc_destroyWeak(param_1 + _DAT_112718d14);
  _objc_storeStrong(param_1 + _DAT_112718dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112718dc4);
  _objc_destroyWeak(param_1 + _DAT_112718dd8);
  _objc_storeStrong(param_1 + _DAT_112718dd4,0);
  _objc_storeStrong(param_1 + _DAT_112718dc8,0);
  _objc_destroyWeak(param_1 + _DAT_112718dcc);
  _objc_destroyWeak(param_1 + _DAT_112718e04);
  _objc_destroyWeak(param_1 + _DAT_112718dec);
  _objc_destroyWeak(param_1 + _DAT_112718e00);
  _objc_destroyWeak(param_1 + _DAT_112718dfc);
  _objc_destroyWeak(param_1 + _DAT_112718df8);
  _objc_destroyWeak(param_1 + _DAT_112718d1c);
  _objc_destroyWeak(param_1 + _DAT_112718df0);
  _objc_destroyWeak(param_1 + _DAT_112718dbc);
  _objc_destroyWeak(param_1 + _DAT_112718db8);
  _objc_destroyWeak(param_1 + _DAT_112718e10);
  _objc_destroyWeak(param_1 + _DAT_112718db0);
  _objc_destroyWeak(param_1 + _DAT_112718da0);
  _objc_destroyWeak(param_1 + _DAT_112718d94);
  _objc_destroyWeak(param_1 + _DAT_112718d30);
  _objc_destroyWeak(param_1 + _DAT_112718db4);
  _objc_destroyWeak(param_1 + _DAT_112718e14);
  _objc_destroyWeak(param_1 + _DAT_112718de8);
  _objc_destroyWeak(param_1 + _DAT_112718dd0);
  _objc_destroyWeak(param_1 + _DAT_112718df4);
  _objc_destroyWeak(param_1 + _DAT_112718dac);
  _objc_destroyWeak(param_1 + _DAT_112718d98);
  _objc_destroyWeak(param_1 + _DAT_112718d90);
  _objc_destroyWeak(param_1 + _DAT_112718d8c);
  _objc_destroyWeak(param_1 + _DAT_112718d88);
  _objc_destroyWeak(param_1 + _DAT_112718d78);
  _objc_destroyWeak(param_1 + _DAT_112718d7c);
  _objc_destroyWeak(param_1 + _DAT_112718d74);
  _objc_destroyWeak(param_1 + _DAT_112718d70);
  _objc_destroyWeak(param_1 + _DAT_112718d6c);
  _objc_destroyWeak(param_1 + _DAT_112718e0c);
  _objc_destroyWeak(param_1 + _DAT_112718d48);
  _objc_destroyWeak(param_1 + _DAT_112718d80);
  _objc_destroyWeak(param_1 + _DAT_112718d2c);
  _objc_destroyWeak(param_1 + _DAT_112718d24);
  _objc_destroyWeak(param_1 + _DAT_112718d40);
  _objc_destroyWeak(param_1 + _DAT_112718d38);
  _objc_destroyWeak(param_1 + _DAT_112718d34);
  _objc_destroyWeak(param_1 + _DAT_112718d28);
  _objc_destroyWeak(param_1 + _DAT_112718d20);
  _objc_destroyWeak(param_1 + _DAT_112718d44);
  _objc_destroyWeak(param_1 + _DAT_112718d9c);
  _objc_destroyWeak(param_1 + _DAT_112718d3c);
  _objc_destroyWeak(param_1 + _DAT_112718d60);
  _objc_destroyWeak(param_1 + _DAT_112718d5c);
  _objc_destroyWeak(param_1 + _DAT_112718d58);
  _objc_destroyWeak(param_1 + _DAT_112718d54);
  _objc_destroyWeak(param_1 + _DAT_112718d50);
  _objc_destroyWeak(param_1 + _DAT_112718d4c);
  _objc_destroyWeak(param_1 + _DAT_112718da8);
  _objc_destroyWeak(param_1 + _DAT_112718d64);
  _objc_destroyWeak(param_1 + _DAT_112718d68);
  _objc_destroyWeak(param_1 + _DAT_112718da4);
  _objc_destroyWeak(param_1 + _DAT_112718d84);
  _objc_destroyWeak(param_1 + _DAT_112718d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718d10);
  return;
}



/* Entry: 104fd4258; end: 104fd47d7; -[SCPlusSubscribeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd4258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  
  puVar1 = PTR_PTR_1126b3460;
  _objc_alloc();
  lVar36 = (long)_DAT_112718e18;
  lVar2 = param_1 + lVar36;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar36;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfbc160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027820(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b3480;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112718e1c;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_112718e20;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112718e24;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112718e28;
  _objc_loadWeakRetained();
  lVar7 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112718e2c;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112718e30;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112718e34;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112718e38;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112718e3c;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_112718e40;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_112718e44;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_112718e48;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112718e4c;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112718e50;
  _objc_loadWeakRetained();
  lVar21 = param_1 + _DAT_112718e54;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112718e58;
  _objc_loadWeakRetained();
  lVar24 = param_1 + _DAT_112718e5c;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_112718e60;
  _objc_loadWeakRetained();
  uVar35 = *(undefined8 *)(param_1 + _DAT_112718e64);
  lVar26 = param_1 + _DAT_112718e68;
  _objc_loadWeakRetained();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112718e6c);
  lVar27 = param_1 + _DAT_112718e70;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c10f7c0();
  func_0x00010c037860(puVar6,param_2,lVar2,lVar4,lVar3,lVar8,lVar9,lVar11,lVar12,lVar14,lVar15,
                      lVar16,lVar17,lVar18,lVar19,lVar20,lVar22,lVar23,lVar24,lVar25,uVar35,lVar26,
                      uVar37,lVar28,puVar1,lVar30,lVar32,param_1);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar33 = PTR_PTR_1126b3400;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112718e74;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c10f7c0();
  func_0x00010c040320(puVar33,param_2,puVar6,lVar3,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar36 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar2 = lVar36;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar36);
  param_1 = param_1 + _DAT_112718e78;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0dc900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar3 = lVar4;
  FUN_104fd2658();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar34,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12de20(lVar4,param_2,puVar34);
  _objc_release(puVar34);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar33);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd47d8; end: 104fd48db; -[SCPlusSubscribeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd47d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_112718e7c;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c076220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c102320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  lVar1 = param_1 + _DAT_112718e18;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126e57b0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fd48dc; end: 104fd493b; -[SCPlusSubscribeEntryPoint _notifyDelegateDidDismissIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd48dc(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112718e80) & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112718e18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102680();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd493c; end: 104fd493f; -[SCPlusSubscribeEntryPoint subscribeViewControllerDidDismiss:] */

void FUN_104fd493c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyDelegateDidDismissIfNeede_112576b68);
  return;
}



/* Entry: 104fd4940; end: 104fd4a63; -[SCPlusSubscribeEntryPoint subscribeViewController:wantsSwitchToManagementPageWithDidSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd4940(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112718e80) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112718e80) = 1;
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + _DAT_112718e18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    func_0x00010bf6f440(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fd4a64; end: 104fd4cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd4a64(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_68;
  
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 == 0) goto LAB_104fd4ca8;
  lVar12 = (long)_DAT_112718e18;
  lVar3 = uVar2 + lVar12;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010be7d620(uVar2,param_2,lVar4,*(undefined1 *)(param_1 + 0x28));
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(uVar2 + (long)_DAT_112718e80) = 0;
    func_0x00010be64720(uVar2);
    goto LAB_104fd4ca8;
  }
  lVar3 = uVar2 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c247760();
  if (lVar6 < 0x10) {
    if (lVar6 == 0xd) {
      uStack_68 = 1;
    }
    else if (lVar6 == 0xf) {
      uStack_68 = 2;
    }
    else {
LAB_104fd4ccc:
      uStack_68 = 0;
    }
  }
  else if (lVar6 == 0x10) {
    uStack_68 = 5;
  }
  else if (lVar6 == 0x18) {
    uStack_68 = 4;
  }
  else {
    if (lVar6 != 0x3e) goto LAB_104fd4ccc;
    uStack_68 = 3;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126b3470;
  _objc_alloc();
  lVar3 = uVar2 + lVar12;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = uVar2 + lVar12;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  lVar6 = uVar2 + lVar12;
  _objc_loadWeakRetained(lVar6);
  lVar10 = lVar6;
  func_0x00010c10f7c0();
  lVar12 = uVar2 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar11 = lVar12;
  func_0x00010bfbc160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056e80(puVar7,param_2,lVar8,lVar9,uVar2,uVar1,lVar10,lVar11,uStack_68);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  lVar3 = uVar2 + (long)_DAT_112718e7c;
  _objc_loadWeakRetained(lVar3);
  lVar12 = lVar3;
  func_0x00010c102320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(puVar7);
LAB_104fd4ca8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fd4cd4; end: 104fd4d7f; -[SCPlusSubscribeEntryPoint plusManagementDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd4cd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + _DAT_112718e80) = 0;
  lVar4 = (long)_DAT_112718e7c;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c076220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c102320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyDelegateDidDismissIfNeede_112576b68);
  return;
}



/* Entry: 104fd4d80; end: 104fd4e9b; -[SCPlusSubscribeEntryPoint _presentPlusManagementPageForContext:didSubscribe:] */

undefined1 FUN_104fd4d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0bf840(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104fd4e9c; end: 104fd4edb;  */

void FUN_104fd4e9c(void)

{
  return;
}



/* Entry: 104fd4edc; end: 104fd503b; -[SCPlusSubscribeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd4edc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718e6c,0);
  _objc_destroyWeak(param_1 + _DAT_112718e70);
  _objc_storeStrong(param_1 + _DAT_112718e64,0);
  _objc_destroyWeak(param_1 + _DAT_112718e68);
  _objc_destroyWeak(param_1 + _DAT_112718e60);
  _objc_destroyWeak(param_1 + _DAT_112718e50);
  _objc_destroyWeak(param_1 + _DAT_112718e78);
  _objc_destroyWeak(param_1 + _DAT_112718e5c);
  _objc_destroyWeak(param_1 + _DAT_112718e30);
  _objc_destroyWeak(param_1 + _DAT_112718e58);
  _objc_destroyWeak(param_1 + _DAT_112718e7c);
  _objc_destroyWeak(param_1 + _DAT_112718e74);
  _objc_destroyWeak(param_1 + _DAT_112718e38);
  _objc_destroyWeak(param_1 + _DAT_112718e34);
  _objc_destroyWeak(param_1 + _DAT_112718e20);
  _objc_destroyWeak(param_1 + _DAT_112718e24);
  _objc_destroyWeak(param_1 + _DAT_112718e1c);
  _objc_destroyWeak(param_1 + _DAT_112718e2c);
  _objc_destroyWeak(param_1 + _DAT_112718e40);
  _objc_destroyWeak(param_1 + _DAT_112718e28);
  _objc_destroyWeak(param_1 + _DAT_112718e44);
  _objc_destroyWeak(param_1 + _DAT_112718e3c);
  _objc_destroyWeak(param_1 + _DAT_112718e48);
  _objc_destroyWeak(param_1 + _DAT_112718e4c);
  _objc_destroyWeak(param_1 + _DAT_112718e54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718e18);
  return;
}



/* Entry: 104fd503c; end: 104fd52c7; -[SCCPlusGiftingProductImpl initWithProduct:recipientUserId:externalId:subscriptionPeriod:storeKitService:performer:] */

undefined8 *
FUN_104fd503c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e57b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000106c6ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x34) = 1;
    *(undefined2 *)(puVar1 + 6) = 1;
    *(undefined1 *)((long)puVar1 + 0x32) = 0;
    uVar2 = puVar1[0xb];
    puVar1[0xb] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = 0;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c2798a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar4 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fd52c8; end: 104fd5417;  */

void FUN_104fd52c8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104fd53a8;
  puStack_40 = &UNK_110860928;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x0001006372a4(param_2,&puStack_58);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0705e0();
  }
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fd5418; end: 104fd557b; -[SCCPlusGiftingProductImpl purchaseWithCallback:] */

void FUN_104fd5418(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11bc00(uVar1,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x104fd54e4;
    puStack_40 = &UNK_110860988;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c297260(uVar2,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fd557c; end: 104fd5583; -[SCCPlusGiftingProductImpl refId] */

undefined8 FUN_104fd557c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104fd5584; end: 104fd558b; -[SCCPlusGiftingProductImpl setRefId:] */

void FUN_104fd5584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104fd558c; end: 104fd5593; -[SCCPlusGiftingProductImpl period] */

undefined8 FUN_104fd558c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104fd5594; end: 104fd55c3; -[SCCPlusGiftingProductImpl setPeriod:] */

void FUN_104fd5594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd55c4; end: 104fd55cb; -[SCCPlusGiftingProductImpl price] */

undefined8 FUN_104fd55c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104fd55cc; end: 104fd55fb; -[SCCPlusGiftingProductImpl setPrice:] */

void FUN_104fd55cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd55fc; end: 104fd5603; -[SCCPlusGiftingProductImpl discount] */

undefined8 FUN_104fd55fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104fd5604; end: 104fd5633; -[SCCPlusGiftingProductImpl setDiscount:] */

void FUN_104fd5604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd5634; end: 104fd563b; -[SCCPlusGiftingProductImpl tier] */

undefined4 FUN_104fd5634(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* Entry: 104fd563c; end: 104fd5643; -[SCCPlusGiftingProductImpl setTier:] */

void FUN_104fd563c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 104fd5644; end: 104fd564b; -[SCCPlusGiftingProductImpl isConsumable] */

undefined1 FUN_104fd5644(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 104fd564c; end: 104fd5653; -[SCCPlusGiftingProductImpl setIsConsumable:] */

void FUN_104fd564c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 104fd5654; end: 104fd565b; -[SCCPlusGiftingProductImpl isFamilyPlan] */

undefined1 FUN_104fd5654(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 104fd565c; end: 104fd5663; -[SCCPlusGiftingProductImpl setIsFamilyPlan:] */

void FUN_104fd565c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 104fd5664; end: 104fd566b; -[SCCPlusGiftingProductImpl isStorage] */

undefined1 FUN_104fd5664(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 104fd566c; end: 104fd5673; -[SCCPlusGiftingProductImpl setIsStorage:] */

void FUN_104fd566c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 104fd5674; end: 104fd567b; -[SCCPlusGiftingProductImpl allowedMemoriesStorageGb] */

undefined8 FUN_104fd5674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104fd567c; end: 104fd56ab; -[SCCPlusGiftingProductImpl setAllowedMemoriesStorageGb:] */

void FUN_104fd567c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd56ac; end: 104fd56b3; -[SCCPlusGiftingProductImpl familyPlanMaxParticipants] */

undefined8 FUN_104fd56ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104fd56b4; end: 104fd56e3; -[SCCPlusGiftingProductImpl setFamilyPlanMaxParticipants:] */

void FUN_104fd56b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd56e4; end: 104fd56eb; -[SCCPlusGiftingProductImpl queueStateObservable] */

undefined8 FUN_104fd56e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104fd56ec; end: 104fd571b; -[SCCPlusGiftingProductImpl setQueueStateObservable:] */

void FUN_104fd56ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd571c; end: 104fd57c3; -[SCCPlusGiftingProductImpl .cxx_destruct] */

void FUN_104fd571c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd57c4; end: 104fd5917; -[SCCPlusGiftingPurchaseServiceImpl initWithStoreKitServices:grpcClientFactory:performerProvider:circumstanceEngine:attributedPage:] */

undefined1 *
FUN_104fd57c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e57c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x000100a15258(param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd5918; end: 104fd59af; -[SCCPlusGiftingPurchaseServiceImpl getAvailibilityWithCallback:] */

void FUN_104fd5918(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104fd59b0;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fd59b0; end: 104fd59ef;  */

void FUN_104fd59b0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x000106c78c58();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000104fd59ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  return;
}



/* Entry: 104fd59f0; end: 104fd5d63; -[SCCPlusGiftingPurchaseServiceImpl fetchProductsWithRecipientUserId:callback:] */

void FUN_104fd59f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c257940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(uVar1);
    _objc_retain(uVar3);
    lVar2 = param_1;
    _objc_opt_class(param_1);
    func_0x00010be117e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x104fd5b68;
    puStack_78 = &UNK_110860a58;
    _objc_retain(param_4);
    uStack_70 = uVar4;
    lStack_58 = param_4;
    _objc_retain(param_3);
    lStack_68 = param_3;
    uStack_60 = uVar3;
    func_0x00010c297260(lVar2,param_2,&puStack_90,*(undefined8 *)(param_1 + 0x10));
    _objc_release(lStack_68);
    _objc_release(lStack_58);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fd5d64; end: 104fd5d6b;  */

void FUN_104fd5d64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_productId_1126231b8);
  return;
}



/* Entry: 104fd5d6c; end: 104fd5e93;  */

void FUN_104fd5d6c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf07460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104fd5e94;
    puStack_60 = &UNK_1108609f8;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lStack_58 = param_2;
    _objc_retain(uVar4);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = uVar1;
    uStack_50 = uVar4;
    func_0x000100504554(uVar1,&puStack_78);
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),uVar2,0);
    _objc_release(uVar2);
    _objc_release(uStack_50);
    param_3 = lStack_58;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fd5e94; end: 104fd5faf;  */

void FUN_104fd5e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c2608a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b34c0;
    _objc_alloc(PTR_PTR_1126b34c0);
    uVar3 = uVar1;
    func_0x00010c0df580(uVar1);
    func_0x00010c2807a0();
    func_0x00010c030620((double)(int)uVar3,puVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126b3490;
    _objc_alloc(PTR_PTR_1126b3490);
    func_0x00010c03a5a0();
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104fd5fb0; end: 104fd6143; -[SCCPlusGiftingPurchaseServiceImpl fetchRedeemProductWithProductIdentifier:promotionalOffer:callback:] */

void FUN_104fd5fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c257940(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c296a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fd6144; end: 104fd6517;  */

void FUN_104fd6144(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar7 = *(code **)(lVar2 + 0x10);
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be7b0;
  }
  else {
    if (param_3 == 0) {
      lVar2 = param_2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c257940(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf8d540();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar8);
        _objc_retain(param_2);
        func_0x00010c297260(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(param_2);
        _objc_release(uVar8);
        _objc_release(uVar9);
        goto LAB_104fd61b4;
      }
    }
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar7 = *(code **)(lVar2 + 0x10);
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be7c8;
  }
  (*pcVar7)(lVar2,0,ppuVar6);
LAB_104fd61b4:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104fd6518; end: 104fd651f; -[SCCPlusGiftingPurchaseServiceImpl presentEmailRequiredDialogIfNeeded] */

undefined8 FUN_104fd6518(void)

{
  return 0;
}



/* Entry: 104fd6520; end: 104fd6617; +[SCCPlusGiftingPurchaseServiceImpl _fetchGiftProductsFromServer:circumstanceEngine:performer:recipientUserId:] */

void FUN_104fd6520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_5);
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fd6618;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_6;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(param_5,param_2,&puStack_68);
  _objc_release(param_5);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fd6618; end: 104fd674b;  */

void FUN_104fd6618(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126b34b0;
  _objc_opt_new(PTR_PTR_1126b34b0);
  func_0x00010c1e83a0();
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fd674c;
  puStack_50 = &UNK_110860ae8;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126b34b8;
  _objc_opt_class(PTR_PTR_1126b34b8);
  func_0x00010c0199c0(puVar2,param_2,&puStack_68,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc16f8,puVar3,puVar5,
                      puVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104fd674c; end: 104fd675f;  */

void FUN_104fd674c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 104fd6760; end: 104fd67a7; -[SCCPlusGiftingPurchaseServiceImpl .cxx_destruct] */

void FUN_104fd6760(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd67a8; end: 104fd7103; -[SCPlusGiftingViewController initWithContext:plusServices:plusSyncServices:storeKitServices:valdiRuntimeProvider:taskManagementServices:grpcClientFactory:composerNetworkingBridgeServices:composerPeopleBridgeFriendmojiServices:composerPeopleBridgeFriendServices:composerPeopleBridgeUserInfoServices:composerCoreUIServices:valdiBlizzardLoggingServices:circumstanceEngine:billboardStringsServices:deepLinkHandlingServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:loggingContext:presentationType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104fd67a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,long param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b34d0;
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104fd7104;
  puStack_78 = &UNK_1108450c8;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104fd7110;
  puStack_a0 = &UNK_110842e18;
  puStack_98 = puVar1;
  puStack_70 = puVar1;
  func_0x00010c0bf740(param_3);
  _objc_release(param_3);
  uVar23 = param_4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfa1900(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000106c6927c(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar23);
  puVar6 = PTR_PTR_1126b33f0;
  _objc_alloc();
  uVar23 = param_7;
  func_0x00010c142e00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  _objc_release(uVar23);
  puVar7 = PTR_PTR_1126b34d8;
  _objc_alloc();
  func_0x00010c037880();
  _objc_release(param_4);
  uVar23 = param_14;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000106c733b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar23);
  uVar23 = param_14;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  uVar2 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar23);
  uVar23 = param_8;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar23;
  func_0x000106c77d90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(uVar23);
  puVar8 = PTR_PTR_1126b34e0;
  _objc_alloc();
  uVar23 = param_8;
  func_0x00010c0f98e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cd40();
  _objc_release(param_6);
  _objc_release(uVar23);
  puVar9 = PTR_PTR_1126b34e8;
  _objc_alloc();
  uVar23 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046960();
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(uVar23);
  uVar23 = param_15;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_15);
  uVar10 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  uVar23 = param_13;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  uVar11 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  puVar12 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar15 = param_12;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  lVar24 = lVar15;
  (**(code **)(lVar15 + 0x10))(lVar15,puVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar15);
  puVar14 = PTR_PTR_1126b1548;
  _objc_alloc();
  func_0x00010c046040();
  lVar24 = param_11;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  lVar15 = lVar24;
  (**(code **)(lVar24 + 0x10))(lVar24,puVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar24);
  puVar17 = PTR_PTR_1126b34f0;
  _objc_alloc(PTR_PTR_1126b34f0);
  func_0x00010c009b60();
  _objc_release(param_18);
  puVar18 = PTR_PTR_1126b34f8;
  _objc_alloc();
  func_0x00010bff7720();
  _objc_release(param_17);
  puVar19 = PTR_PTR_1126b3500;
  _objc_alloc(PTR_PTR_1126b3500);
  uVar23 = param_21;
  FUN_104fd25b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_21);
  func_0x00010c0119c0(puVar19);
  _objc_release(uVar23);
  puVar20 = PTR_PTR_1126b3508;
  _objc_alloc(PTR_PTR_1126b3508);
  func_0x00010c00a2c0();
  func_0x00010c1c1c00(puVar19);
  _objc_release(puVar20);
  func_0x00010c18abe0(puVar19);
  uVar23 = param_8;
  func_0x00010c0f98e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar23;
  func_0x000100a15258();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(uVar23);
  puVar20 = PTR_PTR_1126b3510;
  _objc_alloc(PTR_PTR_1126b3510);
  uVar23 = param_8;
  func_0x00010c0f98e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c04fdc0(puVar20);
  _objc_release(param_16);
  _objc_release(param_5);
  func_0x00010c1bf160(puVar19);
  _objc_release(puVar20);
  _objc_release(uVar23);
  puVar20 = PTR_PTR_1126b3518;
  _objc_alloc(PTR_PTR_1126b3518);
  uVar23 = param_7;
  func_0x00010c142e00(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c061d40(puVar20);
  _objc_release(uVar23);
  puStack_c0 = PTR_PTR_1126e57c8;
  puVar22 = &uStack_c8;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(puVar22,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar20,param_22);
  if (puVar22 != (undefined8 *)0x0) {
    func_0x00010c1c1bc0(puVar6);
    lVar24 = (long)_DAT_112718ed8;
    _objc_retain(puVar6);
    uVar23 = *(undefined8 *)((long)puVar22 + lVar24);
    *(undefined **)((long)puVar22 + lVar24) = puVar6;
    _objc_release(uVar23);
    _objc_storeWeak((long)puVar22 + (long)_DAT_112718edc,param_23);
  }
  _objc_release(puVar20);
  _objc_release(uVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_23);
  return puVar22;
}



/* Entry: 104fd7104; end: 104fd711f;  */

void FUN_104fd7104(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e8a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setRecipientUserId__112657cc0,param_2);
  return;
}



/* Entry: 104fd7120; end: 104fd715b; -[SCPlusGiftingViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd7120(long param_1)

{
  param_1 = param_1 + _DAT_112718edc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcca80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd715c; end: 104fd71a7; -[SCPlusGiftingViewController managementPagePresenter:wantsSwitchToManagementPageWithDidSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd715c(long param_1)

{
  param_1 = param_1 + _DAT_112718edc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcca60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fd71a8; end: 104fd71af; -[SCPlusGiftingViewController presentEmailRequiredDialogIfNeeded] */

undefined8 FUN_104fd71a8(void)

{
  return 0;
}



/* Entry: 104fd71b0; end: 104fd71b7; -[SCPlusGiftingViewController pageViewName] */

undefined8 FUN_104fd71b0(void)

{
  return 0xc6;
}



/* Entry: 104fd71b8; end: 104fd71f3; -[SCPlusGiftingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fd71b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718edc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ed8,0);
  return;
}



/* Entry: 104fd71f4; end: 104fd72c3; -[SCCPlusChatPagePresenterImpl initWithViewControllerProvider:plusImmediateLaunchServices:chatScopeServices:] */

undefined1 *
FUN_104fd71f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e57d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd72c4; end: 104fd737b; -[SCCPlusChatPagePresenterImpl presentChatPageForUserWithUserId:] */

void FUN_104fd72c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fd737c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_retain(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fd737c; end: 104fd751f;  */

void FUN_104fd737c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3528;
  _objc_alloc(PTR_PTR_1126b3528);
  func_0x00010bff5020();
  puVar4 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4,param_2,lVar5,1);
  _objc_release(lVar5);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22b20(uVar8,param_2,puVar6,*(undefined8 *)(param_1 + 0x28),puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010bf37620(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fd7520; end: 104fd7597; -[SCCPlusChatPagePresenterImpl chatScopeDidDismiss:] */

void FUN_104fd7520(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf37620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf37620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104fd7598; end: 104fd75d3; -[SCCPlusChatPagePresenterImpl .cxx_destruct] */

void FUN_104fd7598(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd75d4; end: 104fd7807;  */

void FUN_104fd75d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar1 = param_1;
    func_0x00010bf4cce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf93e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf93e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be810;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be810);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(ppuVar5);
    puVar6 = PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c25d700(PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc1718;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 104fd7808; end: 104fd78c7; -[SCCPlusChatWallpaperProviderImpl initWithConversationServices:conversationIdServices:] */

undefined1 *
FUN_104fd7808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e57d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd78c8; end: 104fd7a07; -[SCCPlusChatWallpaperProviderImpl fetchChatWallpaperForGroupWithGroupId:] */

void FUN_104fd78c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc17d8;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc17d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(ppuVar2,param_2,ppuVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
    func_0x00010bf50600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104fd7a08;
    puStack_60 = &UNK_11085c298;
    _objc_retain(param_3);
    lStack_58 = param_3;
    uStack_50 = uVar1;
    ppuStack_48 = ppuVar2;
    func_0x00010bfa5f80(uVar5,param_2,param_3,&puStack_78);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(ppuVar2);
    _objc_release(lStack_58);
    _objc_release(uVar1);
    ppuVar6 = ppuVar2;
  }
  _objc_release(ppuVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104fd7a08; end: 104fd7af7;  */

void FUN_104fd7a08(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (lVar1 == 0) {
    func_0x00010c0f7fc0(uVar2);
  }
  else {
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104fd7af8; end: 104fd7b07;  */

void FUN_104fd7af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104fd7b08; end: 104fd7b63;  */

void FUN_104fd7b08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf37ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104fd75d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fd7b64; end: 104fd7d6f; -[SCCPlusChatWallpaperProviderImpl fetchChatWallpaperForUserWithUserId:] */

void FUN_104fd7b64(long param_1,undefined **param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc17f8;
    func_0x000106c7723c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(puVar2);
  }
  else {
    ppuVar8 = (undefined **)PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf50420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf504e0(uVar11);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_retain(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar8 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c08fa60();
  _objc_release(ppuVar8);
  if (ppuVar9 == (undefined **)0x0) {
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc1818;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar11);
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    ppuVar8 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bfa5f80(uVar11);
    _objc_release(ppuVar8);
    ppuVar8 = param_2;
  }
  _objc_release(ppuVar8);
  _objc_release(param_2);
  return;
}



/* Entry: 104fd7d70; end: 104fd7f73;  */

void FUN_104fd7d70(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1818;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    ppuVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bfa5f80(uVar3);
    _objc_release(ppuVar1);
    ppuVar1 = param_2;
  }
  _objc_release(ppuVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104fd7f74; end: 104fd7fb3;  */

void FUN_104fd7f74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 0;
  FUN_104fd75d4(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fd7fb4; end: 104fd800f;  */

void FUN_104fd7fb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf37ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104fd75d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fd8010; end: 104fd80a7; -[SCCPlusChatWallpaperProviderImpl observeChatWallpaperForGroupWithGroupId:] */

void FUN_104fd8010(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be67140(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fd80a8; end: 104fd823b; -[SCCPlusChatWallpaperProviderImpl observeChatWallpaperForUserWithUserId:] */

void FUN_104fd80a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x18);
    _objc_retain(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fd823c; end: 104fd84c3;  */

void FUN_104fd823c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_104fd84c4;
  uStack_b0 = 0x104fd84d4;
  uStack_a8 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf50420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010bf504e0(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 104fd84c4; end: 104fd84db;  */

void FUN_104fd84c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fd84dc; end: 104fd866f;  */

void FUN_104fd84dc(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) goto LAB_104fd863c;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    _objc_release(lVar1);
LAB_104fd8624:
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = auStack_48;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar1);
    if (puVar2 == (undefined1 *)0x0) goto LAB_104fd8624;
    puVar2 = auStack_48;
    _objc_loadWeakRetained();
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010be67140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    puVar4 = puVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined1 **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(uVar7);
  }
  _objc_destroyWeak(auStack_48);
LAB_104fd863c:
  _objc_release(param_2);
  return;
}



/* Entry: 104fd8670; end: 104fd867b;  */

void FUN_104fd8670(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 104fd867c; end: 104fd870b;  */

void FUN_104fd867c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 104fd870c; end: 104fd872b;  */

void FUN_104fd870c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 104fd872c; end: 104fd8813; -[SCCPlusChatWallpaperProviderImpl _observeWallpaperForConversationId:] */

void FUN_104fd872c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf50a60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfad7a0(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110860bf8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104fd8814; end: 104fd8933;  */

bool FUN_104fd8814(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf37ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      lVar2 = lVar3;
      func_0x00010bf4cce0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar2 != 0;
      _objc_release();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 104fd8934; end: 104fd896f; -[SCCPlusChatWallpaperProviderImpl .cxx_destruct] */

void FUN_104fd8934(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd8970; end: 104fd8a3b; -[SCCPlusCustomChatColorsServiceImpl initWithCurrentUserId:conversationServices:conversationIdServices:] */

undefined1 *
FUN_104fd8970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e57e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd8a3c; end: 104fd8abb; -[SCCPlusCustomChatColorsServiceImpl getHandlerForGroupWithGroupId:] */

void FUN_104fd8a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3538;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0075a0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b3540;
  func_0x00010c13b080(PTR_PTR_1126b3540,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fd8abc; end: 104fd8c6f; -[SCCPlusCustomChatColorsServiceImpl getHandlerForUserWithUserId:] */

void FUN_104fd8abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126b1588;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 8);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar11);
  _objc_retain(lVar7);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x15;
  lVar9 = 0;
  func_0x0001000819a8(0x15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf504e0(uVar3);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  if (lVar10 == 0) {
    uVar11 = *(undefined8 *)(lVar7 + 0x20);
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc1838;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar11);
  }
  else {
    ppuVar8 = (undefined **)PTR_PTR_1126b3538;
    _objc_alloc(PTR_PTR_1126b3538);
    func_0x00010c0075a0();
    func_0x00010bfbb700(*(undefined8 *)(lVar7 + 0x20));
  }
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 104fd8c70; end: 104fd8d0f;  */

void FUN_104fd8c70(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc1838;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar3);
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126b3538;
    _objc_alloc(PTR_PTR_1126b3538);
    func_0x00010c0075a0();
    func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fd8d10; end: 104fd8d4b; -[SCCPlusCustomChatColorsServiceImpl .cxx_destruct] */

void FUN_104fd8d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fd8d4c; end: 104fd8def; -[SCCPlusDreamsPresenterImpl initWithUIContainer:plusImmediateLaunchServices:] */

undefined1 *
FUN_104fd8d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e57e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fd8df0; end: 104fd8e6f; -[SCCPlusDreamsPresenterImpl presentDreamsCrossSellPage] */

void FUN_104fd8df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8a560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf22ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8a540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


