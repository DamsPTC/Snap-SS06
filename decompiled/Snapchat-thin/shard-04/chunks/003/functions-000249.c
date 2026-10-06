/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033c5b70; end: 1033c5b77;  */

void FUN_1033c5b70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  func_0x0001033c4a88(param_1[2],param_1[3],param_1[4],0x7461676572676761,0xea0000000000726f);
  func_0x0001033c4eac(uVar1,uVar3,uVar2);
  return;
}



/* Entry: 1033c5b78; end: 1033c5d43;  */

undefined * FUN_1033c5b78(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar9 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar9,0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c5d44);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar6 = *puVar12;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar7 = uVar6;
        func_0x000107c3f70c();
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c5faec();
        uVar5 = uVar9;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        uVar4 = *(ulong *)(puVar1 + 0x10);
        uVar3 = uVar4 + 1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          uVar5 = uVar3;
          func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3;
        *(undefined8 *)(puVar1 + uVar4 * 0x10 + 0x20) = uVar8;
        *(ulong *)(puVar1 + uVar4 * 0x10 + 0x28) = uVar9;
        uVar11 = uVar11 - 1;
        uVar9 = uVar5;
        puVar12 = puVar12 + 1;
      } while (uVar11 != 0);
    }
    else {
      uVar9 = 0;
      do {
        uVar3 = uVar9;
        uVar10 = param_1;
        func_0x000102e2a3b4();
        uVar4 = uVar3;
        func_0x000107c615f0();
        func_0x000107c3f70c();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c615ec(uVar3,2);
        func_0x000107c61170(uVar4);
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(ulong *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar10;
      } while (uVar11 != uVar9);
    }
  }
  return puVar1;
}



/* Entry: 1033c5d44; end: 1033c5e4f;  */

undefined * FUN_1033c5d44(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c3f6e0();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c5e50);
        (*pcVar1)();
      }
      puVar5 = *(undefined **)(uVar3 + 0x20);
      func_0x000107c61174(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
      func_0x000102e2a3b4(0,uVar3);
    }
    func_0x000107c6142c(uVar3);
    puVar6 = puVar5;
    func_0x000107c51ba4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
    func_0x000107c5fc54(puVar6,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar6);
  }
  return puVar5;
}



/* Entry: 1033c5e50; end: 1033c660b;  */

undefined * FUN_1033c5e50(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c6018);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + 0x20 + uVar14 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar14;
        func_0x000102e2a3b4(uVar14,param_1);
      }
      bVar4 = SCARRY8(uVar14,1);
      uVar14 = uVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c6014);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c51ba4();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      lVar12 = *(long *)(uVar7 + 0x10);
      if (lVar12 != 0) {
        puVar15 = (undefined8 *)(uVar7 + 0x28);
        do {
          uVar1 = puVar15[-1];
          uVar2 = *puVar15;
          func_0x000107c61438(uVar2,2);
          puVar8 = auStack_78;
          func_0x000100403b00(puVar8,uVar1,uVar2);
          func_0x000107c6142c(uStack_70);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(uVar2);
          }
          else {
            puVar9 = puVar11;
            func_0x000107c61558();
            puVar10 = puVar11;
            if (((ulong)puVar9 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              func_0x0001000d182c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
            }
            uVar6 = *(ulong *)(puVar10 + 0x10);
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              func_0x0001000d182c(puVar11,uVar6 + 1,1,puVar10);
            }
            *(ulong *)(puVar11 + 0x10) = uVar6 + 1;
            *(undefined8 *)(puVar11 + uVar6 * 0x10 + 0x20) = uVar1;
            *(undefined8 *)(puVar11 + uVar6 * 0x10 + 0x28) = uVar2;
          }
          puVar15 = puVar15 + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar7);
      puVar9 = puStack_68;
    } while (uVar14 != uVar13);
  }
  func_0x000107c6142c(puVar9);
  return puVar11;
}



/* Entry: 1033c660c; end: 1033c67d7;  */

ulong FUN_1033c660c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = param_1;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  uVar4 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c40794(param_1);
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar7 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(uVar4);
  }
  else {
    func_0x000107c415a0();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar8 = 0;
      uVar3 = 0;
    }
    else {
      uVar8 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uVar5 = uVar4;
    func_0x0001033c6070(uVar4,uVar8,uVar3);
    func_0x000107c6142c(uVar3);
    if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c67d8);
      (*pcVar1)();
    }
    uVar9 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar9;
        uVar8 = uVar4;
        func_0x000102e2a3b4(uVar9,uVar4);
      }
      uVar9 = uVar9 + 1;
      func_0x000107c4feac(uVar2);
      func_0x000107c61170(uVar6);
    } while (uVar7 != uVar9);
    func_0x000107c6142c(uVar4);
    func_0x000107c3dc30(uVar2);
    uVar4 = uVar5;
    func_0x000107c3f70c();
    func_0x000107c61180();
    if (uVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    func_0x000107c53f80(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  return uVar2;
}



/* Entry: 1033c67d8; end: 1033c6a2f;  */

undefined * FUN_1033c67d8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar10 = PTR___swiftEmptySetSingleton_11034f1d8;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c69d8);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + 0x20 + uVar14 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar14;
        func_0x000102e2a3b4(uVar14,param_1);
      }
      bVar4 = SCARRY8(uVar14,1);
      uVar14 = uVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c69d4);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c51ba4();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      lVar16 = *(long *)(uVar7 + 0x10);
      if (lVar16 != 0) {
        puVar17 = (undefined8 *)(uVar7 + 0x28);
        do {
          uVar1 = puVar17[-1];
          uVar2 = *puVar17;
          func_0x000107c61438(uVar2,2);
          puVar8 = auStack_78;
          uVar13 = uVar1;
          func_0x000100403b00(puVar8,uVar1,uVar2);
          func_0x000107c6142c(uStack_70);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(uVar2);
          }
          else {
            uVar6 = uVar5;
            func_0x000107c4d3e4();
            func_0x000107c61180();
            uVar9 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61170(uVar6);
            puVar10 = puVar12;
            func_0x000107c61558();
            puVar11 = puVar12;
            if (((ulong)puVar10 & 1) == 0) {
              puVar11 = (undefined *)0x0;
              FUN_1033c8000(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
            }
            uVar6 = *(ulong *)(puVar11 + 0x10);
            puVar12 = puVar11;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar6) {
              puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              FUN_1033c8000(puVar12,uVar6 + 1,1,puVar11);
            }
            *(ulong *)(puVar12 + 0x10) = uVar6 + 1;
            *(undefined8 *)(puVar12 + uVar6 * 0x20 + 0x20) = uVar1;
            *(undefined8 *)(puVar12 + uVar6 * 0x20 + 0x28) = uVar2;
            *(ulong *)(puVar12 + uVar6 * 0x20 + 0x30) = uVar9;
            *(undefined8 *)(puVar12 + uVar6 * 0x20 + 0x38) = uVar13;
          }
          puVar17 = puVar17 + 2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar7);
      puVar10 = puStack_68;
    } while (uVar14 != uVar15);
  }
  func_0x000107c6142c(puVar10);
  return puVar12;
}



/* Entry: 1033c6a30; end: 1033c6b4b;  */

void FUN_1033c6a30(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_2;
  FUN_1033c660c();
  lVar2 = param_2;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  lVar4 = lVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  FUN_1033c67d8();
  func_0x000107c6142c(lVar4);
  lVar4 = param_2;
  func_0x000107c415a0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c3f6e0();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5fc54();
  func_0x000107c61170(param_2);
  lVar5 = lVar4;
  FUN_1033c5b78();
  func_0x000107c6142c(lVar4);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar6;
  param_1[3] = lVar3;
  param_1[4] = lVar5;
  return;
}



/* Entry: 1033c6b4c; end: 1033c6b77;  */

void FUN_1033c6b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001033c3fe8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033c6b78; end: 1033c6b9b;  */

void FUN_1033c6b78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  uVar11 = *param_1;
  puVar5 = &UNK_11064d1a0;
  func_0x000107c613fc(&UNK_11064d1a0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  puVar6 = &UNK_11064d1c8;
  func_0x000107c613fc(&UNK_11064d1c8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1033c6bdc;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033c6be4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1033c52d8;
  puStack_88 = &UNK_11064d1e0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_11064d218;
  func_0x000107c613fc(&UNK_11064d218,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  puVar9 = &UNK_11064d240;
  func_0x000107c613fc(&UNK_11064d240,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x1033c6c04;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = FUN_1033c6c58;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100e27b38;
  puStack_88 = &UNK_11064d258;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = puStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c4c754(uVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x72,0x2a,0x25,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c4358);
    (*pcVar4)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x72,0x4e,0x1d,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c435c);
  (*pcVar4)();
}



/* Entry: 1033c6b9c; end: 1033c6bdb;  */

void FUN_1033c6b9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033c6bdc; end: 1033c6be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c6bdc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    func_0x0001007d6c6c(3,0xd00000000000002f,0x800000010f1486f0,uVar2,&PTR_DAT_11064d0a8);
    FUN_1033bca24(1);
    return;
  }
  uVar10 = *(ulong *)(param_1 + _DAT_112f62778);
  uVar6 = *(ulong *)(param_1 + _DAT_112f62788);
  uVar1 = ((ulong *)(param_1 + _DAT_112f62788))[1];
  uVar12 = *(undefined8 *)(param_1 + _DAT_112f62790);
  func_0x000107c61434(uVar1);
  func_0x000107c61174();
  func_0x000107c61434(uVar12);
  func_0x000107c61174();
  func_0x0001033c4a88(uVar6,uVar1,uVar12,0x65736e6f70736572,0xe800000000000000);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar12);
  func_0x000107c602fc(0x45);
  func_0x000107c5fb78(0xd000000000000031,0x800000010f148720);
  uVar12 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar12;
  func_0x00010011d734();
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f148760);
  uVar4 = 0x6c696e;
  if (uVar1 != 0) {
    uVar4 = uVar6;
  }
  uVar11 = 0xe300000000000000;
  if (uVar1 != 0) {
    uVar11 = uVar1;
  }
  func_0x000107c61434(uVar1);
  func_0x000107c5fb78(uVar4,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x0001007d6c6c(1,0,0xe000000000000000,uVar2,&PTR_DAT_11064d0a8);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f148780);
  uVar4 = uVar10;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  uVar8 = 0;
  FUN_1033c6b9c(0,0x112f1dfa0,&PTR_PTR_1126cce38);
  uVar4 = uVar11;
  func_0x000107c5fc54(uVar11,uVar8);
  func_0x000107c61170(uVar11);
  uVar11 = uVar4;
  FUN_1033c5b78();
  func_0x000107c6142c(uVar4);
  uVar5 = 0x2c;
  uVar9 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar3);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fb78(uVar5,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x6f6974636573205d,0xee005b3d7364496e);
  uVar4 = uVar10;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar11 = uVar4;
  FUN_1033c5d44();
  func_0x000107c615e8(uVar4);
  uVar5 = 0x2c;
  uVar9 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar3);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fb78(uVar5,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x0001007d6c6c(1,0,0xe000000000000000,uVar2,&PTR_DAT_11064d0a8);
  func_0x000107c6142c(0xe000000000000000);
  uVar4 = uVar10;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  uVar4 = uVar11;
  func_0x000107c5fc54(uVar11,uVar8);
  func_0x000107c61170(uVar11);
  if (uVar4 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c();
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar11 = uVar4;
    }
    func_0x000107c60480();
    func_0x000107c6142c(uVar4);
  }
  if (uVar11 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000031,0x800000010f1487b0,uVar2,&PTR_DAT_11064d0a8);
    FUN_1033bca24(1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar10);
    return;
  }
  if (uVar1 != 0) {
    uVar4 = uVar6 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar4 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      uVar4 = uVar10;
      func_0x000107c3da44(uVar10);
      func_0x000107c61180();
      uVar12 = *(undefined8 *)(param_1 + _DAT_112f62780);
      func_0x000107c61434(uVar12);
      func_0x0001033c4eac(uVar4,uVar12,uVar7);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar4);
      goto LAB_1033c49ec;
    }
  }
  func_0x000107c602fc(0x74);
  func_0x000107c5fb78(0xd000000000000048,0x800000010f148580);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f147fc0);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f1485d0);
  uVar4 = uVar10;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c3f6e0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  uVar4 = uVar6;
  func_0x000107c5fc54(uVar6,uVar8);
  func_0x000107c61170(uVar6);
  uVar6 = uVar4;
  FUN_1033c5b78();
  func_0x000107c6142c(uVar4);
  uVar7 = 0x2c;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar3);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x6f6974636573205d,0xee005b3d7364496e);
  uVar4 = uVar10;
  func_0x000107c3da44();
  func_0x000107c61180();
  uVar6 = uVar4;
  FUN_1033c5d44();
  func_0x000107c615e8(uVar4);
  uVar7 = 0x2c;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar3);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  uVar12 = 0xe000000000000000;
  func_0x0001007d6c6c(2,0,0xe000000000000000,uVar2,&PTR_DAT_11064d0a8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar10);
LAB_1033c49ec:
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 1033c6be4; end: 1033c6c57;  */

void FUN_1033c6be4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033c6c58; end: 1033c6c67;  */

void FUN_1033c6c58(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1033c6c68; end: 1033c6d2f;  */

void FUN_1033c6c68(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    FUN_1033c5b0c();
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 1033c6d30; end: 1033c6e1f;  */

undefined8 * FUN_1033c6d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  func_0x000107c615f0();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1033c6e20; end: 1033c6e7b;  */

undefined8 * FUN_1033c6e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033c6e7c; end: 1033c6f3f;  */

int FUN_1033c6e7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033c6f40; end: 1033c701b; -[_TtC13GamesExplorer38GamesExplorerCategoriesProviderFactory categoriesProviderWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c6f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f627d0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c3f6ec();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112f627d8);
  lVar2 = 0;
  FUN_1033c5a0c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f62740) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f62748) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_50,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1033c701c; end: 1033c702b; -[_TtC13GamesExplorer38GamesExplorerCategoriesProviderFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c701c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f627d0),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1033c702c; end: 1033c708b; -[_TtC13GamesExplorer38GamesExplorerCategoriesProviderFactory init] */

void FUN_1033c702c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerCategoriesProviderFactory",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c7058);
  (*pcVar1)();
}



/* Entry: 1033c708c; end: 1033c70c3; -[_TtC13GamesExplorer38GamesExplorerCategoriesProviderFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c708c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f627d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f627d8));
  return;
}



/* Entry: 1033c70c4; end: 1033c70e3;  */

void FUN_1033c70c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d65d0);
  return;
}



/* Entry: 1033c70e4; end: 1033c710b; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory lensFeedDataStoreWithSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c70e4(long param_1)

{
  func_0x000107c4b160(*(undefined8 *)(param_1 + _DAT_112f62808));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c710c; end: 1033c72eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033c710c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar6 = *(long *)(unaff_x20 + _DAT_112f62808);
  puStack_48 = PTR_DAT_1126a2cf8;
  uVar4 = 1;
  lVar2 = lVar6;
  func_0x000107c61494(lVar6,1,&puStack_48);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c51b70();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      uVar5 = uVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
      uVar4 = uVar5;
    }
    func_0x000107c4b160(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  else {
    func_0x000107c4b15c();
    func_0x000107c61180();
    lVar6 = lVar2;
  }
  lVar2 = param_1;
  func_0x000107c500ec();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4b4b0();
    func_0x000107c61170(lVar2);
    if (lVar3 == 2) {
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c51b70(param_1);
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(lVar2,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x0001007d6c6c(1,0xd00000000000002a,0x800000010f1488a0,lVar1,&PTR_DAT_11064d3b0);
      func_0x000107c6142c(0x800000010f1488a0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f62810);
      FUN_1033c7f68(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar4);
      FUN_1033c74e4(lVar6,uVar4);
    }
  }
  return lVar6;
}



/* Entry: 1033c72ec; end: 1033c7347; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory lensFeedDataStoreWithSectionConfiguration:] */

void FUN_1033c72ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1033c710c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c7348; end: 1033c736f; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory remoteStateProviderForSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c7348(long param_1)

{
  func_0x000107c4fe4c(*(undefined8 *)(param_1 + _DAT_112f62808));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c7370; end: 1033c737f; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c7370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f62808),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1033c7380; end: 1033c73ab; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory init] */

void FUN_1033c7380(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerHeroContentDataStoreFactory",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c73ac);
  (*pcVar1)();
}



/* Entry: 1033c73ac; end: 1033c73af;  */

void FUN_1033c73ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033c73b0; end: 1033c73e7; -[_TtC13GamesExplorer40GamesExplorerHeroContentDataStoreFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c73b0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f62808));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f62810));
  return;
}



/* Entry: 1033c73e8; end: 1033c7407;  */

void FUN_1033c73e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6698);
  return;
}



/* Entry: 1033c7408; end: 1033c742b;  */

void FUN_1033c7408(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033c742c; end: 1033c743b; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore allItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c742c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f62848));
  return;
}



/* Entry: 1033c743c; end: 1033c744b; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c743c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f62850));
  return;
}



/* Entry: 1033c744c; end: 1033c7473; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c744c(long param_1)

{
  func_0x000107c4fe48(*(undefined8 *)(param_1 + _DAT_112f62840));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c7474; end: 1033c74e3; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c7474(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f62840);
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



/* Entry: 1033c74e4; end: 1033c7753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033c74e4(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  func_0x000107c614f0();
  lVar1 = _DAT_112f62858;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f62840) = param_1;
  puVar2 = param_1;
  func_0x000107c615f0();
  FUN_1033c7754();
  func_0x000107c6142c(param_2);
  *(undefined **)(unaff_x20 + _DAT_112f62848) = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168();
    func_0x0001033c8628(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = 1;
    func_0x000107c6010c(1);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar8 = (undefined *)0x0;
    *(undefined **)(unaff_x20 + _DAT_112f62850) = puVar3;
  }
  else {
    puVar8 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c61174(puVar2);
    func_0x000107c46db0();
    puVar3 = puVar8;
    func_0x000107c43bf4();
    func_0x000107c61180();
    *(undefined **)(unaff_x20 + _DAT_112f62850) = puVar3;
  }
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
  }
  else if (puVar8 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
    puVar8 = puVar2;
  }
  else {
    puVar6 = param_1;
    func_0x000107c49cd4(param_1);
    func_0x000107c61180();
    puVar3 = &UNK_11064d3e0;
    func_0x000107c613fc(&UNK_11064d3e0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined **)(puVar3 + 0x18) = puVar8;
    *(undefined1 **)(puVar3 + 0x20) = puVar5;
    pcStack_70 = FUN_1033c7f88;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101286f34;
    puStack_78 = &UNK_11064d3f8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar8);
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c5dc64(puVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar7);
    puVar8 = puVar6;
  }
  func_0x000107c61170(puVar8);
  return puVar5;
}



/* Entry: 1033c7754; end: 1033c79b3;  */

code * FUN_1033c7754(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  code *pcVar6;
  
  lVar1 = param_1;
  func_0x000107c3db5c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    pcVar6 = (code *)0x0;
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar2 = lVar1;
    func_0x0001000b637c(lVar1);
    puVar3 = &UNK_11064d480;
    func_0x000107c613fc(&UNK_11064d480,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    func_0x000107c615f0(param_1);
    uVar5 = 0x1033c7fb8;
    func_0x0001000c0ebc(0x1033c7fb8,puVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11064d4a8;
    func_0x000107c613fc(&UNK_11064d4a8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    uVar4 = 0;
    func_0x0001033c8628(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61434(param_2);
    pcVar6 = FUN_1033c7fc0;
    func_0x0001000bfde0(FUN_1033c7fc0,puVar3,uVar4);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar3);
    uVar5 = 1;
    func_0x00010487fe40(1);
    func_0x000107c61574(pcVar6);
    func_0x0001004575f0();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar5);
  }
  return pcVar6;
}



/* Entry: 1033c79b4; end: 1033c7a4b;  */

void FUN_1033c79b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c40808();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1033c7a4c; end: 1033c7eaf;  */

void FUN_1033c7a4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar15;
  undefined *puVar16;
  bool bVar17;
  long lVar18;
  long lVar19;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_58;
  
  lVar4 = 0x112f1c1d0;
  func_0x0001000285a8(0x112f1c1d0,&UNK_10dbbee40);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&lStack_b0 - extraout_x8;
  lVar4 = 0;
  FUN_1033bf3f0();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lStack_a8 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *param_2;
  lStack_58 = 0;
  puVar5 = &UNK_11064d4d0;
  func_0x000107c613fc(&UNK_11064d4d0,0x18,7);
  *(long **)(puVar5 + 0x10) = &lStack_58;
  puVar6 = &UNK_11064d4f8;
  uVar13 = 0x20;
  func_0x000107c613fc(&UNK_11064d4f8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1033c85b8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_70 = FUN_1033c85e4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1020995dc;
  puStack_78 = &UNK_11064d510;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar16 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar16);
  func_0x000107c4c684(uVar15);
  func_0x000107c60bd0(ppuVar7);
  if (lStack_58 != 0) {
    lVar8 = lStack_58;
    func_0x000107c61174();
    lVar9 = lVar8;
    func_0x000107c5d2ac();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c61170(lVar8);
      puVar16 = (undefined *)0x0;
      goto LAB_1033c7e2c;
    }
    lVar10 = lVar9;
    lStack_b0 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    if (*(long *)(param_3 + 0x10) == 0) {
      bVar17 = true;
    }
    else {
      func_0x000107c61434(param_3);
      uVar14 = uVar13;
      func_0x000100029284(lVar10);
      bVar17 = (uVar14 & 1) == 0;
      if (!bVar17) {
        func_0x000102e00fa4(*(long *)(param_3 + 0x38) + *(long *)(lVar18 + 0x48) * lVar10,lVar19);
      }
      func_0x000107c6142c(param_3);
    }
    (**(code **)(lVar18 + 0x38))(lVar19,bVar17,1,lVar4);
    func_0x000107c6142c(uVar13);
    lVar8 = lVar19;
    (**(code **)(lVar18 + 0x30))(lVar19,1,lVar4);
    lVar18 = lStack_a8;
    if ((int)lVar8 == 1) {
      func_0x000107c61170(lStack_b0);
      func_0x000102e00ed4(lVar19);
    }
    else {
      func_0x000102e00f1c(lVar19,lStack_a8);
      puVar16 = PTR_PTR_1126cce98;
      func_0x000107c61168();
      func_0x000107c4b0d0();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c7ea4);
        (*pcVar3)();
      }
      puVar11 = puVar16;
      func_0x000107c5ed90();
      puVar12 = puVar16;
      func_0x000107c5e82c();
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar11);
      if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c7ea8);
        (*pcVar3)();
      }
      puVar16 = puVar12;
      func_0x000107c5e434();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c7eac);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar4 + 0x14));
      uVar15 = *puVar1;
      uVar2 = puVar1[1];
      puVar11 = PTR_PTR_1126df300;
      func_0x000107c610f8(PTR_PTR_1126df300);
      func_0x000107c5fadc(uVar15,uVar2);
      func_0x000107c48b50(puVar11);
      func_0x000107c61170(uVar15);
      puVar12 = puVar16;
      func_0x000107c5e588();
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar11);
      if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c7eb0);
        (*pcVar3)();
      }
      puVar11 = puVar12;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      if (puVar11 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126ccc20;
        func_0x000107c61168();
        func_0x000107c4b244();
        func_0x000107c61180();
        func_0x000107c61170(lStack_b0);
        func_0x000107c61170(puVar11);
        FUN_1033c85ec(lVar18);
        goto LAB_1033c7e2c;
      }
      FUN_1033c85ec(lVar18);
      func_0x000107c61170(lStack_b0);
    }
  }
  puVar16 = (undefined *)0x0;
LAB_1033c7e2c:
  lVar4 = lStack_58;
  *param_1 = puVar16;
  func_0x000107c61574(puVar5);
  func_0x000107c61170(lVar4);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x7b,0x86,0x11,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c7ea0);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1033c7eb0; end: 1033c7f0f; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore init] */

void FUN_1033c7eb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerHeroContentDataStore",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c7edc);
  (*pcVar1)();
}



/* Entry: 1033c7f10; end: 1033c7f67; -[_TtC13GamesExplorerP33_DD9A1E938EEE109C7A11557355F758B333GamesExplorerHeroContentDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033c7f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c7f40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c7f10(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f62840));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f62848));
  return;
}



/* Entry: 1033c7f68; end: 1033c7f87;  */

void FUN_1033c7f68(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6760);
  return;
}



/* Entry: 1033c7f88; end: 1033c7fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c7f88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_70;
  func_0x000107c5c6c0(uVar1,param_2,1);
  func_0x000107c61180();
  puVar2 = &UNK_11064d430;
  func_0x000107c613fc(&UNK_11064d430,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_50 = 0x1033c7fb0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101218f4c;
  puStack_58 = &UNK_11064d448;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1033c7fc0; end: 1033c7feb;  */

void FUN_1033c7fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  FUN_1033c8364(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Entry: 1033c7fec; end: 1033c7fff;  */

ulong FUN_1033c7fec(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c8240);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1033caa64(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c823c);
      (*pcVar1)();
    }
    (*(code *)0x1033c8240)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1033c8000; end: 1033c8107;  */

undefined * FUN_1033c8000(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c8108);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f62888;
    func_0x0001000285a8(0x112f62888,&UNK_10dbbee48);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11064c9d0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1033c8108; end: 1033c8363;  */

ulong FUN_1033c8108(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c8240);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c823c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1033c8364; end: 1033c85b7;  */

undefined * FUN_1033c8364(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uVar4 = 0;
  func_0x0001033c8628(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_1,&uStack_68,uVar4);
  uVar2 = uStack_68;
  if (uStack_68 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar8;
  }
  uVar10 = uStack_68 & 0xffffffffffffff8;
  if (uStack_68 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar10 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uStack_68;
    if (-1 < (long)uStack_68) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c8558);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(uVar2 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar12;
        func_0x0001020a4b50(uVar12,uVar2);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c8554);
        (*pcVar3)();
      }
      uVar13 = uVar12 + 1;
      uStack_68 = uVar7;
      FUN_1033c7a4c(&lStack_70,&uStack_68,param_2);
      func_0x000107c61170(uVar7);
      lVar1 = lStack_70;
      if (lStack_70 != 0) {
        puVar6 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar8 < 0)) ||
           (puVar6 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar5 = puVar8;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          FUN_1033c8108(0,puVar5 + 1,1,puVar8,0x103176c9c,FUN_10317501c);
        }
        uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar7 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar6;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1033c8108(puVar8,uVar7 + 1,1,puVar6,0x103176c9c,FUN_10317501c);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
        *(long *)(uVar9 + uVar7 * 8 + 0x20) = lVar1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar11);
  }
  func_0x000107c6142c(uVar2);
  puVar6 = puVar8;
  func_0x000107c5fc48(puVar8,uVar4);
  func_0x000107c6142c(puVar8);
  return puVar6;
}



/* Entry: 1033c85b8; end: 1033c85e3;  */

void FUN_1033c85b8(undefined8 param_1)

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



/* Entry: 1033c85e4; end: 1033c85eb;  */

void FUN_1033c85e4(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1033c85ec; end: 1033c8667;  */

undefined8 FUN_1033c85ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1033bf3f0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033c8668; end: 1033c867b;  */

void FUN_1033c8668(long param_1,long param_2)

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



/* Entry: 1033c867c; end: 1033c877b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1033c867c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_50;
  if (*(long *)(unaff_x20 + _DAT_112f62898) == 0xb) {
    lVar5 = unaff_x20 + _DAT_112f628a0;
    if (*(char *)(lVar5 + 1) == '\x01') {
      lVar2 = 0;
      FUN_1033c9e9c();
      lVar4 = lVar2;
      func_0x000107c610f8();
      *(long **)(lVar4 + _DAT_112f62990) = param_1;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar2;
      func_0x000107c615f0(param_1);
      func_0x000107c61154(&lStack_50,puVar1);
      param_1 = plVar3;
    }
    else {
      func_0x000107c615f0(param_1);
    }
    uVar6 = *(undefined8 *)(lVar5 + 8);
    lVar4 = 0;
    FUN_1033c73e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long **)(lVar5 + _DAT_112f62808) = param_1;
    *(undefined8 *)(lVar5 + _DAT_112f62810) = uVar6;
    puVar1 = PTR_s_init_1125d9248;
    lStack_40 = lVar5;
    lStack_38 = lVar4;
    func_0x000107c61434(uVar6);
    param_1 = &lStack_40;
    func_0x000107c61154(param_1,puVar1);
  }
  else {
    func_0x000107c615f0(param_1);
  }
  return param_1;
}



/* Entry: 1033c877c; end: 1033c8787; -[_TtC13GamesExplorer34GamesExplorerQueryContextDecorator decorateDataStoreFactory:] */

void FUN_1033c877c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1033c867c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c8788; end: 1033c880f; -[_TtC13GamesExplorer34GamesExplorerQueryContextDecorator decorateCategoriesProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c8788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f62890);
  lVar2 = 0;
  FUN_1033c70c4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f627d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f627d8) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c8810; end: 1033c8a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1033c8810(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  code *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_70;
  long lStack_68;
  
  uVar16 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f62890) + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f62898);
  puVar1 = (undefined1 *)(unaff_x20 + _DAT_112f628a0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar14 = *(undefined8 *)(puVar1 + 8);
  plVar13 = *(long **)(unaff_x20 + _DAT_112f628a8);
  lVar6 = 0;
  FUN_1033c9bfc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar2 = (undefined8 *)(lVar7 + _DAT_112f62900);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar5 = _DAT_112f62908;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar16);
  uVar15 = uVar14;
  func_0x000107c61434();
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + lVar5) = uVar15;
  lVar5 = _DAT_112f62910;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1033c8cb8(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f62108,&UNK_10dbbe820);
  *(undefined **)(lVar7 + lVar5) = puVar8;
  *(undefined8 *)(lVar7 + _DAT_112f628e0) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112f628e8) = uVar17;
  puVar1 = (undefined1 *)(lVar7 + _DAT_112f628f8);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar14;
  *(long **)(lVar7 + _DAT_112f628f0) = plVar13;
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(plVar13);
  plVar9 = &lStack_70;
  func_0x000107c61154(plVar9,puVar8);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar8 = PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
  func_0x000100471e0c(plVar13,0);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_11064d550;
  func_0x000107c613fc(&UNK_11064d550,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar9);
  func_0x000107c61170(plVar9);
  pcVar10 = FUN_1033c8db0;
  puVar11 = puVar8;
  (**(code **)(*plVar13 + 0x60))(FUN_1033c8db0);
  func_0x000107c61574(plVar13);
  func_0x000107c61574(puVar8);
  func_0x000107c614f0(pcVar10);
  uVar15 = *(undefined8 *)((long)plVar9 + _DAT_112f62908);
  pcVar12 = *(code **)(puVar11 + 0x10);
  func_0x000107c6157c(uVar15);
  (*pcVar12)();
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar16);
  func_0x000107c615e8(pcVar10);
  func_0x000107c61574(uVar15);
  return plVar9;
}



/* Entry: 1033c8a70; end: 1033c8a7b; -[_TtC13GamesExplorer34GamesExplorerQueryContextDecorator decorateSectionConfigurationsDataStore:] */

void FUN_1033c8a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1033c8810(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c8a7c; end: 1033c8adb;  */

void FUN_1033c8a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c8adc; end: 1033c8b3b; -[_TtC13GamesExplorer34GamesExplorerQueryContextDecorator init] */

void FUN_1033c8adc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerQueryContextDecorator",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c8b08);
  (*pcVar1)();
}



/* Entry: 1033c8b3c; end: 1033c8b87; -[_TtC13GamesExplorer34GamesExplorerQueryContextDecorator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c8b3c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62890));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f628a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f628a8));
  return;
}



/* Entry: 1033c8b88; end: 1033c8ba7;  */

void FUN_1033c8b88(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6838);
  return;
}



/* Entry: 1033c8ba8; end: 1033c8ca3;  */

undefined * FUN_1033c8ba8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f62100,&UNK_10dbbee80);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8ca0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8ca4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1033c8ca4; end: 1033c8cb7;  */

undefined * FUN_1033c8ca4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f628d8,&UNK_10dbbee88);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8dac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8db0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1033c8cb8; end: 1033c8daf;  */

undefined * FUN_1033c8cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8dac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1033c8db0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1033c8db0; end: 1033c8db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c8db0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  puVar5 = (undefined8 *)(lVar4 + _DAT_112f62900);
  uVar7 = puVar5[1];
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar7);
  lVar9 = _DAT_112f62910;
  func_0x000107c61428(lVar4 + _DAT_112f62910,auStack_70,0,0);
  lVar9 = *(long *)(lVar4 + lVar9);
  puVar8 = *(undefined8 **)(lVar9 + 0x10);
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar8 != (undefined8 *)0x0) {
    func_0x000107c61434(lVar9);
    puVar5 = puVar8;
    FUN_1033caa90(puVar8,0);
    puVar10 = &uStack_98;
    FUN_1033c9c2c(puVar10,puVar5 + 4,puVar8,lVar9);
    FUN_1033c9d78(uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    if (puVar10 != puVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c9040);
      (*pcVar3)();
    }
  }
  if (((long)puVar5 < 0) || (((ulong)puVar5 >> 0x3e & 1) != 0)) {
    puVar8 = puVar5;
    func_0x000107c60480();
  }
  else {
    puVar8 = (undefined8 *)puVar5[2];
  }
  if (puVar8 != (undefined8 *)0x0) {
    if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c9044);
      (*pcVar3)();
    }
    puVar10 = (undefined8 *)0x0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar6 = (undefined8 *)puVar5[(long)((long)puVar10 + 4)];
        func_0x000107c61174(puVar6);
      }
      else {
        puVar6 = puVar10;
        FUN_1033ca8e0(puVar10,puVar5);
      }
      puVar10 = (undefined8 *)((long)puVar10 + 1);
      FUN_1033c91b4();
      func_0x000107c61170(puVar6);
    } while (puVar8 != puVar10);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1033c8db8; end: 1033c8ebb;  */

void FUN_1033c8db8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001002ed07c();
  func_0x000107c60108(0x4032000000000000);
  uRam0000000112f62978 = uVar1;
  return;
}



/* Entry: 1033c8ebc; end: 1033c9043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c8ebc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  puVar4 = (undefined8 *)(param_2 + _DAT_112f62900);
  uVar6 = puVar4[1];
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar6);
  lVar8 = _DAT_112f62910;
  func_0x000107c61428(param_2 + _DAT_112f62910,auStack_70,0,0);
  lVar8 = *(long *)(param_2 + lVar8);
  puVar7 = *(undefined8 **)(lVar8 + 0x10);
  puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x000107c61434(lVar8);
    puVar4 = puVar7;
    FUN_1033caa90(puVar7,0);
    puVar9 = &uStack_98;
    FUN_1033c9c2c(puVar9,puVar4 + 4,puVar7,lVar8);
    FUN_1033c9d78(uStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    if (puVar9 != puVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c9040);
      (*pcVar3)();
    }
  }
  if (((long)puVar4 < 0) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
    puVar7 = puVar4;
    func_0x000107c60480();
  }
  else {
    puVar7 = (undefined8 *)puVar4[2];
  }
  if (puVar7 != (undefined8 *)0x0) {
    if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033c9044);
      (*pcVar3)();
    }
    puVar9 = (undefined8 *)0x0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        puVar5 = (undefined8 *)puVar4[(long)((long)puVar9 + 4)];
        func_0x000107c61174(puVar5);
      }
      else {
        puVar5 = puVar9;
        FUN_1033ca8e0(puVar9,puVar4);
      }
      puVar9 = (undefined8 *)((long)puVar9 + 1);
      FUN_1033c91b4();
      func_0x000107c61170(puVar5);
    } while (puVar7 != puVar9);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1033c9044; end: 1033c905b; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore recreatesSectionsWhenConfigurationChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1033c9044(long param_1)

{
  return *(long *)(param_1 + _DAT_112f628e8) == 0xb;
}



/* Entry: 1033c905c; end: 1033c9083; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore feedConfigurationWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c905c(long param_1)

{
  func_0x000107c42f0c(*(undefined8 *)(param_1 + _DAT_112f628e0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c9084; end: 1033c90ab; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore feedConfigurationsWithIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9084(long param_1)

{
  func_0x000107c42f10(*(undefined8 *)(param_1 + _DAT_112f628e0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c90ac; end: 1033c91b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c90ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = param_2;
    func_0x000107c51b70(param_2);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    lVar1 = _DAT_112f62910;
    func_0x000107c61428(param_1 + _DAT_112f62910,auStack_70,0x21,0);
    func_0x000107c61174(param_2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61558(uVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
    FUN_1033bb4cc(param_2,uVar2,puVar4,uVar3);
    func_0x000107c6142c(puVar4);
    *(undefined8 *)(param_1 + lVar1) = uVar5;
    func_0x000107c614a8(auStack_70);
    FUN_1033c91b4(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033c91b4; end: 1033c94c3;  */

/* WARNING: Possible PIC construction at 0x0001033c9218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c92d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c9438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c9448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c9458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c9468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c9488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c946c) */
/* WARNING: Removing unreachable block (ram,0x0001033c945c) */
/* WARNING: Removing unreachable block (ram,0x0001033c944c) */
/* WARNING: Removing unreachable block (ram,0x0001033c943c) */
/* WARNING: Removing unreachable block (ram,0x0001033c92dc) */
/* WARNING: Removing unreachable block (ram,0x0001033c94c0) */
/* WARNING: Removing unreachable block (ram,0x0001033c92e0) */
/* WARNING: Removing unreachable block (ram,0x0001033c921c) */
/* WARNING: Removing unreachable block (ram,0x0001033c9234) */
/* WARNING: Removing unreachable block (ram,0x0001033c923c) */
/* WARNING: Removing unreachable block (ram,0x0001033c948c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c91b4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  lVar2 = param_1;
  func_0x000107c500ec();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61174(0);
    lVar3 = param_1;
    func_0x000107c51b70();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = param_1;
    FUN_1033c9734(param_1);
    func_0x000107c4129c(param_1);
    func_0x000107c61180();
    lVar5 = *(long *)(unaff_x20 + _DAT_112f628e8);
    if (lVar5 != 9) {
      func_0x000107c44c9c(param_1);
      func_0x000107c61180();
    }
    FUN_1033c9918(0,0);
    if ((lVar5 == 9) || ((lVar5 == 0xb && (*(char *)(unaff_x20 + _DAT_112f628f8) == '\x01')))) {
      func_0x000107c610f8();
      func_0x000107c486b0();
    }
    puVar4 = PTR_PTR_1126ccc58;
    func_0x000107c610f8(PTR_PTR_1126ccc58);
    func_0x000107c61174(lVar2);
    func_0x000107c4854c(puVar4);
  }
  else {
    func_0x000107c4e080();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c94c0);
      (*pcVar1)();
    }
    FUN_1033ba05c();
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1033c94c4; end: 1033c959f; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore storeFeedConfiguration:] */

/* WARNING: Possible PIC construction at 0x0001033c957c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c9580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c94c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f628f0);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_11064d578;
  func_0x000107c613fc(&UNK_11064d578,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11064d5c8;
  func_0x000107c613fc(&UNK_11064d5c8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x1033c9c24,puVar2,uVar3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033c95a0; end: 1033c965b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c95a0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c504e8(param_2);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + _DAT_112f62900);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
    lVar2 = _DAT_112f62910;
    func_0x000107c61428(param_1 + _DAT_112f62910,auStack_60,1,0);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar3);
    func_0x000107c504e8(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033c965c; end: 1033c9733; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore reset] */

/* WARNING: Possible PIC construction at 0x0001033c9718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c971c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c965c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f628e0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f628f0);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_11064d578;
  func_0x000107c613fc(&UNK_11064d578,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11064d5a0;
  func_0x000107c613fc(&UNK_11064d5a0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c615f0(uVar3);
  func_0x00010090569c(FUN_1033c9c1c,puVar2,uVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033c9734; end: 1033c9917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033c9734(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x000107c4c010();
  func_0x000107c61180();
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112f62900);
  uVar3 = ((ulong *)(unaff_x20 + _DAT_112f62900))[1];
  func_0x000107c61434(uVar3);
  uVar6 = param_1;
  func_0x000107c51b70();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x000107c5faec();
  uVar5 = param_2;
  func_0x000107c61170(uVar6);
  if (uVar3 == 0) {
    func_0x000107c6142c(param_2);
    param_1 = uVar1;
    func_0x000107c4037c();
    func_0x000107c61180();
    if (param_1 != 0) {
LAB_1033c9810:
      uVar7 = param_1;
      func_0x000107c5faec();
      uVar3 = uVar5;
      func_0x000107c61170(param_1);
      uVar6 = uVar5;
      goto LAB_1033c9844;
    }
  }
  else if (uVar2 == uVar7 && uVar3 == param_2) {
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(param_2);
  }
  else {
    uVar5 = param_2;
    func_0x000107c605b8(uVar2,param_2,uVar7,uVar3,0);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(param_2);
    if ((uVar2 & 1) == 0) {
      func_0x000107c51b70(param_1);
      func_0x000107c61180();
      goto LAB_1033c9810;
    }
  }
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = uVar5;
LAB_1033c9844:
  uVar2 = uVar1;
  func_0x000107c4c00c();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c51b88(uVar1);
  uVar3 = uVar1;
  func_0x000107c51b90(uVar1);
  func_0x000107c61180();
  if (uVar6 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x000107c5fadc(uVar7,uVar6);
    func_0x000107c6142c(uVar6);
  }
  puVar4 = PTR_PTR_1126ccf20;
  func_0x000107c610f8(PTR_PTR_1126ccf20);
  func_0x000107c47554();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  return puVar4;
}



/* Entry: 1033c9918; end: 1033c9b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033c9918(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    if (lRam0000000112f62940 != -1) {
      func_0x000107c61568(0x112f62940,0x1033c8e20);
    }
    lVar1 = lRam0000000112f62960;
    uVar2 = uRam0000000112f62948;
    if (((param_2 & 1) == 0) &&
       ((*(long *)(unaff_x20 + _DAT_112f628e8) == 9 ||
        ((*(long *)(unaff_x20 + _DAT_112f628e8) == 0xb &&
         (*(char *)(unaff_x20 + _DAT_112f628f8) == '\x01')))))) {
      func_0x000107c61174(uRam0000000112f62948);
      uVar4 = uRam0000000112f62968;
      uVar3 = uRam0000000112f62968;
      if (lVar1 != -1) {
        func_0x000107c61568(0x112f62960,0x1033c8e88);
        uVar4 = uRam0000000112f62968;
        uVar3 = uRam0000000112f62968;
      }
    }
    else {
      uVar4 = uRam0000000112f62948;
      uVar3 = 0;
    }
    func_0x000107c61174(uVar4);
    if (lRam0000000112f62950 != -1) {
      func_0x000107c61568(0x112f62950,0x1033c8e54);
    }
    puVar5 = PTR_PTR_1126acd00;
    func_0x000107c610f8(PTR_PTR_1126acd00);
  }
  else {
    if (lRam0000000112f62970 != -1) {
      func_0x000107c61568(0x112f62970,FUN_1033c8db8);
    }
    lVar1 = lRam0000000112f62980;
    uVar2 = uRam0000000112f62978;
    func_0x000107c61174(uRam0000000112f62978);
    if (lVar1 != -1) {
      func_0x000107c61568(0x112f62980,0x1033c8dec);
    }
    lVar1 = lRam0000000112f62950;
    uVar3 = uRam0000000112f62988;
    func_0x000107c61174(uRam0000000112f62988);
    if (lVar1 != -1) {
      func_0x000107c61568(0x112f62950,0x1033c8e54);
    }
    puVar5 = PTR_PTR_1126acd00;
    func_0x000107c610f8(PTR_PTR_1126acd00);
  }
  func_0x000107c46cf0();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return puVar5;
}



/* Entry: 1033c9b1c; end: 1033c9b7b; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore init] */

void FUN_1033c9b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerSectionConfigurationsDataStore",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c9b48);
  (*pcVar1)();
}



/* Entry: 1033c9b7c; end: 1033c9bfb; -[_TtC13GamesExplorer43GamesExplorerSectionConfigurationsDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033c9bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033c9bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9b7c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f628e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f628f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f628f8 + 8))
  ;
  return;
}



/* Entry: 1033c9bfc; end: 1033c9c1b;  */

void FUN_1033c9bfc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6910);
  return;
}



/* Entry: 1033c9c1c; end: 1033c9c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9c1c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c504e8(uVar2);
  }
  else {
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f62900);
    uVar5 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar5);
    lVar3 = _DAT_112f62910;
    func_0x000107c61428(lVar4 + _DAT_112f62910,auStack_60,1,0);
    uVar5 = *(undefined8 *)(lVar4 + lVar3);
    *(undefined **)(lVar4 + lVar3) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar5);
    func_0x000107c504e8(uVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1033c9c2c; end: 1033c9d77;  */

long FUN_1033c9c2c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c9d78);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar8 = 0;
    uVar10 = 0x3f - uVar6 >> 6;
    lVar9 = lVar4;
    while( true ) {
      while (uVar7 == 0) {
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033c9d74);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar9) {
          uVar7 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar9 = uVar10 - 1;
          param_3 = lVar8;
          goto LAB_1033c9d38;
        }
        uVar7 = puVar5[lVar9];
      }
      lVar8 = lVar8 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar9 * 0x200);
      if (lVar8 == param_3) break;
      func_0x000107c61174();
      lVar4 = lVar9;
      param_2 = param_2 + 1;
    }
    func_0x000107c61174();
  }
LAB_1033c9d38:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar9;
  param_1[4] = uVar7;
  return param_3;
}



/* Entry: 1033c9d78; end: 1033c9d7f;  */

void FUN_1033c9d78(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1033c9d80; end: 1033c9e27; -[_TtC13GamesExplorer42GamesExplorerStaticPreviewDataStoreFactory lensFeedDataStoreWithSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9d80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar5 = *(long *)(param_1 + _DAT_112f62990);
  func_0x000107c61174();
  func_0x000107c4b160();
  func_0x000107c61180();
  lVar2 = lVar5;
  FUN_1033ca6e0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f629c0) = lVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(lVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1033c9e28; end: 1033c9e4f; -[_TtC13GamesExplorer42GamesExplorerStaticPreviewDataStoreFactory remoteStateProviderForSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9e28(long param_1)

{
  func_0x000107c4fe4c(*(undefined8 *)(param_1 + _DAT_112f62990));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c9e50; end: 1033c9e5f; -[_TtC13GamesExplorer42GamesExplorerStaticPreviewDataStoreFactory reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f62990),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1033c9e60; end: 1033c9e8b; -[_TtC13GamesExplorer42GamesExplorerStaticPreviewDataStoreFactory init] */

void FUN_1033c9e60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerStaticPreviewDataStoreFactory",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033c9e8c);
  (*pcVar1)();
}



/* Entry: 1033c9e8c; end: 1033c9e9b; -[_TtC13GamesExplorer42GamesExplorerStaticPreviewDataStoreFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f62990));
  return;
}



/* Entry: 1033c9e9c; end: 1033c9ebb;  */

void FUN_1033c9e9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6a00);
  return;
}



/* Entry: 1033c9ebc; end: 1033c9ee3; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9ebc(long param_1)

{
  func_0x000107c4fe48(*(undefined8 *)(param_1 + _DAT_112f629c0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c9ee4; end: 1033c9f53; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f629c0);
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



/* Entry: 1033c9f54; end: 1033c9f7b; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033c9f54(long param_1)

{
  func_0x000107c49cd4(*(undefined8 *)(param_1 + _DAT_112f629c0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033c9f7c; end: 1033c9faf; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore allItems] */

void FUN_1033c9f7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033c9fb0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033c9fb0; end: 1033ca09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033c9fb0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f629c0);
  func_0x000107c3db5c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puVar2 = &UNK_11064d5f0;
    func_0x000107c613fc(&UNK_11064d5f0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    pcStack_40 = FUN_1033ca700;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10117fbac;
    puStack_48 = &UNK_11064d608;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar4 = lVar1;
    func_0x000107c4c280(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return lVar4;
}



/* Entry: 1033ca0a0; end: 1033ca193;  */

void FUN_1033ca0a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  lStack_48 = 0;
  uVar1 = 0;
  func_0x0001033caf90(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_2,&lStack_48,uVar1);
  lVar3 = lStack_48;
  if (lStack_48 == 0) {
    lVar3 = 0;
    func_0x0001033caf90(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174();
  }
  else {
    lVar2 = lStack_48;
    FUN_1033ca194();
    func_0x000107c6142c(lVar3);
    param_2 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
    lVar3 = 0;
    func_0x0001033caf90(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  param_1[3] = lVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1033ca194; end: 1033ca303;  */

undefined * FUN_1033ca194(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_1033ca8f4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033ca304);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      puVar2 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1033ca2e8);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        FUN_1033ca724(uVar6,param_1,&PTR_PTR_1126ccc20,0x112e56278);
      }
      uStack_78 = uVar4;
      FUN_1033ca304(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_1033ca8f4(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar5 != uVar6);
  }
  return puStack_68;
}



/* Entry: 1033ca304; end: 1033ca66b;  */

void FUN_1033ca304(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  uVar12 = *param_2;
  lStack_70 = 0;
  lStack_68 = 0;
  puVar2 = &UNK_11064d640;
  func_0x000107c613fc(&UNK_11064d640,0x18,7);
  *(long **)(puVar2 + 0x10) = &lStack_68;
  puVar3 = &UNK_11064d668;
  func_0x000107c613fc(&UNK_11064d668,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x1033caff0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033caa70;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1020995dc;
  puStack_88 = &UNK_11064d680;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11064d6b8;
  func_0x000107c613fc(&UNK_11064d6b8,0x18,7);
  *(long **)(puVar5 + 0x10) = &lStack_70;
  puVar6 = &UNK_11064d6e0;
  func_0x000107c613fc(&UNK_11064d6e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x1033caff4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = (code *)0x1033cafe8;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102500714;
  puStack_88 = &UNK_11064d6f8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c4c684(uVar12);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  lVar11 = lStack_68;
  lVar10 = lStack_70;
  if (lStack_68 == 0) {
    if (lStack_70 == 0) {
      *param_1 = uVar12;
      func_0x000107c61174(uVar12);
    }
    else {
      puVar9 = PTR_PTR_1126ccc20;
      func_0x000107c61168();
      func_0x000107c61174(lVar10);
      lVar11 = lVar10;
      FUN_1033cab1c();
      func_0x000107c40380();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      *param_1 = puVar9;
    }
  }
  else {
    puVar9 = PTR_PTR_1126cce98;
    func_0x000107c61168();
    func_0x000107c61174(lVar11);
    func_0x000107c4b0d0();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca664);
      (*pcVar1)();
    }
    puVar8 = puVar9;
    func_0x000107c5e434();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca668);
      (*pcVar1)();
    }
    puVar9 = puVar8;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca66c);
      (*pcVar1)();
    }
    puVar8 = PTR_PTR_1126ccc20;
    func_0x000107c61168();
    func_0x000107c4b244();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar11);
    *param_1 = puVar8;
  }
  func_0x000107c61170(lStack_70);
  lVar10 = lStack_68;
  func_0x000107c61574(puVar2);
  func_0x000107c61170(lVar10);
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x7d,0x35,0x11,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca65c);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x7d,0x38,0x20,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca660);
  (*pcVar1)();
}



/* Entry: 1033ca66c; end: 1033ca697; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore init] */

void FUN_1033ca66c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorer.GamesExplorerStaticPreviewDataStore",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ca698);
  (*pcVar1)();
}



/* Entry: 1033ca698; end: 1033ca69b;  */

void FUN_1033ca698(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


