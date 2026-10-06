/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024a07f4; end: 1024a085b; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation storyManagementPlugin] */

void FUN_1024a07f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40ad4(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024a085c; end: 1024a126b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a085c(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  char cVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [3];
  long alStack_c8 [3];
  undefined8 auStack_b0 [3];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar10 = _DAT_112fb99b8;
  lVar16 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar16 + _DAT_112fb99b8,auStack_80,0,0);
  uVar4 = *(ulong *)(lVar16 + lVar10);
  if (uVar4 == 0) {
LAB_1024a09b8:
    lVar10 = _DAT_112fb99a8;
    func_0x000107c61428(lVar16 + _DAT_112fb99a8,auStack_98,0,0);
    cVar14 = *(char *)(lVar16 + lVar10);
  }
  else {
    func_0x000107c5c068();
    func_0x000107c61180();
    if (uVar4 == 0) goto LAB_1024a09b8;
    uVar5 = 0;
    func_0x00010105686c(0);
    uVar15 = uVar4;
    func_0x000107c5fc54(uVar4,uVar5);
    func_0x000107c61170(uVar4);
    if (uVar15 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar4 = uVar15;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      uVar13 = 0;
      do {
        if ((uVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a09f8);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar15 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar13;
          func_0x000101059128(uVar13,uVar15);
        }
        uVar12 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a09f4);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x000107c3e37c();
        func_0x000107c61180();
        if (uVar7 == 0) {
LAB_1024a0908:
          func_0x000107c61170(uVar6);
        }
        else {
          uVar8 = uVar7;
          func_0x000107c3e1dc();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          if (uVar8 == 0) goto LAB_1024a0908;
          uVar7 = uVar8;
          func_0x000107c5d0f0();
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar6);
          if ((uVar7 == 3) || (uVar7 == 2)) {
            func_0x000107c6142c(uVar15);
            cVar14 = '\x01';
            goto LAB_1024a0a20;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar12 != uVar4);
    }
    func_0x000107c6142c(uVar15);
    cVar14 = '\0';
  }
LAB_1024a0a20:
  func_0x000100083b20(auStack_b0);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c615f0(auStack_b0[0]);
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar9 = puVar1;
    }
    func_0x000107c60480(puVar9);
  }
  uVar6 = 0;
  func_0x0001024a29a8(0,puVar9 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar4 = uVar6 & 0xffffffffffffff8;
  uVar15 = *(ulong *)(uVar4 + 0x10);
  uVar13 = uVar6;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x0001024a29a8(uVar13,uVar15 + 1,1,uVar6);
    uVar4 = uVar13 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar4 + 0x10) = uVar15 + 1;
  *(undefined8 *)(uVar4 + uVar15 * 8 + 0x20) = auStack_b0[0];
  uVar15 = uVar13;
  func_0x00010249dc60();
  lVar10 = _DAT_112fb98e0;
  func_0x000107c61428(lVar16 + _DAT_112fb98e0,auStack_b0,0,0);
  lVar10 = lVar16 + lVar10;
  func_0x000107c61618(lVar10);
  uVar6 = uVar15;
  func_0x000107c4098c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar15);
  func_0x000107c615e8(lVar10);
  if (uVar6 != 0) {
    func_0x000107c615f0(uVar6);
    uVar15 = uVar13;
    if (uVar13 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar13) {
        uVar4 = uVar13;
      }
      func_0x000107c60480(uVar4);
      uVar15 = 0;
      func_0x0001024a29a8(0,uVar4 + 1,1,uVar13);
      uVar4 = uVar15 & 0xffffffffffffff8;
    }
    uVar12 = *(ulong *)(uVar4 + 0x10);
    uVar13 = uVar15;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar12) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001024a29a8(uVar13,uVar12 + 1,1,uVar15);
      uVar4 = uVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar12 + 1;
    *(ulong *)(uVar4 + uVar12 * 8 + 0x20) = uVar6;
    func_0x000107c615e8(uVar6);
  }
  func_0x000100083b20(alStack_c8);
  lVar10 = alStack_c8[0];
  lVar11 = alStack_c8[0];
  func_0x000107c40ad4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar10);
  lVar10 = _DAT_112fb98d8;
  if (lVar11 != 0) {
    func_0x000107c61428(lVar16 + _DAT_112fb98d8,auStack_160,0,0);
    lVar2 = _DAT_112fb99a8;
    if ((*(int *)(lVar16 + lVar10) != 0x67) &&
       (func_0x000107c61428(lVar16 + _DAT_112fb99a8,auStack_178,0,0),
       (*(byte *)(lVar16 + lVar2) & 1) == 0)) {
      func_0x000107c615f0(lVar11);
      uVar4 = uVar13;
      if (uVar13 >> 0x3e != 0) {
        uVar15 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar15 = uVar13;
        }
        func_0x000107c60480(uVar15);
        uVar4 = 0;
        func_0x0001024a29a8(0,uVar15 + 1,1,uVar13);
      }
      uVar6 = uVar4 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar6 + 0x10);
      uVar13 = uVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar15) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x0001024a29a8(uVar13,uVar15 + 1,1,uVar4);
        uVar6 = uVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar15 + 1;
      *(long *)(uVar6 + uVar15 * 8 + 0x20) = lVar11;
    }
    func_0x000107c615e8(lVar11);
  }
  if (cVar14 != '\0') {
    func_0x000100083b20(alStack_c8);
    lVar10 = alStack_c8[0];
    uVar4 = uVar13;
    if (uVar13 >> 0x3e != 0) {
      uVar15 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar15 = uVar13;
      }
      func_0x000107c60480(uVar15);
      uVar4 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar13);
    }
    uVar15 = uVar4 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar15 + 0x10);
    uVar13 = uVar4;
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar6) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      func_0x0001024a29a8(uVar13,uVar6 + 1,1,uVar4);
      uVar15 = uVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar15 + 0x10) = uVar6 + 1;
    *(long *)(uVar15 + uVar6 * 8 + 0x20) = lVar10;
    lVar11 = _DAT_112fb98d8;
    lVar10 = lVar16 + _DAT_112fb98d8;
    func_0x000107c61428(lVar10,auStack_148,0,0);
    if (*(int *)(lVar16 + lVar11) != 0x62) {
      func_0x00010249dcfc();
      lVar11 = *(long *)(lVar10 + _DAT_112ff26f8);
      func_0x000107c61174();
      func_0x000107c61170(lVar10);
      lVar10 = lVar11;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      if (lVar10 != 0) {
        func_0x000107c615f0(lVar10);
        uVar4 = uVar13;
        if (uVar13 >> 0x3e != 0) {
          if (0x7fffffffffffffff < uVar13) {
            uVar15 = uVar13;
          }
          func_0x000107c60480(uVar15);
          uVar4 = 0;
          func_0x0001024a29a8(0,uVar15 + 1,1,uVar13);
          uVar15 = uVar4 & 0xffffffffffffff8;
        }
        uVar6 = *(ulong *)(uVar15 + 0x10);
        uVar13 = uVar4;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar6) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x0001024a29a8(uVar13,uVar6 + 1,1,uVar4);
          uVar15 = uVar13 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar6 + 1;
        *(long *)(uVar15 + uVar6 * 8 + 0x20) = lVar10;
        func_0x000107c615e8(lVar10);
      }
    }
  }
  func_0x000100083b20(alStack_c8);
  func_0x000107c615f0(alStack_c8[0]);
  uVar4 = uVar13;
  if (uVar13 >> 0x3e != 0) {
    uVar15 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480(uVar15);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar15 + 1,1,uVar13);
  }
  uVar15 = uVar4 & 0xffffffffffffff8;
  uVar13 = *(ulong *)(uVar15 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar13) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    func_0x0001024a29a8(uVar6,uVar13 + 1,1,uVar4);
    uVar15 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
  *(long *)(uVar15 + uVar13 * 8 + 0x20) = alStack_c8[0];
  func_0x000107c615e8(alStack_c8[0]);
  lVar10 = _DAT_112fb99e0;
  func_0x000107c61428(lVar16 + _DAT_112fb99e0,alStack_c8,0,0);
  if (*(char *)(lVar16 + lVar10) == '\x01') {
    func_0x000100083b20(auStack_e0);
    uVar4 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar6) {
        uVar15 = uVar6;
      }
      func_0x000107c60480(uVar15);
      uVar4 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar6);
      uVar15 = uVar4 & 0xffffffffffffff8;
    }
    uVar13 = *(ulong *)(uVar15 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar13) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      func_0x0001024a29a8(uVar6,uVar13 + 1,1,uVar4);
      uVar15 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
    *(undefined8 *)(uVar15 + uVar13 * 8 + 0x20) = auStack_e0[0];
  }
  lVar10 = _DAT_112fb99d0;
  func_0x000107c61428(lVar16 + _DAT_112fb99d0,auStack_e0,0,0);
  lVar11 = _DAT_112fb99e8;
  if (((*(byte *)(lVar16 + lVar10) & 1) != 0) ||
     (func_0x000107c61428(lVar16 + _DAT_112fb99e8,auStack_f8,0,0),
     *(char *)(lVar16 + lVar11) == '\x01')) {
    func_0x000100083b20(auStack_110);
    func_0x00010249db30();
    uVar5 = auStack_110[0];
    func_0x000107c40ad8();
    func_0x000107c61180();
    func_0x000107c615e8(auStack_110[0]);
    uVar4 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      uVar15 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar15 = uVar6;
      }
      func_0x000107c60480(uVar15);
      uVar4 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar6);
    }
    uVar13 = uVar4 & 0xffffffffffffff8;
    uVar15 = *(ulong *)(uVar13 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(uVar6,uVar15 + 1,1,uVar4);
      uVar13 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
    *(undefined8 *)(uVar13 + uVar15 * 8 + 0x20) = uVar5;
  }
  lVar11 = _DAT_112fb99d8;
  if ((*(char *)(lVar16 + lVar10) == '\x01') &&
     (func_0x000107c61428(lVar16 + _DAT_112fb99d8,auStack_130,0,0),
     *(char *)(lVar16 + lVar11) == '\x01')) {
    uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x120) + _DAT_11302e640);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 == 0) goto LAB_1024a0e98;
    uVar15 = uVar4;
    func_0x000107c42698();
    func_0x000107c615e8();
    if ((uVar15 & 1) == 0) goto LAB_1024a0e98;
  }
  else {
LAB_1024a0e98:
    lVar10 = _DAT_112fb98d8;
    uVar4 = lVar16 + _DAT_112fb98d8;
    func_0x000107c61428(uVar4,auStack_110,0,0);
    if (*(int *)(lVar16 + lVar10) != 0x67) goto LAB_1024a0ef4;
  }
  func_0x000100083b20(&uStack_118);
  if (uVar6 >> 0x3e != 0) {
    uVar15 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar15 = uVar6;
    }
    func_0x000107c60480(uVar15);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar15 + 1,1,uVar6);
    uVar6 = uVar4;
  }
  uVar13 = uVar6 & 0xffffffffffffff8;
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x0001024a29a8(uVar4,uVar15 + 1,1,uVar6);
    uVar13 = uVar4 & 0xffffffffffffff8;
    uVar6 = uVar4;
  }
  *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
  *(undefined8 *)(uVar13 + uVar15 * 8 + 0x20) = uStack_118;
LAB_1024a0ef4:
  FUN_1024a126c();
  if (uVar4 != 0) {
    func_0x000107c615f0();
    uVar15 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      uVar13 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar13 = uVar6;
      }
      func_0x000107c60480(uVar13);
      uVar15 = 0;
      func_0x0001024a29a8(0,uVar13 + 1,1,uVar6);
    }
    uVar12 = uVar15 & 0xffffffffffffff8;
    uVar13 = *(ulong *)(uVar12 + 0x10);
    uVar6 = uVar15;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar13) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      func_0x0001024a29a8(uVar6,uVar13 + 1,1,uVar15);
      uVar12 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar13 + 1;
    *(ulong *)(uVar12 + uVar13 * 8 + 0x20) = uVar4;
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c615e8(auStack_b0[0]);
  return uVar6;
}



/* Entry: 1024a126c; end: 1024a12f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a126c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fb98d8;
  lVar3 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar3 + _DAT_112fb98d8,auStack_48,0,0);
  iVar1 = *(int *)(lVar3 + lVar2);
  if (((iVar1 == 7) || (iVar1 == 0x67)) || (iVar1 == 0x59)) {
    uVar4 = *(undefined8 *)(unaff_x20 + 200);
    func_0x00010302d7d4(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x00010302c998();
  }
  return;
}



/* Entry: 1024a12f8; end: 1024a1303; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation myStoryPlugin] */

void FUN_1024a12f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1024a085c();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a1304; end: 1024a1607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a1304(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  
  func_0x000100083b20(auStack_68);
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar3 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar3);
  }
  uVar4 = 0;
  func_0x0001024a29a8(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = uVar4 & 0xffffffffffffff8;
  uVar8 = *(ulong *)(uVar9 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar6,uVar8 + 1,1,uVar4);
    uVar9 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
  *(undefined8 *)(uVar9 + uVar8 * 8 + 0x20) = auStack_68[0];
  uVar8 = uVar6;
  func_0x00010249dc60();
  lVar2 = _DAT_112fb98e0;
  lVar7 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar7 + _DAT_112fb98e0,auStack_68,0,0);
  lVar7 = lVar7 + lVar2;
  func_0x000107c61618(lVar7);
  uVar4 = uVar8;
  func_0x000107c4098c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(lVar7);
  if (uVar4 != 0) {
    func_0x000107c615f0(uVar4);
    uVar8 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      func_0x000107c60480(uVar9);
      uVar8 = 0;
      func_0x0001024a29a8(0,uVar9 + 1,1,uVar6);
      uVar9 = uVar8 & 0xffffffffffffff8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    uVar6 = uVar8;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001024a29a8(uVar6,uVar1 + 1,1,uVar8);
      uVar9 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(ulong *)(uVar9 + uVar1 * 8 + 0x20) = uVar4;
    func_0x000107c615e8(uVar4);
  }
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  uVar9 = uVar6;
  if (uVar6 >> 0x3e != 0) {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480(uVar8);
    uVar9 = 0;
    func_0x0001024a29a8(0,uVar8 + 1,1,uVar6);
  }
  uVar8 = uVar9 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar8 + 0x10);
  uVar4 = uVar9;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar9);
    uVar8 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uVar5;
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&uStack_70);
    uVar5 = uStack_70;
    func_0x000107c40ad8();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_70);
    uVar9 = uVar4;
    if (uVar4 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar4) {
        uVar8 = uVar4;
      }
      func_0x000107c60480(uVar8);
      uVar9 = 0;
      func_0x0001024a29a8(0,uVar8 + 1,1,uVar4);
      uVar8 = uVar9 & 0xffffffffffffff8;
    }
    uVar6 = *(ulong *)(uVar8 + 0x10);
    uVar4 = uVar9;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar9);
      uVar8 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
    *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uVar5;
  }
  return uVar4;
}



/* Entry: 1024a1608; end: 1024a166f; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation remoteStoriesPluginWithSpotlightEnabled:] */

void FUN_1024a1608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6157c();
  FUN_1024a1304(param_3);
  func_0x000107c61574(param_1);
  uVar1 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1024a1670; end: 1024a1a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a1670(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  
  func_0x000100083b20(auStack_58);
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar3 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar3);
  }
  uVar4 = 0;
  func_0x0001024a29a8(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = uVar4 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar9 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar7,uVar6 + 1,1,uVar4);
    uVar9 = uVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = auStack_58[0];
  lVar2 = _DAT_112fb98e8;
  lVar8 = *(long *)(unaff_x20 + 0x1b8);
  uVar6 = lVar8 + _DAT_112fb98e8;
  func_0x000107c61428(uVar6,auStack_58,0,0);
  uVar4 = *(ulong *)(lVar8 + lVar2);
  if (uVar4 != 0) {
    uVar5 = 0;
    func_0x0001047c0984(0);
    func_0x000107c61480(uVar4,uVar5);
    uVar6 = uVar4;
    if (uVar4 != 0) goto LAB_1024a1768;
  }
  uVar4 = uVar6;
  func_0x000100083b20(&uStack_60);
  uVar5 = uStack_60;
  if (uVar7 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480(uVar9);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  uVar6 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = uVar5;
LAB_1024a1768:
  func_0x000100083b20(&uStack_60);
  uVar5 = uStack_60;
  if (uVar7 >> 0x3e != 0) {
    uVar9 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480(uVar9);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar7);
    uVar7 = uVar4;
  }
  uVar9 = uVar7 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = uVar5;
  func_0x000100083b20(&uStack_60);
  uVar5 = uStack_60;
  if (uVar7 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480(uVar9);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  uVar6 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = uVar5;
  func_0x000100083b20(&uStack_60);
  if (uVar7 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480(uVar9);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  uVar6 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar4,uVar6 + 1,1,uVar7);
    uVar9 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = uStack_60;
  FUN_1024a1a2c();
  if (uVar4 != 0) {
    func_0x000107c615f0();
    uVar6 = uVar7;
    if (uVar7 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar7) {
        uVar9 = uVar7;
      }
      func_0x000107c60480(uVar9);
      uVar6 = 0;
      func_0x0001024a29a8(0,uVar9 + 1,1,uVar7);
      uVar9 = uVar6 & 0xffffffffffffff8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001024a29a8(uVar7,uVar1 + 1,1,uVar6);
      uVar9 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(ulong *)(uVar9 + uVar1 * 8 + 0x20) = uVar4;
    func_0x000107c615e8(uVar4);
  }
  return uVar7;
}



/* Entry: 1024a1a2c; end: 1024a1bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024a1a2c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112fb98e8;
  lVar5 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar5 + _DAT_112fb98e8,auStack_68,0,0);
  lVar4 = *(long *)(lVar5 + lVar4);
  if (lVar4 != 0) {
    func_0x0001047c0984(0);
    lVar1 = lVar4;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (lVar1 != 0) {
      func_0x00010249dbc8();
      func_0x000107c61428(lVar5 + _DAT_112fb98d8,auStack_80,0,0);
      func_0x000107c61428(lVar5 + _DAT_112fb98b8,auStack_98,0,0);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c61428(lVar5 + _DAT_112fb98a0,auStack_b0,0,0);
      lVar5 = lVar4;
      func_0x000107c615f0();
      func_0x00010249dcfc();
      uVar3 = *(undefined8 *)(lVar5 + _DAT_112ff26f0);
      func_0x000107c61174(uVar3);
      func_0x000107c61170(lVar5);
      lVar5 = lVar1;
      func_0x000107c40bac(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c4c4a8(lVar5);
      func_0x000107c615e8(lVar4);
      return lVar5;
    }
    func_0x000107c615e8(lVar4);
  }
  return 0;
}



/* Entry: 1024a1be0; end: 1024a1beb; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation collectionViewAutoPlayOperaPlugins] */

void FUN_1024a1be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1024a1670();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a1bec; end: 1024a1f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a1bec(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  
  func_0x000100083b20(auStack_58);
  uVar3 = auStack_58[0];
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar4 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar4);
  }
  uVar5 = 0;
  func_0x0001024a29a8(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = uVar5 & 0xffffffffffffff8;
  uVar8 = *(ulong *)(uVar9 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar6,uVar8 + 1,1,uVar5);
    uVar9 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
  *(undefined8 *)(uVar9 + uVar8 * 8 + 0x20) = uVar3;
  uVar8 = uVar6;
  func_0x000100083b20(auStack_58);
  if (uVar6 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar6) {
      uVar9 = uVar6;
    }
    func_0x000107c60480(uVar9);
    uVar8 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar6);
    uVar9 = uVar8 & 0xffffffffffffff8;
    uVar6 = uVar8;
  }
  uVar5 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar5) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar8,uVar5 + 1,1,uVar6);
    uVar9 = uVar8 & 0xffffffffffffff8;
    uVar6 = uVar8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
  *(undefined8 *)(uVar9 + uVar5 * 8 + 0x20) = auStack_58[0];
  func_0x00010249dc60();
  lVar2 = _DAT_112fb98e0;
  lVar7 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar7 + _DAT_112fb98e0,auStack_58,0,0);
  lVar7 = lVar7 + lVar2;
  func_0x000107c61618(lVar7);
  uVar5 = uVar8;
  func_0x000107c4098c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(lVar7);
  if (uVar5 != 0) {
    func_0x000107c615f0(uVar5);
    uVar8 = uVar6;
    if (uVar6 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      func_0x000107c60480(uVar9);
      uVar8 = 0;
      func_0x0001024a29a8(0,uVar9 + 1,1,uVar6);
      uVar9 = uVar8 & 0xffffffffffffff8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    uVar6 = uVar8;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001024a29a8(uVar6,uVar1 + 1,1,uVar8);
      uVar9 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(ulong *)(uVar9 + uVar1 * 8 + 0x20) = uVar5;
    func_0x000107c615e8(uVar5);
  }
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  uVar9 = uVar6;
  if (uVar6 >> 0x3e != 0) {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480(uVar8);
    uVar9 = 0;
    func_0x0001024a29a8(0,uVar8 + 1,1,uVar6);
  }
  uVar8 = uVar9 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar8 + 0x10);
  uVar5 = uVar9;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001024a29a8(uVar5,uVar6 + 1,1,uVar9);
    uVar8 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uVar3;
  func_0x000100083b20(&uStack_60);
  func_0x000107c615f0(uStack_60);
  uVar9 = uVar5;
  if (uVar5 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar5) {
      uVar8 = uVar5;
    }
    func_0x000107c60480(uVar8);
    uVar9 = 0;
    func_0x0001024a29a8(0,uVar8 + 1,1,uVar5);
    uVar8 = uVar9 & 0xffffffffffffff8;
  }
  uVar6 = *(ulong *)(uVar8 + 0x10);
  uVar5 = uVar9;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x0001024a29a8(uVar5,uVar6 + 1,1,uVar9);
    uVar8 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uStack_60;
  func_0x000107c615e8(uStack_60);
  return uVar5;
}



/* Entry: 1024a1f4c; end: 1024a1f57; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation managedMassSnapPlaybackPlugins] */

void FUN_1024a1f4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1024a1bec();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a1f58; end: 1024a1fbb;  */

void FUN_1024a1f58(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a1fbc; end: 1024a2063;  */

void FUN_1024a1fbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4fb6c(param_4);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
    }
    func_0x000107c615e8(param_3);
  }
  return;
}



/* Entry: 1024a2064; end: 1024a239b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a2064(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = _DAT_112fb9920;
  lVar11 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar11 + _DAT_112fb9920,auStack_80,0,0);
  lVar2 = lVar11 + lVar2;
  func_0x000107c61618();
  lVar10 = _DAT_112fb9898;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar11 + _DAT_112fb9898,auStack_98,0,0);
    lVar10 = *(long *)(lVar11 + lVar10);
    if (lVar10 != 0) {
      puVar1 = (undefined8 *)(lVar11 + _DAT_112fb98b0);
      func_0x000107c61428(puVar1,auStack_b0,0,0);
      lVar11 = puVar1[1];
      if (lVar11 != 0) {
        uVar16 = *puVar1;
        uVar12 = *(undefined8 *)(unaff_x20 + 0xf0);
        func_0x000107c61174();
        func_0x000107c61434(lVar11);
        uVar3 = uVar12;
        func_0x000107c44f4c();
        func_0x000107c61180();
        func_0x000107c44f60();
        func_0x000107c61180();
        uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0xe8) + _DAT_113091ad8);
        puVar4 = PTR_PTR_1126ae720;
        func_0x000107c61168(PTR_PTR_1126ae720);
        puVar5 = &UNK_110512398;
        func_0x000107c613fc(&UNK_110512398,0x28,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar14;
        *(undefined8 *)(puVar5 + 0x18) = uVar3;
        *(undefined8 *)(puVar5 + 0x20) = uVar12;
        pcStack_c0 = FUN_1024a30bc;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0x42000000;
        pcStack_d0 = FUN_1024a269c;
        puStack_c8 = &UNK_1105123b0;
        ppuVar6 = &puStack_e0;
        puStack_b8 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar5 = puStack_b8;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61574(puVar5);
        func_0x000107c3e4fc(puVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        uVar7 = *(undefined8 *)(unaff_x20 + 0x108);
        func_0x000107c4ac3c(uVar7);
        func_0x000107c61180();
        uVar8 = *(undefined8 *)(unaff_x20 + 0x100);
        func_0x000107c4ac44(uVar8);
        func_0x000107c61180();
        uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0xf8) + _DAT_11302d778);
        uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x120) + _DAT_11302e640);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61174(uVar15);
        func_0x000107c61174(uVar13);
        func_0x000107c5fadc(uVar16,lVar11);
        func_0x000107c6142c(lVar11);
        func_0x000107c48af4(puVar5);
        func_0x000107c61170(uVar16);
        uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
        func_0x000107c4d80c(uVar16);
        func_0x000107c61180();
        uVar9 = 0;
        func_0x00010302ea28(0);
        func_0x000107c610f8();
        func_0x00010302d9cc(uVar9,puVar4,uVar8,uVar15,uVar7,uVar13,lVar10,puVar5,uVar16);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar14);
        lVar10 = _DAT_112f353b8;
        func_0x000107c61428(puVar4 + _DAT_112f353b8,&puStack_e0,1,0);
        func_0x000107c61604(puVar4 + lVar10,lVar2);
        func_0x000107c615e8(lVar2);
        return;
      }
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1024a239c; end: 1024a24c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024a239c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112fb9920;
  lVar3 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar3 + _DAT_112fb9920,auStack_58,0,0);
  lVar3 = lVar3 + lVar2;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000103385ef0(0);
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x118) + _DAT_113048a28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x100);
    func_0x000107c61174(lVar2);
    func_0x000107c4ac44(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x120) + _DAT_11302e640);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x138);
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(uVar4);
    func_0x000103383bec(lVar2,uVar5,uVar6,uVar4);
    lVar1 = _DAT_112f5f1b8;
    func_0x000107c61428(lVar2 + _DAT_112f5f1b8,auStack_70,1,0);
    func_0x000107c61604(lVar2 + lVar1,lVar3);
    func_0x000107c615e8(lVar3);
  }
  return lVar2;
}



/* Entry: 1024a24c4; end: 1024a269b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a24c4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  ulong auStack_80 [2];
  char *pcStack_70;
  undefined1 auStack_60 [31];
  char cStack_41;
  
  lVar1 = _DAT_112fb9968;
  cStack_41 = '\0';
  lVar5 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar5 + _DAT_112fb9968,auStack_60,0,0);
  lVar1 = *(long *)(lVar5 + lVar1);
  if (lVar1 != 0) {
    pcStack_70 = &cStack_41;
    func_0x000107c61174();
    func_0x000104321844(FUN_1024a26d4,0,0x1024a26d8,0,0x1024a26dc,0,0x1024a26e0,0,0x1024a26e4,0,
                        0x1024a26e8,0,0x1024a26ec,0,0x1024a26f0,0,0x1024a311c,auStack_80,0x1024a26f4
                        ,0,0x1024a26f8,0,0x1024a26fc,0,0x1024a2700,0,0x1024a2704,0);
    func_0x000107c61170(lVar1);
    if (cStack_41 == '\x01') {
      return 0;
    }
  }
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + _DAT_113043d30);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(uVar4);
  uVar2 = auStack_80[0];
  func_0x000107c42550();
  func_0x000107c615e8(auStack_80[0]);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar2 = auStack_80[0];
  func_0x00010249dbc8();
  func_0x000107c61428(lVar5 + _DAT_112fb98d8,auStack_80,0,0);
  uVar3 = uVar2;
  func_0x000107c40920(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  return uVar3;
}



/* Entry: 1024a269c; end: 1024a26d3;  */

void FUN_1024a269c(long param_1)

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



/* Entry: 1024a26d4; end: 1024a2707;  */

void FUN_1024a26d4(void)

{
  return;
}



/* Entry: 1024a2708; end: 1024a28e3;  */

void FUN_1024a2708(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  return;
}



/* Entry: 1024a28e4; end: 1024a28f7;  */

void FUN_1024a28e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9e990 == (undefined *)0x0 || ((ulong)puRam0000000112e9e990 & 1) != 0) {
    puVar1 = &UNK_10e90c53e;
    func_0x000107c61518(&UNK_10e90c53e,0x22,0,0);
    puRam0000000112e9e990 = puVar1;
  }
  return;
}



/* Entry: 1024a28f8; end: 1024a2acf;  */

void FUN_1024a28f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001024a29a8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1024a2ad0; end: 1024a2b4f;  */

undefined * FUN_1024a2ad0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1024a28e4();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1024a2b50; end: 1024a2c73;  */

long FUN_1024a2b50(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a2c70);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a2c74);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e9e980;
        func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e9e980;
      func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a2c6c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1024a2c74; end: 1024a2e17;  */

ulong FUN_1024a2c74(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a2d4c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a2d50);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f0a3470);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024a2e18);
  (*pcVar2)();
}



/* Entry: 1024a2e18; end: 1024a2f7b;  */

ulong FUN_1024a2e18(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a2f7c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a2f70);
        (*pcVar1)();
      }
      uVar3 = 0x112e9e980;
      func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a2f74);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a2f78);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          FUN_1024a2c74(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1024a2f7c; end: 1024a2f8b;  */

undefined1  [16] FUN_1024a2f7c(void)

{
  return ZEXT816(0x110512328);
}



/* Entry: 1024a2f8c; end: 1024a2fab;  */

void FUN_1024a2f8c(void)

{
  func_0x000107c61168(&PTR_PTR_112e9e778);
  return;
}



/* Entry: 1024a2fac; end: 1024a2fbf;  */

void FUN_1024a2fac(void)

{
  undefined1 in_w7;
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = in_w7;
  return;
}



/* Entry: 1024a2fc0; end: 1024a30bb;  */

undefined * FUN_1024a2fc0(long param_1)

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
    func_0x0001000285a8(0x112e9e988,&UNK_10daaec40);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024a30b8);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024a30bc);
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



/* Entry: 1024a30bc; end: 1024a30fb;  */

void FUN_1024a30bc(void)

{
  func_0x000107c610f8(PTR_PTR_1126ceea0);
                    /* WARNING: Could not recover jumptable at 0x00010c05daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1024a30fc; end: 1024a311f;  */

void FUN_1024a30fc(long param_1,long param_2)

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



/* Entry: 1024a3120; end: 1024a3123; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin setPlaylistItemController:] */

void FUN_1024a3120(void)

{
  return;
}



/* Entry: 1024a3124; end: 1024a3137; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a3124(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9e9b0,param_3);
  return;
}



/* Entry: 1024a3138; end: 1024a3187; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a3138(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e9e9b8);
  *(undefined8 *)(param_1 + _DAT_112e9e9b8) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar1);
  func_0x000107c61604(param_1 + _DAT_112e9e9b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a3188; end: 1024a320f; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin registeredEventsForOperaSession] */

void FUN_1024a3188(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb69b4();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb69ec();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1024a3210; end: 1024a3303;  */

void FUN_1024a3210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  puVar2 = &UNK_110512460;
  func_0x000107c613fc(&UNK_110512460,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  uStack_50 = 0x1024a40c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110512478;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1024a3304; end: 1024a337b;  */

void FUN_1024a3304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1024a337c(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024a337c; end: 1024a3893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a337c(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar1 = unaff_x20;
  uVar14 = param_2;
  func_0x000107c614f0();
  if (param_3 == 0) goto LAB_1024a35a8;
  lVar2 = unaff_x20 + _DAT_112e9e9b0;
  func_0x000107c61618();
  if (lVar2 == 0) goto LAB_1024a35a8;
  func_0x000107c615f0(param_3);
  lVar15 = lVar2;
  func_0x000107c4e2bc();
  func_0x000107c61180();
  if (lVar15 == 0) {
LAB_1024a3558:
    func_0x000107c615e8(param_3);
  }
  else {
    lVar3 = lVar15;
    func_0x000107c40fa0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    if (lVar3 == 0) goto LAB_1024a3558;
    lVar15 = *(long *)(lVar3 + _DAT_11307abc8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1024a3578:
      uStack_98 = 0;
      puStack_a0 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      puStack_90 = (ulong *)0x0;
      func_0x000107c6142c(uVar14);
LAB_1024a3588:
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x00010006e7f4(&puStack_a0);
      goto LAB_1024a35a8;
    }
    func_0x000107c61434(lVar15);
    uVar9 = uVar14;
    func_0x000100029284(ppuVar4);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(lVar15);
      goto LAB_1024a3578;
    }
    func_0x0001000bb420(*(long *)(lVar15 + 0x38) + (long)ppuVar4 * 0x20,&puStack_a0);
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(lVar15);
    if (puStack_88 == (undefined *)0x0) goto LAB_1024a3588;
    uVar5 = 0;
    func_0x0001044b8ee8(0);
    puVar6 = &uStack_70;
    func_0x000107c6147c(puVar6,&puStack_a0,PTR___sypN_11034f1a8 + 8,uVar5,6);
    uVar14 = uStack_70;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      goto LAB_1024a35a8;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    if (*(long *)(uVar14 + _DAT_11307f528) == 0) {
LAB_1024a35f0:
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar14);
      func_0x000107c615e8(param_3);
      goto LAB_1024a35a8;
    }
    puStack_90 = &uStack_70;
    func_0x0001044bb4b8(FUN_1024a3c24,0,0x1024a4120,&puStack_a0,FUN_1024a3c60,0,0x1024a3c64,0,
                        0x1024a3c68,0,0x1024a3c6c,0,0x1024a3c70,0);
    uVar9 = uStack_68;
    if (uStack_68 == 0) goto LAB_1024a35f0;
    if ((uStack_70 == param_1) && (uStack_68 == param_2)) {
      func_0x000107c6142c(uStack_68);
LAB_1024a3640:
      lVar15 = lVar2;
      func_0x000107c5d1b8();
      func_0x000107c61180();
      if (lVar15 == 0) {
        func_0x000107c615e8(param_3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar14);
      }
      else {
        lVar8 = lVar15;
        func_0x000107c5d1b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar15);
        lVar15 = lVar8;
        func_0x0001024a394c();
        if (lVar15 != 0) {
          puVar6 = (ulong *)(unaff_x20 + _DAT_112e9e9c8);
          uVar9 = puVar6[1];
          *puVar6 = param_1;
          puVar6[1] = param_2;
          func_0x000107c6142c(uVar9);
          func_0x000107c61434(param_2);
          lVar10 = lVar2;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar10 != 0) {
            func_0x000107c614e4(lVar1);
            ppuVar4 = &puStack_a0;
            func_0x000107c5fb18(ppuVar4,lVar1);
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar1);
            func_0x000107c4e484(lVar10);
            func_0x000107c615e8(lVar10);
            func_0x000107c61170(ppuVar4);
          }
          puVar11 = PTR_PTR_1126deef8;
          func_0x000107c61168(PTR_PTR_1126deef8);
          func_0x000107c43be4();
          func_0x000107c61180();
          puVar12 = puVar11;
          func_0x000107c40a18();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          puVar13 = puVar12;
          func_0x000107c4ef14(puVar12);
          func_0x000107c61180();
          puVar11 = &UNK_1105123e8;
          func_0x000107c613fc(&UNK_1105123e8,0x18,7);
          func_0x000107c61614(puVar11 + 0x10,unaff_x20);
          uStack_80 = 0x1024a40d4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = (ulong *)&UNK_101286f34;
          puStack_88 = &UNK_1105124a0;
          ppuVar4 = &puStack_a0;
          puStack_78 = puVar11;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_78);
          func_0x000107c4db80(puVar13);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c615e8(param_3);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(lVar15);
          func_0x000107c615e8(puVar12);
          func_0x000107c61170(puVar13);
          return;
        }
        func_0x000107c615e8(param_3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(lVar8);
      }
      goto LAB_1024a35a8;
    }
    uVar7 = uStack_70;
    func_0x000107c605b8(uStack_70,uStack_68,param_1,param_2,0);
    func_0x000107c6142c(uVar9);
    if ((uVar7 & 1) != 0) goto LAB_1024a3640;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar14);
    lVar2 = param_3;
  }
  func_0x000107c615e8(lVar2);
LAB_1024a35a8:
  *(undefined1 *)(unaff_x20 + _DAT_112e9e9c0) = 0;
  return;
}



/* Entry: 1024a3894; end: 1024a3a9f; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x0001024a3930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a3934) */

void FUN_1024a3894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1024a3d70(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024a3aa0; end: 1024a3c23;  */

void FUN_1024a3aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar2 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  uStack_40 = 0x1024a40dc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105124c8;
  uStack_38 = param_3;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(puVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1024a3c24; end: 1024a3c27;  */

void FUN_1024a3c24(void)

{
  return;
}



/* Entry: 1024a3c28; end: 1024a3c5f;  */

void FUN_1024a3c28(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 6) {
    uVar1 = param_4[1];
    *param_4 = param_2;
    param_4[1] = param_3;
    func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  return;
}



/* Entry: 1024a3c60; end: 1024a3c73;  */

void FUN_1024a3c60(void)

{
  return;
}



/* Entry: 1024a3c74; end: 1024a3cd3; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin init] */

void FUN_1024a3c74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentOperaPluginServicesImplementation.FriendOfGroupStoryOperaEducationPlugin"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a3ca0);
  (*pcVar1)();
}



/* Entry: 1024a3cd4; end: 1024a3d4f; -[_TtC40ContentOperaPluginServicesImplementation38FriendOfGroupStoryOperaEducationPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a3cd4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9e998));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9e9a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9e9a8));
  FUN_1024a40e4(param_1 + _DAT_112e9e9b0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9e9b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e9e9c8 + 8))
  ;
  return;
}



/* Entry: 1024a3d50; end: 1024a3d6f;  */

void FUN_1024a3d50(void)

{
  func_0x000107c61168(&PTR_PTR_1128463f8);
  return;
}



/* Entry: 1024a3d70; end: 1024a4097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a3d70(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar3 = param_1;
  uVar10 = param_2;
  func_0x000103bb69b4();
  if ((((param_1 != (long *)*plVar3 || param_2 != plVar3[1]) &&
       (plVar3 = param_1, uVar10 = param_2, func_0x000107c605b8(), ((ulong)plVar3 & 1) == 0)) &&
      (func_0x000103bb69ec(), param_1 != (long *)*plVar3 || param_2 != plVar3[1])) &&
     (func_0x000107c605b8(), uVar10 = param_2, ((ulong)param_1 & 1) == 0)) {
    return;
  }
  lVar1 = _DAT_112e9e9c0;
  if ((*(byte *)(unaff_x20 + _DAT_112e9e9c0) & 1) != 0) {
    return;
  }
  if (param_3 == 0) {
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_70 = (ulong *)0x0;
  }
  else {
    lVar14 = *(long *)(param_3 + _DAT_11307abc8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (*(long *)(lVar14 + 0x10) != 0) {
      func_0x000107c61434(lVar14);
      uVar11 = uVar10;
      func_0x000100029284(ppuVar4);
      if ((uVar11 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar14 + 0x38) + (long)ppuVar4 * 0x20,&puStack_80);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(lVar14);
        if (puStack_68 != (undefined *)0x0) {
          uVar5 = 0;
          func_0x0001044b8ee8(0);
          puVar6 = &uStack_50;
          func_0x000107c6147c(puVar6,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
          uVar10 = uStack_50;
          if (((ulong)puVar6 & 1) == 0) {
            return;
          }
          uStack_50 = 0;
          uStack_48 = 0;
          if (*(long *)(uVar10 + _DAT_11307f528) != 0) {
            puStack_70 = &uStack_50;
            func_0x0001044bb4b8(FUN_1024a3c24,0,0x1024a40c0,&puStack_80,FUN_1024a3c60,0,0x1024a3c64,
                                0,0x1024a3c68,0,0x1024a3c6c,0,0x1024a3c70,0);
            uVar2 = uStack_48;
            uVar11 = uStack_50;
            if (uStack_48 != 0) {
              uVar13 = ((ulong *)(unaff_x20 + _DAT_112e9e9c8))[1];
              if ((uVar13 != 0) &&
                 (((uVar12 = *(ulong *)(unaff_x20 + _DAT_112e9e9c8), uStack_50 == uVar12 &&
                   (uStack_48 == uVar13)) ||
                  (uVar7 = uStack_50, func_0x000107c605b8(uStack_50,uStack_48,uVar12,uVar13,0),
                  (uVar7 & 1) != 0)))) {
                func_0x000107c61170(uVar10);
                func_0x000107c6142c(uVar2);
                return;
              }
              *(undefined1 *)(unaff_x20 + lVar1) = 1;
              uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e9e998);
              func_0x000107c5dbd4(uVar5);
              func_0x000107c61180();
              puVar8 = &UNK_1105123e8;
              func_0x000107c613fc(&UNK_1105123e8,0x18,7);
              func_0x000107c61614(puVar8 + 0x10);
              puVar9 = &UNK_110512410;
              func_0x000107c613fc(&UNK_110512410,0x28,7);
              *(undefined **)(puVar9 + 0x10) = puVar8;
              *(ulong *)(puVar9 + 0x18) = uVar11;
              *(ulong *)(puVar9 + 0x20) = uVar2;
              pcStack_60 = FUN_1024a4098;
              puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_78 = 0x42000000;
              puStack_70 = (ulong *)&UNK_1011eaae0;
              puStack_68 = &UNK_110512428;
              ppuVar4 = &puStack_80;
              puStack_58 = puVar9;
              func_0x000107c60bc4(ppuVar4);
              func_0x000107c61574(puStack_58);
              func_0x000107c44280(uVar5);
              func_0x000107c60bd0(ppuVar4);
              func_0x000107c61170(uVar10);
              func_0x000107c615e8(uVar5);
              return;
            }
          }
          func_0x000107c61170(uVar10);
          return;
        }
        goto LAB_1024a3f94;
      }
      func_0x000107c6142c(lVar14);
    }
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    puStack_70 = (ulong *)0x0;
    func_0x000107c6142c(uVar10);
  }
LAB_1024a3f94:
  func_0x00010006e7f4(&puStack_80);
  return;
}



/* Entry: 1024a4098; end: 1024a40e3;  */

void FUN_1024a4098(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  puVar4 = &UNK_110512460;
  func_0x000107c613fc(&UNK_110512460,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  uStack_50 = 0x1024a40c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110512478;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1024a40e4; end: 1024a4107;  */

undefined8 FUN_1024a40e4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024a4108; end: 1024a4123;  */

void FUN_1024a4108(long param_1,long param_2)

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



/* Entry: 1024a4124; end: 1024a42b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a4124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112e9e9f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9ea00) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9ea08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ea10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ea18) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9ea20);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024a42b4; end: 1024a4477;  */

/* WARNING: Possible PIC construction at 0x0001024a42fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a433c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a43fc) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e0) */
/* WARNING: Removing unreachable block (ram,0x0001024a4458) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001024a4340) */
/* WARNING: Removing unreachable block (ram,0x0001024a4344) */
/* WARNING: Removing unreachable block (ram,0x0001024a4358) */
/* WARNING: Removing unreachable block (ram,0x0001024a435c) */
/* WARNING: Removing unreachable block (ram,0x0001024a4300) */
/* WARNING: Removing unreachable block (ram,0x0001024a4304) */
/* WARNING: Removing unreachable block (ram,0x0001024a4414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a42b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar3 = _DAT_112e9e9f8;
  lVar4 = unaff_x20 + _DAT_112e9e9f8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112e9ea10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        return;
      }
      if (*(long *)(unaff_x20 + _DAT_112e9ea18) != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9ea18) + _DAT_11306e9a0);
        uVar5 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar5,uVar2);
        func_0x000107c5cb6c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
    }
    else {
      func_0x000107c5df08();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5df08();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 1024a4478; end: 1024a44ab;  */

void FUN_1024a4478(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024a44ac; end: 1024a4507; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024a44ac(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9ea10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9ea18));
  func_0x000100cf4ba4(*(undefined8 *)(param_1 + _DAT_112e9ea20),
                      ((undefined8 *)(param_1 + _DAT_112e9ea20))[1]);
  param_1 = param_1 + _DAT_112e9e9f8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024a4508; end: 1024a450b;  */

/* WARNING: Possible PIC construction at 0x0001024a42fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a433c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a43fc) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e0) */
/* WARNING: Removing unreachable block (ram,0x0001024a4458) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001024a4340) */
/* WARNING: Removing unreachable block (ram,0x0001024a4344) */
/* WARNING: Removing unreachable block (ram,0x0001024a4358) */
/* WARNING: Removing unreachable block (ram,0x0001024a435c) */
/* WARNING: Removing unreachable block (ram,0x0001024a4300) */
/* WARNING: Removing unreachable block (ram,0x0001024a4304) */
/* WARNING: Removing unreachable block (ram,0x0001024a4414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a4508(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar3 = _DAT_112e9e9f8;
  lVar4 = unaff_x20 + _DAT_112e9e9f8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112e9ea10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        return;
      }
      if (*(long *)(unaff_x20 + _DAT_112e9ea18) != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9ea18) + _DAT_11306e9a0);
        uVar5 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar5,uVar2);
        func_0x000107c5cb6c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
    }
    else {
      func_0x000107c5df08();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5df08();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 1024a450c; end: 1024a450f; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin setPlaylistItemController:] */

void FUN_1024a450c(void)

{
  return;
}



/* Entry: 1024a4510; end: 1024a468b;  */

/* WARNING: Possible PIC construction at 0x0001024a4568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a459c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a45cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a45e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a464c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a42fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a433c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a43f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a4410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a43fc) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e0) */
/* WARNING: Removing unreachable block (ram,0x0001024a4458) */
/* WARNING: Removing unreachable block (ram,0x0001024a43e4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001024a4340) */
/* WARNING: Removing unreachable block (ram,0x0001024a4344) */
/* WARNING: Removing unreachable block (ram,0x0001024a4358) */
/* WARNING: Removing unreachable block (ram,0x0001024a435c) */
/* WARNING: Removing unreachable block (ram,0x0001024a4300) */
/* WARNING: Removing unreachable block (ram,0x0001024a4304) */
/* WARNING: Removing unreachable block (ram,0x0001024a4650) */
/* WARNING: Removing unreachable block (ram,0x0001024a4688) */
/* WARNING: Removing unreachable block (ram,0x0001024a4654) */
/* WARNING: Removing unreachable block (ram,0x0001024a4634) */
/* WARNING: Removing unreachable block (ram,0x0001024a45ec) */
/* WARNING: Removing unreachable block (ram,0x0001024a4684) */
/* WARNING: Removing unreachable block (ram,0x0001024a45f0) */
/* WARNING: Removing unreachable block (ram,0x0001024a45d0) */
/* WARNING: Removing unreachable block (ram,0x0001024a4588) */
/* WARNING: Removing unreachable block (ram,0x0001024a4680) */
/* WARNING: Removing unreachable block (ram,0x0001024a458c) */
/* WARNING: Removing unreachable block (ram,0x0001024a456c) */
/* WARNING: Removing unreachable block (ram,0x0001024a4414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a4510(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112e9e9f8,param_1);
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5d1b4();
      func_0x000107c61180();
      param_1 = lVar4;
      goto code_r0x000107c615e8;
    }
    lVar4 = param_1;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5d1b4();
      func_0x000107c61180();
      param_1 = lVar4;
      goto code_r0x000107c615e8;
    }
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5d1b4();
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
  }
  lVar4 = _DAT_112e9e9f8;
  param_1 = unaff_x20 + _DAT_112e9e9f8;
  func_0x000107c61618(param_1,0);
  if (param_1 == 0) {
    param_1 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (param_1 == 0) {
      param_1 = *(long *)(unaff_x20 + _DAT_112e9ea10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 == 0) {
        return;
      }
      if (*(long *)(unaff_x20 + _DAT_112e9ea18) != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9ea18) + _DAT_11306e9a0);
        uVar3 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar3,uVar2);
        func_0x000107c5cb6c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
    else {
      func_0x000107c5df08();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5df08();
    func_0x000107c61180();
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024a468c; end: 1024a46d3; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin setOperaControlling:] */

void FUN_1024a468c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1024a4510(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a46d4; end: 1024a48cf;  */

/* WARNING: Removing unreachable block (ram,0x0001024a48b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024a46d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x00010443846c(0);
  func_0x000104434f4c(param_1);
  func_0x000104434fa4(0,0,*(undefined8 *)(unaff_x20 + _DAT_112e9ea08),
                      ((undefined8 *)(unaff_x20 + _DAT_112e9ea08))[1]);
  func_0x000107c61170();
  func_0x0001044350d4(0xf);
  func_0x000107c61170();
  func_0x000104435074(1);
  func_0x000107c61170();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x00010443509c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000104434fc4(0);
  func_0x000107c61170();
  lVar3 = 0;
  func_0x000104435194();
  func_0x000107c61170();
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *(undefined8 *)(lVar3 + 0x20) = puVar1;
  lVar4 = lVar3;
  func_0x000100673700(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),uVar6,uVar5);
  lVar3 = lVar4;
  func_0x0001044351b0(lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c61170(lVar3);
  func_0x0001044434c0(0);
  func_0x000107c610f8();
  uVar6 = 4;
  func_0x000104442dd8(0,0,0,0,4);
  uVar5 = uVar6;
  func_0x000107c61174();
  func_0x000104435104(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000104435b90();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  return uVar6;
}



/* Entry: 1024a48d0; end: 1024a492b; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin updateOperaConfiguration:] */

void FUN_1024a48d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024a46d4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024a492c; end: 1024a492f; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin extraPropertiesProvider] */

void FUN_1024a492c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1024a4930; end: 1024a496b; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin registeredEventsForOperaSession] */

void FUN_1024a4930(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1024a518c();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024a496c; end: 1024a4f4b;  */

/* WARNING: Removing unreachable block (ram,0x0001024a4f44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a496c(long *param_1,long param_2,long param_3,undefined *param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 *puVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_90;
  plVar2 = param_1;
  func_0x000103bb9c00();
  if ((param_1 == (long *)*plVar2 && param_2 == plVar2[1]) ||
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0),
     ((ulong)plVar3 & 1) != 0)) {
    lVar14 = unaff_x20 + _DAT_112e9e9f8;
    func_0x000107c61618();
    if (lVar14 != 0) {
      lVar5 = lVar14;
      func_0x000107c42a9c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar14);
      if (lVar5 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110ebebb8;
        func_0x000107c61174();
        if (param_4 != (undefined *)0x0) {
          func_0x000107c5f9dc(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                              PTR___sSSSHsWP_11034da90);
        }
        func_0x000107c4df80(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(ppuVar4);
        goto LAB_1024a4be0;
      }
    }
  }
  else {
    func_0x000103bb884c();
    if ((param_1 == (long *)*plVar3 && param_2 == plVar3[1]) ||
       (plVar2 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar3,plVar3[1],0),
       ((ulong)plVar2 & 1) != 0)) {
      lVar14 = unaff_x20 + _DAT_112e9e9f8;
      func_0x000107c61618();
      if (lVar14 != 0) {
        lVar5 = lVar14;
        func_0x000107c5d1b8();
        func_0x000107c61180();
        func_0x000107c615e8(lVar14);
        if (lVar5 != 0) {
          lVar14 = lVar5;
          func_0x000107c5d1b4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
          lVar5 = lVar14;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(lVar14);
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a4f4c);
            (*pcVar1)();
          }
          func_0x000107c550d8(lVar5);
          func_0x000107c61170(lVar5);
        }
      }
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_110512650;
      func_0x000107c613fc(&UNK_110512650,0x18,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      uStack_70 = 0x1024a5228;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110512668;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar7 = puStack_68;
      func_0x000107c61174();
      func_0x000107c61574(puVar7);
      func_0x000107c3dccc(0x3fd3333333333333,puVar6);
      func_0x000107c60bd0(ppuVar4);
      param_4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168();
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000103b83da8();
      func_0x000107c4eb88(param_4);
LAB_1024a4be0:
      func_0x000107c61170(param_4);
    }
  }
  lVar14 = *(long *)(unaff_x20 + _DAT_112e9ea18);
  if (lVar14 == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(lVar14 + _DAT_11306e9a0);
  plVar2 = (long *)((undefined8 *)(lVar14 + _DAT_11306e9a0))[1];
  puVar15 = *(undefined8 **)(unaff_x20 + _DAT_112e9ea10);
  func_0x000107c61434(plVar2);
  func_0x000107c61174(lVar14);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar15 == (undefined8 *)0x0) {
    func_0x000107c61170(lVar14);
    func_0x000107c6142c(plVar2);
    return;
  }
  puVar8 = puVar15;
  func_0x000103bb9ca8();
  if (((param_1 == (long *)*puVar8) && (param_2 == puVar8[1])) ||
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*puVar8,puVar8[1],0),
     ((ulong)plVar3 & 1) != 0)) {
    func_0x000107c5fadc(uVar10,plVar2);
    func_0x000107c6142c(plVar2);
    func_0x000107c40bd4(puVar15);
    func_0x000107c61170(uVar10);
LAB_1024a4ca0:
    func_0x000107c615e8(puVar15);
LAB_1024a4ca8:
    func_0x000107c61170(lVar14);
    return;
  }
  func_0x000103bb9ee0();
  if (((param_1 == (long *)*plVar3) && (param_2 == plVar3[1])) ||
     (plVar9 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar3,plVar3[1],0),
     ((ulong)plVar9 & 1) != 0)) {
    func_0x000107c5fadc(uVar10,plVar2);
    func_0x000107c6142c(plVar2);
    lVar5 = _DAT_112e9ea00;
    func_0x000107c4bf14(puVar15);
    func_0x000107c615e8(puVar15);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar14);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    return;
  }
  func_0x000103bb884c();
  if (((param_1 == (long *)*plVar9) && (param_2 == plVar9[1])) ||
     (plVar3 = param_1, func_0x000107c605b8(param_1,param_2,(long *)*plVar9,plVar9[1],0),
     ((ulong)plVar3 & 1) != 0)) {
    func_0x000107c5fadc(uVar10,plVar2);
    func_0x000107c6142c(plVar2);
    func_0x000107c4ca38(puVar15);
    func_0x000107c615e8(puVar15);
    func_0x000107c61170(uVar10);
    goto LAB_1024a4ca8;
  }
  func_0x000107c6142c();
  func_0x000103bb9c70();
  if (((param_1 != (long *)*plVar2) || (param_2 != plVar2[1])) &&
     (func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0), plVar2 = param_1,
     ((ulong)param_1 & 1) == 0)) goto LAB_1024a4ca0;
  if (param_3 == 0) {
    func_0x000107c615e8(puVar15);
    func_0x000107c61170(lVar14);
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
LAB_1024a4f14:
    func_0x00010006e7f4(&puStack_90);
  }
  else {
    uVar12 = *(ulong *)(param_3 + _DAT_11307abc8);
    func_0x000103bb76e4();
    if (*(long *)(uVar12 + 0x10) == 0) {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      puStack_80 = (undefined *)0x0;
LAB_1024a4f04:
      func_0x000107c615e8(puVar15);
      func_0x000107c61170(lVar14);
      goto LAB_1024a4f14;
    }
    lVar5 = *plVar2;
    uVar13 = plVar2[1];
    func_0x000107c61434(uVar13);
    func_0x000107c61434(uVar12);
    uVar11 = uVar13;
    func_0x000100029284(lVar5);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(uVar12);
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      puStack_80 = (undefined *)0x0;
    }
    else {
      func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar5 * 0x20,&puStack_90);
      func_0x000107c6142c(uVar13);
      uVar13 = uVar12;
    }
    func_0x000107c6142c(uVar13);
    if (puStack_78 == (undefined *)0x0) goto LAB_1024a4f04;
    uVar10 = 0;
    func_0x0001002ed07c(0);
    puVar8 = &uStack_58;
    func_0x000107c6147c(puVar8,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar10,6);
    if (((ulong)puVar8 & 1) != 0) {
      uVar10 = uStack_58;
      func_0x000107c49820();
      func_0x000107c61170(uStack_58);
      func_0x000107c615e8(puVar15);
      func_0x000107c61170(lVar14);
      goto LAB_1024a4f20;
    }
    func_0x000107c615e8(puVar15);
    func_0x000107c61170(lVar14);
  }
  uVar10 = 0;
LAB_1024a4f20:
  *(undefined8 *)(unaff_x20 + _DAT_112e9ea00) = uVar10;
  return;
}



/* Entry: 1024a4f4c; end: 1024a5007; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x0001024a4fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a4ff0) */

void FUN_1024a4f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1024a496c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024a5008; end: 1024a50eb; -[_TtC33CollectionViewAutoPlayOperaPlugin33CollectionViewAutoPlayOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x0001024a50bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a50cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a50c0) */
/* WARNING: Removing unreachable block (ram,0x0001024a50d0) */

void FUN_1024a5008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105126b0;
    func_0x000107c613fc(&UNK_1105126b0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_1024a5730;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1024a52f0(param_3,pcVar3,puVar2);
  func_0x000100cf4ba4(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024a50ec; end: 1024a518b;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_1024a50ec(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sypN_11034f1a8;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a518c; end: 1024a52d3;  */

undefined8 * FUN_1024a518c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 10;
  puVar2[2] = 5;
  puVar3 = puVar2;
  func_0x000103bb9ca8();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c00();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9ee0();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c70();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[10] = *puVar4;
  puVar2[0xb] = puVar3;
  func_0x000107c61434();
  func_0x000103bb884c();
  uVar1 = puVar3[1];
  puVar2[0xc] = *puVar3;
  puVar2[0xd] = uVar1;
  func_0x000107c61434();
  return puVar2;
}



/* Entry: 1024a52d4; end: 1024a52ef;  */

void FUN_1024a52d4(long param_1,long param_2)

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



/* Entry: 1024a52f0; end: 1024a570f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a52f0(long param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  float fVar7;
  undefined *apuStack_b8 [3];
  long lStack_a0;
  undefined1 auStack_98 [32];
  undefined *puStack_78;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar5 = param_2;
  func_0x000100214a84();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e4cdd8;
  puStack_78 = puVar1;
  func_0x000107c5faec();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  lVar3 = 0;
  func_0x0001002ed07c();
  apuStack_b8[0] = puVar2;
  lStack_a0 = lVar3;
  if (lVar3 == 0) {
    func_0x00010006e7f4(apuStack_b8);
    ppuVar6 = ppuVar5;
    func_0x000100216878(auStack_98,ppuVar4);
    func_0x000107c6142c(ppuVar5);
    func_0x00010006e7f4(auStack_98);
  }
  else {
    func_0x000100102924(apuStack_b8,auStack_98);
    puVar2 = puVar1;
    func_0x000107c61558(puVar1);
    apuStack_b8[0] = puVar1;
    func_0x0001001029e8(auStack_98,ppuVar4,ppuVar5,puVar2);
    func_0x000107c6142c(ppuVar5);
    puStack_78 = apuStack_b8[0];
    ppuVar6 = ppuVar4;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0bed8;
  func_0x000107c5faec();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  apuStack_b8[0] = puVar1;
  if (lVar3 == 0) {
    lStack_a0 = lVar3;
    func_0x00010006e7f4(apuStack_b8);
    ppuVar5 = ppuVar6;
    func_0x000100216878(auStack_98,ppuVar4);
    func_0x000107c6142c(ppuVar6);
    func_0x00010006e7f4(auStack_98);
  }
  else {
    lStack_a0 = lVar3;
    func_0x000100102924(apuStack_b8,auStack_98);
    puVar1 = puStack_78;
    puVar2 = puStack_78;
    func_0x000107c61558(puStack_78);
    apuStack_b8[0] = puVar1;
    func_0x0001001029e8(auStack_98,ppuVar4,ppuVar6,puVar2);
    func_0x000107c6142c(ppuVar6);
    puStack_78 = apuStack_b8[0];
    ppuVar5 = ppuVar4;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0c258;
  func_0x000107c5faec();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  apuStack_b8[0] = puVar1;
  if (lVar3 == 0) {
    lStack_a0 = lVar3;
    func_0x00010006e7f4(apuStack_b8);
    ppuVar6 = ppuVar5;
    func_0x000100216878(auStack_98,ppuVar4);
    func_0x000107c6142c(ppuVar5);
    func_0x00010006e7f4(auStack_98);
  }
  else {
    lStack_a0 = lVar3;
    func_0x000100102924(apuStack_b8,auStack_98);
    puVar1 = puStack_78;
    puVar2 = puStack_78;
    func_0x000107c61558(puStack_78);
    apuStack_b8[0] = puVar1;
    func_0x0001001029e8(auStack_98,ppuVar4,ppuVar5,puVar2);
    func_0x000107c6142c(ppuVar5);
    puStack_78 = apuStack_b8[0];
    ppuVar6 = ppuVar4;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0eaf8;
  func_0x000107c5faec();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  apuStack_b8[0] = puVar1;
  if (lVar3 == 0) {
    lStack_a0 = lVar3;
    func_0x00010006e7f4(apuStack_b8);
    ppuVar5 = ppuVar6;
    func_0x000100216878(auStack_98,ppuVar4);
    func_0x000107c6142c(ppuVar6);
    func_0x00010006e7f4(auStack_98);
  }
  else {
    lStack_a0 = lVar3;
    func_0x000100102924(apuStack_b8,auStack_98);
    puVar1 = puStack_78;
    puVar2 = puStack_78;
    func_0x000107c61558(puStack_78);
    apuStack_b8[0] = puVar1;
    func_0x0001001029e8(auStack_98,ppuVar4,ppuVar6,puVar2);
    func_0x000107c6142c(ppuVar6);
    puStack_78 = apuStack_b8[0];
    ppuVar5 = ppuVar4;
  }
  fVar7 = 3.0;
  if ((*(code **)(unaff_x20 + _DAT_112e9ea20) != (code *)0x0) &&
     ((**(code **)(unaff_x20 + _DAT_112e9ea20))(param_1), ((uint)ppuVar5 & 0xff) != 1)) {
    fVar7 = (float)param_1 / 1000.0;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0c538;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c538);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46978(fVar7);
  apuStack_b8[0] = puVar1;
  if (lVar3 == 0) {
    lStack_a0 = lVar3;
    func_0x00010006e7f4(apuStack_b8);
    func_0x000100216878(auStack_98,ppuVar4,ppuVar5);
    func_0x000107c6142c(ppuVar5);
    func_0x00010006e7f4(auStack_98);
    puVar1 = puStack_78;
  }
  else {
    lStack_a0 = lVar3;
    func_0x000100102924(apuStack_b8,auStack_98);
    puVar1 = puStack_78;
    puVar2 = puStack_78;
    func_0x000107c61558(puStack_78);
    apuStack_b8[0] = puVar1;
    func_0x0001001029e8(auStack_98,ppuVar4,ppuVar5,puVar2);
    func_0x000107c6142c(ppuVar5);
    puVar1 = apuStack_b8[0];
  }
  if (param_2 != (undefined **)0x0) {
    puVar2 = puVar1;
    func_0x00010018cc3c(puVar1);
    (*(code *)param_2)();
    func_0x000107c6142c(puVar2);
  }
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 1024a5710; end: 1024a572f;  */

void FUN_1024a5710(void)

{
  func_0x000107c61168(&PTR_PTR_1128464e8);
  return;
}



/* Entry: 1024a5730; end: 1024a5737;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_1024a5730(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a5738; end: 1024a57cf;  */

void FUN_1024a5738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ea50,&UNK_10daaecc0);
  puVar1 = &UNK_110512788;
  func_0x000107c613fc(&UNK_110512788,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1024a57d0,puVar1);
  return;
}



/* Entry: 1024a57d0; end: 1024a591f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a57d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar4 = lVar2;
  func_0x000107c4ac3c(lVar2);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(lVar4);
  lVar6 = lVar2;
  func_0x000107c4ac40(lVar2);
  func_0x000107c61180();
  lVar7 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ceeb8;
  func_0x000107c610f8();
  func_0x000107c4938c();
  func_0x000107c615e8(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lStack_68);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a5920);
  (*pcVar3)();
}



/* Entry: 1024a5920; end: 1024a592f;  */

undefined1  [16] FUN_1024a5920(void)

{
  return ZEXT816(0x1105127b0);
}



/* Entry: 1024a5930; end: 1024a5eb3;  */

void FUN_1024a5930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ea58,&UNK_10daaed20);
  puVar1 = &UNK_110512878;
  func_0x000107c613fc(&UNK_110512878,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1024a5a1c,puVar1);
  return;
}



/* Entry: 1024a5eb4; end: 1024a5ec3;  */

undefined1  [16] FUN_1024a5eb4(void)

{
  return ZEXT816(0x1105128a0);
}



/* Entry: 1024a5ec4; end: 1024a5efb;  */

void FUN_1024a5ec4(long param_1)

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



/* Entry: 1024a5efc; end: 1024a5f53;  */

void FUN_1024a5efc(void)

{
  func_0x000107c610f8(PTR_PTR_1126cee28);
                    /* WARNING: Could not recover jumptable at 0x00010c0478f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1024a5f54; end: 1024a5f6f;  */

void FUN_1024a5f54(long param_1,long param_2)

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



/* Entry: 1024a5f70; end: 1024a607f;  */

void FUN_1024a5f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ea60,&UNK_10daaeda0);
  puVar1 = &UNK_1105129b8;
  func_0x000107c613fc(&UNK_1105129b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1024a5ff0,puVar1);
  return;
}



/* Entry: 1024a6080; end: 1024a608f;  */

undefined1  [16] FUN_1024a6080(void)

{
  return ZEXT816(0x1105129e0);
}



/* Entry: 1024a6090; end: 1024a60db; +[SCMassSnapIconViewProviderKeys iconURL] */

void FUN_1024a6090(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a3610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024a60dc; end: 1024a6117; -[SCMassSnapIconViewProviderKeys init] */

void FUN_1024a60dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001024a60bc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024a6118; end: 1024a6123;  */

void FUN_1024a6118(void)

{
  (*(code *)0x1024a60bc)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024a6124; end: 1024a6127; -[SCMassSnapIconViewProviderKeys .cxx_destruct] */

void FUN_1024a6124(void)

{
  return;
}



/* Entry: 1024a6128; end: 1024a6173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a6128(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ea68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024a6174; end: 1024a6193;  */

void FUN_1024a6174(void)

{
  func_0x000107c61168(&PTR_PTR_112846680);
  return;
}



/* Entry: 1024a6194; end: 1024a61eb; -[SCMassSnapIconViewProvider initWithImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a6194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112e9ea68) = param_3;
  lVar2 = param_1;
  FUN_1024a6174();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1024a61ec; end: 1024a628b;  */

/* WARNING: Possible PIC construction at 0x0001024a6270: Changing call to branch */

void FUN_1024a61ec(long param_1,code *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_1024a6ec8();
  (*param_2)();
  lVar1 = param_1;
  func_0x000107c5df3c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    if (lVar3 != 0) {
      FUN_1024a65b4();
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a628c; end: 1024a638b; -[SCMassSnapIconViewProvider viewForProperties:completion:] */

/* WARNING: Possible PIC construction at 0x0001024a6338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a6348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a636c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a634c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001024a6370) */

void FUN_1024a628c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1024a6ec8();
  (**(code **)(param_4 + 0x10))(param_4,lVar1);
  lVar2 = lVar1;
  func_0x000107c5df3c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(lVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    lVar4 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_1024a65b4();
      param_1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024a638c; end: 1024a64fb;  */

/* WARNING: Possible PIC construction at 0x0001024a6430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a6444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a64b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a64d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024a6454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a64bc) */
/* WARNING: Removing unreachable block (ram,0x0001024a6448) */
/* WARNING: Removing unreachable block (ram,0x0001024a6434) */
/* WARNING: Removing unreachable block (ram,0x0001024a64d4) */

void FUN_1024a638c(long param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x000107c5df3c(param_1,param_2,100);
  func_0x000107c61180();
  if (lVar2 == 0) {
    FUN_1024a6ec8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5df3c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a64fc);
      (*pcVar1)();
    }
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c61490(lVar3,puVar4,0,0,0);
    func_0x000107c61174(lVar3);
    (*param_3)(lVar2);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    lVar3 = lVar2;
    func_0x000107c6148c(lVar2,puVar4);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      func_0x000107c55258(lVar3);
      func_0x000107c4aba4(lVar3);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1024a64fc; end: 1024a65b3; -[SCMassSnapIconViewProvider updateView:withUpdatedProperties:completion:] */

void FUN_1024a64fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024a709c(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1024a65b4; end: 1024a69ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a65b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uStack_a0 = 0xd000000000000011;
  uStack_98 = 0x800000010f0a3610;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_d0,&uStack_a0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    ppuVar4 = &puStack_d0;
    func_0x000100df95d0(ppuVar4);
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)ppuVar4 * 0x20,&uStack_90);
      func_0x000107c6142c(param_3);
      goto LAB_1024a6664;
    }
    func_0x000107c6142c(param_3);
  }
  param_1 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_1024a6664:
  func_0x0001007bbff0(&puStack_d0);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    puVar5 = &uStack_a0;
    func_0x000107c6147c(puVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_98;
    uVar1 = uStack_a0;
    if (((ulong)puVar5 & 1) != 0) {
      uVar7 = uStack_a0 & 0xffffffffffff;
      if ((uStack_98 & 0x2000000000000000) != 0) {
        uVar7 = uStack_98 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        uVar6 = param_2;
        func_0x000107c4aba4(param_2);
        func_0x000107c61180();
        uVar7 = uVar1;
        func_0x000107c5fadc(uVar1,uVar2);
        func_0x000107c56954(uVar6);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        puVar8 = PTR_PTR_1126b08b0;
        func_0x000107c61168(PTR_PTR_1126b08b0);
        uVar7 = uVar1;
        func_0x000107c5fadc(uVar1,uVar2);
        func_0x000107c3f71c(puVar8);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar9 = PTR_PTR_1126b17d8;
        func_0x000107c610f8();
        func_0x000107c61174(puVar8);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c460ec();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar10);
        if (puVar9 != (undefined *)0x0) {
          puVar10 = puVar9;
          func_0x000107c3ecd0();
          func_0x000107c61180();
          if (puVar10 != (undefined *)0x0) {
            func_0x00010447a810(0);
            puVar11 = puVar10;
            func_0x00010447a08c(puVar10);
            func_0x000107c61170(puVar10);
            func_0x0001048b0ec8(0);
            func_0x000107c610f8();
            uVar6 = 0xd000000000000018;
            func_0x0001048b0b48(0xd000000000000018,0x800000010daaee40,0xd);
            func_0x000104479ecc(0);
            puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
            func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
            func_0x000107c61174(puVar11);
            func_0x000107c61174(uVar6);
            func_0x000107c4c194(puVar10);
            func_0x000107c61180();
            func_0x000107c51820();
            func_0x000107c61170(puVar10);
            puVar12 = puVar11;
            func_0x000104478bf4(param_1,0x4041000000000000,0x4041000000000000,puVar11,uVar6);
            uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e9ea68);
            puVar10 = &UNK_110512aa8;
            func_0x000107c613fc(&UNK_110512aa8,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,param_2);
            puVar13 = &UNK_110512ad0;
            func_0x000107c613fc(&UNK_110512ad0,0x28,7);
            *(undefined **)(puVar13 + 0x10) = puVar10;
            *(ulong *)(puVar13 + 0x18) = uVar1;
            *(ulong *)(puVar13 + 0x20) = uVar2;
            pcStack_b0 = FUN_1024a7214;
            puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_c8 = 0x42000000;
            pcStack_c0 = FUN_1024a6e04;
            puStack_b8 = &UNK_110512ae8;
            ppuVar4 = &puStack_d0;
            puStack_a8 = puVar13;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_a8);
            func_0x000107c43128(uVar14);
            func_0x000107c61180();
            func_0x000107c615e8();
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(puVar12);
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a69ac);
          (*pcVar3)();
        }
        func_0x000107c61170(puVar8);
      }
      func_0x000107c6142c(uVar2);
    }
  }
  return;
}



/* Entry: 1024a69ac; end: 1024a6b67;  */

void FUN_1024a69ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar4 = &UNK_110512b20;
  func_0x000107c613fc(&UNK_110512b20,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  puVar5 = &UNK_110512b48;
  func_0x000107c613fc(&UNK_110512b48,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1024a7268;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1024a7274;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x1024a72b8;
  puStack_78 = &UNK_110512b60;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_70 = FUN_1024a6e00;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_110512b88;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x51,0x7b,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a6b64);
    (*pcVar3)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x51,0x84,0x19,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024a6b68);
  (*pcVar3)();
}



/* Entry: 1024a6b68; end: 1024a6ca3;  */

void FUN_1024a6b68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = "_loadImage(into:properties:)";
  func_0x0001000c10c0("_loadImage(into:properties:)");
  func_0x000107c61180();
  puVar2 = &UNK_110512aa8;
  func_0x000107c613fc(&UNK_110512aa8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_110512bc0;
  func_0x000107c613fc(&UNK_110512bc0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  pcStack_68 = FUN_1024a7294;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110512bd8;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1024a6ca4; end: 1024a6dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024a6ca4(long param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if ((uVar2 == param_2) && (puVar4 == param_3)) {
        func_0x000107c6142c(puVar4);
      }
      else {
        func_0x000107c605b8(uVar2,puVar4,param_2,param_3,0);
        func_0x000107c6142c(puVar4);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      if (param_1 != 0) {
        uVar3 = 0;
        if (param_4 != 0) {
          uVar3 = *(undefined8 *)(param_4 + _DAT_11307d350);
          func_0x000107c61174(uVar3);
        }
        func_0x000107c55258(param_1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar3);
      }
    }
  }
  return;
}



/* Entry: 1024a6e00; end: 1024a6e03;  */

void FUN_1024a6e00(void)

{
  return;
}



/* Entry: 1024a6e04; end: 1024a6e4f;  */

void FUN_1024a6e04(long param_1,undefined8 param_2)

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



/* Entry: 1024a6e50; end: 1024a6e7b; -[SCMassSnapIconViewProvider init] */

void FUN_1024a6e50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaMassSnapManagement.MassSnapIconViewProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024a6e7c);
  (*pcVar1)();
}



/* Entry: 1024a6e7c; end: 1024a6e87;  */

void FUN_1024a6e7c(void)

{
  FUN_1024a6174();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


