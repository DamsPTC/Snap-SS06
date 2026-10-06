/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077bd250; end: 1077bd29b;  */

long FUN_1077bd250(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0xb0) {
    func_0x0001077bd29c(param_3,param_1);
    param_3 = param_3 + 0xb0;
    lVar1 = lVar1 + 0xb0;
  }
  return lVar1;
}



/* Entry: 1077bd530; end: 1077bd543;  */

void FUN_1077bd530(void)

{
  func_0x0001077bd8b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bd958; end: 1077bd9b7;  */

void FUN_1077bd958(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  
  do {
    if ((param_2 & 0xff) == 0) {
      return;
    }
    uVar1 = (int)param_2 - 1;
    param_2 = (ulong)uVar1;
    param_3 = param_3 >> 1 & 0x7fffffff;
    param_4 = param_4 >> 1 & 0x7fffffff;
    lVar2 = param_1 + 0x40;
    func_0x0001077bd160(lVar2,((param_4 << (param_2 & 0x3f)) + param_3) * 0x20 + (ulong)(byte)uVar1)
    ;
  } while (lVar2 == 0);
  return;
}



/* Entry: 1077bdafc; end: 1077bdb07;  */

undefined ** FUN_1077bdafc(void)

{
  return &PTR_DAT_1109dbf78;
}



/* Entry: 1077bde04; end: 1077bde2b;  */

void FUN_1077bde04(undefined8 param_1)

{
  func_0x0001077beab8();
  func_0x0001077bea20(param_1,&PTR_DAT_1109dc0d0);
  func_0x0001077be974();
  return;
}



/* Entry: 1077be204; end: 1077be23b;  */

void FUN_1077be204(void)

{
  func_0x0001077be1c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be3c4; end: 1077be577;  */

void FUN_1077be3c4(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long lVar6;
  int extraout_w10;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_160 [24];
  undefined8 uStack_148;
  long lStack_140;
  undefined1 auStack_138 [72];
  undefined4 auStack_f0 [16];
  undefined1 auStack_b0 [64];
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = param_1;
  func_0x0001077be83c();
  lVar6 = *(long *)(lVar7 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x20);
  uStack_68 = extraout_x8;
  while (bVar2 = lVar7 == lVar6 + 0x28, !bVar2) {
    puVar8 = (undefined8 *)*param_3;
    Hint_Prefetch(*puVar8,0,2,0);
    puVar3 = puVar8;
    func_0x0001072a02f8(*puVar8,puVar8,lVar7 + 0x20);
    func_0x00010731d5d4(puVar8,lVar7 + 0x20,puVar3);
    if (puVar8 != (undefined8 *)0x0) {
      func_0x00010729c0e4(*(long *)(param_1 + 8) + 0x20,param_3);
      lVar5 = lVar7 + 0x20;
      lVar4 = param_2;
      func_0x00010731d598(param_2,lVar5);
      if (lVar4 == 0) {
        auStack_f0[0] = 7;
      }
      else {
        func_0x000107268350(auStack_f0,lVar5 + 0x38);
      }
      func_0x000107268350(auStack_b0,auStack_f0);
      uStack_70 = 1;
      func_0x0001077beb9c();
      uVar1 = *(undefined8 *)(param_1 + 8);
      lStack_140 = *(long *)(param_1 + 0x10);
      uStack_148 = uVar1;
      if (lStack_140 != 0) {
        do {
          func_0x0001077be93c();
        } while (extraout_w10 != 0);
      }
      func_0x00010729963c(auStack_138,auStack_b0);
      func_0x0001077bde90(auStack_f0,uVar1,lVar7 + 0x48,auStack_138);
      func_0x000107386170(auStack_160,param_2,lVar7 + 0x20,auStack_f0);
      func_0x0001077beb9c();
      func_0x000107267ed0(auStack_138);
      func_0x0001077be318(&uStack_148);
      func_0x000107267ed0(auStack_b0);
    }
    func_0x00010002c7d4();
  }
  func_0x0001077be7ec(uStack_68);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x0001077beb9c();
    func_0x000107267ed0(auStack_138);
    func_0x0001077be318(&uStack_148);
    func_0x000107267ed0(auStack_b0);
    func_0x0001077be8c4();
    func_0x0001077beab8();
    func_0x0001077bea20();
    func_0x0001077be974();
    return;
  }
  return;
}



/* Entry: 1077be6ac; end: 1077be6af;  */

void FUN_1077be6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077bee28; end: 1077bef07;  */

undefined8 * FUN_1077bee28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001077bef08(auStack_50,param_2,param_3);
  func_0x0001077bf474(&uStack_40,auStack_50);
  *param_1 = &PTR_DAT_1109db730;
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[3] = &PTR_PTR_1131ada40;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_107783258;
  func_0x0001074f7454(&uStack_40);
  func_0x0001077bf7d8();
  *param_1 = &PTR_DAT_1109dc270;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  func_0x00010726ed14(param_1 + 0x10);
  param_1[0x12] = param_1;
  return param_1;
}



/* Entry: 1077bf278; end: 1077bf27f;  */

void FUN_1077bf278(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0x80);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077bf404; end: 1077bf417;  */

void FUN_1077bf404(void)

{
  func_0x0001077bf454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bf518; end: 1077bf727;  */

long * FUN_1077bf518(long *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x21;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001077bf790();
  puVar4 = (undefined *)param_1[1];
  uStack_38 = extraout_x8;
  if (*(long *)(param_2 + 0x10) == 0) {
    if ((param_2[0x19] & 1) != 0) goto LAB_1077bf658;
    in_ZR = param_2[0x18] == '\x01';
    if (!(bool)in_ZR) {
      puVar1 = *(undefined8 **)(param_2 + 0x20);
      lVar3 = (long)*(char *)((long)puVar1 + 0x17);
      puVar2 = puVar1;
      if (lVar3 < 0) {
        puVar2 = (undefined8 *)*puVar1;
        lVar3 = puVar1[1];
      }
      uVar6 = *(undefined8 *)(puVar4 + 8);
      func_0x0001078ba1ec(auStack_88,puVar2,lVar3);
      func_0x0001077bf7c8(&lStack_50);
      lVar3 = lStack_40;
      func_0x0001077bf7e0();
      func_0x0001077bf828(lVar3 + 0x18,uVar6,auStack_88);
      lVar3 = lStack_40;
      lStack_40 = 0;
      unaff_x21 = lVar3 + 0x18;
      func_0x0001077bf464(&lStack_50);
      lStack_50 = 0;
      uStack_48 = 0;
      func_0x0001077bf280(&lStack_50);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_48 = *(undefined8 *)(puVar4 + 0x10);
      lStack_50 = *(long *)(puVar4 + 8);
      *(long *)(puVar4 + 8) = unaff_x21;
      *(long *)(puVar4 + 0x10) = lVar3;
      func_0x0001074f7454(&lStack_50);
      func_0x00010750000c(&uStack_60);
      func_0x0001077bf280(&uStack_70);
      func_0x00010724e5f4(auStack_88);
      goto LAB_1077bf63c;
    }
    plVar5 = *(long **)(puVar4 + 0x18);
    param_2 = &UNK_10f42a35c;
    __ZNSt13runtime_errorC1EPKc(&lStack_50);
    func_0x0001077bf7bc();
    func_0x0001077bf780(*(undefined8 *)(*plVar5 + 0x20));
  }
  else {
    plVar5 = *(long **)(puVar4 + 0x18);
    param_2 = (undefined *)(*(long *)(param_2 + 0x10) + 8);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (&lStack_50);
    func_0x0001077bf7bc();
    func_0x0001077bf780(*(undefined8 *)(*plVar5 + 0x20));
  }
  func_0x0001077bf7b4();
  param_1 = &lStack_50;
  __ZNSt13runtime_errorD1Ev();
LAB_1077bf658:
  while( true ) {
    func_0x0001077bf76c(uStack_38);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
    func_0x0001077bf464(&lStack_50);
    func_0x00010724e5f4(auStack_88);
    ___cxa_begin_catch(param_1);
    plVar5 = *(long **)(puVar4 + 0x18);
    __ZSt17current_exceptionv(auStack_88);
    func_0x0001077bf780(*(undefined8 *)(*plVar5 + 0x20));
    func_0x0001077bf7b4();
    ___cxa_end_catch();
LAB_1077bf63c:
    puVar4[0x20] = 1;
    param_1 = *(long **)(puVar4 + 0x18);
    param_2 = puVar4;
    (**(code **)(*param_1 + 0x10))();
  }
  __Unwind_Resume(param_1);
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc378);
  param_1 = param_1 + 1;
  if ((int)param_2 == 0) {
    param_1 = (long *)0x0;
  }
  return param_1;
}



/* Entry: 1077bf8d8; end: 1077bf903;  */

void FUN_1077bf8d8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1077bfd08; end: 1077bfe2f;  */

void FUN_1077bfd08(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  int iVar6;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077c07ec();
  lVar7 = *(long *)(param_2 + 8);
  uStack_38 = extraout_x8_00;
  func_0x0001077c0818(&uStack_50);
  puVar5 = puStack_40;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_1109dc430;
  func_0x0001077b706c(puStack_40 + 3,lVar7);
  puVar5[3] = &PTR_DAT_1109dc538;
  iVar6 = (int)lVar7 + 0x80;
  func_0x0001077c078c(puVar5 + 0x13);
  puVar4 = puStack_40;
  *(undefined2 *)(puVar5 + 0x22) = *(undefined2 *)(lVar7 + 0xf8);
  puStack_40 = (undefined8 *)0x0;
  func_0x0001077c0004(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077bfe38(&uStack_50);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar5 = &uStack_50;
  func_0x0001077b57e8();
  func_0x0001077c0820();
  func_0x0001077c07d8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      func_0x0001077c0804();
    }
    else {
      func_0x0001077b70d0(puVar4 + 3);
      __ZNSt3__119__shared_weak_countD2Ev(puVar4);
      func_0x0001077c0004(&uStack_50);
    }
    func_0x000104bd46a0(puVar5);
    func_0x000107346060(puVar5 + 0x18);
    if (extraout_x8 != 0) {
      do {
        func_0x00010734740c();
      } while (extraout_w11 != 0);
    }
    func_0x0001073269a0();
    func_0x0001073460e8();
    return;
  }
  return;
}



/* Entry: 1077bffc0; end: 1077bffc3;  */

void FUN_1077bffc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc430;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c0144; end: 1077c016f;  */

undefined8 * FUN_1077c0144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc490;
  func_0x000104c2f714(param_1 + 2);
  return param_1;
}



/* Entry: 1077c04f0; end: 1077c0663;  */

void FUN_1077c04f0(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 auStack_170 [16];
  undefined1 uStack_160;
  undefined1 auStack_158 [16];
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [144];
  undefined1 auStack_a0 [88];
  int iStack_48;
  undefined8 uStack_38;
  
  func_0x0001077c07ec();
  uStack_38 = extraout_x8;
  func_0x000107326d6c(auStack_a0,0,0x400,0);
  uVar1 = *(char *)(param_2 + 0x17) == '\0';
  func_0x0001075222a8();
  if (iStack_48 == 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    auStack_158[0] = 0;
    uStack_148 = 0;
    auStack_170[0] = 0;
    uStack_160 = 0;
    auStack_190[0] = 0;
    uStack_178 = 0;
    func_0x0001075375e8(auStack_130,&uStack_140,auStack_158,auStack_170,auStack_190);
    func_0x0001001148fc(auStack_190);
    func_0x000107323f70(auStack_170);
    func_0x000107323ef8(auStack_158);
    func_0x000107323f90(&uStack_140);
    func_0x0001077c0680(param_1,auStack_a0,param_3,auStack_130);
    func_0x000107324968(auStack_130);
  }
  else {
    func_0x000107878d14(auStack_130,auStack_a0);
    func_0x000100066230(param_3,auStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  func_0x000107326ea8(auStack_a0);
  func_0x0001077c07d8(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107324968(auStack_130);
  func_0x000107326ea8(auStack_a0);
  func_0x0001077c0804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077c08b8; end: 1077c0907;  */

undefined8 * FUN_1077c08b8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077b706c();
  *puVar1 = &PTR_DAT_1109dc538;
  func_0x000107564e10(puVar1 + 0x10,param_3);
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_2 + 0xf8);
  return param_1;
}



/* Entry: 1077c0a88; end: 1077c0ad7;  */

void FUN_1077c0a88(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077c0bcc(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x0001077c0bf4((undefined8 *)(param_1 + 8),auStack_30);
  func_0x0001077c13fc();
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_1);
  return;
}



/* Entry: 1077c0dc4; end: 1077c0e33;  */

long FUN_1077c0dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001077c1374();
  uStack_38 = extraout_x8;
  func_0x0001077c1440(auStack_50);
  func_0x0001077c0e8c(lStack_40,param_2,param_3);
  func_0x0001077c1398();
  func_0x0001077c0f24();
  func_0x0001077c1354(uStack_38);
  if ((bool)in_ZR) {
    return lStack_40;
  }
  ___stack_chk_fail();
  func_0x0001077c1404();
  func_0x0001077c0f24();
  lVar1 = lStack_40;
  func_0x0001077c13c0();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x0001077c0e5c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1077c0f14; end: 1077c0f33;  */

void FUN_1077c0f14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dc5d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c1044; end: 1077c1053;  */

void FUN_1077c1044(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077c12b4; end: 1077c12db;  */

void FUN_1077c12b4(void)

{
  func_0x0001077c1428();
  func_0x0001077c12dc();
  return;
}



/* Entry: 1077c1964; end: 1077c1a2b;  */

void FUN_1077c1964(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x0001077b5880(param_1,6,param_2,1);
  *param_1 = &PTR_DAT_1109dc670;
  uVar1 = *param_3;
  param_1[0x11] = param_3[1];
  param_1[0x10] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



/* Entry: 1077c1d14; end: 1077c1d37;  */

bool FUN_1077c1d14(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1077c1e70; end: 1077c1eef;  */

undefined1 * FUN_1077c1e70(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001077c2804();
  lVar4 = 1;
  uStack_28 = extraout_x8;
  func_0x0001077c1db4(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_1109dc6d0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &UNK_10e52b660;
  puStack_30[5] = 0;
  puStack_30[6] = 0;
  puStack_30[4] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001077c1e40();
  func_0x0001077c27e8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = *(long *)(lVar4 + 0x18);
  if (lVar3 == 0) {
    *(undefined8 *)(puVar2 + 0x18) = 0;
  }
  else if (lVar3 == lVar4) {
    func_0x0001077c2828();
  }
  else {
    func_0x0001077c28ac();
    *(long *)(puVar2 + 0x18) = lVar3;
  }
  return puVar2;
}



/* Entry: 1077c2118; end: 1077c22b3;  */

void FUN_1077c2118(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x0001077c2804();
  uStack_28 = extraout_x8;
  func_0x000107284284(auStack_d8,lVar1 + 8);
  uVar2 = param_1 + 8;
  func_0x0001072842e4();
  if ((uVar2 & 1) != 0) {
    func_0x0001077c2038(auStack_68,param_1 + 0x68);
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 == (long *)0x0) {
      func_0x0001077c1708(*(undefined8 *)(param_1 + 0x60),auStack_48,*(undefined8 *)(param_1 + 0x30)
                          ,param_1 + 0x24);
    }
    else {
      (**(code **)(*plVar3 + 0x30))(auStack_c8,plVar3,param_1 + 0x20);
      func_0x0001077c1708(*(undefined8 *)(param_1 + 0x60),auStack_48,auStack_c8,param_1 + 0x24);
      func_0x00010738ebc8(auStack_c8);
    }
    plVar3 = (long *)(param_1 + 8);
    func_0x00010728433c();
    func_0x0001077c236c(auStack_c8,auStack_68);
    puStack_70 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x48;
    __Znwm();
    *puVar4 = &PTR_DAT_1109dc790;
    func_0x0001077c236c(puVar4 + 1,auStack_c8);
    puStack_70 = puVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_88);
    func_0x0001006393ec(auStack_88);
    func_0x0001077c239c(auStack_c8);
    func_0x0001077c239c(auStack_68);
  }
  func_0x000107270b00(auStack_d8);
  func_0x0001077c27e8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738ebc8(auStack_c8);
  func_0x0001077c23c4(auStack_68);
  func_0x000107270b00(auStack_d8);
  do {
    func_0x0001077c2874();
  } while( true );
}



/* Entry: 1077c2464; end: 1077c249b;  */

undefined8 FUN_1077c2464(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  func_0x0001077c2564();
  return uVar1;
}



/* Entry: 1077c26b8; end: 1077c26ff;  */

undefined8 * FUN_1077c26b8(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    func_0x000107324d80(param_1);
  }
  return param_1;
}



/* Entry: 1077c2a78; end: 1077c2a7b;  */

undefined8 * FUN_1077c2a78(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 0x1a);
  func_0x0001072aca78(param_1 + 0x17);
  func_0x000107563b08(param_1 + 8);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077c2e5c; end: 1077c2e7f;  */

void FUN_1077c2e5c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077c2e80(&uStack_11,param_1);
  return;
}



/* Entry: 1077c2fe0; end: 1077c304b;  */

undefined8 * FUN_1077c2fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001074fffa0(&uStack_30);
  return param_1;
}



/* Entry: 1077c33fc; end: 1077c3483;  */

void FUN_1077c33fc(void)

{
  return;
}



/* Entry: 1077c3668; end: 1077c36db;  */

long FUN_1077c3668(long param_1)

{
  func_0x0001077c3934(param_1 + 8);
  func_0x0001077c3984(param_1,0);
  return param_1;
}



/* Entry: 1077c38c0; end: 1077c3903;  */

void FUN_1077c38c0(long param_1)

{
  func_0x0001077c3a1c();
  func_0x0001077c4ae0();
  func_0x0001077c3a54();
  if (param_1 != 0) {
    func_0x0001077c3a10();
  }
  return;
}



/* Entry: 1077c39f4; end: 1077c3a0f;  */

void FUN_1077c39f4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107410da4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c4084; end: 1077c4177;  */

void FUN_1077c4084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auStack_a0[0] = 0x1c;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110996720;
  uStack_78 = 0;
  uStack_60 = 0x1c;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
  uStack_a8 = 0;
  uStack_c0 = **(undefined8 **)(param_1 + 0x28);
  uStack_b8 = 3;
  func_0x00010743fa9c(*(undefined8 **)(param_1 + 0x28),auStack_a0,&uStack_b0,&uStack_c0,7);
  uStack_b0 = 0;
  __ZNSt13exception_ptraSERKS_(param_1 + 0x3b8,&uStack_b0);
  __ZNSt13exception_ptrD1Ev(&uStack_b0);
  (**(code **)(**(long **)(param_1 + 0x3a8) + 0x30))();
  func_0x0001001a5598(param_1 + 0x50);
  func_0x0001077c4178(param_1,param_2,param_3);
  func_0x000107262330(auStack_a0);
  return;
}



/* Entry: 1077c5908; end: 1077c593f;  */

undefined8 FUN_1077c5908(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  func_0x0001077c91e8();
  if (plVar1 < (long *)(param_1[1] - *param_1 >> 3)) {
    uVar2 = *(undefined8 *)(*param_1 + (long)plVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1077c5c14; end: 1077c5ce7;  */

void FUN_1077c5c14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  func_0x0001077c9de8();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    if (unaff_x19 == puVar2) {
      uVar3 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar3;
      *param_3 = 0;
      param_3[1] = 0;
      unaff_x20[1] = (long)(puVar2 + 2);
    }
    else {
      func_0x0001077ca14c();
      func_0x000107524ec4();
      func_0x0001077c9f9c();
    }
  }
  else {
    plVar1 = unaff_x20;
    func_0x000107470638();
    func_0x0001074706bc(auStack_58,plVar1,(long)unaff_x19 - *unaff_x20 >> 4,
                        (ulong *)(param_1 + 0x10));
    func_0x0001077c65d0(auStack_58,param_3);
    func_0x000107524f30();
    func_0x0001077c9f78();
    func_0x000107470858();
  }
  return;
}



/* Entry: 1077c5f38; end: 1077c5fd3;  */

void FUN_1077c5f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *extraout_x8;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_3;
  func_0x0001077ca30c();
  __ZNSt13exception_ptraSERKS_(param_1 + 0x3b8,uVar1);
  plVar2 = *(long **)(unaff_x20 + 0x3a8);
  __ZNSt13exception_ptrC1ERKS_(auStack_38,param_3);
  func_0x0001077c9ffc(*(undefined8 *)(*plVar2 + 0x20));
  (*extraout_x8)();
  __ZNSt13exception_ptrD1Ev(auStack_38);
  plVar2 = *(long **)(unaff_x20 + 0x3a8);
  __ZNSt13exception_ptrC1ERKS_(auStack_40,param_3);
  (**(code **)(*plVar2 + 0x60))(plVar2,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  return;
}



/* Entry: 1077c6304; end: 1077c636f;  */

void FUN_1077c6304(long param_1)

{
  func_0x0001077ca398();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077c6534; end: 1077c654f;  */

void FUN_1077c6534(long param_1)

{
  func_0x0001077c6550();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1077c6e6c; end: 1077c6ff3;  */

bool FUN_1077c6e6c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x19;
  ulong *unaff_x20;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  func_0x0001077c9e24();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    iVar7 = (int)unaff_x20[-2];
    func_0x0001077c9f84();
    if (iVar7 != 0) {
      func_0x0001077ca1b8();
    }
    break;
  case 3:
    func_0x0001077c6cec();
    break;
  case 4:
    func_0x0001077c6d7c();
    break;
  case 5:
    func_0x0001077c6ddc();
    break;
  default:
    func_0x0001077ca284();
    lVar6 = 0;
    iVar7 = 0;
    for (puVar4 = (ulong *)(unaff_x19 + 0x30); puVar4 != unaff_x20; puVar4 = puVar4 + 2) {
      iVar2 = (int)*puVar4;
      func_0x0001077c9e74();
      if (iVar2 != 0) {
        uVar8 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        lVar5 = lVar6;
        do {
          lVar1 = unaff_x19 + lVar5;
          func_0x00010747cf60(lVar1 + 0x30,lVar1 + 0x20);
          if (lVar5 == -0x20) break;
          uVar3 = uVar8;
          func_0x000104c2fc44(uVar8,*(undefined8 *)(lVar1 + 0x10));
          lVar5 = lVar5 + -0x10;
        } while ((uVar3 & 1) != 0);
        func_0x00010747cf60();
        iVar7 = iVar7 + 1;
        func_0x0001077c9f94();
        if (iVar7 == 8) {
          return puVar4 + 2 == unaff_x20;
        }
      }
      lVar6 = lVar6 + 0x10;
    }
  }
  return true;
}



/* Entry: 1077c71f4; end: 1077c7207;  */

void FUN_1077c71f4(void)

{
  func_0x0001077c7214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c731c; end: 1077c74ff;  */

void FUN_1077c731c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined **appuStack_60 [3];
  undefined1 auStack_48 [24];
  
  func_0x0001077c7588(auStack_98,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x0001077c7608();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = lVar3 + 0x50;
    func_0x0001000e107c(lVar2,param_1 + 0x28);
    if (((int)lVar2 != 0) &&
       ((*(char *)(lVar3 + 0x20) != '\x01' || ((*(byte *)(lVar3 + 0x21) & 1) == 0)))) {
      if (*(long *)(param_2 + 0x10) == 0) {
        if (((*(byte *)(param_2 + 0x19) & 1) == 0) && ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
          func_0x0001077c4178(lVar3,*(undefined8 *)(param_2 + 0x20),*(undefined1 *)(param_1 + 0x24))
          ;
        }
      }
      else {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_78,&UNK_10f42a426,lVar3 + 0x50);
        func_0x00010048a6c8(appuStack_60,auStack_78,&UNK_10f42903a);
        func_0x000100610910(auStack_48,appuStack_60,*(long *)(param_2 + 0x10) + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_60);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
        plVar4 = *(long **)(lVar3 + 0x3a8);
        func_0x000107781a84(appuStack_60,auStack_48);
        appuStack_60[0] = &PTR_DAT_1109dcb68;
        func_0x00010bdb1468(auStack_80,appuStack_60);
        func_0x0001077ca0dc(*(undefined8 *)(*plVar4 + 0x58));
        __ZNSt13exception_ptrD1Ev(auStack_80);
        __ZNSt13runtime_errorD2Ev(appuStack_60);
        plVar4 = *(long **)(lVar3 + 0x3a8);
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (auStack_78,*(long *)(param_2 + 0x10) + 8);
        func_0x0001052b2bd0(auStack_88,auStack_78);
        (**(code **)(*plVar4 + 0x60))(plVar4,auStack_88);
        __ZNSt13exception_ptrD1Ev(auStack_88);
        __ZNSt13runtime_errorD1Ev(auStack_78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      }
    }
  }
  func_0x0001077c9e38();
  return;
}



/* Entry: 1077c76d8; end: 1077c8287;  */

void FUN_1077c76d8(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar11;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *unaff_x21;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_390 [16];
  undefined8 *apuStack_380 [5];
  undefined1 auStack_358 [48];
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [24];
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  long *plStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_228;
  undefined1 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_70;
  
  func_0x0001077c9d20();
  uStack_70 = extraout_x8;
  func_0x0001077c7588(auStack_390,param_1 + 8);
  iVar3 = (int)param_1 + 8;
  func_0x0001077c7608();
  if (iVar3 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(param_2 + 0x400) == 0) {
      *(undefined2 *)(puVar13 + 4) = 0;
      func_0x0001077c4a5c(puVar13 + 0x21,param_2 + 0xb0);
      puVar13[0x32] = *(undefined8 *)(param_2 + 0x138);
      uVar26 = *(undefined8 *)(param_2 + 0x148);
      uVar7 = *(undefined8 *)(param_2 + 0x140);
      uVar28 = *(undefined8 *)(param_2 + 0x158);
      uVar27 = *(undefined8 *)(param_2 + 0x150);
      *(undefined1 *)(puVar13 + 0x37) = *(undefined1 *)(param_2 + 0x160);
      puVar13[0x34] = uVar26;
      puVar13[0x33] = uVar7;
      puVar13[0x36] = uVar28;
      puVar13[0x35] = uVar27;
      if ((*(byte *)(puVar13 + 0x78) & 1) == 0) {
        func_0x0001077c4a98(puVar13 + 0x1c);
        unaff_x21 = *(long **)(param_2 + 0x50);
        for (plVar17 = *(long **)(param_2 + 0x48); plVar17 != unaff_x21; plVar17 = plVar17 + 1) {
          lStack_318 = *plVar17;
          *plVar17 = 0;
          plStack_270 = (long *)((ulong)plStack_270 & 0xffffffffffffff00);
          uStack_238 = uStack_238 & 0xffffffffffffff00;
          func_0x0001077c4ae0(puVar13,&lStack_318,&plStack_270);
          func_0x00010724b3d8(&plStack_270);
          lVar9 = lStack_318;
          lStack_318 = 0;
          if (lVar9 != 0) {
            func_0x0001077c9d14();
          }
        }
      }
      func_0x000107475128(&puStack_310,1);
      puVar19 = puStack_300;
      puStack_300[1] = 0;
      puStack_300[2] = 0;
      *puStack_300 = &PTR_DAT_1109b2eb8;
      plVar21 = puStack_300 + 3;
      puStack_300[4] = 0;
      *plVar21 = 0;
      puStack_300[6] = 0;
      puStack_300[5] = 0;
      *(undefined4 *)(puStack_300 + 7) = *(undefined4 *)(param_2 + 0x80);
      func_0x00010752dbdc(plVar21,*(undefined8 *)(param_2 + 0x68));
      plVar17 = (long *)(param_2 + 0x70);
LAB_1077c7874:
      puVar4 = puStack_300;
      plVar17 = (long *)*plVar17;
      if (plVar17 != (long *)0x0) {
        plVar11 = puVar19 + 6;
        func_0x000100102e7c(plVar11,plVar17 + 2);
        plVar14 = (long *)puVar19[4];
        plVar24 = plVar11;
        plVar18 = unaff_x21;
        unaff_x21 = plVar11;
        if (plVar14 != (long *)0x0) {
          uVar22 = (long)plVar14 - 1;
          if (((ulong)plVar14 & uVar22) == 0) {
            unaff_x21 = (long *)(uVar22 & (ulong)plVar11);
          }
          else if (plVar14 <= plVar11) {
            func_0x0001077ca3c4();
          }
          plVar23 = *(long **)(*plVar21 + (long)unaff_x21 * 8);
          plVar18 = unaff_x21;
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto LAB_1077c7918;
                plVar8 = (long *)plVar23[1];
                if (plVar8 != plVar11) break;
                plVar24 = plVar23 + 2;
                func_0x0001000e107c(plVar24,plVar17 + 2);
                if (((ulong)plVar24 & 1) != 0) goto LAB_1077c7874;
              }
              if (((ulong)plVar14 & uVar22) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar22);
              }
              else if (plVar14 <= plVar8) {
                uVar5 = 0;
                if (plVar14 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar14;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar14);
              }
            } while (plVar8 == unaff_x21);
          }
        }
LAB_1077c7918:
        func_0x0001077c9fa4();
        uStack_260 = 0;
        *plVar24 = 0;
        plVar24[1] = (long)plVar11;
        plStack_270 = plVar24;
        puStack_268 = puVar19 + 5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (plVar24 + 2,plVar17 + 2);
        lVar9 = plVar17[6];
        lVar16 = plVar17[5];
        plVar24[6] = plVar17[6];
        plVar24[5] = lVar16;
        if (lVar9 != 0) {
          do {
            func_0x0001077c9f5c();
          } while (extraout_w10 != 0);
        }
        fVar25 = (float)lVar16;
        uStack_260 = CONCAT71(uStack_260._1_7_,1);
        func_0x0001077ca3b0();
        if ((plVar14 == (long *)0x0) ||
           (unaff_x21 = plVar18, (float)uVar27 * (float)plVar14 < fVar25)) {
          func_0x0001077ca378();
          func_0x0001077ca188();
          func_0x00010752dbdc(plVar21);
          plVar14 = (long *)puVar19[4];
          if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
            unaff_x21 = (long *)((long)plVar14 - 1U & (ulong)plVar11);
          }
          else {
            unaff_x21 = plVar11;
            if (plVar14 <= plVar11) {
              func_0x0001077ca3c4();
              unaff_x21 = plVar18;
            }
          }
        }
        plVar11 = *(long **)(*plVar21 + (long)unaff_x21 * 8);
        if (plVar11 == (long *)0x0) {
          func_0x0001077ca170();
          if (extraout_x10 != 0) {
            plVar11 = *(long **)(extraout_x10 + 8);
            if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)plVar14 - 1U);
            }
            else if (plVar14 <= plVar11) {
              uVar22 = 0;
              if (plVar14 != (long *)0x0) {
                uVar22 = (ulong)plVar11 / (ulong)plVar14;
              }
              plVar11 = (long *)((long)plVar11 - uVar22 * (long)plVar14);
            }
            *(undefined8 *)(extraout_x9 + (long)plVar11 * 8) = extraout_x8_00;
          }
        }
        else {
          *plStack_270 = *plVar11;
          *plVar11 = (long)plStack_270;
        }
        func_0x0001077ca158();
        func_0x00010752ddd4();
        goto LAB_1077c7874;
      }
      puStack_300 = (undefined8 *)0x0;
      puVar19 = puVar4 + 3;
      func_0x00010747524c(&puStack_310);
      puStack_2a8 = puVar4;
      puStack_2b0 = puVar19;
      func_0x0001077ca358();
      func_0x00010747090c();
      puVar12 = puStack_2a8;
      puVar4 = puStack_2b0;
      puStack_2b0 = (undefined8 *)0x0;
      puStack_2a8 = (undefined8 *)0x0;
      puStack_310 = (undefined8 *)0x0;
      puStack_308 = (undefined8 *)0x0;
      puStack_268 = (undefined8 *)puVar13[0x68];
      plVar11 = (long *)puVar13[0x67];
      puVar13[0x68] = puVar12;
      puVar13[0x67] = puVar4;
      plStack_270 = plVar11;
      func_0x000107410d14(&plStack_270);
      func_0x000107410d14(&puStack_310);
      func_0x00010747090c(&puStack_2b0);
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_DAT_1109dcb90;
      plVar21 = puVar4 + 3;
      puVar4[4] = 0;
      *plVar21 = 0;
      puVar4[6] = 0;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_2 + 0xa8);
      func_0x0001077c8f70(plVar21,*(undefined8 *)(param_2 + 0x90));
      plVar17 = (long *)(param_2 + 0x98);
LAB_1077c7ab4:
      plVar17 = (long *)*plVar17;
      if (plVar17 != (long *)0x0) {
        puVar12 = puVar4 + 6;
        func_0x00010726364c(puVar12,plVar17 + 2);
        puVar15 = (undefined8 *)puVar4[4];
        puVar20 = puVar19;
        puVar19 = puVar12;
        if (puVar15 != (undefined8 *)0x0) {
          uVar22 = (long)puVar15 - 1;
          if (((ulong)puVar15 & uVar22) == 0) {
            puVar19 = (undefined8 *)(uVar22 & (ulong)puVar12);
          }
          else if (puVar15 <= puVar12) {
            func_0x0001077ca3c4();
          }
          plVar24 = *(long **)(*plVar21 + (long)puVar19 * 8);
          puVar20 = puVar19;
          if (plVar24 != (long *)0x0) {
            do {
              while( true ) {
                plVar24 = (long *)*plVar24;
                if (plVar24 == (long *)0x0) goto LAB_1077c7b58;
                puVar10 = (undefined8 *)plVar24[1];
                if (puVar10 != puVar12) break;
                uVar5 = (ulong)(plVar24 + 2);
                func_0x000104c32db4(uVar5,plVar17 + 2);
                if ((uVar5 & 1) != 0) goto LAB_1077c7ab4;
              }
              if (((ulong)puVar15 & uVar22) == 0) {
                puVar10 = (undefined8 *)((ulong)puVar10 & uVar22);
              }
              else if (puVar15 <= puVar10) {
                uVar5 = 0;
                if (puVar15 != (undefined8 *)0x0) {
                  uVar5 = (ulong)puVar10 / (ulong)puVar15;
                }
                puVar10 = (undefined8 *)((long)puVar10 - uVar5 * (long)puVar15);
              }
            } while (puVar10 == puVar19);
          }
        }
LAB_1077c7b58:
        plVar24 = (long *)0x58;
        __Znwm();
        uStack_260 = 1;
        *plVar24 = 0;
        plVar24[1] = (long)puVar12;
        plStack_270 = plVar24;
        puStack_268 = puVar4 + 5;
        func_0x000104c2fe00(plVar24 + 2,plVar17 + 2);
        lVar9 = plVar17[10];
        lVar16 = plVar17[9];
        plVar24[10] = plVar17[10];
        plVar24[9] = lVar16;
        if (lVar9 != 0) {
          do {
            func_0x0001077c9f5c();
          } while (extraout_w10_00 != 0);
        }
        fVar25 = (float)lVar16;
        func_0x0001077ca3b0();
        if ((puVar15 == (undefined8 *)0x0) ||
           (puVar19 = puVar20, SUB84(plVar11,0) * (float)puVar15 < fVar25)) {
          func_0x0001077ca378();
          func_0x0001077ca188();
          func_0x0001077c8f70(plVar21);
          puVar15 = (undefined8 *)puVar4[4];
          if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
            puVar19 = (undefined8 *)((long)puVar15 - 1U & (ulong)puVar12);
          }
          else {
            puVar19 = puVar12;
            if (puVar15 <= puVar12) {
              func_0x0001077ca3c4();
              puVar19 = puVar20;
            }
          }
        }
        plVar24 = *(long **)(*plVar21 + (long)puVar19 * 8);
        if (plVar24 == (long *)0x0) {
          func_0x0001077ca170();
          if (extraout_x10_00 != 0) {
            puVar12 = *(undefined8 **)(extraout_x10_00 + 8);
            if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
              puVar12 = (undefined8 *)((ulong)puVar12 & (long)puVar15 - 1U);
            }
            else if (puVar15 <= puVar12) {
              uVar22 = 0;
              if (puVar15 != (undefined8 *)0x0) {
                uVar22 = (ulong)puVar12 / (ulong)puVar15;
              }
              puVar12 = (undefined8 *)((long)puVar12 - uVar22 * (long)puVar15);
            }
            *(undefined8 *)(extraout_x9_00 + (long)puVar12 * 8) = extraout_x8_01;
          }
        }
        else {
          *plStack_270 = *plVar24;
          *plVar24 = (long)plStack_270;
        }
        func_0x0001077ca158();
        func_0x0001077c9168();
        goto LAB_1077c7ab4;
      }
      func_0x0001077ca358();
      FUN_1077c6304();
      puStack_2b0 = (undefined8 *)0x0;
      puStack_2a8 = (undefined8 *)0x0;
      puStack_310 = (undefined8 *)0x0;
      puStack_308 = (undefined8 *)0x0;
      puStack_268 = (undefined8 *)puVar13[0x6a];
      plStack_270 = (long *)puVar13[0x69];
      puVar13[0x69] = plVar21;
      puVar13[0x6a] = puVar4;
      func_0x000107410cf0(&plStack_270);
      func_0x000107410cf0(&puStack_310);
      ppuVar6 = &puStack_2b0;
      FUN_1077c6304();
      func_0x0001077c9fa4();
      ppuVar6[1] = (undefined8 *)0x0;
      ppuVar6[2] = (undefined8 *)0x0;
      *ppuVar6 = &PTR_DAT_1109dcbe0;
      func_0x00010752ea88(ppuVar6 + 3,param_2 + 0x2b0);
      func_0x0001077ca358();
      func_0x0001077c6328();
      puStack_2b0 = (undefined8 *)0x0;
      puStack_2a8 = (undefined8 *)0x0;
      puStack_310 = (undefined8 *)0x0;
      puStack_308 = (undefined8 *)0x0;
      puStack_268 = (undefined8 *)puVar13[0x6c];
      plStack_270 = (long *)puVar13[0x6b];
      puVar13[0x6b] = ppuVar6 + 3;
      puVar13[0x6c] = ppuVar6;
      func_0x000107410ccc(&plStack_270);
      func_0x000107410ccc(&puStack_310);
      func_0x0001077c6328(&puStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar13 + 0x40,param_2 + 0x1c0);
      func_0x0001002a969c(puVar13 + 0x43,param_2 + 0x1d8);
      func_0x0001002a969c(puVar13 + 0x47,param_2 + 0x1f8);
      func_0x0001002a969c(puVar13 + 0x4b,param_2 + 0x218);
      cVar1 = *(char *)(puVar13 + 0x55);
      if (cVar1 == *(char *)(param_2 + 0x268)) {
        if (cVar1 != '\0') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar13 + 0x4f,param_2 + 0x238);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar13 + 0x52,param_2 + 0x250);
        }
      }
      else if (cVar1 == '\0') {
        FUN_1077c6534(puVar13 + 0x4f,param_2 + 0x238);
      }
      else {
        func_0x0001072bb90c(puVar13 + 0x4f);
        *(undefined1 *)(puVar13 + 0x55) = 0;
      }
      uVar7 = *(undefined8 *)(param_2 + 0x270);
      puVar13[0x57] = *(undefined8 *)(param_2 + 0x278);
      puVar13[0x56] = uVar7;
      if ((*(byte *)(puVar13 + 0x58) & 1) == 0) {
        *(undefined1 *)(puVar13 + 0x58) = 1;
      }
      puVar13[0x61] = *(undefined8 *)(param_2 + 0x280);
      *(undefined1 *)(puVar13 + 0x62) = 1;
      puVar13[99] = *(undefined8 *)(param_2 + 0x288);
      *(undefined1 *)(puVar13 + 100) = 1;
      puVar13[0x65] = *(undefined8 *)(param_2 + 0x290);
      *(undefined1 *)(puVar13 + 0x66) = 1;
      uVar7 = 0x18;
      __Znwm();
      func_0x00010752e9b8();
      uStack_320 = uVar7;
      func_0x0001077c5258(puVar13,&uStack_320);
      puVar19 = &uStack_320;
      func_0x0001077c39b8();
      lVar9 = *(long *)(param_2 + 0x188);
      uVar26 = *(undefined8 *)(param_2 + 0x188);
      uVar7 = *(undefined8 *)(param_2 + 0x180);
      func_0x0001077ca28c();
      puVar19[1] = uVar26;
      *puVar19 = uVar7;
      if (lVar9 != 0) {
        do {
          func_0x0001077c9f5c();
        } while (extraout_w10_01 != 0);
      }
      uStack_328 = 0;
      func_0x0001077c7198(puVar13 + 0x39);
      func_0x0001077c7174(&uStack_328);
      func_0x0001072b85f8(auStack_358,param_2 + 400);
      func_0x00010793f5a4(puVar13 + 0x3a,auStack_358);
      func_0x00010793f34c(auStack_358);
      puVar19 = puVar13 + 0x12;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar19,param_2 + 0x18);
      func_0x0001077ca260();
      puVar4 = puVar19;
      func_0x0001077ca338();
      func_0x00010752ea8c();
      puStack_310 = puVar4;
      puStack_308 = puVar19;
      func_0x0001077ca358();
      func_0x0001077c634c();
      func_0x0001077c529c(puVar13 + 0x6d,&puStack_310);
      func_0x0001077c634c(&puStack_310);
      func_0x00010752eadc(apuStack_380,param_2 + 0x3d8);
      func_0x0001073af78c(apuStack_380);
      ppuVar6 = apuStack_380;
      func_0x0001073b0514();
      if (puVar13[6] != 0) {
        plVar17 = (long *)(param_2 + 0x2e0);
        while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
          func_0x000107262e9c(&puStack_2b0,plVar17 + 5);
          func_0x000107526c98(&plStack_270,&puStack_2b0);
          func_0x000104c2f714(&puStack_2b0);
          plVar21 = (long *)puVar13[6];
          puStack_310 = (undefined8 *)((ulong)puStack_310 & 0xffffffff00000000);
          puStack_308 = puVar13;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&puStack_300,plVar17 + 2);
          puVar19 = &uStack_2e8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar19,plVar17 + 5);
          puStack_2b8 = (undefined8 *)0x0;
          func_0x0001077ca064();
          *puVar19 = &PTR_DAT_1109dd160;
          puVar4 = puStack_310;
          puVar19[2] = puStack_308;
          puVar19[1] = puVar4;
          puVar19[4] = uStack_2f8;
          puVar19[3] = puStack_300;
          puVar19[5] = uStack_2f0;
          puStack_300 = (undefined8 *)0x0;
          uStack_2f8 = 0;
          puVar19[7] = uStack_2e0;
          puVar19[6] = uStack_2e8;
          puVar19[8] = uStack_2d8;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          puStack_2b8 = puVar19;
          (**(code **)(*plVar21 + 0x10))(&puStack_2b0,plVar21,&plStack_270,auStack_2d0);
          plVar21 = puVar13 + 0x6f;
          func_0x00010735114c(plVar21,plVar17 + 2);
          puVar19 = puStack_2b0;
          puStack_2b0 = (undefined8 *)0x0;
          plVar11 = (long *)*plVar21;
          *plVar21 = (long)puVar19;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          puVar19 = puStack_2b0;
          puStack_2b0 = (undefined8 *)0x0;
          if (puVar19 != (undefined8 *)0x0) {
            func_0x0001077c9d14();
          }
          func_0x0001072ad0c8(auStack_2d0);
          ppuVar6 = &puStack_310;
          func_0x0001077c5d20();
          func_0x0001077ca098();
        }
      }
      lVar16 = *(long *)(param_2 + 0x2a0);
      for (lVar9 = *(long *)(param_2 + 0x298); in_ZR = lVar9 == lVar16, !(bool)in_ZR;
          lVar9 = lVar9 + 0x18) {
        func_0x0001077c9e90();
        (**(code **)(extraout_x8_02 + 0x50))();
      }
      *(undefined1 *)((long)puVar13 + 0x21) = 1;
      func_0x0001077c9e90();
      (**(code **)(extraout_x8_03 + 0x38))();
    }
    else {
      in_ZR = *(int *)(param_2 + 0x400) == 1;
      if (!(bool)in_ZR) goto LAB_1077c8100;
      __ZNSt13exception_ptrC1ERKS_(&puStack_2b0,param_2);
      func_0x000107879078(&puStack_310,&puStack_2b0);
      func_0x0001004c3cd0(&plStack_270,&UNK_10f42a3c5,&puStack_310);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_310);
      plVar17 = (long *)puVar13[0x75];
      func_0x0001077c0774(&puStack_310,&plStack_270);
      func_0x0001077c06ec(auStack_358,&puStack_310);
      func_0x0001077ca0dc(*(undefined8 *)(*plVar17 + 0x58));
      __ZNSt13exception_ptrD1Ev(auStack_358);
      __ZNSt13runtime_errorD2Ev(&puStack_310);
      plVar17 = (long *)puVar13[0x75];
      __ZNSt13exception_ptrC1ERKS_(apuStack_380,&puStack_2b0);
      func_0x0001077ca0dc(*(undefined8 *)(*plVar17 + 0x60));
      __ZNSt13exception_ptrD1Ev(apuStack_380);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_270);
      ppuVar6 = &puStack_2b0;
      __ZNSt13exception_ptrD1Ev();
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_2b0 = (undefined8 *)(((long)ppuVar6 - *(long *)(param_1 + 0x28)) / 1000);
    plStack_270 = (long *)CONCAT44(plStack_270._4_4_,10);
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    ppuStack_250 = &PTR_DAT_110996720;
    uStack_248 = 0;
    uStack_230 = 10;
    uStack_228 = 0;
    uStack_224 = 1;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    puStack_310 = *(undefined8 **)puVar13[5];
    puStack_308 = (undefined8 *)CONCAT44(puStack_308._4_4_,3);
    func_0x00010743f9dc((ulong *)puVar13[5],&plStack_270,&puStack_2b0,&puStack_310,7);
    func_0x000107262330(&plStack_270);
  }
  func_0x000107270b00(auStack_390);
  func_0x0001077c9cec(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1077c8100:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077c8108);
  (*pcVar2)();
}



/* Entry: 1077c83b8; end: 1077c83df;  */

void FUN_1077c83b8(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dcdf0);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8570; end: 1077c857b;  */

undefined ** FUN_1077c8570(void)

{
  return &PTR_DAT_1109dce70;
}



/* Entry: 1077c87b4; end: 1077c8893;  */

void FUN_1077c87b4(int param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  code *extraout_x8;
  long unaff_x19;
  long lVar3;
  long *plVar4;
  long alStack_40 [2];
  
  func_0x0001077c9e08();
  func_0x0001077ca234();
  func_0x0001077ca248();
  if (param_1 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    func_0x0001077c88f4(alStack_40,*(undefined8 *)(lVar3 + 0xd0));
    func_0x0001074f9768(alStack_40[0]);
    func_0x0001074f4134((undefined8 *)(lVar3 + 0xd0),alStack_40);
    func_0x0001074f4db4(alStack_40);
    func_0x0001075295e8(lVar3 + 0xb8);
    func_0x0001077c4a98(lVar3 + 0xe0);
    plVar1 = (long *)param_2[1];
    for (plVar4 = (long *)*param_2; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      alStack_40[0] = *plVar4;
      *plVar4 = 0;
      func_0x0001077c52ec(lVar3,alStack_40);
      lVar2 = alStack_40[0];
      alStack_40[0] = 0;
      if (lVar2 != 0) {
        func_0x0001077c9d14();
      }
    }
    func_0x0001077c9e14();
    (*extraout_x8)();
  }
  func_0x0001077c9e40();
  return;
}



/* Entry: 1077c8a90; end: 1077c8aaf;  */

undefined8 * FUN_1077c8a90(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dcf20;
  func_0x0001077c4a14(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8c14; end: 1077c8c5f;  */

void FUN_1077c8c14(void)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  iVar1 = (int)auStack_30;
  func_0x0001077c9de8();
  func_0x0001077ca06c();
  func_0x0001077ca080();
  if (iVar1 != 0) {
    func_0x0001077c4a5c(*(long *)(unaff_x20 + 0x20) + 0x108);
  }
  func_0x0001077c9e40();
  return;
}



/* Entry: 1077c8dc8; end: 1077c8def;  */

void FUN_1077c8dc8(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dd0b0);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8f38; end: 1077c8f43;  */

undefined ** FUN_1077c8f38(void)

{
  return &PTR_DAT_1109dd140;
}



/* Entry: 1077c91a4; end: 1077c925f;  */

void FUN_1077c91a4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010752948c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1077c9448; end: 1077c9473;  */

long * FUN_1077c9448(long *param_1)

{
  func_0x0001077c9474();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077c96d4; end: 1077c96fb;  */

void FUN_1077c96d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001077ca2ec(param_1,param_2,param_2,param_3);
  func_0x0001077c96fc();
  return;
}



/* Entry: 1077c98b4; end: 1077c98e7;  */

void FUN_1077c98b4(long param_1)

{
  long unaff_x19;
  
  func_0x0001077c9de8();
  FUN_1077c96d4(unaff_x19 + 0x10,*(undefined8 *)(param_1 + 8));
  func_0x0001074f9904();
  return;
}



/* Entry: 1077c9a68; end: 1077c9c4f;  */

void FUN_1077c9a68(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_170 [28];
  undefined1 auStack_154 [16];
  undefined1 uStack_144;
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
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [56];
  undefined8 *apuStack_70 [7];
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x0001077c9d20();
  lVar3 = *(long *)(lVar3 + 0x10);
  uStack_38 = extraout_x8;
  func_0x000107350ef4(lVar3 + 0x378,param_1 + 0x18);
  if (((*(long *)(param_2 + 0x10) == 0) && ((*(byte *)(param_2 + 0x19) & 1) == 0)) &&
     ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
    func_0x000107262e9c(auStack_e0,param_1 + 0x18);
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    lVar2 = (long)*(char *)((long)puVar1 + 0x17);
    apuStack_70[0] = puVar1;
    if (lVar2 < 0) {
      apuStack_70[0] = (undefined8 *)*puVar1;
      lVar2 = puVar1[1];
    }
    func_0x0001078ba1ec(auStack_170,apuStack_70[0],lVar2);
    func_0x0001077ca28c();
    func_0x000104c318bc(auStack_a8,auStack_e0);
    auStack_154[0] = 0;
    uStack_144 = 0;
    func_0x000104c318bc(apuStack_70,auStack_a8);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010777fcb8(0x3f800000,apuStack_70[0],apuStack_70,auStack_170,0,&uStack_f8,&uStack_110,
                        auStack_154);
    func_0x00010724e0ac(&uStack_110);
    func_0x00010724e0ac(&uStack_f8);
    func_0x000104c2f714(apuStack_70);
    func_0x00010724e0ac(&uStack_140);
    func_0x00010724e0ac(&uStack_128);
    func_0x000104c2f714(auStack_a8);
    func_0x0001077c5aac(lVar3,apuStack_70);
    func_0x00010725bab8(apuStack_70);
    func_0x00010724e5f4(auStack_170);
    func_0x000104c2f714(auStack_e0);
  }
  while( true ) {
    func_0x0001077c9cec(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001077c9e60();
    func_0x00010725bab8(apuStack_70);
    func_0x00010724e5f4(auStack_170);
    func_0x000104c2f714(auStack_e0);
    in_ZR = (int)param_1 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(lVar3);
    ___cxa_end_catch();
  }
  func_0x0001077c9da4();
  func_0x0001077c9e84();
  func_0x0001077c9e30();
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077ca3d0; end: 1077ca3f7;  */

undefined8 FUN_1077ca3d0(undefined8 param_1)

{
  func_0x0001077ca3f8(param_1,0);
  return param_1;
}



/* Entry: 1077cab94; end: 1077cabff;  */

undefined8 * FUN_1077cab94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x0001077d5dc4(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 1077caf04; end: 1077caf67;  */

void FUN_1077caf04(void)

{
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  byte bStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077efd7c();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077caf68(&uStack_68,extraout_x9,&uStack_38);
  if ((bStack_40 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x148) = uStack_60;
    *(undefined8 *)(unaff_x19 + 0x140) = uStack_68;
    *(undefined8 *)(unaff_x19 + 0x158) = uStack_50;
    *(undefined8 *)(unaff_x19 + 0x150) = uStack_58;
    *(undefined1 *)(unaff_x19 + 0x160) = uStack_48;
  }
  func_0x0001077f02ec();
  return;
}



/* Entry: 1077cb418; end: 1077cbb7f;  */

void FUN_1077cb418(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long **pplVar7;
  int *piVar8;
  uint uVar9;
  undefined8 extraout_x8;
  uint *puVar10;
  uint *extraout_x8_00;
  long extraout_x8_01;
  uint *extraout_x9;
  ulong uVar11;
  ulong extraout_x9_00;
  uint *puVar12;
  long *plVar13;
  long *extraout_x10;
  uint *puVar14;
  uint *puVar15;
  uint *extraout_x11;
  long *plVar16;
  long *plVar17;
  int *piVar18;
  ulong uVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  int iVar24;
  long lVar25;
  long lStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [9];
  undefined8 uStack_68;
  
  func_0x0001077ee6bc();
  uStack_68 = extraout_x8;
  func_0x0001077f0954();
  if (!(bool)in_ZR) {
LAB_1077cbabc:
    func_0x0001077ee344(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_1077cbaec:
    func_0x000104bd35f4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1077cbaf4);
    (*pcVar2)();
  }
  piVar22 = *(int **)(param_2 + 2);
  piVar21 = piVar22 + (ulong)*param_2 * 0xc;
LAB_1077cb464:
  in_ZR = piVar22 == piVar21;
  if ((!(bool)in_ZR) && ((*(ushort *)((long)piVar22 + 0x16) >> 10 & 1) != 0)) {
    if ((*(ushort *)((long)piVar22 + 0x16) >> 0xc & 1) == 0) {
      iVar24 = *piVar22;
      piVar18 = *(int **)(piVar22 + 2);
    }
    else {
      iVar24 = 0x15 - *(char *)((long)piVar22 + 0x15);
      piVar18 = piVar22;
    }
    if (*(short *)((long)piVar22 + 0x2e) == 3) {
      puVar6 = (uint *)(piVar22 + 6);
      func_0x000107327090(puVar6,&DAT_10f6389e8);
      if (((int)puVar6 != 0) &&
         (func_0x0001077f12a0(), (*(ushort *)((long)puVar6 + 0x16) >> 10 & 1) != 0)) {
        func_0x0001077f12a0();
        if ((bRam0000000113726320 & 1) == 0) {
          iVar5 = 0x13726320;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            _memcpy(alStack_b0,&PTR_DAT_1109dd280,0x48);
            puRam0000000113726330 = (uint *)0x0;
            lRam0000000113726328 = 0;
            uRam0000000113726340 = 0;
            plRam0000000113726338 = (long *)0x0;
            fRam0000000113726348 = 1.0;
            for (lStack_e8 = 0; lStack_e8 != 0x48; lStack_e8 = lStack_e8 + 0x18) {
              plVar16 = (long *)((long)alStack_b0 + lStack_e8);
              puVar12 = (uint *)*plVar16;
              func_0x0001001030f4(puVar12,(long)puVar12 +
                                          *(long *)((long)alStack_b0 + lStack_e8 + 8));
              puVar23 = puRam0000000113726330;
              if (puRam0000000113726330 != (uint *)0x0) {
                uVar19 = (long)puRam0000000113726330 - 1;
                if (((ulong)puRam0000000113726330 & uVar19) == 0) {
                  puStack_e0 = (uint *)(uVar19 & (ulong)puVar12);
                }
                else {
                  puStack_e0 = puVar12;
                  if (puRam0000000113726330 <= puVar12) {
                    uVar11 = 0;
                    if (puRam0000000113726330 != (uint *)0x0) {
                      uVar11 = (ulong)puVar12 / (ulong)puRam0000000113726330;
                    }
                    puStack_e0 = (uint *)((long)puVar12 - uVar11 * (long)puRam0000000113726330);
                  }
                }
                plVar17 = *(long **)(lRam0000000113726328 + (long)puStack_e0 * 8);
                if (plVar17 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar17 = (long *)*plVar17;
                      if (plVar17 == (long *)0x0) goto LAB_1077cb7cc;
                      puVar10 = (uint *)plVar17[1];
                      if (puVar10 != puVar12) break;
                      uVar11 = 0;
                      func_0x00010728905c(0x113726348,plVar17 + 2,plVar16);
                      if ((uVar11 & 1) != 0) goto LAB_1077cba94;
                    }
                    if (((ulong)puVar23 & uVar19) == 0) {
                      puVar10 = (uint *)((ulong)puVar10 & uVar19);
                    }
                    else if (puVar23 <= puVar10) {
                      uVar11 = 0;
                      if (puVar23 != (uint *)0x0) {
                        uVar11 = (ulong)puVar10 / (ulong)puVar23;
                      }
                      puVar10 = (uint *)((long)puVar10 - uVar11 * (long)puVar23);
                    }
                  } while (puVar10 == puStack_e0);
                }
              }
LAB_1077cb7cc:
              plVar17 = (long *)0x28;
              __Znwm();
              uStack_c0 = 0x113726338;
              uStack_b8 = 1;
              *plVar17 = 0;
              plVar17[1] = (long)puVar12;
              lVar25 = *plVar16;
              plVar17[3] = *(long *)((long)alStack_b0 + lStack_e8 + 8);
              plVar17[2] = lVar25;
              plVar17[4] = *(long *)((long)alStack_b0 + lStack_e8 + 0x10);
              if ((puVar23 == (uint *)0x0) ||
                 (fRam0000000113726348 * (float)puVar23 < (float)(uRam0000000113726340 + 1))) {
                bVar3 = (uint *)0x2 < puVar23;
                bVar4 = puVar23 == (uint *)0x3;
                plStack_c8 = plVar17;
                func_0x0001077f015c((long)puVar23 << 1);
                puVar10 = extraout_x8_00;
                if (!bVar3 || bVar4) {
                  puVar10 = extraout_x9;
                }
                if ((long)puVar10 - 1U == 0) {
                  puVar10 = (uint *)0x2;
                }
                else if (((ulong)puVar10 & (long)puVar10 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                }
                puVar14 = puRam0000000113726330;
                if (puRam0000000113726330 < puVar10) {
LAB_1077cb880:
                  if ((ulong)puVar10 >> 0x3d != 0) goto LAB_1077cbaec;
                  __Znwm((long)puVar10 << 3);
                  func_0x0001077d5f00();
                  lVar25 = lRam0000000113726328;
                  puRam0000000113726330 = puVar10;
                  for (puVar23 = (uint *)0x0; plVar16 = plRam0000000113726338, puVar10 != puVar23;
                      puVar23 = (uint *)((long)puVar23 + 1)) {
                    *(undefined8 *)(lVar25 + (long)puVar23 * 8) = 0;
                  }
                  puVar23 = puVar10;
                  if (plRam0000000113726338 != (long *)0x0) {
                    puVar14 = (uint *)plRam0000000113726338[1];
                    uVar11 = (long)puVar10 - 1;
                    uVar19 = 0;
                    if (puVar10 != (uint *)0x0) {
                      uVar19 = (ulong)puVar14 / (ulong)puVar10;
                    }
                    puVar15 = puVar14;
                    if (puVar10 <= puVar14) {
                      puVar15 = (uint *)((long)puVar14 - uVar19 * (long)puVar10);
                    }
                    if (((ulong)puVar10 & uVar11) == 0) {
                      puVar15 = (uint *)((ulong)puVar14 & uVar11);
                    }
                    *(undefined8 *)(lVar25 + (long)puVar15 * 8) = 0x113726338;
                    while (plVar13 = plVar16, plVar16 = (long *)*plVar13, plVar16 != (long *)0x0) {
                      puVar14 = (uint *)plVar16[1];
                      if (((ulong)puVar10 & uVar11) == 0) {
                        puVar14 = (uint *)((ulong)puVar14 & uVar11);
                      }
                      else if (puVar10 <= puVar14) {
                        uVar19 = 0;
                        if (puVar10 != (uint *)0x0) {
                          uVar19 = (ulong)puVar14 / (ulong)puVar10;
                        }
                        puVar14 = (uint *)((long)puVar14 - uVar19 * (long)puVar10);
                      }
                      if (puVar14 != puVar15) {
                        if (*(long *)(lVar25 + (long)puVar14 * 8) == 0) {
                          *(long **)(lVar25 + (long)puVar14 * 8) = plVar13;
                          puVar15 = puVar14;
                        }
                        else {
                          func_0x0001077f0808();
                          lVar25 = extraout_x8_01;
                          uVar11 = extraout_x9_00;
                          plVar16 = extraout_x10;
                          puVar15 = extraout_x11;
                        }
                      }
                    }
                  }
                }
                else {
                  puVar23 = puRam0000000113726330;
                  if (puVar10 < puRam0000000113726330) {
                    puVar23 = (uint *)(long)((float)uRam0000000113726340 / fRam0000000113726348);
                    if ((puRam0000000113726330 < (uint *)0x3) ||
                       (((ulong)puRam0000000113726330 & (long)puRam0000000113726330 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else {
                      func_0x0001077f07e8();
                    }
                    if (puVar10 <= puVar23) {
                      puVar10 = puVar23;
                    }
                    puVar23 = puRam0000000113726330;
                    if (puVar10 < puVar14) {
                      if (puVar10 != (uint *)0x0) goto LAB_1077cb880;
                      func_0x0001077d5f00(0);
                      puRam0000000113726330 = (uint *)0x0;
                      puVar23 = (uint *)0x0;
                    }
                  }
                }
                if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
                  puStack_e0 = (uint *)((long)puVar23 - 1U & (ulong)puVar12);
                }
                else {
                  puStack_e0 = puVar12;
                  if (puVar23 <= puVar12) {
                    uVar19 = 0;
                    if (puVar23 != (uint *)0x0) {
                      uVar19 = (ulong)puVar12 / (ulong)puVar23;
                    }
                    puStack_e0 = (uint *)((long)puVar12 - uVar19 * (long)puVar23);
                  }
                }
              }
              lVar25 = lRam0000000113726328;
              plVar16 = *(long **)(lRam0000000113726328 + (long)puStack_e0 * 8);
              if (plVar16 == (long *)0x0) {
                *plVar17 = (long)plRam0000000113726338;
                plRam0000000113726338 = plVar17;
                *(undefined8 *)(lVar25 + (long)puStack_e0 * 8) = 0x113726338;
                if (*plVar17 != 0) {
                  puVar12 = *(uint **)(*plVar17 + 8);
                  if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
                    puVar12 = (uint *)((ulong)puVar12 & (long)puVar23 - 1U);
                  }
                  else if (puVar23 <= puVar12) {
                    uVar19 = 0;
                    if (puVar23 != (uint *)0x0) {
                      uVar19 = (ulong)puVar12 / (ulong)puVar23;
                    }
                    puVar12 = (uint *)((long)puVar12 - uVar19 * (long)puVar23);
                  }
                  *(long **)(lVar25 + (long)puVar12 * 8) = plVar17;
                }
              }
              else {
                *plVar17 = *plVar16;
                *plVar16 = (long)plVar17;
              }
              plStack_c8 = (long *)0x0;
              uRam0000000113726340 = uRam0000000113726340 + 1;
              func_0x0001077d5f1c(&plStack_c8);
LAB_1077cba94:
            }
            ___cxa_guard_release(0x113726320);
          }
        }
        puVar12 = puRam0000000113726330;
        if ((*(ushort *)((long)puVar6 + 0x16) >> 0xc & 1) == 0) {
          uVar9 = *puVar6;
          puVar6 = *(uint **)(puVar6 + 2);
        }
        else {
          uVar9 = 0x15 - (int)*(char *)((long)puVar6 + 0x15);
        }
        uStack_d0 = (ulong)uVar9;
        puStack_d8 = puVar6;
        if ((puRam0000000113726330 != (uint *)0x0) && (uRam0000000113726340 != 0)) {
          func_0x0001001030f4();
          uVar19 = (long)puVar12 - 1;
          if (((ulong)puVar12 & uVar19) == 0) {
            puVar23 = (uint *)((ulong)puVar6 & uVar19);
          }
          else {
            puVar23 = puVar6;
            if (puVar12 <= puVar6) {
              uVar11 = 0;
              if (puVar12 != (uint *)0x0) {
                uVar11 = (ulong)puVar6 / (ulong)puVar12;
              }
              puVar23 = (uint *)((long)puVar6 - uVar11 * (long)puVar12);
            }
          }
          plVar16 = *(long **)(lRam0000000113726328 + (long)puVar23 * 8);
          if (plVar16 != (long *)0x0) {
            do {
              while( true ) {
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_1077cb6a8;
                puVar10 = (uint *)plVar16[1];
                if (puVar10 != puVar6) break;
                uVar11 = 0;
                func_0x00010728905c(0x113726348,plVar16 + 2,&puStack_d8);
                if ((uVar11 & 1) != 0) {
                  uVar1 = *(undefined4 *)(plVar16 + 4);
                  plStack_c8 = (long *)0x0;
                  uStack_c0 = 0;
                  uStack_b8 = 0;
                  pplVar7 = (long **)(piVar22 + 6);
                  func_0x000107327090(pplVar7,&DAT_10f2e4528);
                  if ((int)pplVar7 == 0) goto LAB_1077cb66c;
                  puVar6 = (uint *)(piVar22 + 6);
                  func_0x000107327234(puVar6,&DAT_10f2e4528);
                  if (*(short *)((long)puVar6 + 0x16) != 4) goto LAB_1077cb69c;
                  pplVar7 = &plStack_c8;
                  func_0x0001072dd514(pplVar7,*puVar6);
                  piVar20 = *(int **)(puVar6 + 2);
                  lVar25 = (ulong)*puVar6 * 0x18;
                  if ((ulong)*puVar6 * 3 != 0) goto LAB_1077cb614;
                  goto LAB_1077cb66c;
                }
              }
              if (((ulong)puVar12 & uVar19) == 0) {
                puVar10 = (uint *)((ulong)puVar10 & uVar19);
              }
              else if (puVar12 <= puVar10) {
                uVar11 = 0;
                if (puVar12 != (uint *)0x0) {
                  uVar11 = (ulong)puVar10 / (ulong)puVar12;
                }
                puVar10 = (uint *)((long)puVar10 - uVar11 * (long)puVar12);
              }
            } while (puVar10 == puVar23);
          }
        }
      }
    }
    goto LAB_1077cb6a8;
  }
  goto LAB_1077cbabc;
  while( true ) {
    if ((*(ushort *)((long)piVar20 + 0x16) >> 0xc & 1) == 0) {
      iVar5 = *piVar20;
      if (iVar5 == 0) goto LAB_1077cb69c;
      piVar8 = *(int **)(piVar20 + 2);
    }
    else {
      if (*(char *)((long)piVar20 + 0x15) == 0x15) goto LAB_1077cb69c;
      iVar5 = 0x15 - *(char *)((long)piVar20 + 0x15);
      piVar8 = piVar20;
    }
    func_0x000104c302a4(alStack_b0,piVar8,iVar5);
    pplVar7 = &plStack_c8;
    func_0x0001072999ec(pplVar7,alStack_b0);
    func_0x0001077eff58();
    piVar20 = piVar20 + 6;
    lVar25 = lVar25 + -0x18;
    if (lVar25 == 0) break;
LAB_1077cb614:
    if ((*(ushort *)((long)piVar20 + 0x16) >> 10 & 1) == 0) goto LAB_1077cb69c;
  }
LAB_1077cb66c:
  func_0x00010741abc0();
  func_0x000104c302a4(alStack_b0,piVar18,iVar24);
  func_0x00010741aea0(pplVar7,alStack_b0,uVar1,&plStack_c8);
  func_0x0001077eff58();
LAB_1077cb69c:
  func_0x00010726e078(&plStack_c8);
LAB_1077cb6a8:
  piVar22 = piVar22 + 0xc;
  goto LAB_1077cb464;
}



/* Entry: 1077d5214; end: 1077d530b;  */

/* WARNING: Possible PIC construction at 0x0001077d52b0: Changing call to branch */

void FUN_1077d5214(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a0 [56];
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [232];
  
  func_0x0001077ee434();
  uVar1 = *(short *)(param_2 + 0x16) == 4;
  if ((bool)uVar1) {
    func_0x0001077eec18();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x000100060964(auStack_1a0,&UNK_10f42a4c8);
    func_0x0001072627ac(auStack_168,auStack_1a0);
    func_0x0001077efb9c();
    func_0x0001077b3ffc(auStack_128,param_1 + 8,auStack_168,auStack_1b0);
    func_0x0001072f5f6c(auStack_1b0);
    func_0x00010724b3d8(auStack_168);
    func_0x000104c2f714(auStack_1a0);
    func_0x0001077f1b58();
    if ((bool)uVar1) goto code_r0x0001077d530c;
    func_0x000107266948(auStack_128);
  }
  func_0x0001077ee314();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077f086c();
  func_0x000107266948();
  func_0x0001077ef068();
code_r0x0001077d530c:
  func_0x0001077ef34c();
  func_0x0001077da3b8();
  func_0x0001077ef474();
  func_0x00010733ecf0();
  return;
}



/* Entry: 1077d5b78; end: 1077d5ba3;  */

void FUN_1077d5b78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001077f0bc0();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109dd200;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077d5e30; end: 1077d5e63;  */

long FUN_1077d5e30(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077efb28();
  if ((bool)in_CY) {
    func_0x0001077d5e90();
  }
  else {
    func_0x0001077d5e64();
    param_1 = unaff_x20 + 0x18;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x18;
}



/* Entry: 1077d70e0; end: 1077d711f;  */

void FUN_1077d70e0(void)

{
  func_0x0001077ef1b8();
  func_0x0001077d75f8();
  return;
}



/* Entry: 1077d78f0; end: 1077d7957;  */

void FUN_1077d78f0(void)

{
  undefined8 extraout_x9;
  undefined1 auStack_88 [88];
  
  func_0x0001077ef100();
  func_0x0001077ef9d8();
  func_0x0001077ef9c0();
  func_0x00010733b904(extraout_x9);
  func_0x0001077f0e88();
  func_0x00010727d614();
  func_0x00010727e950(auStack_88);
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d7b1c; end: 1077d7d4b;  */

void FUN_1077d7b1c(void)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1e0 [56];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [56];
  undefined1 auStack_90 [80];
  
  func_0x0001077ee358();
  func_0x0001077d7830(auStack_90);
  func_0x0001077ef004(auStack_c8);
  func_0x0001077efb94();
  func_0x0001077d7838(auStack_90);
  func_0x0001077ef004(auStack_100);
  func_0x0001077efb94();
  func_0x0001077d783c(auStack_90);
  func_0x0001077ef004(auStack_138);
  func_0x0001077efb94();
  func_0x0001077d7840(auStack_90);
  func_0x0001077ef004(auStack_170);
  func_0x0001077efb94();
  uVar2 = 0;
  if (*(int *)(unaff_x21 + 0x218) != 0) {
    puVar1 = (undefined4 *)(unaff_x21 + 0x1e8);
    in_ZR = *(int *)(unaff_x21 + 0x218) == 1;
    if ((bool)in_ZR) {
      uVar2 = *puVar1;
    }
    else {
      func_0x0001077eeff4();
      uVar2 = SUB84(puVar1,0);
      func_0x0001077f15d8();
      func_0x0001077ef544();
    }
  }
  func_0x0001077d78e4(auStack_90);
  func_0x0001077ef004(auStack_1a8);
  func_0x0001077efb94();
  uVar3 = 0;
  if (*(int *)(unaff_x21 + 0x2c8) != 0) {
    puVar1 = (undefined4 *)(unaff_x21 + 0x298);
    in_ZR = *(int *)(unaff_x21 + 0x2c8) == 1;
    if ((bool)in_ZR) {
      uVar3 = *puVar1;
    }
    else {
      func_0x0001077eeff4();
      uVar3 = SUB84(puVar1,0);
      func_0x0001077f0e28();
      func_0x0001077ef544();
    }
  }
  func_0x0001077d78e8(auStack_90);
  func_0x0001077ef004(auStack_1e0);
  func_0x0001077efb94();
  __Znwm(0x168);
  func_0x0001077ef6d8();
  func_0x000104c318bc();
  func_0x000104c318bc(unaff_x20 + 0x40,auStack_100);
  func_0x000104c318bc(unaff_x20 + 0x78,auStack_138);
  func_0x000104c318bc(unaff_x20 + 0xb0,auStack_170);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar2;
  func_0x000104c318bc(unaff_x20 + 0xf0,auStack_1a8);
  *(undefined4 *)(unaff_x20 + 0x128) = uVar3;
  func_0x0001077f13f4(unaff_x20 + 0x130);
  func_0x0001077f07dc(&PTR_DAT_1109dd498);
  func_0x0001077ef230();
  func_0x0001077f0ce4();
  func_0x0001077effcc();
  func_0x000104c2f714(auStack_138);
  func_0x000104c2f714(auStack_100);
  func_0x000104c2f714(auStack_c8);
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef544();
  func_0x000104c2f714(auStack_1a8);
  func_0x000104c2f714(auStack_170);
  do {
    func_0x000104c2f714();
    func_0x000104c2f714(auStack_100);
    func_0x000104c2f714(auStack_c8);
    func_0x0001077ef068();
    func_0x0001077efc7c();
  } while( true );
}



/* Entry: 1077d8038; end: 1077d80bf;  */

void FUN_1077d8038(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef908();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077d8578; end: 1077d85b7;  */

void FUN_1077d8578(void)

{
  func_0x0001077ef1b8();
  func_0x0001077d878c();
  return;
}



/* Entry: 1077d8ba8; end: 1077d8cb3;  */

long FUN_1077d8ba8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001077ee374();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) || (in_ZR = *(int *)(param_1 + 0x50) == 1, (bool)in_ZR)) {
    func_0x0001077efe2c(&uStack_c8);
  }
  else {
    auStack_80[0] = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,&uStack_b0);
    func_0x0001077ef0e0(&uStack_c8);
    func_0x00010727f9d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x00010724b3d8(auStack_80);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  lVar1 = 0x20;
  __Znwm();
  *(undefined8 *)(lVar1 + 0x10) = uStack_c0;
  *(undefined8 *)(lVar1 + 8) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x18) = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  func_0x0001077f1acc(&PTR_DAT_1109dd8d8);
  func_0x0001077ef60c();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x00010724b3d8(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    func_0x0001077ef068();
    func_0x0001077ef1b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    return lVar1;
  }
  return lVar1;
}



/* Entry: 1077d91bc; end: 1077d9343;  */

undefined1 * FUN_1077d91bc(void)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long unaff_x20;
  long unaff_x21;
  undefined1 uVar3;
  undefined1 auStack_148 [56];
  undefined1 auStack_110 [56];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [120];
  int iStack_50;
  
  func_0x0001077ee358();
  func_0x0001077d945c(auStack_c8);
  func_0x0001077f1500(auStack_148);
  func_0x0001077efe08();
  if (*(int *)(unaff_x21 + 0xb0) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(unaff_x21 + 0xb0) == 1) {
    uVar3 = *(undefined1 *)(unaff_x21 + 0x80);
    in_ZR = 1;
  }
  else {
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x0001077f15e4(auStack_c8,*(undefined8 *)(unaff_x21 + 0x80));
    in_ZR = iStack_50 == 1;
    if ((bool)in_ZR) {
      puVar2 = auStack_c8;
      func_0x00010727f7dc();
      func_0x000107775dc8();
      uVar3 = SUB81(puVar2,0);
      in_ZR = ((ulong)puVar2 & 0x100) == 0;
      bVar1 = (bool)in_ZR;
    }
    else {
      uVar3 = 0;
      bVar1 = true;
    }
    func_0x0001077ef1b0(auStack_c8);
    if (bVar1) {
      in_ZR = *(char *)(unaff_x21 + 0xa9) == '\x01';
      if ((bool)in_ZR) {
        uVar3 = *(undefined1 *)(unaff_x21 + 0xa8);
      }
      else {
        uVar3 = 0;
      }
    }
    func_0x0001077efa48();
  }
  func_0x0001077d9460(auStack_c8);
  func_0x0001077f1500(auStack_110);
  func_0x0001077efe08();
  __Znwm(0x80);
  func_0x0001077ef6d8();
  func_0x000104c318bc();
  *(undefined1 *)(unaff_x20 + 0x40) = uVar3;
  puVar2 = (undefined1 *)(unaff_x20 + 0x48);
  func_0x000104c318bc(puVar2,auStack_110);
  func_0x0001077f07dc(&PTR_DAT_1109ddad8);
  func_0x0001077eff58();
  func_0x0001077efaf8();
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077ef1b0(auStack_c8);
  func_0x0001077efa48();
  puVar2 = auStack_148;
  func_0x000104c2f714(puVar2);
  func_0x0001077ef068();
  func_0x00010732442c(puVar2 + 0xb8);
  func_0x000107560f90(puVar2 + 0x78);
  func_0x0001077efd28();
  return puVar2;
}



/* Entry: 1077d9574; end: 1077d95b3;  */

void FUN_1077d9574(void)

{
  func_0x0001077ef1b8();
  func_0x0001077d9784();
  return;
}



/* Entry: 1077d9ad0; end: 1077d9aff;  */

void FUN_1077d9ad0(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  func_0x0001077d9b00();
  return;
}



/* Entry: 1077d9cd4; end: 1077d9d03;  */

long FUN_1077d9cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107561054();
  func_0x000107339d04(lVar1 + 0x38,param_3);
  return param_1;
}



/* Entry: 1077d9fb8; end: 1077d9ffb;  */

long * FUN_1077d9fb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001075292bc(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1077da348; end: 1077da373;  */

void FUN_1077da348(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dde78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077da5f4; end: 1077da77f;  */

void FUN_1077da5f4(int param_1,long *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  double *pdVar2;
  long *plVar3;
  double *unaff_x19;
  long *plVar4;
  double dVar5;
  double dStack_300;
  double dStack_2f8;
  undefined1 uStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2a0;
  undefined1 uStack_298;
  undefined1 uStack_294;
  ulong uStack_290;
  undefined8 uStack_288;
  byte bStack_280;
  undefined1 auStack_278 [8];
  undefined4 uStack_270;
  undefined1 auStack_268 [88];
  undefined1 auStack_1d0 [16];
  byte bStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [32];
  undefined1 uStack_150;
  undefined1 auStack_138 [56];
  undefined1 uStack_100;
  undefined1 auStack_f8 [104];
  double adStack_90 [12];
  
  func_0x0001077ee32c();
  func_0x0001077f0e64();
  if (param_1 == 0) {
    plVar4 = param_2 + 1;
    (**(code **)(*param_2 + 0x68))(adStack_90,plVar4);
    func_0x000107262398(auStack_170,adStack_90,0x1138369c0);
    func_0x0001077ef544();
    pdVar2 = (double *)auStack_170;
    func_0x000104c2d614();
    if ((int)pdVar2 == 0) {
      func_0x000104c318bc(auStack_1a8,auStack_170);
      func_0x000107339874();
      func_0x0001077f0ce4();
    }
    else {
      func_0x0001077f0a9c();
      unaff_x19 = pdVar2;
    }
    func_0x0001077effcc();
  }
  else {
    uStack_1b0 = 3;
    func_0x0001077ef09c(adStack_90,auStack_1b8);
    func_0x0001077efde8();
    auStack_170[0] = 0;
    uStack_150 = 0;
    func_0x0001077ef358(auStack_1d0,adStack_90,param_2);
    func_0x0001072c94e0(auStack_170);
    if ((bStack_1c0 & 1) == 0) {
      func_0x0001077f0a9c();
    }
    else {
      auStack_138[0] = 0;
      uStack_100 = 0;
      func_0x000107386428(auStack_f8,auStack_1d0,auStack_138);
      func_0x00010738646c();
      func_0x000107324484(auStack_f8);
      func_0x00010724b3d8(auStack_138);
    }
    func_0x0001077f0da4();
    unaff_x19 = adStack_90;
    func_0x0001072ca718();
    plVar4 = param_2;
  }
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_138);
  func_0x0001077f0da4();
  iVar1 = (int)adStack_90;
  func_0x0001072ca718();
  func_0x0001077ef068();
  func_0x0001077ef424();
  func_0x0001077f0e64();
  if (iVar1 == 0) {
    plVar3 = plVar4 + 1;
    (**(code **)(*plVar4 + 0x58))();
    dVar5 = 0.0;
    if (((ulong)plVar3 & 0x100000000) != 0) {
      dVar5 = (double)SUB84(plVar3,0);
    }
    *unaff_x19 = dVar5;
    *(undefined4 *)(unaff_x19 + 7) = 1;
  }
  else {
    uStack_270 = 1;
    func_0x0001077ef09c(auStack_268,auStack_278);
    func_0x0001072c9884(auStack_278);
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
    uStack_2a0 = 0;
    func_0x0001077ef358(&uStack_290,auStack_268,plVar4);
    func_0x0001072c94e0(&uStack_2c0);
    if ((bStack_280 & 1) == 0) {
      *unaff_x19 = 0.0;
      *(undefined4 *)(unaff_x19 + 7) = 1;
    }
    else {
      uStack_2b8 = uStack_288;
      uStack_2c0 = uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x0001077b0f58(&dStack_300,&uStack_2c0);
      func_0x0001072c9b9c(&uStack_2c0);
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      unaff_x19[1] = dStack_2f8;
      *unaff_x19 = dStack_300;
      dStack_300 = 0.0;
      dStack_2f8 = 0.0;
      *(undefined1 *)(unaff_x19 + 2) = uStack_2f0;
      unaff_x19[4] = dStack_2e0;
      unaff_x19[3] = dStack_2e8;
      dStack_2e8 = 0.0;
      dStack_2e0 = 0.0;
      unaff_x19[5] = 0.0;
      unaff_x19[6] = 0.0;
      *(undefined4 *)(unaff_x19 + 7) = 2;
      func_0x0001077f1440();
    }
    func_0x0001072c95d0(&uStack_290);
    func_0x0001077f0a80();
  }
  return;
}



/* Entry: 1077dcb60; end: 1077dcb63;  */

void FUN_1077dcb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ddef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077dd4f0; end: 1077dd5cf;  */

long FUN_1077dd4f0(long param_1)

{
  func_0x000107266a30(param_1 + 0x490);
  func_0x000107266a30(param_1 + 0x458);
  func_0x000107432d98(param_1 + 0x410);
  func_0x000107266a30(param_1 + 0x3d8);
  func_0x0001072ca524(param_1 + 0x398);
  func_0x000107266a30(param_1 + 0x360);
  func_0x000107266a30(param_1 + 0x328);
  func_0x000107266a30(param_1 + 0x2f0);
  func_0x000107266a30(param_1 + 0x2b8);
  func_0x000107266a30(param_1 + 0x280);
  func_0x000107432d98(param_1 + 0x238);
  func_0x000107432d98(param_1 + 0x1f0);
  func_0x0001072ca37c(param_1 + 0x158);
  func_0x0001072ca524(param_1 + 0x110);
  func_0x000107266a30(param_1 + 0xd8);
  func_0x000107266a30(param_1 + 0xa0);
  func_0x0001077f1244();
  return param_1;
}



/* Entry: 1077dd850; end: 1077dd96f;  */

/* WARNING: Possible PIC construction at 0x0001077dd898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077dd8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077dd89c) */
/* WARNING: Removing unreachable block (ram,0x0001077dd8f4) */
/* WARNING: Removing unreachable block (ram,0x0001077dd904) */
/* WARNING: Removing unreachable block (ram,0x0001077dd908) */
/* WARNING: Removing unreachable block (ram,0x0001077dd910) */

void FUN_1077dd850(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 uStack_38;
  
  uVar4 = param_3;
  func_0x0001077ee3e4();
  if (uVar4 < 0x26) {
    uStack_5e = 0;
    param_2 = &uStack_5e;
    param_2[param_3] = 0;
    uVar4 = 0x26;
    uStack_60 = (short)param_3;
  }
  else {
    uVar2 = param_3 == 0x51;
    if (param_3 < 0x52) {
      func_0x0001077f12fc(&uStack_60);
      puVar1 = (undefined2 *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
      *puVar1 = (short)param_3;
      *(undefined1 *)((long)puVar1 + param_3 + 2) = 0;
      param_2 = (undefined1 *)(CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60)) + 2);
      uVar4 = 0x52;
    }
    else {
      uStack_38 = extraout_x8;
      func_0x0001077dd9a0(&uStack_60);
      func_0x0001077efeb8();
      func_0x0001072625b4();
      func_0x0001077ef56c();
      func_0x0001077ee344(uStack_38);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001077ef244();
      func_0x000104c2f784();
      func_0x0001077ef068();
    }
  }
  puVar3 = param_2;
  func_0x0001077ef5bc(uVar4);
  func_0x0001073a3de0();
  param_2[(long)puVar3] = 0;
  return;
}



/* Entry: 1077ddbd0; end: 1077ddbeb;  */

void FUN_1077ddbd0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077ddd3c; end: 1077ddd5b;  */

void FUN_1077ddd3c(void)

{
  func_0x0001077ddd5c();
  return;
}



/* Entry: 1077ddf40; end: 1077ddf67;  */

void FUN_1077ddf40(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077ddfc0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077de0d0; end: 1077de0e3;  */

void FUN_1077de0d0(void)

{
  func_0x0001077de0e4();
  return;
}



/* Entry: 1077de268; end: 1077de27b;  */

long FUN_1077de268(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [40];
  
  param_1 = (long *)*param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = (param_2[1] - lVar1) / 0x88;
  if (0 < lVar2) {
    lVar6 = param_1[1];
    if ((param_1[2] - lVar6) / 0x88 < lVar2) {
      plVar4 = param_1;
      func_0x0001077de50c(param_1,(lVar6 - *param_1) / 0x88 + lVar2);
      func_0x0001077dea24(auStack_78,plVar4,(lVar5 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,lVar1,lVar2);
      func_0x0001077de5c8(param_1,auStack_78,lVar5);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar6 = lVar6 - lVar5;
      lVar3 = lVar2 - lVar6 / 0x88;
      if (lVar3 == 0 || lVar2 < lVar6 / 0x88) {
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      else {
        func_0x0001077de3d4(param_1,lVar1 + lVar6,param_2[1],lVar3);
        if (lVar6 < 1) {
          return lVar5;
        }
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return lVar5;
}



/* Entry: 1077de688; end: 1077de69b;  */

void FUN_1077de688(void)

{
  func_0x0001077ddd98();
  return;
}



/* Entry: 1077de82c; end: 1077de843;  */

void FUN_1077de82c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x78) != 0) {
    func_0x0001077f1770();
    func_0x0001077de86c();
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 1077de920; end: 1077de94b;  */

void FUN_1077de920(void)

{
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000107780f80();
  *(undefined4 *)(unaff_x20 + 0x78) = 1;
  return;
}



/* Entry: 1077de9f8; end: 1077dea57;  */

void FUN_1077de9f8(void)

{
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 3;
  return;
}



/* Entry: 1077dec90; end: 1077dec93;  */

ulong FUN_1077dec90(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 in_ZR;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar9 = auStack_60;
  func_0x00010775f5c4(param_1,"");
  func_0x000100060964(auStack_60);
  uVar7 = unaff_x19;
  func_0x00010775f02c();
  func_0x00010775f5fc();
  func_0x00010775f5b0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010775f5fc();
  func_0x00010775f5dc();
  uVar8 = uVar7;
  func_0x000104c32db4();
  if (((int)uVar8 == 0) || (*(char *)(uVar7 + 0x38) != puVar9[0x38])) {
    return 0;
  }
  cVar5 = *(char *)(uVar7 + 0x58);
  if (cVar5 != puVar9[0x58] || cVar5 == '\0') {
    return (ulong)(cVar5 == puVar9[0x58]);
  }
  bVar3 = *(byte *)(uVar7 + 0x57);
  uVar8 = *(ulong *)(uVar7 + 0x48);
  if (-1 < (char)bVar3) {
    uVar8 = (ulong)bVar3;
  }
  bVar4 = puVar9[0x57];
  uVar1 = *(ulong *)(puVar9 + 0x48);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar8 == uVar1) {
    plVar6 = (long *)*(long *)(uVar7 + 0x40);
    if (-1 < (char)bVar3) {
      plVar6 = (long *)(uVar7 + 0x40);
    }
    plVar2 = (long *)*(long *)(puVar9 + 0x40);
    if (-1 < (char)bVar4) {
      plVar2 = (long *)(puVar9 + 0x40);
    }
    func_0x000107c610b0(plVar6,plVar2);
    return (ulong)((int)plVar6 == 0);
  }
  return 0;
}



/* Entry: 1077df080; end: 1077df0cf;  */

undefined8 * FUN_1077df080(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    func_0x0001077ef6e4();
    func_0x000104becc68(param_1,param_3);
    func_0x0001077df0d0(param_1);
  }
  return param_1;
}



/* Entry: 1077df338; end: 1077df34b;  */

void FUN_1077df338(void)

{
  func_0x0001077df668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077df764; end: 1077df79b;  */

long FUN_1077df764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_DAT_1109de170);
  func_0x000104c2f714(lVar1 + 0x50);
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 1077e1244; end: 1077e1257;  */

void FUN_1077e1244(void)

{
  func_0x0001077e1cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e1d54; end: 1077e1deb;  */

undefined1 * FUN_1077e1d54(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d0 [416];
  
  func_0x0001077ee374();
  puVar2 = auStack_1d0;
  _bzero(puVar2,0x198);
  func_0x0001077f0be8();
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  while (uVar1 = lStack_1e8 == lStack_1e0, !(bool)uVar1) {
    func_0x0001077f1618();
    func_0x0001077f0c4c();
  }
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  do {
    func_0x0001077f00f4();
    func_0x0001077f0960();
  } while (!(bool)uVar1);
  func_0x0001077ef0b0();
  puVar4 = puVar3;
  func_0x0001077ef940(&PTR_DAT_1109de2a0);
  func_0x000104c2f714(puVar4 + 0x90);
  func_0x00010726afc0(puVar2);
  return puVar3;
}



/* Entry: 1077e1f58; end: 1077e219f;  */

void FUN_1077e1f58(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_78 [24];
  
  func_0x0001077efc88();
  func_0x0001077e29c0(&uStack_98);
  func_0x0001077e2a00(&uStack_c0,unaff_x20 + 8,param_3,param_4);
  func_0x0001077e263c(&uStack_98);
  if (*(int *)(unaff_x20 + 0x90) == 0) {
    bVar3 = 0;
  }
  else if (*(int *)(unaff_x20 + 0x90) == 1) {
    bVar3 = *(byte *)(unaff_x20 + 0x60);
  }
  else {
    bVar3 = (char)unaff_x20 + 0x60;
    func_0x0001077ef340();
    func_0x000107280464();
  }
  uStack_98 = 0;
  func_0x0001077f09f4();
  uStack_98 = 0;
  uVar4 = param_1;
  func_0x0001077f09f4();
  func_0x0001077e410c(auStack_78);
  if ((*(int *)(unaff_x20 + 0x150) == 0) || (*(int *)(unaff_x20 + 0x150) == 1)) {
    func_0x0001077f0cfc(&uStack_d8);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,auStack_78);
    func_0x0001077ef340(&uStack_d8,unaff_x20 + 0x108);
    func_0x00010727f9d8();
    func_0x0001077ef670();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[2] = uStack_b8;
  puVar1[1] = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar1[4] = uStack_a8;
  puVar1[3] = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_1;
  *(undefined4 *)(puVar1 + 6) = uVar4;
  *(byte *)(puVar1 + 5) = bVar3 & 1;
  puVar1[8] = uStack_d0;
  puVar1[7] = uStack_d8;
  puVar1[9] = uStack_c8;
  puVar2 = puVar1;
  func_0x0001077f0b1c();
  *puVar2 = &PTR_DAT_1109de838;
  func_0x0001078c1f90(&uStack_98,puVar1 + 1);
  func_0x0001077f100c();
  func_0x0001077f0ad8();
  func_0x0001077f0748();
  func_0x0001073ca0ec(&uStack_98,puVar1 + 6);
  func_0x0001074b019c(&uStack_98,puVar1 + 7);
  puVar1[10] = CONCAT44(uStack_94,uStack_98);
  func_0x0001077dd758(&uStack_98);
  func_0x0001077f0470();
  func_0x0001077effd4(puVar1 + 0xb);
  func_0x0001077ef670();
  func_0x0001077ef60c();
  func_0x0001077e263c(&uStack_c0);
  *unaff_x19 = puVar1;
  return;
}



/* Entry: 1077e2588; end: 1077e258f;  */

void FUN_1077e2588(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001077ef34c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001077e24b8(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e2734; end: 1077e275f;  */

void FUN_1077e2734(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef34c();
  func_0x00010727da70();
  func_0x0001077e2760(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1077e2858; end: 1077e2867;  */

undefined8 FUN_1077e2858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


