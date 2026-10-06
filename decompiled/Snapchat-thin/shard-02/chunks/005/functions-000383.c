/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f01f20; end: 101f01f5f;  */

void FUN_101f01f20(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101f01f60; end: 101f02053;  */

void FUN_101f01f60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f02054; end: 101f023fb;  */

undefined * FUN_101f02054(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f02188);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000101f01f94();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000101f02904(0,0x112e3d6a8,&PTR_PTR_1126c0e60);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101f023fc; end: 101f0243f;  */

void FUN_101f023fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  return;
}



/* Entry: 101f02440; end: 101f02477;  */

void FUN_101f02440(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar11 = (undefined *)*param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (cVar2 != '\x01') {
      func_0x000107c61434(puVar11);
      puVar12 = puVar11;
    }
    if (uVar1 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar10 = uVar1;
      }
      func_0x000107c60480();
    }
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar10 != 0) {
      if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101eff8c4);
        (*pcVar3)();
      }
      uVar14 = 0;
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar1 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(uVar1 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar14;
          FUN_101eff02c(uVar14,uVar1);
        }
        uVar6 = uVar5;
        FUN_101f024e8();
        uVar15 = *(ulong *)(uVar6 + 0x10);
        lVar9 = *(long *)(puVar13 + 0x10);
        if (SCARRY8(lVar9,uVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101eff894);
          (*pcVar3)();
        }
        puVar11 = puVar13;
        func_0x000107c61558();
        if (((int)puVar11 == 0) ||
           (uVar8 = *(ulong *)(puVar13 + 0x18) >> 1, (long)uVar8 < (long)(lVar9 + uVar15))) {
          func_0x0001000d182c();
          uVar8 = *(ulong *)(puVar11 + 0x18) >> 1;
          puVar13 = puVar11;
          if (*(long *)(uVar6 + 0x10) != 0) goto LAB_101eff7f0;
LAB_101eff744:
          func_0x000107c6142c(uVar6);
          puVar11 = puVar13;
          if (uVar15 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101eff898);
            (*pcVar3)();
          }
        }
        else {
          puVar11 = puVar13;
          if (*(long *)(uVar6 + 0x10) == 0) goto LAB_101eff744;
LAB_101eff7f0:
          if (uVar8 - *(long *)(puVar11 + 0x10) < uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101eff89c);
            (*pcVar3)();
          }
          func_0x000107c6140c(puVar11 + *(long *)(puVar11 + 0x10) * 0x10 + 0x20,uVar6 + 0x20,uVar15,
                              PTR___sSSN_11034da80);
          func_0x000107c6142c(uVar6);
          if (uVar15 != 0) {
            if (SCARRY8(*(long *)(puVar11 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101eff8a0);
              (*pcVar3)();
            }
            *(ulong *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + uVar15;
          }
        }
        uVar14 = uVar14 + 1;
        func_0x000107c61170(uVar5);
        puVar13 = puVar11;
      } while (uVar10 != uVar14);
    }
    FUN_101eff8c4(puVar11,puVar12,uVar7);
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar11);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 101f02478; end: 101f02497;  */

void FUN_101f02478(void)

{
  func_0x000107c61168(&PTR_PTR_112e3d710);
  return;
}



/* Entry: 101f02498; end: 101f024e7;  */

void FUN_101f02498(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar2 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c615f0(uVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c61428(lVar1 + 0x10,auStack_a0,0,0);
    func_0x000107c4beb4(uVar7);
    func_0x000107c615e8(uVar7);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_b8,0,0);
  lVar2 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001000d224c(&uStack_d0);
    func_0x000107c61574(lVar2);
    func_0x000107c614f0(uStack_d0);
    func_0x000107c61428(lVar1 + 0x10,&uStack_d0,0,0);
    uVar8 = *(undefined8 *)(lVar1 + 0x10);
    pcVar9 = *(code **)(lStack_c8 + 0x18);
    uVar7 = uVar8;
    func_0x000107c61434(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uStack_d0);
    func_0x000107c6142c(uVar8);
    puVar3 = &UNK_11049c740;
    func_0x000107c613fc(&UNK_11049c740,0x18,7);
    func_0x000107c61428(lVar5 + 0x10,auStack_e8,0,0);
    lVar2 = lVar5 + 0x10;
    func_0x000107c61648(lVar2);
    func_0x000107c61644(puVar3 + 0x10,lVar2);
    func_0x000107c61574(lVar2);
    puVar4 = &UNK_11049c858;
    func_0x000107c613fc(&UNK_11049c858,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar10;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    func_0x00010075a04c(0,1,0x101f024a8,puVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar4);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_100,0,0);
  lVar2 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001000d224c(&uStack_118);
    func_0x000107c61574(lVar2);
    uVar7 = uStack_118;
    func_0x000107c614f0(uStack_118);
    (**(code **)(lStack_110 + 8))();
    func_0x000107c615e8(uStack_118);
    puVar3 = &UNK_11049c740;
    func_0x000107c613fc(&UNK_11049c740,0x18,7);
    func_0x000107c61428(lVar5 + 0x10,&uStack_118,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648(lVar5);
    func_0x000107c61644(puVar3 + 0x10,lVar5);
    func_0x000107c61574(lVar5);
    puVar4 = &UNK_11049c880;
    func_0x000107c613fc(&UNK_11049c880,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar10;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    func_0x000107c6157c(lVar1);
    func_0x00010075a04c(0,1,0x101f024b4,puVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101f024e8; end: 101f027fb;  */

undefined * FUN_101f024e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5bfc4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar7 = 0;
    puVar8 = (undefined *)0x0;
    uVar11 = 0;
    puVar10 = (undefined *)0x0;
    uVar9 = 0;
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11049c970;
    func_0x000107c613fc(&UNK_11049c970,0x18,7);
    *(undefined ***)(puVar2 + 0x10) = &puStack_78;
    puVar8 = &UNK_11049c998;
    func_0x000107c613fc(&UNK_11049c998,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x101f02858;
    *(undefined **)(puVar8 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x101f0297c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101f02948;
    puStack_90 = &UNK_11049c9b0;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_80);
    puVar8 = &UNK_11049c9e8;
    func_0x000107c613fc(&UNK_11049c9e8,0x18,7);
    *(undefined ***)(puVar8 + 0x10) = &puStack_78;
    puVar2 = &UNK_11049ca10;
    func_0x000107c613fc(&UNK_11049ca10,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x101f0287c;
    *(undefined **)(puVar2 + 0x18) = puVar8;
    pcStack_88 = (code *)0x101f02978;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101f02944;
    puStack_90 = &UNK_11049ca28;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_80);
    puVar10 = &UNK_11049ca60;
    func_0x000107c613fc(&UNK_11049ca60,0x18,7);
    *(undefined ***)(puVar10 + 0x10) = &puStack_78;
    puVar2 = &UNK_11049ca88;
    func_0x000107c613fc(&UNK_11049ca88,0x20,7);
    uVar11 = 0x101f02884;
    *(undefined8 *)(puVar2 + 0x10) = 0x101f02884;
    *(undefined **)(puVar2 + 0x18) = puVar10;
    pcStack_88 = (code *)0x101f02980;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101f0294c;
    puStack_90 = &UNK_11049caa0;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    puVar12 = &UNK_11049cad8;
    func_0x000107c613fc(&UNK_11049cad8,0x18,7);
    *(undefined ***)(puVar12 + 0x10) = &puStack_78;
    puVar2 = &UNK_11049cb00;
    func_0x000107c613fc(&UNK_11049cb00,0x20,7);
    uVar9 = 0x101f0288c;
    *(undefined8 *)(puVar2 + 0x10) = 0x101f0288c;
    *(undefined **)(puVar2 + 0x18) = puVar12;
    pcStack_88 = FUN_101f02894;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101f01f20;
    puStack_90 = &UNK_11049cb18;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c6e0(param_1);
    uVar7 = 0x101f0287c;
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    puVar2 = puStack_78;
  }
  func_0x000100cd65a0();
  func_0x000100cd65a0(uVar7,puVar8);
  func_0x000100cd65a0(uVar11,puVar10);
  func_0x000100cd65a0(uVar9,puVar12);
  return puVar2;
}



/* Entry: 101f027fc; end: 101f02807;  */

void FUN_101f027fc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c615f0(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4becc(uVar2);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 101f02808; end: 101f0284b;  */

void FUN_101f02808(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f0284c; end: 101f02893;  */

void FUN_101f0284c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar1 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c615f0(uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c4bec8(uVar3);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x0001000d224c(&uStack_80);
    func_0x000107c61574(lVar2);
    func_0x000107c614f0(uStack_80);
    (**(code **)(lStack_78 + 0x50))();
    func_0x000107c61574();
    func_0x000107c615e8(uStack_80);
  }
  return;
}



/* Entry: 101f02894; end: 101f028b3;  */

void FUN_101f02894(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f028b4; end: 101f028bb;  */

void FUN_101f028b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5ddb8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar3;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    lVar3 = *plVar2;
    *plVar2 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 101f028bc; end: 101f028db;  */

void FUN_101f028bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f028dc; end: 101f028e3;  */

void FUN_101f028dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar3;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    lVar3 = *plVar2;
    *plVar2 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 101f028e4; end: 101f02943;  */

void FUN_101f028e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f02944; end: 101f02997;  */

void FUN_101f02944(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101f02998; end: 101f02a43;  */

void FUN_101f02998(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f02a44; end: 101f02a47;  */

void FUN_101f02a44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3d7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2a020;
  func_0x000107c61520(&UNK_10da2a020,&UNK_11049ccb0);
  puRam0000000112e3d7a0 = puVar1;
  return;
}



/* Entry: 101f02a48; end: 101f02a87;  */

void FUN_101f02a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3d7a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2a020;
  func_0x000107c61520(&UNK_10da2a020,&UNK_11049ccb0);
  puRam0000000112e3d7a0 = puVar1;
  return;
}



/* Entry: 101f02a88; end: 101f02bfb;  */

void FUN_101f02a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101f02bfc; end: 101f02e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f02bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 3;
  func_0x00010043c5c0(3,0x3c,1,uStack_70,uStack_68,puVar1);
  func_0x0001000834e4(auStack_88);
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar7 = param_3;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  puVar4 = &UNK_11049cd30;
  func_0x000107c613fc(&UNK_11049cd30,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  func_0x0001000285a8(0x112e3d7a8,&UNK_10da2a0f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  pcVar5 = FUN_101f02e88;
  func_0x0001000bdd8c(FUN_101f02e88,puVar4);
  puVar4 = &UNK_11049cd58;
  func_0x000107c613fc(&UNK_11049cd58,0x20,7);
  *(code **)(puVar4 + 0x10) = pcVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  func_0x0001000285a8(0x112e3d7b0,&UNK_10da2a100);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar5);
  func_0x000107c61174(param_4);
  pcVar6 = FUN_101f02f0c;
  func_0x0001000bdd8c(FUN_101f02f0c,puVar4);
  uVar7 = 0;
  func_0x0001002ba498(0);
  func_0x000107c610f8();
  func_0x000100441a18(pcVar6,uVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar6;
  return unaff_x20;
}



/* Entry: 101f02e24; end: 101f02e87;  */

void FUN_101f02e24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_101efebcc(0);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_101efd598(param_2,param_3);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11049c338;
  return;
}



/* Entry: 101f02e88; end: 101f02e8f;  */

void FUN_101f02e88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101efebcc(0);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_101efd598(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_11049c338;
  return;
}



/* Entry: 101f02e90; end: 101f02f0b;  */

void FUN_101f02e90(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c444a0();
  func_0x000107c61180();
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar3 = 0;
    FUN_101f02478();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    *(long *)(lVar3 + 0x18) = param_3;
    *(undefined **)(lVar3 + 0x20) = puVar2;
    *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f02f0c);
  (*pcVar1)();
}



/* Entry: 101f02f0c; end: 101f02f13;  */

void FUN_101f02f0c(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c444a0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar5 = 0;
    FUN_101f02478();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x10) = uVar1;
    *(long *)(lVar5 + 0x18) = lVar3;
    *(undefined **)(lVar5 + 0x20) = puVar4;
    *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f02f0c);
  (*pcVar2)();
}



/* Entry: 101f02f14; end: 101f02f6b;  */

void FUN_101f02f14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f02f6c; end: 101f02f73;  */

void FUN_101f02f6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f02f74; end: 101f02f97;  */

void FUN_101f02f74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f02f98; end: 101f02fab;  */

void FUN_101f02f98(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101f02fac; end: 101f03de7;  */

long FUN_101f02fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  *(undefined8 *)(unaff_x20 + 0x98) = param_3;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_6;
  func_0x0001000285a8(0x112e3d890,&UNK_10da2a148);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = param_7;
  func_0x000107c6157c(param_7);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e3d898,&UNK_10da2a150);
  func_0x000107c610f8();
  uVar9 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112e3d8a0,&UNK_10da2a158);
  func_0x000107c610f8();
  uVar9 = param_9;
  func_0x000107c6157c(param_9);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  func_0x0001000285a8(0x112e3d8a8,&UNK_10da2a160);
  func_0x000107c610f8();
  uVar9 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x30) = puVar4;
  func_0x0001000285a8(0x112e3d8b0,&UNK_10da2a168);
  func_0x000107c610f8();
  uVar9 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x38) = puVar5;
  func_0x0001000285a8(0x112e3d8b8,&UNK_10da2a170);
  func_0x000107c610f8();
  uVar9 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x40) = puVar6;
  func_0x0001000285a8(0x112e3d8c0,&UNK_10da2a178);
  func_0x000107c610f8();
  uVar9 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x48) = puVar7;
  func_0x0001000285a8(0x112e3d8c8,&UNK_10da2a180);
  func_0x000107c610f8();
  uVar9 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x50) = puVar8;
  func_0x0001000285a8(0x112e3d8d0,&UNK_10da2a188);
  func_0x000107c610f8();
  uVar9 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x58) = puVar11;
  func_0x0001000285a8(0x112e3d8d8,&UNK_10da2a190);
  func_0x000107c610f8();
  uVar9 = param_16;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x60) = puVar12;
  func_0x0001000285a8(0x112e3d8e0,&UNK_10da2a198);
  func_0x000107c610f8();
  uVar9 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x68) = puVar13;
  func_0x0001000285a8(0x112e3d8e8,&UNK_10da2a1a0);
  func_0x000107c610f8();
  uVar9 = param_18;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x70) = puVar14;
  func_0x0001000285a8(0x112e3d8f0,&UNK_10da2a1a8);
  func_0x000107c610f8();
  uVar9 = param_19;
  func_0x000107c6157c(param_19);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x78) = puVar15;
  func_0x0001000285a8(0x112e3d8f8,&UNK_10da2a1b0);
  func_0x000107c610f8();
  uVar9 = param_20;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x80) = puVar16;
  func_0x0001000285a8(0x112e3d900,&UNK_10da2a1b8);
  func_0x000107c610f8();
  uVar9 = param_21;
  func_0x000107c6157c(param_21);
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x88) = puVar17;
  puVar10 = PTR_PTR_1126a9930;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar10;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f01a380);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000026;
  uVar9 = uVar18;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a3b0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a3e0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a410);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a440);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar18 = 0xd00000000000002f;
  uVar9 = uVar18;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f01a480);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f01a4b0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar9 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a4f0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar9 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f01a530);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar9 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f01a570);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f01a5b0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000041;
  func_0x000107c5fadc(0xd000000000000041,0x800000010f01a5f0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar11);
  uVar9 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f01a640);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar12);
  uVar9 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f01a680);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f01a6c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  uVar19 = 0xd00000000000002b;
  uVar9 = uVar19;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f01a700);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar9 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f01a730);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar16);
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f01a770);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar17);
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f01a7a0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c3e740(puVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  func_0x000107c61574(param_15);
  func_0x000107c61574(param_16);
  func_0x000107c61574(param_17);
  func_0x000107c61574(param_18);
  func_0x000107c61574(param_19);
  func_0x000107c61574(param_20);
  func_0x000107c61574(param_21);
  return unaff_x20;
}



/* Entry: 101f03de8; end: 101f03ec3;  */

void FUN_101f03de8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 101f03ec4; end: 101f03ef7;  */

undefined1  [16] FUN_101f03ec4(void)

{
  return ZEXT816(0x11049cea0);
}



/* Entry: 101f03ef8; end: 101f03f43;  */

undefined8 FUN_101f03ef8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f03f44; end: 101f03ff7;  */

long FUN_101f03f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x00010043a2e0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x00010043a3b8(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010043cb44();
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return unaff_x20;
}



/* Entry: 101f03ff8; end: 101f0403b;  */

void FUN_101f03ff8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f0403c; end: 101f0407f;  */

undefined1  [16] FUN_101f0403c(void)

{
  return ZEXT816(0x11049d028);
}



/* Entry: 101f04080; end: 101f040d3;  */

void FUN_101f04080(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f040d4; end: 101f0416f;  */

long FUN_101f040d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x00010043cb88(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x00010043cc04(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010043cd94();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return unaff_x20;
}



/* Entry: 101f04170; end: 101f041ab;  */

void FUN_101f04170(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f041ac; end: 101f041ef;  */

undefined1  [16] FUN_101f041ac(void)

{
  return ZEXT816(0x11049d0f0);
}



/* Entry: 101f041f0; end: 101f04243;  */

void FUN_101f041f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f04244; end: 101f04433;  */

long FUN_101f04244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010043d7a0(0);
  func_0x000107c613fc();
  uVar3 = param_1;
  func_0x00010043d7c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar3);
  func_0x00010043d7dc();
  func_0x000107c61574(uVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    *(undefined **)(unaff_x20 + 0x50) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f04434);
  (*pcVar1)();
}



/* Entry: 101f04434; end: 101f044af;  */

void FUN_101f04434(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101f044b0; end: 101f044f3;  */

undefined1  [16] FUN_101f044b0(void)

{
  return ZEXT816(0x11049d1b8);
}



/* Entry: 101f044f4; end: 101f04547;  */

void FUN_101f044f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f04548; end: 101f046ef;  */

void FUN_101f04548(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002b73c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x000103ac4b08(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000103ac48cc();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x000103ac4914();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101f046f0; end: 101f046ff;  */

void FUN_101f046f0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002b73c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  func_0x000103ac4b08(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000103ac48cc();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x000103ac4914();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f04700; end: 101f0484b;  */

long FUN_101f04700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000103ac4b08(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103ac48cc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000103ac4914();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101f0484c; end: 101f04897;  */

void FUN_101f0484c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f04898; end: 101f048eb;  */

void FUN_101f04898(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f048ec; end: 101f04937;  */

void FUN_101f048ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f04938; end: 101f0498b;  */

void FUN_101f04938(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f0498c; end: 101f049c7;  */

undefined8 FUN_101f0498c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100bafa9c(param_1);
  return unaff_x20;
}



/* Entry: 101f049c8; end: 101f049f3;  */

void FUN_101f049c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f049f4; end: 101f04a43;  */

undefined8 FUN_101f049f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f04a44; end: 101f04a87;  */

undefined1  [16] FUN_101f04a44(void)

{
  return ZEXT816(0x11049d320);
}



/* Entry: 101f04a88; end: 101f04aaf;  */

void FUN_101f04a88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f04ab0; end: 101f04ab7;  */

undefined8 FUN_101f04ab0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f04ab8; end: 101f04e0f;  */

long FUN_101f04ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a9940;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01a7d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 101f04e10; end: 101f04e7b;  */

void FUN_101f04e10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101f04e7c; end: 101f04ecb;  */

undefined8 FUN_101f04e7c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f04ecc; end: 101f04f0f;  */

undefined1  [16] FUN_101f04ecc(void)

{
  return ZEXT816(0x11049d3e8);
}



/* Entry: 101f04f10; end: 101f04f37;  */

void FUN_101f04f10(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f04f38; end: 101f04f3f;  */

undefined8 FUN_101f04f38(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f04f40; end: 101f05e6f;  */

long FUN_101f04f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(undefined8 *)(unaff_x20 + 0x68) = param_8;
  *(undefined8 *)(unaff_x20 + 0x70) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  *(undefined8 *)(unaff_x20 + 0x90) = param_13;
  *(undefined8 *)(unaff_x20 + 0x98) = param_14;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_19;
  *(undefined8 *)(unaff_x20 + 200) = param_20;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_23;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_24;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_25;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar6 = PTR_PTR_1126a9948;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01a830);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a850);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0x655373706f6f6c62;
  func_0x000107c5fadc(0x655373706f6f6c62,0xee00736563697672);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000003a;
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f01a870);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f01a8b0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a8f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(param_23);
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(param_24);
  func_0x000107c61174();
  uVar7 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(param_25);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a910);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a930);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar6);
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a960);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar6);
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f01a990);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar6);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f05e64);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xf8) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f05e68);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x100) = puVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f05e6c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x108) = puVar4;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(param_25);
    *(undefined **)(unaff_x20 + 0x110) = puVar5;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f05e70);
  (*pcVar1)();
}



/* Entry: 101f05e70; end: 101f05fab;  */

void FUN_101f05e70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  return;
}



/* Entry: 101f05fac; end: 101f05ffb;  */

undefined8 FUN_101f05fac(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f05ffc; end: 101f0606f;  */

undefined1  [16] FUN_101f05ffc(void)

{
  return ZEXT816(0x11049d4b0);
}



/* Entry: 101f06070; end: 101f06097;  */

void FUN_101f06070(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f06098; end: 101f0609f;  */

undefined8 FUN_101f06098(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f060a0; end: 101f06103;  */

undefined8
FUN_101f060a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101f06104(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101f06104; end: 101f06363;  */

void FUN_101f06104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a9950;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a850);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  return;
}



/* Entry: 101f06364; end: 101f063a7;  */

void FUN_101f06364(void)

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



/* Entry: 101f063a8; end: 101f063f7;  */

undefined8 FUN_101f063a8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f063f8; end: 101f0643b;  */

undefined1  [16] FUN_101f063f8(void)

{
  return ZEXT816(0x11049d5d8);
}



/* Entry: 101f0643c; end: 101f06463;  */

void FUN_101f0643c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f06464; end: 101f0646b;  */

undefined8 FUN_101f06464(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f0646c; end: 101f064bf;  */

undefined8 FUN_101f0646c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010070189c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101f064c0; end: 101f064fb;  */

void FUN_101f064c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f064fc; end: 101f0654b;  */

undefined8 FUN_101f064fc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f0654c; end: 101f0658f;  */

undefined1  [16] FUN_101f0654c(void)

{
  return ZEXT816(0x11049d6a0);
}



/* Entry: 101f06590; end: 101f065b7;  */

void FUN_101f06590(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f065b8; end: 101f065bf;  */

undefined8 FUN_101f065b8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f065c0; end: 101f0661f;  */

undefined8 FUN_101f065c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100973d5c(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101f06620; end: 101f0664b;  */

void FUN_101f06620(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f0664c; end: 101f0669b;  */

undefined8 FUN_101f0664c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f0669c; end: 101f066d7;  */

undefined1  [16] FUN_101f0669c(void)

{
  return ZEXT816(0x11049d768);
}



/* Entry: 101f066d8; end: 101f069b7;  */

long FUN_101f066d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a9968;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101f069b8; end: 101f06a03;  */

void FUN_101f069b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f06a04; end: 101f06a53;  */

undefined8 FUN_101f06a04(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f06a54; end: 101f06a97;  */

undefined1  [16] FUN_101f06a54(void)

{
  return ZEXT816(0x11049d810);
}



/* Entry: 101f06a98; end: 101f06abf;  */

void FUN_101f06a98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f06ac0; end: 101f06ac7;  */

undefined8 FUN_101f06ac0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f06ac8; end: 101f07197;  */

void FUN_101f06ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  puVar1 = PTR_PTR_1126a9970;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a580);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  *(undefined **)(unaff_x20 + 0x78) = puVar3;
  return;
}



/* Entry: 101f07198; end: 101f0723b;  */

void FUN_101f07198(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101f0723c; end: 101f0728b;  */

undefined8 FUN_101f0723c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f0728c; end: 101f072cf;  */

undefined1  [16] FUN_101f0728c(void)

{
  return ZEXT816(0x11049d8d8);
}



/* Entry: 101f072d0; end: 101f072f7;  */

void FUN_101f072d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f072f8; end: 101f072ff;  */

undefined8 FUN_101f072f8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


