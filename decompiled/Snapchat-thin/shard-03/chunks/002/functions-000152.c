/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026169ec; end: 102616a2b;  */

void FUN_1026169ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001026168e0(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102616a2c; end: 102616a4f;  */

void FUN_102616a2c(void)

{
  FUN_1026169ec(0x112eb01d8,&UNK_10dac4580);
  return;
}



/* Entry: 102616a50; end: 102616d17;  */

void FUN_102616a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb01f0,&UNK_10dac4650);
  puVar1 = &UNK_11052b3d8;
  func_0x000107c613fc(&UNK_11052b3d8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102616d18,puVar1);
  return;
}



/* Entry: 102616d18; end: 102616d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102616d18(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar8 = lVar1;
  func_0x000100083b20(auStack_90);
  FUN_102618908();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = _DAT_112eb01f8;
  uVar10 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + lVar7) = uVar10;
  lVar7 = _DAT_112eb0200;
  uVar10 = 0x112eb00f0;
  func_0x0001000285a8(0x112eb00f0,&UNK_10dac43c0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar9 + lVar7) = uVar10;
  lVar7 = _DAT_112eb0208;
  func_0x0001000285a8(0x112eb00f8,&UNK_10dac43c8);
  func_0x000107c613fc();
  uVar10 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar9 + lVar7) = uVar10;
  *(undefined8 *)(lVar9 + _DAT_112eb0210) = 0;
  *(long *)(lVar9 + _DAT_112eb0218) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112eb0220) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112eb0228) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112eb0230) = uVar4;
  func_0x0001026183fc(auStack_90,lVar9 + _DAT_112eb0238);
  *(undefined8 *)(lVar9 + _DAT_112eb0240) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112eb0248) = uVar12;
  puVar6 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar12);
  plVar11 = &lStack_a0;
  func_0x000107c61154(plVar11,puVar6);
  func_0x000102618438(auStack_90);
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_11052b508;
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 102616d2c; end: 102616ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102616d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112eb01f8;
  uVar2 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112eb0200;
  uVar2 = 0x112eb00f0;
  func_0x0001000285a8(0x112eb00f0,&UNK_10dac43c0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112eb0208;
  func_0x0001000285a8(0x112eb00f8,&UNK_10dac43c8);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0210) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0218) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0220) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0228) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0230) = param_4;
  func_0x0001026183fc(param_5,unaff_x20 + _DAT_112eb0238);
  *(undefined8 *)(unaff_x20 + _DAT_112eb0240) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0248) = param_7;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000102618438(param_5);
  return puVar3;
}



/* Entry: 102616ec8; end: 102617593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102616ec8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar14 = &puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar2 = puStack_90;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar3);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b1d50;
    func_0x000107c610f8(PTR_PTR_1126b1d50);
    func_0x000107c46e8c();
    puVar4 = PTR_PTR_1126b1d68;
    func_0x000107c610f8(PTR_PTR_1126b1d68);
    func_0x000107c453e4();
    func_0x000107c551a0();
    func_0x000100083b20(&puStack_90);
    lVar5 = *(long *)(puStack_90 + _DAT_113083898);
    func_0x000107c61174();
    func_0x000107c61170(puStack_90);
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c52d78(puVar4);
      func_0x000107c615e8(lVar6);
      lVar5 = lVar6;
    }
    func_0x000102617314();
    func_0x000107c562b4(puVar4);
    func_0x000107c615e8(lVar5);
    puVar13 = &UNK_11052b400;
    puVar7 = puVar13;
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10261846c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x102617710;
    puStack_78 = &UNK_11052b418;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56ef0(puVar4);
    func_0x000107c60bd0(ppuVar8);
    puVar7 = puVar13;
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x102618490;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11052b440;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c541f4(puVar4);
    func_0x000107c60bd0(ppuVar9);
    puVar7 = puVar13;
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x102618498;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1001de374;
    puStack_78 = &UNK_11052b468;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c557f4(puVar4);
    func_0x000107c60bd0(ppuVar10);
    puVar7 = puVar13;
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x1026184a0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1026179b0;
    puStack_78 = &UNK_11052b490;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56d8c(puVar4);
    func_0x000107c60bd0(ppuVar11);
    puVar7 = puVar13;
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_70 = (code *)0x1026184a8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1010264f0;
    puStack_78 = &UNK_11052b4b8;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c573a8(puVar4);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c613fc(&UNK_11052b400,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    pcStack_70 = (code *)0x1026184b0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11052b4e0;
    puStack_68 = puVar13;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c54fd0(puVar4);
    func_0x000107c60bd0(ppuVar14);
    puVar13 = PTR_PTR_1126b1d60;
    func_0x000107c610f8(PTR_PTR_1126b1d60);
    func_0x000107c49520();
    FUN_102617e30();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar13);
  }
  return;
}



/* Entry: 102617594; end: 10261784b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102617594(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001026183fc(lVar1 + _DAT_112eb0238,auStack_78);
    func_0x000107c61170(lVar1);
    puVar2 = auStack_58;
    func_0x000107c61618();
    func_0x000102618438(auStack_78);
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
      func_0x000107c614f0(puVar2);
      (**(code **)(lStack_50 + 8))(param_1,puVar3,lStack_50);
      func_0x000107c615e8(puVar2);
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar4 = &UNK_11052b610;
    func_0x000107c613fc(&UNK_11052b610,0x18,7);
    *(long *)(puVar4 + 0x10) = param_2;
    puVar5 = &UNK_11052b638;
    func_0x000107c613fc(&UNK_11052b638,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dac4700;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c61174(param_2);
    uVar6 = 0x80;
    func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4708,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 10261784c; end: 10261792b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261784c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(&lStack_40);
    func_0x000107c61170(param_1);
    lVar1 = lStack_40;
    func_0x000107c5c360();
    func_0x000107c61180();
    func_0x000107c61170(lStack_40);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c41050(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c4a564(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10261792c; end: 1026179af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261792c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112eb0208);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    uStack_50 = param_1;
    func_0x000100087c34(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1026179b0; end: 102617a0f;  */

void FUN_1026179b0(long param_1,undefined8 param_2)

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



/* Entry: 102617a10; end: 102617b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102617a10(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    puVar4 = *(undefined **)(param_1 + _DAT_112eb0200);
    uVar1 = 0;
    FUN_102618a24(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c6157c(puVar4);
    pcVar2 = FUN_102617b1c;
    func_0x0001000bfde0(FUN_102617b1c,0,uVar1);
    func_0x000107c61574(puVar4);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar2);
    puVar3 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 102617b1c; end: 102617c6f;  */

void FUN_102617b1c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = *param_2;
  lVar5 = *(long *)(lVar6 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,lVar5,0);
    puVar4 = puStack_68;
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    do {
      uVar8 = *puVar7;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar8);
      uVar8 = 0;
      FUN_102618a24(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      apuStack_88[0] = puVar2;
      uStack_70 = uVar8;
      puStack_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      func_0x000100102924(apuStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar3 = puVar4;
  func_0x000107c5fc48(puVar4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar4);
  func_0x000107c45788();
  func_0x000107c61170(puVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 102617c70; end: 102617cc3;  */

void FUN_102617c70(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102617cc4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102617cc4; end: 102617e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102617cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb0238);
  func_0x000107c4b88c(uVar1);
  func_0x000107c61180();
  func_0x000107c4aad8();
  uVar3 = param_1;
  func_0x000107c4b6f0(uVar1);
  func_0x000107c60a04(param_1,uVar3);
  func_0x000107c61170(uVar1);
  uVar1 = 0x409f400000000000;
  func_0x000108d31f58(param_1,uVar3,0x409f400000000000);
  func_0x00010037ef84(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar2 = unaff_x20;
  func_0x0001038b86a4(param_1,uVar3,uVar1,param_4);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  lStack_60 = lVar2;
  func_0x00010008a7c8(&uStack_58,&lStack_60);
  func_0x000107c61574(uVar3);
  func_0x000100083b20(&lStack_60);
  func_0x000107c61574(uStack_58);
  lVar4 = _DAT_112eb0210;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb0210);
  *(long *)(unaff_x20 + _DAT_112eb0210) = lStack_60;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4f024();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102617e30; end: 1026180af;  */

/* WARNING: Possible PIC construction at 0x000102617f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102617f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102617fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261801c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102618068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102618088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261806c) */
/* WARNING: Removing unreachable block (ram,0x000102618020) */
/* WARNING: Removing unreachable block (ram,0x000102617fcc) */
/* WARNING: Removing unreachable block (ram,0x000102617f78) */
/* WARNING: Removing unreachable block (ram,0x000102617f24) */
/* WARNING: Removing unreachable block (ram,0x00010261808c) */

void FUN_102617e30(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5677c();
  func_0x000107c5a050(param_1);
  puVar2 = puVar1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3d89c();
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 9;
    *(undefined8 *)(puVar1 + 0x10) = 4;
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    func_0x000107c4acb0(puVar2);
    func_0x000107c61180();
    func_0x000107c40280(param_1);
    func_0x000107c61180();
    puVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1026180b0; end: 102618167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026180b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001026183fc(param_3 + _DAT_112eb0238,auStack_78);
    func_0x000107c61170(param_3);
    puVar1 = auStack_58;
    func_0x000107c61618();
    func_0x000102618438(auStack_78);
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar1);
      (**(code **)(lStack_50 + 0x10))(param_1,param_2);
      func_0x000107c615e8(puVar1);
    }
  }
  return;
}



/* Entry: 102618168; end: 102618223;  */

bool FUN_102618168(double param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  func_0x000107c4b88c(uVar1);
  func_0x000107c61180();
  func_0x000107c4aad8();
  dVar3 = param_1;
  func_0x000107c4b6f0(uVar1);
  func_0x000107c60a04();
  dVar4 = param_1;
  func_0x000107c61170(uVar1);
  func_0x000107c4b88c(uVar2);
  func_0x000107c61180();
  func_0x000107c4aad8();
  dVar5 = dVar4;
  func_0x000107c4b6f0(uVar2);
  func_0x000107c60a04();
  func_0x000107c61170(uVar2);
  return ABS(dVar3 - dVar5) <= 2.220446049250313e-16 &&
         ABS(param_1 - dVar4) <= 2.220446049250313e-16;
}



/* Entry: 102618224; end: 10261828f;  */

void FUN_102618224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102618290,uVar1,uVar2);
  return;
}



/* Entry: 102618290; end: 10261835b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618290(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112eb0238 + 0x18);
  puVar2 = &UNK_11052b400;
  func_0x000107c613fc(&UNK_11052b400,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,lVar1);
  *(code **)(unaff_x22 + 0x30) = FUN_102618b20;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  puVar3 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11052b5d8;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c41864(uVar4);
  func_0x000107c60bd0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102618358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261835c; end: 10261846b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261835c(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001026183fc(param_1 + _DAT_112eb0238,auStack_68);
    func_0x000107c61170(param_1);
    puVar1 = auStack_48;
    func_0x000107c61618();
    func_0x000102618438(auStack_68);
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar1);
      (**(code **)(lStack_40 + 0x18))();
      func_0x000107c615e8(puVar1);
    }
  }
  return;
}



/* Entry: 10261846c; end: 1026184b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261846c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001026183fc(lVar1 + _DAT_112eb0238,auStack_78);
    func_0x000107c61170(lVar1);
    puVar2 = auStack_58;
    func_0x000107c61618();
    func_0x000102618438(auStack_78);
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
      func_0x000107c614f0(puVar2);
      (**(code **)(lStack_50 + 8))(param_1,puVar3,lStack_50);
      func_0x000107c615e8(puVar2);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar4 = &UNK_11052b610;
    func_0x000107c613fc(&UNK_11052b610,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    puVar5 = &UNK_11052b638;
    func_0x000107c613fc(&UNK_11052b638,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dac4700;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c61174(lVar1);
    uVar6 = 0x80;
    func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4708,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 1026184b8; end: 102618517; -[_TtC34MapCustomizationTrayImplementation27HomeLocationEditorPresenter init] */

void FUN_1026184b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.HomeLocationEditorPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026184e4);
  (*pcVar1)();
}



/* Entry: 102618518; end: 1026185ff; -[_TtC34MapCustomizationTrayImplementation27HomeLocationEditorPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618518(long param_1)

{
  func_0x000102618438(param_1 + _DAT_112eb0238);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb01f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0200));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0208));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0218));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0248));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0220));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0230));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0228));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0240));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb0210));
  return;
}



/* Entry: 102618600; end: 102618617; -[_TtC34MapCustomizationTrayImplementation27HomeLocationEditorPresenter mapLocationSearchTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb0210);
  *(undefined8 *)(param_1 + _DAT_112eb0210) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102618618; end: 102618683;  */

void FUN_102618618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102618684,uVar1,uVar2);
  return;
}



/* Entry: 102618684; end: 1026186eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618684(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  uVar2 = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  uVar5 = puVar1[5];
  uVar4 = puVar1[4];
  uVar3 = puVar1[7];
  uVar2 = puVar1[6];
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  *(undefined1 *)(unaff_x22 + 0x50) = *(undefined1 *)(puVar1 + 8);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  func_0x0001002a64a8(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001026186e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026186ec; end: 1026188f7; -[_TtC34MapCustomizationTrayImplementation27HomeLocationEditorPresenter mapLocationSearchTrayDidSelectLocationWithCoordinates:placeSelectionUpdate:] */

/* WARNING: Possible PIC construction at 0x000102618734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102618738) */

void FUN_1026186ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000102618750(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1026188f8; end: 102618907;  */

undefined1  [16] FUN_1026188f8(void)

{
  return ZEXT816(0x11052b528);
}



/* Entry: 102618908; end: 102618927;  */

void FUN_102618908(void)

{
  func_0x000107c61168(&PTR_PTR_112854998);
  return;
}



/* Entry: 102618928; end: 102618977;  */

void FUN_102618928(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102618978;
  plVar2[0xb] = lVar3;
  plVar2[0xc] = unaff_x20 + 0x18;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xd] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102618684,lVar1,lVar3);
  return;
}



/* Entry: 102618978; end: 1026189b3;  */

void FUN_102618978(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026189b4; end: 102618a23;  */

void FUN_1026189b4(undefined8 param_1)

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
  plVar3[1] = 0x102618c1c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102618a24; end: 102618a63;  */

void FUN_102618a24(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102618a64; end: 102618aaf;  */

void FUN_102618a64(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102618c20;
  plVar2[8] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102618290,lVar1,lVar3);
  return;
}



/* Entry: 102618ab0; end: 102618b1f;  */

void FUN_102618ab0(undefined8 param_1)

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
  plVar3[1] = 0x102618c24;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102618b20; end: 102618b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618b20(void)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001026183fc(lVar1 + _DAT_112eb0238,auStack_68);
    func_0x000107c61170(lVar1);
    puVar2 = auStack_48;
    func_0x000107c61618();
    func_0x000102618438(auStack_68);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar2);
      (**(code **)(lStack_40 + 0x18))();
      func_0x000107c615e8(puVar2);
    }
  }
  return;
}



/* Entry: 102618b28; end: 102618b73;  */

void FUN_102618b28(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102618c28;
  plVar2[8] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102618290,lVar1,lVar3);
  return;
}



/* Entry: 102618b74; end: 102618be3;  */

void FUN_102618b74(undefined8 param_1)

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
  plVar3[1] = 0x102618c2c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102618be4; end: 102618c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102618be4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001026183fc(lVar1 + _DAT_112eb0238,auStack_78);
    func_0x000107c61170(lVar1);
    puVar2 = auStack_58;
    func_0x000107c61618();
    func_0x000102618438(auStack_78);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar2);
      (**(code **)(lStack_50 + 0x10))(param_1,param_2);
      func_0x000107c615e8(puVar2);
    }
  }
  return;
}



/* Entry: 102618c30; end: 102618ef3;  */

long FUN_102618c30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102618ef4; end: 102618f2f;  */

void FUN_102618ef4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102618f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102618f30; end: 102619087;  */

void FUN_102618f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb00e8,&UNK_10dac43b0);
  puVar1 = &UNK_11052b708;
  func_0x000107c613fc(&UNK_11052b708,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102619088,puVar1);
  return;
}



/* Entry: 102619088; end: 102619093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619088(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1026197fc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eb0278) = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb0280) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112eb0288) = uStack_50;
  *(undefined8 *)(lVar2 + _DAT_112eb0290) = uStack_58;
  plVar3 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102619094; end: 102619113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb0278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0280) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0288) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0290) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102619114; end: 102619187;  */

void FUN_102619114(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102619188,uVar1,uVar2);
  return;
}



/* Entry: 102619188; end: 1026191ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb0280);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102619200,uVar1,uVar2);
  return;
}



/* Entry: 102619200; end: 1026192a3;  */

void FUN_102619200(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  
  FUN_10261fb58();
  func_0x000103b3e210();
  if ((param_3 & 1) == 0) {
    FUN_10261fce8();
  }
  FUN_10261fb58();
  puVar1 = PTR_PTR_1126b1d38;
  func_0x000107c610f8();
  func_0x000107c48ed0(param_1,param_2);
  *(undefined **)(unaff_x22 + 0x60) = puVar1;
  plVar2 = (long *)0x930;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026192a4;
  plVar2[0x115] = *(long *)(unaff_x22 + 0x40);
  plVar2[0x10f] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261fdd4,0,0);
  return;
}



/* Entry: 1026192a4; end: 1026192f7;  */

void FUN_1026192a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026192f8,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  return;
}



/* Entry: 1026192f8; end: 10261932f;  */

void FUN_1026192f8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102619330,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 102619330; end: 10261948f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_10261bfe0();
  if (lVar2 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                 **(ulong **)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb0288)) + 0x98))();
    if (lVar2 != 0) {
      func_0x000107c5cfb4();
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    puVar1 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c52684();
    func_0x000107c5a074(puVar1,param_2,lVar3);
    func_0x000107c5a05c(puVar1,param_2,1);
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112eb0288) + _DAT_112fa92a8);
    func_0x000107c615f0(uVar5);
    func_0x000107c4ef3c(0x3fe3333333333333,puVar1,param_2,uVar5,0,0x10);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112eb0278);
    *(undefined **)(lVar3 + _DAT_112eb0278) = puVar1;
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010261948c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102619490; end: 102619537; -[_TtC34MapCustomizationTrayImplementation29MapCustomizationTrayPresenter present] */

void FUN_102619490(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11052b7a0;
  func_0x000107c613fc(&UNK_11052b7a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0x80;
  func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4800,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102619538; end: 1026195a3;  */

void FUN_102619538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026195a4,uVar1,uVar2);
  return;
}



/* Entry: 1026195a4; end: 102619657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026195a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar3 = _DAT_112eb0278;
  uVar1 = 0;
  if (*(long *)(lVar2 + _DAT_112eb0278) != 0) {
    func_0x000107c42018(*(long *)(lVar2 + _DAT_112eb0278),param_2,1);
    uVar1 = *(undefined8 *)(lVar2 + lVar3);
  }
  lVar4 = *(long *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar2 + lVar3) = 0;
  func_0x000107c61170(uVar1);
  lVar3 = *(long *)(lVar4 + _DAT_112eb0290);
  lVar2 = *(long *)(lVar3 + 0x90);
  *(undefined8 *)(lVar3 + 0x90) = 0;
  func_0x000107c61170();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar4 + _DAT_112eb0288)) +
              0x98))();
  if (lVar2 != 0) {
    func_0x000107c5cfb4();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102619654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102619658; end: 1026196b7; -[_TtC34MapCustomizationTrayImplementation29MapCustomizationTrayPresenter init] */

void FUN_102619658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.MapCustomizationTrayPresenter",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102619684);
  (*pcVar1)();
}



/* Entry: 1026196b8; end: 10261970f; -[_TtC34MapCustomizationTrayImplementation29MapCustomizationTrayPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026196d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026196f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026196d8) */
/* WARNING: Removing unreachable block (ram,0x0001026196f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026196b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb0288));
  return;
}



/* Entry: 102619710; end: 1026197eb; -[_TtC34MapCustomizationTrayImplementation29MapCustomizationTrayPresenter tray:positionDidChange:] */

void FUN_102619710(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == 2) {
    puVar1 = &UNK_11052b750;
    func_0x000107c613fc(&UNK_11052b750,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    puVar2 = &UNK_11052b778;
    func_0x000107c613fc(&UNK_11052b778,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dac47f0;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    uVar3 = 0x80;
    func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac47f8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1026197ec; end: 1026197fb;  */

undefined1  [16] FUN_1026197ec(void)

{
  return ZEXT816(0x11052b730);
}



/* Entry: 1026197fc; end: 1026198a3;  */

void FUN_1026197fc(void)

{
  func_0x000107c61168(&PTR_PTR_112854aa8);
  return;
}



/* Entry: 1026198a4; end: 102619913;  */

void FUN_1026198a4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10261996c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102619914; end: 10261996b;  */

void FUN_102619914(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102619970;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[3] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  func_0x000100eea164();
  plVar2[5] = lVar3;
  func_0x000107c5fca8();
  plVar2[6] = lVar1;
  plVar2[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102619188,lVar1,lVar3);
  return;
}



/* Entry: 10261996c; end: 10261998f;  */

void FUN_10261996c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026198a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102619990; end: 1026199e3;  */

void FUN_102619990(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001038b669c(0);
  func_0x000107c610f8();
  func_0x0001038b6660(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1026199e4; end: 102619a07;  */

void FUN_1026199e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001038b669c(0);
  func_0x000107c610f8();
  func_0x0001038b6660(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102619a08; end: 102619a57;  */

void FUN_102619a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102619a58; end: 102619aa3;  */

void FUN_102619a58(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102619b9c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 102619aa4; end: 102619aab;  */

void FUN_102619aa4(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102619b9c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102619aac; end: 102619adb;  */

void FUN_102619aac(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102619adc; end: 102619b57; -[_TtC34MapCustomizationTrayImplementation31FullMapCustomizationTrayBuilder build:] */

void FUN_102619adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102619b58; end: 102619b7b;  */

void FUN_102619b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102619b7c; end: 102619b9b;  */

undefined1  [16] FUN_102619b7c(void)

{
  return ZEXT816(0x11052b7c8);
}



/* Entry: 102619b9c; end: 102619bbb;  */

void FUN_102619b9c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb0310);
  return;
}



/* Entry: 102619bbc; end: 102619c0f;  */

void FUN_102619bbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001003814c8(0);
  func_0x000107c610f8();
  func_0x0001038b6794(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102619c10; end: 102619c17;  */

void FUN_102619c10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001003814c8(0);
  func_0x000107c610f8();
  func_0x0001038b6794(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102619c18; end: 102619c63;  */

void FUN_102619c18(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102619d5c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 102619c64; end: 102619c6b;  */

void FUN_102619c64(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102619d5c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102619c6c; end: 102619c9b;  */

void FUN_102619c6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102619c9c; end: 102619d17; -[_TtC34MapCustomizationTrayImplementation27MapCustomizationTrayBuilder build:] */

void FUN_102619c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102619d18; end: 102619d3b;  */

void FUN_102619d18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102619d3c; end: 102619d5b;  */

undefined1  [16] FUN_102619d3c(void)

{
  return ZEXT816(0x11052b808);
}



/* Entry: 102619d5c; end: 102619d7b;  */

void FUN_102619d5c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb03c0);
  return;
}



/* Entry: 102619d7c; end: 102619eb3;  */

void FUN_102619d7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb0420,&UNK_10dac4950);
  puVar1 = &UNK_11052b848;
  func_0x000107c613fc(&UNK_11052b848,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102619eb4,puVar1);
  return;
}



/* Entry: 102619eb4; end: 102619ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619eb4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar3 = 0;
  func_0x00010261a48c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11052b8a0;
  *param_1 = lVar4;
  return;
}



/* Entry: 102619ecc; end: 102619f17;  */

void FUN_102619ecc(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb0428,&UNK_10dac4990);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102619f84,param_1);
  return;
}



/* Entry: 102619f18; end: 102619f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619f18(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10261a188();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eb0430) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102619f84; end: 102619f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619f84(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10261a188();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112eb0430) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102619f8c; end: 102619fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619f8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb0430) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102619fd8; end: 10261a0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102619fd8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_70;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(alStack_68);
  lVar1 = *(long *)(alStack_68[0] + _DAT_112fa92e8);
  func_0x000107c6157c(lVar1);
  func_0x000107c61170(alStack_68[0]);
  if (lVar1 != 0) {
    func_0x000100083b20(alStack_68);
    func_0x000107c61574(lVar1);
    func_0x0001000a8868(alStack_68,uStack_50);
    func_0x000100083b20(&lStack_70);
    uVar2 = *(undefined8 *)(lStack_70 + _DAT_112fa92d0);
    func_0x000107c61170();
    (**(code **)(lStack_48 + 0x20))(param_1,uVar2,uStack_50,lStack_48);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 10261a0b8; end: 10261a107; -[_TtC34MapCustomizationTrayImplementation36MapCustomizationMetricLoggingHandler logActionWithActionInfo:] */

/* WARNING: Possible PIC construction at 0x00010261a0f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261a0f4) */

void FUN_10261a0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102619fd8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10261a108; end: 10261a167; -[_TtC34MapCustomizationTrayImplementation36MapCustomizationMetricLoggingHandler init] */

void FUN_10261a108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.MapCustomizationMetricLoggingHandler",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10261a134);
  (*pcVar1)();
}



/* Entry: 10261a168; end: 10261a177;  */

undefined1  [16] FUN_10261a168(void)

{
  return ZEXT816(0x11052b890);
}



/* Entry: 10261a178; end: 10261a187; -[_TtC34MapCustomizationTrayImplementation36MapCustomizationMetricLoggingHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261a178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb0430));
  return;
}



/* Entry: 10261a188; end: 10261a1a7;  */

void FUN_10261a188(void)

{
  func_0x000107c61168(&PTR_PTR_112854b80);
  return;
}



/* Entry: 10261a1a8; end: 10261a1f3;  */

undefined8 FUN_10261a1a8(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 unaff_x20;
  
  if (param_3 == '\x01') {
    return 0;
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c470e4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10261a1f4; end: 10261a323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10261a1f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c3f040();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112fecfe8);
    func_0x000107c61170(lVar1);
  }
  return uVar3;
}



/* Entry: 10261a324; end: 10261a45f;  */

/* WARNING: Possible PIC construction at 0x00010261a3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261a424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261a3bc) */
/* WARNING: Removing unreachable block (ram,0x00010261a428) */

void FUN_10261a324(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c42ae4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 != 0) {
    func_0x000107c3cf80();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c311d0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10261a460);
  (*pcVar1)();
}



/* Entry: 10261a460; end: 10261a4ab;  */

void FUN_10261a460(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10261a4ac; end: 10261a563;  */

void FUN_10261a4ac(void)

{
  FUN_10261a1f4();
  return;
}



/* Entry: 10261a564; end: 10261a5ff;  */

void FUN_10261a564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010261bd1c(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261a600,uVar2,uVar3);
  return;
}



/* Entry: 10261a600; end: 10261a6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261a600(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = _DAT_112eb0510;
  lVar4 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x98) = _DAT_112eb0510;
  lVar2 = *(long *)(lVar4 + lVar1);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28);
    puVar3[1] = 0xc000000000000000;
    *puVar3 = 0;
    func_0x000107c6144c();
  }
  *(undefined8 *)(lVar4 + lVar1) = 0;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261a6a8,lVar2);
  return;
}



/* Entry: 10261a6a8; end: 10261a6ff;  */

void FUN_10261a6a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10261a700;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar3 + lVar2) = lVar1;
  FUN_10261a82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}


