/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103206cbc; end: 103206ed3;  */

void FUN_103206cbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  
  lVar5 = param_1;
  lVar4 = param_2;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar1 = lVar5;
    func_0x000107c5faec();
    lVar2 = lVar4;
    func_0x000107c61170(lVar5);
    func_0x000107c3e950();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_2 != 0) {
        lVar5 = param_1;
        func_0x000107c3e544();
        func_0x000107c61180();
        if (lVar5 == 0) {
          lVar7 = 0;
          lVar5 = 0;
          lVar8 = lVar2;
        }
        else {
          lVar7 = lVar5;
          func_0x000107c5faec();
          lVar8 = lVar2;
          func_0x000107c61170(lVar5);
          lVar5 = lVar2;
        }
        lVar2 = param_1;
        func_0x000107c51d04();
        func_0x000107c61180();
        if (lVar2 == 0) {
          lVar6 = 0;
          lVar8 = 0;
        }
        else {
          lVar6 = lVar2;
          func_0x000107c5faec();
          func_0x000107c61170(lVar2);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          func_0x000107c5fadc(lVar7,lVar5);
          func_0x000107c6142c(lVar5);
        }
        if (lVar8 == 0) {
          lVar6 = 0;
        }
        else {
          func_0x000107c5fadc(lVar6,lVar8);
          func_0x000107c6142c(lVar8);
        }
        lVar5 = param_2;
        func_0x000107c614f0(param_2);
        puVar3 = PTR_PTR_1126b14b8;
        func_0x000107c610f8(PTR_PTR_1126b14b8);
        func_0x000107c4598c();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        FUN_10326d3a8(lVar1,lVar4,puVar3,lVar5);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(param_2);
        func_0x000107c6142c(lVar4);
        func_0x000107c61170(puVar3);
        return;
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_68 = 0;
  func_0x000100854cb0(&uStack_68);
  return;
}



/* Entry: 103206ed4; end: 103206fe3;  */

undefined1  [16]
FUN_103206ed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,PTR___sSiN_11034deb0,6);
  if (uVar1 == 0) {
    auStack_90[0] = 0;
  }
  auVar4._8_4_ = uVar1 ^ 1;
  auVar4._0_8_ = auStack_90[0];
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 103206fe4; end: 1032070ef;  */

undefined1 FUN_103206fe4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_90[0] = 2;
  }
  return auStack_90[0];
}



/* Entry: 1032070f0; end: 10320712f;  */

void FUN_1032070f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103207130; end: 103207137;  */

undefined8 * FUN_103207130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 103207138; end: 103207187;  */

void FUN_103207138(void)

{
  func_0x000100d3cff8();
  return;
}



/* Entry: 103207188; end: 10320736b;  */

void FUN_103207188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1106252f8;
  func_0x000107c613fc(&UNK_1106252f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110625320;
  func_0x000107c613fc(&UNK_110625320,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x0001000b64ac(FUN_10320736c,puVar2);
  return;
}



/* Entry: 10320736c; end: 103207377;  */

void FUN_10320736c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  ppuVar7 = &puStack_70;
  pcVar5 = "observeImage(for:)";
  func_0x0001000c10c0("observeImage(for:)");
  func_0x000107c61180();
  puVar6 = &UNK_110625348;
  func_0x000107c613fc(&UNK_110625348,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  pcStack_50 = FUN_10320746c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110625360;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(pcVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar5);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 103207378; end: 10320746b;  */

void FUN_103207378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    pcStack_68 = FUN_103207498;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1013c3000;
    puStack_70 = &UNK_110625388;
    ppuVar2 = &puStack_88;
    uStack_60 = param_4;
    func_0x000107c60bc4(ppuVar2);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar1);
    func_0x000107c45084(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10320746c; end: 103207497;  */

void FUN_10320746c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5fadc(uVar3,uVar1);
    pcStack_68 = FUN_103207498;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1013c3000;
    puStack_70 = &UNK_110625388;
    ppuVar4 = &puStack_88;
    uStack_60 = uVar5;
    func_0x000107c60bc4(ppuVar4);
    uVar1 = uStack_60;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar1);
    func_0x000107c45084(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103207498; end: 1032074bb;  */

void FUN_103207498(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1032074bc; end: 1032074c3;  */

void FUN_1032074bc(long param_1,long param_2)

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



/* Entry: 1032074c4; end: 1032076af;  */

long FUN_1032074c4(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  uVar3 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[0xc];
  uStack_d8 = unaff_x20[0xf];
  uStack_e0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x118) = unaff_x20[0xd];
  *(undefined8 *)(lVar1 + 0x110) = uVar3;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x140) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x138) = uStack_e0;
  FUN_103207b4c(&uStack_70,auStack_f0,0x112f4b538,&UNK_10db9ab30);
  FUN_103207b4c(&uStack_80,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_90,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_a0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_b0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_d0,auStack_f0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103207b4c(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1032076b0; end: 103207703;  */

void FUN_1032076b0(undefined8 *param_1)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103207a38(&uStack_a0);
  func_0x000103208060(&uStack_a0);
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[0xf] = uStack_28;
  param_1[0xe] = uStack_30;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 103207704; end: 103207707;  */

long FUN_103207704(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x10;
  *(undefined8 *)(lVar1 + 0x10) = 8;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  uVar3 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xd8) = uVar2;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[0xc];
  uStack_d8 = unaff_x20[0xf];
  uStack_e0 = unaff_x20[0xe];
  *(undefined8 *)(lVar1 + 0x118) = unaff_x20[0xd];
  *(undefined8 *)(lVar1 + 0x110) = uVar3;
  *(undefined8 *)(lVar1 + 0x150) = uVar2;
  *(undefined ***)(lVar1 + 0x158) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x140) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x138) = uStack_e0;
  FUN_103207b4c(&uStack_70,auStack_f0,0x112f4b538,&UNK_10db9ab30);
  FUN_103207b4c(&uStack_80,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_90,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_a0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_b0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_c0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  FUN_103207b4c(&uStack_d0,auStack_f0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103207b4c(&uStack_e0,auStack_f0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 103207708; end: 10320772f;  */

void FUN_103207708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93a98();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103207730; end: 1032077b3;  */

long FUN_103207730(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 1032077b4; end: 103207a37;  */

uint FUN_1032077b4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_240 [128];
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
  undefined8 uStack_160;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &UNK_10db9d5f8;
  func_0x000107c614e0(&UNK_10db9d5f8);
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  iVar1 = (int)&uStack_c0;
  func_0x000103208064();
  if (iVar1 == 1) {
    func_0x000107c61574(puVar2);
LAB_103207818:
    uVar7 = 0;
  }
  else {
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_158 = uStack_58;
    uStack_160 = uStack_60;
    uStack_148 = uStack_48;
    uStack_150 = uStack_50;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    FUN_10320807c(&uStack_1c0,auStack_240);
    puVar3 = &uStack_140;
    func_0x000103207174();
    func_0x0001032080b0(&uStack_c0);
    func_0x000107c61574(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x000107c40110(puVar3);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c4a3f0();
      uVar7 = (uint)puVar5;
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      goto LAB_1032079cc;
    }
    puVar2 = &UNK_10db9d620;
    func_0x000107c614e0(&UNK_10db9d620);
    FUN_10320807c(&uStack_1c0,auStack_240);
    uVar6 = 0;
    func_0x00010320714c();
    func_0x0001032080b0(&uStack_c0);
    func_0x000107c61574(puVar2);
    if ((uVar6 & 1) == 0) {
      puVar2 = &UNK_10db9d640;
      func_0x000107c614e0(&UNK_10db9d640);
      FUN_10320807c(&uStack_1c0,auStack_240);
      uVar6 = 0;
      func_0x00010320714c();
      func_0x0001032080b0(&uStack_c0);
      func_0x000107c61574(puVar2);
      if ((uVar6 & 1) == 0) {
        puVar2 = &UNK_10db9d660;
        func_0x000107c614e0(&UNK_10db9d660);
        FUN_10320807c(&uStack_1c0,auStack_240);
        uVar6 = 0;
        func_0x00010320714c();
        func_0x0001032080b0(&uStack_c0);
        func_0x000107c61574(puVar2);
        if ((uVar6 & 1) == 0) {
          puVar2 = &UNK_10db9d680;
          func_0x000107c614e0(&UNK_10db9d680);
          FUN_10320807c(&uStack_1c0,auStack_240);
          uVar6 = 0;
          func_0x00010320714c();
          func_0x0001032080b0(&uStack_c0);
          func_0x000107c61574(puVar2);
          if ((uVar6 & 1) == 0) {
            puVar2 = &UNK_10db9d6a0;
            func_0x000107c614e0(&UNK_10db9d6a0);
            FUN_10320807c(&uStack_1c0,auStack_240);
            uVar7 = (uint)&uStack_140;
            func_0x00010320714c();
            func_0x0001032080b0(&uStack_c0);
            func_0x000107c61574(puVar2);
            if ((uVar7 & 0xff) != 2) goto LAB_1032079cc;
            goto LAB_103207818;
          }
        }
      }
    }
    uVar7 = 1;
  }
LAB_1032079cc:
  return uVar7 & 1;
}



/* Entry: 103207a38; end: 103207b4b;  */

void FUN_103207a38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0caf8;
  uVar8 = param_3;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0d898;
  uVar9 = uVar8;
  func_0x000107c5faec();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0dcb8;
  uVar10 = uVar9;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e478;
  uVar11 = uVar10;
  func_0x000107c5faec();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e6d8;
  uVar12 = uVar11;
  func_0x000107c5faec();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0eab8;
  uVar13 = uVar12;
  func_0x000107c5faec();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0dc98;
  uVar14 = uVar13;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar8;
  param_1[4] = ppuVar2;
  param_1[5] = uVar9;
  param_1[6] = ppuVar3;
  param_1[7] = uVar10;
  param_1[8] = ppuVar4;
  param_1[9] = uVar11;
  param_1[10] = ppuVar5;
  param_1[0xb] = uVar12;
  param_1[0xc] = ppuVar6;
  param_1[0xd] = uVar13;
  param_1[0xe] = ppuVar7;
  param_1[0xf] = uVar14;
  return;
}



/* Entry: 103207b4c; end: 103207c17;  */

undefined8 FUN_103207b4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103207c18; end: 103207ccb;  */

undefined8 * FUN_103207c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  return param_1;
}



/* Entry: 103207ccc; end: 103207df7;  */

undefined8 * FUN_103207ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103207df8; end: 103207e9b;  */

undefined8 * FUN_103207df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103207e9c; end: 103207f5b;  */

int FUN_103207e9c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103207f5c; end: 103207fcb;  */

undefined8 * FUN_103207f5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103207fcc; end: 10320807b;  */

int FUN_103207fcc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320807c; end: 1032080f7;  */

undefined8 FUN_10320807c(undefined8 param_1,undefined8 param_2)

{
  FUN_103207c18(param_2,param_1,&UNK_110625448);
  return param_2;
}



/* Entry: 1032080f8; end: 1032080ff;  */

undefined8 * FUN_1032080f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103208100; end: 103208253;  */

void FUN_103208100(undefined8 *param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = (undefined8 *)PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1311e0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c61174();
  puVar5 = puVar3;
  if ((param_3 == '\x01') || (param_2 != 4)) {
    func_0x000103bb5acc();
  }
  else {
    func_0x000103b812b0();
  }
  uVar4 = *puVar5;
  uVar1 = puVar5[1];
  FUN_103208254();
  func_0x000107c61434(uVar1);
  func_0x000107c61170(puVar3);
  param_1[3] = &UNK_1106255b0;
  param_1[4] = puVar5;
  *param_1 = puVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  return;
}



/* Entry: 103208254; end: 103208293;  */

void FUN_103208254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9d708;
  func_0x000107c61520(&DAT_10db9d708,&UNK_1106255b0);
  puRam0000000112f4c638 = puVar1;
  return;
}



/* Entry: 103208294; end: 103208477;  */

long FUN_103208294(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xe;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4c640;
  func_0x0001000285a8(0x112f4c640,&UNK_10db9d6c0);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  uVar3 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  uVar4 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar4;
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  FUN_103209098(&uStack_70,auStack_e0,0x112f4b528,&UNK_10db9ab20);
  FUN_103209098(&uStack_80,auStack_e0,0x112f4c640,&UNK_10db9d6c0);
  FUN_103209098(&uStack_90,auStack_e0,0x112f4c640,&UNK_10db9d6c0);
  FUN_103209098(&uStack_a0,auStack_e0,0x112f4b520,&UNK_10db9b280);
  FUN_103209098(&uStack_b0,auStack_e0,0x112f4c648,&UNK_10db9d6d0);
  FUN_103209098(&uStack_c0,auStack_e0,0x112f4b520,&UNK_10db9b280);
  FUN_103209098(&uStack_d0,auStack_e0,0x112f4c648,&UNK_10db9d6d0);
  return lVar1;
}



/* Entry: 103208478; end: 1032084c3;  */

void FUN_103208478(undefined8 *param_1)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103208fac(&uStack_90);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 1032084c4; end: 1032084c7;  */

long FUN_1032084c4(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
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
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xe;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4c640;
  func_0x0001000285a8(0x112f4c640,&UNK_10db9d6c0);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  uVar3 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  uVar4 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  *(undefined8 *)(lVar1 + 200) = unaff_x20[9];
  *(undefined8 *)(lVar1 + 0xc0) = uVar4;
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_b8;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_c0;
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  *(undefined8 *)(lVar1 + 0x128) = uVar3;
  *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x118) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x110) = uStack_d0;
  FUN_103209098(&uStack_70,auStack_e0,0x112f4b528,&UNK_10db9ab20);
  FUN_103209098(&uStack_80,auStack_e0,0x112f4c640,&UNK_10db9d6c0);
  FUN_103209098(&uStack_90,auStack_e0,0x112f4c640,&UNK_10db9d6c0);
  FUN_103209098(&uStack_a0,auStack_e0,0x112f4b520,&UNK_10db9b280);
  FUN_103209098(&uStack_b0,auStack_e0,0x112f4c648,&UNK_10db9d6d0);
  FUN_103209098(&uStack_c0,auStack_e0,0x112f4b520,&UNK_10db9b280);
  FUN_103209098(&uStack_d0,auStack_e0,0x112f4c648,&UNK_10db9d6d0);
  return lVar1;
}



/* Entry: 1032084c8; end: 1032084ef;  */

void FUN_1032084c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93370();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1032084f0; end: 103208573;  */

long FUN_1032084f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 103208574; end: 1032087d7;  */

void FUN_103208574(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_2a0 [112];
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
  long lStack_1b8;
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
  undefined8 uStack_160;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_70 = param_2[0xe];
  uVar3 = param_2[0xf];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  lVar1 = param_2[0x10];
  uVar7 = param_2[0x11];
  puVar2 = &UNK_10db9d838;
  func_0x000107c614e0(&UNK_10db9d838);
  if (lVar1 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(lVar1);
    lVar5 = lVar1;
    FUN_103206ed4(uVar3,lVar1,uVar7,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
    if (((uint)lVar5 & 0xff) != 1) {
      if (uVar3 < 3) {
        uVar7 = *(undefined8 *)(&UNK_10db9d8b8 + uVar3 * 8);
        goto LAB_103208634;
      }
      goto LAB_1032087ac;
    }
  }
  puVar2 = &UNK_10db9d858;
  func_0x000107c614e0(&UNK_10db9d858);
  uStack_178 = param_2[9];
  uStack_180 = param_2[8];
  uStack_168 = param_2[0xb];
  uStack_170 = param_2[10];
  uStack_158 = param_2[0xd];
  uStack_160 = param_2[0xc];
  lStack_1b8 = param_2[1];
  uStack_1c0 = *param_2;
  uStack_1a8 = param_2[3];
  uStack_1b0 = param_2[2];
  uStack_198 = param_2[5];
  uStack_1a0 = param_2[4];
  uStack_188 = param_2[7];
  uStack_190 = param_2[6];
  if (lStack_1b8 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_1e8 = param_2[9];
    uStack_1f0 = param_2[8];
    uStack_1d8 = param_2[0xb];
    uStack_1e0 = param_2[10];
    uStack_208 = param_2[5];
    uStack_210 = param_2[4];
    uStack_1f8 = param_2[7];
    uStack_200 = param_2[6];
    uStack_1c8 = param_2[0xd];
    uStack_1d0 = param_2[0xc];
    uStack_228 = param_2[1];
    uStack_230 = *param_2;
    uStack_218 = param_2[3];
    uStack_220 = param_2[2];
    uStack_150 = uStack_230;
    uStack_148 = uStack_228;
    uStack_140 = uStack_220;
    uStack_138 = uStack_218;
    uStack_130 = uStack_210;
    uStack_128 = uStack_208;
    uStack_120 = uStack_200;
    uStack_118 = uStack_1f8;
    uStack_110 = uStack_1f0;
    uStack_108 = uStack_1e8;
    uStack_100 = uStack_1e0;
    uStack_f8 = uStack_1d8;
    uStack_f0 = uStack_1d0;
    uStack_e8 = uStack_1c8;
    func_0x000103209954(&uStack_230,auStack_2a0);
    puVar4 = &uStack_150;
    FUN_1032065ac(puVar4,&uStack_e0,puVar2);
    func_0x000103209988(&uStack_1c0);
    func_0x000107c61574(puVar2);
    if ((((uint)puVar4 & 0xff) != 2) && (((ulong)puVar4 & 1) != 0)) {
      puVar2 = &UNK_10db9d878;
      func_0x000107c614e0(&UNK_10db9d878);
      func_0x000103209954(&uStack_230,auStack_2a0);
      puVar4 = &uStack_150;
      puVar6 = &uStack_e0;
      FUN_103206480(puVar4,puVar6,puVar2);
      func_0x000103209988(&uStack_1c0);
      func_0x000107c61574(puVar2);
      if ((((uint)puVar6 & 0xff) != 1) && ((puVar4 != (undefined8 *)0x0 && (0 < (long)puVar4)))) {
        puVar2 = &UNK_10db9d898;
        func_0x000107c614e0(&UNK_10db9d898);
        func_0x000103209954(&uStack_230,auStack_2a0);
        puVar4 = &uStack_150;
        puVar6 = &uStack_e0;
        FUN_103206480(puVar4,puVar6,puVar2);
        func_0x000103209988(&uStack_1c0);
        func_0x000107c61574(puVar2);
        if ((((uint)puVar6 & 0xff) != 1) && (puVar4 < (undefined8 *)0x3)) {
          uVar7 = *(undefined8 *)(&UNK_10db9d8b8 + (long)puVar4 * 8);
LAB_103208634:
          *param_1 = 0;
          param_1[1] = uVar7;
          return;
        }
      }
    }
  }
LAB_1032087ac:
  param_1[1] = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1032087d8; end: 103208a53;  */

void FUN_1032087d8(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 auStack_300 [112];
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 *puStack_c0;
  long lStack_b8;
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
  
  uStack_168 = param_2[9];
  uStack_170 = param_2[8];
  uStack_158 = param_2[0xb];
  uStack_160 = param_2[10];
  uStack_148 = param_2[0xd];
  uStack_150 = param_2[0xc];
  uStack_140 = param_2[0xe];
  uStack_1a8 = param_2[1];
  uStack_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  uStack_188 = param_2[5];
  uStack_190 = param_2[4];
  uStack_178 = param_2[7];
  uStack_180 = param_2[6];
  puVar1 = &UNK_10db9d7b0;
  func_0x000107c614e0();
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  lStack_b8 = param_2[1];
  puStack_c0 = (undefined8 *)*param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  if (lStack_b8 == 0) {
    func_0x000107c61574();
    puStack_290 = (undefined8 *)0x0;
LAB_10320891c:
    *param_1 = (long)puStack_290;
    param_1[1] = 0;
    puVar1 = &UNK_10db9d7d0;
    func_0x000107c614e0(&UNK_10db9d7d0);
    if (lStack_b8 == 0) {
      func_0x000107c61574(puVar1);
      param_1[2] = 0;
      param_1[3] = 0;
      uVar5 = 2;
      goto LAB_103208a34;
    }
  }
  else {
    uStack_1d8 = param_2[9];
    uStack_1e0 = param_2[8];
    uStack_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    uStack_1b8 = param_2[0xd];
    uStack_1c0 = param_2[0xc];
    lStack_218 = param_2[1];
    puStack_220 = (undefined8 *)*param_2;
    uStack_208 = param_2[3];
    uStack_210 = param_2[2];
    uStack_1f8 = param_2[5];
    uStack_200 = param_2[4];
    uStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    uStack_130 = puStack_220;
    uStack_128 = lStack_218;
    uStack_120 = uStack_210;
    uStack_118 = uStack_208;
    uStack_110 = uStack_200;
    uStack_108 = uStack_1f8;
    uStack_100 = uStack_1f0;
    uStack_f8 = uStack_1e8;
    uStack_f0 = uStack_1e0;
    uStack_e8 = uStack_1d8;
    uStack_e0 = uStack_1d0;
    uStack_d8 = uStack_1c8;
    uStack_d0 = uStack_1c0;
    uStack_c8 = uStack_1b8;
    func_0x000103209954(&puStack_220,&puStack_290);
    puStack_290 = &uStack_130;
    puVar4 = &uStack_1b0;
    FUN_103206810(puStack_290,puVar4,puVar1);
    func_0x000103209988(&puStack_c0);
    func_0x000107c61574();
    if (puVar4 == (undefined8 *)0x0) goto LAB_10320891c;
    puStack_288 = puVar4;
    func_0x000100e8b654();
    puVar2 = PTR___sSSN_11034da80;
    func_0x000107c601f8();
    func_0x000107c6142c(puVar4);
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar1;
    puVar1 = &UNK_10db9d7d0;
    func_0x000107c614e0(&UNK_10db9d7d0);
  }
  uStack_258 = uStack_88;
  uStack_260 = uStack_90;
  uStack_248 = uStack_78;
  uStack_250 = uStack_80;
  uStack_238 = uStack_68;
  uStack_240 = uStack_70;
  uStack_228 = uStack_58;
  uStack_230 = uStack_60;
  puStack_288 = (undefined8 *)lStack_b8;
  puStack_290 = puStack_c0;
  uStack_278 = uStack_a8;
  uStack_280 = uStack_b0;
  uStack_268 = uStack_98;
  uStack_270 = uStack_a0;
  lStack_218 = lStack_b8;
  puStack_220 = puStack_c0;
  uStack_208 = uStack_a8;
  uStack_210 = uStack_b0;
  uStack_1c8 = uStack_68;
  uStack_1d0 = uStack_70;
  uStack_1b8 = uStack_58;
  uStack_1c0 = uStack_60;
  uStack_1f8 = uStack_98;
  uStack_200 = uStack_a0;
  uStack_1e8 = uStack_88;
  uStack_1f0 = uStack_90;
  uStack_1d8 = uStack_78;
  uStack_1e0 = uStack_80;
  func_0x000103209954(&puStack_290,auStack_300);
  ppuVar3 = &puStack_220;
  FUN_1032066d4(ppuVar3,&uStack_1b0,puVar1);
  func_0x000103209988(&puStack_c0);
  func_0x000107c61574(puVar1);
  param_1[2] = (long)ppuVar3;
  puVar1 = &UNK_10db9d7f8;
  func_0x000107c614e0(&UNK_10db9d7f8);
  func_0x000103209954(&puStack_290,auStack_300);
  ppuVar3 = &puStack_220;
  FUN_1032066d4(ppuVar3,&uStack_1b0,puVar1);
  func_0x000103209988(&puStack_c0);
  func_0x000107c61574(puVar1);
  param_1[3] = (long)ppuVar3;
  puVar1 = &UNK_10db9d818;
  func_0x000107c614e0(&UNK_10db9d818);
  func_0x000103209954(&puStack_290,auStack_300);
  ppuVar3 = &puStack_220;
  FUN_1032065ac(ppuVar3,&uStack_1b0,puVar1);
  uVar5 = SUB81(ppuVar3,0);
  func_0x000103209988(&puStack_c0);
  func_0x000107c61574(puVar1);
LAB_103208a34:
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Entry: 103208a54; end: 103208b93;  */

uint FUN_103208a54(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = param_1[2];
  uVar6 = param_1[3];
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  uVar7 = param_2[3];
  if (param_1[1] == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    if ((uVar2 != *param_2 || param_1[1] != uVar5) && (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar4 == 0) {
    if (uVar3 == 0) {
LAB_103208b0c:
      uVar1 = (uint)(uVar6 == 0 && uVar7 == 0);
      if (uVar6 == 0) {
        return uVar1;
      }
      if (uVar7 != 0) {
        FUN_103209914(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61174(uVar7);
        func_0x000107c61174(uVar6);
        uVar5 = uVar6;
        func_0x000107c60118();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        return (uint)uVar5 & 1;
      }
      return uVar1;
    }
  }
  else if (uVar3 != 0) {
    FUN_103209914(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(uVar3);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c60118();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_103208b0c;
  }
  return 0;
}



/* Entry: 103208b94; end: 103208e0b;  */

void FUN_103208b94(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_34f;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined2 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
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
  undefined8 uStack_25f;
  long lStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
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
  undefined8 uStack_1af;
  undefined1 auStack_198 [312];
  
  if (param_3 == 0) {
    func_0x0001032098c8(auStack_198);
  }
  else {
    uVar1 = 2;
    if (param_4 == 0) {
      uVar1 = 3;
    }
    lStack_300 = param_4;
    puStack_2f8 = param_5;
    func_0x0001031e8a28(&lStack_300);
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = uStack_25f;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    puStack_248 = puStack_2f8;
    lStack_250 = lStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    func_0x0001031e6100(&lStack_250);
    uStack_378 = uStack_1d8;
    uStack_380 = uStack_1e0;
    uStack_368 = uStack_1c8;
    uStack_370 = uStack_1d0;
    uStack_360 = uStack_1c0;
    uStack_34f = uStack_1af;
    uStack_3b8 = uStack_218;
    uStack_3c0 = uStack_220;
    uStack_3a8 = uStack_208;
    uStack_3b0 = uStack_210;
    uStack_398 = uStack_1f8;
    uStack_3a0 = uStack_200;
    uStack_388 = uStack_1e8;
    uStack_390 = uStack_1f0;
    puStack_3e8 = puStack_248;
    lStack_3f0 = lStack_250;
    uStack_3d8 = uStack_238;
    uStack_3e0 = uStack_240;
    uStack_3c8 = uStack_228;
    uStack_3d0 = uStack_230;
    lVar3 = 0x112d9f930;
    func_0x0001000285a8(0x112d9f930,&UNK_10db9f4c0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x000107c61174(param_4);
    func_0x000107c61434(param_11);
    func_0x000107c61434(param_3);
    func_0x000107c61174();
    func_0x000103b93d08();
    uVar5 = *param_5;
    uVar2 = param_5[1];
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c45a48();
    uVar5 = 0;
    FUN_103209914(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar3 + 0x58) = uVar5;
    *(undefined **)(lVar3 + 0x40) = puVar4;
    FUN_103209914(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c5ff4c();
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_418 = 0x656d686361747461;
    uStack_410 = 0xea0000000000746e;
    uStack_3f8 = 0;
    uStack_340 = 0;
    uStack_330 = param_10;
    uStack_328 = param_11;
    uStack_318 = 0x102;
    uStack_408 = param_2;
    lStack_400 = param_3;
    uStack_338 = uVar1;
    lStack_320 = lVar3;
    uStack_310 = param_7;
    uStack_308 = param_8;
    func_0x0001032098f8(&uStack_428);
    func_0x0001032098fc(param_7,param_8);
    func_0x000107c610b4(auStack_198,&uStack_428,0x128);
  }
  func_0x000107c610b4(param_1,auStack_198,0x128);
  return;
}



/* Entry: 103208e0c; end: 103208f73;  */

undefined8 FUN_103208e0c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  
  uVar8 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  pcVar2 = FUN_103208574;
  func_0x0001000bfde0(FUN_103208574,0,&UNK_11076a6f0);
  pcVar3 = pcVar2;
  FUN_1032090e0();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar2);
  uVar4 = 0x112f4c658;
  func_0x0001000285a8(0x112f4c658,&UNK_10db9d6d8);
  pcVar2 = FUN_1032087d8;
  func_0x0001000bfde0(FUN_1032087d8,0,uVar4);
  pcVar5 = FUN_103208a54;
  func_0x00010487de38(FUN_103208a54,0);
  func_0x000107c61574(pcVar2);
  pcVar2 = pcVar3;
  func_0x0001006c733c(pcVar3);
  func_0x000107c61574(pcVar5);
  puVar6 = &UNK_1106256f0;
  func_0x000107c613fc(&UNK_1106256f0,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  puVar7 = &UNK_110625718;
  func_0x000107c613fc(&UNK_110625718,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1032099d8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(uVar9);
  uVar4 = 0x112f4c660;
  func_0x0001000285a8(0x112f4c660,&UNK_10db9d6e0);
  uVar8 = 0x1032099e4;
  func_0x0001000bfde0(0x1032099e4,puVar7,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar7);
  return uVar8;
}



/* Entry: 103208f74; end: 103208fab;  */

undefined * FUN_103208f74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_103208254();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103208fac; end: 103209097;  */

/* WARNING: Possible PIC construction at 0x000103209038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103209048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320903c) */
/* WARNING: Removing unreachable block (ram,0x00010320904c) */

void FUN_103208fac(void)

{
  undefined **ppuVar1;
  
  func_0x000107c5faec();
  func_0x000107c5faec();
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d098);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0e358;
  func_0x000107c5faec();
  func_0x000103b93370();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(ppuVar1[1]);
  return;
}



/* Entry: 103209098; end: 1032090df;  */

undefined8 FUN_103209098(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1032090e0; end: 103209147;  */

void FUN_1032090e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa730;
  func_0x000107c61520(&UNK_10dcfa730,&UNK_11076a6f0);
  puRam0000000112f4c650 = puVar1;
  return;
}



/* Entry: 103209148; end: 10320914b;  */

void FUN_103209148(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined1 auStack_158 [296];
  
  (**(code **)(unaff_x20 + 0x10))
            (auStack_158,*param_2,param_2[1],param_2[2],param_2[3],*(undefined1 *)(param_2 + 4),
             param_2[5],param_2[6]);
  func_0x000107c610b4(param_1,auStack_158,0x128);
  return;
}



/* Entry: 10320914c; end: 10320916f;  */

void FUN_10320914c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103209170();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103209170; end: 1032091af;  */

void FUN_103209170(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9d730;
  func_0x000107c61520(&DAT_10db9d730,&UNK_1106255b0);
  puRam0000000112f4c668 = puVar1;
  return;
}



/* Entry: 1032091b0; end: 1032091b3;  */

void FUN_1032091b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c670 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c678;
  func_0x00010002969c(0x112f4c678,&UNK_10db9d728);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c670 = puVar2;
  return;
}



/* Entry: 1032091b4; end: 103209203;  */

void FUN_1032091b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c670 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c678;
  func_0x00010002969c(0x112f4c678,&UNK_10db9d728);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c670 = puVar2;
  return;
}



/* Entry: 103209204; end: 10320921b;  */

undefined ** FUN_103209204(void)

{
  return &PTR_DAT_110625500;
}



/* Entry: 10320921c; end: 10320927f;  */

void FUN_10320921c(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 103209280; end: 1032092e3;  */

undefined8 * FUN_103209280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032092e4; end: 103209327;  */

undefined8 * FUN_1032092e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103209328; end: 1032093bf;  */

int FUN_103209328(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032093c0; end: 10320943b;  */

long FUN_1032093c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10320943c; end: 1032094df;  */

undefined8 * FUN_10320943c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return param_1;
}



/* Entry: 1032094e0; end: 1032095eb;  */

undefined8 * FUN_1032094e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032095ec; end: 10320967f;  */

undefined8 * FUN_1032095ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103209680; end: 10320973b;  */

int FUN_103209680(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320973c; end: 1032097ab;  */

undefined8 * FUN_10320973c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032097ac; end: 10320983f;  */

int FUN_1032097ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103209840; end: 10320986b;  */

void FUN_103209840(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10320986c; end: 1032098c7;  */

void FUN_10320986c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined1 auStack_158 [296];
  
  (**(code **)(unaff_x20 + 0x10))
            (auStack_158,*param_2,param_2[1],param_2[2],param_2[3],*(undefined1 *)(param_2 + 4),
             param_2[5],param_2[6]);
  func_0x000107c610b4(param_1,auStack_158,0x128);
  return;
}



/* Entry: 1032098c8; end: 103209913;  */

void FUN_1032098c8(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103209914; end: 1032099cf;  */

void FUN_103209914(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032099d0; end: 103209a0f;  */

undefined8 * FUN_1032099d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103209a10; end: 103209bbb;  */

code * FUN_103209a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  pcVar1 = FUN_103209bbc;
  func_0x0001000c0ebc(FUN_103209bbc,0);
  uVar2 = 0x103209cb4;
  func_0x0001000c0ebc(0x103209cb4,0);
  func_0x000107c61574(pcVar1);
  uVar3 = 0x103209de0;
  func_0x0001000bfde0(0x103209de0,0,&UNK_1106258a0);
  func_0x000107c61574(uVar2);
  FUN_103209e48();
  func_0x0001000c2068();
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = 4;
  (**(code **)(lStack_58 + 8))(4,uStack_60,lStack_58);
  uVar3 = uVar4;
  func_0x0001006c733c();
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(auStack_78);
  puVar5 = &UNK_110625758;
  func_0x000107c613fc(&UNK_110625758,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  puVar6 = &UNK_110625780;
  func_0x000107c613fc(&UNK_110625780,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10320a2a4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  uVar2 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar1 = FUN_10320a2b8;
  func_0x0001000bfde0(FUN_10320a2b8,puVar6,uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar6);
  return pcVar1;
}



/* Entry: 103209bbc; end: 103209e47;  */

bool FUN_103209bbc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_180 [64];
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
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  puVar1 = &UNK_10db9d980;
  func_0x000107c614e0(&UNK_10db9d980);
  lStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  if (lStack_68 == 0) {
    func_0x000107c61574();
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uStack_138 = param_1[1];
    uStack_140 = *param_1;
    uStack_128 = param_1[3];
    uStack_130 = param_1[2];
    uStack_118 = param_1[5];
    uStack_120 = param_1[4];
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    FUN_1031e7474(&uStack_140,auStack_180);
    puVar3 = &uStack_100;
    FUN_1031e7358(puVar3,&uStack_c0,puVar1);
    func_0x0001031e74b0(&uStack_70);
    func_0x000107c61574(puVar1);
  }
  puVar2 = puVar3;
  func_0x000107c5c018();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2 == (undefined8 *)0x0;
}



/* Entry: 103209e48; end: 103209e87;  */

void FUN_103209e48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c6c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9d954;
  func_0x000107c61520(&UNK_10db9d954,&UNK_1106258a0);
  puRam0000000112f4c6c8 = puVar1;
  return;
}



/* Entry: 103209e88; end: 10320a2a3;  */

void FUN_103209e88(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 uStack_4c0;
  undefined7 uStack_4bf;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined2 uStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_30f;
  undefined *puStack_300;
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
  undefined8 uStack_25f;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
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
  undefined8 uStack_1af;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_ff;
  
  if (((uint)param_2 >> 8 & 1) == 0) {
    puVar7 = param_2;
    puVar4 = param_3;
    FUN_10320fa08();
    puVar6 = puVar4;
    puStack_3b0 = param_3;
    func_0x0001031e60f0(&puStack_3b0);
    uStack_278 = uStack_328;
    uStack_280 = uStack_330;
    uStack_270 = uStack_320;
    uStack_25f = uStack_30f;
    uStack_2b8 = uStack_368;
    uStack_2c0 = uStack_370;
    uStack_2a8 = uStack_358;
    uStack_2b0 = uStack_360;
    uStack_298 = uStack_348;
    uStack_2a0 = uStack_350;
    uStack_288 = uStack_338;
    uStack_290 = uStack_340;
    uStack_2f8 = uStack_3a8;
    puStack_300 = puStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    func_0x0001031e6100(&puStack_300);
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = uStack_25f;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_248 = uStack_2f8;
    puStack_250 = puStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    puVar5 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_3);
    func_0x000107c5b3c4();
    func_0x000107c61180();
    if (((ulong)param_2 & 1) == 0) {
      puVar2 = puVar5;
      FUN_10320f84c();
    }
    else {
      puVar2 = (undefined *)0x0;
      puVar6 = (undefined *)0x1;
    }
    uStack_418 = uStack_1c8;
    uStack_420 = uStack_1d0;
    uStack_410 = uStack_1c0;
    uStack_3ff = uStack_1af;
    uStack_458 = uStack_208;
    uStack_460 = uStack_210;
    uStack_448 = (undefined1)uStack_1f8;
    uStack_447 = (undefined7)((ulong)uStack_1f8 >> 8);
    uStack_450 = uStack_200;
    uStack_438 = (undefined1)uStack_1e8;
    uStack_437 = (undefined7)((ulong)uStack_1e8 >> 8);
    uStack_440 = (undefined1)uStack_1f0;
    uStack_43f = (undefined7)((ulong)uStack_1f0 >> 8);
    uStack_428 = uStack_1d8;
    uStack_430 = uStack_1e0;
    uStack_498 = uStack_248;
    puStack_4a0 = puStack_250;
    uStack_488 = uStack_238;
    uStack_490 = uStack_240;
    uStack_478 = uStack_228;
    uStack_480 = uStack_230;
    uStack_468 = uStack_218;
    uStack_470 = uStack_220;
    uStack_3e8 = 1;
    puStack_4b8 = puVar7;
    puStack_4b0 = puVar4;
    puStack_3e0 = puVar5;
    puStack_3c0 = puVar2;
    puStack_3b8 = puVar6;
    goto LAB_10320a21c;
  }
  if (param_5 == 0) {
LAB_103209fdc:
    uVar8 = 0;
    bVar1 = false;
LAB_103209fe8:
    puVar5 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar7 = (undefined *)0x1;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_5 == 0) goto LAB_103209fdc;
    uVar3 = param_5;
    func_0x000107c5b180();
    func_0x000107c615e8(param_5);
    bVar1 = uVar3 - 3 < 2;
    if (uVar3 == 1) {
      uVar8 = 1;
      goto LAB_103209fe8;
    }
    puVar5 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    uVar8 = (ulong)(uVar3 - 3 < 2);
    puVar7 = (undefined *)0x3;
    if ((uVar3 & 0xfffffffffffffffe) != 2) {
      puVar7 = (undefined *)0x1;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  if (((ulong)param_2 & 1) == 0) {
    FUN_10320f84c();
    puVar6 = puVar4;
    puVar7 = param_3;
    if (bVar1) goto LAB_10320a0e0;
LAB_10320a058:
    FUN_10320f93c();
  }
  else {
    puVar6 = (undefined *)0x0;
    if (!bVar1) goto LAB_10320a058;
LAB_10320a0e0:
    FUN_10320f918();
  }
  if (puVar5 == (undefined *)0x0) {
    func_0x0001031e60c4(&puStack_300);
  }
  else {
    puStack_4e0 = puVar5;
    func_0x0001031e60f0(&puStack_4e0);
    uStack_118 = uStack_458;
    uStack_120 = uStack_460;
    uStack_110 = uStack_450;
    uStack_ff = CONCAT17(uStack_438,uStack_43f);
    uStack_158 = uStack_498;
    uStack_160 = puStack_4a0;
    uStack_148 = uStack_488;
    uStack_150 = uStack_490;
    uStack_138 = uStack_478;
    uStack_140 = uStack_480;
    uStack_128 = uStack_468;
    uStack_130 = uStack_470;
    uStack_198 = uStack_4d8;
    puStack_1a0 = puStack_4e0;
    uStack_188 = uStack_4c8;
    uStack_190 = uStack_4d0;
    uStack_180 = CONCAT71(uStack_4bf,uStack_4c0);
    uStack_178 = puStack_4b8;
    uStack_168 = uStack_4a8;
    uStack_170 = puStack_4b0;
    func_0x0001031e6100(&puStack_1a0);
    uStack_278 = uStack_118;
    uStack_280 = uStack_120;
    uStack_270 = uStack_110;
    uStack_25f = uStack_ff;
    uStack_2b8 = uStack_158;
    uStack_2c0 = uStack_160;
    uStack_2a8 = uStack_148;
    uStack_2b0 = uStack_150;
    uStack_298 = uStack_138;
    uStack_2a0 = uStack_140;
    uStack_288 = uStack_128;
    uStack_290 = uStack_130;
    uStack_2f8 = uStack_198;
    puStack_300 = puStack_1a0;
    uStack_2e8 = uStack_188;
    uStack_2f0 = uStack_190;
    uStack_2d8 = uStack_178;
    uStack_2e0 = uStack_180;
    uStack_2c8 = uStack_168;
    uStack_2d0 = uStack_170;
  }
  uStack_418 = uStack_278;
  uStack_420 = uStack_280;
  uStack_410 = uStack_270;
  uStack_3ff = uStack_25f;
  uStack_458 = uStack_2b8;
  uStack_460 = uStack_2c0;
  uStack_448 = (undefined1)uStack_2a8;
  uStack_447 = (undefined7)((ulong)uStack_2a8 >> 8);
  uStack_450 = uStack_2b0;
  uStack_438 = (undefined1)uStack_298;
  uStack_437 = (undefined7)((ulong)uStack_298 >> 8);
  uStack_440 = (undefined1)uStack_2a0;
  uStack_43f = (undefined7)((ulong)uStack_2a0 >> 8);
  uStack_428 = uStack_288;
  uStack_430 = uStack_290;
  uStack_498 = uStack_2f8;
  puStack_4a0 = puStack_300;
  uStack_488 = uStack_2e8;
  uStack_490 = uStack_2f0;
  uStack_478 = uStack_2d8;
  uStack_480 = uStack_2e0;
  uStack_468 = uStack_2c8;
  uStack_470 = uStack_2d0;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(puVar5);
  func_0x000107c5b3c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puStack_4b8 = puVar4;
  puStack_4b0 = param_3;
  uStack_3e8 = uVar8 ^ 1;
  puStack_3e0 = puVar2;
  puStack_3c0 = puVar6;
  puStack_3b8 = puVar7;
LAB_10320a21c:
  uStack_3c8 = 0x100;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_4a8 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0xe600000000000000;
  uStack_4d0 = 0x6172656d6163;
  uStack_4d8 = 0;
  puStack_4e0 = (undefined *)0x0;
  FUN_1031ee258(&puStack_4e0);
  func_0x000107c610b4(&puStack_1a0,&puStack_4e0,0x130);
  func_0x000107c610b4(param_1,&puStack_1a0,0x130);
  return;
}



/* Entry: 10320a2a4; end: 10320a2b7;  */

void FUN_10320a2a4(undefined8 param_1,uint param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 uStack_4c0;
  undefined7 uStack_4bf;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_3ff;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined2 uStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_30f;
  undefined *puStack_300;
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
  undefined8 uStack_25f;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
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
  undefined8 uStack_1af;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_ff;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  puVar6 = (undefined *)(ulong)(param_2 & 0x101);
  if ((param_2 & 0x101) >> 8 == 0) {
    puVar4 = param_3;
    FUN_10320fa08();
    puVar7 = puVar4;
    puStack_3b0 = param_3;
    func_0x0001031e60f0(&puStack_3b0);
    uStack_278 = uStack_328;
    uStack_280 = uStack_330;
    uStack_270 = uStack_320;
    uStack_25f = uStack_30f;
    uStack_2b8 = uStack_368;
    uStack_2c0 = uStack_370;
    uStack_2a8 = uStack_358;
    uStack_2b0 = uStack_360;
    uStack_298 = uStack_348;
    uStack_2a0 = uStack_350;
    uStack_288 = uStack_338;
    uStack_290 = uStack_340;
    uStack_2f8 = uStack_3a8;
    puStack_300 = puStack_3b0;
    uStack_2e8 = uStack_398;
    uStack_2f0 = uStack_3a0;
    uStack_2d8 = uStack_388;
    uStack_2e0 = uStack_390;
    uStack_2c8 = uStack_378;
    uStack_2d0 = uStack_380;
    func_0x0001031e6100(&puStack_300);
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1c0 = uStack_270;
    uStack_1af = uStack_25f;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_248 = uStack_2f8;
    puStack_250 = puStack_300;
    uStack_238 = uStack_2e8;
    uStack_240 = uStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    puVar5 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_3);
    func_0x000107c5b3c4();
    func_0x000107c61180();
    if ((param_2 & 1) == 0) {
      puVar2 = puVar5;
      FUN_10320f84c();
    }
    else {
      puVar2 = (undefined *)0x0;
      puVar7 = (undefined *)0x1;
    }
    uStack_418 = uStack_1c8;
    uStack_420 = uStack_1d0;
    uStack_410 = uStack_1c0;
    uStack_3ff = uStack_1af;
    uStack_458 = uStack_208;
    uStack_460 = uStack_210;
    uStack_448 = (undefined1)uStack_1f8;
    uStack_447 = (undefined7)((ulong)uStack_1f8 >> 8);
    uStack_450 = uStack_200;
    uStack_438 = (undefined1)uStack_1e8;
    uStack_437 = (undefined7)((ulong)uStack_1e8 >> 8);
    uStack_440 = (undefined1)uStack_1f0;
    uStack_43f = (undefined7)((ulong)uStack_1f0 >> 8);
    uStack_428 = uStack_1d8;
    uStack_430 = uStack_1e0;
    uStack_498 = uStack_248;
    puStack_4a0 = puStack_250;
    uStack_488 = uStack_238;
    uStack_490 = uStack_240;
    uStack_478 = uStack_228;
    uStack_480 = uStack_230;
    uStack_468 = uStack_218;
    uStack_470 = uStack_220;
    uStack_3e8 = 1;
    puStack_4b8 = puVar6;
    puStack_4b0 = puVar4;
    puStack_3e0 = puVar5;
    puStack_3c0 = puVar2;
    puStack_3b8 = puVar7;
    goto LAB_10320a21c;
  }
  if (uVar8 == 0) {
LAB_103209fdc:
    uVar8 = 0;
    bVar1 = false;
LAB_103209fe8:
    puVar5 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar6 = (undefined *)0x1;
  }
  else {
    func_0x000107c5c734(uVar8,param_3,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                        *(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c61180();
    if (uVar8 == 0) goto LAB_103209fdc;
    uVar3 = uVar8;
    func_0x000107c5b180();
    func_0x000107c615e8(uVar8);
    bVar1 = uVar3 - 3 < 2;
    if (uVar3 == 1) {
      uVar8 = 1;
      goto LAB_103209fe8;
    }
    puVar5 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    uVar8 = (ulong)(uVar3 - 3 < 2);
    puVar6 = (undefined *)0x3;
    if ((uVar3 & 0xfffffffffffffffe) != 2) {
      puVar6 = (undefined *)0x1;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  if ((param_2 & 1) == 0) {
    FUN_10320f84c();
    puVar7 = puVar4;
    puVar6 = param_3;
    if (bVar1) goto LAB_10320a0e0;
LAB_10320a058:
    FUN_10320f93c();
  }
  else {
    puVar7 = (undefined *)0x0;
    if (!bVar1) goto LAB_10320a058;
LAB_10320a0e0:
    FUN_10320f918();
  }
  if (puVar5 == (undefined *)0x0) {
    func_0x0001031e60c4(&puStack_300);
  }
  else {
    puStack_4e0 = puVar5;
    func_0x0001031e60f0(&puStack_4e0);
    uStack_118 = uStack_458;
    uStack_120 = uStack_460;
    uStack_110 = uStack_450;
    uStack_ff = CONCAT17(uStack_438,uStack_43f);
    uStack_158 = uStack_498;
    uStack_160 = puStack_4a0;
    uStack_148 = uStack_488;
    uStack_150 = uStack_490;
    uStack_138 = uStack_478;
    uStack_140 = uStack_480;
    uStack_128 = uStack_468;
    uStack_130 = uStack_470;
    uStack_198 = uStack_4d8;
    puStack_1a0 = puStack_4e0;
    uStack_188 = uStack_4c8;
    uStack_190 = uStack_4d0;
    uStack_180 = CONCAT71(uStack_4bf,uStack_4c0);
    uStack_178 = puStack_4b8;
    uStack_168 = uStack_4a8;
    uStack_170 = puStack_4b0;
    func_0x0001031e6100(&puStack_1a0);
    uStack_278 = uStack_118;
    uStack_280 = uStack_120;
    uStack_270 = uStack_110;
    uStack_25f = uStack_ff;
    uStack_2b8 = uStack_158;
    uStack_2c0 = uStack_160;
    uStack_2a8 = uStack_148;
    uStack_2b0 = uStack_150;
    uStack_298 = uStack_138;
    uStack_2a0 = uStack_140;
    uStack_288 = uStack_128;
    uStack_290 = uStack_130;
    uStack_2f8 = uStack_198;
    puStack_300 = puStack_1a0;
    uStack_2e8 = uStack_188;
    uStack_2f0 = uStack_190;
    uStack_2d8 = uStack_178;
    uStack_2e0 = uStack_180;
    uStack_2c8 = uStack_168;
    uStack_2d0 = uStack_170;
  }
  uStack_418 = uStack_278;
  uStack_420 = uStack_280;
  uStack_410 = uStack_270;
  uStack_3ff = uStack_25f;
  uStack_458 = uStack_2b8;
  uStack_460 = uStack_2c0;
  uStack_448 = (undefined1)uStack_2a8;
  uStack_447 = (undefined7)((ulong)uStack_2a8 >> 8);
  uStack_450 = uStack_2b0;
  uStack_438 = (undefined1)uStack_298;
  uStack_437 = (undefined7)((ulong)uStack_298 >> 8);
  uStack_440 = (undefined1)uStack_2a0;
  uStack_43f = (undefined7)((ulong)uStack_2a0 >> 8);
  uStack_428 = uStack_288;
  uStack_430 = uStack_290;
  uStack_498 = uStack_2f8;
  puStack_4a0 = puStack_300;
  uStack_488 = uStack_2e8;
  uStack_490 = uStack_2f0;
  uStack_478 = uStack_2d8;
  uStack_480 = uStack_2e0;
  uStack_468 = uStack_2c8;
  uStack_470 = uStack_2d0;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(puVar5);
  func_0x000107c5b3c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puStack_4b8 = puVar4;
  puStack_4b0 = param_3;
  uStack_3e8 = uVar8 ^ 1;
  puStack_3e0 = puVar2;
  puStack_3c0 = puVar7;
  puStack_3b8 = puVar6;
LAB_10320a21c:
  uStack_3c8 = 0x100;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_4a8 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0xe600000000000000;
  uStack_4d0 = 0x6172656d6163;
  uStack_4d8 = 0;
  puStack_4e0 = (undefined *)0x0;
  FUN_1031ee258(&puStack_4e0);
  func_0x000107c610b4(&puStack_1a0,&puStack_4e0,0x130);
  func_0x000107c610b4(param_1,&puStack_1a0,0x130);
  return;
}



/* Entry: 10320a2b8; end: 10320a31b;  */

void FUN_10320a2b8(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  long unaff_x20;
  undefined1 auStack_160 [304];
  
  uVar1 = 0x100;
  if (param_2[1] == 0) {
    uVar1 = 0;
  }
  (**(code **)(unaff_x20 + 0x10))(auStack_160,uVar1 | *param_2,*(undefined8 *)(param_2 + 8));
  func_0x000107c610b4(param_1,auStack_160,0x130);
  return;
}



/* Entry: 10320a31c; end: 10320a327;  */

code * FUN_10320a31c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  pcVar3 = FUN_103209bbc;
  func_0x0001000c0ebc(FUN_103209bbc,0);
  uVar4 = 0x103209cb4;
  func_0x0001000c0ebc(0x103209cb4,0);
  func_0x000107c61574(pcVar3);
  uVar5 = 0x103209de0;
  func_0x0001000bfde0(0x103209de0,0,&UNK_1106258a0);
  func_0x000107c61574(uVar4);
  FUN_103209e48();
  func_0x0001000c2068();
  func_0x000107c61574(uVar5);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar6 = 4;
  (**(code **)(lStack_58 + 8))(4,uStack_60,lStack_58);
  uVar5 = uVar6;
  func_0x0001006c733c();
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar6);
  func_0x0001000834e4(auStack_78);
  puVar7 = &UNK_110625758;
  func_0x000107c613fc(&UNK_110625758,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar2;
  *(undefined8 *)(puVar7 + 0x20) = uVar9;
  puVar8 = &UNK_110625780;
  func_0x000107c613fc(&UNK_110625780,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10320a2a4;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  uVar4 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar3 = FUN_10320a2b8;
  func_0x0001000bfde0(FUN_10320a2b8,puVar8,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar8);
  return pcVar3;
}



/* Entry: 10320a328; end: 10320a34b;  */

void FUN_10320a328(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10320a34c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10320a34c; end: 10320a38b;  */

void FUN_10320a34c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9d900;
  func_0x000107c61520(&DAT_10db9d900,&UNK_110625818);
  puRam0000000112f4c6d0 = puVar1;
  return;
}



/* Entry: 10320a38c; end: 10320a3a7;  */

void FUN_10320a38c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba08;
  func_0x00010002969c(0x112f4ba08,&UNK_10db9b500);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba00 = puVar2;
  return;
}



/* Entry: 10320a3a8; end: 10320a3df;  */

undefined * FUN_10320a3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010320348c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 10320a3e0; end: 10320a40f;  */

/* WARNING: Possible PIC construction at 0x00010320a3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010320a400) */

void FUN_10320a3e0(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10320a410; end: 10320a4cf;  */

undefined8 * FUN_10320a410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10320a4d0; end: 10320a51b;  */

undefined8 * FUN_10320a4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10320a51c; end: 10320a717;  */

int FUN_10320a51c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10320a718; end: 10320a84b;  */

bool FUN_10320a718(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  uVar17 = *param_1;
  uVar21 = param_1[1];
  uVar16 = param_1[2];
  bVar3 = *(byte *)((long)param_1 + 0x11);
  bVar4 = *(byte *)((long)param_1 + 0x12);
  bVar5 = *(byte *)((long)param_1 + 0x13);
  bVar6 = *(byte *)((long)param_1 + 0x14);
  bVar7 = *(byte *)((long)param_1 + 0x16);
  bVar8 = *(byte *)((long)param_1 + 0x17);
  lVar18 = *param_2;
  lVar20 = param_2[1];
  bVar9 = *(byte *)(param_2 + 2);
  bVar10 = *(byte *)((long)param_2 + 0x11);
  bVar11 = *(byte *)((long)param_2 + 0x12);
  bVar12 = *(byte *)((long)param_2 + 0x13);
  bVar13 = *(byte *)((long)param_2 + 0x14);
  bVar14 = *(byte *)((long)param_2 + 0x16);
  bVar15 = *(byte *)((long)param_2 + 0x17);
  uVar1 = 0x100;
  if ((*(byte *)((long)param_1 + 0x15) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if ((*(byte *)((long)param_2 + 0x15) & 1) == 0) {
    uVar2 = 0;
  }
  if (uVar17 == 0) {
    if (lVar18 != 0) {
      return false;
    }
  }
  else {
    if (lVar18 == 0) {
      return false;
    }
    FUN_10320c1cc(0,0x112f4c790,&PTR_PTR_1126b2398);
    func_0x000107c61174(lVar18);
    func_0x000107c61174();
    uVar19 = uVar17;
    func_0x000107c60118();
    func_0x000107c61170(uVar17);
    func_0x000107c61170(lVar18);
    if ((uVar19 & 1) == 0) {
      return false;
    }
  }
  if (uVar21 == 0) {
    if (lVar20 != 0) {
      return false;
    }
  }
  else {
    if (lVar20 == 0) {
      return false;
    }
    FUN_10320c1cc(0,0x112f4c788,&PTR_PTR_1126b23a8);
    func_0x000107c61174(lVar20);
    func_0x000107c61174();
    uVar17 = uVar21;
    func_0x000107c60118();
    func_0x000107c61170(uVar21);
    func_0x000107c61170(lVar20);
    if ((uVar17 & 1) == 0) {
      return false;
    }
  }
  if (((byte)uVar16 & 1) != (bVar9 & 1)) {
    return false;
  }
  if (((bVar3 & 1) != 0) != ((bVar10 & 1) != 0)) {
    return false;
  }
  if (((bVar4 & 1) != 0) != ((bVar11 & 1) != 0)) {
    return false;
  }
  if (((bVar5 & 1) != 0) != ((bVar12 & 1) != 0)) {
    return false;
  }
  if (((bVar6 & 1) != 0) != ((bVar13 & 1) != 0)) {
    return false;
  }
  if (uVar1 >> 8 == uVar2 >> 8) {
    if (((bVar7 & 1) != 0) == ((bVar14 & 1) != 0)) {
      return ((bVar8 & 1) != 0) == ((bVar15 & 1) != 0);
    }
    return false;
  }
  return false;
}



/* Entry: 10320a84c; end: 10320a8cf;  */

undefined8 FUN_10320a84c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *(ulong *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar7 = 0x100;
  uVar1 = uVar7;
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  uVar8 = 0x10000;
  uVar2 = uVar8;
  if (param_1[2] == 0) {
    uVar2 = 0;
  }
  uVar9 = 0x1000000;
  uVar3 = uVar9;
  if (param_1[3] == 0) {
    uVar3 = 0;
  }
  if (param_2[1] == 0) {
    uVar7 = 0;
  }
  if (param_2[2] == 0) {
    uVar8 = 0;
  }
  if (param_2[3] == 0) {
    uVar9 = 0;
  }
  if ((((uVar1 | *param_1 | uVar2 | uVar3) ^ (uVar7 | *param_2 | uVar8 | uVar9)) & 0x1010101) == 0)
  {
    if (lVar4 == 0) {
      if (lVar5 == 0) {
        return 1;
      }
    }
    else if (lVar5 != 0) {
      if ((uVar6 == *(ulong *)(param_2 + 8)) && (lVar4 == lVar5)) {
        return 1;
      }
      func_0x000107c605b8(uVar6,lVar4,*(ulong *)(param_2 + 8),lVar5,0);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10320a8d0; end: 10320a9a7;  */

code * FUN_10320a8d0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c43138();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  func_0x000107c61170(unaff_x20);
  pcVar2 = FUN_10320a9a8;
  func_0x0001000bfde0(FUN_10320a9a8,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar2);
  uVar1 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar2 = FUN_10320a9d0;
  func_0x0001000bfde0(FUN_10320a9d0,0,uVar1);
  func_0x000107c61574(puVar3);
  return pcVar2;
}



/* Entry: 10320a9a8; end: 10320a9cf;  */

void FUN_10320a9a8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10320a9d0; end: 10320a9db;  */

void FUN_10320a9d0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10320a9dc; end: 10320ac3b;  */

code * FUN_10320a9dc(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  bVar2 = *(byte *)(unaff_x20 + 2);
  puVar3 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  if ((bVar2 & 1) == 0) {
    uStack_68 = 0;
    pcVar5 = (code *)&uStack_68;
    func_0x000100854cb0(pcVar5);
  }
  else {
    FUN_10326da44();
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    pcVar5 = FUN_10320ac3c;
    FUN_10326d7dc(FUN_10320ac3c,0,uVar4);
    func_0x000107c61170(uVar4);
  }
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uStack_68 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  puVar6 = &UNK_1106258e8;
  func_0x000107c613fc(&UNK_1106258e8,0x38,7);
  uVar4 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  *(undefined8 *)(puVar6 + 0x30) = unaff_x20[4];
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x00010320c474(&uStack_68,auStack_70,0x112f4c718,&UNK_10db9d9a8);
  func_0x000107c615f0(uVar1);
  uVar4 = 0x112f4c720;
  func_0x0001000285a8(0x112f4c720,&UNK_10db9d9b0);
  pcVar9 = FUN_10320b0b0;
  func_0x00010068b194(FUN_10320b0b0,puVar6,uVar4);
  func_0x000107c61574(puVar6);
  FUN_10320b0b8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar9);
  puVar10 = &UNK_110625910;
  func_0x000107c613fc(&UNK_110625910,0x38,7);
  uVar4 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar4;
  *(undefined8 *)(puVar10 + 0x28) = uVar13;
  *(undefined8 *)(puVar10 + 0x20) = uVar12;
  *(undefined8 *)(puVar10 + 0x30) = unaff_x20[4];
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x00010320c474(&uStack_68,auStack_70,0x112f4c718,&UNK_10db9d9a8);
  func_0x000107c615f0(uVar1);
  pcVar9 = FUN_10320b488;
  func_0x00010068b194(FUN_10320b488,puVar10,&UNK_110625a38);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar10);
  FUN_10320b490();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar9);
  pcVar11 = pcVar5;
  func_0x0001006c733c(pcVar5);
  func_0x000107c61574(puVar10);
  uVar4 = 0x112f4b7e8;
  func_0x0001000285a8(0x112f4b7e8,&UNK_10db9b150);
  pcVar9 = FUN_10320b8f8;
  func_0x0001000bfde0(FUN_10320b8f8,0,uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar11);
  return pcVar9;
}



/* Entry: 10320ac3c; end: 10320ac8f;  */

undefined8 FUN_10320ac3c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4c9a8 != -1) {
    func_0x000107c61568(0x112f4c9a8,FUN_10320ff90);
  }
  uVar1 = uRam0000000113807128;
  func_0x000107c61174(uRam0000000113807128);
  return uVar1;
}



/* Entry: 10320ac90; end: 10320b0af;  */

void FUN_10320ac90(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_70 = param_1[8];
  puVar4 = param_1;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  FUN_10326c384();
  if (((ulong)puVar4 & 1) == 0) {
LAB_10320ade0:
    func_0x0001000285a8(0x112f4c7a0,&UNK_10db9dab0);
    puStack_230 = (undefined8 *)0x0;
    uStack_228 = 0;
    puStack_238 = (undefined8 *)0x1;
    func_0x000100854cb0(&puStack_238);
    return;
  }
  puVar5 = &UNK_10db9dab8;
  func_0x000107c614e0(&UNK_10db9dab8);
  lStack_188 = param_1[1];
  uStack_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  if (lStack_188 == 0) {
    func_0x000107c61574();
    goto LAB_10320ade0;
  }
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_f0 = uStack_1d0;
  uStack_e8 = uStack_1c8;
  uStack_e0 = uStack_1c0;
  uStack_d8 = uStack_1b8;
  uStack_d0 = uStack_1b0;
  uStack_c8 = uStack_1a8;
  uStack_c0 = uStack_1a0;
  uStack_b8 = uStack_198;
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar4 = &uStack_f0;
  FUN_103206a60(puVar4,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) goto LAB_10320ade0;
  puVar5 = &UNK_10db9dae0;
  func_0x000107c614e0(&UNK_10db9dae0);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar4 = &uStack_f0;
  FUN_1031e7358(puVar4,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (puVar4 == (undefined8 *)0x0) goto LAB_10320ade0;
  uVar6 = *(ulong *)(param_2 + 0x18);
  if (uVar6 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar15 = uVar6;
      func_0x000107c5b180();
      func_0x000107c615e8(uVar6);
      goto LAB_10320ae30;
    }
  }
  uVar15 = 0;
LAB_10320ae30:
  puVar5 = &UNK_10db9db00;
  func_0x000107c614e0(&UNK_10db9db00);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar7 = &uStack_f0;
  FUN_103206938(puVar7,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_10320a8d0();
    puVar8 = puVar5;
    func_0x000102840b18();
    func_0x0001000c2068();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110625b10;
    func_0x000107c613fc(&UNK_110625b10,0x80,7);
    uVar16 = param_1[4];
    uVar18 = param_1[7];
    uVar17 = param_1[6];
    *(undefined8 *)(puVar5 + 0x40) = param_1[5];
    *(undefined8 *)(puVar5 + 0x38) = uVar16;
    *(undefined8 *)(puVar5 + 0x50) = uVar18;
    *(undefined8 *)(puVar5 + 0x48) = uVar17;
    uVar16 = param_1[8];
    uVar18 = param_1[0xb];
    uVar17 = param_1[10];
    *(undefined8 *)(puVar5 + 0x60) = param_1[9];
    *(undefined8 *)(puVar5 + 0x58) = uVar16;
    *(undefined8 *)(puVar5 + 0x70) = uVar18;
    *(undefined8 *)(puVar5 + 0x68) = uVar17;
    uVar16 = *param_1;
    uVar18 = param_1[3];
    uVar17 = param_1[2];
    *(undefined8 *)(puVar5 + 0x20) = param_1[1];
    *(undefined8 *)(puVar5 + 0x18) = uVar16;
    *(undefined8 **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar18;
    *(undefined8 *)(puVar5 + 0x28) = uVar17;
    *(ulong *)(puVar5 + 0x78) = uVar15;
    puVar9 = &UNK_110625b38;
    func_0x000107c613fc(&UNK_110625b38,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10320c434;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    func_0x000107c61174(puVar4);
    func_0x00010320c474(&uStack_150,&puStack_238,0x112f4c7a8,&UNK_10db9db48);
    uVar16 = 0x112f4c720;
    func_0x0001000285a8(0x112f4c720,&UNK_10db9d9b0);
    func_0x0001000bfde0(0x10320c444,puVar9,uVar16);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar9);
    return;
  }
  puVar7 = puVar4;
  func_0x000107c5d8c4();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c42e84();
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x00010326c470();
  puVar12 = puVar4;
  func_0x000107c4ab80();
  puVar5 = &UNK_10db9db20;
  func_0x000107c614e0(&UNK_10db9db20);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar13 = &uStack_f0;
  FUN_103206a60(puVar13,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  func_0x0001000285a8(0x112f4c7a0,&UNK_10db9dab0);
  puVar14 = puVar4;
  func_0x000107c4ab80();
  uVar6 = 0x100;
  if (uVar15 != 4) {
    uVar6 = 0;
  }
  uVar1 = 0x10000;
  if (1 < uVar15 - 3) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000;
  if ((uVar15 & 0xfffffffffffffffd) != 0) {
    uVar2 = 0;
  }
  uVar15 = 0x100000000;
  if (puVar12 != (undefined8 *)0xf) {
    uVar15 = 0;
  }
  uVar3 = 0x100000000000000;
  if (puVar14 != (undefined8 *)0x19) {
    uVar3 = 0;
  }
  uStack_228 = uVar1 | uVar6 | uVar2 | (ulong)puVar11 & 1 | uVar15 |
               (ulong)((uint)puVar13 & 1) << 0x28 | uVar3 | 0x1000000000000;
  puStack_238 = puVar7;
  puStack_230 = puVar10;
  func_0x000100854cb0(&puStack_238);
  func_0x000107c61170(puVar4);
  func_0x00010320c404(puStack_238,puStack_230,uStack_228);
  return;
}



/* Entry: 10320b0b0; end: 10320b0b7;  */

void FUN_10320b0b0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long unaff_x20;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_70 = param_1[8];
  puVar4 = param_1;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  FUN_10326c384();
  if (((ulong)puVar4 & 1) == 0) {
LAB_10320ade0:
    func_0x0001000285a8(0x112f4c7a0,&UNK_10db9dab0);
    puStack_230 = (undefined8 *)0x0;
    uStack_228 = 0;
    puStack_238 = (undefined8 *)0x1;
    func_0x000100854cb0(&puStack_238);
    return;
  }
  puVar5 = &UNK_10db9dab8;
  func_0x000107c614e0(&UNK_10db9dab8);
  lStack_188 = param_1[1];
  uStack_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_168 = param_1[5];
  uStack_170 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  if (lStack_188 == 0) {
    func_0x000107c61574();
    goto LAB_10320ade0;
  }
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_f0 = uStack_1d0;
  uStack_e8 = uStack_1c8;
  uStack_e0 = uStack_1c0;
  uStack_d8 = uStack_1b8;
  uStack_d0 = uStack_1b0;
  uStack_c8 = uStack_1a8;
  uStack_c0 = uStack_1a0;
  uStack_b8 = uStack_198;
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar4 = &uStack_f0;
  FUN_103206a60(puVar4,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) goto LAB_10320ade0;
  puVar5 = &UNK_10db9dae0;
  func_0x000107c614e0(&UNK_10db9dae0);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar4 = &uStack_f0;
  FUN_1031e7358(puVar4,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (puVar4 == (undefined8 *)0x0) goto LAB_10320ade0;
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  if (uVar6 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar15 = uVar6;
      func_0x000107c5b180();
      func_0x000107c615e8(uVar6);
      goto LAB_10320ae30;
    }
  }
  uVar15 = 0;
LAB_10320ae30:
  puVar5 = &UNK_10db9db00;
  func_0x000107c614e0(&UNK_10db9db00);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar7 = &uStack_f0;
  FUN_103206938(puVar7,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_10320a8d0();
    puVar8 = puVar5;
    func_0x000102840b18();
    func_0x0001000c2068();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110625b10;
    func_0x000107c613fc(&UNK_110625b10,0x80,7);
    uVar16 = param_1[4];
    uVar18 = param_1[7];
    uVar17 = param_1[6];
    *(undefined8 *)(puVar5 + 0x40) = param_1[5];
    *(undefined8 *)(puVar5 + 0x38) = uVar16;
    *(undefined8 *)(puVar5 + 0x50) = uVar18;
    *(undefined8 *)(puVar5 + 0x48) = uVar17;
    uVar16 = param_1[8];
    uVar18 = param_1[0xb];
    uVar17 = param_1[10];
    *(undefined8 *)(puVar5 + 0x60) = param_1[9];
    *(undefined8 *)(puVar5 + 0x58) = uVar16;
    *(undefined8 *)(puVar5 + 0x70) = uVar18;
    *(undefined8 *)(puVar5 + 0x68) = uVar17;
    uVar16 = *param_1;
    uVar18 = param_1[3];
    uVar17 = param_1[2];
    *(undefined8 *)(puVar5 + 0x20) = param_1[1];
    *(undefined8 *)(puVar5 + 0x18) = uVar16;
    *(undefined8 **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar18;
    *(undefined8 *)(puVar5 + 0x28) = uVar17;
    *(ulong *)(puVar5 + 0x78) = uVar15;
    puVar9 = &UNK_110625b38;
    func_0x000107c613fc(&UNK_110625b38,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10320c434;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    func_0x000107c61174(puVar4);
    func_0x00010320c474(&uStack_150,&puStack_238,0x112f4c7a8,&UNK_10db9db48);
    uVar16 = 0x112f4c720;
    func_0x0001000285a8(0x112f4c720,&UNK_10db9d9b0);
    func_0x0001000bfde0(0x10320c444,puVar9,uVar16);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar9);
    return;
  }
  puVar7 = puVar4;
  func_0x000107c5d8c4();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c42e84();
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x00010326c470();
  puVar12 = puVar4;
  func_0x000107c4ab80();
  puVar5 = &UNK_10db9db20;
  func_0x000107c614e0(&UNK_10db9db20);
  FUN_1031e7474(&uStack_1d0,&puStack_238);
  puVar13 = &uStack_f0;
  FUN_103206a60(puVar13,&uStack_b0,puVar5);
  func_0x0001031e74b0(&uStack_190);
  func_0x000107c61574(puVar5);
  func_0x0001000285a8(0x112f4c7a0,&UNK_10db9dab0);
  puVar14 = puVar4;
  func_0x000107c4ab80();
  uVar6 = 0x100;
  if (uVar15 != 4) {
    uVar6 = 0;
  }
  uVar1 = 0x10000;
  if (1 < uVar15 - 3) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000;
  if ((uVar15 & 0xfffffffffffffffd) != 0) {
    uVar2 = 0;
  }
  uVar15 = 0x100000000;
  if (puVar12 != (undefined8 *)0xf) {
    uVar15 = 0;
  }
  uVar3 = 0x100000000000000;
  if (puVar14 != (undefined8 *)0x19) {
    uVar3 = 0;
  }
  uStack_228 = uVar1 | uVar6 | uVar2 | (ulong)puVar11 & 1 | uVar15 |
               (ulong)((uint)puVar13 & 1) << 0x28 | uVar3 | 0x1000000000000;
  puStack_238 = puVar7;
  puStack_230 = puVar10;
  func_0x000100854cb0(&puStack_238);
  func_0x000107c61170(puVar4);
  func_0x00010320c404(puStack_238,puStack_230,uStack_228);
  return;
}



/* Entry: 10320b0b8; end: 10320b127;  */

void FUN_10320b0b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4c728 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c720;
  func_0x00010002969c(0x112f4c720,&UNK_10db9d9b0);
  uVar2 = uVar1;
  FUN_10320b128();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4c728 = puVar3;
  return;
}



/* Entry: 10320b128; end: 10320b167;  */

void FUN_10320b128(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9da78;
  func_0x000107c61520(&UNK_10db9da78,&UNK_110625ac8);
  puRam0000000112f4c730 = puVar1;
  return;
}



/* Entry: 10320b168; end: 10320b44b;  */

undefined8 FUN_10320b168(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_1c0 [64];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = param_2;
  func_0x000107c5d8c4(param_2);
  func_0x000107c61180();
  func_0x000107c42e84(param_2);
  func_0x000107c61180();
  uStack_118 = param_3[5];
  uStack_120 = param_3[4];
  uStack_108 = param_3[7];
  uStack_110 = param_3[6];
  uStack_100 = param_3[8];
  lStack_138 = param_3[1];
  uStack_140 = *param_3;
  uStack_128 = param_3[3];
  uStack_130 = param_3[2];
  func_0x00010326c470();
  func_0x000107c4ab80();
  puVar2 = &UNK_10db9db20;
  func_0x000107c614e0(&UNK_10db9db20);
  lStack_a8 = lStack_138;
  uStack_b0 = uStack_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  uStack_90 = uStack_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  if (lStack_138 == 0) {
    func_0x000107c61574();
  }
  else {
    lStack_178 = lStack_138;
    uStack_180 = uStack_140;
    uStack_168 = uStack_128;
    uStack_170 = uStack_130;
    uStack_158 = uStack_118;
    uStack_160 = uStack_120;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    lStack_e8 = lStack_138;
    uStack_f0 = uStack_140;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    FUN_1031e7474(&uStack_180,auStack_1c0);
    FUN_103206a60(&uStack_f0,&uStack_140,puVar2);
    func_0x0001031e74b0(&uStack_b0);
    func_0x000107c61574(puVar2);
  }
  func_0x000107c4ab80();
  return uVar1;
}



/* Entry: 10320b44c; end: 10320b487;  */

void FUN_10320b44c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10320b488; end: 10320b48f;  */

void FUN_10320b488(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  uint auStack_78 [2];
  long lStack_70;
  long lStack_68;
  
  lVar5 = *param_1;
  if (lVar5 == 1) {
    func_0x0001000285a8(0x112f4c798,&UNK_10db9daa0);
    auStack_78[0] = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    func_0x000100854cb0(auStack_78);
  }
  else {
    lVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    FUN_10320c3d0(lVar5,lVar1,uVar2);
    lVar3 = lVar5;
    lVar4 = lVar1;
    FUN_10320c27c(lVar5,lVar1,uVar2 & 0x101010101010101,uVar6);
    uVar6 = 0x112f4c798;
    func_0x0001000285a8(0x112f4c798,&UNK_10db9daa0);
    auStack_78[0] = (uint)uVar2 & 0x1010101;
    lStack_70 = lVar3;
    lStack_68 = lVar4;
    func_0x000100854cb0(auStack_78,uVar6);
    func_0x00010320c404(lVar5,lVar1,uVar2);
    func_0x000107c6142c(lVar4);
  }
  return;
}



/* Entry: 10320b490; end: 10320b4cf;  */

void FUN_10320b490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9da50;
  func_0x000107c61520(&UNK_10db9da50,&UNK_110625a38);
  puRam0000000112f4c738 = puVar1;
  return;
}



/* Entry: 10320b4d0; end: 10320b8f7;  */

void FUN_10320b4d0(undefined8 param_1,uint param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_43f;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_38f;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2df;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f7;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_ff;
  
  if (param_4 == 0) {
    func_0x0001031e97e8(&puStack_1a0);
  }
  else {
    if ((param_2 & 1) == 0) {
      puStack_430 = (undefined *)0x0;
      uStack_428 = param_5;
      func_0x0001031e8a28(&puStack_430);
      uStack_2f8 = uStack_3a8;
      uStack_300 = uStack_3b0;
      uStack_2f0 = uStack_3a0;
      uStack_2df = uStack_38f;
      uStack_338 = uStack_3e8;
      uStack_340 = uStack_3f0;
      uStack_328 = uStack_3d8;
      uStack_330 = uStack_3e0;
      uStack_318 = uStack_3c8;
      lStack_320 = lStack_3d0;
      uStack_308 = uStack_3b8;
      puStack_310 = puStack_3c0;
      uStack_378 = uStack_428;
      puStack_380 = puStack_430;
      uStack_368 = uStack_418;
      uStack_370 = uStack_420;
      lStack_358 = lStack_408;
      uStack_360 = uStack_410;
      puStack_348 = puStack_3f8;
      uStack_350 = uStack_400;
      func_0x0001031e6100(&puStack_380);
      uStack_220 = uStack_308;
      uStack_228 = SUB81(puStack_310,0);
      uStack_227 = (undefined7)((ulong)puStack_310 >> 8);
      uStack_210 = uStack_2f8;
      uStack_218 = uStack_300;
      uStack_208 = uStack_2f0;
      uStack_1f7 = uStack_2df;
      puStack_260 = puStack_348;
      uStack_268 = uStack_350;
      uStack_250 = uStack_338;
      uStack_258 = uStack_340;
      uStack_240 = uStack_328;
      uStack_248 = uStack_330;
      uStack_230 = (undefined1)uStack_318;
      uStack_22f = (undefined7)((ulong)uStack_318 >> 8);
      uStack_238 = (undefined1)lStack_320;
      uStack_237 = (undefined7)((ulong)lStack_320 >> 8);
      uStack_290 = uStack_378;
      puStack_298 = puStack_380;
      uStack_280 = uStack_368;
      uStack_288 = uStack_370;
      lStack_270 = lStack_358;
      uStack_278 = uStack_360;
      puVar2 = PTR_PTR_1126b5b00;
      func_0x000107c61168();
      func_0x000107c61174(param_5);
      func_0x000107c61434(param_4);
      func_0x000107c3f80c();
      func_0x000107c61180();
      uStack_1e0 = 2;
      uStack_1b0 = 1;
      puStack_1d8 = puVar2;
    }
    else {
      if ((param_2 >> 0x18 & 1) == 0) {
        uVar3 = (ulong)((param_2 & 0x10000) == 0);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61434(param_4);
        func_0x000107c5af88(puVar2);
        func_0x000107c61180();
        puVar1 = PTR_PTR_1126b0c40;
        func_0x000107c61168();
        func_0x000107c45098(0x4038000000000000,0x4038000000000000);
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        if (puVar1 == (undefined *)0x0) {
          func_0x0001031e60c4(&puStack_1a0);
        }
        else {
          puStack_380 = puVar1;
          func_0x0001031e60f0(&puStack_380);
          uStack_248 = uStack_2f8;
          uStack_250 = uStack_300;
          uStack_240 = uStack_2f0;
          uStack_22f = (undefined7)uStack_2df;
          uStack_228 = (undefined1)((ulong)uStack_2df >> 0x38);
          uStack_288 = uStack_338;
          uStack_290 = uStack_340;
          uStack_278 = uStack_328;
          uStack_280 = uStack_330;
          uStack_268 = uStack_318;
          lStack_270 = lStack_320;
          uStack_258 = uStack_308;
          puStack_260 = puStack_310;
          uStack_2c8 = uStack_378;
          puStack_2d0 = puStack_380;
          uStack_2b8 = uStack_368;
          uStack_2c0 = uStack_370;
          lStack_2a8 = lStack_358;
          uStack_2b0 = uStack_360;
          puStack_298 = puStack_348;
          uStack_2a0 = uStack_350;
          func_0x0001031e6100(&puStack_2d0);
          uStack_118 = uStack_248;
          uStack_120 = uStack_250;
          uStack_110 = uStack_240;
          uStack_ff = CONCAT17(uStack_228,uStack_22f);
          uStack_158 = uStack_288;
          uStack_160 = uStack_290;
          uStack_148 = uStack_278;
          uStack_150 = uStack_280;
          uStack_138 = uStack_268;
          lStack_140 = lStack_270;
          uStack_128 = uStack_258;
          puStack_130 = puStack_260;
          uStack_198 = uStack_2c8;
          puStack_1a0 = puStack_2d0;
          uStack_188 = uStack_2b8;
          uStack_190 = uStack_2c0;
          lStack_178 = lStack_2a8;
          uStack_180 = uStack_2b0;
          puStack_168 = puStack_298;
          uStack_170 = uStack_2a0;
        }
        uStack_458 = uStack_118;
        uStack_460 = uStack_120;
        uStack_450 = uStack_110;
        uStack_43f = uStack_ff;
        uStack_498 = uStack_158;
        uStack_4a0 = uStack_160;
        uStack_488 = uStack_148;
        uStack_490 = uStack_150;
        uStack_478 = uStack_138;
        lStack_480 = lStack_140;
        uStack_468 = uStack_128;
        puStack_470 = puStack_130;
        uStack_4d8 = uStack_198;
        puStack_4e0 = puStack_1a0;
        uStack_4c8 = uStack_188;
        uStack_4d0 = uStack_190;
        lStack_4b8 = lStack_178;
        uStack_4c0 = uStack_180;
        puStack_4a8 = puStack_168;
        uStack_4b0 = uStack_170;
      }
      else {
        puStack_2d0 = (undefined *)0x0;
        uStack_2c8 = param_5;
        func_0x0001031e8a28(&puStack_2d0);
        uStack_118 = uStack_248;
        uStack_120 = uStack_250;
        uStack_110 = uStack_240;
        uStack_ff = CONCAT17(uStack_228,uStack_22f);
        uStack_158 = uStack_288;
        uStack_160 = uStack_290;
        uStack_148 = uStack_278;
        uStack_150 = uStack_280;
        uStack_138 = uStack_268;
        lStack_140 = lStack_270;
        uStack_128 = uStack_258;
        puStack_130 = puStack_260;
        uStack_198 = uStack_2c8;
        puStack_1a0 = puStack_2d0;
        uStack_188 = uStack_2b8;
        uStack_190 = uStack_2c0;
        lStack_178 = lStack_2a8;
        uStack_180 = uStack_2b0;
        puStack_168 = puStack_298;
        uStack_170 = uStack_2a0;
        func_0x0001031e6100(&puStack_1a0);
        uStack_458 = uStack_118;
        uStack_460 = uStack_120;
        uStack_450 = uStack_110;
        uStack_43f = uStack_ff;
        uStack_498 = uStack_158;
        uStack_4a0 = uStack_160;
        uStack_488 = uStack_148;
        uStack_490 = uStack_150;
        uStack_478 = uStack_138;
        lStack_480 = lStack_140;
        uStack_468 = uStack_128;
        puStack_470 = puStack_130;
        uStack_4d8 = uStack_198;
        puStack_4e0 = puStack_1a0;
        uStack_4c8 = uStack_188;
        uStack_4d0 = uStack_190;
        lStack_4b8 = lStack_178;
        uStack_4c0 = uStack_180;
        puStack_4a8 = puStack_168;
        uStack_4b0 = uStack_170;
        func_0x000107c61174(param_5);
        func_0x000107c61434(param_4);
        uVar3 = 2;
      }
      puVar2 = PTR_PTR_1126b5b00;
      func_0x000107c61168();
      func_0x000107c3f80c();
      func_0x000107c61180();
      uStack_220 = uStack_468;
      uStack_228 = SUB81(puStack_470,0);
      uStack_227 = (undefined7)((ulong)puStack_470 >> 8);
      uStack_210 = uStack_458;
      uStack_218 = uStack_460;
      uStack_208 = uStack_450;
      uStack_1f7 = uStack_43f;
      puStack_260 = puStack_4a8;
      uStack_268 = uStack_4b0;
      uStack_250 = uStack_498;
      uStack_258 = uStack_4a0;
      uStack_240 = uStack_488;
      uStack_248 = uStack_490;
      uStack_230 = (undefined1)uStack_478;
      uStack_22f = (undefined7)((ulong)uStack_478 >> 8);
      uStack_238 = (undefined1)lStack_480;
      uStack_237 = (undefined7)((ulong)lStack_480 >> 8);
      uStack_290 = uStack_4d8;
      puStack_298 = puStack_4e0;
      uStack_280 = uStack_4c8;
      uStack_288 = uStack_4d0;
      uStack_1b0 = 3;
      if ((param_2 & 0x100) == 0) {
        uStack_1b0 = 1;
      }
      lStack_270 = lStack_4b8;
      uStack_278 = uStack_4c0;
      uStack_1e0 = uVar3;
      puStack_1d8 = puVar2;
    }
    uStack_1c0 = 0x100;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0xe400000000000000;
    uStack_2c0 = 0x74616863;
    uStack_2c8 = 0;
    puStack_2d0 = (undefined *)0x0;
    uStack_1b8 = 0;
    uStack_2b0 = param_3;
    lStack_2a8 = param_4;
    FUN_1031e9a5c(&puStack_2d0);
    func_0x000107c610b4(&puStack_1a0,&puStack_2d0,0x128);
  }
  func_0x000107c610b4(param_1,&puStack_1a0,0x128);
  return;
}



/* Entry: 10320b8f8; end: 10320b97b;  */

void FUN_10320b8f8(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_148 [296];
  
  uVar2 = 0x100;
  if (param_2[1] == 0) {
    uVar2 = 0;
  }
  uVar1 = 0x10000;
  if (param_2[2] == 0) {
    uVar1 = 0;
  }
  uVar3 = 0x1000000;
  if (param_2[3] == 0) {
    uVar3 = 0;
  }
  FUN_10320b4d0(auStack_148,uVar2 | *param_2 | uVar1 | uVar3,*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 10320b97c; end: 10320b97f;  */

code * FUN_10320b97c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  bVar2 = *(byte *)(unaff_x20 + 2);
  puVar3 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  if ((bVar2 & 1) == 0) {
    uStack_68 = 0;
    pcVar5 = (code *)&uStack_68;
    func_0x000100854cb0(pcVar5);
  }
  else {
    FUN_10326da44();
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    pcVar5 = FUN_10320ac3c;
    FUN_10326d7dc(FUN_10320ac3c,0,uVar4);
    func_0x000107c61170(uVar4);
  }
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uStack_68 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  puVar6 = &UNK_1106258e8;
  func_0x000107c613fc(&UNK_1106258e8,0x38,7);
  uVar4 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  *(undefined8 *)(puVar6 + 0x30) = unaff_x20[4];
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x00010320c474(&uStack_68,auStack_70,0x112f4c718,&UNK_10db9d9a8);
  func_0x000107c615f0(uVar1);
  uVar4 = 0x112f4c720;
  func_0x0001000285a8(0x112f4c720,&UNK_10db9d9b0);
  pcVar9 = FUN_10320b0b0;
  func_0x00010068b194(FUN_10320b0b0,puVar6,uVar4);
  func_0x000107c61574(puVar6);
  FUN_10320b0b8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar9);
  puVar10 = &UNK_110625910;
  func_0x000107c613fc(&UNK_110625910,0x38,7);
  uVar4 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar4;
  *(undefined8 *)(puVar10 + 0x28) = uVar13;
  *(undefined8 *)(puVar10 + 0x20) = uVar12;
  *(undefined8 *)(puVar10 + 0x30) = unaff_x20[4];
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x00010320c474(&uStack_68,auStack_70,0x112f4c718,&UNK_10db9d9a8);
  func_0x000107c615f0(uVar1);
  pcVar9 = FUN_10320b488;
  func_0x00010068b194(FUN_10320b488,puVar10,&UNK_110625a38);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar10);
  FUN_10320b490();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar9);
  pcVar11 = pcVar5;
  func_0x0001006c733c(pcVar5);
  func_0x000107c61574(puVar10);
  uVar4 = 0x112f4b7e8;
  func_0x0001000285a8(0x112f4b7e8,&UNK_10db9b150);
  pcVar9 = FUN_10320b8f8;
  func_0x0001000bfde0(FUN_10320b8f8,0,uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar11);
  return pcVar9;
}



/* Entry: 10320b980; end: 10320b9a3;  */

void FUN_10320b980(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10320b9a4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


