/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107286980; end: 1072869b3;  */

long FUN_107286980(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1072869b4(param_1);
  }
  return param_1;
}



/* Entry: 1072869b4; end: 1072869d3;  */

void FUN_1072869b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1072869d4; end: 107286a03;  */

void FUN_1072869d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 107286a04; end: 107286a37;  */

void FUN_107286a04(void)

{
  FUN_107286ae8();
  func_0x000107286af8();
  func_0x000107286b1c();
  return;
}



/* Entry: 107286a38; end: 107286aa7;  */

undefined8 FUN_107286a38(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107286a6c(&uStack_28);
  return param_1;
}



/* Entry: 107286aa8; end: 107286aaf;  */

void FUN_107286aa8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 107286ab0; end: 107286ae7;  */

void FUN_107286ab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 107286ae8; end: 107286be7;  */

undefined1 * FUN_107286ae8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000020 = param_1;
  uStack0000000000000028 = param_2;
  func_0x000107c60c50(&stack0x00000008,param_1,param_2);
  return &stack0x00000008;
}



/* Entry: 107286be8; end: 10728891b;  */

void FUN_107286be8(undefined8 *param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  float fVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long extraout_x8_00;
  undefined ***extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined1 auStack_3d0 [24];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  char *pcStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined5 uStack_338;
  undefined3 uStack_333;
  undefined5 uStack_330;
  undefined4 uStack_328;
  undefined **appuStack_320 [7];
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined1 uStack_2c6;
  undefined1 uStack_2c5;
  undefined4 uStack_2c4;
  undefined5 uStack_2c0;
  undefined3 uStack_2bb;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined1 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  byte bStack_240;
  undefined4 uStack_220;
  undefined1 auStack_170 [264];
  undefined8 uStack_68;
  
  puVar10 = auStack_440;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2e8 = (undefined **)CONCAT44(ppuStack_2e8._4_4_,1);
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c8 = 0x20;
  uStack_2c7 = 0x67;
  uStack_2c6 = 0x99;
  uStack_2c5 = 0x10;
  uStack_2c4 = 1;
  uStack_2c0 = 0;
  uStack_2bb = 0;
  uStack_2a8 = 1;
  uStack_2a0 = 0;
  uStack_29c = 1;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_298 = 0;
  func_0x00010743cc34(&ppuStack_278,&ppuStack_2e8,7);
  func_0x00010743d7bc(auStack_170,&ppuStack_278);
  FUN_107288cd8(&ppuStack_278);
  FUN_107262330(&ppuStack_2e8);
  uVar13 = *param_1;
  lVar14 = param_1[2];
  ppuStack_380 = &PTR_DAT_110d0ec28;
  uStack_378 = 0;
  pcStack_370 = &DAT_11383d918;
  puStack_368 = &DAT_11383d918;
  uStack_328 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_333 = 0;
  uStack_330 = 0;
  uStack_3e0 = uVar13;
  lStack_3d8 = lVar14;
  if (lVar14 == 0) {
    func_0x00010728a0b8();
    FUN_107288eec();
    func_0x000107289fa8();
    FUN_107288e00();
LAB_107286d80:
    func_0x00010b586610(&ppuStack_278);
  }
  else {
    lVar11 = lVar14;
    FUN_107288f6c(lVar14,&DAT_10f2ff9dd,0x22);
    if (lVar11 == 0) {
      func_0x00010728a0b8();
      FUN_107288eec();
      func_0x000107289fa8();
      FUN_107288e00();
      goto LAB_107286d80;
    }
    func_0x00010785da68(uVar13,&DAT_10f2ff9dd,0x22);
    func_0x00010728a1d0();
    if ((bool)in_ZR) {
      func_0x00010728a1c4();
      ppuStack_278 = &PTR_DAT_110d0ec28;
      uStack_270 = 0;
      puStack_268 = &DAT_11383d918;
      puStack_260 = &DAT_11383d918;
      uStack_220 = 0;
      *(undefined8 *)(extraout_x9 + 0x28) = 0;
      *(undefined8 *)(extraout_x9 + 0x20) = 0;
      *(undefined8 *)(extraout_x9 + 0x38) = 0;
      *(undefined8 *)(extraout_x9 + 0x30) = 0;
      *(undefined8 *)(extraout_x9 + 0x48) = 0;
      *(undefined8 *)(extraout_x9 + 0x40) = 0;
      *(undefined8 *)(extraout_x9 + 0x4d) = 0;
      func_0x00010728a004();
      func_0x00010728a1b8();
      if ((bool)in_ZR) {
        lVar11 = extraout_x8;
      }
      FUN_107288eec(&ppuStack_2e8,lVar11);
      goto LAB_107286d80;
    }
    func_0x00010728a220();
    FUN_107288eec();
  }
  func_0x00010b586610(&ppuStack_380);
  FUN_10728898c(param_2 + 0x450,uStack_2a0._1_1_);
  FUN_107288aa4(param_2 + 0x460,uStack_2a4);
  FUN_10728898c(param_2 + 0x480,uStack_298._4_1_);
  FUN_10728898c(param_2 + 0x660,uStack_2b0._5_1_);
  func_0x00010002b838(appuStack_320,"");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&ppuStack_278,appuStack_320);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_320);
  func_0x00010728a1a4(&uStack_3a0);
  FUN_107288c5c(param_2 + 0x720,&uStack_3a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_3b8,uStack_2d8 & 0xfffffffffffffffc);
  FUN_107288c5c(param_2 + 0x730,&uStack_3b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_3d0,uStack_2d0 & 0xfffffffffffffffc);
  FUN_107288c5c(param_2 + 0x740,auStack_3d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
  func_0x000107289ff4();
  func_0x00010b586610(&ppuStack_2e8);
  ppuStack_278 = (undefined **)((ulong)ppuStack_278 & 0xffffffffffffff00);
  bStack_240 = 0;
  pppuVar7 = appuStack_320;
  FUN_10728909c(pppuVar7,&PTR_PTR_113233938);
  if (lVar14 == 0) {
    func_0x00010728a1ac();
    func_0x00010728a0f8();
LAB_107286f24:
    func_0x000107930d60(&ppuStack_2e8);
  }
  else {
    func_0x00010728a198();
    if (pppuVar7 == (undefined ***)0x0) {
      func_0x00010728a1ac();
      func_0x00010728a0f8();
      goto LAB_107286f24;
    }
    func_0x00010728a18c();
    if (*(int *)((long)pppuVar7 + 0x24) == 7) {
      puVar12 = (undefined8 *)((ulong)pppuVar7[3] & 0xfffffffffffffffc);
      ppuStack_2e8 = &PTR_DAT_1109ebff0;
      uStack_2e0 = 0;
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2c7 = 0;
      uStack_2c6 = 0;
      uStack_2c5 = 0;
      uStack_2d8 = 0;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      lVar11 = (long)*(char *)((long)puVar12 + 0x17);
      if (lVar11 < 0) {
        lVar11 = puVar12[1];
        puVar12 = (undefined8 *)*puVar12;
      }
      pppuVar7 = &ppuStack_2e8;
      func_0x00010006369c(pppuVar7,puVar12,lVar11);
      pppuVar1 = &ppuStack_2e8;
      if ((int)pppuVar7 == 0) {
        pppuVar1 = appuStack_320;
      }
      FUN_107289180(&ppuStack_380,pppuVar1);
      goto LAB_107286f24;
    }
    FUN_107289180(&ppuStack_380,appuStack_320);
  }
  func_0x00010728a0b8();
  FUN_10728906c();
  func_0x000107930d60(&ppuStack_380);
  func_0x000107930d60(appuStack_320);
  ppuStack_380 = (undefined **)&UNK_10f40859c;
  uStack_378 = 0x1e;
  pcStack_370 = "";
  puStack_368 = (undefined *)0x0;
  if ((bStack_240 & 1) == 0) {
    func_0x000104bdc2c8();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10728849c);
    (*pcVar4)();
  }
  FUN_107289330(&uStack_3a0);
  uVar5 = ((ulong)puStack_268 & 1) == 0;
  ppuVar2 = &puStack_268;
  if (!(bool)uVar5) {
    ppuVar2 = (undefined **)(puStack_268 + 7);
  }
  uVar16 = uStack_398;
  for (lVar11 = (long)(int)puStack_260 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    puVar15 = *ppuVar2;
    uStack_398 = uVar16;
    FUN_107289274(&uStack_3a0,*(undefined4 *)(puVar15 + 0x10));
    FUN_107289274(&uStack_3a0,*(undefined4 *)(puVar15 + 0x14));
    ppuVar2 = ppuVar2 + 1;
    uVar16 = uStack_398;
  }
  uStack_3a0 = 0;
  uStack_398 = 0;
  ppuStack_2e8 = (undefined **)((ulong)ppuStack_2e8 & 0xffffffff00000000);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_2d8 = uVar16;
  func_0x000104c33108(&uStack_3b8);
  func_0x000104c33108(&uStack_3a0);
  func_0x00010785ea10(&uStack_3a0,param_2,&ppuStack_380,&ppuStack_2e8);
  if (uStack_398 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000104c3323c(&ppuStack_2e8);
  FUN_10724e38c(&ppuStack_380,param_2 + 0x8b0);
  FUN_1072890a8(ppuStack_380,uStack_24c);
  FUN_10724e558(&ppuStack_380);
  FUN_10728988c(&ppuStack_278);
  FUN_1072898ac(&ppuStack_380,&PTR_PTR_1133a20c0);
  if (lVar14 == 0) {
    func_0x00010728a0b8();
    FUN_107289984();
    func_0x000107289fa8();
    FUN_1072898b8();
LAB_1072870ec:
    func_0x00010b5874d8(&ppuStack_278);
  }
  else {
    lVar11 = lVar14;
    FUN_107288f6c(lVar14,&UNK_10f406e9e,0x11);
    if (lVar11 == 0) {
      func_0x00010728a0b8();
      FUN_107289984();
      func_0x000107289fa8();
      FUN_1072898b8();
      goto LAB_1072870ec;
    }
    func_0x00010785da68(uVar13,&UNK_10f406e9e,0x11);
    func_0x00010728a1d0();
    if ((bool)uVar5) {
      func_0x00010728a1c4();
      ppuStack_278 = &PTR_DAT_110d0ece8;
      uStack_270 = 0;
      puStack_260 = (undefined *)0x0;
      uStack_258 = 0;
      puStack_268 = (undefined *)0x0;
      uStack_250 = 0;
      func_0x00010728a004();
      func_0x00010728a1b8();
      if ((bool)uVar5) {
        lVar11 = extraout_x8_00;
      }
      FUN_107289984(&ppuStack_2e8,lVar11);
      goto LAB_1072870ec;
    }
    func_0x00010728a220();
    FUN_107289984();
  }
  func_0x00010b5874d8(&ppuStack_380);
  FUN_10728898c(param_2 + 0x4d0,uStack_2d0._1_1_);
  FUN_107288aa4(param_2 + 0x4e0,uStack_2d8._4_4_);
  FUN_107288aa4(param_2 + 0x4f0,uStack_2d0._4_4_);
  FUN_10728898c(param_2 + 0x500,uStack_2d0._3_1_);
  FUN_10728898c(param_2 + 0x510,uStack_2c8);
  FUN_10728898c(param_2 + 0x520,uStack_2c7);
  FUN_10728898c(param_2 + 0x530,uStack_2d0._2_1_);
  FUN_10728898c(param_2 + 0x540,uStack_2c6);
  FUN_107288aa4(param_2 + 0x550,uStack_2c4);
  func_0x00010b5874d8(&ppuStack_2e8);
  pppuVar7 = &ppuStack_380;
  FUN_1072899f0(pppuVar7,&PTR_PTR_11323a638);
  if (lVar14 == 0) {
    func_0x00010728a0b8();
    FUN_107289ac8();
    func_0x000107289fa8();
    FUN_1072899fc();
LAB_107287228:
    func_0x0001079474d0(&ppuStack_278);
  }
  else {
    func_0x00010728a198();
    if (pppuVar7 == (undefined ***)0x0) {
      func_0x00010728a0b8();
      FUN_107289ac8();
      func_0x000107289fa8();
      FUN_1072899fc();
      goto LAB_107287228;
    }
    func_0x00010728a18c();
    func_0x00010728a1d0();
    if ((bool)uVar5) {
      func_0x00010728a1c4();
      ppuStack_278 = &PTR_DAT_1109f1000;
      uStack_270 = 0;
      puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffff00000000);
      puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffff0000000000);
      func_0x00010728a004();
      func_0x00010728a1b8();
      if ((bool)uVar5) {
        pppuVar7 = extraout_x8_01;
      }
      FUN_107289ac8(&ppuStack_2e8,pppuVar7);
      goto LAB_107287228;
    }
    func_0x00010728a220();
    FUN_107289ac8();
  }
  func_0x0001079474d0(&ppuStack_380);
  FUN_107288aa4(param_2 + 0x590,uStack_2d8 & 0xffffffff);
  func_0x0001079474d0(&ppuStack_2e8);
  FUN_107289b34(&ppuStack_380,&PTR_PTR_1133a22c0);
  if (lVar14 == 0) {
    func_0x00010728a0b8();
    FUN_107289c08();
    func_0x000107289fa8();
    FUN_107289b40();
  }
  else {
    lVar11 = lVar14;
    FUN_107288f6c(lVar14,&UNK_10f406ec9,0x28);
    if (lVar11 == 0) {
      func_0x00010728a0b8();
      FUN_107289c08();
      func_0x000107289fa8();
      FUN_107289b40();
    }
    else {
      func_0x00010785da68(uVar13,&UNK_10f406ec9,0x28);
      func_0x00010728a1d0();
      if (!(bool)uVar5) {
        func_0x00010728a220();
        FUN_107289c08();
        goto LAB_107287318;
      }
      func_0x00010728a1c4();
      ppuStack_278 = &PTR_DAT_110d0ed98;
      uStack_270 = 0;
      puStack_268 = (undefined *)0x0;
      puStack_260 = (undefined *)0x0;
      uStack_258 = uStack_258 & 0xffffffff00000000;
      func_0x00010728a004();
      func_0x00010728a1b8();
      if ((bool)uVar5) {
        lVar11 = extraout_x8_02;
      }
      FUN_107289c08(&ppuStack_2e8,lVar11);
    }
  }
  func_0x00010b5879ec(&ppuStack_278);
LAB_107287318:
  func_0x00010b5879ec(&ppuStack_380);
  FUN_10728898c(param_2 + 0x5e0,uStack_2d8 & 0xff);
  FUN_107288aa4(param_2 + 0x5f0,uStack_2d8._4_4_);
  FUN_107288aa4(param_2 + 0x600,uStack_2d0 & 0xffffffff);
  FUN_107288aa4(param_2 + 0x610,uStack_2d0._4_4_);
  func_0x00010b5879ec(&ppuStack_2e8);
  func_0x00010728a0f0(&uStack_3e0,&UNK_10f406ef2,0x28);
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  func_0x000107289ffc();
  puVar15 = PTR_DAT_1131ad040;
  puVar8 = PTR_DAT_1131ad040;
  _strlen(PTR_DAT_1131ad040);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,puVar15,puVar8);
  func_0x00010785eaf4(param_2,&ppuStack_278,puVar12);
  func_0x000107289ff4();
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f406f1b,0x1c);
  FUN_10728898c(param_2 + 0x3e0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f406f38,0x1a);
  lVar11 = param_2 + 0x3d0;
  FUN_10728898c(lVar11,puVar12);
  func_0x00010728a214();
  func_0x000107289fb8();
  FUN_10728898c(param_2 + 0x3c0,lVar11);
  func_0x00010728a110();
  FUN_1072889d4();
  func_0x000107289ffc();
  func_0x000107289f1c();
  func_0x00010785eba4();
  func_0x000107289ff4();
  FUN_1072889d4(&uStack_3e0,&UNK_10f406f99,0x27,1);
  func_0x000107289ffc();
  func_0x000107289f1c();
  func_0x00010785eba4();
  func_0x000107289ff4();
  FUN_1072889d4(&uStack_3e0,&UNK_10f406fc1,0x2c,100);
  func_0x000107289ffc();
  func_0x000107289f1c();
  func_0x00010785eba4();
  func_0x000107289ff4();
  func_0x000107289ed0();
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  func_0x000107289fb8(&uStack_3e0,&UNK_10f40701e,0x31);
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407050,0x15);
  FUN_10728898c(param_2 + 0x3a0,puVar12);
  func_0x000107289ec0();
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407097,0x37);
  uVar6 = SUB81(puVar12,0);
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  func_0x000107289ea0();
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  func_0x000107289ee0();
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  func_0x000107289f00();
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  uRam0000000113823e38 = uVar6;
  func_0x000107289fb8(&uStack_3e0,&UNK_10f40714d,0x1a);
  func_0x000107289ffc();
  func_0x000107289e80();
  func_0x000107289ff4();
  FUN_10728898c(param_2 + 0x340,0);
  FUN_10728898c(param_2 + 0x390,0);
  puVar12 = &uStack_3e0;
  func_0x000107288a3c(puVar12,&UNK_10f407168,0x2b,0);
  func_0x000107289ffc();
  func_0x000107289f1c();
  func_0x00010785eb50();
  func_0x000107289ff4();
  func_0x000107289ee0();
  FUN_10728898c(param_2 + 0xe0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4071c0,0xe);
  FUN_10728898c(param_2 + 0xf0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f4071cf,0x26);
  FUN_107288aa4(param_2 + 0x100,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4071f6,0x35);
  lVar11 = param_2 + 0x110;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289eb0();
  lVar9 = param_2 + 0x120;
  FUN_10728898c(lVar9,lVar11);
  func_0x00010728a214();
  func_0x000107289fb8();
  lVar11 = param_2 + 0x130;
  FUN_10728898c(lVar11,lVar9);
  func_0x000107289f88();
  FUN_10728898c(param_2 + 0x140,lVar11);
  puVar12 = &uStack_3e0;
  func_0x00010728a0f0(puVar12,&UNK_10f4072ab,0x38);
  FUN_10728898c(param_2 + 0x150,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107288a3c(puVar12,&DAT_10f4072e4,0x1c,0xffffffff);
  FUN_107288aec(param_2 + 0x160,puVar12);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f407301,0x2e);
  FUN_107288aa4(param_2 + 0x170,puVar12);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f407330,0x24);
  FUN_107288aa4(param_2 + 0x180,puVar12);
  puVar12 = &uStack_3e0;
  FUN_1072889d4(puVar12,&UNK_10f407355,0x1d,0x2300000);
  FUN_107288aa4(param_2 + 400,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407373,0x3e);
  lVar11 = param_2 + 0x1a0;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289ee0();
  lVar9 = param_2 + 0x1b0;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289f5c();
  lVar11 = param_2 + 0x1c0;
  FUN_10728898c(lVar11,lVar9);
  func_0x00010728a214();
  func_0x000107289fb8();
  lVar9 = param_2 + 0x1d0;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289ea0();
  FUN_10728898c(param_2 + 0x1e0,lVar9);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f40742f,0x1f);
  lVar11 = param_2 + 0x1f0;
  FUN_107288aa4(lVar11,puVar12);
  func_0x000107289ea0();
  FUN_10728898c(param_2 + 0x200,lVar11);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&DAT_10f3c45e5,0x1a);
  FUN_10728898c(param_2 + 0x210,puVar12);
  puVar12 = &uStack_3e0;
  FUN_1072889d4(puVar12,&UNK_10f407482,0x24,0xa8);
  FUN_107288aa4(param_2 + 0x220,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4074a7,0x33);
  FUN_10728898c(param_2 + 0x230,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4074db,0x26);
  lVar11 = param_2 + 0x240;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289f00();
  FUN_10728898c(param_2 + 0x250,lVar11);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f407528,0x2b);
  lVar11 = param_2 + 0x260;
  FUN_107288aa4(lVar11,puVar12);
  func_0x000107289f5c();
  lVar9 = param_2 + 0x270;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289eb0();
  lVar11 = param_2 + 0x280;
  FUN_10728898c(lVar11,lVar9);
  func_0x000107289f98();
  FUN_10728898c(param_2 + 0x290,lVar11);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4075d3,0x1e);
  FUN_10728898c(param_2 + 0x2a0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4075f2,0x35);
  FUN_10728898c(param_2 + 0x2b0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407628,0x31);
  lVar11 = param_2 + 0x2c0;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289f88();
  lVar9 = param_2 + 0x2d0;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289ec0();
  FUN_10728898c(param_2 + 0x2e0,lVar9);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4076ba,0x38);
  lVar11 = param_2 + 0x2f0;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289f88();
  lVar9 = param_2 + 0x300;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289ec0();
  FUN_10728898c(param_2 + 0x310,lVar9);
  puVar12 = &uStack_3e0;
  FUN_1072889d4(puVar12,&UNK_10f407753,0x24,0xfa);
  FUN_107288aa4(param_2 + 800,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407778,0x36);
  lVar11 = param_2 + 0x330;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289ef0();
  FUN_10728898c(param_2 + 0x350,lVar11);
  func_0x00010002b838(auStack_3f8,"");
  FUN_107288b34(&ppuStack_278,&uStack_3e0,&DAT_10f4077db,0x1c,auStack_3f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
  func_0x00010728a1a4(auStack_410);
  FUN_107288c5c(param_2 + 0x360,auStack_410);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
  func_0x000107289ff4();
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4077f8,0x36);
  lVar11 = param_2 + 0x370;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289ec0();
  lVar9 = param_2 + 0x380;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289e90();
  lVar11 = param_2 + 0x400;
  FUN_10728898c(lVar11,lVar9);
  func_0x000107289ed0();
  FUN_10728898c(param_2 + 0x4b0,lVar11);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4078bd,0x34);
  lVar11 = param_2 + 0x4c0;
  FUN_10728898c(lVar11,puVar12);
  func_0x000107289ed0();
  lVar9 = param_2 + 0x5c0;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289e90();
  lVar11 = param_2 + 0x5d0;
  FUN_10728898c(lVar11,lVar9);
  func_0x000107289e90();
  lVar9 = param_2 + 0x620;
  FUN_10728898c(lVar9,lVar11);
  func_0x00010728a110();
  FUN_1072889d4();
  lVar11 = param_2 + 0x630;
  FUN_107288aa4(lVar11,lVar9);
  func_0x000107289ec0();
  lVar9 = param_2 + 0x640;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289ef0();
  lVar11 = param_2 + 0x650;
  FUN_10728898c(lVar11,lVar9);
  func_0x000107289ed0();
  lVar9 = param_2 + 0x670;
  FUN_10728898c(lVar9,lVar11);
  func_0x000107289e90();
  FUN_10728898c(param_2 + 0x680,lVar9);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407a5a,0x38);
  lVar11 = param_2 + 0x690;
  FUN_10728898c(lVar11,puVar12);
  func_0x00010728a110();
  func_0x00010728a094();
  FUN_107288aa4(param_2 + 0x6a0,lVar11);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f407ab7,0x29);
  FUN_107288aa4(param_2 + 0x6b0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x00010728a094(puVar12,&UNK_10f407ae1,0x22);
  FUN_107288aa4(param_2 + 0x6c0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407b04,0x3a);
  FUN_10728898c(param_2 + 0x6d0,puVar12);
  if ((lVar14 == 0) || (FUN_107288f6c(lVar14,&UNK_10f407b3f,0x25), lVar14 == 0)) {
    uVar16 = 0xbba3d70a;
    func_0x00010785d5e8(0xbba3d70a,uVar13,&UNK_10f407b3f,0x25);
  }
  else {
    func_0x00010785da68(uVar13,&UNK_10f407b3f,0x25);
    uVar5 = *(int *)(lVar14 + 0x24) == 6;
    fVar3 = (float)*(double *)(lVar14 + 0x18);
    if (!(bool)uVar5) {
      fVar3 = -0.005;
    }
    uVar16 = (ulong)(uint)fVar3;
  }
  func_0x000107289df8(&ppuStack_278,param_2 + 0x6e0);
  if (ppuStack_278 != (undefined **)0x0) {
    FUN_107289e24(uVar16);
  }
  pppuVar7 = &ppuStack_278;
  FUN_107289e5c(pppuVar7);
  func_0x000107289ef0();
  lVar14 = param_2 + 0x6f0;
  FUN_10728898c(lVar14,pppuVar7);
  func_0x000107289eb0();
  FUN_10728898c(param_2 + 0x700,lVar14);
  puVar12 = &uStack_3e0;
  func_0x00010728a0f0(puVar12,&UNK_10f407bbf,0x2c);
  FUN_10728898c(param_2 + 0x710,puVar12);
  func_0x00010002b838(auStack_428,"");
  FUN_107288b34(&ppuStack_278,&uStack_3e0,&UNK_10f407bec,0x20,auStack_428);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_428);
  func_0x00010728a1a4(auStack_440);
  FUN_107288c5c(param_2 + 0x750,auStack_440);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_440);
  func_0x000107289ff4();
  func_0x000107289ed0();
  lVar14 = param_2 + 0x7b0;
  FUN_10728898c(lVar14,puVar10);
  func_0x00010728a110();
  FUN_1072889d4();
  lVar11 = param_2 + 0x7c0;
  FUN_107288aa4(lVar11,lVar14);
  func_0x000107289f00();
  lVar14 = param_2 + 0x820;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289ef0();
  lVar11 = param_2 + 0x830;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ec0();
  lVar14 = param_2 + 0x840;
  FUN_10728898c(lVar14,lVar11);
  func_0x00010728a110();
  func_0x000107289fb8();
  lVar11 = param_2 + 0x850;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289e90();
  lVar14 = param_2 + 0x860;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289ea0();
  lVar11 = param_2 + 0x870;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289e90();
  FUN_10728898c(param_2 + 0x880,lVar11);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407d95,0x31);
  lVar14 = param_2 + 0x890;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289f98();
  lVar11 = param_2 + 0x8a0;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ea0();
  lVar14 = param_2 + 0x8c0;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289ea0();
  lVar11 = param_2 + 0x8d0;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ea0();
  lVar14 = param_2 + 0x8e0;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289e90();
  FUN_10728898c(param_2 + 0x8f0,lVar14);
  puVar12 = &uStack_3e0;
  func_0x00010728a0f0(puVar12,&UNK_10f407eb6,0x28);
  lVar14 = param_2 + 0x900;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289e90();
  lVar11 = param_2 + 0x910;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289f00();
  lVar14 = param_2 + 0x920;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289f5c();
  FUN_10728898c(param_2 + 0x930,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f407f32,0x33);
  lVar14 = param_2 + 0x940;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289f5c();
  FUN_10728898c(param_2 + 0x950,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107288a3c(puVar12,&UNK_10f407f8e,0x22,1);
  lVar14 = param_2 + 0x960;
  FUN_107288aec(lVar14,puVar12);
  func_0x000107289ee0();
  lVar11 = param_2 + 0x970;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ef0();
  lVar14 = param_2 + 0x980;
  FUN_10728898c(lVar14,lVar11);
  func_0x00010728a214();
  func_0x000107288a3c();
  lVar11 = param_2 + 0x990;
  FUN_107288aec(lVar11,lVar14);
  func_0x000107289f4c();
  lVar14 = param_2 + 0x9a0;
  FUN_10728898c(lVar14,lVar11);
  func_0x00010728a110();
  func_0x000107289fb8();
  lVar11 = param_2 + 0x9b0;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ee0();
  lVar14 = param_2 + 0x9c0;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289f88();
  FUN_10728898c(param_2 + 0x9d0,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4080c6,0x34);
  FUN_10728898c(param_2 + 0x9e0,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4080fb,0x1e);
  lVar14 = param_2 + 0x9f0;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289eb0();
  lVar11 = param_2 + 0xa00;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289eb0();
  lVar14 = param_2 + 0xa10;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289e90();
  FUN_10728898c(param_2 + 0xa20,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4081a3,0x2a);
  FUN_10728898c(param_2 + 0xa40,puVar12);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4081ce,0x37);
  lVar14 = param_2 + 0xa50;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289f4c();
  lVar11 = param_2 + 0xa60;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289ee0();
  FUN_10728898c(param_2 + 0xa70,lVar11);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f408255,0x34);
  lVar14 = param_2 + 0xa80;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289ef0();
  FUN_10728898c(param_2 + 0xa90,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f4082b6,0x36);
  lVar14 = param_2 + 0xaa0;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289f4c();
  FUN_10728898c(param_2 + 0xab0,lVar14);
  puVar12 = &uStack_3e0;
  FUN_1072889d4(puVar12,&UNK_10f408317,0x20,0xffffff);
  lVar14 = param_2 + 0xac0;
  FUN_107288aa4(lVar14,puVar12);
  func_0x000107289ea0();
  FUN_10728898c(param_2 + 0xad0,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f40836b,0x26);
  lVar14 = param_2 + 0xae0;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289eb0();
  lVar11 = param_2 + 0xaf0;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289f98();
  lVar14 = param_2 + 0xb00;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289f5c();
  lVar11 = param_2 + 0xb10;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289f00();
  lVar14 = param_2 + 0xb20;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289f4c();
  FUN_10728898c(param_2 + 0xb30,lVar14);
  puVar12 = &uStack_3e0;
  func_0x000107289fb8(puVar12,&UNK_10f408461,0x33);
  lVar14 = param_2 + 0xb40;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289ea0();
  lVar11 = param_2 + 0xb50;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289f4c();
  FUN_10728898c(param_2 + 0xb60,lVar11);
  puVar12 = &uStack_3e0;
  func_0x00010728a0f0(puVar12,&UNK_10f4084f2,0x2a);
  lVar14 = param_2 + 0xb70;
  FUN_10728898c(lVar14,puVar12);
  func_0x000107289ed0();
  lVar11 = param_2 + 0xba0;
  FUN_10728898c(lVar11,lVar14);
  func_0x000107289f00();
  lVar14 = param_2 + 0xbb0;
  FUN_10728898c(lVar14,lVar11);
  func_0x000107289f98();
  FUN_10728898c(param_2 + 0xbc0,lVar14);
  func_0x00010743d7e4(auStack_170);
  func_0x00010728a24c(uStack_68);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010728a178();
    func_0x00010b5879ec();
    func_0x00010b5879ec(&ppuStack_380);
    do {
      func_0x00010743d7e4(auStack_170);
      func_0x00010728a010();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_278);
      func_0x00010b586610(&ppuStack_2e8);
    } while( true );
  }
  return;
}



/* Entry: 10728891c; end: 10728891f;  */

undefined8 * FUN_10728891c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997da0;
  FUN_107288d2c(param_1 + 0x10);
  FUN_107262330(param_1 + 1);
  return param_1;
}



/* Entry: 107288920; end: 10728898b;  */

undefined8 * FUN_107288920(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  long *plVar4;
  undefined8 *unaff_x22;
  
  func_0x00010728a070();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)*unaff_x22;
  }
  else {
    func_0x00010728a028();
    puVar2 = (undefined8 *)*unaff_x22;
    if (param_1 != 0) {
      func_0x00010728a034();
      uVar1 = (uint)*(byte *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x24) != 2) {
        uVar1 = unaff_w19;
      }
      return (undefined8 *)(ulong)(uVar1 & 1);
    }
  }
  func_0x00010728a088();
  puVar3 = puVar2;
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dcec();
  func_0x00010785dc70();
  func_0x00010785dce4();
  plVar4 = (long *)*puVar2;
  func_0x00010785dc48();
  func_0x00010785dd18(*(undefined8 *)(*plVar4 + 0x48));
  func_0x00010785dc70();
  func_0x00010785dd7c();
  return puVar3;
}



/* Entry: 10728898c; end: 1072889d3;  */

void FUN_10728898c(undefined8 param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  FUN_10724e38c(alStack_30);
  if (alStack_30[0] != 0) {
    FUN_1072890a8(alStack_30[0],param_2);
  }
  FUN_10724e558(alStack_30);
  return;
}



/* Entry: 1072889d4; end: 107288aa3;  */

undefined4 FUN_1072889d4(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 unaff_w19;
  long *plVar3;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010728a070();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)*unaff_x22;
  }
  else {
    func_0x00010728a028();
    puVar2 = (undefined8 *)*unaff_x22;
    if (param_1 != 0) {
      func_0x00010728a034();
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x24) != 5) {
        uVar1 = unaff_w19;
      }
      return uVar1;
    }
  }
  func_0x00010728a088();
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dcec();
  func_0x00010785dc70();
  func_0x00010785dce4();
  plVar3 = (long *)*puVar2;
  func_0x00010785dc48();
  func_0x00010785dcbc(*(undefined8 *)(*plVar3 + 0x50));
  func_0x00010785dc60();
  uVar1 = (int)plVar3;
  if ((unaff_x21 & 1) == 0) {
    uVar1 = unaff_w19;
  }
  return uVar1;
}



/* Entry: 107288aa4; end: 107288aeb;  */

void FUN_107288aa4(undefined8 param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  FUN_107289c70(alStack_30);
  if (alStack_30[0] != 0) {
    func_0x000107289c9c(alStack_30[0],param_2);
  }
  func_0x000107289cc8(alStack_30);
  return;
}



/* Entry: 107288aec; end: 107288b33;  */

void FUN_107288aec(undefined8 param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  func_0x000107289d7c(alStack_30);
  if (alStack_30[0] != 0) {
    func_0x000107289da8(alStack_30[0],param_2);
  }
  func_0x000107289dd4(alStack_30);
  return;
}



/* Entry: 107288b34; end: 107288c5b;  */

void FUN_107288b34(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = &uStack_a0;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uVar3 = *param_2;
    uStack_58 = param_5[1];
    uStack_60 = *param_5;
    uStack_50 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    puVar4 = &uStack_60;
    func_0x00010728a088(param_1,uVar3,param_2,param_3,&uStack_60);
    func_0x00010785d77c();
  }
  else {
    func_0x00010728a028();
    uVar3 = *param_2;
    if (lVar2 == 0) {
      uStack_78 = param_5[1];
      uStack_80 = *param_5;
      uStack_70 = param_5[2];
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = 0;
      puVar4 = &uStack_80;
      func_0x00010728a088(param_1,uVar3);
      func_0x00010785d77c();
    }
    else {
      func_0x00010728a034();
      uStack_98 = param_5[1];
      uStack_a0 = *param_5;
      uStack_90 = param_5[2];
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = 0;
      puVar1 = (undefined8 *)(*(ulong *)(lVar2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(lVar2 + 0x24) != 4) {
        puVar1 = &uStack_a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,puVar1);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
  return;
}



/* Entry: 107288c5c; end: 107288cd7;  */

void FUN_107288c5c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  long alStack_30 [2];
  
  func_0x000107289cec(alStack_30);
  if (alStack_30[0] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_2);
    FUN_107289d18(alStack_30[0],auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  FUN_107289d58(alStack_30);
  return;
}



/* Entry: 107288cd8; end: 107288d17;  */

undefined8 * FUN_107288cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997da0;
  FUN_107288d2c(param_1 + 0x10);
  FUN_107262330(param_1 + 1);
  return param_1;
}



/* Entry: 107288d18; end: 107288d2b;  */

void FUN_107288d18(void)

{
  FUN_107288cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107288d2c; end: 107288dff;  */

/* WARNING: Possible PIC construction at 0x000107288d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107288d54) */

long FUN_107288d2c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107288d64(param_1 + 0x60);
  func_0x000107288d98(param_1 + 0x40);
  lVar1 = param_1 + 0x20;
  func_0x00010728a144();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x00010728a0cc(uVar2);
  return param_1;
}



/* Entry: 107288e00; end: 107288eeb;  */

void FUN_107288e00(ulong param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x00010728a060();
  func_0x000107289fcc(&DAT_10f2ff9dd);
  func_0x000107289f10();
  func_0x000107289fc0();
  func_0x000107289fe4();
  func_0x00010728a058();
  func_0x000107289f10();
  func_0x00010728a16c();
  func_0x000107289f3c();
  func_0x00010728a160();
  if ((bool)in_ZR) {
    *unaff_x19 = &PTR_DAT_110d0ec28;
    unaff_x19[1] = 0;
    unaff_x19[2] = &DAT_11383d918;
    unaff_x19[3] = &DAT_11383d918;
    *(undefined4 *)(unaff_x19 + 0xb) = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    *(undefined8 *)((long)unaff_x19 + 0x4d) = 0;
    func_0x00010728a048();
    func_0x00010728a0e8();
    if ((param_1 & 1) != 0) goto LAB_107288ea4;
    func_0x00010b586610();
  }
  func_0x00010b586588();
LAB_107288ea4:
  func_0x00010728a040();
  func_0x000107289fe4();
  return;
}



/* Entry: 107288eec; end: 107288f6b;  */

undefined8 * FUN_107288eec(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_DAT_110d0ec28;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      func_0x00010b5872f8(param_1);
    }
    else {
      func_0x00010b5872c0(param_1);
    }
  }
  return param_1;
}



/* Entry: 107288f6c; end: 10728905b;  */

undefined8 FUN_107288f6c(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uStack_50;
  long lStack_48;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (param_1[3] != 0)) {
    uStack_50 = param_2;
    lStack_48 = param_3;
    func_0x0001001030f4(param_2,param_2 + param_3);
    uVar5 = uVar4 - 1;
    if ((uVar4 & uVar5) == 0) {
      uVar6 = param_2 & uVar5;
    }
    else {
      uVar6 = param_2;
      if (uVar4 <= param_2) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = param_2 / uVar4;
        }
        uVar6 = param_2 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
          uVar3 = plVar7[1];
          if (param_2 != uVar3) break;
          plVar2 = param_1 + 4;
          FUN_10728905c(plVar2,plVar7 + 2,&uStack_50);
          if ((int)plVar2 != 0) {
            return plVar7[4];
          }
        }
        if ((uVar4 & uVar5) == 0) {
          uVar3 = uVar3 & uVar5;
        }
        else if (uVar4 <= uVar3) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar3 / uVar4;
          }
          uVar3 = uVar3 - uVar1 * uVar4;
        }
      } while (uVar3 == uVar6);
    }
  }
  return 0;
}



/* Entry: 10728905c; end: 10728906b;  */

bool FUN_10728905c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = *param_2;
  lStack_18 = param_2[1];
  iVar1 = (int)&uStack_20;
  if (lStack_18 == param_3[1]) {
    func_0x000100067218(&uStack_20,*param_3,param_3[1]);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10728906c; end: 10728909b;  */

void FUN_10728906c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_107289120();
  }
  else {
    FUN_107289180();
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10728909c; end: 1072890a7;  */

undefined8 * FUN_10728909c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_1109ebff0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x0001079310bc(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 1072890a8; end: 10728911f;  */

void FUN_1072890a8(long param_1,undefined1 param_2)

{
  func_0x000107289f6c();
  *(undefined1 *)(param_1 + 0xa8) = param_2;
  func_0x00010728a0c4();
  return;
}



/* Entry: 107289120; end: 10728917f;  */

long FUN_107289120(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x000107931068(param_1);
    }
    else {
      func_0x000107931030(param_1);
    }
  }
  return param_1;
}



/* Entry: 107289180; end: 1072891a3;  */

undefined8 * FUN_107289180(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_1109ebff0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x000107931068(param_1);
    }
    else {
      func_0x000107931030(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072891a4; end: 107289273;  */

void FUN_1072891a4(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010728a060();
  func_0x000107289fcc(&UNK_10f406e85);
  func_0x000107289f10();
  func_0x000107289fc0();
  func_0x000107289fe4();
  func_0x00010728a058();
  func_0x000107289f10();
  func_0x00010728a16c();
  func_0x000107289f3c();
  func_0x00010728a160();
  if ((bool)in_ZR) {
    func_0x00010728a1fc(&UNK_1109ebfe0);
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x25) = 0;
    func_0x00010728a048();
    func_0x00010728a0e8();
    if ((param_1 & 1) != 0) goto LAB_10728922c;
    func_0x000107930d60();
  }
  func_0x00010728a1dc();
  FUN_10728909c();
LAB_10728922c:
  func_0x00010728a040();
  func_0x000107289fe4();
  return;
}



/* Entry: 107289274; end: 10728932f;  */

void FUN_107289274(undefined8 *param_1)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107289354();
  plVar2 = (long *)*param_1;
  if ((ulong)plVar2[1] < (ulong)plVar2[2]) {
    func_0x00010728a1e8();
    lVar3 = extraout_x8 + 0x40;
  }
  else {
    plVar1 = plVar2;
    FUN_107289660(plVar2,(plVar2[1] - *plVar2 >> 6) + 1);
    FUN_107289720(auStack_58,plVar1,plVar2[1] - *plVar2 >> 6,plVar2 + 2);
    func_0x00010728a1e8(lStack_48);
    lStack_48 = extraout_x8_00 + 0x40;
    FUN_1072896a0(plVar2,auStack_58);
    lVar3 = plVar2[1];
    func_0x000107289820(auStack_58);
  }
  plVar2[1] = lVar3;
  return;
}



/* Entry: 107289330; end: 1072893df;  */

undefined8 FUN_107289330(undefined8 param_1)

{
  FUN_107268c48(param_1);
  return param_1;
}



/* Entry: 1072893e0; end: 107289403;  */

void FUN_1072893e0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107289404(&uStack_11,param_1);
  return;
}



/* Entry: 107289404; end: 10728948b;  */

undefined8 * FUN_107289404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_107268d50(auStack_40,1);
  FUN_10728948c(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107268dc0();
  func_0x00010728a24c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010728a0a4();
  func_0x000107268dc0();
  func_0x00010728a010();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110996660;
  puVar2[1] = 0;
  FUN_1072894cc(puVar2 + 3);
  return puVar2;
}



/* Entry: 10728948c; end: 1072894cb;  */

undefined8 * FUN_10728948c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110996660;
  param_1[1] = 0;
  FUN_1072894cc(param_1 + 3);
  return param_1;
}



/* Entry: 1072894cc; end: 1072894e3;  */

void FUN_1072894cc(long param_1)

{
  FUN_1072894e4();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072894e4; end: 10728951b;  */

undefined8 * FUN_1072894e4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10728951c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 6);
  return param_1;
}



/* Entry: 10728951c; end: 10728958f;  */

void FUN_10728951c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_107268f10(param_1,param_4);
    func_0x00010728a088(param_1);
    FUN_107289590();
  }
  uStack_38 = 1;
  func_0x000107269094(&uStack_40);
  return;
}



/* Entry: 107289590; end: 1072895c3;  */

void FUN_107289590(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1072895c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1072895c4; end: 1072895d7;  */

void FUN_1072895c4(void)

{
  FUN_1072895d8();
  return;
}



/* Entry: 1072895d8; end: 10728965f;  */

long FUN_1072895d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010728a22c();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_107268350(param_4,param_2);
    param_4 = lStack_38 + 0x40;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10726902c(auStack_60);
  return param_4;
}



/* Entry: 107289660; end: 10728969f;  */

long * FUN_107289660(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 5);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x3ffffffffffffff;
    }
    return plVar2;
  }
  FUN_107268f6c();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_107289768(plVar2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 1072896a0; end: 10728971f;  */

void FUN_1072896a0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_107289768(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107289720; end: 107289767;  */

long * FUN_107289720(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_107268f78();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 107289768; end: 1072897ef;  */

void FUN_107289768(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x00010728a22c();
  for (; lVar1 != param_3; lVar1 = lVar1 + 0x40) {
    func_0x000104c32a18(param_4,lVar1);
    param_4 = lStack_38 + 0x40;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_1072897f0(param_1,param_2,param_3);
  FUN_10726902c(auStack_60);
  return;
}



/* Entry: 1072897f0; end: 10728984b;  */

void FUN_1072897f0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 10728984c; end: 107289853;  */

void FUN_10728984c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 107289854; end: 10728988b;  */

void FUN_107289854(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x40;
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 10728988c; end: 1072898ab;  */

void FUN_10728988c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107930d60();
  }
  return;
}



/* Entry: 1072898ac; end: 1072898b7;  */

undefined8 FUN_1072898ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b587980(param_1,0,param_2);
  func_0x00010b58740c();
  return param_1;
}



/* Entry: 1072898b8; end: 107289983;  */

void FUN_1072898b8(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010728a060();
  func_0x000107289fcc(&UNK_10f406e9e);
  func_0x000107289f10();
  func_0x000107289fc0();
  func_0x000107289fe4();
  func_0x00010728a058();
  func_0x000107289f10();
  func_0x00010728a16c();
  func_0x000107289f3c();
  func_0x00010728a160();
  if ((bool)in_ZR) {
    func_0x00010728a1fc(&UNK_110d0ecd8);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    func_0x00010728a048();
    func_0x00010728a0e8();
    if ((param_1 & 1) != 0) goto LAB_10728993c;
    func_0x00010b5874d8();
  }
  func_0x00010728a1dc();
  FUN_1072898ac();
LAB_10728993c:
  func_0x00010728a040();
  func_0x000107289fe4();
  return;
}



/* Entry: 107289984; end: 1072899ef;  */

undefined8 * FUN_107289984(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_DAT_110d0ece8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      func_0x00010b5878f0(param_1);
    }
    else {
      func_0x00010b5878b8(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072899f0; end: 1072899fb;  */

undefined8 FUN_1072899f0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107947740(param_1,0,param_2);
  func_0x000107947498();
  return param_1;
}



/* Entry: 1072899fc; end: 107289ac7;  */

void FUN_1072899fc(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010728a060();
  func_0x000107289fcc(&UNK_10f406eb0);
  func_0x000107289f10();
  func_0x000107289fc0();
  func_0x000107289fe4();
  func_0x00010728a058();
  func_0x000107289f10();
  func_0x00010728a16c();
  func_0x000107289f3c();
  func_0x00010728a160();
  if ((bool)in_ZR) {
    func_0x00010728a1fc(&UNK_1109f0ff0);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 0;
    *(undefined1 *)(unaff_x19 + 0x14) = 0;
    func_0x00010728a048();
    func_0x00010728a0e8();
    if ((param_1 & 1) != 0) goto LAB_107289a80;
    func_0x0001079474d0();
  }
  func_0x00010728a1dc();
  FUN_1072899f0();
LAB_107289a80:
  func_0x00010728a040();
  func_0x000107289fe4();
  return;
}



/* Entry: 107289ac8; end: 107289b33;  */

undefined8 * FUN_107289ac8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_DAT_1109f1000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      func_0x0001079476b0(param_1);
    }
    else {
      func_0x000107947678(param_1);
    }
  }
  return param_1;
}



/* Entry: 107289b34; end: 107289b3f;  */

undefined8 * FUN_107289b34(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d0ed98;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b58799c(param_1,param_2);
  return param_1;
}



/* Entry: 107289b40; end: 107289c07;  */

void FUN_107289b40(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010728a060();
  func_0x000107289fcc(&UNK_10f406ec9);
  func_0x000107289f10();
  func_0x000107289fc0();
  func_0x000107289fe4();
  func_0x00010728a058();
  func_0x000107289f10();
  func_0x00010728a16c();
  func_0x000107289f3c();
  func_0x00010728a160();
  if ((bool)in_ZR) {
    func_0x00010728a1fc(&UNK_110d0ed88);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x20) = 0;
    func_0x00010728a048();
    func_0x00010728a0e8();
    if ((param_1 & 1) != 0) goto LAB_107289bc0;
    func_0x00010b5879ec();
  }
  func_0x00010728a1dc();
  FUN_107289b34();
LAB_107289bc0:
  func_0x00010728a040();
  func_0x000107289fe4();
  return;
}



/* Entry: 107289c08; end: 107289c6f;  */

undefined8 * FUN_107289c08(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_DAT_110d0ed98;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010728a154();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      func_0x00010b587c60(param_1);
    }
    else {
      func_0x00010b587c28(param_1);
    }
  }
  return param_1;
}



/* Entry: 107289c70; end: 107289d17;  */

void FUN_107289c70(long param_1)

{
  long unaff_x19;
  
  func_0x00010728a0d8();
  if (param_1 != 0) {
    func_0x00010728a108();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010728a208();
    }
  }
  return;
}



/* Entry: 107289d18; end: 107289d57;  */

void FUN_107289d18(long param_1,undefined8 param_2)

{
  func_0x000107289f6c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xa8,param_2);
  func_0x00010728a0c4();
  return;
}



/* Entry: 107289d58; end: 107289e23;  */

void FUN_107289d58(long param_1)

{
  func_0x00010728a240();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107289e24; end: 107289e5b;  */

void FUN_107289e24(undefined4 param_1,long param_2)

{
  func_0x000107289f6c();
  *(undefined4 *)(param_2 + 0xa8) = param_1;
  func_0x00010728a0c4();
  return;
}



/* Entry: 107289e5c; end: 107289e7f;  */

void FUN_107289e5c(long param_1)

{
  func_0x00010728a240();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107289e80; end: 10728a25f;  */

void FUN_107289e80(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  long unaff_x19;
  
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x30) == 0)) {
    puVar2 = (undefined8 *)(unaff_x19 + 0x20);
    func_0x0001078684d4();
    FUN_1072890a8(*puVar2);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 10728a260; end: 10728a2cb;  */

undefined8 FUN_10728a260(void)

{
  int iVar1;
  
  if ((bRam000000011381ea50 & 1) == 0) {
    iVar1 = 0x1381ea50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10728a2cc(0x11381ea00);
      ___cxa_guard_release(0x11381ea50);
    }
  }
  return 0x11381ea00;
}



/* Entry: 10728a2cc; end: 10728a3df;  */

undefined8 * FUN_10728a2cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  FUN_10728a3e0();
  for (lVar3 = 0; lVar3 != 0x3610; lVar3 = lVar3 + 0x50) {
    FUN_10728f368(param_1,lVar3 + 0x11381ea58);
    FUN_10728ef30();
    func_0x00010787ca68(&lStack_68,lVar3 + 0x11381ea70,5);
    lVar1 = lStack_60;
    for (lVar2 = lStack_68; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
      FUN_10728f704(param_1 + 5,lVar2 + 4);
      func_0x000100206870();
    }
    FUN_10728f1b4(&lStack_68);
  }
  return param_1;
}



/* Entry: 10728a3e0; end: 10728ef2f;  */

void FUN_10728a3e0(void)

{
  int iVar1;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
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
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
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
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((bRam00000001136ca1c0 & 1) == 0) {
    iVar1 = 0x136ca1c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010002b838(0x11381ea58,&DAT_10f4085bb);
      uStack_48 = 0x4052ca3d70a3d70a;
      uStack_50 = 0x40433eb851eb851f;
      uStack_38 = 0x404e43d70a3d70a4;
      uStack_40 = 0x403d51eb851eb852;
      FUN_10725ac68(0x11381ea70,&uStack_40,&uStack_50);
      uRam000000011381eaa0 = 0x40514d70a3d70a3d;
      uRam000000011381ea98 = 0x404147ae147ae148;
      func_0x00010002b838(0x11381eaa8,&DAT_10f4085be);
      uStack_68 = 0x4038147ae147ae14;
      uStack_70 = 0xc011c28f5c28f5c3;
      uStack_58 = 0x402747ae147ae148;
      uStack_60 = 0xc031ee147ae147ae;
      FUN_10725ac68(0x11381eac0,&uStack_60,&uStack_70);
      uRam000000011381eaf0 = 0x402a75c28f5c28f6;
      uRam000000011381eae8 = 0xc0219eb851eb851f;
      func_0x00010002b838(0x11381eaf8,&DAT_10f4085c1);
      uStack_88 = 0x4035051eb851eb85;
      uStack_90 = 0x40455851eb851eb8;
      uStack_78 = 0x40334ccccccccccd;
      uStack_80 = 0x4043cf5c28f5c28f;
      FUN_10725ac68(0x11381eb10,&uStack_80,&uStack_90);
      uRam000000011381eb40 = 0x4033d1eb851eb852;
      uRam000000011381eb38 = 0x4044aa3d70a3d70a;
      func_0x00010002b838(0x11381eb48,&DAT_10f4085c4);
      uStack_a8 = 0x404c333333333333;
      uStack_b0 = 0x403a0f5c28f5c28f;
      uStack_98 = 0x4049ca3d70a3d70a;
      uStack_a0 = 0x4036800000000000;
      FUN_10725ac68(0x11381eb60,&uStack_a0,&uStack_b0);
      uRam000000011381eb90 = 0x404ba28f5c28f5c3;
      uRam000000011381eb88 = 0x4039333333333333;
      func_0x00010002b838(0x11381eb98,"AR");
      uStack_c8 = 0xc04ad0a3d70a3d71;
      uStack_d0 = 0xc035d47ae147ae14;
      uStack_b8 = 0xc0525ae147ae147b;
      uStack_c0 = 0xc04ba00000000000;
      FUN_10725ac68(0x11381ebb0,&uStack_c0,&uStack_d0);
      uRam000000011381ebe0 = 0xc04d30a3d70a3d71;
      uRam000000011381ebd8 = 0xc0414ccccccccccd;
      func_0x00010002b838(0x11381ebe8,&DAT_10f4085c7);
      uStack_e8 = 0x40474147ae147ae1;
      uStack_f0 = 0x4044a00000000000;
      uStack_d8 = 0x4045ca3d70a3d70a;
      uStack_e0 = 0x40435eb851eb851f;
      FUN_10725ac68(0x11381ec00,&uStack_e0,&uStack_f0);
      uRam000000011381ec30 = 0x4046428f5c28f5c3;
      uRam000000011381ec28 = 0x40441851eb851eb8;
      func_0x00010002b838(0x11381ec38,&UNK_10f4085ca);
      uStack_108 = 0x4066800000000000;
      uStack_110 = 0xc04fa28f5c28f5c3;
      uStack_f8 = 0xc066800000000000;
      uStack_100 = 0xc056800000000000;
      FUN_10725ac68(0x11381ec50,&uStack_100,&uStack_110);
      uRam000000011381ec80 = 0;
      uRam000000011381ec78 = 0xc056800000000000;
      func_0x00010002b838(0x11381ec88,&UNK_10f4085cd);
      uStack_118 = 0x40512e147ae147ae;
      uStack_120 = 0xc048e3d70a3d70a4;
      uStack_128 = 0x4051a3d70a3d70a4;
      uStack_130 = 0xc04850a3d70a3d71;
      FUN_10725ac68(0x11381eca0,&uStack_120,&uStack_130);
      uRam000000011381ecd0 = 0x40518d70a3d70a3d;
      uRam000000011381ecc8 = 0xc048accccccccccd;
      func_0x00010002b838(0x11381ecd8,"AU");
      uStack_138 = 0x405c55c28f5c28f6;
      uStack_140 = 0xc045d0a3d70a3d71;
      uStack_148 = 0x4063323d70a3d70a;
      uStack_150 = 0xc025570a3d70a3d7;
      FUN_10725ac68(0x11381ecf0,&uStack_140,&uStack_150);
      uRam000000011381ed20 = 0x4062e6b851eb851f;
      uRam000000011381ed18 = 0xc040ef5c28f5c28f;
      func_0x00010002b838(0x11381ed28,"AT");
      uStack_158 = 0x4022f5c28f5c28f6;
      uStack_160 = 0x4047370a3d70a3d7;
      uStack_168 = 0x4030fae147ae147b;
      uStack_170 = 0x4048851eb851eb85;
      FUN_10725ac68(0x11381ed40,&uStack_160,&uStack_170);
      uRam000000011381ed70 = 0x40305eb851eb851f;
      uRam000000011381ed68 = 0x40481ae147ae147b;
      func_0x00010002b838(0x11381ed78,&DAT_10f4085d0);
      uStack_178 = 0x4046651eb851eb85;
      uStack_180 = 0x4043228f5c28f5c3;
      uStack_188 = 0x404931eb851eb852;
      uStack_190 = 0x4044ee147ae147ae;
      FUN_10725ac68(0x11381ed90,&uStack_180,&uStack_190);
      uRam000000011381edc0 = 0x4048ef5c28f5c28f;
      uRam000000011381edb8 = 0x4044347ae147ae14;
      func_0x00010002b838(0x11381edc8,&DAT_10f4085d3);
      uStack_198 = 0x403d051eb851eb85;
      uStack_1a0 = 0xc012000000000000;
      uStack_1a8 = 0x403ec00000000000;
      uStack_1b0 = 0xc002cccccccccccd;
      FUN_10725ac68(0x11381ede0,&uStack_1a0,&uStack_1b0);
      uRam000000011381ee10 = 0x403d5c28f5c28f5c;
      uRam000000011381ee08 = 0xc00ae147ae147ae1;
      func_0x00010002b838(0x11381ee18,&DAT_10f4085d6);
      uStack_1b8 = 0x4004147ae147ae14;
      uStack_1c0 = 0x4048c3d70a3d70a4;
      uStack_1c8 = 0x4018a3d70a3d70a4;
      uStack_1d0 = 0x4049bd70a3d70a3d;
      FUN_10725ac68(0x11381ee30,&uStack_1c0,&uStack_1d0);
      uRam000000011381ee60 = 0x4011851eb851eb85;
      uRam000000011381ee58 = 0x40496a3d70a3d70a;
      func_0x00010002b838(0x11381ee68,&DAT_10f4085d9);
      uStack_1d8 = 0x3fe8a3d70a3d70a4;
      uStack_1e0 = 0x40188f5c28f5c28f;
      uStack_1e8 = 0x400e666666666666;
      uStack_1f0 = 0x40287ae147ae147b;
      FUN_10725ac68(0x11381ee80,&uStack_1e0,&uStack_1f0);
      uRam000000011381eeb0 = 0x400370a3d70a3d71;
      uRam000000011381eea8 = 0x401970a3d70a3d71;
      func_0x00010002b838(0x11381eeb8,&DAT_10f4085dc);
      uStack_1f8 = 0xc015e147ae147ae1;
      uStack_200 = 0x40233851eb851eb8;
      uStack_208 = 0x400170a3d70a3d71;
      uStack_210 = 0x402e3d70a3d70a3d;
      FUN_10725ac68(0x11381eed0,&uStack_200,&uStack_210);
      uRam000000011381ef00 = 0xbff851eb851eb852;
      uRam000000011381eef8 = 0x4028bd70a3d70a3d;
      func_0x00010002b838(0x11381ef08,&DAT_10f3b8b1b);
      uStack_218 = 0x4056051eb851eb85;
      uStack_220 = 0x4034ab851eb851ec;
      uStack_228 = 0x40572ae147ae147b;
      uStack_230 = 0x403a733333333333;
      FUN_10725ac68(0x11381ef20,&uStack_220,&uStack_230);
      uRam000000011381ef50 = 0x40569ae147ae147b;
      uRam000000011381ef48 = 0x4037cccccccccccd;
      func_0x00010002b838(0x11381ef58,&DAT_10f2c1b31);
      uStack_238 = 0x40366147ae147ae1;
      uStack_240 = 0x40449d70a3d70a3d;
      uStack_248 = 0x403c8f5c28f5c28f;
      uStack_250 = 0x40461d70a3d70a3d;
      FUN_10725ac68(0x11381ef70,&uStack_240,&uStack_250);
      uRam000000011381efa0 = 0x40376147ae147ae1;
      uRam000000011381ef98 = 0x40455ae147ae147b;
      func_0x00010002b838(0x11381efa8,&DAT_10f4085df);
      uStack_258 = 0xc053beb851eb851f;
      uStack_260 = 0x4037b5c28f5c28f6;
      uStack_268 = 0xc053400000000000;
      uStack_270 = 0x403b0a3d70a3d70a;
      FUN_10725ac68(0x11381efc0,&uStack_260,&uStack_270);
      uRam000000011381eff0 = 0xc053566666666666;
      uRam000000011381efe8 = 0x40390a3d70a3d70a;
      func_0x00010002b838(0x11381eff8,&DAT_10f4085e2);
      uStack_278 = 0x402f800000000000;
      uStack_280 = 0x4045533333333333;
      uStack_288 = 0x403399999999999a;
      uStack_290 = 0x40469d70a3d70a3d;
      FUN_10725ac68(0x11381f010,&uStack_280,&uStack_290);
      uRam000000011381f040 = 0x403268f5c28f5c29;
      uRam000000011381f038 = 0x4045ee147ae147ae;
      func_0x00010002b838(0x11381f048,&DAT_10f4085e5);
      uStack_298 = 0x4037333333333333;
      uStack_2a0 = 0x4049a8f5c28f5c29;
      uStack_2a8 = 0x40405851eb851eb8;
      uStack_2b0 = 0x404c15c28f5c28f6;
      FUN_10725ac68(0x11381f060,&uStack_2a0,&uStack_2b0);
      uRam000000011381f090 = 0x403b8f5c28f5c28f;
      uRam000000011381f088 = 0x404af33333333333;
      func_0x00010002b838(0x11381f098,&DAT_10f4085e8);
      uStack_2b8 = 0xc0564eb851eb851f;
      uStack_2c0 = 0x402fc7ae147ae148;
      uStack_2c8 = 0xc056070a3d70a3d7;
      uStack_2d0 = 0x4032800000000000;
      FUN_10725ac68(0x11381f0b0,&uStack_2c0,&uStack_2d0);
      uRam000000011381f0e0 = 0xc0560ccccccccccd;
      uRam000000011381f0d8 = 0x4031800000000000;
      func_0x00010002b838(0x11381f0e8,&DAT_10f4085eb);
      uStack_2d8 = 0xc05165c28f5c28f6;
      uStack_2e0 = 0xc036deb851eb851f;
      uStack_2e8 = 0xc04cc00000000000;
      uStack_2f0 = 0xc023851eb851eb85;
      FUN_10725ac68(0x11381f100,&uStack_2e0,&uStack_2f0);
      uRam000000011381f130 = 0xc05107ae147ae148;
      uRam000000011381f128 = 0xc0307d70a3d70a3d;
      func_0x00010002b838(0x11381f138,&DAT_10f3b8b2a);
      uStack_2f8 = 0xc0527f5c28f5c28f;
      uStack_300 = 0xc040e28f5c28f5c3;
      uStack_308 = 0xc0415d70a3d70a3d;
      uStack_310 = 0x4014f5c28f5c28f6;
      FUN_10725ac68(0x11381f150,&uStack_300,&uStack_310);
      uRam000000011381f180 = 0xc04595c28f5c28f6;
      uRam000000011381f178 = 0xc036e8f5c28f5c29;
      func_0x00010002b838(0x11381f188,&DAT_10f4085ee);
      uStack_318 = 0x405c8ccccccccccd;
      uStack_320 = 0x40100a3d70a3d70a;
      uStack_328 = 0x405cdccccccccccd;
      uStack_330 = 0x4015cccccccccccd;
      FUN_10725ac68(0x11381f1a0,&uStack_320,&uStack_330);
      uRam000000011381f1d0 = 0x405cbc28f5c28f5c;
      uRam000000011381f1c8 = 0x40138f5c28f5c28f;
      func_0x00010002b838(0x11381f1d8,&DAT_10f4085f1);
      uStack_338 = 0x405633d70a3d70a4;
      uStack_340 = 0x403ab851eb851eb8;
      uStack_348 = 0x4057066666666666;
      uStack_350 = 0x403c4ccccccccccd;
      FUN_10725ac68(0x11381f1f0,&uStack_340,&uStack_350);
      uRam000000011381f220 = 0x405668f5c28f5c29;
      uRam000000011381f218 = 0x403b7851eb851eb8;
      func_0x00010002b838(0x11381f228,&DAT_10f4085f4);
      uStack_358 = 0x4033e66666666666;
      uStack_360 = 0xc03ad47ae147ae14;
      uStack_368 = 0x403d6e147ae147ae;
      uStack_370 = 0xc031a8f5c28f5c29;
      FUN_10725ac68(0x11381f240,&uStack_360,&uStack_370);
      uRam000000011381f270 = 0x4039e8f5c28f5c29;
      uRam000000011381f268 = 0xc038a8f5c28f5c29;
      func_0x00010002b838(0x11381f278,&DAT_10f4085f7);
      uStack_378 = 0x402ceb851eb851ec;
      uStack_380 = 0x400228f5c28f5c29;
      uStack_388 = 0x403b5eb851eb851f;
      uStack_390 = 0x402647ae147ae148;
      FUN_10725ac68(0x11381f290,&uStack_380,&uStack_390);
      uRam000000011381f2c0 = 0x4032947ae147ae14;
      uRam000000011381f2b8 = 0x401170a3d70a3d71;
      func_0x00010002b838(0x11381f2c8,&DAT_10f4085fa);
      uStack_398 = 0xc061a00000000000;
      uStack_3a0 = 0x4044d70a3d70a3d7;
      uStack_3a8 = 0xc04a533333333333;
      uStack_3b0 = 0x40524eb851eb851f;
      FUN_10725ac68(0x11381f2e0,&uStack_3a0,&uStack_3b0);
      uRam000000011381f310 = 0xc053d851eb851eb8;
      uRam000000011381f308 = 0x4045d33333333333;
      func_0x00010002b838(0x11381f318,&DAT_10f4085fd);
      uStack_3b8 = 0x4018147ae147ae14;
      uStack_3c0 = 0x4046e3d70a3d70a4;
      uStack_3c8 = 0x4024e147ae147ae1;
      uStack_3d0 = 0x4047ea3d70a3d70a;
      FUN_10725ac68(0x11381f330,&uStack_3c0,&uStack_3d0);
      uRam000000011381f360 = 0x4021147ae147ae14;
      uRam000000011381f358 = 0x4047b0a3d70a3d71;
      func_0x00010002b838(0x11381f368,&DAT_10f408600);
      uStack_3d8 = 0xc052e8f5c28f5c29;
      uStack_3e0 = 0xc04bce147ae147ae;
      uStack_3e8 = 0xc050bd70a3d70a3d;
      uStack_3f0 = 0xc031947ae147ae14;
      FUN_10725ac68(0x11381f380,&uStack_3e0,&uStack_3f0);
      uRam000000011381f3b0 = 0xc051aae147ae147b;
      uRam000000011381f3a8 = 0xc040b9999999999a;
      func_0x00010002b838(0x11381f3b8,&DAT_10f408603);
      uStack_3f8 = 0x40526b851eb851ec;
      uStack_400 = 0x4032333333333333;
      uStack_408 = 0x4060e0f5c28f5c29;
      uStack_410 = 0x404abae147ae147b;
      FUN_10725ac68(0x11381f3d0,&uStack_400,&uStack_410);
      uRam000000011381f400 = 0x405e5e147ae147ae;
      uRam000000011381f3f8 = 0x403f3ae147ae147b;
      func_0x00010002b838(0x11381f408,&DAT_10f3880cf);
      uStack_418 = 0xc021333333333333;
      uStack_420 = 0x40115c28f5c28f5c;
      uStack_428 = 0xc0047ae147ae147b;
      uStack_430 = 0x40250a3d70a3d70a;
      FUN_10725ac68(0x11381f420,&uStack_420,&uStack_430);
      uRam000000011381f450 = 0xc010147ae147ae14;
      uRam000000011381f448 = 0x401551eb851eb852;
      func_0x00010002b838(0x11381f458,&DAT_10f36f0dc);
      uStack_438 = 0x4020fae147ae147b;
      uStack_440 = 0x3ffbae147ae147ae;
      uStack_448 = 0x4030028f5c28f5c3;
      uStack_450 = 0x4029b851eb851eb8;
      FUN_10725ac68(0x11381f470,&uStack_440,&uStack_450);
      uRam000000011381f4a0 = 0x40270a3d70a3d70a;
      uRam000000011381f498 = 0x400ee147ae147ae1;
      func_0x00010002b838(0x11381f4a8,&DAT_10f408606);
      uStack_458 = 0x40285c28f5c28f5c;
      uStack_460 = 0xc02a851eb851eb85;
      uStack_468 = 0x403f2b851eb851ec;
      uStack_470 = 0x40150a3d70a3d70a;
      FUN_10725ac68(0x11381f4c0,&uStack_460,&uStack_470);
      uRam000000011381f4f0 = 0x402e9eb851eb851f;
      uRam000000011381f4e8 = 0xc011333333333333;
      func_0x00010002b838(0x11381f4f8,&DAT_10f408609);
      uStack_478 = 0x40262e147ae147ae;
      uStack_480 = 0xc01428f5c28f5c29;
      uStack_488 = 0x4032733333333333;
      uStack_490 = 0x400dd70a3d70a3d7;
      FUN_10725ac68(0x11381f510,&uStack_480,&uStack_490);
      uRam000000011381f540 = 0x402e8f5c28f5c28f;
      uRam000000011381f538 = 0xc011147ae147ae14;
      func_0x00010002b838(0x11381f548,&DAT_10f40860c);
      uStack_498 = 0xc053bf5c28f5c28f;
      uStack_4a0 = 0xc011333333333333;
      uStack_4a8 = 0xc050b851eb851eb8;
      uStack_4b0 = 0x4028e147ae147ae1;
      FUN_10725ac68(0x11381f560,&uStack_4a0,&uStack_4b0);
      uRam000000011381f590 = 0xc052847ae147ae14;
      uRam000000011381f588 = 0x4012d70a3d70a3d7;
      func_0x00010002b838(0x11381f598,&DAT_10f40860f);
      uStack_4b8 = 0xc0557c28f5c28f5c;
      uStack_4c0 = 0x402075c28f5c28f6;
      uStack_4c8 = 0xc054a33333333333;
      uStack_4d0 = 0x402670a3d70a3d71;
      FUN_10725ac68(0x11381f5b0,&uStack_4c0,&uStack_4d0);
      uRam000000011381f5e0 = 0xc05505c28f5c28f6;
      uRam000000011381f5d8 = 0x4023dc28f5c28f5c;
      func_0x00010002b838(0x11381f5e8,&DAT_10f408612);
      uStack_4d8 = 0xc0553e147ae147ae;
      uStack_4e0 = 0x4033dc28f5c28f5c;
      uStack_4e8 = 0xc0528b851eb851ec;
      uStack_4f0 = 0x403730a3d70a3d71;
      FUN_10725ac68(0x11381f600,&uStack_4e0,&uStack_4f0);
      uRam000000011381f630 = 0xc054970a3d70a3d7;
      uRam000000011381f628 = 0x40372147ae147ae1;
      func_0x00010002b838(0x11381f638,&DAT_10f408615);
      uStack_4f8 = 0x40402147ae147ae1;
      uStack_500 = 0x404148f5c28f5c29;
      uStack_508 = 0x4041000000000000;
      uStack_510 = 0x404195c28f5c28f6;
      FUN_10725ac68(0x11381f650,&uStack_500,&uStack_510);
      uRam000000011381f680 = 0x4040b0a3d70a3d71;
      uRam000000011381f678 = 0x40419851eb851eb8;
      func_0x00010002b838(0x11381f688,&DAT_10f408618);
      uStack_518 = 0x40287ae147ae147b;
      uStack_520 = 0x404847ae147ae148;
      uStack_528 = 0x4032d9999999999a;
      uStack_530 = 0x40498f5c28f5c28f;
      FUN_10725ac68(0x11381f6a0,&uStack_520,&uStack_530);
      uRam000000011381f6d0 = 0x402ce147ae147ae1;
      uRam000000011381f6c8 = 0x40490a3d70a3d70a;
      func_0x00010002b838(0x11381f6d8,"DE");
      uStack_538 = 0x4017f5c28f5c28f6;
      uStack_540 = 0x4047a66666666666;
      uStack_548 = 0x402e0a3d70a3d70a;
      uStack_550 = 0x404b7d70a3d70a3d;
      FUN_10725ac68(0x11381f6f0,&uStack_540,&uStack_550);
      uRam000000011381f720 = 0x402acccccccccccd;
      uRam000000011381f718 = 0x404a428f5c28f5c3;
      func_0x00010002b838(0x11381f728,&DAT_10f40861b);
      uStack_558 = 0x4044d47ae147ae14;
      uStack_560 = 0x4025dc28f5c28f5c;
      uStack_568 = 0x4045a8f5c28f5c29;
      uStack_570 = 0x4029666666666666;
      FUN_10725ac68(0x11381f740,&uStack_560,&uStack_570);
      uRam000000011381f770 = 0x4045933333333333;
      uRam000000011381f768 = 0x40272e147ae147ae;
      func_0x00010002b838(0x11381f778,&DAT_10f40861e);
      uStack_578 = 0x40202e147ae147ae;
      uStack_580 = 0x404b666666666666;
      uStack_588 = 0x40296147ae147ae1;
      uStack_590 = 0x404cdd70a3d70a3d;
      FUN_10725ac68(0x11381f790,&uStack_580,&uStack_590);
      uRam000000011381f7c0 = 0x402923d70a3d70a4;
      uRam000000011381f7b8 = 0x404bd70a3d70a3d7;
      func_0x00010002b838(0x11381f7c8,&DAT_10f408621);
      uStack_598 = 0xc051fccccccccccd;
      uStack_5a0 = 0x403199999999999a;
      uStack_5a8 = 0xc051147ae147ae14;
      uStack_5b0 = 0x4033e147ae147ae1;
      FUN_10725ac68(0x11381f7e0,&uStack_5a0,&uStack_5b0);
      uRam000000011381f810 = 0xc0517c28f5c28f5c;
      uRam000000011381f808 = 0x403275c28f5c28f6;
      func_0x00010002b838(0x11381f818,&DAT_10f3b8b3b);
      uStack_5b8 = 0xc0215c28f5c28f5c;
      uStack_5c0 = 0x40330f5c28f5c28f;
      uStack_5c8 = 0x4028000000000000;
      uStack_5d0 = 0x40428f5c28f5c28f;
      FUN_10725ac68(0x11381f830,&uStack_5c0,&uStack_5d0);
      uRam000000011381f860 = 0x40087ae147ae147b;
      uRam000000011381f858 = 0x4042600000000000;
      func_0x00010002b838(0x11381f868,&DAT_10f408624);
      uStack_5d8 = 0xc0543e147ae147ae;
      uStack_5e0 = 0xc013d70a3d70a3d7;
      uStack_5e8 = 0xc052ceb851eb851f;
      uStack_5f0 = 0x3ff6147ae147ae14;
      FUN_10725ac68(0x11381f880,&uStack_5e0,&uStack_5f0);
      uRam000000011381f8b0 = 0xc053f8f5c28f5c29;
      uRam000000011381f8a8 = 0xc001851eb851eb85;
      func_0x00010002b838(0x11381f8b8,&DAT_10f3b8b4b);
      uStack_5f8 = 0x4038b33333333333;
      uStack_600 = 0x4036000000000000;
      uStack_608 = 0x40426f5c28f5c28f;
      uStack_610 = 0x403f970a3d70a3d7;
      FUN_10725ac68(0x11381f8d0,&uStack_600,&uStack_610);
      uRam000000011381f900 = 0x403f3d70a3d70a3d;
      uRam000000011381f8f8 = 0x403e0a3d70a3d70a;
      func_0x00010002b838(0x11381f908,&DAT_10f408627);
      uStack_618 = 0x404228f5c28f5c29;
      uStack_620 = 0x4028eb851eb851ec;
      uStack_628 = 0x40458a3d70a3d70a;
      uStack_630 = 0x4032000000000000;
      FUN_10725ac68(0x11381f920,&uStack_620,&uStack_630);
      uRam000000011381f950 = 0x4043770a3d70a3d7;
      uRam000000011381f948 = 0x402ea8f5c28f5c29;
      func_0x00010002b838(0x11381f958,&DAT_10f3b8b5b);
      uStack_638 = 0xc022c7ae147ae148;
      uStack_640 = 0x4041f9999999999a;
      uStack_648 = 0x400851eb851eb852;
      uStack_650 = 0x4045e00000000000;
      FUN_10725ac68(0x11381f970,&uStack_640,&uStack_650);
      uRam000000011381f9a0 = 0xc00d99999999999a;
      uRam000000011381f998 = 0x404435c28f5c28f6;
      func_0x00010002b838(0x11381f9a8,&DAT_10f40862a);
      uStack_658 = 0x4037570a3d70a3d7;
      uStack_660 = 0x404cbc28f5c28f5c;
      uStack_668 = 0x403c2147ae147ae1;
      uStack_670 = 0x404dce147ae147ae;
      FUN_10725ac68(0x11381f9c0,&uStack_660,&uStack_670);
      uRam000000011381f9f0 = 0x4038c00000000000;
      uRam000000011381f9e8 = 0x404db851eb851eb8;
      func_0x00010002b838(0x11381f9f8,&DAT_10f40862d);
      uStack_678 = 0x404079999999999a;
      uStack_680 = 0x400b5c28f5c28f5c;
      uStack_688 = 0x4047e51eb851eb85;
      uStack_690 = 0x402deb851eb851ec;
      FUN_10725ac68(0x11381fa10,&uStack_680,&uStack_690);
      uRam000000011381fa40 = 0x4043600000000000;
      uRam000000011381fa38 = 0x40220a3d70a3d70a;
      func_0x00010002b838(0x11381fa48,&DAT_10f387f26);
      uStack_698 = 0x4034a66666666666;
      uStack_6a0 = 0x404deccccccccccd;
      uStack_6a8 = 0x403f851eb851eb85;
      uStack_6b0 = 0x40518a3d70a3d70a;
      FUN_10725ac68(0x11381fa60,&uStack_6a0,&uStack_6b0);
      uRam000000011381fa90 = 0x4038f0a3d70a3d71;
      uRam000000011381fa88 = 0x404e15c28f5c28f6;
      func_0x00010002b838(0x11381fa98,&DAT_10f408630);
      uStack_6b8 = 0xc066800000000000;
      uStack_6c0 = 0xc0324a3d70a3d70a;
      uStack_6c8 = 0x4066800000000000;
      uStack_6d0 = 0xc030051eb851eb85;
      FUN_10725ac68(0x11381fab0,&uStack_6c0,&uStack_6d0);
      uRam000000011381fae0 = 0x40664e147ae147ae;
      uRam000000011381fad8 = 0xc0322147ae147ae1;
      func_0x00010002b838(0x11381fae8,&DAT_10f408633);
      uStack_6d8 = 0xc04e99999999999a;
      uStack_6e0 = 0xc04a266666666666;
      uStack_6e8 = 0xc04ce00000000000;
      uStack_6f0 = 0xc0498ccccccccccd;
      FUN_10725ac68(0x11381fb00,&uStack_6e0,&uStack_6f0);
      uRam000000011381fb30 = 0xc04cee147ae147ae;
      uRam000000011381fb28 = 0xc049d851eb851eb8;
      func_0x00010002b838(0x11381fb38,"FR");
      uStack_6f8 = 0xc014000000000000;
      uStack_700 = 0x4045400000000000;
      uStack_708 = 0x40231eb851eb851f;
      uStack_710 = 0x4049933333333333;
      FUN_10725ac68(0x11381fb50,&uStack_700,&uStack_710);
      uRam000000011381fb80 = 0x4002cccccccccccd;
      uRam000000011381fb78 = 0x40486e147ae147ae;
      func_0x00010002b838(0x11381fb88,&DAT_10f408636);
      uStack_718 = 0x402199999999999a;
      uStack_720 = 0xc00fd70a3d70a3d7;
      uStack_728 = 0x402cdc28f5c28f5c;
      uStack_730 = 0x4002a3d70a3d70a4;
      FUN_10725ac68(0x11381fba0,&uStack_720,&uStack_730);
      uRam000000011381fbd0 = 0x4022e147ae147ae1;
      uRam000000011381fbc8 = 0x3fda3d70a3d70a3d;
      func_0x00010002b838(0x11381fbd8,"GB");
      uStack_738 = 0xc01e47ae147ae148;
      uStack_740 = 0x4048fae147ae147b;
      uStack_748 = 0x3ffae147ae147ae1;
      uStack_750 = 0x404d51eb851eb852;
      FUN_10725ac68(0x11381fbf0,&uStack_740,&uStack_750);
      uRam000000011381fc20 = 0xbfc0a3d70a3d70a4;
      uRam000000011381fc18 = 0x4049c147ae147ae1;
      func_0x00010002b838(0x11381fc28,&DAT_10f408639);
      uStack_758 = 0x4043fae147ae147b;
      uStack_760 = 0x404487ae147ae148;
      uStack_768 = 0x404751eb851eb852;
      uStack_770 = 0x4045c66666666666;
      FUN_10725ac68(0x11381fc40,&uStack_760,&uStack_770);
      uRam000000011381fc70 = 0x4046666666666666;
      uRam000000011381fc68 = 0x4044dc28f5c28f5c;
      func_0x00010002b838(0x11381fc78,&DAT_10f40863c);
      uStack_778 = 0xc009eb851eb851ec;
      uStack_780 = 0x4012d70a3d70a3d7;
      uStack_788 = 0x3ff0f5c28f5c28f6;
      uStack_790 = 0x4026333333333333;
      FUN_10725ac68(0x11381fc90,&uStack_780,&uStack_790);
      uRam000000011381fcc0 = 0xbfc999999999999a;
      uRam000000011381fcb8 = 0x40163d70a3d70a3d;
      func_0x00010002b838(0x11381fcc8,&DAT_10f40863f);
      uStack_798 = 0xc02e428f5c28f5c3;
      uStack_7a0 = 0x401d3d70a3d70a3d;
      uStack_7a8 = 0xc01f51eb851eb852;
      uStack_7b0 = 0x40292e147ae147ae;
      FUN_10725ac68(0x11381fce0,&uStack_7a0,&uStack_7b0);
      uRam000000011381fd10 = 0xc02b6b851eb851ec;
      uRam000000011381fd08 = 0x4023051eb851eb85;
      func_0x00010002b838(0x11381fd18,&DAT_10f388079);
      uStack_7b8 = 0xc030d70a3d70a3d7;
      uStack_7c0 = 0x402a428f5c28f5c3;
      uStack_7c8 = 0xc02bae147ae147ae;
      uStack_7d0 = 0x402bc28f5c28f5c3;
      FUN_10725ac68(0x11381fd30,&uStack_7c0,&uStack_7d0);
      uRam000000011381fd60 = 0xc030947ae147ae14;
      uRam000000011381fd58 = 0x402ae66666666666;
      func_0x00010002b838(0x11381fd68,&DAT_10f408642);
      uStack_7d8 = 0xc030ae147ae147ae;
      uStack_7e0 = 0x4026147ae147ae14;
      uStack_7e8 = 0xc02b666666666666;
      uStack_7f0 = 0x4029428f5c28f5c3;
      FUN_10725ac68(0x11381fd80,&uStack_7e0,&uStack_7f0);
      uRam000000011381fdb0 = 0xc02f28f5c28f5c29;
      uRam000000011381fda8 = 0x4027b851eb851eb8;
      func_0x00010002b838(0x11381fdb8,&DAT_10f408645);
      uStack_7f8 = 0x40229eb851eb851f;
      uStack_800 = 0x3ff028f5c28f5c29;
      uStack_808 = 0x4026947ae147ae14;
      uStack_810 = 0x40023d70a3d70a3d;
      FUN_10725ac68(0x11381fdd0,&uStack_800,&uStack_810);
      uRam000000011381fe00 = 0x40218f5c28f5c28f;
      uRam000000011381fdf8 = 0x400e000000000000;
      func_0x00010002b838(0x11381fe08,&DAT_10f408648);
      uStack_818 = 0x4034266666666666;
      uStack_820 = 0x404175c28f5c28f6;
      uStack_828 = 0x403a99999999999a;
      uStack_830 = 0x4044ea3d70a3d70a;
      FUN_10725ac68(0x11381fe20,&uStack_820,&uStack_830);
      uRam000000011381fe50 = 0x4037bae147ae147b;
      uRam000000011381fe48 = 0x4042fd70a3d70a3d;
      func_0x00010002b838(0x11381fe58,&DAT_10f40864b);
      uStack_838 = 0xc052533333333333;
      uStack_840 = 0x404e051eb851eb85;
      uStack_848 = 0xc0286b851eb851ec;
      uStack_850 = 0x4054e9999999999a;
      FUN_10725ac68(0x11381fe70,&uStack_840,&uStack_850);
      uRam000000011381fea0 = 0xc049deb851eb851f;
      uRam000000011381fe98 = 0x40500ae147ae147b;
      func_0x00010002b838(0x11381fea8,&DAT_10f40864e);
      uStack_858 = 0xc0570eb851eb851f;
      uStack_860 = 0x402b7ae147ae147b;
      uStack_868 = 0xc0560eb851eb851f;
      uStack_870 = 0x4031d1eb851eb852;
      FUN_10725ac68(0x11381fec0,&uStack_860,&uStack_870);
      uRam000000011381fef0 = 0xc056a0a3d70a3d71;
      uRam000000011381fee8 = 0x402d428f5c28f5c3;
      func_0x00010002b838(0x11381fef8,&DAT_10f408651);
      uStack_878 = 0xc04eb47ae147ae14;
      uStack_880 = 0x3ff451eb851eb852;
      uStack_888 = 0xc04c451eb851eb85;
      uStack_890 = 0x4020bd70a3d70a3d;
      FUN_10725ac68(0x11381ff10,&uStack_880,&uStack_890);
      uRam000000011381ff40 = 0xc04d147ae147ae14;
      uRam000000011381ff38 = 0x401b333333333333;
      func_0x00010002b838(0x11381ff48,&DAT_10f408654);
      uStack_898 = 0xc056566666666666;
      uStack_8a0 = 0x4029f5c28f5c28f6;
      uStack_8a8 = 0xc054c9999999999a;
      uStack_8b0 = 0x4030028f5c28f5c3;
      FUN_10725ac68(0x11381ff60,&uStack_8a0,&uStack_8b0);
      uRam000000011381ff90 = 0xc055cb851eb851ec;
      uRam000000011381ff88 = 0x402c1eb851eb851f;
      func_0x00010002b838(0x11381ff98,&DAT_10f408657);
      uStack_8b8 = 0x402b51eb851eb852;
      uStack_8c0 = 0x40453d70a3d70a3d;
      uStack_8c8 = 0x403363d70a3d70a4;
      uStack_8d0 = 0x4047400000000000;
      FUN_10725ac68(0x11381ffb0,&uStack_8c0,&uStack_8d0);
      uRam000000011381ffe0 = 0x402ff5c28f5c28f6;
      uRam000000011381ffd8 = 0x4046e8f5c28f5c29;
      func_0x00010002b838(0x11381ffe8,&DAT_10f40865a);
      uStack_8d8 = 0xc0529d70a3d70a3d;
      uStack_8e0 = 0x403207ae147ae148;
      uStack_8e8 = 0xc051e7ae147ae148;
      uStack_8f0 = 0x4033eb851eb851ec;
      FUN_10725ac68(0x113820000,&uStack_8e0,&uStack_8f0);
      uRam0000000113820030 = 0xc052166666666666;
      uRam0000000113820028 = 0x40328a3d70a3d70a;
      func_0x00010002b838(0x113820038,&DAT_10f40865d);
      uStack_8f8 = 0x4030333333333333;
      uStack_900 = 0x4046e147ae147ae1;
      uStack_908 = 0x4036b5c28f5c28f6;
      uStack_910 = 0x40484f5c28f5c28f;
      FUN_10725ac68(0x113820050,&uStack_900,&uStack_910);
      uRam0000000113820080 = 0x40330a3d70a3d70a;
      uRam0000000113820078 = 0x4047c00000000000;
      func_0x00010002b838(0x113820088,&DAT_10f3bd291);
      uStack_918 = 0x4057d28f5c28f5c3;
      uStack_920 = 0xc024b851eb851eb8;
      uStack_928 = 0x4061a0f5c28f5c29;
      uStack_930 = 0x4015eb851eb851ec;
      FUN_10725ac68(0x1138200a0,&uStack_920,&uStack_930);
      uRam00000001138200d0 = 0x405ab47ae147ae14;
      uRam00000001138200c8 = 0xc018c28f5c28f5c3;
      func_0x00010002b838(0x1138200d8,"IN");
      uStack_938 = 0x40510b851eb851ec;
      uStack_940 = 0x401fe147ae147ae1;
      uStack_948 = 0x405859999999999a;
      uStack_950 = 0x4041beb851eb851f;
      FUN_10725ac68(0x1138200f0,&uStack_940,&uStack_950);
      uRam0000000113820120 = 0x4052351eb851eb85;
      uRam0000000113820118 = 0x4032f5c28f5c28f6;
      func_0x00010002b838(0x113820128,&DAT_10f37b9a5);
      uStack_958 = 0xc023f5c28f5c28f6;
      uStack_960 = 0x4049d5c28f5c28f6;
      uStack_968 = 0xc0181eb851eb851f;
      uStack_970 = 0x404b90a3d70a3d71;
      FUN_10725ac68(0x113820140,&uStack_960,&uStack_970);
      uRam0000000113820170 = 0xc0190a3d70a3d70a;
      uRam0000000113820168 = 0x404aaccccccccccd;
      func_0x00010002b838(0x113820178,&DAT_10f408660);
      uStack_978 = 0x40460e147ae147ae;
      uStack_980 = 0x4039147ae147ae14;
      uStack_988 = 0x404fa8f5c28f5c29;
      uStack_990 = 0x4043dae147ae147b;
      FUN_10725ac68(0x113820190,&uStack_980,&uStack_990);
      uRam00000001138201c0 = 0x4049aa3d70a3d70a;
      uRam00000001138201b8 = 0x4041dc28f5c28f5c;
      func_0x00010002b838(0x1138201c8,&DAT_10f3b8b83);
      uStack_998 = 0x4043651eb851eb85;
      uStack_9a0 = 0x403d19999999999a;
      uStack_9a8 = 0x404848f5c28f5c29;
      uStack_9b0 = 0x4042b1eb851eb852;
      FUN_10725ac68(0x1138201e0,&uStack_9a0,&uStack_9b0);
      uRam0000000113820210 = 0x40462f5c28f5c28f;
      uRam0000000113820208 = 0x4040a8f5c28f5c29;
      func_0x00010002b838(0x113820218,&DAT_10f37b9a2);
      uStack_9b8 = 0xc038547ae147ae14;
      uStack_9c0 = 0x404fc00000000000;
      uStack_9c8 = 0xc02b3851eb851eb8;
      uStack_9d0 = 0x4050a1eb851eb852;
      FUN_10725ac68(0x113820230,&uStack_9c0,&uStack_9d0);
      uRam0000000113820260 = 0xc035f0a3d70a3d71;
      uRam0000000113820258 = 0x405009999999999a;
      func_0x00010002b838(0x113820268,&DAT_10f408663);
      uStack_9d8 = 0x4041228f5c28f5c3;
      uStack_9e0 = 0x403d800000000000;
      uStack_9e8 = 0x4041eb851eb851ec;
      uStack_9f0 = 0x4040a3d70a3d70a4;
      FUN_10725ac68(0x113820280,&uStack_9e0,&uStack_9f0);
      uRam00000001138202b0 = 0x40419c28f5c28f5c;
      uRam00000001138202a8 = 0x403fc7ae147ae148;
      func_0x00010002b838(0x1138202b8,&DAT_10f3b8b86);
      uStack_9f8 = 0x401b000000000000;
      uStack_a00 = 0x40424f5c28f5c28f;
      uStack_a08 = 0x40327ae147ae147b;
      uStack_a10 = 0x40478f5c28f5c28f;
      FUN_10725ac68(0x1138202d0,&uStack_a00,&uStack_a10);
      uRam0000000113820300 = 0x4028f5c28f5c28f6;
      uRam00000001138202f8 = 0x4044f33333333333;
      func_0x00010002b838(0x113820308,&DAT_10f408666);
      uStack_a18 = 0xc05395c28f5c28f6;
      uStack_a20 = 0x4031b33333333333;
      uStack_a28 = 0xc0530ccccccccccd;
      uStack_a30 = 0x4032851eb851eb85;
      FUN_10725ac68(0x113820320,&uStack_a20,&uStack_a30);
      uRam0000000113820350 = 0xc05333d70a3d70a4;
      uRam0000000113820348 = 0x4032051eb851eb85;
      func_0x00010002b838(0x113820358,&DAT_10f408669);
      uStack_a38 = 0x404175c28f5c28f6;
      uStack_a40 = 0x403d333333333333;
      uStack_a48 = 0x404399999999999a;
      uStack_a50 = 0x4040b0a3d70a3d71;
      FUN_10725ac68(0x113820370,&uStack_a40,&uStack_a50);
      uRam00000001138203a0 = 0x4041f47ae147ae14;
      uRam0000000113820398 = 0x403ff33333333333;
      func_0x00010002b838(0x1138203a8,"JP");
      uStack_a58 = 0x40602d1eb851eb85;
      uStack_a60 = 0x403f07ae147ae148;
      uStack_a68 = 0x40623147ae147ae1;
      uStack_a70 = 0x4046c66666666666;
      FUN_10725ac68(0x1138203c0,&uStack_a60,&uStack_a70);
      uRam00000001138203f0 = 0x406174cccccccccd;
      uRam00000001138203e8 = 0x4041d70a3d70a3d7;
      func_0x00010002b838(0x1138203f8,&DAT_10f40866c);
      uStack_a78 = 0x40473c28f5c28f5c;
      uStack_a80 = 0x4044547ae147ae14;
      uStack_a88 = 0x4055d70a3d70a3d7;
      uStack_a90 = 0x404bb1eb851eb852;
      FUN_10725ac68(0x113820410,&uStack_a80,&uStack_a90);
      uRam0000000113820440 = 0x40533851eb851eb8;
      uRam0000000113820438 = 0x40459eb851eb851f;
      func_0x00010002b838(0x113820448,&DAT_10f40866f);
      uStack_a98 = 0x4040f1eb851eb852;
      uStack_aa0 = 0xc012b851eb851eb8;
      uStack_aa8 = 0x4044ee147ae147ae;
      uStack_ab0 = 0x40160a3d70a3d70a;
      FUN_10725ac68(0x113820460,&uStack_aa0,&uStack_ab0);
      uRam0000000113820490 = 0x404268f5c28f5c29;
      uRam0000000113820488 = 0xbff4a3d70a3d70a4;
      func_0x00010002b838(0x113820498,&DAT_10f408672);
      uStack_ab8 = 0x40515d70a3d70a3d;
      uStack_ac0 = 0x4043a3d70a3d70a4;
      uStack_ac8 = 0x405410a3d70a3d71;
      uStack_ad0 = 0x4045a66666666666;
      FUN_10725ac68(0x1138204b0,&uStack_ac0,&uStack_ad0);
      uRam00000001138204e0 = 0x4052a47ae147ae14;
      uRam00000001138204d8 = 0x40456f5c28f5c28f;
      func_0x00010002b838(0x1138204e8,&DAT_10f408675);
      uStack_ad8 = 0x4059966666666666;
      uStack_ae0 = 0x4024fae147ae147b;
      uStack_ae8 = 0x405ae70a3d70a3d7;
      uStack_af0 = 0x402d23d70a3d70a4;
      FUN_10725ac68(0x113820500,&uStack_ae0,&uStack_af0);
      uRam0000000113820530 = 0x405a3b851eb851ec;
      uRam0000000113820528 = 0x40271eb851eb851f;
      func_0x00010002b838(0x113820538,"KR");
      uStack_af8 = 0x405f87ae147ae148;
      uStack_b00 = 0x404131eb851eb852;
      uStack_b08 = 0x40602f0a3d70a3d7;
      uStack_b10 = 0x40434e147ae147ae;
      FUN_10725ac68(0x113820550,&uStack_b00,&uStack_b10);
      uRam0000000113820580 = 0x405fc00000000000;
      uRam0000000113820578 = 0x4042c66666666666;
      func_0x00010002b838(0x113820588,&DAT_10f408678);
      uStack_b18 = 0x404748f5c28f5c29;
      uStack_b20 = 0x403c87ae147ae148;
      uStack_b28 = 0x404835c28f5c28f6;
      uStack_b30 = 0x403e0f5c28f5c28f;
      FUN_10725ac68(0x1138205a0,&uStack_b20,&uStack_b30);
      uRam00000001138205d0 = 0x4047fd70a3d70a3d;
      uRam00000001138205c8 = 0x403d6147ae147ae1;
      func_0x00010002b838(0x1138205d8,&DAT_10f40867b);
      uStack_b38 = 0x405907ae147ae148;
      uStack_b40 = 0x402bc28f5c28f5c3;
      uStack_b48 = 0x405ae3d70a3d70a4;
      uStack_b50 = 0x403675c28f5c28f6;
      FUN_10725ac68(0x1138205f0,&uStack_b40,&uStack_b50);
      uRam0000000113820620 = 0x4059a851eb851eb8;
      uRam0000000113820618 = 0x4031fae147ae147b;
      func_0x00010002b838(0x113820628,&DAT_10f40867e);
      uStack_b58 = 0x404190a3d70a3d71;
      uStack_b60 = 0x40408b851eb851ec;
      uStack_b68 = 0x40424e147ae147ae;
      uStack_b70 = 0x404151eb851eb852;
      FUN_10725ac68(0x113820640,&uStack_b60,&uStack_b70);
      uRam0000000113820670 = 0x4041c00000000000;
      uRam0000000113820668 = 0x4040f1eb851eb852;
      func_0x00010002b838(0x113820678,&DAT_10f408681);
      uStack_b78 = 0xc026e147ae147ae1;
      uStack_b80 = 0x401170a3d70a3d71;
      uStack_b88 = 0xc01e28f5c28f5c29;
      uStack_b90 = 0x4021147ae147ae14;
      FUN_10725ac68(0x113820690,&uStack_b80,&uStack_b90);
      uRam00000001138206c0 = 0xc0259eb851eb851f;
      uRam00000001138206b8 = 0x401947ae147ae148;
      func_0x00010002b838(0x1138206c8,&DAT_10f408684);
      uStack_b98 = 0x4022a3d70a3d70a4;
      uStack_ba0 = 0x4033947ae147ae14;
      uStack_ba8 = 0x403928f5c28f5c29;
      uStack_bb0 = 0x404091eb851eb852;
      FUN_10725ac68(0x1138206e0,&uStack_ba0,&uStack_bb0);
      uRam0000000113820710 = 0x402a6147ae147ae1;
      uRam0000000113820708 = 0x404071eb851eb852;
      func_0x00010002b838(0x113820718,&DAT_10f408687);
      uStack_bb8 = 0x4053eccccccccccd;
      uStack_bc0 = 0x4017e147ae147ae1;
      uStack_bc8 = 0x4054728f5c28f5c3;
      uStack_bd0 = 0x4023a3d70a3d70a4;
      FUN_10725ac68(0x113820730,&uStack_bc0,&uStack_bd0);
      uRam0000000113820760 = 0x4053f70a3d70a3d7;
      uRam0000000113820758 = 0x401bb851eb851eb8;
      func_0x00010002b838(0x113820768,&DAT_10f40868a);
      uStack_bd8 = 0x403b000000000000;
      uStack_be0 = 0xc03ea66666666666;
      uStack_be8 = 0x403d547ae147ae14;
      uStack_bf0 = 0xc03ca66666666666;
      FUN_10725ac68(0x113820780,&uStack_be0,&uStack_bf0);
      uRam00000001138207b0 = 0x403b7d70a3d70a3d;
      uRam00000001138207a8 = 0xc03d51eb851eb852;
      func_0x00010002b838(0x1138207b8,&DAT_10f40868d);
      uStack_bf8 = 0x40350f5c28f5c28f;
      uStack_c00 = 0x404af47ae147ae14;
      uStack_c08 = 0x403a970a3d70a3d7;
      uStack_c10 = 0x404c2f5c28f5c28f;
      FUN_10725ac68(0x1138207d0,&uStack_c00,&uStack_c10);
      uRam0000000113820800 = 0x403947ae147ae148;
      uRam00000001138207f8 = 0x404b5851eb851eb8;
      func_0x00010002b838(0x113820808,&DAT_10f408690);
      uStack_c18 = 0x4016ae147ae147ae;
      uStack_c20 = 0x4048b851eb851eb8;
      uStack_c28 = 0x4018f5c28f5c28f6;
      uStack_c30 = 0x404910a3d70a3d71;
      FUN_10725ac68(0x113820820,&uStack_c20,&uStack_c30);
      uRam0000000113820850 = 0x4018851eb851eb85;
      uRam0000000113820848 = 0x4048ce147ae147ae;
      func_0x00010002b838(0x113820858,&DAT_10f408693);
      uStack_c38 = 0x40350f5c28f5c28f;
      uStack_c40 = 0x404bcf5c28f5c28f;
      uStack_c48 = 0x403c2e147ae147ae;
      uStack_c50 = 0x404cfc28f5c28f5c;
      FUN_10725ac68(0x113820870,&uStack_c40,&uStack_c50);
      uRam00000001138208a0 = 0x40381c28f5c28f5c;
      uRam0000000113820898 = 0x404c7c28f5c28f5c;
      func_0x00010002b838(0x1138208a8,&DAT_10f408696);
      uStack_c58 = 0xc031051eb851eb85;
      uStack_c60 = 0x40356b851eb851ec;
      uStack_c68 = 0xbff1eb851eb851ec;
      uStack_c70 = 0x4041e147ae147ae1;
      FUN_10725ac68(0x1138208c0,&uStack_c60,&uStack_c70);
      uRam00000001138208f0 = 0xc01e5c28f5c28f5c;
      uRam00000001138208e8 = 0x4040c8f5c28f5c29;
      func_0x00010002b838(0x1138208f8,&DAT_10f408699);
      uStack_c78 = 0x403a9eb851eb851f;
      uStack_c80 = 0x4046beb851eb851f;
      uStack_c88 = 0x403e051eb851eb85;
      uStack_c90 = 0x40483c28f5c28f5c;
      FUN_10725ac68(0x113820910,&uStack_c80,&uStack_c90);
      uRam0000000113820940 = 0x403cdc28f5c28f5c;
      uRam0000000113820938 = 0x40478147ae147ae1;
      func_0x00010002b838(0x113820948,&DAT_10f40869c);
      uStack_c98 = 0x4045a00000000000;
      uStack_ca0 = 0xc03999999999999a;
      uStack_ca8 = 0x40493d70a3d70a3d;
      uStack_cb0 = 0xc028147ae147ae14;
      FUN_10725ac68(0x113820960,&uStack_ca0,&uStack_cb0);
      uRam0000000113820990 = 0x4047c28f5c28f5c3;
      uRam0000000113820988 = 0xc032eb851eb851ec;
      func_0x00010002b838(0x113820998,&DAT_10f40869f);
      uStack_cb8 = 0xc05d4851eb851eb8;
      uStack_cc0 = 0x402d147ae147ae14;
      uStack_cc8 = 0xc055b3d70a3d70a4;
      uStack_cd0 = 0x40405c28f5c28f5c;
      FUN_10725ac68(0x1138209b0,&uStack_cc0,&uStack_cd0);
      uRam00000001138209e0 = 0xc058c851eb851eb8;
      uRam00000001138209d8 = 0x40336e147ae147ae;
      func_0x00010002b838(0x1138209e8,&DAT_10f4086a2);
      uStack_cd8 = 0x403475c28f5c28f6;
      uStack_ce0 = 0x40446b851eb851ec;
      uStack_ce8 = 0x4036f33333333333;
      uStack_cf0 = 0x404528f5c28f5c29;
      FUN_10725ac68(0x113820a00,&uStack_ce0,&uStack_cf0);
      uRam0000000113820a30 = 0x40356e147ae147ae;
      uRam0000000113820a28 = 0x4045000000000000;
      func_0x00010002b838(0x113820a38,&DAT_10f4086a5);
      uStack_cf8 = 0xc028570a3d70a3d7;
      uStack_d00 = 0x4024333333333333;
      uStack_d08 = 0x4011147ae147ae14;
      uStack_d10 = 0x4038f851eb851eb8;
      FUN_10725ac68(0x113820a50,&uStack_d00,&uStack_d10);
      uRam0000000113820a80 = 0xc020000000000000;
      uRam0000000113820a78 = 0x402947ae147ae148;
      func_0x00010002b838(0x113820a88,&DAT_10f388032);
      uStack_d18 = 0x4057133333333333;
      uStack_d20 = 0x4023dc28f5c28f5c;
      uStack_d28 = 0x40594b851eb851ec;
      uStack_d30 = 0x403c570a3d70a3d7;
      FUN_10725ac68(0x113820aa0,&uStack_d20,&uStack_d30);
      uRam0000000113820ad0 = 0x40580ae147ae147b;
      uRam0000000113820ac8 = 0x4030d70a3d70a3d7;
      func_0x00010002b838(0x113820ad8,&DAT_10f4086a8);
      uStack_d38 = 0x4032733333333333;
      uStack_d40 = 0x4044f0a3d70a3d71;
      uStack_d48 = 0x4034570a3d70a3d7;
      uStack_d50 = 0x4045c28f5c28f5c3;
      FUN_10725ac68(0x113820af0,&uStack_d40,&uStack_d50);
      uRam0000000113820b20 = 0x4033428f5c28f5c3;
      uRam0000000113820b18 = 0x4045370a3d70a3d7;
      func_0x00010002b838(0x113820b28,&DAT_10f4086ab);
      uStack_d58 = 0x4055f00000000000;
      uStack_d60 = 0x4044cccccccccccd;
      uStack_d68 = 0x405df147ae147ae1;
      uStack_d70 = 0x404a066666666666;
      FUN_10725ac68(0x113820b40,&uStack_d60,&uStack_d70);
      uRam0000000113820b70 = 0x405abae147ae147b;
      uRam0000000113820b68 = 0x4047f5c28f5c28f6;
      func_0x00010002b838(0x113820b78,&DAT_10f4086ae);
      uStack_d78 = 0x403e2e147ae147ae;
      uStack_d80 = 0xc03abd70a3d70a3d;
      uStack_d88 = 0x404463d70a3d70a4;
      uStack_d90 = 0xc024a3d70a3d70a4;
      FUN_10725ac68(0x113820b90,&uStack_d80,&uStack_d90);
      uRam0000000113820bc0 = 0x404048f5c28f5c29;
      uRam0000000113820bb8 = 0xc039f851eb851eb8;
      func_0x00010002b838(0x113820bc8,"MR");
      uStack_d98 = 0xc0310f5c28f5c28f;
      uStack_da0 = 0x402d3d70a3d70a3d;
      uStack_da8 = 0xc013ae147ae147ae;
      uStack_db0 = 0x403b666666666666;
      FUN_10725ac68(0x113820be0,&uStack_da0,&uStack_db0);
      uRam0000000113820c10 = 0xc02feb851eb851ec;
      uRam0000000113820c08 = 0x403211eb851eb852;
      func_0x00010002b838(0x113820c18,&DAT_10f4086b1);
      uStack_db8 = 0x40405851eb851eb8;
      uStack_dc0 = 0xc030cccccccccccd;
      uStack_dc8 = 0x4041e28f5c28f5c3;
      uStack_dd0 = 0xc02275c28f5c28f6;
      FUN_10725ac68(0x113820c30,&uStack_dc0,&uStack_dd0);
      uRam0000000113820c60 = 0x4040e28f5c28f5c3;
      uRam0000000113820c58 = 0xc02bf5c28f5c28f6;
      func_0x00010002b838(0x113820c68,&DAT_10f3b8b96);
      uStack_dd8 = 0x405905c28f5c28f6;
      uStack_de0 = 0x3fe8a3d70a3d70a4;
      uStack_de8 = 0x405dcb851eb851ec;
      uStack_df0 = 0x401bb851eb851eb8;
      FUN_10725ac68(0x113820c80,&uStack_de0,&uStack_df0);
      uRam0000000113820cb0 = 0x40596b851eb851ec;
      uRam0000000113820ca8 = 0x40090a3d70a3d70a;
      func_0x00010002b838(0x113820cb8,"NA");
      uStack_df8 = 0x402775c28f5c28f6;
      uStack_e00 = 0xc03d0ccccccccccd;
      uStack_e08 = 0x4039147ae147ae14;
      uStack_e10 = 0xc030f0a3d70a3d71;
      FUN_10725ac68(0x113820cd0,&uStack_e00,&uStack_e10);
      uRam0000000113820d00 = 0x4031147ae147ae14;
      uRam0000000113820cf8 = 0xc0368f5c28f5c28f;
      func_0x00010002b838(0x113820d08,&DAT_10f4086b4);
      uStack_e18 = 0x406480f5c28f5c29;
      uStack_e20 = 0xc036666666666666;
      uStack_e28 = 0x4064e3d70a3d70a4;
      uStack_e30 = 0xc0341c28f5c28f5c;
      FUN_10725ac68(0x113820d20,&uStack_e20,&uStack_e30);
      uRam0000000113820d50 = 0x4064ce147ae147ae;
      uRam0000000113820d48 = 0xc036451eb851eb85;
      func_0x00010002b838(0x113820d58,&DAT_10f4086b7);
      uStack_e38 = 0x3fd3333333333333;
      uStack_e40 = 0x402751eb851eb852;
      uStack_e48 = 0x402fcccccccccccd;
      uStack_e50 = 0x40377851eb851eb8;
      FUN_10725ac68(0x113820d70,&uStack_e40,&uStack_e50);
      uRam0000000113820da0 = 0x40010a3d70a3d70a;
      uRam0000000113820d98 = 0x402b051eb851eb85;
      func_0x00010002b838(0x113820da8,&DAT_10f3b8ba5);
      uStack_e58 = 0x4005851eb851eb85;
      uStack_e60 = 0x4010f5c28f5c28f6;
      uStack_e68 = 0x402d28f5c28f5c29;
      uStack_e70 = 0x402bbd70a3d70a3d;
      FUN_10725ac68(0x113820dc0,&uStack_e60,&uStack_e70);
      uRam0000000113820df0 = 0x400ae147ae147ae1;
      uRam0000000113820de8 = 0x401a70a3d70a3d71;
      func_0x00010002b838(0x113820df8,&DAT_10f4086ba);
      uStack_e78 = 0xc055eae147ae147b;
      uStack_e80 = 0x402575c28f5c28f6;
      uStack_e88 = 0xc054c9999999999a;
      uStack_e90 = 0x402e0a3d70a3d70a;
      FUN_10725ac68(0x113820e10,&uStack_e80,&uStack_e90);
      uRam0000000113820e40 = 0xc0558f5c28f5c28f;
      uRam0000000113820e38 = 0x40283851eb851eb8;
      func_0x00010002b838(0x113820e48,&DAT_10f3eb3f2);
      uStack_e98 = 0x400a7ae147ae147b;
      uStack_ea0 = 0x4049666666666666;
      uStack_ea8 = 0x401c5c28f5c28f5c;
      uStack_eb0 = 0x404ac147ae147ae1;
      FUN_10725ac68(0x113820e60,&uStack_ea0,&uStack_eb0);
      uRam0000000113820e90 = 0x401399999999999a;
      uRam0000000113820e88 = 0x404a2f5c28f5c28f;
      func_0x00010002b838(0x113820e98,"NO");
      uStack_eb8 = 0x4013f5c28f5c28f6;
      uStack_ec0 = 0x404d0a3d70a3d70a;
      uStack_ec8 = 0x403f4a3d70a3d70a;
      uStack_ed0 = 0x4051bae147ae147b;
      FUN_10725ac68(0x113820eb0,&uStack_ec0,&uStack_ed0);
      uRam0000000113820ee0 = 0x402575c28f5c28f6;
      uRam0000000113820ed8 = 0x404df47ae147ae14;
      func_0x00010002b838(0x113820ee8,&DAT_10f4086bd);
      uStack_ed8 = 0x405405c28f5c28f6;
      uStack_ee0 = 0x403a666666666666;
      uStack_ee8 = 0x40560ae147ae147b;
      uStack_ef0 = 0x403e6b851eb851ec;
      FUN_10725ac68(0x113820f00,&uStack_ee0,&uStack_ef0);
      uRam0000000113820f30 = 0x4055547ae147ae14;
      uRam0000000113820f28 = 0x403bb5c28f5c28f6;
      func_0x00010002b838(0x113820f38,&DAT_10f4086c0);
      uStack_ef8 = 0x4064d051eb851eb8;
      uStack_f00 = 0xc04751eb851eb852;
      uStack_f08 = 0x406650a3d70a3d71;
      uStack_f10 = 0xc04139999999999a;
      FUN_10725ac68(0x113820f50,&uStack_f00,&uStack_f10);
      uRam0000000113820f80 = 0x4065d851eb851eb8;
      uRam0000000113820f78 = 0xc0426ccccccccccd;
      func_0x00010002b838(0x113820f88,&DAT_10f4086c3);
      uStack_f18 = 0x404a000000000000;
      uStack_f20 = 0x4030a66666666666;
      uStack_f28 = 0x404de7ae147ae148;
      uStack_f30 = 0x403a666666666666;
      FUN_10725ac68(0x113820fa0,&uStack_f20,&uStack_f30);
      uRam0000000113820fd0 = 0x404d30a3d70a3d71;
      uRam0000000113820fc8 = 0x4037970a3d70a3d7;
      func_0x00010002b838(0x113820fd8,&DAT_10f3b8bab);
      uStack_f38 = 0x404e6f5c28f5c28f;
      uStack_f40 = 0x4037b0a3d70a3d71;
      uStack_f48 = 0x405375c28f5c28f6;
      uStack_f50 = 0x404290a3d70a3d71;
      FUN_10725ac68(0x113820ff0,&uStack_f40,&uStack_f50);
      uRam0000000113821020 = 0x4050c00000000000;
      uRam0000000113821018 = 0x4038dc28f5c28f5c;
      func_0x00010002b838(0x113821028,&DAT_10f4086c6);
      uStack_f58 = 0xc054be147ae147ae;
      uStack_f60 = 0x401ce147ae147ae1;
      uStack_f68 = 0xc0534f5c28f5c28f;
      uStack_f70 = 0x40233851eb851eb8;
      FUN_10725ac68(0x113821040,&uStack_f60,&uStack_f70);
      uRam0000000113821070 = 0xc053e147ae147ae1;
      uRam0000000113821068 = 0x4021f5c28f5c28f6;
      func_0x00010002b838(0x113821078,&DAT_10f4086c9);
      uStack_f78 = 0xc0545a3d70a3d70a;
      uStack_f80 = 0xc03259999999999a;
      uStack_f88 = 0xc0512ae147ae147b;
      uStack_f90 = 0xbfaeb851eb851eb8;
      FUN_10725ac68(0x113821090,&uStack_f80,&uStack_f90);
      uRam00000001138210c0 = 0xc053428f5c28f5c3;
      uRam00000001138210b8 = 0xc02819999999999a;
      func_0x00010002b838(0x1138210c8,&DAT_10f3b8ba8);
      uStack_f98 = 0x405d4ae147ae147b;
      uStack_fa0 = 0x401651eb851eb852;
      uStack_fa8 = 0x405fa28f5c28f5c3;
      uStack_fb0 = 0x4032828f5c28f5c3;
      FUN_10725ac68(0x1138210e0,&uStack_fa0,&uStack_fb0);
      uRam0000000113821110 = 0x405e4147ae147ae1;
      uRam0000000113821108 = 0x402d3851eb851eb8;
      func_0x00010002b838(0x113821118,&DAT_10f4086cc);
      uStack_fb8 = 0x4061a00000000000;
      uStack_fc0 = 0xc0254ccccccccccd;
      uStack_fc8 = 0x406380a3d70a3d71;
      uStack_fd0 = 0xc004000000000000;
      FUN_10725ac68(0x113821130,&uStack_fc0,&uStack_fd0);
      uRam0000000113821160 = 0x406264cccccccccd;
      uRam0000000113821158 = 0xc022f5c28f5c28f6;
      func_0x00010002b838(0x113821168,&DAT_10f387ec8);
      uStack_fd8 = 0x402c23d70a3d70a4;
      uStack_fe0 = 0x404883d70a3d70a4;
      uStack_fe8 = 0x403807ae147ae148;
      uStack_ff0 = 0x404b6ccccccccccd;
      FUN_10725ac68(0x113821180,&uStack_fe0,&uStack_ff0);
      uRam00000001138211b0 = 0x4034f5c28f5c28f6;
      uRam00000001138211a8 = 0x404a147ae147ae14;
      func_0x00010002b838(0x1138211b8,&DAT_10f3ab364);
      uStack_ff8 = 0xc050cf5c28f5c28f;
      uStack_1000 = 0x4031f33333333333;
      uStack_1008 = 0xc05065c28f5c28f6;
      uStack_1010 = 0x4032851eb851eb85;
      FUN_10725ac68(0x1138211d0,&uStack_1000,&uStack_1010);
      uRam0000000113821200 = 0xc05083d70a3d70a4;
      uRam00000001138211f8 = 0x40326b851eb851ec;
      func_0x00010002b838(0x113821208,&DAT_10f4086cf);
      uStack_1018 = 0x405f1147ae147ae1;
      uStack_1020 = 0x4042d5c28f5c28f6;
      uStack_1028 = 0x406058f5c28f5c29;
      uStack_1030 = 0x40457eb851eb851f;
      FUN_10725ac68(0x113821220,&uStack_1020,&uStack_1030);
      uRam0000000113821250 = 0x405f747ae147ae14;
      uRam0000000113821248 = 0x404388f5c28f5c29;
      func_0x00010002b838(0x113821258,&DAT_10f3b8bba);
      uStack_1038 = 0xc0230f5c28f5c28f;
      uStack_1040 = 0x40426b851eb851ec;
      uStack_1048 = 0xc0198f5c28f5c28f;
      uStack_1050 = 0x404523d70a3d70a4;
      FUN_10725ac68(0x113821270,&uStack_1040,&uStack_1050);
      uRam00000001138212a0 = 0xc02247ae147ae148;
      uRam0000000113821298 = 0x40435c28f5c28f5c;
      func_0x00010002b838(0x1138212a8,&DAT_10f4086d2);
      uStack_1058 = 0xc04f5851eb851eb8;
      uStack_1060 = 0xc03b8ccccccccccd;
      uStack_1068 = 0xc04b251eb851eb85;
      uStack_1070 = 0xc033570a3d70a3d7;
      FUN_10725ac68(0x1138212c0,&uStack_1060,&uStack_1070);
      uRam00000001138212f0 = 0xc04cca3d70a3d70a;
      uRam00000001138212e8 = 0xc039428f5c28f5c3;
      func_0x00010002b838(0x1138212f8,&DAT_10f4086d5);
      uStack_1078 = 0x40495eb851eb851f;
      uStack_1080 = 0x40388f5c28f5c28f;
      uStack_1088 = 0x4049ce147ae147ae;
      uStack_1090 = 0x403a1c28f5c28f5c;
      FUN_10725ac68(0x113821310,&uStack_1080,&uStack_1090);
      uRam0000000113821340 = 0x4049c3d70a3d70a4;
      uRam0000000113821338 = 0x40394a3d70a3d70a;
      func_0x00010002b838(0x113821348,&DAT_10f4086d8);
      uStack_1098 = 0x40343851eb851eb8;
      uStack_10a0 = 0x4045d851eb851eb8;
      uStack_10a8 = 0x403da147ae147ae1;
      uStack_10b0 = 0x40481c28f5c28f5c;
      FUN_10725ac68(0x113821360,&uStack_10a0,&uStack_10b0);
      uRam0000000113821390 = 0x403a19999999999a;
      uRam0000000113821388 = 0x4046370a3d70a3d7;
      func_0x00010002b838(0x113821398,&DAT_10f4086db);
      uStack_10b8 = 0xc066800000000000;
      uStack_10c0 = 0x4044933333333333;
      uStack_10c8 = 0x4066800000000000;
      uStack_10d0 = 0x4054500000000000;
      FUN_10725ac68(0x1138213b0,&uStack_10c0,&uStack_10d0);
      uRam00000001138213e0 = 0x4042cf5c28f5c28f;
      uRam00000001138213d8 = 0x404be147ae147ae1;
      func_0x00010002b838(0x1138213e8,&DAT_10f4086de);
      uStack_10d8 = 0x403d051eb851eb85;
      uStack_10e0 = 0xc0075c28f5c28f5c;
      uStack_10e8 = 0x403ed1eb851eb852;
      uStack_10f0 = 0xbff2147ae147ae14;
      FUN_10725ac68(0x113821400,&uStack_10e0,&uStack_10f0);
      uRam0000000113821430 = 0x403e0f5c28f5c28f;
      uRam0000000113821428 = 0xbfff0a3d70a3d70a;
      func_0x00010002b838(0x113821438,&DAT_10f3b8bbd);
      uStack_10f8 = 0x404150a3d70a3d71;
      uStack_1100 = 0x403059999999999a;
      uStack_1108 = 0x404bd5c28f5c28f6;
      uStack_1110 = 0x4040147ae147ae14;
      FUN_10725ac68(0x113821450,&uStack_1100,&uStack_1110);
      uRam0000000113821480 = 0x4047570a3d70a3d7;
      uRam0000000113821478 = 0x4038b5c28f5c28f6;
      func_0x00010002b838(0x113821488,&DAT_10f4086e1);
      uStack_1118 = 0x4035f0a3d70a3d71;
      uStack_1120 = 0x40213d70a3d70a3d;
      uStack_1128 = 0x4043347ae147ae14;
      uStack_1130 = 0x4036000000000000;
      FUN_10725ac68(0x1138214a0,&uStack_1120,&uStack_1130);
      uRam00000001138214d0 = 0x4040451eb851eb85;
      uRam00000001138214c8 = 0x402f333333333333;
      func_0x00010002b838(0x1138214d8,&DAT_10f4086e4);
      uStack_1138 = 0x4037e3d70a3d70a4;
      uStack_1140 = 0x400c147ae147ae14;
      uStack_1148 = 0x4041a66666666666;
      uStack_1150 = 0x4028800000000000;
      FUN_10725ac68(0x1138214f0,&uStack_1140,&uStack_1150);
      uRam0000000113821520 = 0x403f947ae147ae14;
      uRam0000000113821518 = 0x4013666666666666;
      func_0x00010002b838(0x113821528,&DAT_10f4086e7);
      uStack_1158 = 0xc031a147ae147ae1;
      uStack_1160 = 0x4028a8f5c28f5c29;
      uStack_1168 = 0xc026f0a3d70a3d71;
      uStack_1170 = 0x403099999999999a;
      FUN_10725ac68(0x113821540,&uStack_1160,&uStack_1170);
      uRam0000000113821570 = 0xc0317851eb851eb8;
      uRam0000000113821568 = 0x402d70a3d70a3d71;
      func_0x00010002b838(0x113821578,&DAT_10f4086ea);
      uStack_1178 = 0x40638fae147ae148;
      uStack_1180 = 0xc025a8f5c28f5c29;
      uStack_1188 = 0x40644ccccccccccd;
      uStack_1190 = 0xc01a666666666666;
      FUN_10725ac68(0x113821590,&uStack_1180,&uStack_1190);
      uRam00000001138215c0 = 0x4063fe6666666666;
      uRam00000001138215b8 = 0xc022dc28f5c28f5c;
      func_0x00010002b838(0x1138215c8,&DAT_10f4086ed);
      uStack_1198 = 0xc02a800000000000;
      uStack_11a0 = 0x401b28f5c28f5c29;
      uStack_11a8 = 0xc02475c28f5c28f6;
      uStack_11b0 = 0x402419999999999a;
      FUN_10725ac68(0x1138215e0,&uStack_11a0,&uStack_11b0);
      uRam0000000113821610 = 0xc02a7ae147ae147b;
      uRam0000000113821608 = 0x4020fae147ae147b;
      func_0x00010002b838(0x113821618,&DAT_10f4086f0);
      uStack_11b8 = 0xc056866666666666;
      uStack_11c0 = 0x402a4ccccccccccd;
      uStack_11c8 = 0xc055ee147ae147ae;
      uStack_11d0 = 0x402cd70a3d70a3d7;
      FUN_10725ac68(0x113821630,&uStack_11c0,&uStack_11d0);
      uRam0000000113821660 = 0xc0564c28f5c28f5c;
      uRam0000000113821658 = 0x402b666666666666;
      func_0x00010002b838(0x113821668,&DAT_10f4086f3);
      uStack_11e8 = 0x404990a3d70a3d71;
      uStack_11f0 = 0x40280a3d70a3d70a;
      uStack_11d8 = 0x40447d70a3d70a3d;
      uStack_11e0 = 0xbffae147ae147ae1;
      FUN_10725ac68(0x113821680,&uStack_11e0,&uStack_11f0);
      uRam00000001138216b0 = 0x4046ab851eb851ec;
      uRam00000001138216a8 = 0x400051eb851eb852;
      func_0x00010002b838(0x1138216b8,&DAT_10f4086f6);
      uStack_1208 = 0x4036fd70a3d70a3d;
      uStack_1210 = 0x404715c28f5c28f6;
      uStack_11f8 = 0x4032d47ae147ae14;
      uStack_1200 = 0x4045200000000000;
      FUN_10725ac68(0x1138216d0,&uStack_1200,&uStack_1210);
      uRam0000000113821700 = 0x403475c28f5c28f6;
      uRam00000001138216f8 = 0x404667ae147ae148;
      func_0x00010002b838(0x113821708,&DAT_10f4086f9);
      uStack_1228 = 0xc04afae147ae147b;
      uStack_1230 = 0x40181eb851eb851f;
      uStack_1218 = 0xc04d051eb851eb85;
      uStack_1220 = 0x3ffd1eb851eb851f;
      FUN_10725ac68(0x113821720,&uStack_1220,&uStack_1230);
      uRam0000000113821750 = 0xc04b99999999999a;
      uRam0000000113821748 = 0x4017666666666666;
      func_0x00010002b838(0x113821758,&DAT_10f4086fc);
      uStack_1248 = 0x40368f5c28f5c28f;
      uStack_1250 = 0x4048c8f5c28f5c29;
      uStack_1238 = 0x4030e147ae147ae1;
      uStack_1240 = 0x4047e147ae147ae1;
      FUN_10725ac68(0x113821770,&uStack_1240,&uStack_1250);
      uRam00000001138217a0 = 0x40311c28f5c28f5c;
      uRam0000000113821798 = 0x4048133333333333;
      func_0x00010002b838(0x1138217a8,&DAT_10f4086ff);
      uStack_1268 = 0x40308f5c28f5c28f;
      uStack_1270 = 0x40476ccccccccccd;
      uStack_1258 = 0x402b666666666666;
      uStack_1260 = 0x4046b9999999999a;
      FUN_10725ac68(0x1138217c0,&uStack_1260,&uStack_1270);
      uRam00000001138217f0 = 0x402d051eb851eb85;
      uRam00000001138217e8 = 0x404707ae147ae148;
      func_0x00010002b838(0x1138217f8,&DAT_10f37b9a8);
      uStack_1288 = 0x4037e66666666666;
      uStack_1290 = 0x4051470a3d70a3d7;
      uStack_1278 = 0x40260f5c28f5c28f;
      uStack_1280 = 0x404bae147ae147ae;
      FUN_10725ac68(0x113821810,&uStack_1280,&uStack_1290);
      uRam0000000113821840 = 0x403211eb851eb852;
      uRam0000000113821838 = 0x404daa3d70a3d70a;
      func_0x00010002b838(0x113821848,&DAT_10f408702);
      uStack_12a8 = 0x404008f5c28f5c29;
      uStack_12b0 = 0xc039a8f5c28f5c29;
      uStack_1298 = 0x403eae147ae147ae;
      uStack_12a0 = 0xc03b4a3d70a3d70a;
      FUN_10725ac68(0x113821860,&uStack_12a0,&uStack_12b0);
      uRam0000000113821890 = 0x403f23d70a3d70a4;
      uRam0000000113821888 = 0xc03a547ae147ae14;
      func_0x00010002b838(0x113821898,&DAT_10f408705);
      uStack_12c8 = 0x40452ccccccccccd;
      uStack_12d0 = 0x40429d70a3d70a3d;
      uStack_12b8 = 0x4041d9999999999a;
      uStack_12c0 = 0x404027ae147ae148;
      FUN_10725ac68(0x1138218b0,&uStack_12c0,&uStack_12d0);
      uRam00000001138218e0 = 0x404223d70a3d70a4;
      uRam00000001138218d8 = 0x4040c147ae147ae1;
      func_0x00010002b838(0x1138218e8,&DAT_10f2c1aeb);
      uStack_12e8 = 0x4037e3d70a3d70a4;
      uStack_12f0 = 0x403768f5c28f5c29;
      uStack_12d8 = 0x402b147ae147ae14;
      uStack_12e0 = 0x401dae147ae147ae;
      FUN_10725ac68(0x113821900,&uStack_12e0,&uStack_12f0);
      uRam0000000113821930 = 0x402e19999999999a;
      uRam0000000113821928 = 0x40283d70a3d70a3d;
      func_0x00010002b838(0x113821938,&DAT_10f408708);
      uStack_1308 = 0x3ffdeb851eb851ec;
      uStack_1310 = 0x40260a3d70a3d70a;
      uStack_12f8 = 0xbfa999999999999a;
      uStack_1300 = 0x4017b851eb851eb8;
      FUN_10725ac68(0x113821950,&uStack_1300,&uStack_1310);
      uRam0000000113821980 = 0x3ff3851eb851eb85;
      uRam0000000113821978 = 0x4018851eb851eb85;
      func_0x00010002b838(0x113821988,&DAT_10f3b8bc0);
      uStack_1328 = 0x405a65c28f5c28f6;
      uStack_1330 = 0x40346b851eb851ec;
      uStack_1318 = 0x40585851eb851eb8;
      uStack_1320 = 0x4016c28f5c28f5c3;
      FUN_10725ac68(0x1138219a0,&uStack_1320,&uStack_1330);
      uRam00000001138219d0 = 0x4059200000000000;
      uRam00000001138219c8 = 0x402b851eb851eb85;
      func_0x00010002b838(0x1138219d8,&DAT_10f3b8bc3);
      uStack_1348 = 0x4052beb851eb851f;
      uStack_1350 = 0x40447ae147ae147b;
      uStack_1338 = 0x4050dc28f5c28f5c;
      uStack_1340 = 0x40425eb851eb851f;
      FUN_10725ac68(0x1138219f0,&uStack_1340,&uStack_1350);
      uRam0000000113821a20 = 0x4051328f5c28f5c3;
      uRam0000000113821a18 = 0x404347ae147ae148;
      func_0x00010002b838(0x113821a28,&DAT_10f40870b);
      uStack_1368 = 0x4050a33333333333;
      uStack_1370 = 0x4045600000000000;
      uStack_1358 = 0x404a400000000000;
      uStack_1360 = 0x4041a28f5c28f5c3;
      FUN_10725ac68(0x113821a40,&uStack_1360,&uStack_1370);
      uRam0000000113821a70 = 0x404d2a3d70a3d70a;
      uRam0000000113821a68 = 0x4042fae147ae147b;
      func_0x00010002b838(0x113821a78,&DAT_10f2c1b45);
      uStack_1388 = 0x405fd5c28f5c28f6;
      uStack_1390 = 0xc0208a3d70a3d70a;
      uStack_1378 = 0x405f3e147ae147ae;
      uStack_1380 = 0xc022c7ae147ae148;
      FUN_10725ac68(0x113821a90,&uStack_1380,&uStack_1390);
      uRam0000000113821ac0 = 0x405f60a3d70a3d71;
      uRam0000000113821ab8 = 0xc0211eb851eb851f;
      func_0x00010002b838(0x113821ac8,&DAT_10f2c1b4c);
      uStack_13a8 = 0xc04e733333333333;
      uStack_13b0 = 0x4025c7ae147ae148;
      uStack_1398 = 0xc04ef9999999999a;
      uStack_13a0 = 0x4024000000000000;
      FUN_10725ac68(0x113821ae0,&uStack_13a0,&uStack_13b0);
      uRam0000000113821b10 = 0xc04ec147ae147ae1;
      uRam0000000113821b08 = 0x40254ccccccccccd;
      func_0x00010002b838(0x113821b18,&DAT_10f40870e);
      uStack_13c8 = 0x4026fae147ae147b;
      uStack_13d0 = 0x4042accccccccccd;
      uStack_13b8 = 0x401e147ae147ae14;
      uStack_13c0 = 0x403e4f5c28f5c28f;
      FUN_10725ac68(0x113821b30,&uStack_13c0,&uStack_13d0);
      uRam0000000113821b60 = 0x40245c28f5c28f5c;
      uRam0000000113821b58 = 0x404267ae147ae148;
      func_0x00010002b838(0x113821b68,"TR");
      uStack_13e8 = 0x4046651eb851eb85;
      uStack_13f0 = 0x404511eb851eb852;
      uStack_13d8 = 0x403a0a3d70a3d70a;
      uStack_13e0 = 0x4041e8f5c28f5c29;
      FUN_10725ac68(0x113821b80,&uStack_13e0,&uStack_13f0);
      uRam0000000113821bb0 = 0x403cfae147ae147b;
      uRam0000000113821ba8 = 0x40448147ae147ae1;
      func_0x00010002b838(0x113821bb8,&DAT_10f3b8be0);
      uStack_1408 = 0x405e7ccccccccccd;
      uStack_1410 = 0x40394ccccccccccd;
      uStack_13f8 = 0x405e070a3d70a3d7;
      uStack_1400 = 0x4035f851eb851eb8;
      FUN_10725ac68(0x113821bd0,&uStack_1400,&uStack_1410);
      uRam0000000113821c00 = 0x405e647ae147ae14;
      uRam0000000113821bf8 = 0x403907ae147ae148;
      func_0x00010002b838(0x113821c08,&DAT_10f408711);
      uStack_1428 = 0x404428f5c28f5c29;
      uStack_1430 = 0xbfee666666666666;
      uStack_1418 = 0x403d570a3d70a3d7;
      uStack_1420 = 0xc02770a3d70a3d71;
      FUN_10725ac68(0x113821c20,&uStack_1420,&uStack_1430);
      uRam0000000113821c50 = 0x4043a51eb851eb85;
      uRam0000000113821c48 = 0xc01b47ae147ae148;
      func_0x00010002b838(0x113821c58,&DAT_10f408714);
      uStack_1448 = 0x4041851eb851eb85;
      uStack_1450 = 0x4011000000000000;
      uStack_1438 = 0x403d947ae147ae14;
      uStack_1440 = 0xbff70a3d70a3d70a;
      FUN_10725ac68(0x113821c70,&uStack_1440,&uStack_1450);
      uRam0000000113821ca0 = 0x40404a3d70a3d70a;
      uRam0000000113821c98 = 0x3fd47ae147ae147b;
      func_0x00010002b838(0x113821ca8,&DAT_10f408717);
      uStack_1468 = 0x40440a3d70a3d70a;
      uStack_1470 = 0x404a2b851eb851ec;
      uStack_1458 = 0x4036170a3d70a3d7;
      uStack_1460 = 0x40462e147ae147ae;
      FUN_10725ac68(0x113821cc0,&uStack_1460,&uStack_1470);
      uRam0000000113821cf0 = 0x403e851eb851eb85;
      uRam0000000113821ce8 = 0x404939999999999a;
      func_0x00010002b838(0x113821cf8,&DAT_10f40871a);
      uStack_1488 = 0xc04a9ae147ae147b;
      uStack_1490 = 0xc03e1c28f5c28f5c;
      uStack_1478 = 0xc04d370a3d70a3d7;
      uStack_1480 = 0xc04179999999999a;
      FUN_10725ac68(0x113821d10,&uStack_1480,&uStack_1490);
      uRam0000000113821d40 = 0xc04c1851eb851eb8;
      uRam0000000113821d38 = 0xc041747ae147ae14;
      func_0x00010002b838(0x113821d48,"US");
      uStack_14a8 = 0xc050bd70a3d70a3d;
      uStack_14b0 = 0x4048c00000000000;
      uStack_1498 = 0xc05f400000000000;
      uStack_14a0 = 0x4039000000000000;
      FUN_10725ac68(0x113821d60,&uStack_14a0,&uStack_14b0);
      uRam0000000113821d90 = 0xc05280a3d70a3d71;
      uRam0000000113821d88 = 0x40445ae147ae147b;
      func_0x00010002b838(0x113821d98,&DAT_10f40871d);
      uStack_14c8 = 0x405243d70a3d70a4;
      uStack_14d0 = 0x4046cb851eb851ec;
      uStack_14b8 = 0x404bf70a3d70a3d7;
      uStack_14c0 = 0x404291eb851eb852;
      FUN_10725ac68(0x113821db0,&uStack_14c0,&uStack_14d0);
      uRam0000000113821de0 = 0x40514f5c28f5c28f;
      uRam0000000113821dd8 = 0x4044a66666666666;
      func_0x00010002b838(0x113821de8,&DAT_10f408720);
      uStack_14e8 = 0xc04de147ae147ae1;
      uStack_14f0 = 0x402851eb851eb852;
      uStack_14d8 = 0xc052533333333333;
      uStack_14e0 = 0x3fe70a3d70a3d70a;
      FUN_10725ac68(0x113821e00,&uStack_14e0,&uStack_14f0);
      uRam0000000113821e30 = 0xc050b9999999999a;
      uRam0000000113821e28 = 0x4024f5c28f5c28f6;
      func_0x00010002b838(0x113821e38,&DAT_10f408723);
      uStack_1508 = 0x405b55c28f5c28f6;
      uStack_1510 = 0x403759999999999a;
      uStack_14f8 = 0x40598ae147ae147b;
      uStack_1500 = 0x4021333333333333;
      FUN_10725ac68(0x113821e50,&uStack_1500,&uStack_1510);
      uRam0000000113821e80 = 0x405aa851eb851eb8;
      uRam0000000113821e78 = 0x4025a3d70a3d70a4;
      func_0x00010002b838(0x113821e88,&DAT_10f408726);
      uStack_1528 = 0x4064fae147ae147b;
      uStack_1530 = 0xc02d428f5c28f5c3;
      uStack_1518 = 0x4064d428f5c28f5c;
      uStack_1520 = 0xc03099999999999a;
      FUN_10725ac68(0x113821ea0,&uStack_1520,&uStack_1530);
      uRam0000000113821ed0 = 0x40650a3d70a3d70a;
      uRam0000000113821ec8 = 0xc031bd70a3d70a3d;
      func_0x00010002b838(0x113821ed8,&DAT_10f408729);
      uStack_1548 = 0x4041c66666666666;
      uStack_1550 = 0x404043d70a3d70a4;
      uStack_1538 = 0x4041770a3d70a3d7;
      uStack_1540 = 0x403f59999999999a;
      FUN_10725ac68(0x113821ef0,&uStack_1540,&uStack_1550);
      uRam0000000113821f20 = 0x40413c28f5c28f5c;
      uRam0000000113821f18 = 0x403f800000000000;
      func_0x00010002b838(0x113821f28,&DAT_10f40872c);
      uStack_1568 = 0x404a8e147ae147ae;
      uStack_1570 = 0x4033000000000000;
      uStack_1558 = 0x40454ccccccccccd;
      uStack_1560 = 0x40292e147ae147ae;
      FUN_10725ac68(0x113821f40,&uStack_1560,&uStack_1570);
      uRam0000000113821f70 = 0x40461ae147ae147b;
      uRam0000000113821f68 = 0x402eb33333333333;
      func_0x00010002b838(0x113821f78,&DAT_10f40872f);
      uStack_1588 = 0x40406a3d70a3d70a;
      uStack_1590 = 0xc036170a3d70a3d7;
      uStack_1578 = 0x4030570a3d70a3d7;
      uStack_1580 = 0xc04168f5c28f5c29;
      FUN_10725ac68(0x113821f90,&uStack_1580,&uStack_1590);
      uRam0000000113821fc0 = 0x403c07ae147ae148;
      uRam0000000113821fb8 = 0xc03a35c28f5c28f6;
      func_0x00010002b838(0x113821fc8,&DAT_10f408732);
      uStack_15a8 = 0x4040beb851eb851f;
      uStack_15b0 = 0xc0207ae147ae147b;
      uStack_1598 = 0x4035e3d70a3d70a4;
      uStack_15a0 = 0xc031f5c28f5c28f6;
      FUN_10725ac68(0x113821fe0,&uStack_15a0,&uStack_15b0);
      uRam0000000113822010 = 0x403c47ae147ae148;
      uRam0000000113822008 = 0xc02ed70a3d70a3d7;
      func_0x00010002b838(0x113822018,&DAT_10f408735);
      uStack_15c8 = 0x40406ccccccccccd;
      uStack_15d0 = 0xc02f051eb851eb85;
      uStack_15b8 = 0x4039428f5c28f5c3;
      uStack_15c0 = 0xc036451eb851eb85;
      FUN_10725ac68(0x113822030,&uStack_15c0,&uStack_15d0);
      uRam0000000113822060 = 0x403f0ccccccccccd;
      uRam0000000113822058 = 0xc031d47ae147ae14;
      ___cxa_guard_release(0x1136ca1c0);
    }
  }
  return;
}



/* Entry: 10728ef30; end: 10728ef73;  */

long FUN_10728ef30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return param_1;
}



/* Entry: 10728ef74; end: 10728f0c7;  */

void FUN_10728ef74(undefined1 *param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined8 ****ppppuVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *extraout_x8;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined1 auVar10 [16];
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  long lStack_a8;
  undefined1 (*pauStack_a0) [16];
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 6;
  auVar10 = NEON_ext(*param_3,*param_3,8,1);
  uStack_58 = auVar10._8_8_;
  uStack_60 = auVar10._0_4_;
  uStack_5c = auVar10._4_4_;
  func_0x00010787da4c(&uStack_70,&uStack_68,5,1);
  func_0x000104c3365c(&uStack_68);
  uVar3 = uStack_70;
  func_0x000107882368();
  uVar8 = uStack_70;
  if ((uVar3 & 1) != 0) {
    func_0x0001078823ac(&uStack_68,uStack_70);
    uStack_80 = CONCAT44(uStack_60,uStack_64);
    uStack_78 = uStack_5c;
    lVar4 = param_2 + 0x28;
    FUN_10728fa8c(lVar4,&uStack_80);
    if (lVar4 != 0) {
      uVar8 = *(ulong *)(lVar4 + 0x20);
      uVar3 = *(ulong *)(lVar4 + 0x28);
      do {
        if (uVar8 == uVar3) goto LAB_10728f058;
        lVar5 = param_2;
        FUN_10728fb54(param_2,uVar8);
        lVar4 = lVar5 + 0x18;
        func_0x00010786eb68(lVar4,param_3,0);
        uVar8 = uVar8 + 0x18;
      } while ((int)lVar4 == 0);
      func_0x0001002a8308(param_1,lVar5);
      goto LAB_10728f060;
    }
  }
LAB_10728f058:
  *param_1 = 0;
  param_1[0x18] = 0;
LAB_10728f060:
  puVar6 = &uStack_70;
  func_0x000107880dc4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_70;
  func_0x000107880dc4();
  func_0x00010728fc64();
  pcStack_88 = FUN_10728f0c8;
  uStack_b0 = uVar8;
  lStack_a8 = param_2;
  pauStack_a0 = param_3;
  puStack_98 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pppuStack_e8);
  ppppuVar9 = (undefined8 ****)pppuStack_e8;
  ppppuVar1 = (undefined8 ****)((long)pppuStack_e8 + lStack_e0);
  if (-1 < (long)uStack_d8) {
    ppppuVar9 = &pppuStack_e8;
    ppppuVar1 = (undefined8 ****)((long)&pppuStack_e8 + (uStack_d8 >> 0x38));
  }
  for (; ppppuVar9 != ppppuVar1; ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1)) {
    uVar2 = *(undefined1 *)ppppuVar9;
    ___toupper();
    *(undefined1 *)ppppuVar9 = uVar2;
  }
  lStack_c8 = lStack_e0;
  pppuStack_d0 = pppuStack_e8;
  uStack_c0 = uStack_d8;
  lStack_e0 = 0;
  uStack_d8 = 0;
  pppuStack_e8 = (undefined8 ***)0x0;
  FUN_10728fb7c(puVar7,&pppuStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_e8);
  if (puVar7 == (ulong *)0x0) {
    *(undefined1 *)extraout_x8 = 0;
  }
  else {
    uVar8 = puVar7[0xd];
    extraout_x8[1] = puVar7[0xe];
    *extraout_x8 = uVar8;
  }
  *(bool *)(extraout_x8 + 2) = puVar7 != (ulong *)0x0;
  return;
}



/* Entry: 10728f0c8; end: 10728f1b3;  */

void FUN_10728f0c8(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 **ppuStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 **ppuStack_50;
  long lStack_48;
  ulong uStack_40;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_68);
  pppuVar3 = (undefined8 ***)ppuStack_68;
  pppuVar1 = (undefined8 ***)((long)ppuStack_68 + lStack_60);
  if (-1 < (long)uStack_58) {
    pppuVar3 = &ppuStack_68;
    pppuVar1 = (undefined8 ***)((long)&ppuStack_68 + (uStack_58 >> 0x38));
  }
  for (; pppuVar3 != pppuVar1; pppuVar3 = (undefined8 ***)((long)pppuVar3 + 1)) {
    uVar2 = *(undefined1 *)pppuVar3;
    ___toupper();
    *(undefined1 *)pppuVar3 = uVar2;
  }
  lStack_48 = lStack_60;
  ppuStack_50 = ppuStack_68;
  uStack_40 = uStack_58;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuStack_68 = (undefined8 **)0x0;
  FUN_10728fb7c(param_2,&ppuStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_68);
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    param_1[1] = *(undefined8 *)(param_2 + 0x70);
    *param_1 = uVar4;
  }
  *(bool *)(param_1 + 2) = param_2 != 0;
  return;
}



/* Entry: 10728f1b4; end: 10728f1e7;  */

undefined8 FUN_10728f1b4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10728f1e8(&uStack_28);
  return param_1;
}



/* Entry: 10728f1e8; end: 10728f1ff;  */

void FUN_10728f1e8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10728f200; end: 10728f287;  */

long FUN_10728f200(long param_1)

{
  func_0x00010728f228(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10728f288(param_1,0);
  return param_1;
}



/* Entry: 10728f288; end: 10728f29f;  */

void FUN_10728f288(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10728f2a0; end: 10728f34f;  */

long FUN_10728f2a0(long param_1)

{
  func_0x00010728f2c8(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10728f350(param_1,0);
  return param_1;
}



/* Entry: 10728f350; end: 10728f367;  */

void FUN_10728f350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10728f368; end: 10728f38b;  */

long FUN_10728f368(long param_1)

{
  func_0x00010728fd24();
  FUN_10728f38c();
  return param_1 + 0x28;
}



/* Entry: 10728f38c; end: 10728f6a7;  */

undefined1  [16] FUN_10728f38c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar8;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  undefined8 *puVar12;
  undefined8 *unaff_x25;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  func_0x00010728fd9c();
  func_0x000100102e7c();
  puVar12 = (undefined8 *)unaff_x19[1];
  if (puVar12 != (undefined8 *)0x0) {
    uVar13 = (long)puVar12 - 1;
    if (((ulong)puVar12 & uVar13) == 0) {
      unaff_x25 = (undefined8 *)(uVar13 & (ulong)param_1);
    }
    else {
      unaff_x25 = param_1;
      if (puVar12 <= param_1) {
        func_0x00010728fd90();
      }
    }
    puVar11 = *(undefined8 **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_10728f440;
          puVar6 = (undefined8 *)puVar11[1];
          if (puVar6 != param_1) break;
          puVar6 = puVar11 + 2;
          func_0x0001000e107c();
          if (((ulong)puVar6 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10728f680;
          }
        }
        if (((ulong)puVar12 & uVar13) == 0) {
          puVar6 = (undefined8 *)((ulong)puVar6 & uVar13);
        }
        else if (puVar12 <= puVar6) {
          uVar1 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar6 / (ulong)puVar12;
          }
          puVar6 = (undefined8 *)((long)puVar6 - uVar1 * (long)puVar12);
        }
      } while (puVar6 == unaff_x25);
    }
  }
LAB_10728f440:
  puVar6 = (undefined8 *)*unaff_x22;
  puVar11 = (undefined8 *)0x78;
  __Znwm();
  puVar4 = puVar11 + 2;
  *puVar11 = 0;
  puVar11[1] = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4,puVar6);
  puVar11[10] = 0;
  puVar11[9] = 0;
  puVar11[8] = 0;
  puVar11[7] = 0;
  puVar11[0xc] = 0;
  puVar11[0xb] = 0;
  puVar11[6] = 0;
  puVar11[5] = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  puVar11[9] = 0xc066800000000000;
  puVar11[8] = 0xc056800000000000;
  puVar11[0xb] = 0x4066800000000000;
  puVar11[10] = 0x4056800000000000;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  func_0x00010728fd7c();
  if ((puVar12 != (undefined8 *)0x0) && (puVar10 = unaff_x25, fVar14 <= fVar15 * (float)puVar12))
  goto LAB_10728f624;
  func_0x00010728fd0c();
  bVar3 = puVar12 == (undefined8 *)0x3;
  func_0x00010728fcac();
  if (bVar3) {
    puVar6 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar6 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar4 = puVar6;
  }
  puVar12 = (undefined8 *)unaff_x19[1];
  bVar3 = puVar12 <= puVar6;
  if (bVar3 && puVar6 != puVar12) {
LAB_10728f4f0:
    if ((ulong)puVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10728f694);
      (*pcVar2)();
    }
    __Znwm((long)puVar6 << 3);
    FUN_10728f6a8();
    unaff_x19[1] = (long)puVar6;
    lVar7 = *unaff_x19;
    for (puVar12 = (undefined8 *)0x0; puVar6 != puVar12; puVar12 = (undefined8 *)((long)puVar12 + 1)
        ) {
      *(undefined8 *)(lVar7 + (long)puVar12 * 8) = 0;
    }
    puVar12 = puVar6;
    if (unaff_x19[2] != 0) {
      func_0x00010728fd68();
      func_0x00010728fd54();
      lVar7 = extraout_x8_00;
      uVar13 = extraout_x9;
      plVar9 = extraout_x10;
      puVar4 = extraout_x11;
      while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
        puVar10 = (undefined8 *)plVar9[1];
        if (((ulong)puVar6 & uVar13) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar13);
        }
        else if (puVar6 <= puVar10) {
          uVar1 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar10 / (ulong)puVar6;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar1 * (long)puVar6);
        }
        if (puVar10 != puVar4) {
          if (*(long *)(lVar7 + (long)puVar10 * 8) == 0) {
            *(long **)(lVar7 + (long)puVar10 * 8) = plVar8;
            puVar4 = puVar10;
          }
          else {
            func_0x00010728fc8c();
            lVar7 = extraout_x8_01;
            uVar13 = extraout_x9_00;
            plVar9 = extraout_x10_00;
            puVar4 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar3) {
    func_0x00010728fcc8();
    if ((bVar3) && (((ulong)puVar12 & (long)puVar12 - 1U) == 0)) {
      func_0x00010728fc6c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (puVar6 <= puVar4) {
      puVar6 = puVar4;
    }
    if (puVar6 < puVar12) {
      if (puVar6 != (undefined8 *)0x0) goto LAB_10728f4f0;
      FUN_10728f6a8();
      unaff_x19[1] = 0;
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)unaff_x19[1];
    }
  }
  if (((ulong)puVar12 & (long)puVar12 - 1U) == 0) {
    puVar10 = (undefined8 *)((long)puVar12 - 1U & (ulong)param_1);
  }
  else {
    puVar10 = param_1;
    if (puVar12 <= param_1) {
      func_0x00010728fd90();
      puVar10 = unaff_x25;
    }
  }
LAB_10728f624:
  puVar6 = *(undefined8 **)(*unaff_x19 + (long)puVar10 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x00010728fcf4();
    if (extraout_x9_01 != 0) {
      puVar6 = *(undefined8 **)(extraout_x9_01 + 8);
      if (((ulong)puVar12 & (long)puVar12 - 1U) == 0) {
        puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar12 - 1U);
      }
      else if (puVar12 <= puVar6) {
        uVar13 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar13 = (ulong)puVar6 / (ulong)puVar12;
        }
        puVar6 = (undefined8 *)((long)puVar6 - uVar13 * (long)puVar12);
      }
      *(undefined8 **)(extraout_x8_02 + (long)puVar6 * 8) = puVar11;
    }
  }
  else {
    *puVar11 = *puVar6;
    *puVar6 = puVar11;
  }
  func_0x00010728fd3c();
  FUN_10728f6c0();
  uVar5 = 1;
LAB_10728f680:
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = puVar11;
  return auVar16;
}



/* Entry: 10728f6a8; end: 10728f6bf;  */

void FUN_10728f6a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10728f6c0; end: 10728f703;  */

long * FUN_10728f6c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010728f304(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10728f704; end: 10728f727;  */

long FUN_10728f704(long param_1)

{
  func_0x00010728fd24();
  FUN_10728f728();
  return param_1 + 0x20;
}



/* Entry: 10728f728; end: 10728fa2f;  */

undefined1  [16] FUN_10728f728(float param_1,float param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long *extraout_x10;
  long *plVar7;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar8;
  long *extraout_x11_00;
  long *plVar9;
  long *unaff_x19;
  long *plVar10;
  long *unaff_x22;
  long *plVar11;
  long *unaff_x25;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  func_0x00010728fd9c();
  func_0x00010784b234();
  plVar11 = (long *)unaff_x19[1];
  if (plVar11 != (long *)0x0) {
    uVar12 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar12) == 0) {
      unaff_x25 = (long *)((long)plVar11 + 0x7fffffffffffffffU & (ulong)param_3);
    }
    else {
      unaff_x25 = param_3;
      if (plVar11 <= param_3) {
        func_0x00010728fd90();
      }
    }
    plVar10 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10728f7e4;
          plVar5 = (long *)plVar10[1];
          if (plVar5 != param_3) break;
          plVar5 = plVar10 + 2;
          FUN_10726b840();
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10728fa0c;
          }
        }
        if (((ulong)plVar11 & uVar12) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar12);
        }
        else if (plVar11 <= plVar5) {
          uVar1 = 0;
          if (plVar11 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar11;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar11);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_10728f7e4:
  plVar10 = (long *)0x38;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = (long)param_3;
  lVar6 = *(long *)*unaff_x22;
  *(undefined4 *)(plVar10 + 3) = *(undefined4 *)((long *)*unaff_x22 + 1);
  plVar10[2] = lVar6;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[4] = 0;
  plVar5 = plVar10;
  func_0x00010728fd7c();
  if ((plVar11 != (long *)0x0) && (plVar8 = unaff_x25, param_1 <= param_2 * (float)plVar11))
  goto LAB_10728f9b0;
  func_0x00010728fd0c();
  bVar3 = plVar11 == (long *)0x3;
  func_0x00010728fcac();
  if (bVar3) {
    unaff_x22 = (long *)0x2;
  }
  else if (((ulong)unaff_x22 & extraout_x8) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = unaff_x22;
  }
  plVar11 = (long *)unaff_x19[1];
  bVar3 = plVar11 <= unaff_x22;
  if (bVar3 && unaff_x22 != plVar11) {
LAB_10728f874:
    if ((ulong)unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10728fa20);
      (*pcVar2)();
    }
    __Znwm((long)unaff_x22 << 3);
    FUN_10728fa30();
    unaff_x19[1] = (long)unaff_x22;
    lVar6 = *unaff_x19;
    for (plVar11 = (long *)0x0; unaff_x22 != plVar11; plVar11 = (long *)((long)plVar11 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar11 * 8) = 0;
    }
    plVar11 = unaff_x22;
    if (unaff_x19[2] != 0) {
      func_0x00010728fd68();
      func_0x00010728fd54();
      lVar6 = extraout_x8_00;
      uVar12 = extraout_x9;
      plVar5 = extraout_x10;
      plVar8 = extraout_x11;
      while (plVar7 = plVar5, plVar5 = (long *)*plVar7, plVar5 != (long *)0x0) {
        plVar9 = (long *)plVar5[1];
        if (((ulong)unaff_x22 & uVar12) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar12);
        }
        else if (unaff_x22 <= plVar9) {
          uVar1 = 0;
          if (unaff_x22 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)unaff_x22;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)unaff_x22);
        }
        if (plVar9 != plVar8) {
          if (*(long *)(lVar6 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar9 * 8) = plVar7;
            plVar8 = plVar9;
          }
          else {
            func_0x00010728fc8c();
            lVar6 = extraout_x8_01;
            uVar12 = extraout_x9_00;
            plVar5 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar3) {
    func_0x00010728fcc8();
    if ((bVar3) && (((ulong)plVar11 & (long)plVar11 - 1U) == 0)) {
      func_0x00010728fc6c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (unaff_x22 <= plVar5) {
      unaff_x22 = plVar5;
    }
    if (unaff_x22 < plVar11) {
      if (unaff_x22 != (long *)0x0) goto LAB_10728f874;
      FUN_10728fa30();
      unaff_x19[1] = 0;
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
    plVar8 = (long *)((long)plVar11 + 0x7fffffffffffffffU & (ulong)param_3);
  }
  else {
    plVar8 = param_3;
    if (plVar11 <= param_3) {
      func_0x00010728fd90();
      plVar8 = unaff_x25;
    }
  }
LAB_10728f9b0:
  plVar5 = *(long **)(*unaff_x19 + (long)plVar8 * 8);
  if (plVar5 == (long *)0x0) {
    func_0x00010728fcf4();
    if (extraout_x9_01 != 0) {
      plVar5 = *(long **)(extraout_x9_01 + 8);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar5) {
        uVar12 = 0;
        if (plVar11 != (long *)0x0) {
          uVar12 = (ulong)plVar5 / (ulong)plVar11;
        }
        plVar5 = (long *)((long)plVar5 - uVar12 * (long)plVar11);
      }
      *(long **)(extraout_x8_02 + (long)plVar5 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar5;
    *plVar5 = (long)plVar10;
  }
  func_0x00010728fd3c();
  FUN_10728fa48();
  uVar4 = 1;
LAB_10728fa0c:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar10;
  return auVar13;
}



/* Entry: 10728fa30; end: 10728fa47;  */

void FUN_10728fa30(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10728fa48; end: 10728fa8b;  */

long * FUN_10728fa48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001000e30f4(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10728fa8c; end: 10728fb53;  */

long FUN_10728fa8c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010784b234();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_10726b840(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10728fb54; end: 10728fb7b;  */

long FUN_10728fb54(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  
  FUN_10728fb7c();
  if (param_1 != 0) {
    return param_1 + 0x28;
  }
  plVar5 = (long *)&UNK_10f408738;
  func_0x000104c03f28();
  plVar6 = (long *)plVar5[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = plVar5 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    puVar7 = (undefined *)((long)plVar6 + -1);
    if (((ulong)plVar6 & (ulong)puVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & (ulong)puVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*plVar5 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & (ulong)puVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (ulong)puVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10728fb7c; end: 10728fc43;  */

long FUN_10728fb7c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10728fc44; end: 10728fdaf;  */

void FUN_10728fc44(void)

{
  return;
}



/* Entry: 10728fdb0; end: 10728fdff;  */

void FUN_10728fdb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *puVar1 = &PTR_FUN_110997dd0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  FUN_1072902b4(&uStack_30);
  return;
}



/* Entry: 10728fe00; end: 10728fe03;  */

undefined8 * FUN_10728fe00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997dd0;
  FUN_1072902b4(param_1 + 1);
  return param_1;
}



/* Entry: 10728fe04; end: 10728fe17;  */

void FUN_10728fe04(void)

{
  FUN_10728ffc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10728fe18; end: 10728fe63;  */

ulong FUN_10728fe18(ulong param_1,long *param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plStack_80;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  func_0x00010729034c();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_110997e58;
  func_0x000107290398();
  func_0x000107290360();
  func_0x0001072902ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010729032c();
  func_0x00010729030c();
  func_0x0001072902dc();
  if (plStack_80 != (long *)0x0) {
    plVar1 = param_2 + 0x18;
    param_2 = plStack_80;
    (**(code **)(*plStack_80 + 8))(plStack_80,*plVar1);
  }
  func_0x000107290338();
  return (ulong)((uint)(plStack_80 != (long *)0x0) & (uint)param_2);
}



/* Entry: 10728fe64; end: 10728febf;  */

uint FUN_10728fe64(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plStack_30;
  
  FUN_1072902dc();
  if (plStack_30 != (long *)0x0) {
    plVar1 = param_2 + 0x18;
    param_2 = plStack_30;
    (**(code **)(*plStack_30 + 8))(plStack_30,*plVar1);
  }
  func_0x000107290338();
  return (uint)(plStack_30 != (long *)0x0) & (uint)param_2;
}



/* Entry: 10728fec0; end: 10728fec3;  */

void FUN_10728fec0(void)

{
  return;
}



/* Entry: 10728fec4; end: 10728ff0f;  */

ulong FUN_10728fec4(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint unaff_w20;
  long *plStack_d0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_80;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  func_0x00010729034c();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_110997ee8;
  func_0x000107290398();
  func_0x000107290360();
  func_0x0001072902ec();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729032c();
    func_0x00010729030c();
    func_0x00010729034c();
    ppuStack_98 = &PTR_DAT_110997f68;
    pppuStack_80 = &ppuStack_98;
    uStack_90 = param_2;
    func_0x000107290398();
    func_0x000107290360();
    func_0x0001072902ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010729032c();
      func_0x00010729030c();
      func_0x0001072902dc();
      if (plStack_d0 != (long *)0x0) {
        plVar2 = plStack_d0;
        (**(code **)(*plStack_d0 + 0x20))(plStack_d0);
        unaff_w20 = (uint)plVar2;
      }
      func_0x000107290338();
      uVar1 = 2;
      if (plStack_d0 != (long *)0x0) {
        uVar1 = unaff_w20;
      }
      return (ulong)(uVar1 & 0xff);
    }
  }
  return param_1;
}



/* Entry: 10728ff10; end: 10728ff5b;  */

ulong FUN_10728ff10(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint unaff_w20;
  long *plStack_80;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  
  func_0x00010729034c();
  ppuStack_48 = &PTR_DAT_110997f68;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  func_0x000107290398();
  func_0x000107290360();
  func_0x0001072902ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010729032c();
  func_0x00010729030c();
  func_0x0001072902dc();
  if (plStack_80 != (long *)0x0) {
    plVar2 = plStack_80;
    (**(code **)(*plStack_80 + 0x20))(plStack_80);
    unaff_w20 = (uint)plVar2;
  }
  func_0x000107290338();
  uVar1 = 2;
  if (plStack_80 != (long *)0x0) {
    uVar1 = unaff_w20;
  }
  return (ulong)(uVar1 & 0xff);
}



/* Entry: 10728ff5c; end: 10728ffb3;  */

uint FUN_10728ff5c(void)

{
  uint uVar1;
  long *plVar2;
  uint unaff_w20;
  undefined8 uStack_30;
  
  FUN_1072902dc();
  if (uStack_30 != (long *)0x0) {
    plVar2 = uStack_30;
    (**(code **)(*uStack_30 + 0x20))(uStack_30);
    unaff_w20 = (uint)plVar2;
  }
  func_0x000107290338();
  uVar1 = 2;
  if (uStack_30 != (long *)0x0) {
    uVar1 = unaff_w20;
  }
  return uVar1 & 0xff;
}



/* Entry: 10728ffb4; end: 10728ffc3;  */

undefined8 FUN_10728ffb4(void)

{
  return 1;
}



/* Entry: 10728ffc4; end: 10728ffef;  */

undefined8 * FUN_10728ffc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997dd0;
  FUN_1072902b4(param_1 + 1);
  return param_1;
}



/* Entry: 10728fff0; end: 10729003f;  */

void FUN_10728fff0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_30;
  
  FUN_1072902dc();
  if (uStack_30 != 0) {
    if (*(long **)(param_2 + 0x18) == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107290038);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_2 + 0x18) + 0x30))();
  }
  func_0x000107290338();
  return;
}


