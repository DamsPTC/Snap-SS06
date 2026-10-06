/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c417a8; end: 105c417ef;  */

void FUN_105c417a8(void)

{
  undefined8 auStack_30 [2];
  
  FUN_105c417f0(auStack_30);
  func_0x000105c4248c();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a54c0(auStack_30[0]);
  func_0x000105c425a0();
  func_0x000105c42340();
  return;
}



/* Entry: 105c417f0; end: 105c41833;  */

void FUN_105c417f0(undefined8 param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x000105c425ac();
  __ZNSt3__18__sp_mut4lockEv();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x21[1] = unaff_x20[1];
  *unaff_x21 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(param_1);
  return;
}



/* Entry: 105c41834; end: 105c419af;  */

void FUN_105c41834(void)

{
  undefined1 *puVar1;
  long *plVar2;
  int extraout_w10;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int aiStack_30 [4];
  
  func_0x000105c42620();
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001052a5474(auStack_80);
  func_0x0001052a549c(aiStack_30,auStack_80);
  func_0x0001052a55c0(auStack_80);
  func_0x0001052a55c0(&uStack_40);
  func_0x0001003b69cc(&uStack_48);
  func_0x0001003b6c18(auStack_60,uStack_48);
  func_0x000105c42244();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a54c0();
  if (aiStack_30[0] == 0) {
    puVar1 = auStack_80;
    FUN_105c41a70(aplStack_a8);
    func_0x000105c42474();
    plVar2 = (long *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000105c42138();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x000105c42138();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    func_0x0001052a549c(plVar2,aiStack_30);
  }
  func_0x000105c423c8();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000105c42178();
      } while (extraout_w10 != 0);
    }
    FUN_105c419b0(auStack_80,&lStack_b8);
    plVar2 = &lStack_b8;
    func_0x0001052a55c0();
  }
  func_0x000105c4262c();
  func_0x0001052a55c0();
  func_0x000105c42614();
  if (plVar2 != (long *)0x0) {
    func_0x000105c42138();
  }
  func_0x000105c4239c();
  func_0x000105c42654();
  if (plVar2 != (long *)0x0) {
    func_0x000105c42138();
  }
  func_0x000105c4241c();
  return;
}



/* Entry: 105c419b0; end: 105c41a6f;  */

void FUN_105c419b0(long param_1,long param_2)

{
  int extraout_w11;
  int extraout_w12;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000105c422e4();
    } while (extraout_w12 != 0);
    do {
      func_0x000105c422d4();
    } while (extraout_w11 != 0);
  }
  func_0x000105c42380();
  FUN_105c41b28();
  func_0x000105c4230c();
  func_0x000105c42340();
  func_0x0001003b8370(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 105c41a70; end: 105c41a93;  */

void FUN_105c41a70(void)

{
  func_0x000105c423b8();
  func_0x000105c42348(&PTR_FUN_1108deca0);
  return;
}



/* Entry: 105c41a94; end: 105c41a97;  */

undefined8 * FUN_105c41a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deca0;
  func_0x0001003b6cec(param_1 + 3);
  return param_1;
}



/* Entry: 105c41a98; end: 105c41aab;  */

void FUN_105c41a98(void)

{
  FUN_105c41afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c41aac; end: 105c41afb;  */

void FUN_105c41aac(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  FUN_105c419b0(param_1 + 8,&uStack_30);
  func_0x000105c42324();
  return;
}



/* Entry: 105c41afc; end: 105c41b27;  */

undefined8 * FUN_105c41afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deca0;
  func_0x0001003b6cec(param_1 + 3);
  return param_1;
}



/* Entry: 105c41b28; end: 105c41b67;  */

void FUN_105c41b28(void)

{
  func_0x000105c42640();
  FUN_105c417f0();
  FUN_105c41b68();
  func_0x000105c42324();
  func_0x000105c42504();
  return;
}



/* Entry: 105c41b68; end: 105c41b8f;  */

void FUN_105c41b68(void)

{
  func_0x000105c425b8();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x000105c424a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 105c41b90; end: 105c41bbf;  */

undefined8 FUN_105c41b90(undefined8 param_1,undefined8 param_2)

{
  FUN_105c41bc0();
  func_0x000105c41be4(param_1,param_2);
  return param_1;
}



/* Entry: 105c41bc0; end: 105c41c67;  */

void FUN_105c41bc0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000105c411c4();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 105c41c68; end: 105c41c9b;  */

void FUN_105c41c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105c41bc0();
  FUN_105c41c9c(param_1,param_3);
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 105c41c9c; end: 105c41cb3;  */

void FUN_105c41c9c(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 105c41cb4; end: 105c41d33;  */

void FUN_105c41cb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = (undefined8 *)**(undefined8 **)*param_1;
  (**(code **)(*(long *)*puVar1 + 0x10))(auStack_30);
  func_0x000105c41cfc(puVar1 + 4,auStack_30);
  func_0x000105c423ec();
  return;
}



/* Entry: 105c41d34; end: 105c420cf;  */

void FUN_105c41d34(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x9;
  int extraout_w11;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 *apuStack_c0 [3];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined1 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined1 auStack_48 [8];
  
  puVar1 = (undefined8 *)(param_1 + 0x280);
  lVar5 = param_1 + 0x368;
  plVar2 = (long *)(param_1 + 0x90);
  if (*(char *)(param_1 + 0x398) == '\0') {
    FUN_105c407d8(param_1 + 0x178,param_1 + 0x1c0);
    lVar8 = *(long *)(param_1 + 0x390);
    func_0x000105c425e8();
    uVar9 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = param_1 + 0x308;
    func_0x0001002acb3c(lVar8);
    FUN_105c42d10(uVar9,lVar8);
    puVar4 = (undefined8 *)(param_1 + 800);
    func_0x000105c4252c();
    uVar9 = *puVar4;
    *(undefined8 *)(param_1 + 0x288) = puVar4[1];
    *puVar1 = uVar9;
    *(undefined8 *)(param_1 + 0x290) = puVar4[2];
    func_0x000105c42284();
    func_0x000105c42600();
    lVar8 = param_1 + 0x208;
    func_0x00010b51ec78(lVar8);
    func_0x000100291d50(param_1 + 0x350,lVar8);
    lVar8 = param_1 + 0x208;
    func_0x00010b4d1758(lVar8,*(undefined8 *)(param_1 + 0x350),
                        *(int *)(param_1 + 0x358) - (int)*(undefined8 *)(param_1 + 0x350));
    func_0x000105c42570();
    *(long *)(param_1 + 0x370) = lVar8;
    *(undefined1 *)(param_1 + 0x378) = 1;
    plVar10 = *(long **)(param_1 + 0x380);
    func_0x000105c424f8();
    (**(code **)(*plVar10 + 0x38))(plVar2,plVar10,puVar1,param_1 + 0x338,param_1 + 0x2a0);
    plVar10 = plVar2;
    FUN_105c417a8();
    if (((ulong)plVar10 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x398) = 1;
      lStack_68 = param_1;
      plStack_60 = plVar2;
      FUN_105c41834(auStack_a8,plVar2,&lStack_68);
      if (lStack_a0 == 0) {
        return;
      }
      do {
        func_0x000105c4244c();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x000105c4240c();
      __ZNSt3__119__shared_weak_count14__release_weakEv(lStack_a0);
      return;
    }
  }
  FUN_105c40888(param_1 + 0x1c0,plVar2);
  func_0x0001052a55c0(plVar2);
  func_0x000105c422fc();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x390) + 0x10);
  func_0x0001002acb3c(lVar5);
  FUN_105c42d44(uVar9,lVar5);
  uVar3 = 0;
  if (*(char *)(param_1 + 0x200) == '\x01') {
    FUN_105c42a04(*(undefined8 *)(*(long *)(param_1 + 0x390) + 0x10),1);
    uVar3 = *(char *)(param_1 + 0x1f8) == '\x01';
    if ((bool)uVar3) {
      puVar7 = (undefined *)(param_1 + 0x1e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8);
    }
    else {
      puVar7 = &DAT_10f332cb8;
      func_0x00010002b838(auStack_a8);
    }
    puVar6 = auStack_a8;
    func_0x0001005d466c();
    *plVar2 = (long)puVar6;
    *(undefined **)(param_1 + 0x98) = puVar7;
    func_0x000105c425dc();
    func_0x0001003a9204(apuStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    auStack_a8[0] = 0;
    uStack_70 = 0;
    func_0x0001002a82b4(&lStack_68,apuStack_c0);
    func_0x000105c421c0(param_1 + 0x208,auStack_a8);
    func_0x0001001148fc(&lStack_68);
    FUN_105c3ce98(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_c0);
  }
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x390) + 0x10);
  puVar6 = (undefined1 *)(param_1 + 0x2c0);
  func_0x0001002acb3c();
  FUN_105c42cdc(uVar9);
  func_0x000105c4258c();
  func_0x0001052a038c(param_1 + 0x1c0);
  func_0x000105c42304();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  func_0x000105c4231c();
  func_0x000105c42598();
  func_0x000105c42314();
  func_0x000105c422f4();
  func_0x000105c423d0();
  if ((bool)uVar3) {
    apuStack_c0[0] = puVar6;
    FUN_105c4120c(param_1 + 0x10,apuStack_c0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_48);
    apuStack_c0[0] = auStack_48;
    FUN_105c410b8(param_1 + 0x10,apuStack_c0);
    __ZNSt13exception_ptrD1Ev(auStack_48);
  }
  func_0x000105c42368();
  func_0x000105c4238c();
  func_0x000105c42540();
  return;
}



/* Entry: 105c420d0; end: 105c42137;  */

void FUN_105c420d0(long param_1)

{
  if (*(char *)(param_1 + 0x398) == '\0') {
    func_0x000105c425e8();
  }
  else {
    if (*(char *)(param_1 + 0x398) == '\x02') goto LAB_105c42120;
    func_0x0001052a55c0(param_1 + 0x90);
    func_0x000105c422fc();
    func_0x000105c42304();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x280);
    func_0x000105c4231c();
  }
  func_0x000105c42598();
  func_0x000105c42314();
  func_0x000105c422f4();
LAB_105c42120:
  func_0x000105c42368();
  func_0x000105c4238c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 105c42138; end: 105c4265f;  */

void FUN_105c42138(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c42140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 105c42660; end: 105c426b3;  */

void FUN_105c42660(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b13dab4(auStack_30);
  func_0x0001052a1980(param_1,auStack_30);
  func_0x0001052a18c8(auStack_30);
  return;
}



/* Entry: 105c426b4; end: 105c4271f;  */

void FUN_105c426b4(void)

{
  return;
}



/* Entry: 105c42720; end: 105c4288f;  */

void FUN_105c42720(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    FUN_105c42890(*(undefined8 *)(param_2 + 0x18),&uStack_b8);
    FUN_105c42890(*(undefined8 *)(param_2 + 0x20),&uStack_d0);
    FUN_105c42890(*(undefined8 *)(param_2 + 0x28),&uStack_e8);
    ppuVar1 = &PTR_PTR_113386420;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
    }
    func_0x000105c426bc(&uStack_58,ppuVar1);
    uVar10 = uStack_a8;
    uVar9 = uStack_b0;
    uVar8 = uStack_b8;
    uVar7 = uStack_c0;
    uVar6 = uStack_c8;
    uVar5 = uStack_d0;
    uVar4 = uStack_d8;
    uVar3 = uStack_e0;
    uVar2 = uStack_e8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    param_1[2] = uVar10;
    param_1[1] = uVar9;
    *param_1 = uVar8;
    uStack_a0 = 0;
    uStack_98 = 0;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    param_1[3] = uVar5;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    param_1[8] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = uStack_44;
    *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack_48,uStack_4c);
    param_1[10] = CONCAT44(uStack_4c,uStack_50);
    param_1[9] = uStack_58;
    *(undefined1 *)(param_1 + 0xd) = 1;
    FUN_105c39a30(&uStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
  }
  return;
}



/* Entry: 105c42890; end: 105c42897;  */

void FUN_105c42890(ulong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 & 0xfffffffffffffffc);
  return;
}



/* Entry: 105c42898; end: 105c428cb;  */

void FUN_105c42898(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108dee08);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c428cc; end: 105c428ff;  */

void FUN_105c428cc(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108dee58);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42900; end: 105c42933;  */

void FUN_105c42900(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108deea8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42934; end: 105c42967;  */

void FUN_105c42934(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108deef8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42968; end: 105c4299b;  */

void FUN_105c42968(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108def48);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c4299c; end: 105c429cf;  */

void FUN_105c4299c(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108def98);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c429d0; end: 105c42a03;  */

void FUN_105c429d0(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108defe8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42a04; end: 105c42a37;  */

void FUN_105c42a04(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df038);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42a38; end: 105c42a6b;  */

void FUN_105c42a38(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df088);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42a6c; end: 105c42a9f;  */

void FUN_105c42a6c(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df0d8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42aa0; end: 105c42ad3;  */

void FUN_105c42aa0(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df128);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42ad4; end: 105c42b07;  */

void FUN_105c42ad4(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df178);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42b08; end: 105c42b3b;  */

void FUN_105c42b08(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df1c8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42b3c; end: 105c42b6f;  */

void FUN_105c42b3c(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df218);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42b70; end: 105c42ba3;  */

void FUN_105c42b70(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df268);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42ba4; end: 105c42bd7;  */

void FUN_105c42ba4(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df2b8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42bd8; end: 105c42c0b;  */

void FUN_105c42bd8(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df308);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42c0c; end: 105c42c3f;  */

void FUN_105c42c0c(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df358);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42c40; end: 105c42c73;  */

void FUN_105c42c40(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df3a8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42c74; end: 105c42ca7;  */

void FUN_105c42c74(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df3f8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42ca8; end: 105c42cdb;  */

void FUN_105c42ca8(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df448);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42cdc; end: 105c42d0f;  */

void FUN_105c42cdc(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df498);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42d10; end: 105c42d43;  */

void FUN_105c42d10(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df4e8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42d44; end: 105c42d77;  */

void FUN_105c42d44(undefined8 param_1)

{
  FUN_105c42f10();
  func_0x000105c42f80(param_1,&UNK_1108df538);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42d78; end: 105c42dab;  */

void FUN_105c42d78(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df588);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42dac; end: 105c42ddf;  */

void FUN_105c42dac(undefined8 param_1)

{
  func_0x000105c42f34();
  func_0x000105c42f78(param_1,&UNK_1108df5d8);
  func_0x000105c42f68();
  return;
}



/* Entry: 105c42de0; end: 105c42e9f;  */

undefined8 * FUN_105c42de0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_1;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001000e3098(auStack_58,&uStack_40,1);
  (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108df628,auStack_58,param_3);
  func_0x000105c42f68();
  puVar1 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000105c42f50();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000105c42f70();
  if ((bRam000000011381aaf8 & 1) == 0) {
    uVar2 = 0x11381aaf8;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x000100077ef8();
      uRam000000011381aaf0 = uVar2;
      ___cxa_guard_release(0x11381aaf8);
    }
  }
  return (undefined8 *)0x11381aaf0;
}



/* Entry: 105c42ea0; end: 105c42f0f;  */

undefined8 FUN_105c42ea0(void)

{
  undefined8 uVar1;
  
  if ((bRam000000011381aaf8 & 1) == 0) {
    uVar1 = 0x11381aaf8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam000000011381aaf0 = uVar1;
      ___cxa_guard_release(0x11381aaf8);
    }
  }
  return 0x11381aaf0;
}



/* Entry: 105c42f10; end: 105c42f87;  */

void FUN_105c42f10(void)

{
  return;
}



/* Entry: 105c42f88; end: 105c42fcf;  */

void FUN_105c42f88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  uStack_21 = param_4;
  FUN_105c42fd0(&uStack_40,param_2,param_3,&uStack_21);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_105c437c4(&uStack_40);
  return;
}



/* Entry: 105c42fd0; end: 105c42ffb;  */

void FUN_105c42fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_105c435d4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 105c42ffc; end: 105c43207;  */

long * FUN_105c42ffc(long *param_1,byte ****param_2,long *param_3,undefined1 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  byte ****ppppbVar6;
  undefined1 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte ***pppbVar11;
  long lVar12;
  byte ***pppbVar13;
  byte ***pppbStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long alStack_180 [34];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_DAT_1108df698;
  pppbVar13 = param_2[1];
  pppbVar11 = *param_2;
  param_1[3] = (long)param_2[2];
  param_1[2] = (long)pppbVar13;
  param_1[1] = (long)pppbVar11;
  param_2[1] = (byte ***)0x0;
  param_2[2] = (byte ***)0x0;
  *param_2 = (byte ***)0x0;
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  uVar4 = bVar1 == 0;
  uVar10 = param_1[2];
  if (-1 < (char)bVar1) {
    uVar10 = (ulong)bVar1;
  }
  if (uVar10 == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    plVar5 = param_1;
    goto LAB_105c43154;
  }
  func_0x000100552c0c(alStack_180,param_1 + 1,8);
  uVar10 = 0;
  pppbStack_198 = (byte ***)0x0;
  lStack_190 = 0;
  uStack_188 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  while( true ) {
    plVar5 = alStack_180;
    param_2 = &pppbStack_198;
    FUN_105c43344(plVar5,param_2,0x2e);
    if ((*(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20) & 5) != 0) break;
    uVar4 = uVar10 == 4;
    if ((bool)uVar4) goto LAB_105c4313c;
    if ((long)uStack_188._7_1_ < 0) {
      lVar8 = lStack_190;
      ppppbVar6 = (byte ****)pppbStack_198;
      if (lStack_190 == 0) goto LAB_105c4313c;
    }
    else {
      if (uStack_188._7_1_ == '\0') goto LAB_105c4313c;
      lVar8 = (long)uStack_188._7_1_;
      ppppbVar6 = &pppbStack_198;
    }
    while (lVar8 != 0) {
      bVar1 = *(byte *)ppppbVar6;
      lVar8 = lVar8 + -1;
      uVar4 = bVar1 - 0x30 == 10;
      ppppbVar6 = (byte ****)((long)ppppbVar6 + 1);
      if (9 < bVar1 - 0x30) goto LAB_105c4313c;
    }
    ppppbVar6 = &pppbStack_198;
    param_2 = (byte ****)0x0;
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (ppppbVar6,0,10);
    if ((ulong)ppppbVar6 >> 0x20 != 0) goto LAB_105c4313c;
    *(int *)((long)&lStack_70 + uVar10 * 4) = (int)ppppbVar6;
    uVar10 = uVar10 + 1;
  }
  uVar4 = uVar10 == 3;
  if (uVar10 < 4) {
LAB_105c4313c:
    uVar7 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    param_1[5] = lStack_68;
    param_1[4] = lStack_70;
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar7;
  while( true ) {
    FUN_105c437ec();
    plVar5 = alStack_180;
    func_0x0001005530d4();
LAB_105c43154:
    lVar8 = param_3[1];
    lVar12 = *param_3;
    param_1[8] = param_3[1];
    param_1[7] = lVar12;
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 9) = param_4;
    func_0x000105c43820(uStack_58);
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
      plVar9 = (long *)0x0;
      if (((char)plVar5[6] == '\x01') && (((ulong)param_2[0xd] & 1) != 0)) {
        if (((int)plVar5[4] == *(int *)(param_2 + 9)) &&
           (*(int *)((long)plVar5 + 0x24) == *(int *)((long)param_2 + 0x4c))) {
          if (*(char *)((long)param_2 + 0x54) == '\x01') {
            plVar9 = (long *)(ulong)(*(int *)(param_2 + 10) == (int)plVar5[5]);
          }
          else {
            plVar9 = (long *)0x1;
          }
        }
        else {
          plVar9 = (long *)0x0;
        }
      }
      return plVar9;
    }
    ___cxa_begin_catch(plVar5);
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    ___cxa_end_catch();
  }
  return param_1;
}



/* Entry: 105c43208; end: 105c4332f;  */

bool FUN_105c43208(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(char *)(param_1 + 0x30) == '\x01') && ((*(byte *)(param_2 + 0x68) & 1) != 0)) {
    if ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x48)) &&
       (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x4c))) {
      if (*(char *)(param_2 + 0x54) == '\x01') {
        bVar1 = *(int *)(param_2 + 0x50) == *(int *)(param_1 + 0x28);
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 105c43330; end: 105c43343;  */

void FUN_105c43330(void)

{
  FUN_105c43598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c43344; end: 105c43533;  */

long * FUN_105c43344(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  undefined8 ***pppuStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 uStack_71;
  undefined8 ***pppuStack_70;
  char cStack_61;
  
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_61,param_1,1);
  if (cStack_61 == '\x01') {
    func_0x0001001a5598(param_2);
    lVar4 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
    lVar1 = lVar4;
    func_0x000100610bac();
    while ((int)lVar1 != -1) {
      ppppuVar2 = *(undefined8 *****)(lVar4 + 0x18);
      ppppuVar5 = *(undefined8 *****)(lVar4 + 0x20);
      if (ppppuVar2 == *(undefined8 *****)(lVar4 + 0x20)) {
        uStack_71 = (undefined1)lVar1;
        ppppuVar2 = (undefined8 ****)&uStack_71;
        ppppuVar5 = &pppuStack_70;
      }
      pppuStack_90 = &pppuStack_70;
      puStack_88 = &uStack_71;
      lStack_80 = lVar4;
      pppuStack_70 = ppppuVar2;
      func_0x0001003b0798(ppppuVar2,param_3,(long)ppppuVar5 - (long)ppppuVar2);
      if (ppppuVar2 != (undefined8 ****)0x0) {
        ppppuVar5 = ppppuVar2;
      }
      func_0x000105c437f4();
      uVar6 = 0x7ffffffffffffff6 - extraout_x8;
      if (uVar6 <= (ulong)((long)ppppuVar5 - (long)pppuStack_70)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppuStack_70,uVar6);
        func_0x000105c43568(&pppuStack_90,uVar6);
        uVar3 = 4;
        goto LAB_105c4349c;
      }
      func_0x0001000da738(param_2,pppuStack_70,ppppuVar5);
      func_0x000105c43568(&pppuStack_90,(long)ppppuVar5 - (long)pppuStack_70);
      if (ppppuVar2 != (undefined8 ****)0x0) {
        func_0x000105c43568(&pppuStack_90,1);
        uVar3 = 0;
        goto LAB_105c4349c;
      }
      lVar1 = lVar4;
      func_0x000100610bac();
    }
    func_0x000105c437f4();
    uVar3 = 6;
    if (extraout_x8_00 != 0) {
      uVar3 = 2;
    }
LAB_105c4349c:
    func_0x000100456940((long)param_1 + *(long *)(*param_1 + -0x18),uVar3);
  }
  return param_1;
}



/* Entry: 105c43534; end: 105c43547;  */

void FUN_105c43534(void)

{
  func_0x0001005530d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c43548; end: 105c43597;  */

long FUN_105c43548(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  func_0x000100553090(lVar1,&PTR_PTR_1108df750);
  func_0x000107c60dd8(lVar2 + 0x78);
  return lVar1;
}



/* Entry: 105c43598; end: 105c435d3;  */

undefined8 * FUN_105c43598(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108df698;
  func_0x000105c3a318(param_1 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 105c435d4; end: 105c4367b;  */

undefined1 *
FUN_105c435d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105c4367c(auStack_50,1);
  FUN_105c436d4(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000105c437b4();
  func_0x000105c43820(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105c437b4();
  func_0x000105c43818();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_105c436a4();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 105c4367c; end: 105c436a3;  */

long FUN_105c4367c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105c436a4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105c436a4; end: 105c436d3;  */

undefined8 * FUN_105c436a4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108df7e8;
  FUN_105c43740(param_1 + 3);
  return param_1;
}



/* Entry: 105c436d4; end: 105c43717;  */

undefined8 * FUN_105c436d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108df7e8;
  FUN_105c43740(param_1 + 3);
  return param_1;
}



/* Entry: 105c43718; end: 105c4371b;  */

void FUN_105c43718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108df7e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c4371c; end: 105c4372f;  */

void FUN_105c4371c(void)

{
  FUN_105c437a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c43730; end: 105c4373f;  */

void FUN_105c43730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c43738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105c43740; end: 105c437a3;  */

undefined8
FUN_105c43740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
  FUN_105c42ffc(param_1,auStack_48,param_3,*param_4);
  FUN_105c437ec();
  return param_1;
}



/* Entry: 105c437a4; end: 105c437c3;  */

void FUN_105c437a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108df7e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c437c4; end: 105c437eb;  */

long FUN_105c437c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c437ec; end: 105c43833;  */

void FUN_105c437ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 105c43834; end: 105c43933; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController initWithValdiRuntime:featureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c43834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec710;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010bea98e0(puVar1);
    lVar5 = (long)_DAT_112732a48;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732a4c);
    *(undefined **)((long)puVar1 + (long)_DAT_112732a4c) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3b9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732a50);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112732a50) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c43934; end: 105c439e3; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112732a50;
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + _DAT_112732a54);
  uStack_40 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105c439e4;
  puStack_68 = PTR_PTR_1126ec710;
  puStack_70 = puVar2;
  uStack_60 = uVar4;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(puVar2 + _DAT_112732a44) = puVar3;
  _objc_release(puVar1);
  return;
}



/* Entry: 105c439e4; end: 105c43a53; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c439e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec710;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112732a44) = puVar2;
  _objc_release(puVar1);
  return;
}



/* Entry: 105c43a54; end: 105c43a5b; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController pageViewName] */

undefined8 FUN_105c43a54(void)

{
  return 0x6a;
}



/* Entry: 105c43a5c; end: 105c43a67; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController defaultProjectNameV2] */

undefined ** FUN_105c43a5c(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 105c43a68; end: 105c43adf; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105c43a68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112732a50);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 105c43ae0; end: 105c43ae3; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController cardToExpandTransition] */

void FUN_105c43ae0(void)

{
  return;
}



/* Entry: 105c43ae4; end: 105c43ae7; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController cardTransitionWillBeginWithView:] */

void FUN_105c43ae4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doDismiss_11255eeb0);
  return;
}



/* Entry: 105c43ae8; end: 105c43aeb; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController cardTransitionDidUpdateProgress:] */

void FUN_105c43ae8(void)

{
  return;
}



/* Entry: 105c43aec; end: 105c43b3f; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_105c43aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c43b40; end: 105c43b43; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController preferredStatusBarStyle] */

undefined8 FUN_105c43b40(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105c43b44; end: 105c43b4b; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_105c43b44(void)

{
  return 1;
}



/* Entry: 105c43b4c; end: 105c43b53; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_105c43b4c(void)

{
  return 0;
}



/* Entry: 105c43b54; end: 105c43bbf; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController _setUpPullToDismissTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43b54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010b837400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112732a54;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setModalPresentationStyle__11264fd08,0);
  return;
}



/* Entry: 105c43bc0; end: 105c43d23; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController _initializeRecentlyActiveIndicatorSettingsViewWithValdiRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c34c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_112732a48;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122820();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3be0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112732a4c);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122820();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c34d0;
  _objc_alloc(PTR_PTR_1126c34d0);
  func_0x00010be5b6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar4,param_2,puVar1,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c43d24; end: 105c43e6f; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController _makeComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43d24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126c34d8;
  _objc_opt_new(PTR_PTR_1126c34d8);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c43e70;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1d2060(puVar1);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c1d3540(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732a4c);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8600(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c43e70; end: 105c43ecf;  */

void FUN_105c43e70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c43ed0; end: 105c43f23; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController _doDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c43f24; end: 105c43faf; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController _handleSettingsChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732a48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e85e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732a4c);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c43fb0; end: 105c4400f; -[SCFriendingRecentlyActiveIndicatorSettingsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c43fb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732a50,0);
  _objc_storeStrong(param_1 + _DAT_112732a4c,0);
  _objc_storeStrong(param_1 + _DAT_112732a48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732a54,0);
  return;
}



/* Entry: 105c44010; end: 105c4420b; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider initWithComposerServices:featureSettingsServices:] */

undefined8 *
FUN_105c44010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126ec718;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010c2a4c00(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aeaf0;
    _objc_alloc();
    puVar5 = puVar4;
    FUN_105c443d0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_105c443d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_initWeak(auStack_68,puVar1);
    puVar5 = PTR_PTR_1126aeae8;
    _objc_alloc();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0435e0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar5;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c4420c; end: 105c44253;  */

void FUN_105c4420c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7dfe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c44254; end: 105c4425b; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider sectionRow] */

void FUN_105c44254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1564b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_sectionRow_112633348)
  ;
  return;
}



/* Entry: 105c4425c; end: 105c44263; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider rowViewModel] */

void FUN_105c4425c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1422d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_rowViewModel_11262e2d0);
  return;
}



/* Entry: 105c44264; end: 105c4426b; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider handleWithContext:] */

void FUN_105c44264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_handleWithContext__1125d2608);
  return;
}



/* Entry: 105c4426c; end: 105c44393; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider _presentRecentlyActiveIndicatorSettingsPageWithContext:] */

void FUN_105c4426c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfa2b80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c295440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c34e0;
  _objc_alloc(PTR_PTR_1126c34e0);
  func_0x00010c05fc40();
  func_0x00010c1c8b80();
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c038f40(puVar5,param_2,uVar2,1);
  _objc_release(uVar2);
  func_0x00010bf0c980(puVar5,param_2,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105c44394; end: 105c443cf; -[SCFriendingRecentlyActiveIndicatorSettingsRowProvider .cxx_destruct] */

void FUN_105c44394(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c443d0; end: 105c443e7;  */

void FUN_105c443d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e23658;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e23658,
                      &PTR____CFConstantStringClassReference_110e23678,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


