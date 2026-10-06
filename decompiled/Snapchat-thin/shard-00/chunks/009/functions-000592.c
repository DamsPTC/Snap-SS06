/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b66160; end: 100b66173;  */

bool FUN_100b66160(long *param_1,long *param_2)

{
  return *param_1 < *param_2;
}



/* Entry: 100b66174; end: 100b6627b;  */

void FUN_100b66174(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar6 = *param_3;
  lVar3 = *(long *)(lVar6 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40),param_2,param_2);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)((long)puVar4 - extraout_x12);
  (**(code **)(lVar7 + 0x10))(puVar5);
  iVar1 = *(int *)(lVar3 + 0x30);
  *puVar4 = *puVar5;
  (**(code **)(*(long *)(*(long *)(lVar6 + *(long *)puVar2 + 8) + -8) + 0x20))
            ((undefined1 *)((long)puVar4 + (long)iVar1),(long)puVar5 + (long)iVar1);
  func_0x000107c614bc(param_1,puVar4,param_3);
  (**(code **)(lVar7 + 8))(puVar4,lVar3);
  return;
}



/* Entry: 100b6627c; end: 100b66297;  */

void FUN_100b6627c(void)

{
  FUN_100b66174();
  return;
}



/* Entry: 100b66298; end: 100b6631f;  */

void FUN_100b66298(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  FUN_100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  if (lVar1 == 0) {
    uVar3 = 0;
    func_0x000107c6010c();
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a144();
    uVar3 = (ulong)((uint)lVar2 ^ 1);
    func_0x000107c6010c();
    func_0x000107c61170(lVar1);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 100b66320; end: 100b66323;  */

void FUN_100b66320(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_1;
  FUN_100087bd4(FUN_100625438,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 100b66324; end: 100b66357;  */

void FUN_100b66324(long param_1)

{
  FUN_1000b6d7c();
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x18,7);
  return;
}



/* Entry: 100b66358; end: 100b6648f;  */

/* WARNING: Possible PIC construction at 0x000100b663dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b663e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b66358(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef66e8);
  if (lVar1 != 0) {
    FUN_1000285a8(0x112ef67e0,&UNK_10db24e88);
    func_0x000107c61174(lVar1);
    func_0x0001000b637c();
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
    func_0x000107c615f0(uVar2);
    FUN_100471e0c();
    func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 100b66490; end: 100b664af;  */

void FUN_100b66490(void)

{
  func_0x000107c61168(&PTR_PTR_1129ad818);
  return;
}



/* Entry: 100b664b0; end: 100b66677;  */

/* WARNING: Possible PIC construction at 0x000100b665b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b66638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b665b8) */
/* WARNING: Removing unreachable block (ram,0x000100b6663c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b664b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef6708);
  if (lVar1 != 0) {
    func_0x000107c41090();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4d4bc(lVar2);
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      FUN_1000285a8(0x112ef67c8,&UNK_10db24e80);
      func_0x0001000b637c(lVar1);
      uVar3 = 0x112ef67d0;
      FUN_100b657f0(0x112ef67d0,0x112ef67d8,&PTR_PTR_1126d1ac0);
      FUN_1000c2068();
      func_0x000107c61574(lVar1);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
      func_0x000107c615f0(uVar4);
      FUN_100471e0c();
      func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 100b66678; end: 100b6667f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b66678(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_100b667b0();
    lVar1 = lVar2 + _DAT_112ef6678;
    func_0x000107c61428(lVar1,auStack_60,0x21,0);
    lVar3 = lVar1;
    FUN_100b63ad4();
    if ((int)lVar3 != 1) {
      uVar4 = uVar6;
      func_0x000107c5d380();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = uVar4;
      func_0x000107c61170(uVar5);
    }
    func_0x000107c614a8(auStack_60);
    uVar4 = uVar6;
    func_0x000107c5d380(uVar6);
    func_0x000107c61180();
    FUN_100b66a34(0,uVar4);
    func_0x000107c61170(uVar4);
    uVar4 = uVar6;
    func_0x000107c51ca8(uVar6);
    func_0x000107c61180();
    FUN_100b66a34(1,uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c51ca8(uVar6);
    func_0x000107c61180();
    FUN_100b66a34(2,uVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 100b66680; end: 100b667af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b66680(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100b667b0();
    lVar1 = param_2 + _DAT_112ef6678;
    func_0x000107c61428(lVar1,auStack_60,0x21,0);
    lVar2 = lVar1;
    FUN_100b63ad4();
    if ((int)lVar2 != 1) {
      uVar3 = uVar5;
      func_0x000107c5d380();
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = uVar3;
      func_0x000107c61170(uVar4);
    }
    func_0x000107c614a8(auStack_60);
    uVar3 = uVar5;
    func_0x000107c5d380(uVar5);
    func_0x000107c61180();
    FUN_100b66a34(0,uVar3);
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
    func_0x000107c51ca8(uVar5);
    func_0x000107c61180();
    FUN_100b66a34(1,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c51ca8(uVar5);
    func_0x000107c61180();
    FUN_100b66a34(2,uVar5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 100b667b0; end: 100b66a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b667b0(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
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
  undefined1 auStack_f8 [24];
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
  
  puVar6 = auStack_240;
  puVar7 = auStack_240;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6678);
  func_0x000107c61428(puVar1,auStack_f8,1,0);
  uStack_78 = puVar1[0xd];
  uStack_80 = puVar1[0xc];
  uStack_68 = puVar1[0xf];
  uStack_70 = puVar1[0xe];
  uStack_58 = puVar1[0x11];
  uStack_60 = puVar1[0x10];
  uStack_50 = puVar1[0x12];
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  uStack_88 = puVar1[0xb];
  uStack_90 = puVar1[10];
  uStack_d8 = puVar1[1];
  uStack_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  iVar2 = (int)&uStack_e0;
  FUN_100b63ad4();
  if (iVar2 == 1) {
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d8 = 2;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    FUN_100b63ad4(&uStack_228);
    uStack_128 = puVar1[0xd];
    uStack_130 = puVar1[0xc];
    uStack_118 = puVar1[0xf];
    uStack_120 = puVar1[0xe];
    uStack_108 = puVar1[0x11];
    uStack_110 = puVar1[0x10];
    uStack_100 = puVar1[0x12];
    uStack_168 = puVar1[5];
    uStack_170 = puVar1[4];
    uStack_158 = puVar1[7];
    uStack_160 = puVar1[6];
    uStack_148 = puVar1[9];
    uStack_150 = puVar1[8];
    uStack_138 = puVar1[0xb];
    uStack_140 = puVar1[10];
    uStack_188 = puVar1[1];
    uStack_190 = *puVar1;
    uStack_178 = puVar1[3];
    uStack_180 = puVar1[2];
    puVar1[0xd] = CONCAT71(uStack_1bf,uStack_1c0);
    puVar1[0xc] = uStack_1c8;
    puVar1[0xf] = CONCAT71(uStack_1af,uStack_1b0);
    puVar1[0xe] = uStack_1b8;
    puVar1[0x11] = uStack_1a0;
    puVar1[0x10] = uStack_1a8;
    puVar1[0x12] = uStack_198;
    puVar1[5] = uStack_200;
    puVar1[4] = uStack_208;
    puVar1[7] = uStack_1f0;
    puVar1[6] = uStack_1f8;
    puVar1[9] = uStack_1e0;
    puVar1[8] = uStack_1e8;
    puVar1[0xb] = uStack_1d0;
    puVar1[10] = CONCAT62(uStack_1d6,uStack_1d8);
    puVar1[1] = uStack_220;
    *puVar1 = uStack_228;
    puVar1[3] = CONCAT71(uStack_20f,uStack_210);
    puVar1[2] = uStack_218;
    puVar3 = &uStack_190;
    func_0x000100b64ce4(puVar3,0x112ef67a8,&UNK_10db24e58);
    FUN_100b62f38();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c61428(puVar1,auStack_240,0x21,0);
      puVar3 = puVar1;
      func_0x000100b63ad8();
      if ((int)puVar3 == 1) {
        func_0x000107c614a8(auStack_240);
      }
      else {
        FUN_1005aec24();
        func_0x000107c61180();
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar3;
          func_0x000107c5faec();
          func_0x000107c61170(puVar3);
        }
        uVar4 = puVar1[5];
        puVar1[4] = puVar5;
        puVar1[5] = puVar6;
        func_0x000107c614a8(auStack_240);
        func_0x000107c6142c(uVar4);
      }
    }
    func_0x000107c61428(puVar1,auStack_240,0x21,0);
    puVar3 = puVar1;
    func_0x000100b63ad8();
    if ((int)puVar3 != 1) {
      FUN_1005aec24();
      func_0x000107c61180();
      if (puVar3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar5 = puVar3;
        func_0x000107c5faec();
        func_0x000107c61170(puVar3);
      }
      uVar4 = puVar1[7];
      puVar1[6] = puVar5;
      puVar1[7] = puVar7;
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c614a8(auStack_240);
    puVar3 = puVar1;
    func_0x000100b63ad8();
    if ((int)puVar3 != 1) {
      uVar4 = puVar1[9];
      puVar1[8] = 0xd00000000000001a;
      puVar1[9] = 0x800000010f0f29e0;
      func_0x000107c6142c(uVar4);
    }
  }
  return;
}



/* Entry: 100b66a34; end: 100b66ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b66a34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 auStack_370 [19];
  undefined1 auStack_2d8 [24];
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
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
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
  
  uVar6 = 0;
  FUN_100b627a0();
  lVar1 = _DAT_112ef6670;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6670,auStack_370,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar4 = param_1;
    FUN_100b6334c();
    if ((uVar6 & 1) != 0) {
      puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar4 * 0x98);
      uStack_2b8 = puVar7[1];
      uStack_2c0 = *puVar7;
      uStack_2a8 = puVar7[3];
      uStack_2b0 = puVar7[2];
      uStack_278 = puVar7[9];
      uStack_280 = puVar7[8];
      uStack_268 = puVar7[0xb];
      uStack_270 = puVar7[10];
      uStack_298 = puVar7[5];
      uStack_2a0 = puVar7[4];
      uStack_288 = puVar7[7];
      uStack_290 = puVar7[6];
      uStack_258 = puVar7[0xd];
      uStack_260 = puVar7[0xc];
      uStack_248 = puVar7[0xf];
      uStack_250 = puVar7[0xe];
      uStack_238 = puVar7[0x11];
      uStack_240 = puVar7[0x10];
      uStack_230 = puVar7[0x12];
      uStack_188 = puVar7[1];
      uStack_190 = *puVar7;
      uStack_178 = puVar7[3];
      uStack_180 = puVar7[2];
      uStack_168 = puVar7[5];
      uStack_170 = puVar7[4];
      uStack_158 = puVar7[7];
      uStack_160 = puVar7[6];
      uStack_148 = puVar7[9];
      uStack_150 = puVar7[8];
      uStack_138 = puVar7[0xb];
      uStack_140 = puVar7[10];
      uStack_128 = puVar7[0xd];
      uStack_130 = puVar7[0xc];
      uStack_118 = puVar7[0xf];
      uStack_120 = puVar7[0xe];
      uStack_108 = puVar7[0x11];
      uStack_110 = puVar7[0x10];
      uStack_100 = puVar7[0x12];
      FUN_100b63ad4(&uStack_190);
      FUN_100b63318(&uStack_2c0,&uStack_f0);
      func_0x000107c6142c(lVar8);
      uStack_88 = uStack_128;
      uStack_90 = uStack_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_68 = uStack_108;
      uStack_70 = uStack_110;
      uStack_60 = uStack_100;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      goto LAB_100b66b68;
    }
    func_0x000107c6142c(lVar8);
  }
  FUN_100b6250c(&uStack_f0);
LAB_100b66b68:
  func_0x000107c614a8(auStack_370);
  uVar2 = uStack_e8;
  uVar5 = uStack_f0;
  uStack_1b8 = uStack_78;
  uStack_1c0 = uStack_80;
  uStack_1a8 = uStack_68;
  uStack_1b0 = uStack_70;
  uStack_1a0 = uStack_60;
  uStack_1f8 = uStack_b8;
  uStack_200 = uStack_c0;
  uStack_1e8 = uStack_a8;
  uStack_1f0 = uStack_b0;
  uStack_1d8 = uStack_98;
  uStack_1e0 = uStack_a0;
  uStack_1c8 = uStack_88;
  uStack_1d0 = uStack_90;
  uStack_218 = uStack_d8;
  uStack_220 = uStack_e0;
  uStack_208 = uStack_c8;
  uStack_210 = uStack_d0;
  iVar3 = (int)&uStack_f0;
  FUN_100b63ad4();
  if (iVar3 != 1) {
    uStack_2c0 = uVar5;
    uStack_248 = uStack_1b8;
    uStack_250 = uStack_1c0;
    uStack_238 = uStack_1a8;
    uStack_240 = uStack_1b0;
    uStack_230 = uStack_1a0;
    uStack_288 = uStack_1f8;
    uStack_290 = uStack_200;
    uStack_278 = uStack_1e8;
    uStack_280 = uStack_1f0;
    uStack_268 = uStack_1d8;
    uStack_270 = uStack_1e0;
    uStack_258 = uStack_1c8;
    uStack_260 = uStack_1d0;
    uStack_2a8 = uStack_218;
    uStack_2b0 = uStack_220;
    uStack_298 = uStack_208;
    uStack_2a0 = uStack_210;
    FUN_100b63f80(&uStack_f0,&uStack_190,0x112ef67a8,&UNK_10db24e58);
    func_0x000107c61174(param_2);
    func_0x000107c61170(uVar2);
    uStack_128 = uStack_258;
    uStack_130 = uStack_260;
    uStack_118 = uStack_248;
    uStack_120 = uStack_250;
    uStack_108 = uStack_238;
    uStack_110 = uStack_240;
    uStack_100 = uStack_230;
    uStack_168 = uStack_298;
    uStack_170 = uStack_2a0;
    uStack_158 = uStack_288;
    uStack_160 = uStack_290;
    uStack_148 = uStack_278;
    uStack_150 = uStack_280;
    uStack_138 = uStack_268;
    uStack_140 = uStack_270;
    uStack_190 = uStack_2c0;
    uStack_178 = uStack_2a8;
    uStack_180 = uStack_2b0;
    uStack_2b8 = param_2;
    uStack_188 = param_2;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_2d8,0x21,0);
    FUN_100b63318(&uStack_190,auStack_370);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar5);
    auStack_370[0] = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_100b633a4(&uStack_190,param_1,uVar5);
    *(undefined8 *)(unaff_x20 + lVar1) = auStack_370[0];
    func_0x000107c614a8(auStack_2d8);
    func_0x000100b64ce4(&uStack_f0,0x112ef67a8,&UNK_10db24e58);
    func_0x000100b63aa8(&uStack_2c0);
  }
  return;
}



/* Entry: 100b66cd0; end: 100b66def;  */

undefined8 * FUN_100b66cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
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
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  func_0x000107c61170(param_1[0xb]);
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61170(uVar1);
  lVar3 = param_2[0x11];
  if (param_1[0x11] == 0) {
    if (lVar3 != 0) {
      uVar1 = param_2[0x12];
      param_1[0x11] = lVar3;
      param_1[0x12] = uVar1;
      return param_1;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar2 = param_2[0x12];
      uVar1 = param_1[0x12];
      param_1[0x11] = lVar3;
      param_1[0x12] = uVar2;
      func_0x000107c61574(uVar1);
      return param_1;
    }
    func_0x000107c61574(param_1[0x12]);
  }
  lVar3 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = lVar3;
  return param_1;
}



/* Entry: 100b66df0; end: 100b66e23;  */

undefined8 FUN_100b66df0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b66cd0(param_2,param_1,&UNK_1105a1300);
  return param_2;
}



/* Entry: 100b66e24; end: 100b66e43;  */

void FUN_100b66e24(void)

{
  func_0x000107c61168(&PTR_PTR_11288d8e8);
  return;
}



/* Entry: 100b66e44; end: 100b66f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b66e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112ef68e0;
  func_0x000107c61614(unaff_x20 + _DAT_112ef68e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef68e8) = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112ef68f0) = 0x4038000000000000;
  lVar3 = _DAT_112ef68f8;
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6900);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  uVar6 = *(undefined8 *)(puVar5 + _DAT_112ef68f8);
  func_0x000107c61174();
  func_0x000107c3d8b4(uVar6);
  func_0x000107c3d6fc(puVar5);
  FUN_100b66f74();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  return puVar5;
}



/* Entry: 100b66f74; end: 100b67347;  */

/* WARNING: Possible PIC construction at 0x000100b66fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b670e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b671a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b671c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b671fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b672a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b672c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b672e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b672e4) */
/* WARNING: Removing unreachable block (ram,0x000100b672c4) */
/* WARNING: Removing unreachable block (ram,0x000100b672a4) */
/* WARNING: Removing unreachable block (ram,0x000100b67284) */
/* WARNING: Removing unreachable block (ram,0x000100b6725c) */
/* WARNING: Removing unreachable block (ram,0x000100b67228) */
/* WARNING: Removing unreachable block (ram,0x000100b67200) */
/* WARNING: Removing unreachable block (ram,0x000100b671cc) */
/* WARNING: Removing unreachable block (ram,0x000100b671ac) */
/* WARNING: Removing unreachable block (ram,0x000100b67178) */
/* WARNING: Removing unreachable block (ram,0x000100b6713c) */
/* WARNING: Removing unreachable block (ram,0x000100b670e8) */
/* WARNING: Removing unreachable block (ram,0x000100b67018) */
/* WARNING: Removing unreachable block (ram,0x000100b66fe0) */
/* WARNING: Removing unreachable block (ram,0x000100b6731c) */

void FUN_100b66f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100b67348; end: 100b6742f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100b67348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef6900);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ef6900))[1];
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(uVar4,uVar5,puVar2,param_2,0x2f3,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c55258(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000107c53840();
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 100b67430; end: 100b67453;  */

undefined8 FUN_100b67430(int param_1)

{
  undefined8 uVar1;
  
  FUN_100456ca0();
  uVar1 = 0x3ff8000000000000;
  if (param_1 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 100b67454; end: 100b676ff;  */

/* WARNING: Possible PIC construction at 0x000100b67528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b675b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b67610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6768c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6769c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b67690) */
/* WARNING: Removing unreachable block (ram,0x000100b67614) */
/* WARNING: Removing unreachable block (ram,0x000100b675b4) */
/* WARNING: Removing unreachable block (ram,0x000100b676dc) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000100b675c8) */
/* WARNING: Removing unreachable block (ram,0x000100b6752c) */
/* WARNING: Removing unreachable block (ram,0x000100b676a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b67454(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef66c0);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4da7c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        FUN_1000285a8(0x112ef67b0,&UNK_10db24e68);
        func_0x0001000b637c(lVar2);
        uVar3 = 0x112ef67b8;
        FUN_100b6e124(0x112ef67b8,FUN_100b6e104,PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0);
        FUN_1000c2068();
        func_0x000107c61574(lVar2);
        lVar1 = *(long *)(unaff_x20 + _DAT_112ef6698);
        func_0x000107c615f0(lVar1);
        FUN_100471e0c();
        func_0x000107c61574(uVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 100b67700; end: 100b6773f;  */

void FUN_100b67700(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c900();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b67740; end: 100b67bc3; -[SCMemoriesSideButtonStateProvidingServiceProvider _stateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b67740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  puVar1 = PTR_PTR_1126aff00;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11274fde0;
    func_0x000107c61148();
  }
  lVar2 = lVar18;
  func_0x000107c5da60();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11274fdec;
    func_0x000107c61148();
  }
  lVar3 = lVar19;
  func_0x000107c4d520();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11274fde4;
    func_0x000107c61148();
  }
  lVar5 = lVar20;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11274fde8;
    func_0x000107c61148();
  }
  lVar6 = lVar21;
  func_0x000107c5bd38();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11274fdf0;
    func_0x000107c61148();
  }
  lVar7 = lVar22;
  func_0x000107c5dac4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11274fdf4;
    func_0x000107c61148();
  }
  lVar8 = lVar23;
  func_0x000107c4ad80();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11274fdf8;
    func_0x000107c61148();
  }
  lVar9 = lVar24;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11274fdfc;
    func_0x000107c61148();
  }
  lVar10 = lVar25;
  func_0x000107c4cba8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11274fe00;
    func_0x000107c61148();
  }
  lVar11 = lVar26;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar30 = 0;
    lVar27 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11274fe04;
    func_0x000107c61148();
    lVar27 = param_1 + _DAT_11274fe08;
    func_0x000107c61148();
  }
  lVar12 = lVar27;
  func_0x000107c4cca0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar31 = 0;
    lVar28 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11274fe0c;
    func_0x000107c61148();
    lVar28 = param_1 + _DAT_11274fe14;
    func_0x000107c61148();
  }
  lVar13 = lVar28;
  func_0x000107c4cb88();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11274fe10;
    func_0x000107c61148();
  }
  lVar14 = lVar29;
  func_0x000107c4cce0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11274fe18;
    func_0x000107c61148();
  }
  lVar15 = lVar32;
  func_0x000107c51710();
  func_0x000107c61180();
  lVar16 = 0;
  if (param_1 != 0) {
    lVar16 = param_1 + _DAT_11274fe1c;
    func_0x000107c61148();
  }
  lVar17 = lVar16;
  func_0x000107c4fd08();
  func_0x000107c61180();
  func_0x000107c49370(puVar1,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,lVar30,
                      lVar12,lVar31,lVar13,lVar14,lVar15,lVar17);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b67bc4; end: 100b67bcb; -[SCSpectaclesAppStatusServices statusService] */

undefined8 FUN_100b67bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b67bcc; end: 100b67bd3; -[SCLegacySpectaclesTooltipsServices legacySpectaclesTooltipsService] */

undefined8 FUN_100b67bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b67bd4; end: 100b67be3; -[_TtC19BadgeRankerServices19BadgeRankerServices scRanker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b67bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbbb68));
  return;
}



/* Entry: 100b67be4; end: 100b6817b; -[SCMemoriesSideButtonStateProvider initWithUserSession:navigationLogger:featureSettingsService:spectaclesAppStatusProvider:userTrackedLogger:legacySpectaclesTooltipsService:memoriesMergedDataSource:memoriesHighlightDataSource:circumstanceEngine:dreamsServices:memoriesSnapFeedManager:systemScopedExtensionStorageServices:memoriesExperimentService:memoriesUserDefaultsManager:badgeRanker:registrationInfoProvider:] */

undefined8 *
FUN_100b67be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
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
  puStack_70 = PTR_PTR_1126f3070;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_17;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cdd48;
    func_0x000107c610f4();
    func_0x000107c482cc();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c5cc(puVar1);
    func_0x000107c61144(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_10679151c;
    puStack_90 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_88,auStack_80);
    ppuVar4 = &puStack_a8;
    func_0x000107c61184(ppuVar4);
    puVar5 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae960;
    puVar6 = PTR_PTR_1126bf9b8;
    func_0x000107c5af50(PTR_PTR_1126bf9b8);
    func_0x000107c61180();
    func_0x000107c4cb0c(puVar3);
    func_0x000107c61180();
    puVar7 = PTR_PTR_1126ae970;
    func_0x000107c4ca90(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c5e070(puVar5);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
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
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b6817c; end: 100b6820b; -[SCMemoriesBadgeLogger initWithRegistrationInfoProvider:] */

undefined1 * FUN_100b6817c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3068;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cdd40;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b6820c; end: 100b6827f; -[SCGrapheneMemoriesBadgeMetric2 init] */

undefined1 * FUN_100b6820c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3078;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b68280; end: 100b68423; -[SCMemoriesSideButtonStateProvider _setUpBadgeObservable] */

void FUN_100b68280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49cd8();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    func_0x000107c4c280(uVar1);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126b1468;
    func_0x000107c610f4(PTR_PTR_1126b1468);
    func_0x000107c48ed8();
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c4fcac();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    func_0x000107c506e0(uVar4);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar2 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 100b68424; end: 100b6845b;  */

void FUN_100b68424(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b6845c; end: 100b68463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6845c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_100b68464();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e00f50) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100b68464; end: 100b68483;  */

void FUN_100b68464(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7438);
  return;
}



/* Entry: 100b68484; end: 100b684e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b68484(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_100b68464();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e00f50) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100b684e4; end: 100b684eb;  */

void FUN_100b684e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b684ec; end: 100b6855f; -[_TtC33BadgeRankerServicesImplementation17SCBadgeRankerImpl isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100b684ec(undefined8 param_1)

{
  uint uVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x000107c61174();
  FUN_100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uVar1 = (uint)uVar2;
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 100b68560; end: 100b68597;  */

void FUN_100b68560(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_100083b20(&uStack_30);
  uVar1 = *(undefined8 *)(lStack_28 + 8);
  *param_1 = uStack_30;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100b68598; end: 100b685ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b68598(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long alStack_150 [10];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_d0 = uVar3;
  puStack_c0 = param_1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  uStack_d8 = uVar13;
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  uStack_f0 = uVar16;
  func_0x000107c6157c(uVar16);
  alStack_150[9] = uVar12;
  func_0x000107c6157c(uVar12);
  FUN_100083b20(alStack_90);
  lVar7 = alStack_90[0];
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010effbf70);
  lVar4 = lVar7;
  func_0x000107c3ebd4();
  uStack_dc = (uint)lVar4;
  func_0x000107c615e8(lVar7);
  func_0x000107c61170(uVar3);
  FUN_100083b20(alStack_90);
  lVar7 = alStack_90[0];
  uVar16 = *(undefined8 *)(alStack_90[0] + _DAT_113091b70);
  func_0x000107c615f0(uVar16);
  func_0x000107c61170(lVar7);
  FUN_100083b20(alStack_90);
  lVar7 = alStack_90[0];
  uVar13 = *(undefined8 *)(alStack_90[0] + _DAT_11307d7d0);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lVar7);
  uVar3 = uVar13;
  func_0x000107c4f2bc(uVar13);
  func_0x000107c615e8(uVar13);
  uVar13 = uVar1;
  FUN_100b68aa0(uVar1,uVar3);
  uStack_e8 = uVar13;
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar3 = uVar16;
  func_0x000107c41b80(uVar16);
  func_0x000107c61180();
  uVar13 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  puVar9 = PTR___sytN_11034f1b0;
  puVar5 = &UNK_101afac3c;
  FUN_1000bfde0(&UNK_101afac3c,0,PTR___sytN_11034f1b0 + 8);
  puStack_f8 = puVar5;
  func_0x000107c61574(uVar13);
  FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
  FUN_100083b20(alStack_90);
  lVar7 = alStack_90[0];
  uVar13 = *(undefined8 *)(alStack_90[0] + _DAT_11307cc98);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lVar7);
  uVar3 = uVar13;
  func_0x000107c438e4(uVar13);
  func_0x000107c61180();
  func_0x000107c615e8(uVar13);
  uVar13 = uVar3;
  func_0x0001000b637c(uVar3);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_101b0e8a4;
  FUN_1000d5158(&UNK_101b0e8a4,0,puVar9 + 8);
  puStack_100 = puVar5;
  func_0x000107c61574(uVar13);
  lVar6 = 0;
  FUN_100b68ba4();
  lVar7 = lVar6;
  func_0x000107c613fc();
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined **)(lVar7 + 0x20) = puVar5;
  *(undefined1 *)(lVar7 + 0x38) = 1;
  *(undefined **)(lVar7 + 0x10) = &UNK_101b17250;
  lVar8 = 0;
  func_0x000100b68bc4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar2;
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  FUN_100083b20(alStack_90);
  uVar3 = *(undefined8 *)(alStack_90[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(alStack_90[0]);
  puVar9 = PTR_PTR_1126a8988;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar10 = 0;
  FUN_100b68c58();
  lVar4 = lVar10;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  *(undefined **)(lVar4 + 0x18) = puVar9;
  ppuStack_70 = &PTR_DAT_110442ef8;
  ppuStack_98 = &PTR_DAT_110443780;
  uVar3 = 0;
  alStack_b8[0] = lVar4;
  lStack_a0 = lVar10;
  alStack_90[0] = lVar7;
  lStack_78 = lVar6;
  func_0x000100b68c78();
  func_0x000107c613fc();
  FUN_1000c6518(alStack_90,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)alStack_150 + (0x40 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  FUN_1000c6518(alStack_b8,lVar10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar14 = (undefined8 *)((long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar14);
  uVar13 = *puVar15;
  puVar14[-2] = *puVar14;
  puVar14[-1] = uVar3;
  uVar3 = uStack_d0;
  puVar14[-4] = puVar5;
  puVar14[-3] = uVar3;
  puVar14[-6] = uVar13;
  puVar14[-5] = lVar8;
  puVar14[-8] = &UNK_101afaef4;
  puVar14[-7] = 0;
  uVar11 = (ulong)uStack_dc;
  FUN_100b68e38(uVar11,uStack_e8,puStack_f8,puStack_100,FUN_100b6a108,0,&UNK_10d9d0cd8,0);
  func_0x0001000834e4(alStack_b8);
  func_0x0001000834e4(alStack_90);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(uVar16);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(alStack_150[9]);
  func_0x000107c61574(lVar7);
  *puStack_c0 = uVar11;
  puStack_c0[1] = (ulong)&PTR_DAT_110443168;
  return;
}



/* Entry: 100b685ac; end: 100b68a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b685ac(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long alStack_150 [10];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uStack_d0 = param_3;
  uStack_c8 = param_2;
  puStack_c0 = param_1;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uStack_d8 = param_5;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uStack_f0 = param_7;
  func_0x000107c6157c(param_7);
  alStack_150[9] = param_8;
  func_0x000107c6157c(param_8);
  FUN_100083b20(alStack_90);
  lVar5 = alStack_90[0];
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010effbf70);
  lVar2 = lVar5;
  func_0x000107c3ebd4();
  uStack_dc = (uint)lVar2;
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(uVar1);
  FUN_100083b20(alStack_90);
  lVar5 = alStack_90[0];
  uVar13 = *(undefined8 *)(alStack_90[0] + _DAT_113091b70);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lVar5);
  FUN_100083b20(alStack_90);
  lVar5 = alStack_90[0];
  uVar10 = *(undefined8 *)(alStack_90[0] + _DAT_11307d7d0);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170(lVar5);
  uVar1 = uVar10;
  func_0x000107c4f2bc(uVar10);
  func_0x000107c615e8(uVar10);
  uVar10 = param_4;
  FUN_100b68aa0(param_4,uVar1);
  uStack_e8 = uVar10;
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  uVar1 = uVar13;
  func_0x000107c41b80(uVar13);
  func_0x000107c61180();
  uVar10 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  puVar7 = PTR___sytN_11034f1b0;
  puVar3 = &UNK_101afac3c;
  FUN_1000bfde0(&UNK_101afac3c,0,PTR___sytN_11034f1b0 + 8);
  puStack_f8 = puVar3;
  func_0x000107c61574(uVar10);
  FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
  FUN_100083b20(alStack_90);
  lVar5 = alStack_90[0];
  uVar10 = *(undefined8 *)(alStack_90[0] + _DAT_11307cc98);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170(lVar5);
  uVar1 = uVar10;
  func_0x000107c438e4(uVar10);
  func_0x000107c61180();
  func_0x000107c615e8(uVar10);
  uVar10 = uVar1;
  func_0x0001000b637c(uVar1);
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_101b0e8a4;
  FUN_1000d5158(&UNK_101b0e8a4,0,puVar7 + 8);
  puStack_100 = puVar3;
  func_0x000107c61574(uVar10);
  lVar4 = 0;
  FUN_100b68ba4();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined **)(lVar5 + 0x20) = puVar3;
  *(undefined1 *)(lVar5 + 0x38) = 1;
  *(undefined **)(lVar5 + 0x10) = &UNK_101b17250;
  lVar6 = 0;
  func_0x000100b68bc4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = param_6;
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(lVar5);
  func_0x000107c453e4();
  FUN_100083b20(alStack_90);
  uVar1 = *(undefined8 *)(alStack_90[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(alStack_90[0]);
  puVar7 = PTR_PTR_1126a8988;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar8 = 0;
  FUN_100b68c58();
  lVar2 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined **)(lVar2 + 0x18) = puVar7;
  ppuStack_70 = &PTR_DAT_110442ef8;
  ppuStack_98 = &PTR_DAT_110443780;
  uVar1 = 0;
  alStack_b8[0] = lVar2;
  lStack_a0 = lVar8;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  func_0x000100b68c78();
  func_0x000107c613fc();
  FUN_1000c6518(alStack_90,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)alStack_150 + (0x40 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  FUN_1000c6518(alStack_b8,lVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar11);
  uVar10 = *puVar12;
  puVar11[-2] = *puVar11;
  puVar11[-1] = uVar1;
  uVar1 = uStack_d0;
  puVar11[-4] = puVar3;
  puVar11[-3] = uVar1;
  puVar11[-6] = uVar10;
  puVar11[-5] = lVar6;
  puVar11[-8] = &UNK_101afaef4;
  puVar11[-7] = 0;
  uVar9 = (ulong)uStack_dc;
  FUN_100b68e38(uVar9,uStack_e8,puStack_f8,puStack_100,FUN_100b6a108,0,&UNK_10d9d0cd8,0);
  func_0x0001000834e4(alStack_b8);
  func_0x0001000834e4(alStack_90);
  func_0x000107c61574(param_6);
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(alStack_150[9]);
  func_0x000107c61574(lVar5);
  *puStack_c0 = uVar9;
  puStack_c0[1] = (ulong)&PTR_DAT_110443168;
  return;
}



/* Entry: 100b68aa0; end: 100b68ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100b68aa0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  FUN_1000285a8(0x112d51030,&UNK_10d917a40);
  puVar1 = *(undefined **)(lStack_48 + _DAT_113091b70);
  func_0x000107c5e370(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001000b637c();
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_101b0e8a0;
  FUN_1000bfde0(&UNK_101b0e8a0,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  if ((param_2 & 1) == 0) {
    puVar2 = *(undefined **)(lStack_48 + _DAT_113091b78);
    func_0x000107c3dfc0();
    if (puVar2 == (undefined *)0x2) {
      func_0x000107c61170(lStack_48);
      return puVar1;
    }
  }
  FUN_1006c71a4();
  func_0x000107c61170(lStack_48);
  func_0x000107c61574(puVar1);
  return puVar2;
}



/* Entry: 100b68ba4; end: 100b68be3;  */

void FUN_100b68ba4(void)

{
  func_0x000107c61168(&PTR_PTR_112e000f8);
  return;
}



/* Entry: 100b68be4; end: 100b68c57; -[SCGrapheneBadgeRankerMetric2 init] */

undefined1 * FUN_100b68be4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9c98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b68c58; end: 100b68cff;  */

void FUN_100b68c58(void)

{
  func_0x000107c61168(&PTR_PTR_112e00a78);
  return;
}



/* Entry: 100b68d00; end: 100b68e37;  */

void FUN_100b68d00(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_130 = &UNK_10d9d09f8;
  lVar1 = 0x13f;
  func_0x000100b68cb0();
  if (param_2 < 0x40) {
    lStack_128 = *(long *)(lVar1 + -8) + 0x40;
    puStack_120 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_110 = &UNK_10d9d0a10;
    puStack_108 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_f0 = PTR___sBbWV_11034d660 + 0x40;
    puStack_e8 = &UNK_10d9d0a28;
    puStack_e0 = &UNK_10d9d0a40;
    puStack_d8 = &UNK_10d9d0a58;
    puStack_d0 = &UNK_10d9d0a40;
    puStack_c0 = &UNK_10d9d0a40;
    puStack_b0 = PTR___sBoWV_11034d678 + 0x40;
    puStack_90 = &UNK_10d9d0a40;
    puStack_88 = &UNK_10d9d0a70;
    puStack_80 = &UNK_10d9d0a10;
    puStack_78 = &UNK_10d9d0a28;
    puStack_70 = &UNK_10d9d0a58;
    lVar1 = 0x13f;
    puStack_118 = puStack_120;
    puStack_100 = puStack_120;
    puStack_f8 = puStack_108;
    puStack_c8 = puStack_108;
    puStack_b8 = puStack_f0;
    puStack_a8 = puStack_b0;
    puStack_a0 = puStack_b0;
    puStack_98 = puStack_f0;
    FUN_1000776dc();
    if (param_2 < 0x40) {
      lStack_68 = *(long *)(lVar1 + -8) + 0x40;
      puStack_60 = &UNK_10d9d0a40;
      puStack_58 = &UNK_10d9d0a88;
      puStack_50 = &UNK_10d9d0aa0;
      puStack_48 = &UNK_10d9d0a40;
      puStack_40 = &UNK_10d9d0a40;
      puStack_38 = &UNK_10d9d0a40;
      func_0x000107c61630(param_1,0x100,0x20,&puStack_130,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100b68e38; end: 100b69c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100b68e38(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  code *pcVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  long lStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  uStack_128 = param_13;
  lStack_118 = param_9;
  uStack_178 = *param_16;
  uVar8 = 0;
  uStack_110 = param_2;
  uStack_108 = param_3;
  uStack_100 = param_4;
  lStack_f8 = param_7;
  FUN_100b68ba4();
  ppuStack_80 = &PTR_DAT_110442ef8;
  alStack_a0[0] = param_11;
  uVar9 = 0;
  uStack_88 = uVar8;
  FUN_100b68c58();
  ppuStack_a8 = &PTR_DAT_110443780;
  auStack_c8[0] = param_15;
  uStack_b0 = uVar9;
  func_0x000107c61474(param_16);
  lVar20 = _DAT_112e00210;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100b69ec8();
  *(undefined **)((long)param_16 + lVar20) = puVar10;
  *(undefined8 *)((long)param_16 + _DAT_112e00208) = 0;
  *(undefined1 *)((long)param_16 + _DAT_112e00280) = 0;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e00288);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)((long)param_16 + _DAT_112e001d0) = 0;
  *(undefined8 *)((long)param_16 + _DAT_112e00290) = 0;
  *(undefined1 *)((long)param_16 + _DAT_112e00298) = 0;
  *(undefined **)((long)param_16 + _DAT_112e00238) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar11 = _DAT_112e00240;
  lVar20 = 0x112de1320;
  FUN_1000285a8(0x112de1320,&UNK_10d9a8f20);
  lVar16 = lVar20;
  func_0x000107c613fc();
  FUN_1000c2754();
  *(long *)((long)param_16 + lVar11) = lVar16;
  lVar11 = _DAT_112e00248;
  func_0x000107c613fc(lVar20,*(undefined4 *)(lVar20 + 0x30),*(undefined2 *)(lVar20 + 0x34));
  FUN_1000c2754();
  *(long *)((long)param_16 + lVar11) = lVar20;
  lVar20 = _DAT_112e00250;
  lVar11 = 0;
  FUN_100b69fac();
  func_0x000107c613fc();
  puVar10 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + 0x10) = puVar10;
  *(undefined1 *)(lVar11 + 0x18) = 0;
  *(long *)((long)param_16 + lVar20) = lVar11;
  lVar20 = _DAT_112e00258;
  FUN_100b69fcc();
  *(undefined **)((long)param_16 + lVar20) = puVar12;
  *(undefined8 *)((long)param_16 + _DAT_112e001c8) = 0;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e002a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar20 = _DAT_112e00268;
  lVar11 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))((long)param_16 + lVar20,1,1,lVar11);
  *(undefined1 *)((long)param_16 + _DAT_112e002a8) = 0;
  *(undefined1 *)((long)param_16 + _DAT_112e001d8) = 2;
  *(undefined1 *)((long)param_16 + _DAT_112e001b8) = 0;
  *(undefined1 *)((long)param_16 + _DAT_112e001f0) = 0;
  *(undefined1 *)((long)param_16 + _DAT_112e001e8) = 0;
  uStack_168 = CONCAT44(uStack_168._4_4_,param_1);
  *(char *)((long)param_16 + _DAT_113803a88) = (char)param_1;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e00220);
  *puVar1 = lStack_f8;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e00228);
  *puVar1 = lStack_118;
  puVar1[1] = param_10;
  FUN_100b6a0c4(alStack_a0,(long)param_16 + _DAT_112e00230);
  plVar13 = alStack_a0;
  FUN_1000a8868(plVar13,uStack_88);
  lVar20 = *plVar13;
  uVar8 = *(undefined8 *)(lVar20 + 0x20);
  uStack_138 = param_8;
  func_0x000107c6157c(param_8);
  uStack_140 = param_10;
  func_0x000107c6157c(param_10);
  func_0x000107c4b940(uVar8);
  dVar28 = *(double *)(lVar20 + 0x28);
  dVar27 = 0.0;
  if (*(char *)(lVar20 + 0x38) != '\x01') {
    dVar30 = *(double *)(lVar20 + 0x30);
    (**(code **)(lVar20 + 0x10))();
    dVar27 = dVar27 - dVar30;
    if (dVar27 < 0.0) {
      dVar27 = 0.0;
    }
  }
  dVar28 = dVar28 + dVar27;
  func_0x000107c5d278(*(undefined8 *)(lVar20 + 0x20));
  *(double *)((long)param_16 + _DAT_112e00278) = dVar28;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e00200);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c6157c(param_6);
  uStack_130 = param_6;
  (*param_5)();
  uVar8 = uStack_128;
  *(double *)((long)param_16 + _DAT_112e001f8) = dVar27;
  puVar1 = (undefined8 *)((long)param_16 + _DAT_112e001e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined8 *)((long)param_16 + _DAT_112e00260) = uStack_128;
  FUN_100b6a0c4(auStack_c8,(long)param_16 + _DAT_112e001c0);
  lVar20 = 0x112e009b0;
  FUN_1000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lStack_118 = *(long *)(lVar20 + -8);
  lStack_180 = *(long *)(lStack_118 + 0x40);
  puStack_148 = (undefined1 *)&lStack_230;
  lStack_120 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_180 + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&lStack_230 - extraout_x8;
  lVar20 = 0x112e001b0;
  FUN_1000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar16 = *(long *)(lVar20 + -8);
  lStack_188 = *(long *)(lVar16 + 0x40);
  lStack_150 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_188 + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar19 - extraout_x8_00;
  lVar11 = 0x112e009b8;
  lStack_f8 = lVar17;
  FUN_1000285a8(0x112e009b8,&UNK_10d9d0cf0);
  lVar24 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar17 - extraout_x8_01;
  uStack_198 = CONCAT44(uStack_198._4_4_,
                        *(undefined4 *)
                         PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
                       );
  (**(code **)(lVar24 + 0x68))
            (lVar26,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar11);
  iVar7 = 2;
  FUN_100029b9c(2,0x11,0,0);
  func_0x000107c61174();
  uStack_160 = uVar8;
  if (iVar7 == 0) {
    func_0x000101b0e92c(lVar19,lStack_f8,lVar26);
  }
  else {
    func_0x000107c5fd10(lVar19,lStack_f8,&UNK_110443220,lVar26,&UNK_110443220);
  }
  uStack_128 = param_14;
  uStack_158 = param_12;
  (**(code **)(lVar24 + 8))(lVar26,lVar11);
  pcVar18 = *(code **)(lVar16 + 0x10);
  (*pcVar18)((long)param_16 + _DAT_112e00218,lStack_f8,lVar20);
  lVar24 = lStack_f8;
  lVar11 = _DAT_112e00230;
  if ((uStack_168 & 1) == 0) {
    func_0x000107c5fd2c(lVar20);
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uStack_130);
    func_0x000107c61170(uStack_160);
    func_0x000107c61574(uStack_128);
    func_0x000107c61574(uStack_158);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(uStack_108);
    func_0x000107c61574(uStack_100);
    (**(code **)(lVar16 + 8))(lVar24,lVar20);
    (**(code **)(lStack_118 + 8))(lVar19,lStack_120);
    func_0x0001000834e4(auStack_c8);
  }
  else {
    uVar29 = *(undefined8 *)((long)param_16 + _DAT_112e00278);
    puVar1 = (undefined8 *)((long)param_16 + _DAT_112e00220);
    puVar2 = (undefined8 *)((long)param_16 + _DAT_112e00200);
    uVar31 = *(undefined8 *)((long)param_16 + _DAT_112e001f8);
    uVar21 = 0x112e009c0;
    pcStack_1d8 = pcVar18;
    lStack_190 = lVar16;
    FUN_1000285a8(0x112e009c0,&UNK_10d9d0cf8);
    lStack_170 = *(long *)(uVar21 - 8);
    lStack_1f8 = *(long *)(lStack_170 + 0x40);
    uStack_1a8 = puVar1[1];
    uStack_1b8 = puVar1[1];
    uStack_1c0 = *puVar1;
    uStack_1b0 = puVar2[1];
    uStack_1c8 = puVar2[1];
    uStack_1d0 = *puVar2;
    lStack_1a0 = lVar17;
    uStack_168 = uVar21;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uStack_1f0 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    uVar21 = lVar17 - uStack_1f0;
    lVar16 = 0x112e009c8;
    FUN_1000285a8(0x112e009c8,&UNK_10d9d0d00);
    func_0x000101b0fb2c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar16 + 0x18) = 7;
    *(undefined8 *)(lVar16 + 0x10) = 3;
    FUN_100b6a0c4((long)param_16 + lVar11,auStack_f0);
    puVar12 = &UNK_110443360;
    func_0x000107c613fc(&UNK_110443360,0x38,7);
    lStack_1e0 = lVar19;
    FUN_100b69c8c(auStack_f0,puVar12 + 0x10);
    puVar10 = &UNK_101b15c80;
    FUN_1000bfde0(&UNK_101b15c80,puVar12,&UNK_1104436a0);
    func_0x000107c61574(puVar12);
    *(undefined **)(lVar16 + 0x20) = puVar10;
    FUN_100b6a0c4((long)param_16 + lVar11,auStack_f0);
    puVar12 = &UNK_110443388;
    func_0x000107c613fc(&UNK_110443388,0x38,7);
    FUN_100b69c8c(auStack_f0,puVar12 + 0x10);
    puVar10 = &UNK_101b15c88;
    FUN_1000bfde0(&UNK_101b15c88,puVar12,&UNK_1104436a0);
    func_0x000107c61574(puVar12);
    *(undefined **)(lVar16 + 0x28) = puVar10;
    FUN_100b6a0c4((long)param_16 + lVar11,auStack_f0);
    puVar12 = &UNK_1104433b0;
    func_0x000107c613fc(&UNK_1104433b0,0x38,7);
    FUN_100b69c8c(auStack_f0,puVar12 + 0x10);
    puVar10 = &UNK_101b15c90;
    FUN_1000bfde0(&UNK_101b15c90,puVar12,&UNK_1104436a0);
    func_0x000107c61574(puVar12);
    *(undefined **)(lVar16 + 0x30) = puVar10;
    lVar17 = lVar16;
    FUN_1000c19f0(lVar16);
    func_0x000107c61574(lVar16);
    lVar16 = 0x112e009d0;
    FUN_1000285a8(0x112e009d0,&UNK_10d9d0d08);
    lVar26 = *(long *)(lVar16 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar24 = uVar21 - extraout_x8_02;
    (**(code **)(lVar26 + 0x68))(lVar24,uStack_198 & 0xffffffff,lVar16);
    uStack_1e8 = uVar21;
    FUN_1000d52ec(uVar21,lVar24);
    func_0x000107c61574(lVar17);
    (**(code **)(lVar26 + 8))(lVar24,lVar16);
    puVar12 = &UNK_1104433d8;
    func_0x000107c613fc(&UNK_1104433d8,0x18,7);
    puStack_208 = puVar12;
    func_0x000107c61644(puVar12 + 0x10,param_16);
    lVar24 = lStack_180;
    uStack_198 = uVar21;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar6 = lStack_118;
    lVar26 = lStack_120;
    lVar14 = uVar21 - (lVar24 + 0xfU & 0xfffffffffffffff0);
    lStack_210 = lVar14;
    (**(code **)(lStack_118 + 0x10))(lVar14,lVar19,lStack_120);
    lVar16 = lStack_1f8;
    lStack_200 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar19 = lStack_170;
    lVar14 = lVar14 - uStack_1f0;
    lStack_218 = lVar14;
    (**(code **)(lStack_170 + 0x10))(lVar14,uVar21,uStack_168);
    lVar17 = lStack_188;
    uStack_1f0 = lVar14;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lStack_220 = lVar14 - (lVar17 + 0xfU & 0xfffffffffffffff0);
    (*pcStack_1d8)(lStack_220,lStack_f8,lVar20);
    FUN_100b6a0c4((long)param_16 + lVar11,auStack_f0);
    lVar11 = lStack_190;
    bVar3 = *(byte *)(lVar6 + 0x50);
    uVar23 = (ulong)bVar3 + 0x30 & ((ulong)bVar3 ^ 0xffffffffffffffff);
    bVar4 = *(byte *)(lVar19 + 0x50);
    uVar22 = lVar24 + (ulong)bVar4 + uVar23 & ((ulong)bVar4 ^ 0xffffffffffffffff);
    uVar21 = lVar16 + uVar22 + 7 & 0xfffffffffffffff8;
    pcStack_1d8 = (code *)(uVar21 + 0x10);
    lStack_230 = uVar21 + 0x18;
    bVar5 = *(byte *)(lStack_190 + 0x50);
    uVar25 = (ulong)bVar5 + lStack_230 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff);
    uStack_228 = lVar17 + uVar25 + 7 & 0xfffffffffffffff8;
    lStack_188 = uStack_228 + 0x28;
    lStack_1f8 = uStack_228 + 0x30;
    lVar16 = uStack_228 + 0x40;
    puVar12 = &UNK_110443400;
    lStack_180 = lVar20;
    func_0x000107c613fc(&UNK_110443400,uStack_228 + 0x48,bVar3 | bVar4 | bVar5 | 7);
    *(undefined8 *)(puVar12 + 0x18) = uStack_1c8;
    *(undefined8 *)(puVar12 + 0x10) = uStack_1d0;
    *(undefined **)(puVar12 + 0x20) = puStack_208;
    *(undefined8 *)(puVar12 + 0x28) = uStack_128;
    (**(code **)(lVar6 + 0x20))(puVar12 + uVar23,lStack_210,lVar26);
    (**(code **)(lStack_170 + 0x20))(puVar12 + uVar22,lStack_218,uStack_168);
    uVar9 = uStack_158;
    uVar8 = uStack_160;
    lVar20 = lStack_180;
    *(undefined8 *)(puVar12 + uVar21) = uStack_158;
    *(undefined ***)((long)(puVar12 + uVar21) + 8) = &PTR_DAT_110443b90;
    *(undefined8 *)(puVar12 + (long)pcStack_1d8) = uStack_160;
    *(undefined8 *)(puVar12 + lStack_230) = uVar31;
    (**(code **)(lVar11 + 0x20))(puVar12 + uVar25,lStack_220,lStack_180);
    FUN_100b69c8c(auStack_f0,puVar12 + uStack_228);
    uVar21 = uStack_198;
    *(undefined8 *)(puVar12 + lStack_188) = uVar29;
    *(undefined8 *)((long)(puVar12 + lStack_1f8) + 8) = uStack_1b8;
    *(undefined8 *)(puVar12 + lStack_1f8) = uStack_1c0;
    *(undefined8 *)(puVar12 + lVar16) = uStack_178;
    puVar10 = &UNK_1104433d8;
    func_0x000107c613fc(&UNK_1104433d8,0x18,7);
    func_0x000107c61644(puVar10 + 0x10,param_16);
    puVar15 = &UNK_110443428;
    func_0x000107c613fc(&UNK_110443428,0x28,7);
    *(undefined **)(puVar15 + 0x10) = &UNK_10d9d0d18;
    *(undefined **)(puVar15 + 0x18) = puVar12;
    *(undefined **)(puVar15 + 0x20) = puVar10;
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(uStack_1b0);
    uVar29 = uStack_128;
    func_0x000107c6157c(uStack_128);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uStack_1a8);
    func_0x000107c6157c(puVar12);
    *(undefined **)(uVar21 - 0x10) = PTR___sytN_11034f1b0 + 8;
    uVar31 = 2;
    func_0x0001001ca524(2,1,0,2,0,0,&UNK_10d9d0d28,puVar15);
    func_0x000107c61574(puVar15);
    func_0x000107c6157c(uVar31);
    lVar11 = lStack_f8;
    func_0x000107c5fd1c(&UNK_101b15ea0,uVar31,lVar20);
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uStack_130);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(uVar29);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(uVar31);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(uStack_108);
    func_0x000107c61574(uStack_100);
    (**(code **)(lStack_170 + 8))(uStack_1e8,uStack_168);
    (**(code **)(lStack_190 + 8))(lVar11,lVar20);
    (**(code **)(lStack_118 + 8))(lStack_1e0,lStack_120);
    func_0x0001000834e4(auStack_c8);
  }
  func_0x0001000834e4(alStack_a0);
  return param_16;
}



/* Entry: 100b69c8c; end: 100b69ca3;  */

undefined8 * FUN_100b69c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100b69ca4; end: 100b69ceb;  */

void FUN_100b69ca4(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b69cec; end: 100b69e93;  */

void FUN_100b69cec(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar1 = 0x112e009b0;
  FUN_1000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = 0x112e009c0;
  FUN_1000285a8(0x112e009c0,&UNK_10d9d0cf8);
  lVar9 = *(long *)(lVar2 + -8);
  uVar4 = uVar3 + lVar6 + (ulong)*(byte *)(lVar9 + 0x50) &
          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
  uVar8 = *(long *)(lVar9 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  lVar6 = 0x112e001b0;
  FUN_1000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar10 = *(long *)(lVar6 + -8);
  uVar5 = *(byte *)(lVar10 + 0x50) + uVar8 + 0x20 &
          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
  uVar11 = *(long *)(lVar10 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar3,lVar1);
  (**(code **)(lVar9 + 8))(unaff_x20 + uVar4,lVar2);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + uVar8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + uVar8 + 0x10));
  (**(code **)(lVar10 + 8))(unaff_x20 + uVar5,lVar6);
  func_0x0001000834e4(unaff_x20 + uVar11);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar11 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b69e94; end: 100b69ebf;  */

void FUN_100b69e94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b69ec0; end: 100b69ec7;  */

void FUN_100b69ec0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b69ec8; end: 100b69fab;  */

undefined * FUN_100b69ec8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1000285a8(0x112e00198);
    puVar2 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar7 = puVar8[-1];
      uVar9 = *puVar8;
      uVar3 = uVar7;
      func_0x000101b0fc0c();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b69fa8);
        (*pcVar1)();
      }
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar7;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b69fac);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 100b69fac; end: 100b69fcb;  */

void FUN_100b69fac(void)

{
  func_0x000107c61168(&PTR_PTR_112e00838);
  return;
}



/* Entry: 100b69fcc; end: 100b69fdf;  */

undefined * FUN_100b69fcc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112e00190);
    puVar4 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      func_0x000107c61434(uVar2);
      uVar5 = uVar1;
      func_0x000101b0fc0c();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6a0c0);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6a0c4);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 100b69fe0; end: 100b6a0c3;  */

undefined * FUN_100b69fe0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    FUN_1000285a8(param_2);
    puVar4 = puVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      func_0x000107c61434(uVar2);
      uVar5 = uVar1;
      func_0x000101b0fc0c();
      if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6a0c0);
        (*pcVar3)();
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6a0c4);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 100b6a0c4; end: 100b6a107;  */

long FUN_100b6a0c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100b6a108; end: 100b6a10f;  */

double FUN_100b6a108(long param_1)

{
  ulong uVar1;
  
  func_0x000107c6106c();
  if (lRam00000001138473a0 != -1) {
    FUN_10002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 100b6a110; end: 100b6a17b;  */

double FUN_100b6a110(long param_1)

{
  ulong uVar1;
  
  func_0x000107c6106c();
  if (lRam00000001138473a0 != -1) {
    FUN_10002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 100b6a17c; end: 100b6a18b;  */

undefined1  [16] FUN_100b6a17c(void)

{
  return ZEXT816(0x110443220);
}



/* Entry: 100b6a18c; end: 100b6a1af;  */

void FUN_100b6a18c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100b6a1b0; end: 100b6a207;  */

void FUN_100b6a1b0(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_1000d2374();
  (**(code **)(*(long *)(*(long *)(lVar1 + 0xa8) + -8) + 8))
            ((long)param_1 + *(long *)(*param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100b6a208; end: 100b6a25b;  */

void FUN_100b6a208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b6a25c; end: 100b6a26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100b6a25c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_113803a88);
}



/* Entry: 100b6a26c; end: 100b6a273; +[SCAttributedMemoriesTask sideButtonObserveData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6a26c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 8;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b6a274; end: 100b6a2fb; -[SCMemoriesSideButtonStateProvider observeNextAvailableSnapFeedItem] */

void FUN_100b6a274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d66c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b6a2fc; end: 100b6a53b; -[SCMemoriesSnapFeedServiceProvider _memoriesSnapFeedManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6a2fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126bfc80;
  func_0x000107c610f4(PTR_PTR_1126bfc80);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11272bd5c;
    func_0x000107c61148();
  }
  lVar2 = lVar10;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272bd60;
    func_0x000107c61148();
  }
  lVar3 = lVar11;
  func_0x000107c4cba8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272bd68;
    func_0x000107c61148();
  }
  lVar4 = lVar12;
  func_0x000107c4ad4c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272bd64;
    func_0x000107c61148();
  }
  lVar5 = lVar13;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272bd6c;
    func_0x000107c61148();
  }
  lVar6 = lVar14;
  func_0x000107c3ef74();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272bd70;
    func_0x000107c61148(lVar15);
  }
  lVar7 = lVar15;
  func_0x000107c4cce0(lVar15);
  func_0x000107c61180();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11272bd74;
    func_0x000107c61148();
  }
  lVar9 = lVar8;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c45e0c(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b6a53c; end: 100b6a7e7; -[SCMemoriesSnapFeedManager initWithCircumstanceEngine:memoriesHighlightDataSource:galleryLogger:memoriesDataObjectContext:memoriesCachingMediaManager:memoriesUserDefaultsManager:grapheneRegistry:] */

undefined8 *
FUN_100b6a53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126eac50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61174(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c3c8b0(puVar1);
    func_0x000107c3c8d8(puVar1);
    func_0x000107c3c8c4(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b6a7e8; end: 100b6a827;  */

void FUN_100b6a7e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b980();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b6a828; end: 100b6b1eb; -[SCMemoriesHighlightContentDataSourceServiceProvider _highlightContentDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6a828(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
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
  long lStack_130;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  func_0x000107c61170(puVar2);
  lVar3 = param_1 + _DAT_11272b814;
  func_0x000107c61148();
  lVar4 = lVar3;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61144(auStack_70,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bfa08;
  func_0x000107c610f4();
  lVar3 = param_1;
  FUN_100b6b1ec();
  func_0x000107c61180();
  lVar6 = lVar3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_11272b820;
    func_0x000107c61148();
  }
  lVar7 = lVar39;
  func_0x000107c444a4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11272b830;
    func_0x000107c61148();
  }
  lVar8 = lVar40;
  func_0x000107c3fc48();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11272b848;
    func_0x000107c61148();
  }
  lVar9 = lVar41;
  func_0x000107c42798();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_11272b824;
    func_0x000107c61148();
  }
  lVar10 = lVar42;
  func_0x000107c4cb54();
  func_0x000107c61180();
  lVar11 = param_1;
  func_0x000100b6b210();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c4cc44();
  func_0x000107c61180();
  lVar13 = param_1;
  func_0x000100b6b210();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11272b82c;
    func_0x000107c61148();
  }
  lVar15 = lVar43;
  func_0x000107c4a8f0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar44 = 0;
  }
  else {
    lVar44 = param_1 + _DAT_11272b834;
    func_0x000107c61148();
  }
  lVar16 = lVar44;
  func_0x000107c4cb80();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11272b838;
    func_0x000107c61148();
  }
  lVar17 = lVar45;
  func_0x000107c3ef70();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_11272b83c;
    func_0x000107c61148();
  }
  lVar18 = lVar46;
  func_0x000107c4d600();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar47 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_11272b840;
    func_0x000107c61148();
  }
  lVar19 = lVar47;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_11272b844;
    func_0x000107c61148();
  }
  lVar20 = lVar48;
  func_0x000107c5dac4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar49 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_11272b84c;
    func_0x000107c61148();
  }
  lVar21 = lVar49;
  func_0x000107c4cb38();
  func_0x000107c61180();
  if (param_1 == 0) {
    lStack_130 = 0;
    lVar50 = 0;
  }
  else {
    lStack_130 = param_1 + _DAT_11272b850;
    func_0x000107c61148();
    lVar50 = param_1 + _DAT_11272b854;
    func_0x000107c61148();
  }
  lVar22 = lVar50;
  func_0x000107c44fe4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_11272b858;
    func_0x000107c61148();
  }
  lVar23 = lVar51;
  func_0x000107c4cb94();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_11272b85c;
    func_0x000107c61148();
  }
  lVar24 = lVar52;
  func_0x000107c4ccc0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar53 = 0;
  }
  else {
    lVar53 = param_1 + _DAT_11272b860;
    func_0x000107c61148();
  }
  lVar25 = lVar53;
  func_0x000107c43b00();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11272b868;
    func_0x000107c61148();
  }
  lVar26 = lVar54;
  func_0x000107c421c8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11272b86c;
    func_0x000107c61148();
  }
  lVar27 = lVar55;
  func_0x000107c4cce0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11272b870;
    func_0x000107c61148();
  }
  lVar28 = lVar56;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_11272b874;
    func_0x000107c61148();
  }
  lVar29 = lVar57;
  func_0x000107c4ccd0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_11272b878;
    func_0x000107c61148();
  }
  lVar30 = lVar58;
  func_0x000107c4cbdc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_11272b87c;
    func_0x000107c61148();
  }
  lVar31 = lVar59;
  func_0x000107c43e44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_11272b880;
    func_0x000107c61148();
  }
  lVar32 = lVar60;
  func_0x000107c4cca8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_11272b884;
    func_0x000107c61148();
  }
  lVar33 = lVar64;
  func_0x000107c5b1b4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = param_1 + _DAT_11272b888;
    func_0x000107c61148();
  }
  lVar34 = lVar61;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_11272b88c;
    func_0x000107c61148();
  }
  lVar35 = lVar62;
  func_0x000107c4c9c0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_11272b864;
    func_0x000107c61148();
  }
  lVar36 = lVar63;
  func_0x000107c5cdc8();
  func_0x000107c61180();
  lVar37 = 0;
  if (param_1 != 0) {
    lVar37 = param_1 + _DAT_11272b890;
    func_0x000107c61148();
  }
  lVar38 = lVar37;
  func_0x000107c44d64();
  func_0x000107c61180();
  func_0x000107c45dfc();
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar63);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar62);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar61);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar64);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar60);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar59);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar58);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar57);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar56);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar54);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar53);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar52);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(lStack_130);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar45);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar44);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar43);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar42);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar40);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100b6b1ec; end: 100b6b233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6b1ec(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272b81c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b6b234; end: 100b6b243; -[SCMemoriesCRFeaturedStoryManagerServices memoriesCRFeaturedStoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6b234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e1c0));
  return;
}



/* Entry: 100b6b244; end: 100b6b24b; -[SCMemoriesSoundSyncFeaturedStoryManagerServices memoriesSoundSyncFeaturedStoryManager] */

undefined8 FUN_100b6b244(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b6b24c; end: 100b6b253; -[SCFriendshipFlashbacksServices friendshipFlashbacksDataManager] */

undefined8 FUN_100b6b24c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b6b254; end: 100b6b263; -[MemoriesStreamingServices memoriesStreamer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6b254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff57a8));
  return;
}



/* Entry: 100b6b264; end: 100b6b26b; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowServices memoriesMashupStyleFeaturedStoriesGenerationWorkflow] */

undefined8 FUN_100b6b264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b6b26c; end: 100b6b27b; -[MemoriesFeaturedStorySnapGenerationServices generator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6b26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4b38));
  return;
}



/* Entry: 100b6b27c; end: 100b6b283; -[SCObjcMusicServices mediaLoader] */

undefined8 FUN_100b6b27c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b6b284; end: 100b6b28b; -[SCMusicSyncServices trackLoader] */

undefined8 FUN_100b6b284(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b6b28c; end: 100b6bcc7; -[SCGalleryHighlightContentDataSource initWithCircumstanceEngine:grapheneRegistry:cloudSync:encryptedContentManager:memoriesCloudFS:memoriesProfile:memoriesDataObjectContext:keyService:galleryEncryptedDatabase:memoriesCachingMediaHelper:networker:featureSettingsService:userBlizzard:memoriesCRFeaturedStoryManager:memoriesExperimentServices:deviceInfoServices:memoriesFeaturedStoryDataMutator:memoriesSoundSyncFeaturedStoryManager:chatMediaFeaturedStoryManager:docObjectContext:memoriesUserDefaultsManager:memoriesMergedDataSource:gRPCSnapFeedService:memoriesStreamer:mashupStyleClientGenFeaturedStoriesWorkflow:memoriesFeaturedStorySnapGenerator:memoriesSnapRenderer:snapDocDownloadingService:snapDocManager:musicMediaLoader:musicSyncTrackLoader:performer:requestHeaderProvider:] */

undefined8 *
FUN_100b6b28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
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
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  puStack_80 = PTR_PTR_1126eab30;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_34);
    uVar2 = puVar1[1];
    puVar1[1] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_19;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0x2c];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c53e08();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_32;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_35;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000100b6c388();
    *(char *)(puVar1 + 0x36) = (char)uVar2;
    uVar2 = param_3;
    FUN_100b6c3a4();
    *(char *)((long)puVar1 + 0x1b1) = (char)uVar2;
    puVar3 = PTR_PTR_1126bf9b0;
    func_0x000107c610fc();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_90,puVar1);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126bf9b8;
    func_0x000107c44e74(PTR_PTR_1126bf9b8);
    func_0x000107c61180();
    func_0x000107c4cb0c(puVar3);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar2 = puVar1[1];
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1058a41ac;
    puStack_a0 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c5e070(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[0xc]);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[0xd]);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bf9c0;
    func_0x000107c610f4();
    func_0x000107c47de8();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bf9c8;
    func_0x000107c61160();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_17;
    func_0x000107c4cb88();
    func_0x000107c61180();
    uVar7 = uVar2;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar8 = puVar1[0x38];
    puVar1[0x38] = uVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    uVar2 = param_17;
    func_0x000107c407b4();
    func_0x000107c61180();
    uVar7 = uVar2;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar8 = puVar1[0x39];
    puVar1[0x39] = uVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c4e524(param_34);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
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
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b6bcc8; end: 100b6bd07;  */

void FUN_100b6bcc8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bf04();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b6bd08; end: 100b6c04b; -[SCMemoriesFeaturedStoryDataMutatorServiceProvider _memoriesFeaturedStoryDataMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6bd08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  puVar1 = PTR_PTR_1126bf920;
  func_0x000107c610f4();
  lVar2 = param_1;
  FUN_100b6c04c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272b45c;
    func_0x000107c61148();
  }
  lVar4 = lVar15;
  func_0x000107c4ad4c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272b464;
    func_0x000107c61148();
  }
  lVar5 = lVar16;
  func_0x000107c4cb54();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11272b468;
    func_0x000107c61148();
  }
  lVar6 = lVar17;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272b46c;
    func_0x000107c61148();
  }
  lVar7 = lVar18;
  func_0x000107c4cb80();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272b470;
    func_0x000107c61148();
  }
  lVar8 = lVar19;
  func_0x000107c42798();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272b474;
    func_0x000107c61148();
  }
  lVar9 = lVar20;
  func_0x000107c3ef70();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11272b478;
    func_0x000107c61148();
  }
  lVar10 = lVar21;
  func_0x000107c4a8f0();
  func_0x000107c61180();
  lVar11 = param_1;
  FUN_100b6c04c();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c4cc44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11272b47c;
    func_0x000107c61148();
  }
  lVar13 = lVar22;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272b480;
    func_0x000107c61148();
  }
  lVar14 = param_1;
  func_0x000107c4cb88();
  func_0x000107c61180();
  func_0x000107c476f0(puVar1,param_2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar12,lVar13,
                      lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b6c04c; end: 100b6c06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6c04c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272b460);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b6c070; end: 100b6c35b; -[SCMemoriesFeaturedStoryDataMutator initWithMemoriesDataObjectContext:galleryLogger:memoriesCloudFS:snapDocManager:galleryEncryptedDatabase:encryptedContentManager:memoriesCachingMediaHelper:keyService:memoriesProfile:circumstanceEngine:memoriesExperimentService:] */

undefined8 *
FUN_100b6c070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126eaaf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = 1;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126bf8e0;
    func_0x000107c610fc();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b6c35c; end: 100b6c37b; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer .cxx_construct] */

void FUN_100b6c35c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 100b6c37c; end: 100b6c3a3; -[SCMemoriesFeaturedStoryDataMutator setDataSource:] */

void FUN_100b6c37c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 100b6c3a4; end: 100b6c3ef;  */

undefined8 FUN_100b6c3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3de48();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3ebd4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100b6c3f0; end: 100b6c40f; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer .cxx_construct] */

void FUN_100b6c3f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 100b6c410; end: 100b6c417; +[SCAttributedMemoriesTask highlightDataSourceSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6c410(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 0xb;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b6c418; end: 100b6c48f; -[SCMemoriesFeaturedStoryTaskThrottler initWithPerformer:] */

undefined1 * FUN_100b6c418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eab38;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b6c490; end: 100b6c503; -[SCGrapheneMemoriesFtsDataSourceMetric2 init] */

undefined1 * FUN_100b6c490(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eab40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b6c504; end: 100b6c61b; -[SCMemoriesSnapFeedManager _startFiringFeautredStoryFirstItem] */

void FUN_100b6c504(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c413c0(0x3fe0000000000000,uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da8c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100b6c61c; end: 100b6c777; -[SCMemoriesSnapFeedManager _startObservingSnapFeedFirstItem] */

void FUN_100b6c61c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = auStack_58;
  func_0x000107c61144(puVar1,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c413c0(0x3fe0000000000000,uVar5);
  func_0x000107c61180();
  uVar2 = uVar5;
  FUN_100078e94();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c4da8c(uVar5);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100b6c778; end: 100b6c93f; -[SCMemoriesSnapFeedManager _startObservingFeaturedStoriesWithHighlightDataSource:] */

void FUN_100b6c778(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61174(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61174(uVar7);
    func_0x000107c61144(auStack_78,param_1);
    lVar1 = param_3;
    func_0x000107c4da4c(param_3);
    func_0x000107c61180();
    lVar2 = lVar1;
    FUN_100078e94();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4da8c(lVar1);
    func_0x000107c61180();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_100b6c968;
    puStack_90 = &UNK_1108bdb80;
    lVar4 = lVar3;
    uStack_88 = uVar6;
    uStack_80 = uVar7;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b0,auStack_78);
    lVar5 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_78);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b6c940; end: 100b6c967; -[SCGalleryHighlightContentDataSource observeFeaturedEntriesDataModels] */

void FUN_100b6c940(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b6c968; end: 100b6cae7;  */

void FUN_100b6c968(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bf830;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c4a484();
  func_0x000107c61170(uVar3);
  puVar2 = param_2;
  if ((int)puVar1 == 0) {
    func_0x000107c51748();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    param_2 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      param_2 = puVar2;
    }
    func_0x000107c61174(param_2);
  }
  else {
    func_0x000107c51748(param_2);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100b6cae8; end: 100b6cb5b; -[SCGalleryUserDefaultsManager initWithUserPreferences:] */

undefined1 * FUN_100b6cae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9810;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b6cb5c; end: 100b6cc13; +[_TtC23SCMemoriesSnapFeedUtils21MemoriesSnapFeedUtils isSnapFeedSingleSnapExperienceEnabled:circumstanceEngine:callsiteType:] */

undefined8
FUN_100b6cb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  func_0x000107c615f0(param_3);
  uVar2 = param_4;
  func_0x000107c615f0();
  FUN_100b6cc14();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x000100b6cc28();
    if ((int)uVar2 == 0) {
      uVar3 = 1;
      if (param_5 != 1) {
        if (param_5 != 0) {
          lStack_38 = param_5;
          func_0x000107c60614(&UNK_1106a86c0,&lStack_38,&UNK_1106a86c0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6cc14);
          (*pcVar1)();
        }
        uVar3 = param_3;
        func_0x000107c5b2b8(param_3);
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar3;
}



/* Entry: 100b6cc14; end: 100b6cc2f;  */

void FUN_100b6cc14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eff598,0,0);
  return;
}



/* Entry: 100b6cc30; end: 100b6cc7f; -[SCGalleryUserDefaultsManager snapFeedShouldEnableSingleSnapExperience] */

undefined8 FUN_100b6cc30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3b8c0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3e78);
  func_0x000107c61180();
  func_0x000107c3b198(param_1,param_2,uVar1);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100b6cc80; end: 100b6cceb; -[SCGalleryUserDefaultsManager _getUserPreferenceForKey:] */

void FUN_100b6cc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b6ccec; end: 100b6ccf3;  */

void FUN_100b6ccec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100b6ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}


