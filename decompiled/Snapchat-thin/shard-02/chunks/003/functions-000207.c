/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b657d4; end: 101b65823;  */

void FUN_101b657d4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_101b654bc();
  puVar1 = PTR_PTR_1126a8b20;
  func_0x000107c610f8();
  func_0x000107c46e44();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101b65824; end: 101b6582f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65824(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar9 = &lStack_50;
  lVar7 = 0;
  func_0x000101b65404();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e04ca8) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112e04cb0) = uVar4;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e04cb8);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar8;
  lStack_48 = lVar7;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_50,puVar6);
  *param_1 = plVar9;
  return;
}



/* Entry: 101b65830; end: 101b6584f;  */

void FUN_101b65830(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101b65850; end: 101b65853;  */

undefined * FUN_101b65850(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar6 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = FUN_101b65854;
  puStack_48 = (undefined *)0x0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b65b30;
  puStack_58 = &UNK_11044c778;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_11044c7b0;
  func_0x000107c613fc(&UNK_11044c7b0,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  pcStack_50 = (code *)0x101b65b20;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b65b34;
  puStack_58 = &UNK_11044c7c8;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = PTR_PTR_1126a8b28;
  func_0x000107c610f8(PTR_PTR_1126a8b28);
  func_0x000107c472c0();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 101b65854; end: 101b65873;  */

void FUN_101b65854(void)

{
  FUN_101b66030(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101b65874; end: 101b658ff;  */

long FUN_101b65874(long param_1)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c44ea4();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 101b65900; end: 101b6590f;  */

void FUN_101b65900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b65910; end: 101b65933;  */

void FUN_101b65910(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b65934();
  *param_1 = param_2;
  return;
}



/* Entry: 101b65934; end: 101b65a97;  */

undefined * FUN_101b65934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar6 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = FUN_101b65854;
  puStack_48 = (undefined *)0x0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b65b30;
  puStack_58 = &UNK_11044c778;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_11044c7b0;
  func_0x000107c613fc(&UNK_11044c7b0,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  pcStack_50 = (code *)0x101b65b20;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b65b34;
  puStack_58 = &UNK_11044c7c8;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = PTR_PTR_1126a8b28;
  func_0x000107c610f8(PTR_PTR_1126a8b28);
  func_0x000107c472c0();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 101b65a98; end: 101b65b03;  */

void FUN_101b65a98(undefined8 param_1)

{
  if (lRam0000000112e04e00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e678170);
  return;
}



/* Entry: 101b65b04; end: 101b65b37;  */

void FUN_101b65b04(long param_1,long param_2)

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



/* Entry: 101b65b38; end: 101b65b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65b38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e04ea0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b65b84; end: 101b65be3; -[_TtC16LensHintProvider16LensHintProvider init] */

void FUN_101b65b84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensHintProvider.LensHintProvider",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b65bb0);
  (*pcVar1)();
}



/* Entry: 101b65be4; end: 101b65bf3; -[_TtC16LensHintProvider16LensHintProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e04ea0));
  return;
}



/* Entry: 101b65bf4; end: 101b65cdb; -[_TtC16LensHintProvider16LensHintProvider localizedHintForHintId:lensHintTranslations:lensId:] */

void FUN_101b65bf4(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec(param_3);
  puVar1 = param_2;
  if (param_4 != 0) {
    puVar1 = PTR___sSSN_11034da80;
    func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  puVar2 = (undefined *)0x0;
  if (param_5 != 0) {
    func_0x000107c5faec(param_5);
    puVar2 = puVar1;
  }
  func_0x000107c61174(param_1);
  puVar1 = param_2;
  FUN_101b65e08(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(param_4);
  if (puVar1 == (undefined *)0x0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,puVar1);
    func_0x000107c6142c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101b65cdc; end: 101b65e07;  */

void FUN_101b65cdc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  lVar12 = 0x2d;
  lVar7 = 0x2d;
  func_0x000107c60498();
  func_0x000107c6157c();
  ppuVar13 = &PTR_s__LensHintProvider_10f0003c0_0x10_112e04f20;
  while( true ) {
    puVar2 = ppuVar13[-3];
    puVar4 = ppuVar13[-2];
    puVar3 = ppuVar13[-1];
    puVar5 = *ppuVar13;
    func_0x000107c61434(puVar4);
    func_0x000107c61434(puVar5);
    puVar8 = puVar2;
    puVar10 = puVar4;
    func_0x000100029284();
    if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b65e04);
      (*pcVar6)();
    }
    uVar11 = (ulong)puVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar7 + 0x40 + uVar11) =
         *(ulong *)(lVar7 + 0x40 + uVar11) | 1L << ((ulong)puVar8 & 0x3f);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + (long)puVar8 * 0x10);
    *puVar1 = puVar2;
    puVar1[1] = puVar4;
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)puVar8 * 0x10);
    *puVar1 = puVar3;
    puVar1[1] = puVar5;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) break;
    ppuVar13 = ppuVar13 + 4;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      func_0x000107c61574(lVar7);
      uVar9 = 0x112d38308;
      func_0x0001000285a8(0x112d38308,&UNK_10d902040);
      func_0x000107c61408(0x112e04f08,0x2d,uVar9);
      lRam0000000112e04ed8 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b65e08);
  (*pcVar6)();
}



/* Entry: 101b65e08; end: 101b65f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b65e08(ulong param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  
  if ((*(long *)(unaff_x20 + _DAT_112e04ea0) == 0) ||
     (uVar2 = param_1, func_0x0001000f66f0(param_1,param_2), (uVar2 & 1) == 0)) {
    if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      func_0x000107c61434(param_3);
      uVar2 = param_1;
      uVar6 = param_2;
      func_0x000100029284();
      if ((uVar6 & 1) != 0) {
        plVar1 = (long *)(*(long *)(param_3 + 0x38) + uVar2 * 0x10);
        lVar5 = *plVar1;
        lVar7 = plVar1[1];
        func_0x000107c61434(lVar7);
        func_0x000107c6142c(param_3);
        goto LAB_101b65f5c;
      }
      func_0x000107c6142c(param_3);
    }
    if (lRam0000000112e04ed0 != -1) {
      func_0x000107c61568(0x112e04ed0,FUN_101b65cdc);
    }
    lVar5 = lRam0000000112e04ed8;
    if (*(long *)(lRam0000000112e04ed8 + 0x10) != 0) {
      func_0x000107c61434(lRam0000000112e04ed8);
      func_0x000100029284();
      if ((param_2 & 1) == 0) {
        func_0x000107c6142c(lVar5);
      }
      else {
        plVar1 = (long *)(*(long *)(lVar5 + 0x38) + param_1 * 0x10);
        lVar3 = *plVar1;
        lVar7 = plVar1[1];
        func_0x000107c61434(lVar7);
        func_0x000107c6142c(lVar5);
        func_0x000107c5fadc(lVar3,lVar7);
        func_0x000107c6142c(lVar7);
        lVar7 = 0;
        lVar4 = lVar3;
        func_0x000107c312f4(lVar3,0);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c5faec(lVar4);
          func_0x000107c61170(lVar4);
          goto LAB_101b65f5c;
        }
      }
    }
  }
  lVar5 = 0;
  lVar7 = 0;
LAB_101b65f5c:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = lVar5;
  return auVar8;
}



/* Entry: 101b65f84; end: 101b65fa3;  */

void FUN_101b65f84(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa728);
  return;
}



/* Entry: 101b65fa4; end: 101b6601f; -[_TtC16LensHintProvider23LensHintProviderFactory hintProviderWithExcludedHintIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65fa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  lVar1 = 0;
  FUN_101b65f84();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e04ea0) = param_3;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b66020; end: 101b6602f;  */

void FUN_101b66020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b66030; end: 101b6604f;  */

void FUN_101b66030(void)

{
  func_0x000107c61168(&PTR_PTR_112e054e8);
  return;
}



/* Entry: 101b66050; end: 101b660ab;  */

void FUN_101b66050(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101b660ac; end: 101b6619b;  */

undefined * FUN_101b660ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11044c8f0;
  func_0x000107c613fc(&UNK_11044c8f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  pcStack_40 = FUN_101b66274;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101b6627c;
  puStack_48 = &UNK_11044c908;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a8b30;
  func_0x000107c610f8(PTR_PTR_1126a8b30);
  func_0x000107c4787c();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101b6619c; end: 101b66273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b6619c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  plVar4 = &lStack_a0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fece30);
  puStack_50 = &UNK_11044c978;
  ppuStack_48 = &PTR_DAT_11044c988;
  lVar2 = 0;
  FUN_101b66cb8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_68,&UNK_11044c978);
  puStack_78 = &UNK_11044c978;
  ppuStack_70 = &PTR_DAT_11044c988;
  FUN_101b6639c(auStack_90,lVar3 + _DAT_112e056d0);
  *(undefined8 *)(lVar3 + _DAT_112e056d8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_a0,puVar1);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return (undefined1 *)plVar4;
}



/* Entry: 101b66274; end: 101b6627b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b66274(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  plVar4 = &lStack_a0;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fece30);
  puStack_50 = &UNK_11044c978;
  ppuStack_48 = &PTR_DAT_11044c988;
  lVar2 = 0;
  FUN_101b66cb8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_68,&UNK_11044c978);
  puStack_78 = &UNK_11044c978;
  ppuStack_70 = &PTR_DAT_11044c988;
  FUN_101b6639c(auStack_90,lVar3 + _DAT_112e056d0);
  *(undefined8 *)(lVar3 + _DAT_112e056d8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_a0,puVar1);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return (undefined1 *)plVar4;
}



/* Entry: 101b6627c; end: 101b662b3;  */

void FUN_101b6627c(long param_1)

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



/* Entry: 101b662b4; end: 101b662d7;  */

void FUN_101b662b4(long param_1,long param_2)

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



/* Entry: 101b662d8; end: 101b662fb;  */

void FUN_101b662d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b662fc; end: 101b6631f;  */

void FUN_101b662fc(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b660ac();
  *param_1 = param_2;
  return;
}



/* Entry: 101b66320; end: 101b6639b;  */

void FUN_101b66320(undefined8 param_1)

{
  if (lRam0000000112e05568 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e678258);
  return;
}



/* Entry: 101b6639c; end: 101b663df;  */

long FUN_101b6639c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101b663e0; end: 101b6648f;  */

long FUN_101b663e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  uVar1 = param_6;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return unaff_x20;
}



/* Entry: 101b66490; end: 101b6654f;  */

/* WARNING: Possible PIC construction at 0x000101b6650c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b66510) */
/* WARNING: Removing unreachable block (ram,0x000101b6653c) */
/* WARNING: Removing unreachable block (ram,0x000101b66518) */

void FUN_101b66490(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4b364();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x000101b673fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  *(long *)(unaff_x20 + 0x30) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar5);
  return;
}



/* Entry: 101b66550; end: 101b6659f;  */

undefined8 FUN_101b66550(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_101b6735c();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 101b665a0; end: 101b665e3;  */

void FUN_101b665a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b665e4; end: 101b66627;  */

void FUN_101b665e4(void)

{
  FUN_101b66490();
  return;
}



/* Entry: 101b66628; end: 101b66647;  */

void FUN_101b66628(void)

{
  func_0x000107c61168(&PTR_PTR_112e05650);
  return;
}



/* Entry: 101b66648; end: 101b66657;  */

undefined1  [16] FUN_101b66648(void)

{
  return ZEXT816(0x11044c978);
}



/* Entry: 101b66658; end: 101b66bc3;  */

void FUN_101b66658(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x000107c2bdd8();
  if (uVar2 == 1) {
    return;
  }
  if (uVar2 == 2) {
    return;
  }
  func_0x000107c4d2b4();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  func_0x000101b66cd8(0);
  uVar2 = param_1;
  func_0x000107c5fc54(param_1,uVar3);
  func_0x000107c61170(param_1);
  uVar8 = uVar2 & 0xffffffffffffff8;
  if (uVar2 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar8 + 0x10);
    if (uVar6 == 0) goto LAB_101b6677c;
  }
  else {
    uVar6 = uVar8;
    if (0x7fffffffffffffff < uVar2) {
      uVar6 = uVar2;
    }
    uVar7 = uVar6;
    func_0x000107c60480();
    if (uVar7 == 0) goto LAB_101b6677c;
    func_0x000107c60480();
  }
  uVar7 = 0;
  while (uVar6 != uVar7) {
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b66758);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar2 + uVar7 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar7;
      FUN_101b66d1c(uVar7,uVar2);
    }
    if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b66748);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000101b667a0();
    func_0x000107c61170(uVar4);
    uVar7 = uVar7 + 1;
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(uVar2);
      return;
    }
  }
LAB_101b6677c:
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101b66bc4; end: 101b66c1f; -[_TtC11SCLensMusic18LensMusicInspector musicUsageAllowedForLens:] */

uint FUN_101b66bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101b66658(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101b66c20; end: 101b66c7f; -[_TtC11SCLensMusic18LensMusicInspector init] */

void FUN_101b66c20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensMusic.LensMusicInspector",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b66c4c);
  (*pcVar1)();
}



/* Entry: 101b66c80; end: 101b66cb7; -[_TtC11SCLensMusic18LensMusicInspector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b66c80(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112e056d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e056d8));
  return;
}



/* Entry: 101b66cb8; end: 101b66d1b;  */

void FUN_101b66cb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa7e8);
  return;
}



/* Entry: 101b66d1c; end: 101b67087;  */

ulong FUN_101b66d1c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b66e00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b66e04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bb878;
    func_0x000107c61168(PTR_PTR_1126bb878);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bb878;
    func_0x000107c61168(PTR_PTR_1126bb878);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000101b66cd8(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b66ed0);
  (*pcVar2)();
}



/* Entry: 101b67088; end: 101b671bf;  */

void FUN_101b67088(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c52a00();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010d9d8990);
    func_0x000107c5d314(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101b671c0; end: 101b67223;  */

void FUN_101b671c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b67224; end: 101b67247;  */

void FUN_101b67224(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar2 == 0) {
        FUN_101b67088();
      }
      else {
        uVar3 = uVar2;
        func_0x000107c4d2b8();
        if ((uVar3 & 1) == 0) {
          func_0x000101b67124();
        }
        else {
          FUN_101b67088();
        }
        func_0x000107c615e8(uVar2);
      }
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101b67248; end: 101b6735b;  */

/* WARNING: Possible PIC construction at 0x000101b672e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b6732c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b672e8) */
/* WARNING: Removing unreachable block (ram,0x000101b67330) */
/* WARNING: Removing unreachable block (ram,0x000101b67338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67248(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    return;
  }
  func_0x000107c4d22c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  func_0x000107c4aeb4(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61174(*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113074f60));
  func_0x000107c4afac(uVar1);
  func_0x000107c61180();
  func_0x000107c4ae00();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101b6735c; end: 101b673b7;  */

/* WARNING: Possible PIC construction at 0x000101b67394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b67398) */

void FUN_101b6735c(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
    *(long *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x000107c615f0(lVar1);
    func_0x000107c42194(uVar2);
    FUN_101b67088();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 101b673b8; end: 101b6741b;  */

void FUN_101b673b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b6741c; end: 101b67427; -[SCLensMusicTrackingEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6741c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e05888;
  func_0x000107c61428(param_1 + _DAT_112e05888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b67428; end: 101b67433; -[SCLensMusicTrackingEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e05888;
  func_0x000107c61428(param_1 + _DAT_112e05888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b67434; end: 101b6743f; -[SCLensMusicTrackingEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67434(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e05890;
  func_0x000107c61428(param_1 + _DAT_112e05890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b67440; end: 101b6744b; -[SCLensMusicTrackingEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e05890;
  func_0x000107c61428(param_1 + _DAT_112e05890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b6744c; end: 101b67457; -[SCLensMusicTrackingEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6744c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e05898;
  func_0x000107c61428(param_1 + _DAT_112e05898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b67458; end: 101b67463; -[SCLensMusicTrackingEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e05898;
  func_0x000107c61428(param_1 + _DAT_112e05898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b67464; end: 101b6746f; -[SCLensMusicTrackingEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e058a0;
  func_0x000107c61428(param_1 + _DAT_112e058a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b67470; end: 101b6747b; -[SCLensMusicTrackingEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e058a0;
  func_0x000107c61428(param_1 + _DAT_112e058a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b6747c; end: 101b67487; -[SCLensMusicTrackingEntryPoint cameraUIScopedLensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6747c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e058a8;
  func_0x000107c61428(param_1 + _DAT_112e058a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b67488; end: 101b67493; -[SCLensMusicTrackingEntryPoint setCameraUIScopedLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67488(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e058a8;
  func_0x000107c61428(param_1 + _DAT_112e058a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b67494; end: 101b6749f; -[SCLensMusicTrackingEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67494(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e058b0;
  func_0x000107c61428(param_1 + _DAT_112e058b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b674a0; end: 101b674e3;  */

void FUN_101b674a0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b674e4; end: 101b674ef; -[SCLensMusicTrackingEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b674e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e058b0;
  func_0x000107c61428(param_1 + _DAT_112e058b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b674f0; end: 101b67543;  */

void FUN_101b674f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b67544; end: 101b6775f;  */

/* WARNING: Possible PIC construction at 0x000101b6765c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b6766c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b6767c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b67724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b67734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b67704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b67714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b676f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b67718) */
/* WARNING: Removing unreachable block (ram,0x000101b67708) */
/* WARNING: Removing unreachable block (ram,0x000101b67738) */
/* WARNING: Removing unreachable block (ram,0x000101b67728) */
/* WARNING: Removing unreachable block (ram,0x000101b67680) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101b67670) */
/* WARNING: Removing unreachable block (ram,0x000101b67660) */
/* WARNING: Removing unreachable block (ram,0x000101b676f8) */

void FUN_101b67544(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d280();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3f0f8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c3f2a0();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c4af24();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar5 = 0;
              FUN_101b66628();
              func_0x000107c613fc();
              *(undefined8 *)(lVar5 + 0x30) = 0;
              *(long *)(lVar5 + 0x10) = lVar3;
              func_0x000107c61174(lVar3);
              func_0x000107c61174();
              func_0x000107c61174();
              lVar1 = unaff_x20;
              func_0x000107c4aeb0();
              func_0x000107c61180();
              *(long *)(lVar5 + 0x18) = lVar1;
              *(long *)(lVar5 + 0x20) = lVar4;
              *(long *)(lVar5 + 0x28) = lVar2;
              FUN_101b66490();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101b67760; end: 101b67787; -[SCLensMusicTrackingEntryPoint begin] */

void FUN_101b67760(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b67544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b67788; end: 101b6782f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67788(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e058b8);
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x30);
    if (lVar1 == 0) {
      func_0x000107c6157c(lVar3);
      uVar2 = 0;
    }
    else {
      func_0x000107c6157c(lVar3);
      func_0x000107c6157c(lVar1);
      FUN_101b6735c();
      func_0x000107c61574(lVar1);
      uVar2 = *(undefined8 *)(lVar3 + 0x30);
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101b67830; end: 101b67863; -[SCLensMusicTrackingEntryPoint end] */

void FUN_101b67830(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b67788();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b67864; end: 101b67bb7;  */

void FUN_101b67864(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x726553636973756d;
          if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
             (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56870();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30)) ||
               (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53024();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0fff5d0)) ||
                 (func_0x000107c605b8(0xd000000000000024,0x800000010f000a30,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53100();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef10da6a0)) &&
                   (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCLensMusic/SCLensMusicTrackingEntryPoint.swift",0x2f,2,0x3a,
                                      0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b67bb8);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c80();
              }
            }
          }
          goto LAB_101b678f8;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_101b678f8;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_101b678f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b67bb8; end: 101b67c63; -[SCLensMusicTrackingEntryPoint setValue:forIvarName:] */

void FUN_101b67bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101b67864(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b67c64; end: 101b67d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67c64(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e05888,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e05890,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e05898,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e058a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e058a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e058b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e058b8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b67d28; end: 101b67d47; -[SCLensMusicTrackingEntryPoint init] */

void FUN_101b67d28(void)

{
  FUN_101b67c64();
  return;
}



/* Entry: 101b67d48; end: 101b67d7b;  */

void FUN_101b67d48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b67d7c; end: 101b67e03; -[SCLensMusicTrackingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67d7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e05888);
  func_0x000107c61610(param_1 + _DAT_112e05890);
  func_0x000107c61610(param_1 + _DAT_112e05898);
  func_0x000107c61610(param_1 + _DAT_112e058a0);
  func_0x000107c61610(param_1 + _DAT_112e058a8);
  func_0x000107c61610(param_1 + _DAT_112e058b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e058b8));
  return;
}



/* Entry: 101b67e04; end: 101b67e23;  */

void FUN_101b67e04(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa8b0);
  return;
}



/* Entry: 101b67e24; end: 101b67e2b;  */

undefined8 FUN_101b67e24(void)

{
  return 1;
}



/* Entry: 101b67e2c; end: 101b67ecb;  */

void FUN_101b67e2c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b67ecc; end: 101b67edb;  */

void FUN_101b67ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101b67edc; end: 101b680c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b67edc(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_80 [2];
  
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e058f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = 0x112e05968;
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)auStack_80 - extraout_x8;
  lVar3 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  lVar4 = 0x112e05970;
  func_0x0001000285a8(0x112e05970,&UNK_10d9d8b10);
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)(lVar7 - extraout_x8_01);
  *puVar8 = 0x40;
  (**(code **)(lVar5 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar4);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    FUN_101b6d488(lVar6,lVar7,puVar8);
  }
  else {
    func_0x000107c5fd10(lVar6,lVar7,&UNK_11044cb18,puVar8,&UNK_11044cb18);
  }
  (**(code **)(lVar5 + 8))(puVar8,lVar4);
  (**(code **)(lVar9 + 0x20))(unaff_x20 + _DAT_113803b00,lVar6,lVar2);
  (**(code **)(lVar10 + 0x20))(unaff_x20 + _DAT_112e058e8,lVar7,lVar3);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b680c8; end: 101b6812b; -[_TtC30LegacyMapServiceImplementation20LegacyMapEventBridge init] */

void FUN_101b680c8(void)

{
  FUN_101b67edc();
  return;
}



/* Entry: 101b6812c; end: 101b6826b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b6812c(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112e058f0;
  func_0x000107c61428(unaff_x20 + _DAT_112e058f0,auStack_78,1,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar5);
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b68254);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar7;
        FUN_101b6a33c(uVar7,uVar5);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b681f0);
        (*pcVar2)();
      }
      uVar8 = uVar7 + 1;
      func_0x000107c4218c();
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar6);
  }
  func_0x000107c6142c(uVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd2c();
  return;
}



/* Entry: 101b6826c; end: 101b682c3; -[_TtC30LegacyMapServiceImplementation20LegacyMapEventBridge dealloc] */

void FUN_101b6826c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_101b6812c();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b682c4; end: 101b6834b; -[_TtC30LegacyMapServiceImplementation20LegacyMapEventBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b682c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113803b00;
  lVar2 = 0x112e05968;
  func_0x0001000285a8(0x112e05968,&UNK_10d9d8b08);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  lVar1 = _DAT_112e058e8;
  lVar2 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e058f0));
  return;
}



/* Entry: 101b6834c; end: 101b68353;  */

void FUN_101b6834c(void)

{
  if (lRam0000000112e05920 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e678454);
  return;
}



/* Entry: 101b68354; end: 101b6838b;  */

void FUN_101b68354(undefined8 param_1)

{
  if (lRam0000000112e05920 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e678454);
  return;
}



/* Entry: 101b6838c; end: 101b68487;  */

void FUN_101b6838c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112e05930;
  lVar1 = 0x13f;
  func_0x000101b68440(0x13f,0x112e05930,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112e05938;
    lVar1 = 0x13f;
    func_0x000101b68440(0x13f,0x112e05938,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___sBbWV_11034d660 + 0x40;
      func_0x000107c61630(param_1,0x100,3,&lStack_38,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 101b68488; end: 101b685cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b68488(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e058f0;
  uVar2 = unaff_x20 + _DAT_112e058f0;
  func_0x000107c61428(uVar2,auStack_48,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    uVar4 = uVar2;
  }
  if (uVar4 == 0) {
    uVar3 = param_1;
    func_0x000107c4c458(param_1);
    func_0x000107c61180();
    FUN_101b685d0();
    func_0x000107c615e8(uVar3);
    uVar3 = param_1;
    func_0x000107c4c360(param_1);
    func_0x000107c61180();
    func_0x000101b68774();
    func_0x000107c615e8(uVar3);
    uVar3 = param_1;
    func_0x000107c4c41c(param_1);
    func_0x000107c61180();
    func_0x000101b688d8();
    func_0x000107c615e8(uVar3);
    uVar3 = param_1;
    func_0x000107c4c3cc(param_1);
    func_0x000107c61180();
    func_0x000101b68a3c();
    func_0x000107c615e8(uVar3);
    func_0x000107c4c334(param_1);
    func_0x000107c61180();
    func_0x000101b68ba0();
    func_0x000107c615e8(param_1);
  }
  else {
    FUN_101b69ef8();
    func_0x000107c613f8(&UNK_11044cce8,uVar2,0,0);
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101b685d0; end: 101b68d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b685d0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  uVar3 = param_1;
  func_0x000107c5df90();
  func_0x000107c61180();
  puVar4 = &UNK_11044cb38;
  func_0x000107c613fc(&UNK_11044cb38,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11044cc00;
  func_0x000107c613fc(&UNK_11044cc00,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_1);
  puVar6 = &UNK_11044cc28;
  func_0x000107c613fc(&UNK_11044cc28,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_50 = FUN_101b6a5ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b6a7e8;
  puStack_58 = &UNK_11044cc40;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar8 = uVar3;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar3);
  lVar2 = _DAT_112e058f0;
  func_0x000107c61428(unaff_x20 + _DAT_112e058f0,&puStack_70,0x21,0);
  func_0x000107c61174();
  FUN_101b6a258();
  uVar9 = *(ulong *)(unaff_x20 + lVar2);
  uVar10 = uVar9 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar10 + 0x10);
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_101b6a038(uVar9,uVar1 + 1,1);
    uVar10 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar10 + uVar1 * 8 + 0x20) = uVar8;
  *(ulong *)(unaff_x20 + lVar2) = uVar9;
  func_0x000107c614a8(&puStack_70);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101b68d04; end: 101b68e47;  */

void FUN_101b68d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_70,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 == 0) {
      func_0x000107c61170(param_4);
    }
    else {
      func_0x000107c3f750();
      uVar1 = param_1;
      func_0x000107c3f750(param_5);
      func_0x000107c5ea20(param_5);
      lStack_f0 = param_4;
      uStack_e8 = param_1;
      uStack_e0 = param_2;
      uStack_d8 = uVar1;
      lStack_c0 = param_4;
      uStack_b8 = param_1;
      uStack_b0 = param_2;
      uStack_a8 = uVar1;
      lStack_90 = param_4;
      uStack_88 = param_1;
      uStack_80 = param_2;
      uStack_78 = uVar1;
      func_0x000103b3598c(0x101b6a5f4,auStack_a0,0x101b6a604,auStack_d0,FUN_101b69024,0,0x101b6a614,
                          auStack_100,FUN_101b6911c,0,0x101b69120,0,0x101b69124,0,0x101b69128,0);
      func_0x000107c61170(param_4);
      func_0x000107c615e8(param_5);
    }
  }
  return;
}



/* Entry: 101b68e48; end: 101b69023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b68e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_4 & 1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0x4000000000000000;
  uVar2 = 0x112e05960;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd28((long)&uStack_d0 - extraout_x8,&uStack_d0,uVar2);
  (**(code **)(lVar3 + 8))((long)&uStack_d0 - extraout_x8,lVar1);
  return;
}



/* Entry: 101b69024; end: 101b69027;  */

void FUN_101b69024(void)

{
  return;
}



/* Entry: 101b69028; end: 101b6911b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b69028(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = param_4 & 1 | 0x80;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0x4000000000000000;
  uVar2 = 0x112e05960;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd28((long)&uStack_d0 - extraout_x8,&uStack_d0,uVar2);
  (**(code **)(lVar3 + 8))((long)&uStack_d0 - extraout_x8,lVar1);
  return;
}



/* Entry: 101b6911c; end: 101b6912b;  */

void FUN_101b6911c(void)

{
  return;
}



/* Entry: 101b6912c; end: 101b691b7;  */

void FUN_101b6912c(undefined8 param_1,long param_2)

{
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_80 = param_2;
    lStack_60 = param_2;
    lStack_40 = param_2;
    func_0x000103b364dc(0x101b6a324,auStack_50,0x101b6a32c,auStack_70,0x101b6a334,auStack_90);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101b691b8; end: 101b6935f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b691b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_80 = 0;
  uStack_88 = 4;
  uStack_68 = 0;
  uVar2 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd28((long)&uStack_b0 - extraout_x8,&uStack_b0,uVar2);
  (**(code **)(lVar3 + 8))((long)&uStack_b0 - extraout_x8,lVar1);
  return;
}



/* Entry: 101b69360; end: 101b6948f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b69360(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614b0(param_1);
  FUN_101b6a4f0(&uStack_98,param_1);
  uStack_108 = uStack_98;
  uStack_100 = uStack_90;
  uStack_f0 = uStack_80;
  uStack_f8 = uStack_88;
  uStack_c0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = uStack_78;
  uStack_58 = uStack_90;
  uStack_60 = uStack_98;
  uStack_68 = uStack_78;
  uStack_70 = uStack_80;
  func_0x000100402194(&uStack_60,auStack_118);
  func_0x000100402194(&uStack_70,auStack_118);
  uVar2 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd28(auStack_120 + -extraout_x8,&uStack_108,uVar2);
  func_0x000100bcb1dc(&uStack_60);
  func_0x000100bcb1dc(&uStack_70);
  (**(code **)(lVar3 + 8))(auStack_120 + -extraout_x8,lVar1);
  return;
}



/* Entry: 101b69490; end: 101b697b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b69490(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_c8 = *(undefined8 *)(param_1 + _DAT_112fed388);
    uStack_c0 = ((undefined8 *)(param_1 + _DAT_112fed388))[1];
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_98 = 0;
    uStack_a0 = 1;
    uStack_80 = 0;
    func_0x000107c61434();
    uVar2 = 0x112e05960;
    func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
    func_0x000107c5fd28(auStack_d0 + -extraout_x8,&uStack_c8,uVar2);
    func_0x000107c61170(param_2);
    (**(code **)(lVar3 + 8))(auStack_d0 + -extraout_x8,lVar1);
  }
  return;
}



/* Entry: 101b697b4; end: 101b697ff;  */

void FUN_101b697b4(long param_1,undefined8 param_2)

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



/* Entry: 101b69800; end: 101b69957; -[_TtC30LegacyMapServiceImplementation20LegacyMapEventBridge onNewViewportInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b69800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_1b0 [112];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
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
  uint uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112e05958;
  func_0x0001000285a8(0x112e05958,&UNK_10d9d8af8);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101b708f8(&uStack_d0,param_3);
  uStack_f8 = (ulong)uStack_88 | 0x8000000000000000;
  uStack_138 = uStack_c8;
  uStack_140 = uStack_d0;
  uStack_128 = uStack_b8;
  uStack_130 = uStack_c0;
  uStack_118 = CONCAT17((char)((ulong)uStack_a8 >> 0x38),
                        CONCAT16((char)((ulong)uStack_a8 >> 0x30),
                                 CONCAT15((char)((ulong)uStack_a8 >> 0x28),
                                          CONCAT14((char)((ulong)uStack_a8 >> 0x20),
                                                   (uint)((byte)uStack_a8 & 7)))));
  uStack_110 = (ulong)((uint5)uStack_a0 & 0x1ffffffff);
  uStack_100 = uStack_90;
  uStack_108 = uStack_98;
  uStack_120 = uStack_b0;
  uStack_e8 = uStack_78;
  uStack_f0 = uStack_80;
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  FUN_101b6a624(&uStack_d0,auStack_1b0);
  uVar2 = 0x112e05960;
  func_0x0001000285a8(0x112e05960,&UNK_10d9d8b00);
  func_0x000107c5fd28(auStack_1b0 + -extraout_x8,&uStack_140,uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000101b6a660(&uStack_d0);
  (**(code **)(lVar3 + 8))(auStack_1b0 + -extraout_x8,lVar1);
  return;
}



/* Entry: 101b69958; end: 101b69983;  */

long FUN_101b69958(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}


