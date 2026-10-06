/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10321019c; end: 1032101db;  */

void FUN_10321019c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba0b40;
  func_0x000107c61520(&DAT_10dba0b40,&UNK_11062a0d8);
  puRam0000000112f4c9b0 = puVar1;
  return;
}



/* Entry: 1032101dc; end: 103210273;  */

void FUN_1032101dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110626140;
  func_0x000107c613fc(&UNK_110626140,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103210274,puVar1);
  return;
}



/* Entry: 103210274; end: 1032103ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103210274(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long alStack_80 [6];
  
  func_0x000100083b20(alStack_80);
  lVar2 = alStack_80[0];
  lVar1 = alStack_80[0];
  func_0x0001084360d0();
  if (((int)lVar1 == 0) || (func_0x0001084360ec(), (int)lVar2 == 0)) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000100083b20(alStack_80);
    lVar2 = alStack_80[0];
    func_0x0001000285a8(0x112f4c9c8,&UNK_10db9e0a0);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112fd9ef0);
    func_0x000107c61174();
    uVar4 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61170(uVar3);
    func_0x0001000285a8(0x112f4c9d0,&UNK_10db9e0a8);
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112fd9ef8);
    func_0x000107c61174();
    uVar3 = uVar5;
    func_0x0001000bda74();
    func_0x000107c61170(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar3);
    func_0x000100083b20(alStack_80);
    lVar1 = alStack_80[0];
    func_0x000107c43d48();
    func_0x000107c61180();
    func_0x000107c61170();
    param_1[3] = &UNK_1106265d0;
    func_0x0001032107d4();
    param_1[4] = alStack_80[0];
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(lVar2);
    *param_1 = uVar4;
    param_1[1] = uVar3;
    param_1[2] = lVar1;
  }
  return;
}



/* Entry: 1032103f0; end: 1032104a7;  */

void FUN_1032103f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10321043c,param_1);
  return;
}



/* Entry: 1032104a8; end: 103210723;  */

void FUN_1032104a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110626168;
  func_0x000107c613fc(&UNK_110626168,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x103210570,puVar1);
  return;
}



/* Entry: 103210724; end: 103210753;  */

undefined1  [16] FUN_103210724(void)

{
  return ZEXT816(0x110626190);
}



/* Entry: 103210754; end: 103210813;  */

void FUN_103210754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e2b8;
  func_0x000107c61520(&DAT_10db9e2b8,&UNK_110626750);
  puRam0000000112f4c9b8 = puVar1;
  return;
}



/* Entry: 103210814; end: 10321097b;  */

long FUN_103210814(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
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
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar2 = 0x112f4c9e0;
  func_0x0001000285a8(0x112f4c9e0,&UNK_10db9e0b0);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uVar2 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  FUN_103210a4c(&uStack_70,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103210a4c(&uStack_80,auStack_b0,0x112f4c9e0,&UNK_10db9e0b0);
  FUN_103210a4c(&uStack_90,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103210a4c(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10321097c; end: 1032109b7;  */

void FUN_10321097c(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1032109bc(&uStack_60);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 1032109b8; end: 1032109bb;  */

long FUN_1032109b8(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
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
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar3 = 0x112f4b7e0;
  func_0x0001000285a8(0x112f4b7e0,&UNK_10db9b0a0);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uVar2 = 0x112f4c9e0;
  func_0x0001000285a8(0x112f4c9e0,&UNK_10db9e0b0);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uVar2 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_88;
  *(undefined8 *)(lVar1 + 0x70) = uStack_90;
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uVar3 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x20[7];
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  FUN_103210a4c(&uStack_70,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103210a4c(&uStack_80,auStack_b0,0x112f4c9e0,&UNK_10db9e0b0);
  FUN_103210a4c(&uStack_90,auStack_b0,0x112f4b7e0,&UNK_10db9b0a0);
  FUN_103210a4c(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 1032109bc; end: 103210a4b;  */

void FUN_1032109bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110db9478;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e938;
  uVar6 = param_3;
  func_0x000107c5faec();
  ppuVar5 = ppuVar4;
  uVar7 = uVar6;
  func_0x000103b92a00();
  puVar1 = *ppuVar5;
  puVar2 = ppuVar5[1];
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0dc98;
  func_0x000107c5faec();
  *param_1 = ppuVar3;
  param_1[1] = param_3;
  param_1[2] = ppuVar4;
  param_1[3] = uVar6;
  param_1[4] = puVar1;
  param_1[5] = puVar2;
  param_1[6] = ppuVar5;
  param_1[7] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(puVar2);
  return;
}



/* Entry: 103210a4c; end: 103210af7;  */

undefined8 FUN_103210a4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103210af8; end: 103210c07;  */

undefined8 * FUN_103210af8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103210c08; end: 103210c6b;  */

undefined8 * FUN_103210c08(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103210c6c; end: 103210d13;  */

int FUN_103210c6c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103210d14; end: 103210d27;  */

void FUN_103210d14(void)

{
  func_0x000108f4a298();
  return;
}



/* Entry: 103210d28; end: 103210d83;  */

/* WARNING: Possible PIC construction at 0x000103210d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103210d40) */

void FUN_103210d28(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103210d84; end: 103210ddf;  */

undefined8 * FUN_103210d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103210de0; end: 103210e1b;  */

undefined8 * FUN_103210de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103210e1c; end: 103210eaf;  */

int FUN_103210e1c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103210eb0; end: 103210feb;  */

void FUN_103210eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    lVar1 = lStack_58;
    func_0x000107c614f0(lStack_58);
    uVar2 = param_1;
    FUN_103210fec(param_1,param_2,lVar1);
    puVar3 = &UNK_1106263e8;
    func_0x000107c613fc(&UNK_1106263e8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    uVar4 = 0;
    func_0x000103a715ac(0);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c61434(param_2);
    pcVar5 = FUN_10321114c;
    func_0x00010068b194(FUN_10321114c,puVar3,uVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar3);
    func_0x0001000d5158(FUN_103211214,0,PTR___sSbN_11034dd40);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61574(pcVar5);
  }
  return;
}



/* Entry: 103210fec; end: 1032110a3;  */

void FUN_103210fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110626438;
  func_0x000107c613fc(&UNK_110626438,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110626460;
  func_0x000107c613fc(&UNK_110626460,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x0001000285a8(0x112f4c9f0,&UNK_10db9e150);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  func_0x0001000b64ac(0x1032113e0,puVar2);
  return;
}



/* Entry: 1032110a4; end: 10321114b;  */

void FUN_1032110a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *param_1;
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f4c9e8,&UNK_10db9e148);
    lStack_38 = lVar1;
    func_0x000100854cb0(&lStack_38);
  }
  else {
    FUN_103211158(param_4,param_5);
    func_0x000107c615e8(lStack_38);
    lStack_38 = lVar1;
    func_0x0001006c71a4(&lStack_38);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 10321114c; end: 103211157;  */

void FUN_10321114c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *param_1;
  func_0x0001000d224c(&lStack_38,param_1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f4c9e8,&UNK_10db9e148);
    lStack_38 = lVar3;
    func_0x000100854cb0(&lStack_38);
  }
  else {
    FUN_103211158(uVar2,uVar1);
    func_0x000107c615e8(lStack_38);
    lStack_38 = lVar3;
    func_0x0001006c71a4(&lStack_38);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103211158; end: 103211213;  */

undefined8 FUN_103211158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112f4c9e8,&UNK_10db9e148);
  func_0x000107c5167c();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  func_0x000107c61170(unaff_x20);
  puVar2 = &UNK_110626410;
  func_0x000107c613fc(&UNK_110626410,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  uVar3 = 0x1032113d8;
  func_0x0001000c0ebc(0x1032113d8,puVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 103211214; end: 10321122f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103211214(undefined1 *param_1,long *param_2)

{
  *param_1 = *(undefined1 *)(*param_2 + _DAT_112fd9ec0);
  return;
}



/* Entry: 103211230; end: 10321134f;  */

void FUN_103211230(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    pcStack_68 = FUN_1032113ec;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_103211350;
    puStack_70 = &UNK_110626478;
    ppuVar2 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c43294(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(param_3);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 103211350; end: 10321139b;  */

void FUN_103211350(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10321139c; end: 1032113eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10321139c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + _DAT_112fd9eb8);
  if (lVar1 != param_2 || ((long *)(*param_1 + _DAT_112fd9eb8))[1] != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1032113ec; end: 10321140f;  */

void FUN_1032113ec(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 103211410; end: 103211433;  */

void FUN_103211410(long param_1,long param_2)

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



/* Entry: 103211434; end: 103211473;  */

void FUN_103211434(undefined8 param_1,long param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_103211700(auStack_148,*(undefined8 *)(param_2 + 0x20));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 103211474; end: 10321157b;  */

code * FUN_103211474(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = 1;
  func_0x00010061b458(1);
  puVar2 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar4 = FUN_10321157c;
  FUN_10326d7dc(FUN_10321157c,0,uVar3);
  func_0x000107c61170(uVar3);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar4);
  uVar1 = 0x112f4c9f8;
  func_0x0001000285a8(0x112f4c9f8,&UNK_10db9e158);
  pcVar4 = FUN_103211434;
  func_0x0001000bfde0(FUN_103211434,0,uVar1);
  func_0x000107c61574(pcVar5);
  return pcVar4;
}



/* Entry: 10321157c; end: 103211643;  */

undefined * FUN_10321157c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000,puVar1,param_2,0x72,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x000107c45154(puVar1,param_2,2);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 103211644; end: 103211683;  */

void FUN_103211644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ca00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e188;
  func_0x000107c61520(&DAT_10db9e188,&UNK_1106264c8);
  puRam0000000112f4ca00 = puVar1;
  return;
}



/* Entry: 103211684; end: 103211687;  */

void FUN_103211684(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ca08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ca10;
  func_0x00010002969c(0x112f4ca10,&UNK_10db9e180);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ca08 = puVar2;
  return;
}



/* Entry: 103211688; end: 1032116d7;  */

void FUN_103211688(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ca08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ca10;
  func_0x00010002969c(0x112f4ca10,&UNK_10db9e180);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ca08 = puVar2;
  return;
}



/* Entry: 1032116d8; end: 1032116ff;  */

undefined ** FUN_1032116d8(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 103211700; end: 1032118af;  */

void FUN_103211700(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puStack_2e0;
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
  undefined8 uStack_23f;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_100;
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
  undefined8 uStack_5f;
  
  puVar3 = param_2;
  func_0x000103213d04();
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001031e60c4(&puStack_100);
  }
  else {
    puStack_2e0 = param_2;
    func_0x0001031e60f0(&puStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    puStack_230 = puStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    puStack_210 = (undefined8 *)uStack_2c0;
    puStack_1f8 = (undefined8 *)uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&puStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    puStack_100 = puStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = puStack_210;
    uStack_c8 = puStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  puStack_1f8 = puStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  func_0x000107c61174();
  func_0x000103bb5934();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x000101c68d90(0);
  func_0x000107c61434(uVar2);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  puStack_230 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_220 = 0x6e696c5f79706f63;
  uStack_218 = 0xe90000000000006b;
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_200 = 0;
  uStack_120 = 0x102;
  uStack_118 = 0;
  uStack_110 = 1;
  puStack_210 = puVar3;
  uStack_208 = param_3;
  uStack_138 = uVar1;
  uStack_130 = uVar2;
  puStack_128 = puVar4;
  FUN_1032118b0(&puStack_230);
  func_0x000107c610b4(param_1,&puStack_230,0x128);
  return;
}



/* Entry: 1032118b0; end: 1032118c7;  */

void FUN_1032118b0(void)

{
  return;
}



/* Entry: 1032118c8; end: 1032118ef;  */

void FUN_1032118c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b92734();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1032118f0; end: 103211973;  */

long FUN_1032118f0(void)

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
  uVar4 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 103211974; end: 103211c0b;  */

code * FUN_103211974(undefined8 param_1,undefined8 param_2,undefined8 param_3,char **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char **ppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcStack_68;
  
  puVar1 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_103211c0c;
  FUN_10326d7dc(FUN_103211c0c,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_103211cc0;
  FUN_10326d7dc(FUN_103211cc0,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  pcVar5 = FUN_103211d14;
  func_0x0001000bfde0(FUN_103211d14,0,uVar2);
  pcVar6 = pcVar5;
  func_0x000100dd41f8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
  func_0x0001000e2834(0);
  pcVar7 = "";
  func_0x000107c60124("",0,2);
  ppcVar8 = &pcStack_68;
  pcStack_68 = pcVar7;
  func_0x000100854cb0(ppcVar8);
  func_0x000107c61170(pcVar7);
  ppcVar9 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  ppcVar11 = ppcVar8;
  if (ppcVar9 != (char **)0x0) {
    ppcVar10 = ppcVar9;
    func_0x000107c3da80();
    func_0x000107c61180();
    func_0x000107c615e8(ppcVar9);
    ppcVar11 = ppcVar10;
    func_0x0001000b637c(ppcVar10);
    func_0x000107c61574(ppcVar8);
    func_0x000107c61170(ppcVar10);
  }
  ppcVar8 = ppcVar11;
  func_0x0001006c733c(ppcVar11);
  puVar12 = &UNK_1106264f8;
  func_0x000107c613fc(&UNK_1106264f8,0x38,7);
  *(undefined8 *)(puVar12 + 0x10) = param_2;
  *(undefined8 *)(puVar12 + 0x18) = param_3;
  *(char ***)(puVar12 + 0x20) = param_4;
  *(code **)(puVar12 + 0x28) = pcVar4;
  *(code **)(puVar12 + 0x30) = pcVar3;
  puVar13 = &UNK_110626520;
  func_0x000107c613fc(&UNK_110626520,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_103211ea8;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar3);
  uVar2 = 0x112f4ca58;
  func_0x0001000285a8(0x112f4ca58,&UNK_10db9e1d8);
  pcVar5 = FUN_1032120e0;
  func_0x00010068b194(FUN_1032120e0,puVar13,uVar2);
  func_0x000107c61574(ppcVar11);
  func_0x000107c61574(ppcVar8);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  return pcVar5;
}



/* Entry: 103211c0c; end: 103211cbf;  */

undefined * FUN_103211c0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  if (lRam0000000112f4cac0 != -1) {
    func_0x000107c61568(0x112f4cac0,0x1032118b4);
  }
  uVar2 = uRam0000000112f4cad0;
  uVar1 = uRam0000000112f4cac8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(uVar1,uVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 103211cc0; end: 103211d13;  */

undefined8 FUN_103211cc0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4cbd8 != -1) {
    func_0x000107c61568(0x112f4cbd8,FUN_103213f28);
  }
  uVar1 = uRam0000000113807130;
  func_0x000107c61174(uRam0000000113807130);
  return uVar1;
}



/* Entry: 103211d14; end: 103211daf;  */

void FUN_103211d14(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  uVar4 = param_2[2];
  puVar2 = &UNK_10db9e290;
  func_0x000107c614e0(&UNK_10db9e290);
  if (lVar1 == 0) {
    func_0x000107c61574();
    uVar3 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    lVar5 = lVar1;
    FUN_103213830(uVar3,lVar1,uVar4,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar3;
  param_1[1] = lVar5;
  return;
}



/* Entry: 103211db0; end: 103211ea7;  */

void FUN_103211db0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_290 [296];
  undefined1 auStack_168 [296];
  
  if (param_2 == 0) {
    func_0x0001000285a8(0x112f4cab8,&UNK_10db9e288);
    func_0x000103212500(auStack_168);
    func_0x000107c610b4(auStack_290,auStack_168,0x128);
    func_0x000100854cb0(auStack_290);
  }
  else {
    FUN_103210eb0(param_1,param_2,param_4,param_5);
    puVar1 = &UNK_110626678;
    func_0x000107c613fc(&UNK_110626678,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_7;
    *(undefined8 *)(puVar1 + 0x18) = param_8;
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(param_8);
    uVar2 = 0x112f4ca58;
    func_0x0001000285a8(0x112f4ca58,&UNK_10db9e1d8);
    func_0x00010068b194(0x103212530,puVar1,uVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 103211ea8; end: 103211eb7;  */

void FUN_103211ea8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_290 [296];
  undefined1 auStack_168 [296];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_2 == 0) {
    func_0x0001000285a8(0x112f4cab8,&UNK_10db9e288);
    func_0x000103212500(auStack_168);
    func_0x000107c610b4(auStack_290,auStack_168,0x128);
    func_0x000100854cb0(auStack_290);
  }
  else {
    FUN_103210eb0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
    puVar1 = &UNK_110626678;
    func_0x000107c613fc(&UNK_110626678,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    *(undefined8 *)(puVar1 + 0x18) = uVar3;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112f4ca58;
    func_0x0001000285a8(0x112f4ca58,&UNK_10db9e1d8);
    func_0x00010068b194(0x103212530,puVar1,uVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 103211eb8; end: 103211f37;  */

undefined8 FUN_103211eb8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  puVar2 = &UNK_1106266a0;
  func_0x000107c613fc(&UNK_1106266a0,0x11,7);
  puVar2[0x10] = uVar1;
  uVar3 = 0x112f4ca58;
  func_0x0001000285a8(0x112f4ca58,&UNK_10db9e1d8);
  uVar4 = 0x103212538;
  func_0x0001000bfde0(0x103212538,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 103211f38; end: 1032120df;  */

void FUN_103211f38(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_2e0;
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
  undefined8 uStack_23f;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  lVar2 = *param_2;
  if ((param_3 & 1) == 0) {
    func_0x000103213d20();
  }
  else {
    func_0x000103213d04();
  }
  if (lVar2 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_2e0 = lVar2;
    func_0x0001031e60f0(&lStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    lStack_230 = lStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    plStack_210 = (long *)uStack_2c0;
    lStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&lStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    lStack_100 = lStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = plStack_210;
    uStack_c8 = lStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  lStack_1f8 = lStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(lVar2);
  func_0x000107c5166c();
  func_0x000107c61180();
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x65766173;
  uStack_218 = 0xe400000000000000;
  uStack_140 = 1;
  uStack_148 = 0;
  uStack_200 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x100;
  uStack_118 = 0;
  uStack_110 = 1;
  plStack_210 = param_2;
  uStack_208 = param_3;
  puStack_138 = puVar1;
  func_0x000103212540(&lStack_230);
  func_0x000107c610b4(param_1,&lStack_230,0x128);
  return;
}



/* Entry: 1032120e0; end: 10321210b;  */

void FUN_1032120e0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 10321210c; end: 103212117;  */

code * FUN_10321210c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  char *pcVar9;
  char **ppcVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **ppcVar13;
  undefined *puVar14;
  undefined *puVar15;
  char **ppcVar16;
  undefined8 *unaff_x20;
  char *pcStack_68;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  ppcVar16 = (char **)unaff_x20[2];
  puVar3 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  pcVar5 = FUN_103211c0c;
  FUN_10326d7dc(FUN_103211c0c,0,uVar4);
  func_0x000107c61170(uVar4);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  pcVar6 = FUN_103211cc0;
  FUN_10326d7dc(FUN_103211cc0,0,uVar4);
  func_0x000107c61170(uVar4);
  uVar4 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  pcVar7 = FUN_103211d14;
  func_0x0001000bfde0(FUN_103211d14,0,uVar4);
  pcVar8 = pcVar7;
  func_0x000100dd41f8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar7);
  func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
  func_0x0001000e2834(0);
  pcVar9 = "";
  func_0x000107c60124("",0,2);
  ppcVar10 = &pcStack_68;
  pcStack_68 = pcVar9;
  func_0x000100854cb0(ppcVar10);
  func_0x000107c61170(pcVar9);
  ppcVar11 = ppcVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  ppcVar13 = ppcVar10;
  if (ppcVar11 != (char **)0x0) {
    ppcVar12 = ppcVar11;
    func_0x000107c3da80();
    func_0x000107c61180();
    func_0x000107c615e8(ppcVar11);
    ppcVar13 = ppcVar12;
    func_0x0001000b637c(ppcVar12);
    func_0x000107c61574(ppcVar10);
    func_0x000107c61170(ppcVar12);
  }
  ppcVar10 = ppcVar13;
  func_0x0001006c733c(ppcVar13);
  puVar14 = &UNK_1106264f8;
  func_0x000107c613fc(&UNK_1106264f8,0x38,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar1;
  *(undefined8 *)(puVar14 + 0x18) = uVar2;
  *(char ***)(puVar14 + 0x20) = ppcVar16;
  *(code **)(puVar14 + 0x28) = pcVar6;
  *(code **)(puVar14 + 0x30) = pcVar5;
  puVar15 = &UNK_110626520;
  func_0x000107c613fc(&UNK_110626520,0x20,7);
  *(code **)(puVar15 + 0x10) = FUN_103211ea8;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(ppcVar16);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar5);
  uVar4 = 0x112f4ca58;
  func_0x0001000285a8(0x112f4ca58,&UNK_10db9e1d8);
  pcVar7 = FUN_1032120e0;
  func_0x00010068b194(FUN_1032120e0,puVar15,uVar4);
  func_0x000107c61574(ppcVar13);
  func_0x000107c61574(ppcVar10);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  return pcVar7;
}



/* Entry: 103212118; end: 10321213b;  */

void FUN_103212118(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10321213c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10321213c; end: 10321217b;  */

void FUN_10321213c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ca60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e218;
  func_0x000107c61520(&DAT_10db9e218,&UNK_1106265d0);
  puRam0000000112f4ca60 = puVar1;
  return;
}



/* Entry: 10321217c; end: 10321217f;  */

void FUN_10321217c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ca68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ca70;
  func_0x00010002969c(0x112f4ca70,&UNK_10db9e210);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ca68 = puVar2;
  return;
}



/* Entry: 103212180; end: 1032121cf;  */

void FUN_103212180(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ca68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ca70;
  func_0x00010002969c(0x112f4ca70,&UNK_10db9e210);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ca68 = puVar2;
  return;
}



/* Entry: 1032121d0; end: 1032121e7;  */

undefined ** FUN_1032121d0(void)

{
  return &PTR_DAT_110626538;
}



/* Entry: 1032121e8; end: 10321221f;  */

undefined * FUN_1032121e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001032107d4();
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



/* Entry: 103212220; end: 10321224f;  */

void FUN_103212220(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  func_0x000107c61574(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[2]);
  return;
}



/* Entry: 103212250; end: 10321230f;  */

undefined8 * FUN_103212250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 103212310; end: 10321235b;  */

undefined8 * FUN_103212310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10321235c; end: 1032123fb;  */

int FUN_10321235c(ulong *param_1,int param_2)

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



/* Entry: 1032123fc; end: 10321246b;  */

undefined8 * FUN_1032123fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10321246c; end: 103212553;  */

int FUN_10321246c(int *param_1,int param_2)

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



/* Entry: 103212554; end: 10321278f;  */

bool FUN_103212554(void)

{
  undefined *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *unaff_x20;
  double dVar5;
  undefined1 auStack_1a0 [64];
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dStack_f8 = unaff_x20[5];
  dStack_100 = unaff_x20[4];
  dStack_e8 = unaff_x20[7];
  dStack_f0 = unaff_x20[6];
  dStack_e0 = unaff_x20[8];
  dStack_118 = unaff_x20[1];
  dStack_120 = *unaff_x20;
  dStack_108 = unaff_x20[3];
  dStack_110 = unaff_x20[2];
  puVar1 = &UNK_10db9e398;
  func_0x000107c614e0(&UNK_10db9e398);
  dStack_88 = unaff_x20[1];
  dStack_90 = *unaff_x20;
  dStack_78 = unaff_x20[3];
  dStack_80 = unaff_x20[2];
  dStack_68 = unaff_x20[5];
  dStack_70 = unaff_x20[4];
  dStack_58 = unaff_x20[7];
  dStack_60 = unaff_x20[6];
  if (dStack_88 == 0.0) {
    func_0x000107c61574();
    return false;
  }
  dStack_158 = unaff_x20[1];
  dVar5 = *unaff_x20;
  dStack_148 = unaff_x20[3];
  dStack_150 = unaff_x20[2];
  dStack_138 = unaff_x20[5];
  dStack_140 = unaff_x20[4];
  dStack_128 = unaff_x20[7];
  dStack_130 = unaff_x20[6];
  dStack_160 = dVar5;
  dStack_d0 = dVar5;
  dStack_c8 = dStack_158;
  dStack_c0 = dStack_150;
  dStack_b8 = dStack_148;
  dStack_b0 = dStack_140;
  dStack_a8 = dStack_138;
  dStack_a0 = dStack_130;
  dStack_98 = dStack_128;
  FUN_103213b0c(&dStack_160,auStack_1a0);
  pdVar2 = &dStack_d0;
  FUN_1032135fc(pdVar2,&dStack_120,puVar1);
  func_0x000103213b48(&dStack_90,0x112f4cb28,&UNK_10db9e348);
  func_0x000107c61574(puVar1);
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
    func_0x000107c49820();
    puVar1 = &UNK_10db9e358;
    func_0x000107c614e0(&UNK_10db9e358);
    FUN_103213b0c(&dStack_160,auStack_1a0);
    pdVar4 = &dStack_d0;
    FUN_1032135fc(pdVar4,&dStack_120,puVar1);
    func_0x000103213b48(&dStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574(puVar1);
    if (pdVar4 != (double *)0x0) {
      func_0x000107c4223c(pdVar4);
      if (0.0 < dVar5) {
        func_0x000107c30854();
        func_0x000107c61170(pdVar4);
        func_0x000107c61170(pdVar2);
        if (((ulong)pdVar3 & 1) != 0) {
          return true;
        }
        goto LAB_1032126c8;
      }
      func_0x000107c61170(pdVar2);
      pdVar2 = pdVar4;
    }
    func_0x000107c61170(pdVar2);
  }
LAB_1032126c8:
  puVar1 = &UNK_10db9e378;
  func_0x000107c614e0(&UNK_10db9e378);
  FUN_103213b0c(&dStack_160,auStack_1a0);
  pdVar2 = &dStack_d0;
  FUN_1032134e4(pdVar2,&dStack_120,puVar1);
  func_0x000103213b48(&dStack_90,0x112f4cb28,&UNK_10db9e348);
  func_0x000107c61574(puVar1);
  if (pdVar2 != (double *)0x0) {
    puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    pdVar3 = pdVar2;
    func_0x000107c6148c(pdVar2,puVar1);
    if ((pdVar3 != (double *)0x0) &&
       (pdVar4 = pdVar3, func_0x000107c4ca5c(), pdVar4 == (double *)0x2)) {
      func_0x000107c42378(pdVar3);
      func_0x000107c615e8(pdVar2);
      return 0.0 < dVar5;
    }
    func_0x000107c615e8(pdVar2);
  }
  return false;
}



/* Entry: 103212790; end: 103212977;  */

bool FUN_103212790(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *unaff_x20;
  double dVar6;
  undefined1 auStack_1a0 [64];
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dStack_f8 = unaff_x20[5];
  dStack_100 = unaff_x20[4];
  dStack_e8 = unaff_x20[7];
  dStack_f0 = unaff_x20[6];
  dStack_e0 = unaff_x20[8];
  dStack_118 = unaff_x20[1];
  dStack_120 = *unaff_x20;
  dStack_108 = unaff_x20[3];
  dStack_110 = unaff_x20[2];
  puVar2 = &UNK_10db9e358;
  func_0x000107c614e0(&UNK_10db9e358);
  dStack_88 = unaff_x20[1];
  dStack_90 = *unaff_x20;
  dStack_78 = unaff_x20[3];
  dStack_80 = unaff_x20[2];
  dStack_68 = unaff_x20[5];
  dStack_70 = unaff_x20[4];
  dStack_58 = unaff_x20[7];
  dStack_60 = unaff_x20[6];
  if (dStack_88 == 0.0) {
    func_0x000107c61574();
  }
  else {
    dStack_158 = unaff_x20[1];
    dVar6 = *unaff_x20;
    dStack_148 = unaff_x20[3];
    dStack_150 = unaff_x20[2];
    dStack_138 = unaff_x20[5];
    dStack_140 = unaff_x20[4];
    dStack_128 = unaff_x20[7];
    dStack_130 = unaff_x20[6];
    dStack_160 = dVar6;
    dStack_d0 = dVar6;
    dStack_c8 = dStack_158;
    dStack_c0 = dStack_150;
    dStack_b8 = dStack_148;
    dStack_b0 = dStack_140;
    dStack_a8 = dStack_138;
    dStack_a0 = dStack_130;
    dStack_98 = dStack_128;
    FUN_103213b0c(&dStack_160,auStack_1a0);
    pdVar3 = &dStack_d0;
    FUN_1032135fc(pdVar3,&dStack_120,puVar2);
    func_0x000103213b48(&dStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574(puVar2);
    if (pdVar3 != (double *)0x0) {
      func_0x000107c4223c(pdVar3);
      if (dVar6 <= 0.0) {
        func_0x000107c61170(pdVar3);
      }
      else {
        func_0x000107c4223c(pdVar3);
        func_0x000107c61170(pdVar3);
        bVar1 = dVar6 < (double)param_1;
        dVar6 = (double)param_1;
        if (bVar1) {
          return false;
        }
      }
    }
    puVar2 = &UNK_10db9e378;
    func_0x000107c614e0(&UNK_10db9e378);
    FUN_103213b0c(&dStack_160,auStack_1a0);
    pdVar3 = &dStack_d0;
    FUN_1032134e4(pdVar3,&dStack_120,puVar2);
    func_0x000103213b48(&dStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574(puVar2);
    if (pdVar3 != (double *)0x0) {
      puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
      pdVar4 = pdVar3;
      func_0x000107c6148c(pdVar3,puVar2);
      if (((pdVar4 != (double *)0x0) &&
          (pdVar5 = pdVar4, func_0x000107c4ca5c(), pdVar5 == (double *)0x2)) &&
         (func_0x000107c42378(pdVar4), 0.0 < dVar6)) {
        func_0x000107c42378(pdVar4);
        func_0x000107c615e8(pdVar3);
        return (double)param_1 <= dVar6;
      }
      func_0x000107c615e8(pdVar3);
    }
  }
  return true;
}



/* Entry: 103212978; end: 1032129b3;  */

void FUN_103212978(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  puRam0000000112f4cb38 = puVar1;
  return;
}



/* Entry: 1032129b4; end: 103212d23;  */

code * FUN_1032129b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                    ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_a0 = param_1[8];
  puVar2 = &UNK_10db9e320;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  func_0x000107c614e0();
  lStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  if (lStack_88 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_2a8 = param_1[1];
    uStack_2b0 = *param_1;
    uStack_298 = param_1[3];
    uStack_2a0 = param_1[2];
    uStack_288 = param_1[5];
    lStack_290 = param_1[4];
    uStack_278 = param_1[7];
    uStack_280 = param_1[6];
    uStack_120 = uStack_2b0;
    uStack_118 = uStack_2a8;
    uStack_110 = uStack_2a0;
    uStack_108 = uStack_298;
    lStack_100 = lStack_290;
    uStack_f8 = uStack_288;
    uStack_f0 = uStack_280;
    uStack_e8 = uStack_278;
    FUN_103213b0c(&uStack_2b0,auStack_3d8);
    puVar3 = &uStack_120;
    FUN_103213718(puVar3,&uStack_e0,puVar2);
    func_0x000103213b48(&uStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574();
    if ((((uint)puVar3 & 0xff) != 2) && (((ulong)puVar3 & 1) != 0)) {
      func_0x0001000d224c(auStack_3d8);
      func_0x0001000a8868(auStack_3d8,uStack_3c0);
      uVar4 = 0x12;
      (**(code **)(lStack_3b8 + 8))(0x12,uStack_3c0,lStack_3b8);
      uVar6 = 0x112f4bd88;
      func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
      pcVar7 = FUN_103212e50;
      func_0x0001000bfde0(FUN_103212e50,0,uVar6);
      func_0x000107c61574(uVar4);
      puVar3 = (undefined8 *)auStack_3d8;
      goto LAB_103212c68;
    }
  }
  if (((param_4 & 1) == 0) ||
     ((FUN_103212554(), ((ulong)puVar2 & 1) == 0 ||
      (uVar5 = param_5, func_0x000107c426a4(), (int)uVar5 == 0)))) {
    func_0x0001000d224c(&uStack_2b0);
    lVar1 = lStack_290;
    uVar4 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar1 + 8))(uVar4,lVar1);
    puVar2 = &UNK_1106267a8;
    func_0x000107c613fc(&UNK_1106267a8,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar2[0x20] = param_4 & 1;
    *(ulong *)(puVar2 + 0x28) = param_5;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(param_5);
    uVar6 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar7 = (code *)0x1032134a0;
  }
  else {
    uVar5 = param_5;
    func_0x000107c5b910();
    FUN_103212790();
    if ((uVar5 & 1) != 0) {
      func_0x0001000285a8(0x112f4cb20,&UNK_10db9e340);
      FUN_10321393c(&uStack_2b0,param_5);
      FUN_1031f3c9c(&uStack_2b0);
      func_0x000107c610b4(auStack_3d8,&uStack_2b0,0x128);
      pcVar7 = (code *)auStack_3d8;
      func_0x000100854cb0(pcVar7);
      func_0x000103213b48(auStack_3d8,0x112f4bd88,&UNK_10db9bb30);
      return pcVar7;
    }
    func_0x0001000d224c(&uStack_2b0);
    lVar1 = lStack_290;
    uVar4 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar1 + 8))(uVar4,lVar1);
    puVar2 = &UNK_1106267d0;
    func_0x000107c613fc(&UNK_1106267d0,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar2[0x20] = 1;
    *(ulong *)(puVar2 + 0x28) = param_5;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(param_5);
    uVar6 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar7 = (code *)0x103213d00;
  }
  func_0x00010068b194(pcVar7,puVar2,uVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  puVar3 = &uStack_2b0;
LAB_103212c68:
  func_0x0001000834e4(puVar3);
  return pcVar7;
}



/* Entry: 103212d24; end: 103212d33;  */

code * FUN_103212d24(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  uVar10 = *(ulong *)(unaff_x20 + 0x28);
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_a0 = param_1[8];
  puVar3 = &UNK_10db9e320;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  func_0x000107c614e0();
  lStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  if (lStack_88 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_2a8 = param_1[1];
    uStack_2b0 = *param_1;
    uStack_298 = param_1[3];
    uStack_2a0 = param_1[2];
    uStack_288 = param_1[5];
    lStack_290 = param_1[4];
    uStack_278 = param_1[7];
    uStack_280 = param_1[6];
    uStack_120 = uStack_2b0;
    uStack_118 = uStack_2a8;
    uStack_110 = uStack_2a0;
    uStack_108 = uStack_298;
    lStack_100 = lStack_290;
    uStack_f8 = uStack_288;
    uStack_f0 = uStack_280;
    uStack_e8 = uStack_278;
    FUN_103213b0c(&uStack_2b0,auStack_3d8);
    puVar4 = &uStack_120;
    FUN_103213718(puVar4,&uStack_e0,puVar3);
    func_0x000103213b48(&uStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574();
    if ((((uint)puVar4 & 0xff) != 2) && (((ulong)puVar4 & 1) != 0)) {
      func_0x0001000d224c(auStack_3d8);
      func_0x0001000a8868(auStack_3d8,uStack_3c0);
      uVar5 = 0x12;
      (**(code **)(lStack_3b8 + 8))(0x12,uStack_3c0,lStack_3b8);
      uVar8 = 0x112f4bd88;
      func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
      pcVar9 = FUN_103212e50;
      func_0x0001000bfde0(FUN_103212e50,0,uVar8);
      func_0x000107c61574(uVar5);
      puVar4 = (undefined8 *)auStack_3d8;
      goto LAB_103212c68;
    }
  }
  if (((bVar1 & 1) == 0) ||
     ((FUN_103212554(), ((ulong)puVar3 & 1) == 0 ||
      (uVar6 = uVar10, func_0x000107c426a4(), (int)uVar6 == 0)))) {
    func_0x0001000d224c(&uStack_2b0);
    lVar2 = lStack_290;
    uVar7 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar2 + 8))(uVar7,lVar2);
    puVar3 = &UNK_1106267a8;
    func_0x000107c613fc(&UNK_1106267a8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    puVar3[0x20] = bVar1 & 1;
    *(ulong *)(puVar3 + 0x28) = uVar10;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar5);
    func_0x000107c615f0(uVar10);
    uVar8 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar9 = (code *)0x1032134a0;
  }
  else {
    uVar6 = uVar10;
    func_0x000107c5b910();
    FUN_103212790();
    if ((uVar6 & 1) != 0) {
      func_0x0001000285a8(0x112f4cb20,&UNK_10db9e340);
      FUN_10321393c(&uStack_2b0,uVar10);
      FUN_1031f3c9c(&uStack_2b0);
      func_0x000107c610b4(auStack_3d8,&uStack_2b0,0x128);
      pcVar9 = (code *)auStack_3d8;
      func_0x000100854cb0(pcVar9);
      func_0x000103213b48(auStack_3d8,0x112f4bd88,&UNK_10db9bb30);
      return pcVar9;
    }
    func_0x0001000d224c(&uStack_2b0);
    lVar2 = lStack_290;
    uVar7 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar2 + 8))(uVar7,lVar2);
    puVar3 = &UNK_1106267d0;
    func_0x000107c613fc(&UNK_1106267d0,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    puVar3[0x20] = 1;
    *(ulong *)(puVar3 + 0x28) = uVar10;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar5);
    func_0x000107c615f0(uVar10);
    uVar8 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar9 = (code *)0x103213d00;
  }
  func_0x00010068b194(pcVar9,puVar3,uVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar3);
  puVar4 = &uStack_2b0;
LAB_103212c68:
  func_0x0001000834e4(puVar4);
  return pcVar9;
}



/* Entry: 103212d34; end: 103212e4f;  */

undefined1 * FUN_103212d34(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_280 [296];
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  long lStack_138;
  
  puVar3 = auStack_280;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    func_0x0001000d224c(auStack_158);
    func_0x0001000a8868(auStack_158,uStack_140);
    uVar1 = 0x12;
    (**(code **)(lStack_138 + 8))(0x12,uStack_140,lStack_138);
    uVar2 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    puVar3 = (undefined1 *)0x103212fac;
    func_0x0001000bfde0(0x103212fac,0,uVar2);
    func_0x000107c61574(uVar1);
    func_0x0001000834e4(auStack_158);
  }
  else {
    func_0x0001000285a8(0x112f4cb20,&UNK_10db9e340);
    func_0x000107c61174(lVar4);
    FUN_103213b88(auStack_158);
    FUN_1031f3c9c(auStack_158);
    func_0x000107c610b4(auStack_280,auStack_158,0x128);
    func_0x000100854cb0(auStack_280);
    func_0x000107c61170(lVar4);
    func_0x000103213b48(auStack_280,0x112f4bd88,&UNK_10db9bb30);
  }
  return puVar3;
}



/* Entry: 103212e50; end: 10321310b;  */

void FUN_103212e50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_23f;
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
  undefined8 uStack_18f;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
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
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *param_2;
  FUN_103213e24();
  uStack_2e0 = uVar2;
  func_0x0001031e60f0(&uStack_2e0);
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_1a0 = uStack_250;
  uStack_18f = uStack_23f;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  func_0x0001031e6100(&uStack_230);
  uStack_c8 = uStack_1b8;
  uStack_d0 = uStack_1c0;
  uStack_b8 = uStack_1a8;
  uStack_c0 = uStack_1b0;
  uStack_b0 = uStack_1a0;
  uStack_9f = uStack_18f;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  uStack_f8 = uStack_1e8;
  uStack_100 = uStack_1f0;
  uStack_e8 = uStack_1d8;
  uStack_f0 = uStack_1e0;
  uStack_d8 = uStack_1c8;
  uStack_e0 = uStack_1d0;
  uStack_138 = uStack_228;
  uStack_140 = uStack_230;
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(uVar2);
  func_0x000107c4ebc0();
  func_0x000107c61180();
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0x74736f70;
  uStack_160 = 0xe400000000000000;
  uStack_148 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x100;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_158 = param_2;
  uStack_150 = param_3;
  puStack_80 = puVar1;
  FUN_1031f3c9c(&uStack_178);
  func_0x000107c610b4(param_1,&uStack_178,0x128);
  return;
}



/* Entry: 10321310c; end: 1032131cf;  */

code * FUN_10321310c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = *(undefined1 *)(unaff_x20 + 2);
  uVar7 = unaff_x20[3];
  uVar3 = 1;
  func_0x00010061b458(param_1,1);
  puVar4 = &UNK_110626780;
  func_0x000107c613fc(&UNK_110626780,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar4[0x20] = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar7);
  uVar5 = 0x112f4bd88;
  func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
  pcVar6 = FUN_103213cfc;
  func_0x00010068b194(FUN_103213cfc,puVar4,uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar4);
  return pcVar6;
}



/* Entry: 1032131d0; end: 1032131f3;  */

void FUN_1032131d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1032131f4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1032131f4; end: 103213233;  */

void FUN_1032131f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e2e0;
  func_0x000107c61520(&DAT_10db9e2e0,&UNK_110626750);
  puRam0000000112f4cad8 = puVar1;
  return;
}



/* Entry: 103213234; end: 10321324f;  */

void FUN_103213234(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bd98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bda0;
  func_0x00010002969c(0x112f4bda0,&UNK_10db9c0c0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bd98 = puVar2;
  return;
}



/* Entry: 103213250; end: 103213287;  */

undefined * FUN_103213250(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_103210754();
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



/* Entry: 103213288; end: 1032132e3;  */

long FUN_103213288(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032132e4; end: 1032133b3;  */

undefined8 * FUN_1032132e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  return param_1;
}



/* Entry: 1032133b4; end: 103213407;  */

undefined8 * FUN_1032133b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 103213408; end: 1032134af;  */

int FUN_103213408(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032134b0; end: 1032134e3;  */

void FUN_1032134b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032134e4; end: 1032135fb;  */

undefined8 FUN_1032134e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 auStack_c0 [4];
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
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,PTR___syXlN_11034f1a0 + 8,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 0;
  }
  return auStack_c0[0];
}



/* Entry: 1032135fc; end: 103213717;  */

undefined8 FUN_1032135fc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_c0 [4];
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
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 0;
  }
  return auStack_c0[0];
}



/* Entry: 103213718; end: 10321382f;  */

undefined1 FUN_103213718(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [32];
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
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 2;
  }
  return auStack_c0[0];
}



/* Entry: 103213830; end: 10321393b;  */

undefined1  [16]
FUN_103213830(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_90;
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
    func_0x000107c60234(&uStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(&uStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_90,&uStack_70,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
  }
  auVar4._8_8_ = uStack_88;
  auVar4._0_8_ = uStack_90;
  return auVar4;
}



/* Entry: 10321393c; end: 103213b0b;  */

void FUN_10321393c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
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
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  long lStack_1b0;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  long lStack_100;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar3 = param_2;
  func_0x000107c4268c();
  func_0x000107c42690();
  if ((int)param_2 == 0) {
    FUN_103213d58();
  }
  else {
    func_0x000103213d3c();
  }
  if (lRam0000000112f4cb30 != -1) {
    func_0x000107c61568(0x112f4cb30,FUN_103212978);
  }
  lVar2 = lRam0000000112f4cb38;
  if (lRam0000000112f4cb38 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_260 = lRam0000000112f4cb38;
    func_0x0001031e60f0(&lStack_260);
    uStack_128 = uStack_1d8;
    uStack_130 = uStack_1e0;
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_10f = uStack_1bf;
    uStack_117 = uStack_1c7;
    uStack_110 = uStack_1c0;
    uStack_168 = uStack_218;
    uStack_170 = uStack_220;
    uStack_158 = uStack_208;
    uStack_160 = uStack_210;
    uStack_148 = uStack_1f8;
    uStack_150 = uStack_200;
    uStack_138 = uStack_1e8;
    uStack_140 = uStack_1f0;
    uStack_1a8 = uStack_258;
    lStack_1b0 = lStack_260;
    uStack_198 = uStack_248;
    uStack_1a0 = uStack_250;
    uStack_188 = uStack_238;
    uStack_190 = uStack_240;
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    func_0x0001031e6100(&lStack_1b0);
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_f8 = uStack_1a8;
    lStack_100 = lStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
  }
  puVar4 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(lVar2);
  func_0x000107c4ebb8();
  func_0x000107c61180();
  param_1[0x16] = uStack_88;
  param_1[0x15] = uStack_90;
  param_1[0x18] = uStack_78;
  param_1[0x17] = uStack_80;
  param_1[0x1a] = CONCAT71(uStack_67,uStack_68);
  param_1[0x19] = uStack_70;
  *(undefined8 *)((long)param_1 + 0xd9) = uStack_5f;
  *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_60,uStack_67);
  param_1[0xe] = uStack_c8;
  param_1[0xd] = uStack_d0;
  param_1[0x10] = uStack_b8;
  param_1[0xf] = uStack_c0;
  param_1[0x12] = uStack_a8;
  param_1[0x11] = uStack_b0;
  param_1[0x14] = uStack_98;
  param_1[0x13] = uStack_a0;
  param_1[8] = uStack_f8;
  param_1[7] = lStack_100;
  param_1[10] = uStack_e8;
  param_1[9] = uStack_f0;
  uVar1 = 3;
  if ((int)uVar3 == 0) {
    uVar1 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x74736f70;
  param_1[3] = 0xe400000000000000;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[0xc] = uStack_d8;
  param_1[0xb] = uStack_e0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = puVar4;
  *(undefined2 *)(param_1 + 0x22) = 0x100;
  param_1[0x23] = 0;
  param_1[0x24] = uVar1;
  return;
}



/* Entry: 103213b0c; end: 103213b87;  */

undefined8 FUN_103213b0c(undefined8 param_1,undefined8 param_2)

{
  FUN_103210af8(param_2,param_1);
  return param_2;
}



/* Entry: 103213b88; end: 103213cfb;  */

void FUN_103213b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
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
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar1 = param_2;
  FUN_103213e24();
  uStack_260 = param_2;
  func_0x0001031e60f0(&uStack_260);
  uStack_128 = uStack_1d8;
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_10f = uStack_1bf;
  uStack_117 = uStack_1c7;
  uStack_110 = uStack_1c0;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  uStack_188 = uStack_238;
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  func_0x0001031e6100(&uStack_1b0);
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_5f = uStack_10f;
  uStack_67 = uStack_117;
  uStack_60 = uStack_110;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_e8 = uStack_198;
  uStack_f0 = uStack_1a0;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_2);
  func_0x000107c4ebc0();
  func_0x000107c61180();
  param_1[0x16] = uStack_88;
  param_1[0x15] = uStack_90;
  param_1[0x18] = uStack_78;
  param_1[0x17] = uStack_80;
  param_1[0x1a] = CONCAT71(uStack_67,uStack_68);
  param_1[0x19] = uStack_70;
  *(undefined8 *)((long)param_1 + 0xd9) = uStack_5f;
  *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_60,uStack_67);
  param_1[0xe] = uStack_c8;
  param_1[0xd] = uStack_d0;
  param_1[0x10] = uStack_b8;
  param_1[0xf] = uStack_c0;
  param_1[0x12] = uStack_a8;
  param_1[0x11] = uStack_b0;
  param_1[0x14] = uStack_98;
  param_1[0x13] = uStack_a0;
  param_1[8] = uStack_f8;
  param_1[7] = uStack_100;
  param_1[10] = uStack_e8;
  param_1[9] = uStack_f0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x74736f70;
  param_1[3] = 0xe400000000000000;
  param_1[4] = uVar1;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[0xc] = uStack_d8;
  param_1[0xb] = uStack_e0;
  param_1[0x1e] = 4;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = puVar2;
  *(undefined2 *)(param_1 + 0x22) = 0x100;
  param_1[0x23] = 0;
  param_1[0x24] = 1;
  return;
}



/* Entry: 103213cfc; end: 103213d57;  */

code * FUN_103213cfc(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  uVar10 = *(ulong *)(unaff_x20 + 0x28);
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_a0 = param_1[8];
  puVar3 = &UNK_10db9e320;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_c8 = uStack_168;
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  func_0x000107c614e0();
  lStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  if (lStack_88 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_2a8 = param_1[1];
    uStack_2b0 = *param_1;
    uStack_298 = param_1[3];
    uStack_2a0 = param_1[2];
    uStack_288 = param_1[5];
    lStack_290 = param_1[4];
    uStack_278 = param_1[7];
    uStack_280 = param_1[6];
    uStack_120 = uStack_2b0;
    uStack_118 = uStack_2a8;
    uStack_110 = uStack_2a0;
    uStack_108 = uStack_298;
    lStack_100 = lStack_290;
    uStack_f8 = uStack_288;
    uStack_f0 = uStack_280;
    uStack_e8 = uStack_278;
    FUN_103213b0c(&uStack_2b0,auStack_3d8);
    puVar4 = &uStack_120;
    FUN_103213718(puVar4,&uStack_e0,puVar3);
    func_0x000103213b48(&uStack_90,0x112f4cb28,&UNK_10db9e348);
    func_0x000107c61574();
    if ((((uint)puVar4 & 0xff) != 2) && (((ulong)puVar4 & 1) != 0)) {
      func_0x0001000d224c(auStack_3d8);
      func_0x0001000a8868(auStack_3d8,uStack_3c0);
      uVar5 = 0x12;
      (**(code **)(lStack_3b8 + 8))(0x12,uStack_3c0,lStack_3b8);
      uVar8 = 0x112f4bd88;
      func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
      pcVar9 = FUN_103212e50;
      func_0x0001000bfde0(FUN_103212e50,0,uVar8);
      func_0x000107c61574(uVar5);
      puVar4 = (undefined8 *)auStack_3d8;
      goto LAB_103212c68;
    }
  }
  if (((bVar1 & 1) == 0) ||
     ((FUN_103212554(), ((ulong)puVar3 & 1) == 0 ||
      (uVar6 = uVar10, func_0x000107c426a4(), (int)uVar6 == 0)))) {
    func_0x0001000d224c(&uStack_2b0);
    lVar2 = lStack_290;
    uVar7 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar2 + 8))(uVar7,lVar2);
    puVar3 = &UNK_1106267a8;
    func_0x000107c613fc(&UNK_1106267a8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    puVar3[0x20] = bVar1 & 1;
    *(ulong *)(puVar3 + 0x28) = uVar10;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar5);
    func_0x000107c615f0(uVar10);
    uVar8 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar9 = (code *)0x1032134a0;
  }
  else {
    uVar6 = uVar10;
    func_0x000107c5b910();
    FUN_103212790();
    if ((uVar6 & 1) != 0) {
      func_0x0001000285a8(0x112f4cb20,&UNK_10db9e340);
      FUN_10321393c(&uStack_2b0,uVar10);
      FUN_1031f3c9c(&uStack_2b0);
      func_0x000107c610b4(auStack_3d8,&uStack_2b0,0x128);
      pcVar9 = (code *)auStack_3d8;
      func_0x000100854cb0(pcVar9);
      func_0x000103213b48(auStack_3d8,0x112f4bd88,&UNK_10db9bb30);
      return pcVar9;
    }
    func_0x0001000d224c(&uStack_2b0);
    lVar2 = lStack_290;
    uVar7 = uStack_298;
    func_0x0001000a8868(&uStack_2b0,uStack_298);
    (**(code **)(lVar2 + 8))(uVar7,lVar2);
    puVar3 = &UNK_1106267d0;
    func_0x000107c613fc(&UNK_1106267d0,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    puVar3[0x20] = 1;
    *(ulong *)(puVar3 + 0x28) = uVar10;
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar5);
    func_0x000107c615f0(uVar10);
    uVar8 = 0x112f4bd88;
    func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
    pcVar9 = FUN_103213cfc;
  }
  func_0x00010068b194(pcVar9,puVar3,uVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar3);
  puVar4 = &uStack_2b0;
LAB_103212c68:
  func_0x0001000834e4(puVar4);
  return pcVar9;
}



/* Entry: 103213d58; end: 103213e23;  */

undefined1  [16] FUN_103213d58(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f131360);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f131330);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103213e24);
  (*pcVar1)();
}



/* Entry: 103213e24; end: 103213e47;  */

undefined1  [16] FUN_103213e24(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f6f745f74736f70;
  func_0x000107c5fadc(0x5f6f745f74736f70,0xef736569726f7473);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f131330);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103213ef8);
  (*pcVar1)();
}



/* Entry: 103213e48; end: 103213ef7;  */

undefined1  [16] FUN_103213e48(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f131330);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103213ef8);
  (*pcVar1)();
}



/* Entry: 103213ef8; end: 103213f07;  */

void FUN_103213ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103213f08; end: 103213f27;  */

void FUN_103213f08(void)

{
  func_0x000107c61168(&PTR_PTR_112f4cb80);
  return;
}



/* Entry: 103213f28; end: 10321400f;  */

void FUN_103213f28(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_103213f08();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x6e696c5f79706f63;
  func_0x000107c5fadc(0x6e696c5f79706f63,0xe90000000000006b);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807130 = puVar3;
  return;
}



/* Entry: 103214010; end: 1032140a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103214010(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4cbe0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032140a8; end: 1032140db;  */

void FUN_1032140a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032140dc; end: 1032140eb; -[_TtC30SCContextBitmojiSelfieServices30SCContextBitmojiSelfieServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032140dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4cbe0));
  return;
}



/* Entry: 1032140ec; end: 103214687;  */

void FUN_1032140ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110626930;
  func_0x000107c613fc(&UNK_110626930,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x1032141f0,puVar1);
  return;
}



/* Entry: 103214688; end: 103214697;  */

undefined1  [16] FUN_103214688(void)

{
  return ZEXT816(0x110626958);
}


