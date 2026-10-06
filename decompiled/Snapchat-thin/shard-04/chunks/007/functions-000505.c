/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10387c684; end: 10387c6cf; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore allItems] */

void FUN_10387c684(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &UNK_1106a0828;
  FUN_10387c6d0(&UNK_1106a0828,0x10387d450,&UNK_1106a0840);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10387c6d0; end: 10387c7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10387c6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa4c00);
  func_0x000107c3db5c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c613fc(param_1,0x18,7);
    *(long *)(param_1 + 0x10) = lVar3;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10117fbac;
    uStack_58 = param_3;
    uStack_50 = param_2;
    lStack_48 = param_1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(lStack_48);
    lVar3 = lVar1;
    func_0x000107c4c280(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
  }
  return lVar3;
}



/* Entry: 10387c7c0; end: 10387c82f; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387c7c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112fa4c00);
  func_0x000107c61174();
  func_0x000107c412c0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10387c830; end: 10387c863; -[_TtC21ARBarFeatureLEBrowser31ExclusiveLensFilteringDataStore isEmpty] */

void FUN_10387c830(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387c864();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387c864; end: 10387ca23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10387c864(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = &UNK_1106a0670;
  FUN_10387c6d0(&UNK_1106a0670,FUN_10387cb4c,&UNK_1106a0688);
  if (puVar1 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_10387d3d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = 1;
    func_0x000107c6010c(1);
    func_0x000107c451b0(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = puVar1;
    func_0x000107c5c6c0(puVar1);
    func_0x000107c61180();
    puVar5 = &UNK_1106a0620;
    func_0x000107c613fc(&UNK_1106a0620,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    pcStack_50 = FUN_10387ca24;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101218f4c;
    puStack_58 = &UNK_1106a0638;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar5);
    puVar5 = puVar3;
    func_0x000107c5c320(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c3e924(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar2;
    func_0x000107c43bf4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  return puVar5;
}



/* Entry: 10387ca24; end: 10387ca63;  */

void FUN_10387ca24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40808();
  uVar1 = (ulong)(param_1 == 0);
  func_0x000107c5fca0(uVar1);
  func_0x000107c3fefc(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10387ca64; end: 10387ca7f;  */

void FUN_10387ca64(long param_1,long param_2)

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



/* Entry: 10387ca80; end: 10387cb4b;  */

void FUN_10387ca80(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  lStack_38 = 0;
  uVar1 = 0;
  FUN_10387d3d8(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_2,&lStack_38,uVar1);
  lVar2 = lStack_38;
  if (lStack_38 == 0) {
    lVar2 = 0;
    FUN_10387d3d8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174();
  }
  else {
    param_2 = lStack_38;
    FUN_10387cb54();
    func_0x000107c6142c(lVar2);
    lVar2 = 0x112f59b48;
    func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
  }
  param_1[3] = lVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10387cb4c; end: 10387cb53;  */

void FUN_10387cb4c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  lStack_38 = 0;
  uVar1 = 0;
  FUN_10387d3d8(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_2,&lStack_38,uVar1);
  lVar2 = lStack_38;
  if (lStack_38 == 0) {
    lVar2 = 0;
    FUN_10387d3d8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174();
  }
  else {
    param_2 = lStack_38;
    FUN_10387cb54();
    func_0x000107c6142c(lVar2);
    lVar2 = 0x112f59b48;
    func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
  }
  param_1[3] = lVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10387cb54; end: 10387cd07;  */

undefined * FUN_10387cb54(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_70;
  ulong uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10387ccc4);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        func_0x0001020a4b50(uVar9,param_1);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10387ccc0);
        (*pcVar2)();
      }
      uVar10 = uVar9 + 1;
      uStack_68 = uVar5;
      FUN_10387cd08(&lStack_70,&uStack_68,unaff_x20);
      func_0x000107c61170(uVar5);
      lVar1 = lStack_70;
      if (lStack_70 != 0) {
        puVar4 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar6 < 0)) ||
           (puVar4 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar3 = puVar6;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_103174ed0(0,puVar3 + 1,1,puVar6);
        }
        uVar7 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar5 = *(ulong *)(uVar7 + 0x10);
        puVar6 = puVar4;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_103174ed0(puVar6,uVar5 + 1,1,puVar4);
          uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
        *(long *)(uVar7 + uVar5 * 8 + 0x20) = lVar1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar8);
  }
  return puVar6;
}



/* Entry: 10387cd08; end: 10387d04b;  */

void FUN_10387cd08(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar12 = *param_2;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar2 = &UNK_1106a06c0;
  func_0x000107c613fc(&UNK_1106a06c0,0x18,7);
  *(ulong **)(puVar2 + 0x10) = &uStack_68;
  puVar3 = &UNK_1106a06e8;
  func_0x000107c613fc(&UNK_1106a06e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x10387d46c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10387d04c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1020995dc;
  puStack_88 = &UNK_1106a0700;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_1106a0738;
  func_0x000107c613fc(&UNK_1106a0738,0x18,7);
  *(ulong **)(puVar5 + 0x10) = &uStack_70;
  puVar6 = &UNK_1106a0760;
  func_0x000107c613fc(&UNK_1106a0760,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10387d054;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = FUN_10387d080;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102500714;
  puStack_88 = &UNK_1106a0778;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar11 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar11);
  func_0x000107c4c684(uVar12);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  if (uStack_68 == 0) {
    if (uStack_70 == 0) {
      *param_1 = uVar12;
      func_0x000107c61174(uVar12);
      goto LAB_10387cf80;
    }
    uVar8 = uStack_70;
    func_0x000107c61174();
    uVar9 = uVar8;
    FUN_10387d088();
    uVar13 = uVar9;
    func_0x000107c4a7d4();
    func_0x000107c61180();
    uVar12 = 0;
    FUN_10387d3d8(0,0x112ea2a98,&PTR_PTR_1126ccd78);
    uVar10 = uVar13;
    func_0x000107c5fc54(uVar13,uVar12);
    func_0x000107c61170(uVar13);
    if (uVar10 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar13 = uVar10;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar10);
    if (uVar13 != 0) {
      puVar11 = PTR_PTR_1126ccc20;
      func_0x000107c61168();
      func_0x000107c40380();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      *param_1 = puVar11;
      goto LAB_10387cf80;
    }
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
  }
  else {
    uVar8 = uStack_68;
    func_0x000107c4a3a4();
    if ((uVar8 & 1) == 0) {
      func_0x000107c61174(uVar12);
      *param_1 = uVar12;
      goto LAB_10387cf80;
    }
  }
  *param_1 = 0;
LAB_10387cf80:
  func_0x000107c61170(uStack_70);
  uVar8 = uStack_68;
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar8);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x8e,0x3a,0x11,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10387d030);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x8e,0x3d,0x20,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387d034);
  (*pcVar1)();
}



/* Entry: 10387d04c; end: 10387d053;  */

void FUN_10387d04c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10387d054; end: 10387d07f;  */

void FUN_10387d054(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10387d080; end: 10387d087;  */

void FUN_10387d080(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10387d088; end: 10387d3d7;  */

undefined * FUN_10387d088(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  byte bStack_79;
  undefined *puStack_78;
  
  func_0x000107c4a7d4();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_10387d3d8(0,0x112ea2a98,&PTR_PTR_1126ccd78);
  uVar6 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if (uVar6 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar12 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    uStack_b8 = uVar6 & 0xffffffffffffff8;
    uVar13 = 0;
    do {
      while( true ) {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_b8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10387d300);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(uVar6 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar13;
          FUN_1033429ec(uVar13,uVar6);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10387d2fc);
          (*pcVar4)();
        }
        bStack_79 = 0;
        puVar8 = &UNK_1106a07b0;
        func_0x000107c613fc(&UNK_1106a07b0,0x18,7);
        *(byte **)(puVar8 + 0x10) = &bStack_79;
        puVar9 = &UNK_1106a07d8;
        func_0x000107c613fc(&UNK_1106a07d8,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = 0x10387d418;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        uStack_90 = 0x10387d468;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1020995dc;
        puStack_98 = &UNK_1106a07f0;
        ppuVar10 = &puStack_b0;
        puStack_88 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar2 = puStack_88;
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar2);
        func_0x000107c4c688(uVar7);
        func_0x000107c60bd0(ppuVar10);
        bVar3 = bStack_79;
        func_0x000107c61574(puVar8);
        puVar8 = puVar9;
        func_0x000107c61544(puVar9,"",0x8e,0x54,0x11,1);
        func_0x000107c61574(puVar9);
        if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10387d304);
          (*pcVar4)();
        }
        if ((bVar3 & 1) == 0) break;
        func_0x000107c61170(uVar7);
        uVar13 = uVar13 + 1;
        if (uVar1 == uVar12) goto LAB_10387d328;
      }
      puVar8 = puVar11;
      func_0x000107c61558();
      puStack_78 = puVar11;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_103346338(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar13 = *(ulong *)(puStack_78 + 0x10);
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar13) {
        FUN_103346338(1 < *(ulong *)(puStack_78 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puStack_78 + 0x10) = uVar13 + 1;
      *(ulong *)(puStack_78 + uVar13 * 8 + 0x20) = uVar7;
      puVar11 = puStack_78;
      uVar13 = uVar1;
    } while (uVar1 != uVar12);
  }
LAB_10387d328:
  func_0x000107c6142c(uVar6);
  puVar8 = PTR_PTR_1126cd128;
  func_0x000107c61168(PTR_PTR_1126cd128);
  func_0x000107c4b0b8();
  func_0x000107c61180();
  puVar9 = puVar11;
  func_0x000107c5fc48(puVar11,uVar5);
  func_0x000107c61574(puVar11);
  puVar11 = puVar8;
  func_0x000107c5e614(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  puVar8 = puVar11;
  func_0x000107c3ecc8(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  return puVar8;
}



/* Entry: 10387d3d8; end: 10387d43b;  */

void FUN_10387d3d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10387d43c; end: 10387d46f;  */

void FUN_10387d43c(long param_1,long param_2)

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



/* Entry: 10387d470; end: 10387d4cf; -[_TtC21ARBarFeatureLEBrowser46InjectedCategoryLensExplorerCategoriesProvider init] */

void FUN_10387d470(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.InjectedCategoryLensExplorerCategoriesProvider",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387d49c);
  (*pcVar1)();
}



/* Entry: 10387d4d0; end: 10387d517; -[_TtC21ARBarFeatureLEBrowser46InjectedCategoryLensExplorerCategoriesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387d4d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4c38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa4c40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa4c48));
  return;
}



/* Entry: 10387d518; end: 10387d537;  */

void FUN_10387d518(void)

{
  func_0x000107c61168(&PTR_PTR_1128f61d8);
  return;
}



/* Entry: 10387d538; end: 10387d56b; -[_TtC21ARBarFeatureLEBrowser46InjectedCategoryLensExplorerCategoriesProvider categoriesResponse] */

void FUN_10387d538(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387d56c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387d56c; end: 10387d64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10387d56c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa4c38);
  func_0x000107c3f6f0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1106a0878;
  func_0x000107c613fc(&UNK_1106a0878,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x10387de40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10387e530;
  puStack_48 = &UNK_1106a08b8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 10387d64c; end: 10387d783;  */

void FUN_10387d64c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1106a08f0;
  func_0x000107c613fc(&UNK_1106a08f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10387de48;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_50 = 0x10387de50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1033c6f34;
  puStack_58 = &UNK_1106a0908;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9d,0x18,0x2b,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    param_1[3] = uVar5;
    func_0x000107c61574(param_3);
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387d784);
  (*pcVar1)();
}



/* Entry: 10387d784; end: 10387d89f;  */

void FUN_10387d784(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000107c61174(param_2);
      lVar1 = param_2;
      func_0x000107c3da44();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c40794();
      func_0x000107c615e8(lVar1);
      FUN_10387da58(lVar2);
      lVar1 = param_2;
      func_0x000107c4ce20(param_2);
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126cd118;
      func_0x000107c610f8();
      func_0x000107c4564c();
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
      uVar4 = 0;
      FUN_10387de58(0,0x112f627c8,&PTR_PTR_1126cd118);
      param_1[3] = uVar4;
      func_0x000107c61170(param_2);
      *param_1 = puVar3;
      return;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10387d8a0; end: 10387d8d3; -[_TtC21ARBarFeatureLEBrowser46InjectedCategoryLensExplorerCategoriesProvider categoriesAggregator] */

void FUN_10387d8a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387d8d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387d8d4; end: 10387da4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10387d8d4(void)

{
  undefined8 uVar1;
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
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa4c38);
  func_0x000107c3f6e4(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1106a0878;
  func_0x000107c613fc(&UNK_1106a0878,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10387da50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10387dda4;
  puStack_48 = &UNK_1106a0890;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 10387da50; end: 10387da57;  */

void FUN_10387da50(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = param_2;
    func_0x000107c614f0();
    func_0x000107c615f0(param_2);
  }
  else {
    func_0x000107c40794();
    FUN_10387da58();
    uVar2 = param_2;
    func_0x000107c614f0();
    func_0x000107c61170(lVar1);
  }
  param_1[3] = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10387da58; end: 10387dda3;  */

/* WARNING: Possible PIC construction at 0x00010387dadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387db5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387db9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387dcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387dd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387dc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387dbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387dc88) */
/* WARNING: Removing unreachable block (ram,0x00010387dd50) */
/* WARNING: Removing unreachable block (ram,0x00010387dd84) */
/* WARNING: Removing unreachable block (ram,0x00010387dd54) */
/* WARNING: Removing unreachable block (ram,0x00010387dcf0) */
/* WARNING: Removing unreachable block (ram,0x00010387dba0) */
/* WARNING: Removing unreachable block (ram,0x00010387dbac) */
/* WARNING: Removing unreachable block (ram,0x00010387db60) */
/* WARNING: Removing unreachable block (ram,0x00010387db68) */
/* WARNING: Removing unreachable block (ram,0x00010387dc3c) */
/* WARNING: Removing unreachable block (ram,0x00010387db70) */
/* WARNING: Removing unreachable block (ram,0x00010387dc4c) */
/* WARNING: Removing unreachable block (ram,0x00010387dc50) */
/* WARNING: Removing unreachable block (ram,0x00010387db98) */
/* WARNING: Removing unreachable block (ram,0x00010387dae0) */
/* WARNING: Removing unreachable block (ram,0x00010387dc98) */
/* WARNING: Removing unreachable block (ram,0x00010387dca0) */
/* WARNING: Removing unreachable block (ram,0x00010387daec) */
/* WARNING: Removing unreachable block (ram,0x00010387dcb0) */
/* WARNING: Removing unreachable block (ram,0x00010387dcf4) */
/* WARNING: Removing unreachable block (ram,0x00010387dd0c) */
/* WARNING: Removing unreachable block (ram,0x00010387dd10) */
/* WARNING: Removing unreachable block (ram,0x00010387dcd8) */
/* WARNING: Removing unreachable block (ram,0x00010387daf8) */
/* WARNING: Removing unreachable block (ram,0x00010387db08) */
/* WARNING: Removing unreachable block (ram,0x00010387dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010387db10) */
/* WARNING: Removing unreachable block (ram,0x00010387dc94) */
/* WARNING: Removing unreachable block (ram,0x00010387db20) */
/* WARNING: Removing unreachable block (ram,0x00010387db2c) */
/* WARNING: Removing unreachable block (ram,0x00010387dc90) */
/* WARNING: Removing unreachable block (ram,0x00010387db38) */
/* WARNING: Removing unreachable block (ram,0x00010387dbf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387da58(undefined **param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112fa4c48) + 0x50);
  if (lVar3 == 0) {
    ppuVar2 = param_1;
    func_0x000107c415a0();
    func_0x000107c61180();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f30b98;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f30b98);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      func_0x000107c49720(param_1);
    }
    else {
      func_0x000107c5faec();
    }
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000107c3f6e0(param_1);
    func_0x000107c61180();
    uVar1 = 0;
    FUN_10387de58(0,0x112f1dfa0,&PTR_PTR_1126cce38);
    func_0x000107c5fc54(param_1,uVar1);
    ppuVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10387dda4; end: 10387de23;  */

void FUN_10387dda4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10387de24; end: 10387de57;  */

void FUN_10387de24(long param_1,long param_2)

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



/* Entry: 10387de58; end: 10387de97;  */

void FUN_10387de58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10387de98; end: 10387dea7;  */

void FUN_10387de98(long param_1,long param_2)

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



/* Entry: 10387dea8; end: 10387deeb;  */

void FUN_10387dea8(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  (*param_3)();
  uVar1 = 0x112f59b48;
  func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10387deec; end: 10387df4b; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore init] */

void FUN_10387deec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.InjectedCategoryLensExplorerDataStore",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387df18);
  (*pcVar1)();
}



/* Entry: 10387df4c; end: 10387dfab; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010387df90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387df94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387df4c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa4c78 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa4c80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa4c88 + 8));
  return;
}



/* Entry: 10387dfac; end: 10387dfcb;  */

void FUN_10387dfac(void)

{
  func_0x000107c61168(&PTR_PTR_1128f62a8);
  return;
}



/* Entry: 10387dfcc; end: 10387e047; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387dfcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa4c90);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126ccc80;
  func_0x000107c610f8(PTR_PTR_1126ccc80);
  func_0x000107c48aec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10387e048; end: 10387e14b; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore allItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387e048(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fa4c80);
  puVar2 = &UNK_1106a0940;
  func_0x000107c613fc(&UNK_1106a0940,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  puVar3 = &UNK_1106a0968;
  func_0x000107c613fc(&UNK_1106a0968,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10387e1e4;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_40 = FUN_10387e1e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10117fbac;
  puStack_48 = &UNK_1106a0980;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4c280(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10387e14c; end: 10387e197; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387e14c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa4c78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fa4c78))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10387e198; end: 10387e1e3; -[_TtC21ARBarFeatureLEBrowser37InjectedCategoryLensExplorerDataStore isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387e198(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112fa4c88);
  func_0x000107c61174();
  lVar2 = param_1;
  (*pcVar1)();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10387e1e4; end: 10387e1e7;  */

undefined * FUN_10387e1e4(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  uVar3 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(param_1,&puStack_68,uVar3);
  puVar12 = puStack_68;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar14 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((ulong)puStack_68 >> 0x3e == 0) {
      puVar11 = *(undefined **)(puVar14 + 0x10);
    }
    else {
      puVar11 = puStack_68;
      if (-1 < (long)puStack_68) {
        puVar11 = puVar14;
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar14 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4b8);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(puVar12 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar4 = puVar10;
            func_0x000100ff3f88(puVar10,puVar12);
          }
          puVar1 = puVar10 + 1;
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4b4);
            (*pcVar2)();
          }
          puVar5 = puVar4;
          func_0x000107c49c88();
          if (((ulong)puVar5 & 1) == 0) break;
          func_0x000107c61170(puVar4);
          puVar10 = puVar10 + 1;
          if (puVar1 == puVar11) goto LAB_10387e3a8;
        }
        puVar6 = puVar9;
        func_0x000107c61558();
        puStack_68 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001019d4adc(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar13 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar13) {
          func_0x0001019d4adc(1 < *(ulong *)(puStack_68 + 0x18),uVar13 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_68 + uVar13 * 8 + 0x20) = puVar4;
        puVar9 = puStack_68;
        puVar10 = puVar1;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      } while (puVar1 != puVar11);
    }
LAB_10387e3a8:
    func_0x000107c6142c(puVar12);
    puStack_68 = puVar6;
    FUN_1033ca8f4(0,0,0);
    puVar14 = puStack_68;
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar12 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar12 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar12 != (undefined *)0x0) {
      uVar13 = 0;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4c0);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(puVar9 + uVar13 * 8 + 0x20);
          func_0x000107c61174(uVar7);
        }
        else {
          uVar7 = uVar13;
          func_0x000100ff3f88(uVar13,puVar9);
        }
        puVar11 = (undefined *)(uVar13 + 1);
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4bc);
          (*pcVar2)();
        }
        puVar6 = PTR_PTR_1126ccc20;
        func_0x000107c61168();
        uVar8 = uVar13;
        FUN_10388b2b8(uVar13);
        func_0x000107c4b244();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        uVar7 = *(ulong *)(puVar14 + 0x10);
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar7) {
          FUN_1033ca8f4(1 < *(ulong *)(puVar14 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined **)(puStack_68 + uVar7 * 8 + 0x20) = puVar6;
        uVar13 = uVar13 + 1;
        puVar14 = puStack_68;
      } while (puVar11 != puVar12);
    }
    func_0x000107c61574(puVar9);
  }
  return puVar14;
}



/* Entry: 10387e1e8; end: 10387e22b;  */

void FUN_10387e1e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0x112f59b48;
  func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10387e22c; end: 10387e247;  */

void FUN_10387e22c(long param_1,long param_2)

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



/* Entry: 10387e248; end: 10387e50f;  */

undefined * FUN_10387e248(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  puStack_68 = (undefined *)0x0;
  uVar3 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc50(param_1,&puStack_68,uVar3);
  puVar12 = puStack_68;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_68 != (undefined *)0x0) {
    puVar14 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((ulong)puStack_68 >> 0x3e == 0) {
      puVar11 = *(undefined **)(puVar14 + 0x10);
    }
    else {
      puVar11 = puStack_68;
      if (-1 < (long)puStack_68) {
        puVar11 = puVar14;
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar14 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4b8);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(puVar12 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar4 = puVar10;
            func_0x000100ff3f88(puVar10,puVar12);
          }
          puVar1 = puVar10 + 1;
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4b4);
            (*pcVar2)();
          }
          puVar5 = puVar4;
          func_0x000107c49c88();
          if (((ulong)puVar5 & 1) == 0) break;
          func_0x000107c61170(puVar4);
          puVar10 = puVar10 + 1;
          if (puVar1 == puVar11) goto LAB_10387e3a8;
        }
        puVar6 = puVar9;
        func_0x000107c61558();
        puStack_68 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001019d4adc(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar13 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar13) {
          func_0x0001019d4adc(1 < *(ulong *)(puStack_68 + 0x18),uVar13 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_68 + uVar13 * 8 + 0x20) = puVar4;
        puVar9 = puStack_68;
        puVar10 = puVar1;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      } while (puVar1 != puVar11);
    }
LAB_10387e3a8:
    func_0x000107c6142c(puVar12);
    puStack_68 = puVar6;
    FUN_1033ca8f4(0,0,0);
    puVar14 = puStack_68;
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar12 = puVar9;
      func_0x000107c60480();
    }
    else {
      puVar12 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar12 != (undefined *)0x0) {
      uVar13 = 0;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4c0);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(puVar9 + uVar13 * 8 + 0x20);
          func_0x000107c61174(uVar7);
        }
        else {
          uVar7 = uVar13;
          func_0x000100ff3f88(uVar13,puVar9);
        }
        puVar11 = (undefined *)(uVar13 + 1);
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10387e4bc);
          (*pcVar2)();
        }
        puVar6 = PTR_PTR_1126ccc20;
        func_0x000107c61168();
        uVar8 = uVar13;
        FUN_10388b2b8(uVar13);
        func_0x000107c4b244();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
        uVar7 = *(ulong *)(puVar14 + 0x10);
        puStack_68 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar7) {
          FUN_1033ca8f4(1 < *(ulong *)(puVar14 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined **)(puStack_68 + uVar7 * 8 + 0x20) = puVar6;
        uVar13 = uVar13 + 1;
        puVar14 = puStack_68;
      } while (puVar11 != puVar12);
    }
    func_0x000107c61574(puVar9);
  }
  return puVar14;
}



/* Entry: 10387e510; end: 10387e52f;  */

void FUN_10387e510(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 10387e530; end: 10387e5b3;  */

void FUN_10387e530(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10387e5b4; end: 10387e5e7; -[_TtC21ARBarFeatureLEBrowser47InjectedNamespaceLensExplorerCategoriesProvider categoriesResponse] */

void FUN_10387e5b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10387e5e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10387e5e8; end: 10387e6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10387e5e8(void)

{
  undefined8 uVar1;
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
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa4cc0);
  func_0x000107c3f6f0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1106a09b8;
  func_0x000107c613fc(&UNK_1106a09b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10387f104;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10387e530;
  puStack_48 = &UNK_1106a09d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 10387e6c8; end: 10387e7ff;  */

void FUN_10387e6c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1106a0a08;
  func_0x000107c613fc(&UNK_1106a0a08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10387f128;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_10387f130;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1033c6f34;
  puStack_58 = &UNK_1106a0a20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9e,0xd,0x2b,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    param_1[3] = uVar5;
    func_0x000107c61574(param_3);
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387e800);
  (*pcVar1)();
}



/* Entry: 10387e800; end: 10387e8ef;  */

/* WARNING: Possible PIC construction at 0x00010387e84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387e850) */

void FUN_10387e800(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_10387e8d4;
    lVar1 = 0;
    func_0x00010387f150(0,0x112f627c8,&PTR_PTR_1126cd118);
    param_1[3] = lVar1;
    *param_1 = param_2;
  }
  else if (param_2 == 0) {
    func_0x000107c61170();
LAB_10387e8d4:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10387e8f0; end: 10387ee07;  */

/* WARNING: Possible PIC construction at 0x00010387ea04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387eb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387ea08) */
/* WARNING: Removing unreachable block (ram,0x00010387eb58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10387e8f0(undefined *param_1)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long lVar15;
  long unaff_x20;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_90 = (long)&lStack_90 - extraout_x8;
  puStack_88 = param_1;
  func_0x000107c3da44();
  func_0x000107c61180();
  puStack_80 = param_1;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x00010387f150(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  puVar5 = param_1;
  func_0x000107c5fc54(param_1,uVar4);
  func_0x000107c61170(param_1);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar16 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar16 != (undefined *)0x0) {
    uVar17 = 0;
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112fa4cc8);
    puVar12 = (undefined *)((ulong *)(unaff_x20 + _DAT_112fa4cc8))[1];
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10387edbc);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar5 + uVar17 * 8 + 0x20);
        goto code_r0x000107c61174;
      }
      uVar7 = uVar17;
      puVar14 = puVar5;
      func_0x000102e2a3b4();
      puVar13 = (undefined *)(uVar17 + 1);
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10387eaa0);
        (*pcVar2)();
      }
      uVar9 = uVar7;
      func_0x000107c3f70c();
      func_0x000107c61180();
      uVar6 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      if ((uVar6 == uVar8) && (puVar14 == puVar12)) {
        func_0x000107c6142c(puVar5);
        puVar5 = puVar14;
LAB_10387eab0:
        func_0x000107c6142c(puVar5);
        uVar17 = uVar7;
        func_0x000107c51ba4();
        func_0x000107c61180();
        uVar8 = uVar17;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar17);
        uVar17 = uVar8;
        FUN_10387ee30();
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
        func_0x000107c51ba4(uVar7);
        func_0x000107c61180();
        uVar9 = uVar8;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar8);
        uVar8 = uVar17;
        uVar6 = uVar9;
        func_0x00010142cfc4(uVar17,uVar9);
        func_0x000107c6142c(uVar9);
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar7;
          func_0x000107c3f70c();
          func_0x000107c61180();
          uVar9 = uVar6;
          if (uVar8 == 0) {
            func_0x000107c5faec();
            uVar9 = uVar6;
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar6);
          }
          uVar6 = uVar7;
          func_0x000107c4d3e4();
          func_0x000107c61180();
          lVar3 = lStack_90;
          if (uVar6 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar9);
          }
          func_0x000107c42f00(uVar7);
          uVar9 = uVar7;
          func_0x000107c44fc0();
          func_0x000107c61180();
          bVar1 = uVar9 == 0;
          if (bVar1) {
            func_0x000107c5ede0();
          }
          else {
            func_0x000107c5edb4(lVar3);
            func_0x000107c61170(uVar9);
            uVar9 = 0;
            func_0x000107c5ede0();
          }
          lVar15 = *(long *)(uVar9 - 8);
          (**(code **)(lVar15 + 0x38))(lVar3,bVar1,1,uVar9);
          uVar10 = uVar17;
          func_0x000107c5fc48(uVar17,PTR___sSSN_11034da80);
          func_0x000107c6142c(uVar17);
          func_0x000107c5ede0(0);
          uVar17 = 1;
          lVar11 = lVar3;
          (**(code **)(lVar15 + 0x30))(lVar3,1,uVar9);
          lVar18 = 0;
          if ((int)lVar11 != 1) {
            func_0x000107c5ed90();
            (**(code **)(lVar15 + 8))(lVar3,uVar9);
            uVar17 = uVar9;
            lVar18 = lVar11;
          }
          puVar5 = PTR_PTR_1126cce38;
          func_0x000107c610f8(PTR_PTR_1126cce38);
          func_0x000107c45d54();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(lVar18);
          uVar8 = uVar7;
          func_0x000107c3f70c();
          func_0x000107c61180();
          if (uVar8 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar17);
          }
          puVar16 = puStack_80;
          func_0x000107c49720(puStack_80);
          func_0x000107c61170(uVar8);
          func_0x000107c3eb40(puVar16);
          puVar12 = puStack_88;
          func_0x000107c4ce20(puStack_88);
          func_0x000107c61180();
          puVar13 = PTR_PTR_1126cd118;
          func_0x000107c610f8(PTR_PTR_1126cd118);
          func_0x000107c4564c();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(puVar16);
          func_0x000107c61170(puVar12);
          return puVar13;
        }
        func_0x000107c6142c(uVar17);
        puVar5 = puStack_88;
        goto code_r0x000107c61174;
      }
      func_0x000107c605b8(uVar6,puVar14,uVar8,puVar12,0);
      func_0x000107c6142c(puVar14);
      if ((uVar6 & 1) != 0) goto LAB_10387eab0;
      func_0x000107c61170(uVar7);
      uVar17 = uVar17 + 1;
    } while (puVar13 != puVar16);
  }
  func_0x000107c615e8(puStack_80);
  func_0x000107c6142c(puVar5);
  puVar5 = puStack_88;
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar5);
  return puVar5;
}



/* Entry: 10387ee08; end: 10387ee2f; -[_TtC21ARBarFeatureLEBrowser47InjectedNamespaceLensExplorerCategoriesProvider categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387ee08(long param_1)

{
  func_0x000107c3f6e4(*(undefined8 *)(param_1 + _DAT_112fa4cc0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10387ee30; end: 10387f033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10387ee30(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *(ulong *)(param_1 + 0x10);
  if ((uVar12 == 0) ||
     ((uVar7 = *(ulong *)(param_1 + 0x20),
      uVar7 != *(ulong *)(unaff_x20 + _DAT_112fa4cd0) ||
      *(ulong *)(param_1 + 0x28) != ((ulong *)(unaff_x20 + _DAT_112fa4cd0))[1] &&
      (func_0x000107c605b8(), (uVar7 & 1) == 0)))) {
    puVar11 = (ulong *)(unaff_x20 + _DAT_112fa4cd0);
    lVar8 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    uVar7 = *puVar11;
    uVar3 = puVar11[1];
    *(ulong *)(lVar8 + 0x20) = uVar7;
    *(ulong *)(lVar8 + 0x28) = uVar3;
    func_0x000107c61434(uVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        uVar2 = uVar13;
        if (uVar13 <= uVar12) {
          uVar2 = uVar12;
        }
        puVar11 = (ulong *)(param_1 + 0x28 + uVar13 * 0x10);
        uVar13 = uVar13 + 1;
        while( true ) {
          if (uVar13 - uVar2 == 1) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10387f034);
            (*pcVar6)();
          }
          uVar1 = puVar11[-1];
          uVar4 = *puVar11;
          if ((uVar1 != uVar7 || uVar4 != uVar3) &&
             (uVar9 = uVar1, func_0x000107c605b8(uVar1,uVar4,uVar7,uVar3,0), (uVar9 & 1) == 0))
          break;
          uVar13 = uVar13 + 1;
          puVar11 = puVar11 + 2;
          if (uVar13 - uVar12 == 1) goto LAB_10387eff8;
        }
        func_0x000107c61434(uVar4);
        puVar10 = puVar5;
        func_0x000107c61558();
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar5 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar4;
      } while (uVar13 != uVar12);
    }
LAB_10387eff8:
    func_0x00010109a32c(puVar5);
  }
  else {
    func_0x000107c61434(param_1);
    lVar8 = param_1;
  }
  return lVar8;
}



/* Entry: 10387f034; end: 10387f093; -[_TtC21ARBarFeatureLEBrowser47InjectedNamespaceLensExplorerCategoriesProvider init] */

void FUN_10387f034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.InjectedNamespaceLensExplorerCategoriesProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387f060);
  (*pcVar1)();
}



/* Entry: 10387f094; end: 10387f0e3; -[_TtC21ARBarFeatureLEBrowser47InjectedNamespaceLensExplorerCategoriesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010387f0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387f0c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f094(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa4cc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa4cc8 + 8))
  ;
  return;
}



/* Entry: 10387f0e4; end: 10387f103;  */

void FUN_10387f0e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6380);
  return;
}



/* Entry: 10387f104; end: 10387f12f;  */

void FUN_10387f104(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1106a0a08;
  func_0x000107c613fc(&UNK_1106a0a08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10387f128;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_10387f130;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1033c6f34;
  puStack_58 = &UNK_1106a0a20;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9e,0xd,0x2b,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    param_1[3] = uVar5;
    func_0x000107c61574();
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387e800);
  (*pcVar1)();
}



/* Entry: 10387f130; end: 10387f18f;  */

void FUN_10387f130(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10387f190; end: 10387f1ab;  */

void FUN_10387f190(long param_1,long param_2)

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



/* Entry: 10387f1ac; end: 10387f1d3; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f1ac(long param_1)

{
  func_0x000107c49cd4(*(undefined8 *)(param_1 + _DAT_112fa4d08));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10387f1d4; end: 10387f1e3; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4d00),PTR_s_isLoading_1125fb508);
  return;
}



/* Entry: 10387f1e4; end: 10387f20b; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator currentQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f1e4(long param_1)

{
  func_0x000107c40fc8(*(undefined8 *)(param_1 + _DAT_112fa4d00));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10387f20c; end: 10387f21b; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator setCurrentQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1879b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4d00),PTR_s_setCurrentQuery__11263f888);
  return;
}



/* Entry: 10387f21c; end: 10387f22b; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator canPerformQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4d00),PTR_s_canPerformQuery__1125a8dc0);
  return;
}



/* Entry: 10387f22c; end: 10387f32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa4d00);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fa4d08);
  puVar1 = &UNK_1106a0a80;
  func_0x000107c613fc(&UNK_1106a0a80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  uStack_60 = 0x10387f76c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1024ff1e4;
  puStack_68 = &UNK_1106a0a98;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(param_1);
  func_0x00010387f794(param_2,param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c50708(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10387f32c; end: 10387f487;  */

void FUN_10387f32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  puVar3 = &UNK_1106a0ad0;
  func_0x000107c613fc(&UNK_1106a0ad0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_1106a0af8;
  func_0x000107c613fc(&UNK_1106a0af8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10387f7a4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_70 = 0x10387f7ac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_1106a0b10;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar5);
  if (param_4 != (code *)0x0) {
    (*param_4)(param_1);
  }
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x97,0x2c,0x26,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10387f488);
  (*pcVar2)();
}



/* Entry: 10387f488; end: 10387f52f;  */

/* WARNING: Possible PIC construction at 0x00010387f500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387f504) */

void FUN_10387f488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ccc80;
  func_0x000107c610f8();
  func_0x000107c48aec();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_103321c48(0);
    func_0x000107c61174(puVar1);
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
    func_0x000107c5d568(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10387f530; end: 10387f5db; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator resultsForQuery:updatingBlock:] */

/* WARNING: Possible PIC construction at 0x00010387f5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387f5c4) */

void FUN_10387f530(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106a0a58;
    func_0x000107c613fc(&UNK_1106a0a58,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_10387f75c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10387f22c(param_3,pcVar2,puVar1);
  FUN_103170e78(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10387f5dc; end: 10387f693; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

/* WARNING: Possible PIC construction at 0x00010387f668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010387f678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387f66c) */
/* WARNING: Removing unreachable block (ram,0x00010387f67c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f5dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fa4d08);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c5d568(uVar1,param_2,param_3,param_4);
  func_0x000107c445fc(*(undefined8 *)(param_1 + _DAT_112fa4d00),param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10387f694; end: 10387f6a3; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112fa4d00),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 10387f6a4; end: 10387f703; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator init] */

void FUN_10387f6a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.InjectedNamespaceMergingQueryCoordinator",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10387f6d0);
  (*pcVar1)();
}



/* Entry: 10387f704; end: 10387f73b; -[_TtC21ARBarFeatureLEBrowser40InjectedNamespaceMergingQueryCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010387f720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010387f724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10387f704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa4d00));
  return;
}



/* Entry: 10387f73c; end: 10387f75b;  */

void FUN_10387f73c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6450);
  return;
}



/* Entry: 10387f75c; end: 10387f7bb;  */

void FUN_10387f75c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010387f768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10387f7bc; end: 10387f7df;  */

void FUN_10387f7bc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10387f7e0; end: 10387fc5b;  */

undefined * FUN_10387f7e0(undefined *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar8 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar5 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_01;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  if (lVar9 != 0) {
    func_0x000107c615f0(lVar9);
    puVar2 = param_1;
    func_0x000107c44fc0();
    func_0x000107c61180();
    bVar1 = puVar2 == (undefined *)0x0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(lVar10);
      func_0x000107c61170(puVar2);
      puVar2 = (undefined *)0x0;
      func_0x000107c5ede0();
    }
    lVar12 = *(long *)(puVar2 + -8);
    (**(code **)(lVar12 + 0x38))(lVar10,bVar1,1,puVar2);
    func_0x0001001021cc(lVar10,lVar11);
    func_0x000107c5ede0(0);
    puVar6 = (undefined *)0x1;
    lVar10 = lVar11;
    (**(code **)(lVar12 + 0x30))(lVar11,1,puVar2);
    if ((int)lVar10 != 1) {
      func_0x000107c5ed70();
      (**(code **)(lVar12 + 8))(lVar11,puVar2);
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar2 = &UNK_1106a0b48;
      func_0x000107c613fc(&UNK_1106a0b48,0x30,7);
      *(long *)(puVar2 + 0x10) = lVar9;
      *(long *)(puVar2 + 0x18) = lVar10;
      *(undefined **)(puVar2 + 0x20) = puVar6;
      *(undefined **)(puVar2 + 0x28) = param_1;
      pcStack_70 = FUN_103880290;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1004725e8;
      puStack_78 = &UNK_1106a0b60;
      ppuVar4 = &puStack_90;
      puStack_68 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      puVar6 = puStack_68;
      func_0x000107c615f0(lVar9);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c408f0(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar9);
      return puVar3;
    }
    func_0x000107c615e8(lVar9);
    func_0x0001000293e4(lVar11);
  }
  puVar2 = param_1;
  func_0x000107c3f70c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  puVar2 = puVar6;
  FUN_1038800a0(puVar3,puVar6);
  func_0x000107c6142c(puVar6);
  if (puVar3 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_88);
    puStack_90 = (undefined *)0xd000000000000021;
    uStack_88 = 0x800000010f170630;
    puVar6 = param_1;
    func_0x000107c3f70c(param_1);
    func_0x000107c61180();
    puVar3 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    func_0x000107c5fb78(puVar3,puVar2);
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0x3b,0xe100000000000000);
    func_0x000107c6142c(uStack_88);
    puStack_90 = (undefined *)0x3a6c7275;
    uStack_88 = 0xe400000000000000;
    func_0x000107c44fc0();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      func_0x000107c5edb4(lVar5);
      func_0x000107c61170(param_1);
    }
    lVar9 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(lVar9 + -8);
    (**(code **)(lVar10 + 0x38))(lVar5,param_1 == (undefined *)0x0,1,lVar9);
    func_0x0001001021cc(lVar5,lVar8);
    uVar7 = 1;
    lVar5 = lVar8;
    (**(code **)(lVar10 + 0x30))(lVar8,1,lVar9);
    if ((int)lVar5 == 1) {
      func_0x0001000293e4(lVar8);
      lVar5 = 0;
      uVar7 = 0xe000000000000000;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar10 + 8))(lVar8,lVar9);
    }
    func_0x000107c5fb78(lVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uStack_88);
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar6);
  }
  else {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar6;
}



/* Entry: 10387fc5c; end: 10387fe3f;  */

undefined *
FUN_10387fc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar2 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  uVar3 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  uVar4 = param_2;
  func_0x000107c45094(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_1106a0ba8;
  func_0x000107c613fc(&UNK_1106a0ba8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1038802d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10134a1dc;
  puStack_88 = &UNK_1106a0bc0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(uVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  puVar7 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar5 = &UNK_1106a0bf8;
  func_0x000107c613fc(&UNK_1106a0bf8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  pcStack_80 = (code *)0x1038802e0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106a0c10;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c615f0(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c408f0(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  return puVar7;
}



/* Entry: 10387fe40; end: 10388007f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10387fe40(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long alStack_58 [3];
  
  if (param_2 != 0) {
    alStack_58[1] = 0;
    alStack_58[2] = 0xe000000000000000;
    func_0x000107c614b0(param_2);
    func_0x000107c602fc(0x2d);
    uVar3 = 0x800000010f170630;
    func_0x000107c5fb78(0xd000000000000021,0x800000010f170630);
    func_0x000107c3f70c(param_3);
    func_0x000107c61180();
    uVar1 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    func_0x000107c5fb78(uVar1,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x3a726f727265203b,0xe800000000000000);
    uVar1 = 0x112d393f0;
    alStack_58[0] = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(alStack_58,alStack_58 + 1,uVar1,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(param_2);
    func_0x000107c6142c(alStack_58[2]);
  }
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  func_0x000107c61174(param_1);
  func_0x000107c4d664(param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c3fedc(param_4);
  return;
}



/* Entry: 103880080; end: 10388009f;  */

void FUN_103880080(void)

{
  FUN_10387f7e0();
  return;
}



/* Entry: 1038800a0; end: 10388028f;  */

void FUN_1038800a0(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f30a78;
  lVar2 = param_2;
  func_0x000107c5faec();
  lVar3 = lVar2;
  if (ppuVar1 == param_1 && lVar2 == param_2) {
LAB_1038801a4:
    func_0x000107c6142c(lVar3);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar2);
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f310d8;
      func_0x000107c5faec();
      if (ppuVar1 == param_1 && lVar3 == param_2) goto LAB_1038801a4;
      lVar2 = lVar3;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar3);
      if (((ulong)ppuVar1 & 1) != 0) goto LAB_1038801ac;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f31118;
      func_0x000107c5faec();
      if (ppuVar1 == param_1 && lVar2 == param_2) {
        func_0x000107c6142c(lVar2);
LAB_1038801d0:
        func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      }
      else {
        lVar3 = lVar2;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar2);
        if (((ulong)ppuVar1 & 1) != 0) goto LAB_1038801d0;
        ppuVar1 = &PTR____CFConstantStringClassReference_110f31138;
        func_0x000107c5faec();
        if ((ppuVar1 == param_1) && (lVar3 == param_2)) {
          func_0x000107c6142c(lVar3);
LAB_103880210:
          func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        }
        else {
          lVar2 = lVar3;
          func_0x000107c605b8();
          func_0x000107c6142c(lVar3);
          if (((ulong)ppuVar1 & 1) != 0) goto LAB_103880210;
          ppuVar1 = &PTR____CFConstantStringClassReference_110f31178;
          func_0x000107c5faec();
          if ((ppuVar1 == param_1) && (lVar2 == param_2)) {
            func_0x000107c6142c(lVar2);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c(lVar2);
            if (((ulong)ppuVar1 & 1) == 0) {
              return;
            }
          }
          func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        }
      }
      func_0x000107c5af98();
      goto LAB_1038801b0;
    }
  }
LAB_1038801ac:
  func_0x00010921d96c();
LAB_1038801b0:
  func_0x000107c61180();
  return;
}



/* Entry: 103880290; end: 1038802b7;  */

undefined * FUN_103880290(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar10 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  uVar6 = uVar3;
  func_0x000107c5fadc(uVar3,uVar2);
  uVar7 = uVar3;
  func_0x000107c5fadc(uVar3,uVar2);
  uVar8 = uVar1;
  func_0x000107c45094(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  puVar9 = &UNK_1106a0ba8;
  func_0x000107c613fc(&UNK_1106a0ba8,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar4;
  *(undefined8 *)(puVar9 + 0x18) = param_1;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1038802d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10134a1dc;
  puStack_88 = &UNK_1106a0bc0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar9 = puStack_78;
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar9);
  func_0x000107c5dc64(uVar8);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar8);
  puVar11 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar9 = &UNK_1106a0bf8;
  func_0x000107c613fc(&UNK_1106a0bf8,0x28,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar3;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  pcStack_80 = (code *)0x1038802e0;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106a0c10;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar9 = puStack_78;
  func_0x000107c615f0(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c408f0(puVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  return puVar11;
}



/* Entry: 1038802b8; end: 1038802d7;  */

void FUN_1038802b8(void)

{
  func_0x000107c61168(&PTR_PTR_112fa4d78);
  return;
}



/* Entry: 1038802d8; end: 10388031f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1038802d8(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long alStack_58 [3];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 != 0) {
    alStack_58[1] = 0;
    alStack_58[2] = 0xe000000000000000;
    func_0x000107c614b0(param_2);
    func_0x000107c602fc(0x2d);
    uVar5 = 0x800000010f170630;
    func_0x000107c5fb78(0xd000000000000021,0x800000010f170630);
    func_0x000107c3f70c(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c5fb78(uVar3,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0x3a726f727265203b,0xe800000000000000);
    uVar2 = 0x112d393f0;
    alStack_58[0] = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(alStack_58,alStack_58 + 1,uVar2,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(param_2);
    func_0x000107c6142c(alStack_58[2]);
  }
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  func_0x000107c61174(param_1);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c3fedc(uVar1);
  return;
}



/* Entry: 103880320; end: 103880527;  */

undefined * FUN_103880320(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if (param_1 == 0) {
    return (undefined *)0x0;
  }
  uVar11 = 0;
  uVar12 = *(ulong *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar11;
    if (uVar11 <= uVar12) {
      uVar1 = uVar12;
    }
    puVar9 = (undefined8 *)(param_1 + 0x30 + uVar11 * 0x18);
    do {
      if (uVar12 == uVar11) {
        puVar7 = PTR_PTR_1126ad7f0;
        func_0x000107c610f8(PTR_PTR_1126ad7f0);
        uVar8 = 0;
        func_0x0001038806f8(0);
        puVar5 = puVar6;
        func_0x000107c5fc48(puVar6,uVar8);
        func_0x000107c6142c(puVar6);
        func_0x000107c5fadc(param_3,param_4);
        func_0x000107c48570(param_2,puVar7);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(param_3);
        return puVar7;
      }
      uVar11 = uVar11 + 1;
      if (uVar1 + 1 == uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103880528);
        (*pcVar3)();
      }
      uVar8 = puVar9[-1];
      uVar2 = *puVar9;
      uVar13 = *(undefined4 *)(puVar9 + -2);
      puVar7 = PTR_PTR_1126ad7d8;
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar8,uVar2);
      func_0x000107c48a08(uVar13);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(uVar8);
      puVar9 = puVar9 + 3;
    } while (puVar7 == (undefined *)0x0);
    puVar5 = puVar6;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
       (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      FUN_103873e44(0,puVar4 + 1,1,puVar6);
    }
    uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar10 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_103873e44(puVar6,uVar1 + 1,1,puVar5);
      uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar7;
  } while( true );
}



/* Entry: 103880528; end: 1038806d7;  */

undefined * FUN_103880528(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = param_1[1];
  if (lVar3 == 1) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar7 = *param_1;
    uVar1 = param_1[2];
    FUN_103880320(uVar1,param_1[3],param_1[4],param_1[5]);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000107c5fadc(uVar7,lVar3);
    }
    puVar4 = PTR_PTR_1126ad7e8;
    func_0x000107c610f8(PTR_PTR_1126ad7e8);
    func_0x000107c46cd8();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar7);
  }
  lVar3 = param_1[7];
  if (lVar3 == 1) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar7 = param_1[6];
    uVar1 = param_1[8];
    FUN_103880320(uVar1,param_1[9],param_1[10],param_1[0xb]);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000107c5fadc(uVar7,lVar3);
    }
    puVar6 = PTR_PTR_1126ad7e8;
    func_0x000107c610f8(PTR_PTR_1126ad7e8);
    func_0x000107c46cd8();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar7);
  }
  lVar3 = param_1[0xd];
  if (lVar3 == 1) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar8 = param_1[0xc];
    uVar1 = param_1[0xe];
    FUN_103880320(uVar1,param_1[0xf],param_1[0x10],param_1[0x11]);
    uVar7 = 0;
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar8,lVar3);
      uVar7 = uVar8;
    }
    puVar5 = PTR_PTR_1126ad7e8;
    func_0x000107c610f8(PTR_PTR_1126ad7e8);
    func_0x000107c46cd8();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar7);
  }
  puVar2 = PTR_PTR_1126ad7e0;
  func_0x000107c610f8(PTR_PTR_1126ad7e0);
  func_0x000107c4553c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 1038806d8; end: 10388073b;  */

void FUN_1038806d8(void)

{
  func_0x000107c61168(&PTR_PTR_112fa4e18);
  return;
}



/* Entry: 10388073c; end: 10388090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10388073c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa4e70;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fa4e70);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    func_0x000107c5a100();
    func_0x000107c61174();
    func_0x000107c59c74();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103880910; end: 1038809ef;  */

/* WARNING: Possible PIC construction at 0x00010388097c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038809d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103880980) */
/* WARNING: Removing unreachable block (ram,0x0001038809c0) */
/* WARNING: Removing unreachable block (ram,0x000103880998) */
/* WARNING: Removing unreachable block (ram,0x0001038809c4) */
/* WARNING: Removing unreachable block (ram,0x0001038809d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103880910(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  FUN_10388073c();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fa4e80))[1];
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa4e80);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar1,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c59c6c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038809f0; end: 103880a73; -[_TtC21ARBarFeatureLEBrowser30ARBarCameraPreviewLensInfoView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038809f0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112fa4e70) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa4e78) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa4e80);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "ARBarFeatureLEBrowser/ARBarCameraPreviewLensInfoView.swift",0x3a,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103880a74);
  (*pcVar2)();
}



/* Entry: 103880a74; end: 103880b07; -[_TtC21ARBarFeatureLEBrowser30ARBarCameraPreviewLensInfoView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103880a74(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  *(undefined8 *)(param_1 + _DAT_112fa4e70) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa4e78) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa4e80);
  lVar2 = param_1;
  FUN_103880e30();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(0,0,0,0,&lStack_30,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103880b08();
  func_0x000107c61170(plVar3);
  return (undefined1 *)plVar3;
}



/* Entry: 103880b08; end: 103880d7b;  */

/* WARNING: Possible PIC construction at 0x000103880b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103880d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103880d20) */
/* WARNING: Removing unreachable block (ram,0x000103880cec) */
/* WARNING: Removing unreachable block (ram,0x000103880cc4) */
/* WARNING: Removing unreachable block (ram,0x000103880c70) */
/* WARNING: Removing unreachable block (ram,0x000103880c1c) */
/* WARNING: Removing unreachable block (ram,0x000103880b94) */
/* WARNING: Removing unreachable block (ram,0x000103880b78) */
/* WARNING: Removing unreachable block (ram,0x000103880d60) */

void FUN_103880b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c52b2c(puVar1,param_2,1);
  func_0x000107c3d89c();
  FUN_10388073c();
  func_0x000107c3d5b4(puVar1,param_2,unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 103880d7c; end: 103880dd7; -[_TtC21ARBarFeatureLEBrowser30ARBarCameraPreviewLensInfoView initWithFrame:] */

void FUN_103880d7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarCameraPreviewLensInfoView",0x34,"init(frame:)",0xc
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103880da8);
  (*pcVar1)();
}



/* Entry: 103880dd8; end: 103880e2f; -[_TtC21ARBarFeatureLEBrowser30ARBarCameraPreviewLensInfoView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103880e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103880e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103880dd8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa4e70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa4e78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa4e80 + 8))
  ;
  return;
}



/* Entry: 103880e30; end: 103880e4f;  */

void FUN_103880e30(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6518);
  return;
}



/* Entry: 103880e50; end: 103880edf;  */

long FUN_103880e50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103880ee0; end: 103880f4b;  */

undefined8 * FUN_103880ee0(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103880f4c; end: 103880f8f;  */

undefined8 * FUN_103880f4c(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103880f90; end: 10388104f;  */

int FUN_103880f90(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103881050; end: 103881233;  */

long FUN_103881050(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_103880e30();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 103881234; end: 10388130b;  */

long FUN_103881234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return unaff_x20;
}


