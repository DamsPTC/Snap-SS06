/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102643ea4; end: 102643ef7;  */

void FUN_102643ea4(void)

{
  long unaff_x20;
  
  func_0x000102643a50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 102643ef8; end: 1026441bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102643ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1320);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1328) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1330) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112eb1338,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb1340) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1348) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1350) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1358) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1360) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1368) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1370) = param_7;
  FUN_10264a284(param_8,unaff_x20 + _DAT_112eb1378);
  *(undefined8 *)(unaff_x20 + _DAT_112eb1380) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1388) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1390) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1398) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13a0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13a8) = param_14;
  FUN_10264a284(param_15,unaff_x20 + _DAT_112eb13b0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb13b8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13c0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13c8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13d0) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13d8) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13e0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13e8) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13f0) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112eb13f8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1400) = param_25;
  puVar2 = auStack_78;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_15);
  func_0x0001000834e4(param_8);
  return puVar2;
}



/* Entry: 1026441bc; end: 102644763;  */

/* WARNING: Possible PIC construction at 0x00010264424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026442b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026442e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264431c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026443dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264446c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264447c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102644740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102644750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102644550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264468c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026446a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026446b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026446c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026446f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026444a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026446fc) */
/* WARNING: Removing unreachable block (ram,0x0001026446c8) */
/* WARNING: Removing unreachable block (ram,0x0001026446b8) */
/* WARNING: Removing unreachable block (ram,0x000102644690) */
/* WARNING: Removing unreachable block (ram,0x000102644554) */
/* WARNING: Removing unreachable block (ram,0x00010264455c) */
/* WARNING: Removing unreachable block (ram,0x000102644568) */
/* WARNING: Removing unreachable block (ram,0x00010264456c) */
/* WARNING: Removing unreachable block (ram,0x000102644570) */
/* WARNING: Removing unreachable block (ram,0x0001026445e4) */
/* WARNING: Removing unreachable block (ram,0x0001026445ec) */
/* WARNING: Removing unreachable block (ram,0x000102644578) */
/* WARNING: Removing unreachable block (ram,0x000102644580) */
/* WARNING: Removing unreachable block (ram,0x000102644598) */
/* WARNING: Removing unreachable block (ram,0x0001026445c0) */
/* WARNING: Removing unreachable block (ram,0x0001026445ac) */
/* WARNING: Removing unreachable block (ram,0x000102644754) */
/* WARNING: Removing unreachable block (ram,0x000102644744) */
/* WARNING: Removing unreachable block (ram,0x000102644480) */
/* WARNING: Removing unreachable block (ram,0x000102644470) */
/* WARNING: Removing unreachable block (ram,0x0001026443e0) */
/* WARNING: Removing unreachable block (ram,0x00010264472c) */
/* WARNING: Removing unreachable block (ram,0x000102644430) */
/* WARNING: Removing unreachable block (ram,0x000102644320) */
/* WARNING: Removing unreachable block (ram,0x000102644324) */
/* WARNING: Removing unreachable block (ram,0x0001026444cc) */
/* WARNING: Removing unreachable block (ram,0x0001026444e8) */
/* WARNING: Removing unreachable block (ram,0x0001026444ec) */
/* WARNING: Removing unreachable block (ram,0x0001026444f8) */
/* WARNING: Removing unreachable block (ram,0x0001026445f8) */
/* WARNING: Removing unreachable block (ram,0x000102644614) */
/* WARNING: Removing unreachable block (ram,0x0001026446a4) */
/* WARNING: Removing unreachable block (ram,0x00010264468c) */
/* WARNING: Removing unreachable block (ram,0x000102644500) */
/* WARNING: Removing unreachable block (ram,0x000102644760) */
/* WARNING: Removing unreachable block (ram,0x00010264450c) */
/* WARNING: Removing unreachable block (ram,0x00010264434c) */
/* WARNING: Removing unreachable block (ram,0x0001026442ec) */
/* WARNING: Removing unreachable block (ram,0x0001026442b4) */
/* WARNING: Removing unreachable block (ram,0x00010264449c) */
/* WARNING: Removing unreachable block (ram,0x0001026442b8) */
/* WARNING: Removing unreachable block (ram,0x0001026446f4) */
/* WARNING: Removing unreachable block (ram,0x0001026442cc) */
/* WARNING: Removing unreachable block (ram,0x000102644250) */
/* WARNING: Removing unreachable block (ram,0x00010264426c) */
/* WARNING: Removing unreachable block (ram,0x000102644254) */
/* WARNING: Removing unreachable block (ram,0x000102644274) */
/* WARNING: Removing unreachable block (ram,0x00010264425c) */
/* WARNING: Removing unreachable block (ram,0x00010264427c) */
/* WARNING: Removing unreachable block (ram,0x0001026444a4) */
/* WARNING: Removing unreachable block (ram,0x0001026444a8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026441bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb13b8) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb13c0);
    func_0x000107c4c3ac(uVar2);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102644764; end: 1026448bf;  */

/* WARNING: Possible PIC construction at 0x000102644890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102644894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102644764(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112eb13f0)) +
              0x70))();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4df38();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_11052d4c0;
      func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_11052da28;
      func_0x000107c613fc(&UNK_11052da28,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar2;
      *(long *)(puVar4 + 0x20) = param_1;
      puVar3 = &UNK_11052da50;
      func_0x000107c613fc(&UNK_11052da50,0x20,7);
      *(undefined **)(puVar3 + 0x10) = &UNK_10dac5d40;
      *(undefined **)(puVar3 + 0x18) = puVar4;
      func_0x000107c61174(lVar2);
      func_0x000107c61174(param_1);
      func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5d48,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 1026448c0; end: 102644d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026448c0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112eb1338;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar3 = param_1;
    func_0x000107c61434(param_1);
    func_0x000100403a6c();
    func_0x000107c6142c(param_1);
    puVar4 = PTR_PTR_1126b27d8;
    func_0x000107c61168(PTR_PTR_1126b27d8);
    func_0x000107c61174(puVar2);
    func_0x000107c4d634(puVar4);
    puVar5 = PTR_PTR_1126b4370;
    func_0x000107c610f8(PTR_PTR_1126b4370);
    func_0x000107c61174();
    uVar6 = uVar3;
    func_0x000107c5fe08(uVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(uVar3);
    func_0x000107c48f54(puVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(uVar6);
    lVar8 = *(long *)(unaff_x20 + _DAT_112eb1368);
    lVar7 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    func_0x000107c42c1c(lVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102644d1c; end: 102644e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102644d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112eb1340;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112eb1340);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112eb1348);
    func_0x000107c61174(uVar4);
    func_0x000107c5cae4(param_3);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    func_0x000104314d44(param_2,param_3,lVar2,1,0,0,0,0,0);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar1));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102644e60; end: 1026450f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102644e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112eb1338;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_78,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb13c0);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      lVar2 = lVar3;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_3);
      if (lVar2 != 0) {
        uStack_88 = 0;
        uStack_80 = 0xe000000000000000;
        func_0x000107c4077c(lVar2);
        puVar7 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
        puVar6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
        func_0x000107c5fddc(&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x202c,0xe200000000000000);
        func_0x000107c4077c(lVar2);
        uVar9 = param_2;
        func_0x000107c5fddc(param_2,&uStack_88,puVar6,puVar7);
        uVar8 = uStack_80;
        uVar5 = uStack_88;
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c4077c(lVar2);
        func_0x000107c61174(puVar4);
        func_0x00010438ae00(param_2,uVar9,uVar5,uVar8,param_5,puVar4);
        func_0x000107c6142c(uVar8);
        func_0x000107c61170(puVar4);
        puVar6 = &UNK_11052d538;
        func_0x000107c613fc(&UNK_11052d538,0x20,7);
        *(long *)(puVar6 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar6 + 0x18) = uVar5;
        puVar7 = &UNK_11052d560;
        func_0x000107c613fc(&UNK_11052d560,0x20,7);
        *(undefined **)(puVar7 + 0x10) = &UNK_10dac5c20;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        func_0x000107c61174();
        func_0x000107c61174(uVar5);
        uVar8 = 0x12;
        func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5c28,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(uVar8);
        return;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1026450f4; end: 102645183;  */

void FUN_1026450f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645184,uVar2,uVar3);
  return;
}



/* Entry: 102645184; end: 1026451fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102645184(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  lVar2 = *(long *)(lVar1 + _DAT_112eb1380);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  func_0x000107c42c1c(lVar2,param_2,*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001026451f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026451fc; end: 1026453fb;  */

/* WARNING: Possible PIC construction at 0x000102645290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026452ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102645398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026453d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026452f0) */
/* WARNING: Removing unreachable block (ram,0x000102645294) */
/* WARNING: Removing unreachable block (ram,0x000102645298) */
/* WARNING: Removing unreachable block (ram,0x0001026453b0) */
/* WARNING: Removing unreachable block (ram,0x0001026452b0) */
/* WARNING: Removing unreachable block (ram,0x0001026453d4) */
/* WARNING: Removing unreachable block (ram,0x0001026452dc) */
/* WARNING: Removing unreachable block (ram,0x00010264539c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026451fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb13b8) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4c39c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1026453fc; end: 102645497;  */

void FUN_1026453fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645498,uVar2,uVar3);
  return;
}



/* Entry: 102645498; end: 1026456fb;  */

void FUN_102645498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(unaff_x22 + 0x40);
  cVar4 = *(char *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574();
  func_0x000101064e0c();
  func_0x000107c613fc();
  *(undefined8 *)(uStack_50 + 0x18) = 3;
  *(undefined8 *)(uStack_50 + 0x10) = 1;
  FUN_102646c20(uVar5,uVar3,uVar1,uVar2);
  *(undefined8 *)(uStack_50 + 0x20) = uVar5;
  if (cVar4 == '\x01') {
    FUN_102646e78(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
    FUN_1025e8594();
  }
  lVar6 = *(long *)(unaff_x22 + 0x38);
  if (lVar6 != 0) {
    func_0x000107c61174();
    lVar7 = lVar6;
    func_0x000107c4d8a8();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c61170();
      lVar7 = lVar6;
      func_0x000107c5d9e4();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x000107c4f5a0();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar8 != 0) {
          lVar7 = lVar8;
          func_0x000107c49804(lVar8);
          func_0x000107c61170(lVar8);
          lVar8 = lVar6;
          FUN_102646fe0(lVar6,lVar7);
          func_0x000107c61174();
          uVar10 = uStack_50;
          func_0x000107c61550();
          if ((((int)uVar10 == 0) || ((long)uStack_50 < 0)) ||
             (uVar10 = uStack_50, (uStack_50 >> 0x3e & 1) != 0)) {
            if (uStack_50 >> 0x3e == 0) {
              uVar9 = *(ulong *)((uStack_50 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar9 = uStack_50 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uStack_50) {
                uVar9 = uStack_50;
              }
              func_0x000107c60480(uVar9);
            }
            uVar10 = 0;
            FUN_102649990(0,uVar9 + 1,1,uStack_50,&SUB_101064e0c,0x112d56ea0,&PTR_PTR_1126b10a0,
                          FUN_102649ae4);
          }
          uVar11 = uVar10 & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar11 + 0x10);
          uStack_50 = uVar10;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
            uStack_50 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_102649990(uStack_50,uVar9 + 1,1,uVar10,&SUB_101064e0c,0x112d56ea0,&PTR_PTR_1126b10a0
                          ,FUN_102649ae4);
            uVar11 = uStack_50 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
          *(long *)(uVar11 + uVar9 * 8 + 0x20) = lVar8;
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar8);
          goto LAB_10264565c;
        }
      }
    }
    func_0x000107c61170(lVar6);
  }
LAB_10264565c:
  FUN_1026456fc(uStack_50,0,0);
  func_0x000107c6142c(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x000102645698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026456fc; end: 1026458cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026456fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112eb1338;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_68,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000106874f8c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026458d0);
      (*pcVar1)();
    }
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c437a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    pcStack_78 = FUN_102648c24;
    uStack_70 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_101054b14;
    puStack_80 = &UNK_11052d7c0;
    ppuVar5 = &puStack_98;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puVar4;
    func_0x000107c3eae8(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar4);
    if (param_3 == 0) {
      func_0x000107c61174(puVar6);
      param_2 = 0;
    }
    else {
      func_0x000107c61174(puVar6);
      func_0x000107c5fadc(param_2,param_3);
    }
    puVar4 = PTR_PTR_1126b10a8;
    func_0x000107c610f8(PTR_PTR_1126b10a8);
    uVar7 = 0;
    FUN_10264a454(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    func_0x000107c5fc48(param_1,uVar7);
    func_0x000107c46c9c(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c4ee8c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1026458d0; end: 10264595f;  */

void FUN_1026458d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645960,uVar2,uVar3);
  return;
}



/* Entry: 102645960; end: 1026459ff;  */

void FUN_102645960(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574();
  FUN_102645a00();
  lVar2 = lVar1;
  func_0x000101064e0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(long *)(lVar2 + 0x20) = lVar1;
  func_0x000107c61174(lVar1);
  FUN_1026456fc(lVar2,0,0);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026459fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102645a00; end: 102645c43;  */

undefined * FUN_102645a00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar9 = &puStack_70;
  lVar2 = 0x7373656c5f656573;
  func_0x000107c5fadc(0x7373656c5f656573,0xed0000737465705f);
  uVar3 = 0x7375636f4670614d;
  func_0x000107c5fadc(0x7375636f4670614d,0xed00007364726143);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar10 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    puVar6 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    puVar8 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar2,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c4dfd0(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar7 = &UNK_11052d4c0;
    func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_50 = FUN_10264a2c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101054b14;
    puStack_58 = &UNK_11052d7e8;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar7 = puVar8;
    func_0x000107c3eae8(puVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102645c44);
  (*pcVar1)();
}



/* Entry: 102645c44; end: 102645df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102645c44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_112eb1338;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_68,0,0);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  lVar1 = _DAT_112eb1330;
  if (lVar6 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112eb1330) == 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      lVar6 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = param_1;
      *(undefined8 *)(lVar6 + 0x28) = param_2;
      func_0x00010034a38c(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61434(param_2);
      lVar3 = unaff_x20;
      func_0x000107c61174();
      puVar4 = puVar2;
      func_0x000103a28f00(puVar2,lVar3,0xb,lVar6,0);
      func_0x000100083b20(&uStack_70);
      uVar5 = uStack_70;
      puStack_78 = puVar4;
      func_0x00010008a7c8(&uStack_70,&puStack_78);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&puStack_78);
      func_0x000107c61574(uStack_70);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puStack_78;
      func_0x000107c615e8(uVar5);
      lVar6 = *(long *)(unaff_x20 + lVar1);
      if (lVar6 != 0) {
        func_0x000107c615f0(lVar6);
        func_0x000107c4ee7c();
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102645df4; end: 1026461a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102645df4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  int iStack_80;
  char cStack_7c;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112eb1338;
  lVar11 = *(long *)(unaff_x20 + _DAT_112eb1390);
  if (lVar11 == 0) goto LAB_102645ff4;
  puVar9 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,puVar9,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) goto LAB_102645ff4;
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102646180);
    (*pcVar2)();
  }
  lVar3 = lVar4;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c508f0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_3;
      func_0x000107c4d8a8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c4f59c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar5 != 0) {
          lVar3 = lVar5;
          func_0x000107c5faec();
          puVar10 = puVar9;
          func_0x000107c61170(lVar5);
          lVar5 = param_3;
          func_0x000107c4d8a8();
          func_0x000107c61180();
          if (lVar5 == 0) {
LAB_102646030:
            func_0x000107c61170(lVar11);
            func_0x000107c61170(lVar4);
          }
          else {
            lVar6 = lVar5;
            func_0x000107c4a760();
            func_0x000107c61180();
            func_0x000107c61170(lVar5);
            if (lVar6 == 0) goto LAB_102646030;
            lVar5 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            lVar6 = param_3;
            func_0x000107c4d8a8();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar11);
              func_0x000107c61170(lVar4);
            }
            else {
              lVar7 = lVar6;
              func_0x000107c4f5a0();
              func_0x000107c61180();
              func_0x000107c61170(lVar6);
              if (lVar7 != 0) {
                iStack_80 = 0;
                cStack_7c = '\x01';
                func_0x000107c60664(lVar7,&iStack_80);
                func_0x000107c61170(lVar7);
                iVar1 = iStack_80;
                if (cStack_7c != '\x01') {
                  if (iStack_80 == 0) {
                    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
                    puVar8 = &UNK_11052d5d8;
                    func_0x000107c613fc(&UNK_11052d5d8,0x68,7);
                    *(long *)(puVar8 + 0x10) = lVar11;
                    *(long *)(puVar8 + 0x18) = lVar5;
                    *(undefined1 **)(puVar8 + 0x20) = puVar10;
                    *(long *)(puVar8 + 0x28) = lVar3;
                    *(undefined1 **)(puVar8 + 0x30) = puVar9;
                    *(undefined8 *)(puVar8 + 0x38) = 0;
                    *(long *)(puVar8 + 0x40) = lVar4;
                    *(long *)(puVar8 + 0x48) = unaff_x20;
                    *(undefined8 *)(puVar8 + 0x50) = param_1;
                    *(undefined8 *)(puVar8 + 0x58) = param_2;
                    *(long *)(puVar8 + 0x60) = param_3;
                    func_0x000107c61174(lVar11);
                    func_0x000107c61174(lVar4);
                    func_0x000107c61174();
                    func_0x000107c61434(param_2);
                    func_0x000107c61174(param_3);
                    func_0x000104887c7c(0x12,0,0x3c,4,0xd000000000000033,0x800000010ef26dd0,
                                        &UNK_10dac5c58,puVar8);
                    func_0x000107c61170(lVar11);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61574(puVar8);
                    return;
                  }
                  if (iStack_80 != 1) {
                    func_0x000101107304(0);
                    iStack_80 = iVar1;
                    func_0x000107c60614();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1026461a4);
                    (*pcVar2)();
                  }
                  func_0x000107c61170(lVar11);
                  func_0x000107c61170(lVar4);
                  func_0x000107c6142c(puVar9);
                  func_0x000107c6142c(puVar10);
                  goto LAB_102645ff4;
                }
              }
              func_0x000107c61170(lVar11);
              func_0x000107c61170(lVar4);
            }
            func_0x000107c6142c(puVar10);
          }
          func_0x000107c6142c(puVar9);
          goto LAB_102645ff4;
        }
      }
      func_0x000107c61170(lVar11);
      lVar11 = lVar4;
    }
  }
  func_0x000107c61170(lVar11);
LAB_102645ff4:
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 1026461a4; end: 1026461db;  */

void FUN_1026461a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_11;
  *(undefined8 *)(unaff_x22 + 0x90) = param_12;
  *(undefined8 *)(unaff_x22 + 0x80) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026461dc,0,0);
  return;
}



/* Entry: 1026461dc; end: 102646283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026461dc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102646284;
                    /* WARNING: Could not recover jumptable at 0x000102646280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),3,uVar2,lVar3);
  return;
}



/* Entry: 102646284; end: 1026462fb;  */

void FUN_102646284(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xa8) = param_2;
    pcVar1 = FUN_1026462fc;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1026463bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026462fc; end: 1026463bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026462fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long unaff_x22;
  long lVar5;
  
  cVar4 = *(char *)(unaff_x22 + 0xa8);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar4 != '\x01') {
    lVar5 = *(long *)(unaff_x22 + 0xa0);
    lVar1 = *(long *)(unaff_x22 + 0x78) + _DAT_112eb1378;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    if (lVar5 != 0) {
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                (&UNK_11053e480,(undefined8 *)(unaff_x22 + 0x38),&UNK_11053e480,PTR___sSiN_11034deb0
                );
      return;
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),0,
               *(undefined8 *)(unaff_x22 + 0x90),uVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026463b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026463bc; end: 1026463ef;  */

void FUN_1026463bc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001026463ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026463f0; end: 1026465bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026463f0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112eb1338;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_68,0,0);
  lVar5 = unaff_x20 + lVar5;
  func_0x000107c61618();
  lVar1 = _DAT_112eb1328;
  if (lVar5 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112eb1328) == 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      puVar3 = puVar2;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                   **(ulong **)(unaff_x20 + _DAT_112eb13f0)) + 0xb8))();
      if (puVar3 == (undefined *)0x0) {
        FUN_10264a454();
        puVar3 = (undefined *)0x0;
        func_0x000107c60110(0);
      }
      func_0x000107c601c4();
      func_0x000107c61170(puVar3);
      func_0x0001038b6d8c(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar3 = puVar2;
      func_0x0001038b6b00();
      func_0x000100083b20(&uStack_70);
      uVar4 = uStack_70;
      puStack_78 = puVar3;
      func_0x00010008a7c8(&uStack_70,&puStack_78);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(&puStack_78);
      func_0x000107c61574(uStack_70);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puStack_78;
      func_0x000107c615e8(uVar4);
      lVar5 = *(long *)(unaff_x20 + lVar1);
      if (lVar5 != 0) {
        func_0x000107c615f0(lVar5);
        func_0x000107c4ee7c();
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1026465c0; end: 10264664b;  */

void FUN_1026465c0(undefined8 param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10264664c;
  plVar2[0x15] = param_4;
  plVar2[0x16] = param_2;
  *(undefined4 *)((long)plVar2 + 0xcc) = param_5;
  plVar2[0x14] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102646718,0,0);
  return;
}



/* Entry: 10264664c; end: 1026466c7;  */

void FUN_10264664c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026466c8,uVar2,uVar1);
  return;
}



/* Entry: 1026466c8; end: 1026466f7;  */

void FUN_1026466c8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001026466f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026466f8; end: 102646717;  */

void FUN_1026466f8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xcc) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102646718,0,0);
  return;
}



/* Entry: 102646718; end: 102646907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102646718(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  iVar3 = *(int *)(unaff_x22 + 0xcc);
  if (iVar3 == 0) {
    if (*(long *)(*(long *)(unaff_x22 + 0xb0) + _DAT_112eb1390) == 0) {
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
    }
    else {
      FUN_102702d14();
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar6 = param_1, func_0x000101137240(), (param_2 & 1) == 0)) {
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        func_0x000107c6142c(param_1);
      }
      else {
        FUN_10264a284(*(long *)(param_1 + 0x38) + lVar6 * 0x28,unaff_x22 + 0x38);
        func_0x000107c6142c(param_1);
        if (*(long *)(unaff_x22 + 0x50) != 0) {
          lVar6 = *(long *)(unaff_x22 + 0xb0);
          func_0x000101122624(unaff_x22 + 0x38,unaff_x22 + 0x10);
          lVar2 = _DAT_112eb1338;
          func_0x000107c61428(lVar6 + _DAT_112eb1338,unaff_x22 + 0x88,0,0);
          lVar6 = lVar6 + lVar2;
          func_0x000107c61618();
          *(long *)(unaff_x22 + 0xb8) = lVar6;
          if (lVar6 != 0) {
            uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
            lVar2 = *(long *)(unaff_x22 + 0x30);
            func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
            (**(code **)(lVar2 + 0x20))(unaff_x22 + 0x60,uVar1,lVar2);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
            lVar2 = *(long *)(unaff_x22 + 0x80);
            func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
            piVar5 = *(int **)(lVar2 + 8);
            iVar3 = *piVar5;
            plVar4 = (long *)(ulong)(uint)piVar5[1];
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xc0) = plVar4;
            *plVar4 = unaff_x22;
            plVar4[1] = (long)FUN_102646908;
                    /* WARNING: Could not recover jumptable at 0x000102646898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar3 + (long)piVar5))
                      (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8),lVar6,
                       uVar1,lVar2);
            return;
          }
          func_0x0001000834e4(unaff_x22 + 0x10);
          goto LAB_1026468e0;
        }
      }
    }
    FUN_10264a2dc(unaff_x22 + 0x38,0x112e08bb0,&UNK_10d9ddb20);
  }
  else if (iVar3 != 1) {
    func_0x000101107304(0);
    *(int *)(unaff_x22 + 200) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)()
    ;
    return;
  }
LAB_1026468e0:
                    /* WARNING: Could not recover jumptable at 0x0001026468f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102646908; end: 1026469a7;  */

void FUN_102646908(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xc0));
  if (unaff_x20 == 0) {
    uVar1 = 0x102646968;
  }
  else {
    func_0x000107c614ac();
    uVar1 = 0x10264a5fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1026469a8; end: 102646c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026469a8(double param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_a0 [2];
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112eb1338;
  lVar1 = -extraout_x8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1338,auStack_78,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b3530;
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102646c18);
      (*pcVar2)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102646c1c);
      (*pcVar2)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102646c20);
      (*pcVar2)();
    }
    lVar8 = (long)param_1;
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(auStack_80 + lVar1,1,1,lVar5);
    uVar6 = 0;
    func_0x0001043b1a4c(0);
    func_0x000107c610f8();
    *(undefined4 *)((long)alStack_90 + lVar1) = 0;
    *(undefined8 *)((long)auStack_a0 + lVar1) = 0;
    *(undefined8 *)((long)auStack_a0 + lVar1 + 8) = 0xf000000000000000;
    func_0x0001043b1198(uVar6,lVar8,0,0xe000000000000000,0,0xe000000000000000,auStack_80 + lVar1,0,
                        0xf000000000000000);
    func_0x0001043ade18(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar8);
    uVar6 = 0;
    func_0x0001043ad274(0,lVar8,0);
    lVar9 = *(long *)(unaff_x20 + _DAT_112eb13d8);
    lVar5 = lVar9;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar9);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112eb13d0);
    uVar7 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    *(long *)((long)alStack_90 + lVar1) = unaff_x20;
    func_0x000107c3ed6c(uVar10);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c42c1c(lVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar10);
  }
  return;
}



/* Entry: 102646c20; end: 102646e77;  */

undefined * FUN_102646c20(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  lVar2 = param_1;
  lVar3 = param_2;
  func_0x000107c5fadc();
  lVar11 = lVar2;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar11 == 0) {
    lVar10 = 0;
    lVar11 = 0;
    lVar9 = lVar3;
  }
  else {
    lVar10 = lVar11;
    func_0x000107c5faec();
    lVar9 = lVar3;
    func_0x000107c61170();
    lVar2 = lVar11;
    lVar11 = lVar3;
  }
  func_0x0001068751e4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
    lVar4 = lVar2;
    func_0x00010075bbf0();
    *(long *)(lVar2 + 0x40) = lVar4;
    if (lVar11 == 0) {
      func_0x000107c61434(param_2);
      lVar10 = param_1;
      lVar11 = param_2;
    }
    *(long *)(lVar2 + 0x20) = lVar10;
    *(long *)(lVar2 + 0x28) = lVar11;
    lVar11 = lVar9;
    func_0x000107c5fb00(lVar3,lVar9,lVar2);
    func_0x000107c6142c(lVar9);
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar3,lVar11);
    func_0x000107c6142c(lVar11);
    func_0x000107c4dfcc(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar6 = &UNK_11052d4c0;
    func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_11052d938;
    func_0x000107c613fc(&UNK_11052d938,0x38,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    *(long *)(puVar7 + 0x20) = param_2;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    *(undefined8 *)(puVar7 + 0x30) = param_4;
    pcStack_70 = FUN_10264a430;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101054b14;
    puStack_78 = &UNK_11052d950;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar6);
    puVar6 = puVar5;
    func_0x000107c3eae8(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar5);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102646e78);
  (*pcVar1)();
}



/* Entry: 102646e78; end: 102646fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102646e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112eb13c0);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5fadc(param_3,param_4);
    puVar3 = puVar2;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(param_3);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
      func_0x000107c4077c();
      func_0x000101064e0c();
      func_0x000107c613fc();
      *(undefined8 *)(puVar1 + 0x18) = 5;
      *(undefined8 *)(puVar1 + 0x10) = 2;
      puVar2 = &SUB_106874fd4;
      FUN_102647810(param_1,param_2,&SUB_106874fd4,&UNK_11052d870,FUN_10264a35c,&UNK_11052d888);
      *(undefined **)(puVar1 + 0x20) = puVar2;
      puVar2 = &UNK_106874fec;
      FUN_102647810(param_1,param_2,&UNK_106874fec,&UNK_11052d820,0x10264a2d0,&UNK_11052d838);
      func_0x000107c61170(puVar3);
      *(undefined **)(puVar1 + 0x28) = puVar2;
    }
  }
  return puVar1;
}



/* Entry: 102646fe0; end: 10264732b;  */

undefined * FUN_102646fe0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar11 = &puStack_90;
  if (param_2 == 0) {
    uVar13 = 0xe700000000000000;
    uVar14 = 0x796669746f7053;
  }
  else {
    if (param_2 != 1) {
      func_0x000101107304(0);
      puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,param_2);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10264732c);
      (*pcVar1)();
    }
    uVar13 = 0xeb00000000636973;
    uVar14 = 0x754d20656c707041;
  }
  lVar2 = 0x5f6e695f6e65706f;
  func_0x000107c5fadc(0x5f6e695f6e65706f,0xeb00000000707061);
  uVar3 = 0x7375636f4670614d;
  func_0x000107c5fadc(0x7375636f4670614d,0xed00007364726143);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar12 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    lVar5 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar5;
    func_0x00010075bbf0();
    *(long *)(lVar5 + 0x40) = lVar6;
    *(undefined8 *)(lVar5 + 0x20) = uVar14;
    *(undefined8 *)(lVar5 + 0x28) = uVar13;
    uVar13 = uVar12;
    func_0x000107c5fb00(lVar2,uVar12,lVar5);
    func_0x000107c6142c(uVar12);
    puVar7 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    puVar9 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5fadc(lVar2,uVar13);
    func_0x000107c6142c(uVar13);
    func_0x000107c4dfd4(puVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar8 = &UNK_11052d4c0;
    func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar10 = &UNK_11052d8c0;
    func_0x000107c613fc(&UNK_11052d8c0,0x24,7);
    *(undefined **)(puVar10 + 0x10) = puVar8;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(int *)(puVar10 + 0x20) = param_2;
    pcStack_70 = FUN_10264a3a4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101054b14;
    puStack_78 = &UNK_11052d8d8;
    puStack_68 = puVar10;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar8);
    puVar8 = puVar9;
    func_0x000107c3eae8(puVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102647308);
  (*pcVar1)();
}



/* Entry: 10264732c; end: 1026473cf;  */

void FUN_10264732c(long param_1,long param_2)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1026473d0();
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1026473d0; end: 10264780f;  */

void FUN_1026473d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = param_2;
  lVar3 = param_3;
  func_0x000107c5fadc();
  lVar16 = lVar2;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar16 == 0) {
    lVar15 = 0;
    lVar16 = 0;
    lVar5 = lVar3;
  }
  else {
    lVar15 = lVar16;
    func_0x000107c5faec();
    lVar5 = lVar3;
    func_0x000107c61170();
    lVar2 = lVar16;
    lVar16 = lVar3;
  }
  FUN_10265c750();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  if (lVar16 == 0) {
    func_0x000107c61434(param_3);
    lVar16 = param_3;
    lVar15 = param_2;
  }
  *(long *)(lVar3 + 0x20) = lVar15;
  *(long *)(lVar3 + 0x28) = lVar16;
  lVar16 = lVar5;
  func_0x000107c5fb00(lVar2,lVar5,lVar3);
  lVar3 = lVar16;
  func_0x000107c6142c();
  func_0x00010265c820();
  lVar15 = lVar3;
  func_0x000107c5fb00();
  lVar4 = lVar15;
  func_0x000107c6142c(lVar3);
  func_0x00010265c8f0();
  lVar12 = lVar4;
  func_0x000107c5fb00();
  lVar13 = lVar12;
  func_0x000107c6142c(lVar4);
  func_0x00010265c9c0();
  lVar14 = lVar13;
  func_0x000107c5fb00();
  func_0x000107c6142c(lVar13);
  puVar6 = &UNK_11052d4c0;
  func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_11052d988;
  func_0x000107c613fc(&UNK_11052d988,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  *(undefined8 *)(puVar7 + 0x20) = param_5;
  *(undefined8 *)(puVar7 + 0x28) = param_1;
  func_0x000107c6157c(puVar6);
  func_0x000107c61434(param_5);
  func_0x000107c61174();
  func_0x000107c5fadc(lVar3,lVar12);
  func_0x000107c6142c(lVar12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10264a440;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_11052d9a0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar10 = puVar9;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar3);
  puVar7 = puStack_78;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c5fadc(lVar4,lVar14);
  func_0x000107c6142c(lVar14);
  pcStack_80 = FUN_1026484bc;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_11052d9c8;
  ppuVar8 = &puStack_a0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(lVar4);
  puVar6 = puStack_78;
  func_0x000107c61574();
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)((long)puVar6 + 0x18) = 5;
  *(undefined8 *)((long)puVar6 + 0x10) = 2;
  *(undefined **)((long)puVar6 + 0x20) = puVar10;
  *(undefined **)((long)puVar6 + 0x28) = puVar9;
  puVar7 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar9);
  func_0x000107c5fadc(lVar2,lVar16);
  func_0x000107c6142c(lVar16);
  func_0x000107c5fadc(lVar5,lVar15);
  func_0x000107c6142c(lVar15);
  uVar11 = 0;
  FUN_10264a454(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar16 = (long)puVar6;
  func_0x000107c5fc48(puVar6,uVar11);
  func_0x000107c61574(puVar6);
  func_0x000107c48d50(puVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar16);
  func_0x000107c4f018(param_1);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102647810; end: 1026479cb;  */

undefined *
FUN_102647810(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar5 = &puStack_90;
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = puVar3;
  }
  (*param_3)();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c4dfd4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = &UNK_11052d4c0;
    func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000107c613fc(param_4,0x28,7);
    *(undefined **)(param_4 + 0x10) = puVar3;
    *(undefined8 *)(param_4 + 0x18) = param_1;
    *(undefined8 *)(param_4 + 0x20) = param_2;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101054b14;
    uStack_78 = param_6;
    uStack_70 = param_5;
    lStack_68 = param_4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(lStack_68);
    puVar3 = puVar4;
    func_0x000107c3eae8(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026479cc);
  (*pcVar1)();
}



/* Entry: 1026479cc; end: 102647f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026479cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x22);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010ef26fb0);
    puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar3 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c5fddc(param_1,&uStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x2c,0xe100000000000000);
    func_0x000107c5fddc(param_2,&uStack_98,puVar3,puVar4);
    uVar7 = uStack_90;
    func_0x000107c5edd0(puVar10,uStack_98,uStack_90);
    func_0x000107c6142c(uVar7);
    puVar2 = puVar10;
    (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_10264a2dc(puVar10,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar6 = 0;
      func_0x000100dfa6ec(0);
      uVar7 = 0x112d377a8;
      func_0x00010264a31c(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar8 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
      func_0x000107c6142c(puVar5);
      func_0x000107c4de70(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      (**(code **)(lVar11 + 8))(lVar9,lVar1);
    }
    func_0x000107c4200c(param_3);
    lVar1 = param_4 + _DAT_112eb13b0;
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    lVar9 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar7);
    (**(code **)(lVar9 + 0x68))(0,uVar7,lVar9);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102647f74; end: 102647fff;  */

void FUN_102647f74(long param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_102648000();
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102648000; end: 102648117;  */

/* WARNING: Possible PIC construction at 0x0001026480e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026480e4) */

void FUN_102648000(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  
  lVar4 = param_2;
  func_0x000107c4d8a8();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c4f59c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      puVar3 = &UNK_11052d910;
      func_0x000107c613fc(&UNK_11052d910,0x34,7);
      *(undefined8 *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
      *(long *)(puVar3 + 0x20) = lVar2;
      *(long *)(puVar3 + 0x28) = lVar4;
      *(undefined4 *)(puVar3 + 0x30) = param_3;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5d30,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 102648118; end: 10264818b;  */

void FUN_102648118(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_10264818c();
      func_0x000107c61170(param_2);
      param_2 = param_1;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10264818c; end: 102648313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264818c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb13c8);
  func_0x000107c4c440();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x000107c55a9c(lVar4);
    func_0x000107c61170(lVar3);
    puVar5 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    puVar6 = puVar5;
    func_0x00010265ca90();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
    func_0x000107c40930(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000102648578(puVar5);
    lVar2 = unaff_x20 + _DAT_112eb13b0;
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar1);
    (**(code **)(lVar3 + 0x68))(8,uVar1,lVar3);
    func_0x000107c420a8(param_1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102648314; end: 1026483b3;  */

void FUN_102648314(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1026483b4(param_3,param_4);
    func_0x000107c61170(param_2);
  }
  func_0x000107c420a8(param_1);
  func_0x000107c420a8(param_5);
  return;
}



/* Entry: 1026483b4; end: 1026484bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026483b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb13a8) + _DAT_112fcd348);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = &UNK_11052d4c0;
    func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x10264a44c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff4e14;
    puStack_48 = &UNK_11052d9f0;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4d2fc(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1026484bc; end: 1026484c7;  */

void FUN_1026484bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1026484c8; end: 10264868f;  */

void FUN_1026484c8(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x0001068751fc();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102648578);
      (*pcVar1)();
    }
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c409d8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000102648578(puVar2);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102648690; end: 102648727;  */

void FUN_102648690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102648728,uVar2,uVar3);
  return;
}



/* Entry: 102648728; end: 1026487ff;  */

void FUN_102648728(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c420a8(*(undefined8 *)(unaff_x22 + 0x10),param_2,1,0);
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264878c;
  uVar2 = *(undefined4 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  plVar3[0x15] = *(long *)(unaff_x22 + 0x28);
  plVar3[0x16] = lVar4;
  *(undefined4 *)((long)plVar3 + 0xcc) = uVar2;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102646718,0,0);
  return;
}



/* Entry: 102648800; end: 102648a4f;  */

/* WARNING: Possible PIC construction at 0x00010264887c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026488d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026488f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026489cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026489e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026489e8) */
/* WARNING: Removing unreachable block (ram,0x0001026489d0) */
/* WARNING: Removing unreachable block (ram,0x00010264898c) */
/* WARNING: Removing unreachable block (ram,0x0001026488f8) */
/* WARNING: Removing unreachable block (ram,0x0001026488dc) */
/* WARNING: Removing unreachable block (ram,0x000102648904) */
/* WARNING: Removing unreachable block (ram,0x000102648910) */
/* WARNING: Removing unreachable block (ram,0x000102648a24) */
/* WARNING: Removing unreachable block (ram,0x000102648918) */
/* WARNING: Removing unreachable block (ram,0x0001026488e0) */
/* WARNING: Removing unreachable block (ram,0x000102648880) */
/* WARNING: Removing unreachable block (ram,0x000102648884) */
/* WARNING: Removing unreachable block (ram,0x0001026488ac) */
/* WARNING: Removing unreachable block (ram,0x00010264889c) */
/* WARNING: Removing unreachable block (ram,0x0001026488b4) */
/* WARNING: Removing unreachable block (ram,0x000102648a34) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102648800(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb13b8) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4c39c(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102648a50; end: 102648b53;  */

/* WARNING: Possible PIC construction at 0x000102648b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102648b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102648a50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uVar4;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112eb13f0)) +
              0x88))();
  uVar1 = 0;
  FUN_1026e42dc(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    func_0x000107c615e8(param_1);
  }
  else {
    uVar4 = *(ulong *)(*(long *)(lVar2 + _DAT_112eb7b70) + 0x10);
    func_0x000107c615e8(param_1);
    if (1 < uVar4) {
      func_0x00010265cc30();
      goto LAB_102648ae0;
    }
  }
  func_0x00010265cd00();
LAB_102648ae0:
  puVar3 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(param_1,uVar1);
  func_0x000107c40b14(puVar3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102648b54; end: 102648be3;  */

void FUN_102648b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102648be4,uVar2,uVar3);
  return;
}



/* Entry: 102648be4; end: 102648c23;  */

void FUN_102648be4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102648c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102648c24; end: 102648c27;  */

void FUN_102648c24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 102648c28; end: 102648c87; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter init] */

void FUN_102648c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardsRouter",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102648c54);
  (*pcVar1)();
}



/* Entry: 102648c88; end: 102648e7f; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102648cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102648dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102648da8) */
/* WARNING: Removing unreachable block (ram,0x000102648d88) */
/* WARNING: Removing unreachable block (ram,0x000102648d68) */
/* WARNING: Removing unreachable block (ram,0x000102648d48) */
/* WARNING: Removing unreachable block (ram,0x000102648d28) */
/* WARNING: Removing unreachable block (ram,0x000102648d08) */
/* WARNING: Removing unreachable block (ram,0x000102648ce8) */
/* WARNING: Removing unreachable block (ram,0x000102648cc8) */
/* WARNING: Removing unreachable block (ram,0x000102648dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102648c88(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112eb13b0);
  func_0x0001000834e4(param_1 + _DAT_112eb1378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb13c0));
  return;
}



/* Entry: 102648e80; end: 102648f3b;  */

/* WARNING: Possible PIC construction at 0x000102648f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102648f24) */

void FUN_102648e80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_11052d730;
  func_0x000107c613fc(&UNK_11052d730,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  puVar2 = &UNK_11052d758;
  func_0x000107c613fc(&UNK_11052d758,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac5ce0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(uVar3);
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5ce8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102648f3c; end: 102648ff7;  */

/* WARNING: Possible PIC construction at 0x000102648fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102648fdc) */

void FUN_102648f3c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_11052d708;
  func_0x000107c613fc(&UNK_11052d708,0x2c,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined4 *)(puVar1 + 0x28) = param_3;
  func_0x000107c61174(uVar2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac5cd8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102648ff8; end: 10264909b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102648ff8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb1320;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1320,auStack_48,0,0);
  FUN_102649fd8(unaff_x20 + lVar1,&uStack_70);
  FUN_10264a2dc(&uStack_70,0x112d5e820,&UNK_10d925800);
  if (lStack_58 != 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x21,0);
    func_0x00010264982c(&uStack_70,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_88);
  }
  return;
}



/* Entry: 10264909c; end: 1026490a7; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter didEndSnapshot] */

/* WARNING: Possible PIC construction at 0x0001026496c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026496dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026496c4) */
/* WARNING: Removing unreachable block (ram,0x0001026496e0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264909c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026490a8; end: 1026490b3; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010264974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102649768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649750) */
/* WARNING: Removing unreachable block (ram,0x00010264976c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026490a8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026490b4; end: 1026490fb; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter createChatScopeWantsToDismiss:] */

void FUN_1026490b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026490fc; end: 102649107; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter createChatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010264974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102649768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649750) */
/* WARNING: Removing unreachable block (ram,0x00010264976c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026490fc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649108; end: 1026491f7;  */

void FUN_102649108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar1 = &UNK_11052d4c0;
  func_0x000107c613fc(&UNK_11052d4c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11052d600;
  func_0x000107c613fc(&UNK_11052d600,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_40 = FUN_10264a028;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_11052d618;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026491f8; end: 102649253;  */

void FUN_1026491f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102644764(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102649254; end: 1026492bf; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter createChatScope:wantsToDismissWithNewChat:] */

/* WARNING: Possible PIC construction at 0x0001026492a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026492a4) */

void FUN_102649254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102649108(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026492c0; end: 102649353;  */

void FUN_1026492c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102649354,uVar2,uVar3);
  return;
}



/* Entry: 102649354; end: 1026494bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649354(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar2 = PTR_PTR_1126b3530;
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    func_0x000104523254(0);
    func_0x000107c610f8();
    uVar3 = 8;
    func_0x000104522fdc(8,0,1);
    uVar4 = *(undefined8 *)(lVar7 + _DAT_112eb1358);
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    func_0x000104520f00(uVar5,uVar3,lVar7,puVar2);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar4);
    lVar1 = _DAT_112eb1350;
    lVar6 = *(long *)(lVar7 + _DAT_112eb1350);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar7 + lVar1);
      func_0x000107c61174(uVar4);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(uVar4);
    }
    func_0x000107c42c1c(*(undefined8 *)(lVar7 + lVar1));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026494b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026494bc; end: 10264956b; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010264950c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264954c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649510) */
/* WARNING: Removing unreachable block (ram,0x000102649534) */
/* WARNING: Removing unreachable block (ram,0x000102649550) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026494bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112eb1350);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10264956c; end: 102649577; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x00010264974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102649768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649750) */
/* WARNING: Removing unreachable block (ram,0x00010264976c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264956c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649578; end: 102649663; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter didCloseDirectionsSheetWithAction:] */

/* WARNING: Possible PIC construction at 0x000102649620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649624) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = _DAT_112eb1380;
  lVar5 = *(long *)(param_1 + _DAT_112eb1380);
  lVar4 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = lVar4 + _DAT_112eb13b0;
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    lVar2 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar1);
    (**(code **)(lVar2 + 0x60))(param_3,*(undefined8 *)(lVar5 + _DAT_113072cf8),uVar1,lVar2);
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + lVar3));
    func_0x000107c61180();
    lVar4 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 102649664; end: 10264967b; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649664(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb1330);
  *(undefined8 *)(param_1 + _DAT_112eb1330) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10264967c; end: 102649687; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter plusGiftingPageDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001026496c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026496dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026496c4) */
/* WARNING: Removing unreachable block (ram,0x0001026496e0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264967c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649688; end: 102649707;  */

/* WARNING: Possible PIC construction at 0x0001026496c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026496dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026496c4) */
/* WARNING: Removing unreachable block (ram,0x0001026496e0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102649688(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649708; end: 102649713; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x00010264974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102649768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649750) */
/* WARNING: Removing unreachable block (ram,0x00010264976c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649708(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649714; end: 102649793;  */

/* WARNING: Possible PIC construction at 0x00010264974c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102649768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102649750) */
/* WARNING: Removing unreachable block (ram,0x00010264976c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102649714(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102649794; end: 1026497ab; -[_TtC27MapFocusCardsImplementation19MapFocusCardsRouter trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649794(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb1328);
  *(undefined8 *)(param_1 + _DAT_112eb1328) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1026497ac; end: 10264987b;  */

undefined * FUN_1026497ac(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10264987c; end: 10264996b;  */

undefined * FUN_10264987c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10264996c);
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
    puVar3 = (undefined *)0x112eb1030;
    func_0x0001000285a8(0x112eb1030,&UNK_10dac5890);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10264996c; end: 10264998f;  */

ulong FUN_10264996c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102649ae4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1026497ac(uVar2,uVar4,FUN_102641308);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102649ae0);
      (*pcVar1)();
    }
    (*(code *)0x10264a628)(0,uVar2,uVar3 + 0x20,param_4,0x112d5ec90,&PTR_PTR_1126bf100);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102649990; end: 102649ae3;  */

ulong FUN_102649990(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102649ae4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1026497ac(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102649ae0);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102649ae4; end: 102649bff;  */

long FUN_102649ae4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102649bfc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102649c00);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10264a454(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10264a454(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102649bf8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102649c00; end: 102649c23;  */

void FUN_102649c00(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102649990();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102649c24; end: 102649d03;  */

void FUN_102649c24(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102649990();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102649d04; end: 102649d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102649d04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112eb1340;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112eb1340);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
    }
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112eb1348);
    func_0x000107c61174(uVar5);
    func_0x000107c5cae4(uVar7);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000104314d44(uVar6,uVar7,lVar3,1,0,0,0,0,0);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + lVar1));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 102649d2c; end: 102649d7b;  */

void FUN_102649d2c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10264a638;
  plVar5[2] = lVar3;
  plVar5[3] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar3;
  uVar4 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645184,lVar2,uVar4);
  return;
}



/* Entry: 102649d7c; end: 102649deb;  */

void FUN_102649d7c(undefined8 param_1)

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
  plVar3[1] = 0x10264a62c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102649dec; end: 102649e73;  */

void FUN_102649dec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x40);
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x10264a630;
  *(undefined1 *)(plVar10 + 9) = uVar5;
  plVar10[6] = lVar1;
  plVar10[7] = lVar4;
  plVar10[4] = lVar7;
  plVar10[5] = lVar3;
  plVar10[2] = lVar8;
  plVar10[3] = lVar2;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar6 = PTR___sScMMa_11034fc70;
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar10[8] = lVar8;
  uVar9 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar6,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645498,lVar7,uVar9);
  return;
}



/* Entry: 102649e74; end: 102649ee3;  */

void FUN_102649e74(undefined8 param_1)

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
  plVar3[1] = 0x10264a634;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102649ee4; end: 102649f9b;  */

void FUN_102649ee4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  plVar9 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102649f9c;
  plVar9[0x11] = lVar4;
  plVar9[0x12] = lVar8;
  plVar9[0x10] = lVar12;
  plVar9[0xf] = lVar11;
  plVar9[0xd] = lVar7;
  plVar9[0xe] = lVar10;
  plVar9[0xb] = lVar6;
  plVar9[0xc] = lVar3;
  plVar9[9] = lVar5;
  plVar9[10] = lVar2;
  plVar9[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026461dc,0,0);
  return;
}



/* Entry: 102649f9c; end: 102649fd7;  */

void FUN_102649f9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102649fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102649fd8; end: 10264a027;  */

undefined8 FUN_102649fd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d5e820;
  func_0x0001000285a8(0x112d5e820,&UNK_10d925800);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10264a028; end: 10264a03f;  */

void FUN_10264a028(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102644764(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10264a040; end: 10264a08b;  */

void FUN_10264a040(void)

{
  func_0x000107c61168(&PTR_PTR_1128553a0);
  return;
}



/* Entry: 10264a08c; end: 10264a107;  */

void FUN_10264a08c(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10264a644;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar6[2] = lVar4;
  func_0x000107c5fce8();
  plVar6[3] = lVar4;
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_10264664c;
  plVar5[0x15] = lVar7;
  plVar5[0x16] = lVar1;
  *(undefined4 *)((long)plVar5 + 0xcc) = uVar3;
  plVar5[0x14] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102646718,0,0);
  return;
}



/* Entry: 10264a108; end: 10264a153;  */

void FUN_10264a108(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10264a63c;
  plVar4[2] = lVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar5;
  uVar3 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102645960,lVar2,uVar3);
  return;
}



/* Entry: 10264a154; end: 10264a1c3;  */

void FUN_10264a154(undefined8 param_1)

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
  plVar3[1] = 0x10264a640;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10264a1c4; end: 10264a213;  */

void FUN_10264a1c4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10264a64c;
  plVar5[2] = lVar3;
  plVar5[3] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar3;
  uVar4 = 0x112d45220;
  func_0x00010264a31c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102648be4,lVar2,uVar4);
  return;
}



/* Entry: 10264a214; end: 10264a283;  */

void FUN_10264a214(undefined8 param_1)

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
  plVar3[1] = 0x10264a648;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10264a284; end: 10264a2c7;  */

long FUN_10264a284(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10264a2c8; end: 10264a2db;  */

void FUN_10264a2c8(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_10264818c();
      func_0x000107c61170(lVar1);
      lVar1 = param_1;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}


