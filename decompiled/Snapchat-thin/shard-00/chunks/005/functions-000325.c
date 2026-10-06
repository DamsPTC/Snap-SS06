/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006c8130; end: 1006c82b3;  */

void FUN_1006c8130(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_6;
  lVar1 = 0x112f5cad0;
  FUN_1000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uVar2 = 0x112ef6f40;
  FUN_1000285a8(0x112ef6f40,&UNK_10db25c10);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  uVar2 = 0x112ef6f68;
  FUN_1000285a8(0x112ef6f68,&UNK_10db911f0);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = param_3;
  uVar2 = 0x112ef6f38;
  FUN_1000285a8(0x112ef6f38,&UNK_10dbb7710);
  *(undefined8 *)(lVar1 + 0x90) = uVar2;
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  *(undefined8 *)(lVar1 + 0x78) = param_4;
  uVar2 = 0x112ef6f90;
  FUN_1000285a8(0x112ef6f90,&UNK_10db25c60);
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  *(undefined8 *)(lVar1 + 0xa0) = param_5;
  *(undefined8 *)(lVar1 + 0xb8) = uVar2;
  *(undefined8 *)(lVar1 + 0xc0) = uVar4;
  *(undefined8 *)(lVar1 + 0xe0) = uVar4;
  *(undefined8 **)(lVar1 + 200) = param_6;
  lVar3 = lVar1;
  FUN_1006c82b4();
  func_0x000107c61588(lVar1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar2 = 0x112f36640;
  FUN_1000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),5,uVar2);
  FUN_1006a0f38(0);
  func_0x000107c610f8();
  func_0x0001006c83fc();
  *param_1 = lVar3;
  return;
}



/* Entry: 1006c82b4; end: 1006c83ab;  */

undefined * FUN_1006c82b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    FUN_1000285a8(0x112f36630,&UNK_10dbf88a0);
    puVar2 = puVar5;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    do {
      uVar4 = 0;
      FUN_1006c83ac(param_1);
      uVar3 = uStack_78;
      FUN_1000a7158();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c83a8);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_78;
      FUN_100102924(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c83ac);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 1006c83ac; end: 1006c8447;  */

undefined8 FUN_1006c83ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f36640;
  FUN_1000285a8(0x112f36640,&UNK_10dbb6990);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1006c8448; end: 1006c848b;  */

void FUN_1006c8448(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c848c; end: 1006c8493;  */

void FUN_1006c848c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c8494; end: 1006c84e7;  */

void FUN_1006c8494(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c84e8; end: 1006c84ef;  */

void FUN_1006c84e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001006927fc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1006c8558();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c84f0; end: 1006c8557;  */

void FUN_1006c84f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001006927fc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1006c8558();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c8558; end: 1006c863f;  */

void FUN_1006c8558(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1006c8640(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  FUN_1006c8750(param_1,uVar4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c863c);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x28) = lVar3;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c8640);
  (*pcVar1)();
}



/* Entry: 1006c8640; end: 1006c867f;  */

void FUN_1006c8640(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8ef0);
  return;
}



/* Entry: 1006c8680; end: 1006c874f;  */

void FUN_1006c8680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  func_0x0001006c8660(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_100694390(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001006c8850();
  func_0x000107c42c20(param_1);
  func_0x00010069281c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  uVar3 = uVar1;
  FUN_1006c88b4();
  func_0x000107c42c20(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1006c8750; end: 1006c87a7;  */

undefined8 FUN_1006c8750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1006c8680(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1006c87a8; end: 1006c88b3; -[_TtC13LensVenueImpl16LensVenueManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c87a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ef8f50) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef8f58);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112ef8f60;
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar2) = uVar4;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112ef8f48) = puVar5;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006c88b4; end: 1006c894b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c88b4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11302ab28) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006c894c; end: 1006c89b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c894c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100342dd8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f9b1c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1006c89b4; end: 1006c8a1f;  */

void FUN_1006c89b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e5f078,&UNK_10da66a88);
  func_0x000107c613fc();
  puVar1 = &UNK_10219cb08;
  FUN_1000841f8(&UNK_10219cb08,0);
  FUN_100084214(&UNK_10da66a60,0x26,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1006c8a20; end: 1006c8a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8a20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar4 = &lStack_50;
  FUN_1005c31b8(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar3 = lVar2;
  func_0x0001000ad7c4();
  *(long *)(lVar2 + _DAT_112ee91e8) = lVar3;
  func_0x0001000ad7c4();
  *(long *)(lVar2 + _DAT_112ee91f0) = lVar3;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1006c8a28; end: 1006c8aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8a28(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  FUN_1005c31b8();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112ee91e8) = lVar2;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112ee91f0) = lVar2;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 1006c8ab0; end: 1006c8adb;  */

void FUN_1006c8ab0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c8adc; end: 1006c8af3;  */

void FUN_1006c8adc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1006c8af4; end: 1006c8b13;  */

void FUN_1006c8af4(void)

{
  func_0x000107c61168(&PTR_PTR_112884d20);
  return;
}



/* Entry: 1006c8b14; end: 1006c9557; -[SCCameraPreviewPresenterServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8b14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
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
  undefined8 uVar57;
  long lVar58;
  long lVar59;
  undefined8 uStack_258;
  undefined8 uStack_170;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  
  puVar1 = PTR_PTR_1126c8100;
  func_0x000107c610f4();
  lVar40 = param_1;
  FUN_1006c9558(param_1);
  func_0x000107c61180();
  lVar2 = lVar40;
  func_0x000107c407b0();
  func_0x000107c61180();
  func_0x000107c461d8(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar40);
  puVar3 = PTR_PTR_1126c8108;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11273f7a8;
    func_0x000107c61148();
  }
  lVar2 = lVar40;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_1006c9558();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c407b0();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273f838);
  }
  func_0x000107c61174();
  puVar7 = PTR_PTR_1126b7008;
  func_0x000107c610fc();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11273f7b8;
    func_0x000107c61148();
  }
  lVar8 = lVar41;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_11273f7bc;
    func_0x000107c61148();
  }
  lVar9 = lVar42;
  func_0x000107c41930();
  func_0x000107c61180();
  lVar10 = param_1;
  FUN_1006c96c4();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  lVar12 = param_1;
  FUN_1006c96c4();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c3f598();
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_1006c96c4();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  lVar16 = param_1;
  FUN_1006c96c4();
  func_0x000107c61180();
  lVar17 = lVar16;
  func_0x000107c418b8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11273f7d4;
    func_0x000107c61148();
  }
  lVar18 = lVar43;
  func_0x000107c4f124();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_d0 = 0;
    lVar44 = 0;
  }
  else {
    uStack_d0 = param_1 + _DAT_11273f7c0;
    func_0x000107c61148();
    lVar44 = param_1 + _DAT_11273f7d8;
    func_0x000107c61148();
  }
  lVar19 = lVar44;
  func_0x000107c4b254();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11273f7c8;
    func_0x000107c61148();
  }
  lVar20 = lVar45;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_e8 = 0;
    lVar46 = 0;
  }
  else {
    uStack_e8 = param_1 + _DAT_11273f7cc;
    func_0x000107c61148();
    lVar46 = param_1 + _DAT_11273f7d0;
    func_0x000107c61148();
  }
  lVar21 = lVar46;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar22 = param_1;
  FUN_1006c9558();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c5b18c();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_f8 = 0;
    lVar47 = 0;
  }
  else {
    uStack_f8 = param_1 + _DAT_11273f7dc;
    func_0x000107c61148();
    lVar47 = param_1 + _DAT_11273f7ac;
    func_0x000107c61148();
  }
  lVar24 = lVar47;
  func_0x000107c3dfac();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61174(0);
    uStack_148 = 0;
    uStack_118 = 0;
    uStack_108 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    lVar48 = 0;
  }
  else {
    uStack_128 = param_1 + _DAT_11273f7e0;
    func_0x000107c61148();
    uStack_108 = param_1 + _DAT_11273f7e4;
    func_0x000107c61148();
    uStack_138 = param_1 + _DAT_11273f7e8;
    func_0x000107c61148();
    uStack_118 = param_1 + _DAT_11273f7ec;
    func_0x000107c61148();
    uStack_130 = *(undefined8 *)(param_1 + _DAT_11273f83c);
    func_0x000107c61174();
    uStack_148 = param_1 + _DAT_11273f7a4;
    func_0x000107c61148();
    lVar48 = param_1 + _DAT_11273f7f0;
    func_0x000107c61148();
  }
  lVar25 = lVar48;
  func_0x000107c4b4b4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_140 = 0;
    lVar49 = 0;
  }
  else {
    uStack_140 = param_1 + _DAT_11273f7f8;
    func_0x000107c61148();
    lVar49 = param_1 + _DAT_11273f824;
    func_0x000107c61148();
  }
  lVar26 = lVar49;
  func_0x000107c4dfdc();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_150 = 0;
    lVar50 = 0;
  }
  else {
    uStack_150 = param_1 + _DAT_11273f800;
    func_0x000107c61148();
    lVar50 = param_1 + _DAT_11273f7f4;
    func_0x000107c61148();
  }
  lVar27 = lVar50;
  func_0x000107c3ce64();
  func_0x000107c61180();
  lVar28 = param_1;
  FUN_1006c9728();
  func_0x000107c61180();
  lVar29 = lVar28;
  func_0x000107c51e8c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_11273f7fc;
    func_0x000107c61148();
  }
  lVar30 = lVar51;
  func_0x000107c4cf64();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_170 = 0;
    uVar57 = 0;
  }
  else {
    uStack_170 = param_1 + _DAT_11273f820;
    func_0x000107c61148();
    uVar57 = *(undefined8 *)(param_1 + _DAT_11273f840);
  }
  func_0x000107c61174(uVar57);
  lVar31 = param_1;
  FUN_1006c975c();
  func_0x000107c61180();
  lVar32 = lVar31;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar33 = param_1;
  FUN_1006c975c();
  func_0x000107c61180();
  lVar34 = lVar33;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_11273f80c;
    func_0x000107c61148();
  }
  lVar35 = lVar52;
  func_0x000107c5c800();
  func_0x000107c61180();
  lVar36 = param_1;
  FUN_1006c9728();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar56 = 0;
    uStack_258 = 0;
    lVar53 = 0;
  }
  else {
    uStack_258 = param_1 + _DAT_11273f814;
    func_0x000107c61148();
    lVar56 = param_1 + _DAT_11273f818;
    func_0x000107c61148();
    lVar53 = param_1 + _DAT_11273f808;
    func_0x000107c61148();
  }
  lVar37 = lVar53;
  func_0x000107c3d0d8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11273f81c;
    func_0x000107c61148();
  }
  lVar38 = lVar54;
  func_0x000107c4b534();
  func_0x000107c61180();
  lVar39 = lVar38;
  func_0x000107c453ac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar55 = 0;
    lVar58 = 0;
    lVar59 = 0;
    param_1 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_11273f828;
    func_0x000107c61148();
    lVar59 = param_1 + _DAT_11273f82c;
    func_0x000107c61148();
    lVar55 = param_1 + _DAT_11273f830;
    func_0x000107c61148();
    param_1 = param_1 + _DAT_11273f834;
    func_0x000107c61148();
  }
  func_0x000107c49334(puVar3,param_2,lVar2,lVar5,puVar1,uVar6,puVar7,lVar8,lVar9,lVar11,lVar13,
                      lVar15,lVar17,lVar18,uStack_d0,lVar19,lVar20,uStack_e8,lVar21,lVar23,uStack_f8
                      ,lVar24,uStack_128,uStack_108,uStack_138,uStack_118,uStack_130,uStack_148,
                      lVar25,uStack_140,lVar26,uStack_150,lVar27,lVar29,lVar30,uStack_170,uVar57,
                      lVar32,lVar34,lVar35,lVar36,uStack_258,lVar56,lVar37,lVar39,lVar58,lVar59,
                      lVar55,param_1);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(lVar59);
  func_0x000107c61170(lVar58);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar54);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar53);
  func_0x000107c61170(lVar56);
  func_0x000107c61170(uStack_258);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar52);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(uStack_130);
  func_0x000107c61170(uStack_170);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(uStack_150);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(uStack_140);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(uStack_118);
  func_0x000107c61170(uStack_138);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(uStack_128);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar45);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar44);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar43);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar42);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar40);
  puVar7 = PTR_PTR_1126c8110;
  func_0x000107c610f4(PTR_PTR_1126c8110);
  func_0x000107c480b4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1006c9558; end: 1006c957b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9558(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273f7b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c957c; end: 1006c9583; -[SCCameraFeatureLoggingServices coreCameraLogger] */

undefined8 FUN_1006c957c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006c9584; end: 1006c960f; -[SCPreviewTransitionController initWithCoreCameraLogger:] */

undefined1 * FUN_1006c9584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efc40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c8238;
    func_0x000107c610f4();
    func_0x000107c456a4();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c9610; end: 1006c96c3; -[SCPreviewTransitionDefaultAnimator initWithAnimatorDelegate:transitionDelegate:coreCameraLogger:] */

undefined1 *
FUN_1006c9610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126efc48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c96c4; end: 1006c96e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c96c4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273f7c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c96e8; end: 1006c96f7; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices deviceCapacityAnalyzer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c96e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f98));
  return;
}



/* Entry: 1006c96f8; end: 1006c96ff; -[SCPreviewFilterDataProviderServices previewFilterDataProviderFactory] */

undefined8 FUN_1006c96f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006c9700; end: 1006c9707; -[SCCameraFeatureLoggingServices snapCreationLogger] */

undefined8 FUN_1006c9700(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006c9708; end: 1006c9717; -[_TtC20SCLensTinselServices20SCLensTinselServices lensTinselExternalContentRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034728));
  return;
}



/* Entry: 1006c9718; end: 1006c9727; -[_TtC33GenerativeAILensRemoteApiServices33GenerativeAILensRemoteApiServices aILensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e790));
  return;
}



/* Entry: 1006c9728; end: 1006c974b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9728(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273f810);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c974c; end: 1006c975b; -[_TtC28MiniCameraNavigationServices32MiniCameraTrayNavigationServices miniCameraTrayContainerProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c974c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe9600));
  return;
}



/* Entry: 1006c975c; end: 1006c977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c975c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273f804);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c9780; end: 1006c978f; -[_TtC28CameraModeActivationServices28CameraModeActivationServices activationControllerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe9ea0));
  return;
}



/* Entry: 1006c9790; end: 1006c979f; -[SCCameraUIScopedLensVenueServices lensVenueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c9790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302aba0));
  return;
}



/* Entry: 1006c97a0; end: 1006c97bf; -[LensVenueServices infoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c97a0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302ab28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c97c0; end: 1006ca1e7; -[SCCameraPreviewPresenterImpl initWithUserSession:coreCameraLogger:previewTransitionController:sendflowScopeExposer:grapheneLogger:snapchattersDataFetcher:deviceMotionManager:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:deviceCapacityAnalyzer:previewFilterDataProviderFactory:cameraConfigurationServices:legacyLensLogger:circumstanceEngine:complianceEngine:appStartExperimentReader:cameraSnapCreationLogger:cameraSnapModelServices:appLifecycleEvent:nightModeServices:lensPreviewConfiguringServices:previewABServices:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:lensTinselRegistrator:deckServices:checkInOptionFetcher:contentPostSendUpsellServices:aiLensDataProvider:sendToFeedLogger:miniCameraContainerProvider:mainTabNavigationServices:storyAutoSavingScopeExposer:locationProvider:userLocationPermissionsManager:temporaryFileWriter:friendsFeedLoggingServices:conversationIdServices:lensPlusServices:cameraModeActivationController:lensVenueInfoProvider:snapDocEditorServices:ucoServices:sendFlowScopeBuilderServices:bitmojiLensContextServices:] */

undefined8 *
FUN_1006c97c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174();
  puStack_70 = PTR_PTR_1126efc20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_6);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xd,param_13);
    func_0x000107c611a0(puVar1 + 0xe,param_23);
    func_0x000107c61144(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c8118;
    func_0x000107c610f4();
    func_0x000107c45c28();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d038(puVar1[0x1e]);
    puVar3 = PTR_PTR_1126c8120;
    func_0x000107c610f4();
    func_0x000107c45c24();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d038(puVar1[0x1f]);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xc,param_12);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_48;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    func_0x000107c61170(uVar2);
    uVar2 = param_32;
    func_0x000107c5e8cc();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = puVar1[0x24];
    puVar1[0x24] = uVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_40;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x2e);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_45;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_49);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_49;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
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



/* Entry: 1006ca1e8; end: 1006ca2a7; -[SCCameraPreviewTinselRegistrator initWithCameraPreviewEventsObservable:lensTinselExternalContentRegistrator:] */

undefined1 *
FUN_1006ca1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126efc58;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ca2a8; end: 1006ca34f; -[SCCameraPreviewTinselRegistrator activate] */

void FUN_1006ca2a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4db94(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1006ca350; end: 1006ca40f; -[SCCameraPreviewNavigationEventsLensLoggerTracker initWithCameraPreviewEventsObservable:lensPageLogger:] */

undefined1 *
FUN_1006ca350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126efc10;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ca410; end: 1006ca4b7; -[SCCameraPreviewNavigationEventsLensLoggerTracker activate] */

void FUN_1006ca410(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4db94(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1006ca4b8; end: 1006ca4c7; -[_TtC29ContentPostSendUpsellServices29ContentPostSendUpsellServices workflowService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ca4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fae090));
  return;
}



/* Entry: 1006ca4c8; end: 1006ca827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ca4c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_98;
  long lStack_90;
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
  lVar3 = 0;
  func_0x0001006e2530();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112e9c428) = 0;
  *(undefined8 *)(lVar4 + _DAT_112e9c430) = 0;
  *(undefined8 *)(lVar4 + _DAT_112e9c438) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e9c440);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e9c448);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_1134bad10;
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar4 + lVar2,1,1,lVar5);
  func_0x000107c61614(lVar4 + _DAT_1134bad18,0);
  *(undefined8 *)(lVar4 + _DAT_112e9c450) = uStack_68;
  *(undefined8 *)(lVar4 + _DAT_112e9c458) = uStack_70;
  *(undefined8 *)(lVar4 + _DAT_112e9c460) = uStack_78;
  *(undefined8 *)(lVar4 + _DAT_112e9c468) = uStack_80;
  *(undefined8 *)(lVar4 + _DAT_112e9c470) = uStack_88;
  plVar6 = &lStack_98;
  lStack_98 = lVar4;
  lStack_90 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1006ca828; end: 1006ca82b;  */

void FUN_1006ca828(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006ca82c; end: 1006ca86f;  */

void FUN_1006ca82c(void)

{
  long unaff_x20;
  
  func_0x0001006ca660(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1006ca870; end: 1006ca873;  */

void FUN_1006ca870(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006ca874; end: 1006ca917;  */

void FUN_1006ca874(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006ca918; end: 1006ca91f;  */

void FUN_1006ca918(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x1a8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ca920; end: 1006ca973;  */

void FUN_1006ca920(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x1a8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ca974; end: 1006cc847;  */

void FUN_1006ca974(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long lVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100083b20(&uStack_1d0);
  FUN_100083b20(&uStack_1d8);
  FUN_100083b20(&uStack_1e0);
  FUN_100083b20(&uStack_1e8);
  FUN_100083b20(&uStack_1f0);
  FUN_1002c9a54();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  *(undefined8 *)(param_2 + 0xe8) = uStack_138;
  *(undefined8 *)(param_2 + 0xf0) = uStack_140;
  *(undefined8 *)(param_2 + 0xf8) = uStack_148;
  *(undefined8 *)(param_2 + 0x100) = uStack_150;
  *(undefined8 *)(param_2 + 0x108) = uStack_158;
  *(undefined8 *)(param_2 + 0x110) = uStack_160;
  *(undefined8 *)(param_2 + 0x118) = uStack_168;
  *(undefined8 *)(param_2 + 0x120) = uStack_170;
  *(undefined8 *)(param_2 + 0x128) = uStack_178;
  *(undefined8 *)(param_2 + 0x130) = uStack_180;
  *(undefined8 *)(param_2 + 0x138) = uStack_188;
  *(undefined8 *)(param_2 + 0x140) = uStack_190;
  *(undefined8 *)(param_2 + 0x148) = uStack_198;
  *(undefined8 *)(param_2 + 0x150) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x158) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x160) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x168) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x170) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x178) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x180) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x188) = uStack_1d8;
  *(undefined8 *)(param_2 + 400) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x198) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1f0;
  puVar18 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar20 = uStack_78;
  func_0x000107c61174();
  uVar22 = uStack_80;
  func_0x000107c61174();
  uVar23 = uStack_88;
  func_0x000107c61174();
  uVar24 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  uVar13 = uStack_f0;
  func_0x000107c61174();
  uVar14 = uStack_f8;
  func_0x000107c61174();
  uVar15 = uStack_100;
  func_0x000107c61174();
  uVar16 = uStack_108;
  func_0x000107c61174();
  uVar17 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar36 = uStack_170;
  func_0x000107c61174();
  uVar37 = uStack_178;
  func_0x000107c61174();
  uVar38 = uStack_180;
  func_0x000107c61174();
  uVar39 = uStack_188;
  func_0x000107c61174();
  uVar40 = uStack_190;
  func_0x000107c61174();
  uVar41 = uStack_198;
  func_0x000107c61174();
  uVar42 = uStack_1a0;
  func_0x000107c61174();
  uVar43 = uStack_1a8;
  func_0x000107c61174();
  uVar44 = uStack_1b0;
  func_0x000107c61174();
  uVar45 = uStack_1b8;
  func_0x000107c61174();
  uVar46 = uStack_1c0;
  func_0x000107c61174();
  uVar47 = uStack_1c8;
  func_0x000107c61174();
  uVar48 = uStack_1d0;
  func_0x000107c61174();
  uVar49 = uStack_1d8;
  func_0x000107c61174();
  uVar50 = uStack_1e0;
  func_0x000107c61174();
  uVar51 = uStack_1e8;
  func_0x000107c61174();
  uVar52 = uStack_1f0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar18;
  puVar18 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar18;
  puVar18 = PTR_PTR_1126a9980;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar18;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar57 = 0xd000000000000010;
  uVar54 = uVar57;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef851b0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar55 = 0xd000000000000013;
  uVar54 = uVar55;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar57);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar56 = 0xd000000000000017;
  uVar54 = uVar56;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f01aa00);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa20);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = uVar55;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar21);
  uVar54 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000018;
  uVar54 = uVar57;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = uVar57;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = uVar56;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = 0xd000000000000012;
  uVar54 = uVar58;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef210e0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01aa40);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar21);
  uVar54 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa60);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar54);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = uVar56;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar54);
  uVar21 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar57);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar55);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = uVar58;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01aaa0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar56);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01aac0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x65536c65736e6974;
  func_0x000107c5fadc(0x65536c65736e6974,0xee00736563697672);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef21c10);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00a540);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000016;
  uVar54 = uVar57;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar57);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar58);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f01aae0);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar54);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x7672655373757472;
  func_0x000107c5fadc(0x7672655373757472,0xec00000073656369);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar21);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f01ab00);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar57);
  uVar54 = *(undefined8 *)(param_2 + 0x10);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f01ab20);
  func_0x000107c5a49c(uVar54);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar57);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar53 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar53 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc844);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x1a8) = lVar53;
  lVar53 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar53 != 0) {
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar40);
    func_0x000107c61170(uVar41);
    func_0x000107c61170(uVar42);
    func_0x000107c61170(uVar43);
    func_0x000107c61170(uVar44);
    func_0x000107c61170(uVar45);
    func_0x000107c61170(uVar46);
    func_0x000107c61170(uVar47);
    func_0x000107c61170(uVar48);
    func_0x000107c61170(uVar49);
    func_0x000107c61170(uVar50);
    func_0x000107c61170(uVar51);
    func_0x000107c61170(uVar52);
    *(long *)(param_2 + 0x1b0) = lVar53;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc848);
  (*pcVar1)();
}



/* Entry: 1006cc848; end: 1006cc8d3;  */

void FUN_1006cc848(void)

{
  long unaff_x20;
  
  FUN_1006ca974(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400));
  return;
}



/* Entry: 1006cc8d4; end: 1006cc8db;  */

void FUN_1006cc8d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cc8dc; end: 1006cc92f;  */

void FUN_1006cc8dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cc930; end: 1006cc93b;  */

void FUN_1006cc930(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100209be0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cc9ec(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cc93c; end: 1006cc9eb;  */

void FUN_1006cc93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100209be0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cc9ec(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cc9ec; end: 1006ccc1f;  */

void FUN_1006cc9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7ec0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc1af0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ccc20);
  (*pcVar1)();
}



/* Entry: 1006ccc20; end: 1006ccd23; -[SCCameraActivePathServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccc20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127242cc);
  puVar2 = PTR_PTR_1126b9ab8;
  func_0x000107c610f4(PTR_PTR_1126b9ab8);
  func_0x000107c453e8();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006ccd24; end: 1006ccd7b; -[_TtC26SCCameraActivePathServices26SCCameraActivePathServices init:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113016c48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006ccd7c; end: 1006ccdaf;  */

void FUN_1006ccd7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006ccdb0; end: 1006ccdb7;  */

void FUN_1006ccdb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ccdb8; end: 1006cce0b;  */

void FUN_1006ccdb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cce0c; end: 1006cce17;  */

void FUN_1006cce0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10029a0f4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006ccec8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cce18; end: 1006ccec7;  */

void FUN_1006cce18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10029a0f4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006ccec8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ccec8; end: 1006cd0fb;  */

void FUN_1006ccec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8f68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f00a4d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cd0fc);
  (*pcVar1)();
}



/* Entry: 1006cd0fc; end: 1006cd1fb; -[SCConversationDestinationParsingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd0fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be718;
  func_0x000107c610f4(PTR_PTR_1126be718);
  func_0x000107c46160();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112729d1c));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006cd1fc; end: 1006cd253; -[_TtC40SCConversationDestinationParsingServices40SCConversationDestinationParsingServices initWithConversationDestinationParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307fc48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006cd254; end: 1006cd287;  */

void FUN_1006cd254(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006cd288; end: 1006cd28f;  */

void FUN_1006cd288(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd290; end: 1006cd2e3;  */

void FUN_1006cd290(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd2e4; end: 1006cd2ef;  */

void FUN_1006cd2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002bcf0c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cd938(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd2f0; end: 1006cd39f;  */

void FUN_1006cd2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002bcf0c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cd938(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd3a0; end: 1006cd3a7;  */

void FUN_1006cd3a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd3a8; end: 1006cd3fb;  */

void FUN_1006cd3a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd3fc; end: 1006cd407;  */

void FUN_1006cd3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1002b3a10();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cd4d8(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd408; end: 1006cd4d7;  */

void FUN_1006cd408(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1002b3a10();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006cd4d8(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cd4d8; end: 1006cd783;  */

void FUN_1006cd4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8fe0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1c6a0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a800);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cd784);
  (*pcVar1)();
}



/* Entry: 1006cd784; end: 1006cd887; -[SCTextSendingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd784(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112729d74);
  puVar2 = PTR_PTR_1126be810;
  func_0x000107c610f4(PTR_PTR_1126be810);
  func_0x000107c48ccc();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006cd888; end: 1006cd8fb; -[SCTextSendingServices initWithTextSender:] */

undefined1 * FUN_1006cd888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704050;
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



/* Entry: 1006cd8fc; end: 1006cd937;  */

void FUN_1006cd8fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006cd938; end: 1006cdb6b;  */

void FUN_1006cd938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a99f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ade0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cdb6c);
  (*pcVar1)();
}



/* Entry: 1006cdb6c; end: 1006cdc6f; -[SCStoryShareSendingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cdb6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272d9c8);
  puVar2 = PTR_PTR_1126c1440;
  func_0x000107c610f4(PTR_PTR_1126c1440);
  func_0x000107c48ab0();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1006cdc70; end: 1006cdcc7; -[_TtC27SCStoryShareSendingServices27SCStoryShareSendingServices initWithStoryShareSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cdc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff6288) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006cdcc8; end: 1006cdcfb;  */

void FUN_1006cdcc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006cdcfc; end: 1006cdd03;  */

void FUN_1006cdcfc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cdd04; end: 1006cdd57;  */

void FUN_1006cdd04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cdd58; end: 1006ce49f;  */

void FUN_1006cdd58(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_10023e21c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a84d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  uVar14 = uVar16;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc8800);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc8830);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc8850);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(puVar2);
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc8870);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8890);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar16);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar15 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    *(long *)(param_2 + 0x70) = lVar15;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ce4a0);
  (*pcVar1)();
}



/* Entry: 1006ce4a0; end: 1006ce4db;  */

void FUN_1006ce4a0(void)

{
  long unaff_x20;
  
  FUN_1006cdd58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1006ce4dc; end: 1006ce4e3;  */

void FUN_1006ce4dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ce4e4; end: 1006ce537;  */

void FUN_1006ce4e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ce538; end: 1006ce543;  */

void FUN_1006ce538(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10020faf0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006ce5f4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ce544; end: 1006ce5f3;  */

void FUN_1006ce544(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10020faf0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1006ce5f4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ce5f4; end: 1006ce823;  */

void FUN_1006ce5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a84c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc87d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ce824);
  (*pcVar1)();
}



/* Entry: 1006ce824; end: 1006ce99f; -[SCMediaComponentsCoordinatorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ce824(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_105607748;
  puStack_68 = &UNK_11089fd70;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bc4a0;
  func_0x000107c610f4(PTR_PTR_1126bc4a0);
  func_0x000107c47660();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112726c60));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1006ce9a0; end: 1006cea17; -[_TtC36SCMediaComponentsCoordinatorServices36SCMediaComponentsCoordinatorServices initWithMediaEncryptionCoordinator:overlayCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ce9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113080518) = param_3;
  *(undefined8 *)(param_1 + _DAT_113080520) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1006cea18; end: 1006cea4b;  */

void FUN_1006cea18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006cea4c; end: 1006cea53;  */

void FUN_1006cea4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006cea54; end: 1006ceaa7;  */

void FUN_1006cea54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006ceaa8; end: 1006ceab3;  */

void FUN_1006ceaa8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100213984();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8510;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}


