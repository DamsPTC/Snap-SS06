/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b871ac; end: 108b87927;  */

undefined8 * FUN_108b871ac(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
code_r0x000108b871ac:
  puVar7 = param_2;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x25 = 0x11328a000;
  unaff_x23 = 0x11328a000;
  uVar2 = bRam000000011328ae08 == 1;
  puVar4 = param_1;
  if ((bool)uVar2) {
    uVar11 = param_1[8];
    *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
    *(undefined8 *)((long)register0x00000008 + -0x228) = uVar11;
    func_0x000108b87978();
  }
  unaff_x20 = param_1;
  if (puVar7 == (ulong *)0x0) {
    unaff_x26 = (undefined8 *)0xe;
  }
  else {
    unaff_x22 = 0;
    unaff_x24 = 0x11328ae08;
    unaff_x27 = (undefined1 *)((long)register0x00000008 + -0xf0);
    for (unaff_x19 = puVar7; unaff_x28 = &UNK_10f502732, unaff_x19 != (ulong *)0x0;
        unaff_x19 = (ulong *)unaff_x19[10]) {
      if ((param_1 == (undefined8 *)0x0) || ((code *)*param_1 == (code *)0x0)) goto LAB_108b8760c;
      puVar4 = (undefined8 *)((long)register0x00000008 + -0x200);
      (*(code *)*param_1)(puVar4,*unaff_x19,unaff_x19[9]);
      unaff_x26 = puVar4;
      if ((int)puVar4 != 0) goto LAB_108b878d0;
      func_0x000108b87950();
      if ((bool)uVar2) {
        *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
        puVar4 = (undefined8 *)0x3;
        FUN_108b889b4(3,&UNK_10f5026cf);
      }
      func_0x000108b879d0();
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      if (0x80 < unaff_x19[5]) {
LAB_108b87608:
        func_0x000108b87998();
        goto LAB_108b8760c;
      }
      for (uVar9 = 0; uVar2 = uVar9 == unaff_x19[3], uVar9 < unaff_x19[3]; uVar9 = uVar9 + 1) {
        unaff_x27[uVar9] = *(undefined1 *)(unaff_x19[4] + uVar9);
      }
      if ((bRam000000011328ae08 & 1) != 0) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        func_0x000108b879b8();
      }
      puVar5 = *(undefined8 **)((long)register0x00000008 + -0x200);
      func_0x000108b87078(puVar5,unaff_x19[2],0);
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      unaff_x26 = puVar5;
      if ((int)puVar5 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      unaff_x26 = puVar4;
      if ((bool)uVar2) {
        func_0x000108b87950();
        puVar1 = PTR_DAT_11328ae10;
        unaff_x26 = puVar4;
        if ((bool)uVar2) {
          func_0x000108b88ac4(unaff_x19[2],0xc);
          func_0x000108b8796c();
          FUN_108b889b4();
          unaff_x26 = *(undefined8 **)((long)register0x00000008 + -0x200);
          puVar5 = (undefined8 *)puVar1;
        }
        func_0x000108b8714c();
        puVar4 = unaff_x26;
        if ((int)unaff_x26 != 0) goto LAB_108b878c8;
        func_0x000108b87950();
        if ((bool)uVar2) {
          func_0x000108b879c4();
          *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
          *(undefined8 **)((long)register0x00000008 + -0x228) = unaff_x26;
          func_0x000108b87930();
        }
      }
      func_0x000108b879e8(unaff_x19[3]);
      func_0x000108b870e0();
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      if ((int)unaff_x26 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      if ((bool)uVar2) {
        func_0x000108b87120();
        unaff_x28 = &UNK_10f502732;
        if ((int)puVar4 != 0) goto LAB_108b878c8;
        *(long *)((long)register0x00000008 + -0x210) =
             *(long *)((long)register0x00000008 + -0x210) +
             *(long *)((long)register0x00000008 + -0x208);
      }
      func_0x000108b87950();
      if ((bool)uVar2) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        func_0x000108b879ac();
      }
      if (*(ulong *)((long)register0x00000008 + -0x210) != unaff_x19[5]) goto LAB_108b875fc;
      for (uVar9 = 0; bVar3 = *(ulong *)((long)register0x00000008 + -0x210) == uVar9, !bVar3;
          uVar9 = uVar9 + 1) {
        uVar2 = unaff_x27[uVar9] == *(char *)(unaff_x19[6] + uVar9);
        if (!(bool)uVar2) {
          func_0x000108b87950();
          if (!(bool)uVar2) goto LAB_108b875fc;
          *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
          *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
          func_0x000108b87978();
          if ((bRam000000011328ae08 & 1) == 0) goto LAB_108b875fc;
          *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
          *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar1 = PTR_DAT_11328ae10;
          if (!(bool)uVar2) goto LAB_108b875fc;
          func_0x000108b8795c();
          *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar5 = (undefined8 *)PTR_DAT_11328ae10;
          param_1 = (undefined8 *)puVar1;
          if (!(bool)uVar2) goto LAB_108b875fc;
          puVar4 = (undefined8 *)unaff_x19[6];
          func_0x000108b88ac4(puVar4,unaff_x19[3] << 1);
          *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          goto LAB_108b875f8;
        }
      }
      func_0x000108b87950();
      if (bVar3) {
        *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
        puVar4 = (undefined8 *)0x3;
        FUN_108b889b4(3,&UNK_10f50278f);
      }
      func_0x000108b879d0();
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      uVar9 = unaff_x19[5];
      if (0x80 < uVar9) goto LAB_108b87608;
      for (uVar12 = 0; uVar2 = uVar12 == uVar9, uVar12 < uVar9; uVar12 = uVar12 + 1) {
        unaff_x27[uVar12] = *(undefined1 *)(unaff_x19[6] + uVar12);
        uVar9 = unaff_x19[5];
      }
      if ((bRam000000011328ae08 & 1) != 0) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        FUN_108b889b4();
      }
      unaff_x26 = *(undefined8 **)((long)register0x00000008 + -0x200);
      func_0x000108b87078(unaff_x26,unaff_x19[2],1);
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      if ((int)unaff_x26 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      if ((bool)uVar2) {
        func_0x000108b8714c();
        if ((int)puVar4 != 0) goto LAB_108b878c8;
        func_0x000108b87950();
        if ((bool)uVar2) {
          func_0x000108b879c4();
          *(undefined8 **)((long)register0x00000008 + -0x230) = unaff_x26;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87930();
        }
      }
      func_0x000108b879e8(unaff_x19[5]);
      func_0x000108b87100();
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      func_0x000108b87950();
      if ((bool)uVar2) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        FUN_108b889b4();
      }
      uVar9 = *(ulong *)((long)register0x00000008 + -0x210);
      if (uVar9 != unaff_x19[3]) {
LAB_108b875fc:
        func_0x000108b87998();
        unaff_x20 = param_1;
        unaff_x26 = (undefined8 *)0xb;
        unaff_x28 = &UNK_10f502732;
        goto LAB_108b878d0;
      }
      iVar8 = 0;
      for (uVar12 = 0; uVar2 = uVar12 == uVar9, uVar12 < uVar9; uVar12 = uVar12 + 1) {
        uVar2 = unaff_x27[uVar12] == *(char *)(unaff_x19[4] + uVar12);
        if (!(bool)uVar2) {
          func_0x000108b87950();
          if ((bool)uVar2) {
            *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
            *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
            puVar4 = (undefined8 *)0x3;
            FUN_108b889b4(3,&UNK_10f502732);
            func_0x000108b879a0();
            if ((bool)uVar2) {
              func_0x000108b87980();
            }
          }
          iVar8 = 0xb;
        }
        uVar9 = unaff_x19[3];
      }
      if (iVar8 != 0) {
        func_0x000108b87950();
        puVar1 = PTR_DAT_11328ae10;
        if ((bool)uVar2) {
          func_0x000108b8795c();
          *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar5 = (undefined8 *)PTR_DAT_11328ae10;
          param_1 = (undefined8 *)puVar1;
          if ((bool)uVar2) {
            puVar4 = (undefined8 *)unaff_x19[4];
            func_0x000108b88ac4(puVar4,unaff_x19[3] << 1);
            *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
            *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
LAB_108b875f8:
            func_0x000108b87978();
            param_1 = puVar5;
          }
        }
        goto LAB_108b875fc;
      }
      func_0x000108b87998();
      unaff_x26 = puVar4;
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 != 0) goto LAB_108b878d0;
      unaff_x22 = unaff_x22 + 1;
    }
    if ((param_1 == (undefined8 *)0x0) || ((code *)*param_1 == (code *)0x0)) {
LAB_108b8760c:
      unaff_x24 = 0x11328ae08;
      unaff_x26 = (undefined8 *)0x2;
      unaff_x28 = &UNK_10f502732;
    }
    else {
      puVar4 = (undefined8 *)((long)register0x00000008 + -0x200);
      (*(code *)*param_1)(puVar4,*puVar7,puVar7[9]);
      unaff_x26 = puVar4;
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 == 0) {
        unaff_x28 = (undefined *)0x0;
        unaff_x19 = (ulong *)((long)register0x00000008 + -0xf0);
        unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x170);
        while( true ) {
          uVar2 = unaff_x28 == (undefined *)0x80;
          if ((bool)uVar2) goto LAB_108b87914;
          FUN_108b87178((undefined1 *)((long)register0x00000008 + -500),4);
          uVar9 = (ulong)*(uint *)((long)register0x00000008 + -500) & 0x3f;
          *(ulong *)((long)register0x00000008 + -0x218) = uVar9;
          func_0x000108b87950();
          if ((bool)uVar2) {
            *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
            *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
            FUN_108b889b4(3,&UNK_10f5027fb);
          }
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xf0);
          FUN_108b87178();
          func_0x000108b87950();
          puVar1 = PTR_DAT_11328ae10;
          param_1 = unaff_x20;
          if ((bool)uVar2) {
            func_0x000108b8795c();
            *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
            *(undefined1 **)((long)register0x00000008 + -0x228) = puVar6;
            func_0x000108b879b8(3);
            param_1 = (undefined8 *)puVar1;
          }
          lVar13 = *(long *)((long)register0x00000008 + -0x218);
          for (lVar10 = 0; lVar13 != lVar10; lVar10 = lVar10 + 1) {
            unaff_x27[lVar10] = *(undefined1 *)((long)unaff_x19 + lVar10);
          }
          uVar2 = *puVar7 == 0x40;
          if (0x40 < *puVar7) break;
          FUN_108b87178((undefined1 *)((long)register0x00000008 + -0x1b0));
          puVar4 = (undefined8 *)((long)register0x00000008 + -0x1f0);
          FUN_108b87178(puVar4,0x40);
          func_0x000108b879dc();
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87078(puVar4,puVar7[2],0);
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b8714c();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            func_0x000108b87950();
            puVar1 = PTR_DAT_11328ae10;
            if ((bool)uVar2) {
              uVar9 = puVar7[8];
              func_0x000108b88ac4(uVar9,puVar7[7]);
              *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
              *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
              func_0x000108b87930();
            }
          }
          param_1 = *(undefined8 **)((long)register0x00000008 + -0x218);
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b870e0(puVar4,(undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0x218));
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b87120();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            *(long *)((long)register0x00000008 + -0x218) =
                 *(long *)((long)register0x00000008 + -0x218) +
                 *(long *)((long)register0x00000008 + -0x208);
          }
          func_0x000108b87950();
          if ((bool)uVar2) {
            func_0x000108b8795c();
            func_0x000108b8796c();
            func_0x000108b879ac();
          }
          func_0x000108b879dc();
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87078(puVar4,puVar7[2],1);
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b8714c();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            func_0x000108b87950();
            puVar1 = PTR_DAT_11328ae10;
            if ((bool)uVar2) {
              uVar9 = puVar7[8];
              func_0x000108b88ac4(uVar9,puVar7[7]);
              *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
              *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
              func_0x000108b87930();
            }
          }
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87100(puVar4,(undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0x218));
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          func_0x000108b87950();
          if ((bool)uVar2) {
            func_0x000108b8795c();
            func_0x000108b8796c();
            FUN_108b889b4();
          }
          if (*(undefined8 **)((long)register0x00000008 + -0x218) != param_1) {
LAB_108b8790c:
            puVar4 = (undefined8 *)0xb;
            goto LAB_108b878c8;
          }
          iVar8 = 0;
          for (puVar5 = (undefined8 *)0x0; param_1 != puVar5;
              puVar5 = (undefined8 *)((long)puVar5 + 1)) {
            uVar2 = *(char *)((long)unaff_x19 + (long)puVar5) == unaff_x27[(long)puVar5];
            if (!(bool)uVar2) {
              func_0x000108b87950();
              if ((bool)uVar2) {
                *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
                *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
                puVar4 = (undefined8 *)0x3;
                FUN_108b889b4(3,&UNK_10f502833);
                func_0x000108b879a0();
                if ((bool)uVar2) {
                  func_0x000108b87980();
                }
              }
              iVar8 = 0xb;
            }
          }
          if (iVar8 != 0) goto LAB_108b8790c;
          unaff_x28 = unaff_x28 + 1;
          unaff_x20 = param_1;
        }
        puVar4 = (undefined8 *)0xe;
LAB_108b878c8:
        unaff_x26 = puVar4;
        puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
LAB_108b878cc:
        func_0x000108b87040();
        unaff_x20 = param_1;
        unaff_x24 = 0x11328ae08;
      }
    }
  }
  goto LAB_108b878d0;
LAB_108b87914:
  func_0x000108b87998();
  unaff_x26 = puVar4;
LAB_108b878d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return unaff_x26;
  }
  unaff_x30 = 0x108b87928;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x230);
  param_1 = puVar4;
  param_2 = (ulong *)puVar4[9];
  unaff_x21 = puVar7;
  goto code_r0x000108b871ac;
}



/* Entry: 108b87928; end: 108b879fb;  */

undefined8 * FUN_108b87928(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
FUN_108b871ac:
  puVar7 = (ulong *)param_1[9];
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x25 = 0x11328a000;
  unaff_x23 = 0x11328a000;
  uVar2 = bRam000000011328ae08 == 1;
  puVar4 = param_1;
  if ((bool)uVar2) {
    uVar11 = param_1[8];
    *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
    *(undefined8 *)((long)register0x00000008 + -0x228) = uVar11;
    func_0x000108b87978();
  }
  unaff_x20 = param_1;
  if (puVar7 == (ulong *)0x0) {
    unaff_x26 = (undefined8 *)0xe;
  }
  else {
    unaff_x22 = 0;
    unaff_x24 = 0x11328ae08;
    unaff_x27 = (undefined1 *)((long)register0x00000008 + -0xf0);
    for (unaff_x19 = puVar7; unaff_x28 = &UNK_10f502732, unaff_x19 != (ulong *)0x0;
        unaff_x19 = (ulong *)unaff_x19[10]) {
      if ((param_1 == (undefined8 *)0x0) || ((code *)*param_1 == (code *)0x0)) goto LAB_108b8760c;
      puVar4 = (undefined8 *)((long)register0x00000008 + -0x200);
      (*(code *)*param_1)(puVar4,*unaff_x19,unaff_x19[9]);
      unaff_x26 = puVar4;
      if ((int)puVar4 != 0) goto LAB_108b878d0;
      func_0x000108b87950();
      if ((bool)uVar2) {
        *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
        puVar4 = (undefined8 *)0x3;
        FUN_108b889b4(3,&UNK_10f5026cf);
      }
      func_0x000108b879d0();
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      if (0x80 < unaff_x19[5]) {
LAB_108b87608:
        func_0x000108b87998();
        goto LAB_108b8760c;
      }
      for (uVar9 = 0; uVar2 = uVar9 == unaff_x19[3], uVar9 < unaff_x19[3]; uVar9 = uVar9 + 1) {
        unaff_x27[uVar9] = *(undefined1 *)(unaff_x19[4] + uVar9);
      }
      if ((bRam000000011328ae08 & 1) != 0) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        func_0x000108b879b8();
      }
      puVar5 = *(undefined8 **)((long)register0x00000008 + -0x200);
      func_0x000108b87078(puVar5,unaff_x19[2],0);
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      unaff_x26 = puVar5;
      if ((int)puVar5 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      unaff_x26 = puVar4;
      if ((bool)uVar2) {
        func_0x000108b87950();
        puVar1 = PTR_DAT_11328ae10;
        unaff_x26 = puVar4;
        if ((bool)uVar2) {
          func_0x000108b88ac4(unaff_x19[2],0xc);
          func_0x000108b8796c();
          FUN_108b889b4();
          unaff_x26 = *(undefined8 **)((long)register0x00000008 + -0x200);
          puVar5 = (undefined8 *)puVar1;
        }
        func_0x000108b8714c();
        puVar4 = unaff_x26;
        if ((int)unaff_x26 != 0) goto LAB_108b878c8;
        func_0x000108b87950();
        if ((bool)uVar2) {
          func_0x000108b879c4();
          *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
          *(undefined8 **)((long)register0x00000008 + -0x228) = unaff_x26;
          func_0x000108b87930();
        }
      }
      func_0x000108b879e8(unaff_x19[3]);
      func_0x000108b870e0();
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      if ((int)unaff_x26 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      if ((bool)uVar2) {
        func_0x000108b87120();
        unaff_x28 = &UNK_10f502732;
        if ((int)puVar4 != 0) goto LAB_108b878c8;
        *(long *)((long)register0x00000008 + -0x210) =
             *(long *)((long)register0x00000008 + -0x210) +
             *(long *)((long)register0x00000008 + -0x208);
      }
      func_0x000108b87950();
      if ((bool)uVar2) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        func_0x000108b879ac();
      }
      if (*(ulong *)((long)register0x00000008 + -0x210) != unaff_x19[5]) goto LAB_108b875fc;
      for (uVar9 = 0; bVar3 = *(ulong *)((long)register0x00000008 + -0x210) == uVar9, !bVar3;
          uVar9 = uVar9 + 1) {
        uVar2 = unaff_x27[uVar9] == *(char *)(unaff_x19[6] + uVar9);
        if (!(bool)uVar2) {
          func_0x000108b87950();
          if (!(bool)uVar2) goto LAB_108b875fc;
          *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
          *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
          func_0x000108b87978();
          if ((bRam000000011328ae08 & 1) == 0) goto LAB_108b875fc;
          *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
          *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar1 = PTR_DAT_11328ae10;
          if (!(bool)uVar2) goto LAB_108b875fc;
          func_0x000108b8795c();
          *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar5 = (undefined8 *)PTR_DAT_11328ae10;
          param_1 = (undefined8 *)puVar1;
          if (!(bool)uVar2) goto LAB_108b875fc;
          puVar4 = (undefined8 *)unaff_x19[6];
          func_0x000108b88ac4(puVar4,unaff_x19[3] << 1);
          *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          goto LAB_108b875f8;
        }
      }
      func_0x000108b87950();
      if (bVar3) {
        *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
        puVar4 = (undefined8 *)0x3;
        FUN_108b889b4(3,&UNK_10f50278f);
      }
      func_0x000108b879d0();
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      uVar9 = unaff_x19[5];
      if (0x80 < uVar9) goto LAB_108b87608;
      for (uVar12 = 0; uVar2 = uVar12 == uVar9, uVar12 < uVar9; uVar12 = uVar12 + 1) {
        unaff_x27[uVar12] = *(undefined1 *)(unaff_x19[6] + uVar12);
        uVar9 = unaff_x19[5];
      }
      if ((bRam000000011328ae08 & 1) != 0) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        FUN_108b889b4();
      }
      unaff_x26 = *(undefined8 **)((long)register0x00000008 + -0x200);
      func_0x000108b87078(unaff_x26,unaff_x19[2],1);
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
      if ((int)unaff_x26 != 0) goto LAB_108b878cc;
      func_0x000108b87940();
      if ((bool)uVar2) {
        func_0x000108b8714c();
        if ((int)puVar4 != 0) goto LAB_108b878c8;
        func_0x000108b87950();
        if ((bool)uVar2) {
          func_0x000108b879c4();
          *(undefined8 **)((long)register0x00000008 + -0x230) = unaff_x26;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87930();
        }
      }
      func_0x000108b879e8(unaff_x19[5]);
      func_0x000108b87100();
      if ((int)puVar4 != 0) goto LAB_108b878c8;
      func_0x000108b87950();
      if ((bool)uVar2) {
        func_0x000108b8795c();
        func_0x000108b8796c();
        FUN_108b889b4();
      }
      uVar9 = *(ulong *)((long)register0x00000008 + -0x210);
      if (uVar9 != unaff_x19[3]) {
LAB_108b875fc:
        func_0x000108b87998();
        unaff_x20 = param_1;
        unaff_x26 = (undefined8 *)0xb;
        unaff_x28 = &UNK_10f502732;
        goto LAB_108b878d0;
      }
      iVar8 = 0;
      for (uVar12 = 0; uVar2 = uVar12 == uVar9, uVar12 < uVar9; uVar12 = uVar12 + 1) {
        uVar2 = unaff_x27[uVar12] == *(char *)(unaff_x19[4] + uVar12);
        if (!(bool)uVar2) {
          func_0x000108b87950();
          if ((bool)uVar2) {
            *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
            *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
            puVar4 = (undefined8 *)0x3;
            FUN_108b889b4(3,&UNK_10f502732);
            func_0x000108b879a0();
            if ((bool)uVar2) {
              func_0x000108b87980();
            }
          }
          iVar8 = 0xb;
        }
        uVar9 = unaff_x19[3];
      }
      if (iVar8 != 0) {
        func_0x000108b87950();
        puVar1 = PTR_DAT_11328ae10;
        if ((bool)uVar2) {
          func_0x000108b8795c();
          *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
          *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
          func_0x000108b87978();
          func_0x000108b879a0();
          puVar5 = (undefined8 *)PTR_DAT_11328ae10;
          param_1 = (undefined8 *)puVar1;
          if ((bool)uVar2) {
            puVar4 = (undefined8 *)unaff_x19[4];
            func_0x000108b88ac4(puVar4,unaff_x19[3] << 1);
            *(undefined8 **)((long)register0x00000008 + -0x230) = puVar5;
            *(undefined8 **)((long)register0x00000008 + -0x228) = puVar4;
LAB_108b875f8:
            func_0x000108b87978();
            param_1 = puVar5;
          }
        }
        goto LAB_108b875fc;
      }
      func_0x000108b87998();
      unaff_x26 = puVar4;
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 != 0) goto LAB_108b878d0;
      unaff_x22 = unaff_x22 + 1;
    }
    if ((param_1 == (undefined8 *)0x0) || ((code *)*param_1 == (code *)0x0)) {
LAB_108b8760c:
      unaff_x24 = 0x11328ae08;
      unaff_x26 = (undefined8 *)0x2;
      unaff_x28 = &UNK_10f502732;
    }
    else {
      puVar4 = (undefined8 *)((long)register0x00000008 + -0x200);
      (*(code *)*param_1)(puVar4,*puVar7,puVar7[9]);
      unaff_x26 = puVar4;
      unaff_x28 = &UNK_10f502732;
      if ((int)puVar4 == 0) {
        unaff_x28 = (undefined *)0x0;
        unaff_x19 = (ulong *)((long)register0x00000008 + -0xf0);
        unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x170);
        while( true ) {
          uVar2 = unaff_x28 == (undefined *)0x80;
          if ((bool)uVar2) goto LAB_108b87914;
          FUN_108b87178((undefined1 *)((long)register0x00000008 + -500),4);
          uVar9 = (ulong)*(uint *)((long)register0x00000008 + -500) & 0x3f;
          *(ulong *)((long)register0x00000008 + -0x218) = uVar9;
          func_0x000108b87950();
          if ((bool)uVar2) {
            *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
            *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
            FUN_108b889b4(3,&UNK_10f5027fb);
          }
          puVar6 = (undefined1 *)((long)register0x00000008 + -0xf0);
          FUN_108b87178();
          func_0x000108b87950();
          puVar1 = PTR_DAT_11328ae10;
          param_1 = unaff_x20;
          if ((bool)uVar2) {
            func_0x000108b8795c();
            *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
            *(undefined1 **)((long)register0x00000008 + -0x228) = puVar6;
            func_0x000108b879b8(3);
            param_1 = (undefined8 *)puVar1;
          }
          lVar13 = *(long *)((long)register0x00000008 + -0x218);
          for (lVar10 = 0; lVar13 != lVar10; lVar10 = lVar10 + 1) {
            unaff_x27[lVar10] = *(undefined1 *)((long)unaff_x19 + lVar10);
          }
          uVar2 = *puVar7 == 0x40;
          if (0x40 < *puVar7) break;
          FUN_108b87178((undefined1 *)((long)register0x00000008 + -0x1b0));
          puVar4 = (undefined8 *)((long)register0x00000008 + -0x1f0);
          FUN_108b87178(puVar4,0x40);
          func_0x000108b879dc();
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87078(puVar4,puVar7[2],0);
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b8714c();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            func_0x000108b87950();
            puVar1 = PTR_DAT_11328ae10;
            if ((bool)uVar2) {
              uVar9 = puVar7[8];
              func_0x000108b88ac4(uVar9,puVar7[7]);
              *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
              *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
              func_0x000108b87930();
            }
          }
          param_1 = *(undefined8 **)((long)register0x00000008 + -0x218);
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b870e0(puVar4,(undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0x218));
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b87120();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            *(long *)((long)register0x00000008 + -0x218) =
                 *(long *)((long)register0x00000008 + -0x218) +
                 *(long *)((long)register0x00000008 + -0x208);
          }
          func_0x000108b87950();
          if ((bool)uVar2) {
            func_0x000108b8795c();
            func_0x000108b8796c();
            func_0x000108b879ac();
          }
          func_0x000108b879dc();
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87078(puVar4,puVar7[2],1);
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87940();
          if ((bool)uVar2) {
            func_0x000108b8714c();
            if ((int)puVar4 != 0) goto LAB_108b878c8;
            func_0x000108b87950();
            puVar1 = PTR_DAT_11328ae10;
            if ((bool)uVar2) {
              uVar9 = puVar7[8];
              func_0x000108b88ac4(uVar9,puVar7[7]);
              *(undefined **)((long)register0x00000008 + -0x230) = puVar1;
              *(ulong *)((long)register0x00000008 + -0x228) = uVar9;
              func_0x000108b87930();
            }
          }
          puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
          func_0x000108b87100(puVar4,(undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0x218));
          if ((int)puVar4 != 0) goto LAB_108b878c8;
          func_0x000108b87950();
          if ((bool)uVar2) {
            func_0x000108b8795c();
            func_0x000108b8796c();
            FUN_108b889b4();
          }
          if (*(undefined8 **)((long)register0x00000008 + -0x218) != param_1) {
LAB_108b8790c:
            puVar4 = (undefined8 *)0xb;
            goto LAB_108b878c8;
          }
          iVar8 = 0;
          for (puVar5 = (undefined8 *)0x0; param_1 != puVar5;
              puVar5 = (undefined8 *)((long)puVar5 + 1)) {
            uVar2 = *(char *)((long)unaff_x19 + (long)puVar5) == unaff_x27[(long)puVar5];
            if (!(bool)uVar2) {
              func_0x000108b87950();
              if ((bool)uVar2) {
                *(undefined **)((long)register0x00000008 + -0x230) = PTR_DAT_11328ae10;
                *(long *)((long)register0x00000008 + -0x228) = unaff_x22;
                puVar4 = (undefined8 *)0x3;
                FUN_108b889b4(3,&UNK_10f502833);
                func_0x000108b879a0();
                if ((bool)uVar2) {
                  func_0x000108b87980();
                }
              }
              iVar8 = 0xb;
            }
          }
          if (iVar8 != 0) goto LAB_108b8790c;
          unaff_x28 = unaff_x28 + 1;
          unaff_x20 = param_1;
        }
        puVar4 = (undefined8 *)0xe;
LAB_108b878c8:
        unaff_x26 = puVar4;
        puVar4 = *(undefined8 **)((long)register0x00000008 + -0x200);
LAB_108b878cc:
        func_0x000108b87040();
        unaff_x20 = param_1;
        unaff_x24 = 0x11328ae08;
      }
    }
  }
  goto LAB_108b878d0;
LAB_108b87914:
  func_0x000108b87998();
  unaff_x26 = puVar4;
LAB_108b878d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
    return unaff_x26;
  }
  unaff_x30 = FUN_108b87928;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x230);
  param_1 = puVar4;
  unaff_x21 = puVar7;
  goto FUN_108b871ac;
}



/* Entry: 108b879fc; end: 108b87a87;  */

undefined8 FUN_108b879fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (cRam000000011328ae08 == '\x01') {
    FUN_108b889b4(3,&UNK_10f5025de);
  }
  puVar1 = (undefined8 *)0x20;
  FUN_108b88268();
  *param_1 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *puVar1 = &PTR_FUN_110ab4b40;
    puVar1[1] = 1;
    puVar1[2] = param_2;
  }
  return uVar2;
}



/* Entry: 108b87a88; end: 108b87aeb;  */

undefined8 FUN_108b87a88(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000108b882f0();
  return 0;
}



/* Entry: 108b87aec; end: 108b87afb;  */

undefined8 FUN_108b87aec(void)

{
  return 0;
}



/* Entry: 108b87afc; end: 108b87da3;  */

undefined1 * FUN_108b87afc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined1 *unaff_x27;
  ulong uVar4;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x98) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x28 = 0x11328a000;
    unaff_x24 = 0x11328a000;
    if (cRam000000011328ae30 == '\x01') {
      uVar3 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0x98) + 0x30);
      *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar3;
      param_1 = (undefined1 *)0x3;
      FUN_108b889b4(3,&UNK_10f50287c);
    }
    unaff_x19 = param_2;
    if (param_2 == (undefined8 *)0x0) {
      unaff_x27 = (undefined1 *)0xe;
    }
    else {
      unaff_x23 = 0;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x88);
      uVar3 = 0x11328ae30;
      for (; unaff_x19 != (undefined8 *)0x0; unaff_x19 = (undefined8 *)unaff_x19[6]) {
        unaff_x21 = uVar3;
        unaff_x25 = &UNK_10f502732;
        unaff_x26 = &UNK_10f5028ef;
        if (0x20 < (ulong)unaff_x19[4]) {
          unaff_x27 = (undefined1 *)0x2;
          goto LAB_108b87d64;
        }
        param_1 = (undefined1 *)((long)register0x00000008 + -0x90);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))(param_1,*unaff_x19);
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d64;
        plVar2 = *(long **)((long)register0x00000008 + -0x90);
        unaff_x27 = (undefined1 *)plVar2[1];
        (**(code **)(*plVar2 + 0x10))(unaff_x27,unaff_x19[1],plVar2[3]);
        if ((int)unaff_x27 != 0) {
LAB_108b87d44:
          param_1 = unaff_x27;
          func_0x000108b87dac();
          goto LAB_108b87d64;
        }
        unaff_x27 = (undefined1 *)(*(long **)((long)register0x00000008 + -0x90))[1];
        (**(code **)(**(long **)((long)register0x00000008 + -0x90) + 0x28))();
        if ((int)unaff_x27 != 0) goto LAB_108b87d44;
        func_0x00010ae45444((undefined1 *)((long)register0x00000008 + -0x88),unaff_x19[4]);
        plVar2 = *(long **)((long)register0x00000008 + -0x90);
        param_1 = (undefined1 *)plVar2[1];
        (**(code **)(*plVar2 + 0x18))
                  (param_1,unaff_x19[3],unaff_x19[2],plVar2[2],
                   (undefined1 *)((long)register0x00000008 + -0x88));
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d44;
        uVar1 = cRam000000011328ae30 == '\x01';
        if ((bool)uVar1) {
          param_1 = (undefined1 *)unaff_x19[1];
          func_0x000108b88ac4(param_1,*unaff_x19);
          func_0x000108b87dbc();
          FUN_108b889b4();
          func_0x000108b87dc8();
          if ((bool)uVar1) {
            param_1 = (undefined1 *)unaff_x19[3];
            func_0x000108b88ac4(param_1,unaff_x19[2]);
            func_0x000108b87dbc();
            FUN_108b889b4();
            func_0x000108b87dc8();
            if ((bool)uVar1) {
              param_1 = (undefined1 *)((long)register0x00000008 + -0x88);
              func_0x000108b88ac4(param_1,unaff_x19[4]);
              func_0x000108b87dbc();
              FUN_108b889b4();
              func_0x000108b87dc8();
              if ((bool)uVar1) {
                param_1 = (undefined1 *)unaff_x19[5];
                func_0x000108b88ac4(param_1,unaff_x19[4]);
                func_0x000108b87dbc();
                FUN_108b889b4();
              }
            }
          }
        }
        unaff_x20 = 0;
        for (uVar4 = 0; uVar4 < (ulong)unaff_x19[4]; uVar4 = uVar4 + 1) {
          if (unaff_x22[uVar4] != *(char *)(unaff_x19[5] + uVar4)) {
            uVar1 = cRam000000011328ae30 == '\x01';
            if ((bool)uVar1) {
              *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
              *(long *)((long)register0x00000008 + -0xa8) = unaff_x23;
              param_1 = (undefined1 *)0x3;
              FUN_108b889b4(3,&UNK_10f502732);
              func_0x000108b87dc8();
              if ((bool)uVar1) {
                *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
                *(ulong *)((long)register0x00000008 + -0xa8) = uVar4;
                param_1 = (undefined1 *)0x3;
                FUN_108b889b4(3,&UNK_10f5028ef);
              }
            }
            unaff_x20 = 0xb;
          }
        }
        func_0x000108b87dac();
        if ((int)unaff_x20 != 0) {
          unaff_x27 = (undefined1 *)0xb;
          goto LAB_108b87d64;
        }
        unaff_x21 = 0x11328ae30;
        unaff_x25 = &UNK_10f502732;
        unaff_x26 = &UNK_10f5028ef;
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d64;
        unaff_x23 = unaff_x23 + 1;
      }
      unaff_x21 = 0x11328ae30;
      unaff_x25 = &UNK_10f502732;
      unaff_x26 = &UNK_10f5028ef;
      unaff_x27 = (undefined1 *)0x0;
    }
LAB_108b87d64:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return unaff_x27;
    }
    unaff_x30 = 0x108b87da4;
    ___stack_chk_fail();
    param_2 = *(undefined8 **)(param_1 + 0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  } while( true );
}



/* Entry: 108b87da4; end: 108b87dd3;  */

undefined1 * FUN_108b87da4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  ulong uVar5;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x98) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x28 = 0x11328a000;
    unaff_x24 = 0x11328a000;
    if (cRam000000011328ae30 == '\x01') {
      uVar4 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0x98) + 0x30);
      *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar4;
      param_1 = (undefined1 *)0x3;
      FUN_108b889b4(3,&UNK_10f50287c);
    }
    if (puVar2 == (undefined8 *)0x0) {
      unaff_x27 = (undefined1 *)0xe;
    }
    else {
      unaff_x23 = 0;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x88);
      uVar4 = 0x11328ae30;
      for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[6]) {
        unaff_x21 = uVar4;
        unaff_x25 = &UNK_10f502732;
        unaff_x26 = &UNK_10f5028ef;
        if (0x20 < (ulong)puVar2[4]) {
          unaff_x27 = (undefined1 *)0x2;
          goto LAB_108b87d64;
        }
        param_1 = (undefined1 *)((long)register0x00000008 + -0x90);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))(param_1,*puVar2);
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d64;
        plVar3 = *(long **)((long)register0x00000008 + -0x90);
        unaff_x27 = (undefined1 *)plVar3[1];
        (**(code **)(*plVar3 + 0x10))(unaff_x27,puVar2[1],plVar3[3]);
        if ((int)unaff_x27 != 0) {
LAB_108b87d44:
          param_1 = unaff_x27;
          func_0x000108b87dac();
          goto LAB_108b87d64;
        }
        unaff_x27 = (undefined1 *)(*(long **)((long)register0x00000008 + -0x90))[1];
        (**(code **)(**(long **)((long)register0x00000008 + -0x90) + 0x28))();
        if ((int)unaff_x27 != 0) goto LAB_108b87d44;
        func_0x00010ae45444((undefined1 *)((long)register0x00000008 + -0x88),puVar2[4]);
        plVar3 = *(long **)((long)register0x00000008 + -0x90);
        param_1 = (undefined1 *)plVar3[1];
        (**(code **)(*plVar3 + 0x18))
                  (param_1,puVar2[3],puVar2[2],plVar3[2],
                   (undefined1 *)((long)register0x00000008 + -0x88));
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d44;
        uVar1 = cRam000000011328ae30 == '\x01';
        if ((bool)uVar1) {
          param_1 = (undefined1 *)puVar2[1];
          func_0x000108b88ac4(param_1,*puVar2);
          func_0x000108b87dbc();
          FUN_108b889b4();
          func_0x000108b87dc8();
          if ((bool)uVar1) {
            param_1 = (undefined1 *)puVar2[3];
            func_0x000108b88ac4(param_1,puVar2[2]);
            func_0x000108b87dbc();
            FUN_108b889b4();
            func_0x000108b87dc8();
            if ((bool)uVar1) {
              param_1 = (undefined1 *)((long)register0x00000008 + -0x88);
              func_0x000108b88ac4(param_1,puVar2[4]);
              func_0x000108b87dbc();
              FUN_108b889b4();
              func_0x000108b87dc8();
              if ((bool)uVar1) {
                param_1 = (undefined1 *)puVar2[5];
                func_0x000108b88ac4(param_1,puVar2[4]);
                func_0x000108b87dbc();
                FUN_108b889b4();
              }
            }
          }
        }
        unaff_x20 = 0;
        for (uVar5 = 0; uVar5 < (ulong)puVar2[4]; uVar5 = uVar5 + 1) {
          if (unaff_x22[uVar5] != *(char *)(puVar2[5] + uVar5)) {
            uVar1 = cRam000000011328ae30 == '\x01';
            if ((bool)uVar1) {
              *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
              *(long *)((long)register0x00000008 + -0xa8) = unaff_x23;
              param_1 = (undefined1 *)0x3;
              FUN_108b889b4(3,&UNK_10f502732);
              func_0x000108b87dc8();
              if ((bool)uVar1) {
                *(undefined **)((long)register0x00000008 + -0xb0) = PTR_DAT_11328ae38;
                *(ulong *)((long)register0x00000008 + -0xa8) = uVar5;
                param_1 = (undefined1 *)0x3;
                FUN_108b889b4(3,&UNK_10f5028ef);
              }
            }
            unaff_x20 = 0xb;
          }
        }
        func_0x000108b87dac();
        if ((int)unaff_x20 != 0) {
          unaff_x27 = (undefined1 *)0xb;
          goto LAB_108b87d64;
        }
        unaff_x21 = 0x11328ae30;
        unaff_x25 = &UNK_10f502732;
        unaff_x26 = &UNK_10f5028ef;
        unaff_x27 = param_1;
        if ((int)param_1 != 0) goto LAB_108b87d64;
        unaff_x23 = unaff_x23 + 1;
      }
      unaff_x21 = 0x11328ae30;
      unaff_x25 = &UNK_10f502732;
      unaff_x26 = &UNK_10f5028ef;
      unaff_x27 = (undefined1 *)0x0;
    }
LAB_108b87d64:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return unaff_x27;
    }
    unaff_x30 = FUN_108b87da4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = puVar2;
  } while( true );
}



/* Entry: 108b87dd4; end: 108b87ebf;  */

undefined8 FUN_108b87dd4(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((cRam000000011328ae40 == '\x01') &&
     (FUN_108b88158(param_1,&UNK_10f502921), cRam000000011328ae40 == '\x01')) {
    FUN_108b88158();
  }
  if (param_3 < 0x15) {
    lVar2 = 0x28;
    FUN_108b88268();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      plVar3 = (long *)0x8;
      FUN_108b88268();
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3;
        func_0x00010ae38dd0();
        *plVar3 = (long)plVar4;
        if (plVar4 != (long *)0x0) {
          puVar5 = (undefined8 *)*param_1;
          *puVar5 = &PTR_FUN_110ab4bd0;
          puVar5[1] = plVar3;
          puVar5[2] = param_3;
          puVar5[3] = param_2;
          puVar5[4] = 0;
          return 0;
        }
        func_0x000108b882f0(plVar3);
      }
      func_0x000108b882f0(*param_1);
      *param_1 = 0;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 108b87ec0; end: 108b87f0f;  */

undefined8 FUN_108b87ec0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010ae38e14(*puVar1);
    *puVar1 = 0;
    func_0x000108b882f0(puVar1);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000108b882f0(param_1);
  return 0;
}



/* Entry: 108b87f10; end: 108b87f63;  */

undefined4 FUN_108b87f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c2b424();
  func_0x000107c2b494(uVar2,param_2,param_3,param_1,0);
  uVar1 = 7;
  if ((int)uVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108b87f64; end: 108b880ab;  */

long * FUN_108b87f64(long *param_1,undefined *param_2,uint *param_3,ulong param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint uStack_70;
  undefined auStack_6c [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  puVar4 = param_3;
  if (bRam000000011328ae40 == 1) {
    func_0x000108b88ac4(param_2,param_3);
    puVar3 = &UNK_10f50297d;
    FUN_108b88158();
  }
  if (param_4 < 0x15) {
    (**(code **)(*(long *)(*param_1 + 8) + 0x18))((long *)(*param_1 + 8),param_2,param_3);
    lVar2 = *param_1;
    puVar3 = auStack_6c;
    puVar4 = &uStack_70;
    func_0x000107c2b498(lVar2,puVar3,puVar4);
    if ((int)lVar2 == 0 || uStack_70 < param_4) {
      plVar1 = (long *)0x7;
    }
    else {
      for (uVar5 = 0; param_4 != uVar5; uVar5 = uVar5 + 1) {
        *(undefined *)(param_5 + uVar5) = auStack_6c[uVar5];
      }
      if ((bRam000000011328ae40 & 1) != 0) {
        func_0x000108b88ac4(auStack_6c,param_4);
        puVar3 = &UNK_10f50298c;
        FUN_108b88158();
      }
      plVar1 = (long *)0x0;
    }
  }
  else {
    plVar1 = (long *)0x2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (bRam000000011328ae40 == 1) {
    func_0x000108b88ac4(puVar3,puVar4);
    FUN_108b88158();
  }
  (**(code **)(*(long *)(*plVar1 + 8) + 0x18))((long *)(*plVar1 + 8),puVar3,puVar4);
  return (long *)0x0;
}



/* Entry: 108b880ac; end: 108b88123;  */

undefined8 FUN_108b880ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (cRam000000011328ae40 == '\x01') {
    func_0x000108b88ac4(param_2,param_3);
    FUN_108b88158();
  }
  (**(code **)(*(long *)(*param_1 + 8) + 0x18))((long *)(*param_1 + 8),param_2,param_3);
  return 0;
}



/* Entry: 108b88124; end: 108b88157;  */

undefined4 FUN_108b88124(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  func_0x000107c2b494(uVar1,0,0,0,0);
  uVar2 = 7;
  if ((int)uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 108b88158; end: 108b8816f;  */

ulong * FUN_108b88158(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong auStack_238 [64];
  long lStack_38;
  
  puVar1 = (ulong *)0x3;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pcRam0000000113828748 != (code *)0x0) {
    puVar1 = auStack_238;
    _vsnprintf(puVar1,0x200,param_2,&stack0x00000000);
    if (0 < (int)puVar1) {
      puVar1 = auStack_238;
      _strlen();
      if ((puVar1 != (ulong *)0x0) && (*(char *)((long)auStack_238 + (long)puVar1 + -1) == '\n')) {
        *(undefined1 *)((long)auStack_238 + (long)puVar1 + -1) = 0;
      }
      (*pcRam0000000113828748)(3,auStack_238);
      puVar1 = auStack_238;
      _bzero(puVar1,0x200);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *puVar1 - 1;
  *puVar1 = uVar4;
  if (uVar4 >> 0x10 == 0) {
    uVar2 = 1;
    if (uVar4 == 0) {
      uVar2 = 2;
    }
    puVar3 = (ulong *)(ulong)uVar2;
    if ((uVar4 == 0) || ((int)puVar1[1] == 0)) {
      *(uint *)(puVar1 + 1) = uVar2;
    }
  }
  else {
    puVar3 = (ulong *)0x0;
  }
  return puVar3;
}



/* Entry: 108b88170; end: 108b8822b;  */

undefined8 FUN_108b88170(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (cRam000000011328ae30 == '\x01') {
    FUN_108b889b4(3,&UNK_10f502921);
    if (cRam000000011328ae30 == '\x01') {
      FUN_108b889b4(3,&UNK_10f50294f);
    }
  }
  puVar1 = (undefined8 *)0x29;
  FUN_108b88268();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    *param_1 = puVar1;
    *puVar1 = &PTR_FUN_110ab4c18;
    puVar1[1] = puVar1 + 5;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[2] = param_3;
  }
  return uVar2;
}



/* Entry: 108b8822c; end: 108b8824f;  */

undefined8 FUN_108b8822c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000108b882f0();
  return 0;
}



/* Entry: 108b88250; end: 108b88267;  */

undefined8 FUN_108b88250(void)

{
  return 0;
}



/* Entry: 108b88268; end: 108b8833f;  */

long FUN_108b88268(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 1;
    _calloc(1,param_1);
    if (lVar1 != 0) {
      if (cRam000000011328ae50 == '\0') {
        return lVar1;
      }
      FUN_108b88340();
      return lVar1;
    }
    if (cRam000000011328ae50 != '\0') {
      FUN_108b88340();
    }
  }
  return 0;
}



/* Entry: 108b88340; end: 108b88347;  */

ulong * FUN_108b88340(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong auStack_238 [64];
  long lStack_38;
  
  puVar1 = (ulong *)0x3;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pcRam0000000113828748 != (code *)0x0) {
    puVar1 = auStack_238;
    _vsnprintf(puVar1,0x200,param_2,&stack0x00000000);
    if (0 < (int)puVar1) {
      puVar1 = auStack_238;
      _strlen();
      if ((puVar1 != (ulong *)0x0) && (*(char *)((long)auStack_238 + (long)puVar1 + -1) == '\n')) {
        *(undefined1 *)((long)auStack_238 + (long)puVar1 + -1) = 0;
      }
      (*pcRam0000000113828748)(3,auStack_238);
      puVar1 = auStack_238;
      _bzero(puVar1,0x200);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *puVar1 - 1;
  *puVar1 = uVar4;
  if (uVar4 >> 0x10 == 0) {
    uVar2 = 1;
    if (uVar4 == 0) {
      uVar2 = 2;
    }
    puVar3 = (ulong *)(ulong)uVar2;
    if ((uVar4 == 0) || ((int)puVar1[1] == 0)) {
      *(uint *)(puVar1 + 1) = uVar2;
    }
  }
  else {
    puVar3 = (ulong *)0x0;
  }
  return puVar3;
}



/* Entry: 108b88348; end: 108b88493;  */

void FUN_108b88348(void)

{
  int iVar1;
  
  if (cRam0000000113828728 == '\x01') {
    FUN_108b88494();
  }
  else {
    iVar1 = 0x1328ae60;
    FUN_108b88560();
    if (iVar1 == 0) {
      iVar1 = 0x1328ae30;
      FUN_108b88560();
      if (iVar1 == 0) {
        iVar1 = 0x1328ae08;
        FUN_108b88560();
        if (iVar1 == 0) {
          iVar1 = 0x1328ae50;
          FUN_108b88560();
          if (iVar1 == 0) {
            iVar1 = 0x10ab4b40;
            FUN_108b885e0(&PTR_FUN_110ab4b40,0);
            if (iVar1 == 0) {
              iVar1 = 0x10ab47d0;
              FUN_108b885e0(&PTR_FUN_110ab47d0,1);
              if (iVar1 == 0) {
                iVar1 = 0x10ab4880;
                FUN_108b885e0(&PTR_FUN_110ab4880,5);
                if (iVar1 == 0) {
                  iVar1 = 0x1328adf8;
                  FUN_108b88560();
                  if (iVar1 == 0) {
                    iVar1 = 0x10ab4828;
                    FUN_108b885e0(&PTR_FUN_110ab4828,4);
                    if (iVar1 == 0) {
                      iVar1 = 0x10ab4720;
                      FUN_108b885e0(&PTR_FUN_110ab4720,6);
                      if (iVar1 == 0) {
                        iVar1 = 0x10ab4778;
                        FUN_108b885e0(&PTR_FUN_110ab4778,7);
                        if (iVar1 == 0) {
                          iVar1 = 0x1328ade8;
                          FUN_108b88560();
                          if (iVar1 == 0) {
                            iVar1 = 0x10ab4c18;
                            func_0x000108b885e8(&PTR_FUN_110ab4c18,0);
                            if (iVar1 == 0) {
                              iVar1 = 0x10ab4bd0;
                              func_0x000108b885e8(&PTR_FUN_110ab4bd0,3);
                              if (iVar1 == 0) {
                                iVar1 = 0x1328ae40;
                                FUN_108b88560();
                                if (iVar1 == 0) {
                                  cRam0000000113828728 = '\x01';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108b88494; end: 108b8855f;  */

undefined8 FUN_108b88494(void)

{
  long lVar1;
  long *extraout_x8;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = lRam0000000113828738;
  func_0x000108b889a0(0x113828730);
  plVar2 = extraout_x8;
  while (lVar4 = *plVar2, lVar4 != 0) {
    func_0x000108b88930(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x40));
    func_0x000108b8895c();
    lVar1 = *(long *)(lVar4 + 8);
    FUN_108b87928();
    if ((int)lVar1 != 0) goto LAB_108b88540;
    func_0x000108b88968();
    plVar2 = (long *)(lVar4 + 0x10);
  }
  func_0x000108b889a0();
  while( true ) {
    if (lVar3 == 0) {
      FUN_108b885f0();
      return 0;
    }
    func_0x000108b88930(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x30));
    func_0x000108b8895c();
    lVar1 = *(long *)(lVar3 + 8);
    FUN_108b87da4();
    if ((int)lVar1 != 0) break;
    func_0x000108b88968();
    lVar3 = *(long *)(lVar3 + 0x10);
  }
LAB_108b88540:
  FUN_108b889b4(0,&UNK_10f502a30);
  _exit();
  if (lVar1 == 0) {
    return 2;
  }
  if (*(long *)(lVar1 + 8) != 0) {
    plVar2 = (long *)0x113828740;
    lVar3 = lVar1;
    do {
      if (*plVar2 == 0) {
        plVar2 = (long *)0x10;
        FUN_108b88268();
        if (plVar2 != (long *)0x0) {
          *plVar2 = lVar1;
          plVar2[1] = (long)plRam0000000113828740;
          plRam0000000113828740 = plVar2;
          return 0;
        }
        return 3;
      }
      plVar2 = (long *)(*plVar2 + 8);
      func_0x000108b88974();
    } while ((int)lVar3 != 0);
  }
  return 2;
}



/* Entry: 108b88560; end: 108b885df;  */

undefined8 FUN_108b88560(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar2 = (long *)0x113828740;
    lVar1 = param_1;
    do {
      if (*plVar2 == 0) {
        plVar2 = (long *)0x10;
        FUN_108b88268();
        if (plVar2 != (long *)0x0) {
          *plVar2 = param_1;
          plVar2[1] = (long)plRam0000000113828740;
          plRam0000000113828740 = plVar2;
          return 0;
        }
        return 3;
      }
      plVar2 = (long *)(*plVar2 + 8);
      func_0x000108b88974();
    } while ((int)lVar1 != 0);
  }
  return 2;
}



/* Entry: 108b885e0; end: 108b885ef;  */

/* WARNING: Removing unreachable block (ram,0x000108b88710) */

long FUN_108b885e0(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x50) == param_2) {
    lVar1 = param_1;
    FUN_108b87928();
    if ((int)lVar1 == 0) {
      for (piVar2 = (int *)0x113828730; piVar2 = *(int **)piVar2, piVar2 != (int *)0x0;
          piVar2 = piVar2 + 4) {
        if ((param_2 == *piVar2) || (param_1 == *(long *)(piVar2 + 2))) goto LAB_108b88734;
      }
      piVar2 = (int *)0x18;
      FUN_108b88268();
      if (piVar2 == (int *)0x0) {
        lVar1 = 3;
      }
      else {
        *(int **)(piVar2 + 4) = piRam0000000113828730;
        lVar1 = 0;
        piRam0000000113828730 = piVar2;
        *(long *)(piVar2 + 2) = param_1;
        *piVar2 = param_2;
      }
    }
  }
  else {
LAB_108b88734:
    lVar1 = 2;
  }
  return lVar1;
}



/* Entry: 108b885f0; end: 108b88813;  */

undefined8 FUN_108b885f0(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = plRam0000000113828740;
  FUN_108b889b4(2,&UNK_10f502a62);
  for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    func_0x000108b88930(*(undefined8 *)(*plVar2 + 8));
    puVar1 = &UNK_10f502a7f;
    if (*(char *)*plVar2 == '\0') {
      puVar1 = &UNK_10f502a85;
    }
    FUN_108b889b4(2,puVar1);
  }
  return 0;
}



/* Entry: 108b88814; end: 108b88847;  */

undefined8 FUN_108b88814(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x113828730;
  while( true ) {
    piVar1 = *(int **)piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 4;
  }
  return *(undefined8 *)(piVar1 + 2);
}



/* Entry: 108b88848; end: 108b8889b;  */

long FUN_108b88848(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (cRam0000000113828728 == '\x01') {
    FUN_108b88814();
    if (param_1 != 0) {
      func_0x000108b8898c();
                    /* WARNING: Could not recover jumptable at 0x000108b88988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = 5;
  }
  return lVar1;
}



/* Entry: 108b8889c; end: 108b888cf;  */

undefined8 FUN_108b8889c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x113828738;
  while( true ) {
    piVar1 = *(int **)piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 4;
  }
  return *(undefined8 *)(piVar1 + 2);
}



/* Entry: 108b888d0; end: 108b88923;  */

long FUN_108b888d0(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  if (cRam0000000113828728 == '\x01') {
    FUN_108b8889c();
    if (param_1 != 0) {
      func_0x000108b8898c();
                    /* WARNING: Could not recover jumptable at 0x000108b88988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = 5;
  }
  return lVar1;
}



/* Entry: 108b88924; end: 108b889b3;  */

void FUN_108b88924(void)

{
  return;
}



/* Entry: 108b889b4; end: 108b88a83;  */

ulong * FUN_108b889b4(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong auStack_238 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if (pcRam0000000113828748 != (code *)0x0) {
    puVar1 = auStack_238;
    _vsnprintf(puVar1,0x200,param_2,&stack0x00000000);
    if (0 < (int)puVar1) {
      puVar1 = auStack_238;
      _strlen();
      if ((puVar1 != (ulong *)0x0) && (*(char *)((long)auStack_238 + (long)puVar1 + -1) == '\n')) {
        *(undefined1 *)((long)auStack_238 + (long)puVar1 + -1) = 0;
      }
      (*pcRam0000000113828748)(param_1,auStack_238);
      puVar1 = auStack_238;
      _bzero(puVar1,0x200);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *puVar1 - 1;
  *puVar1 = uVar4;
  if (uVar4 >> 0x10 == 0) {
    uVar2 = 1;
    if (uVar4 == 0) {
      uVar2 = 2;
    }
    puVar3 = (ulong *)(ulong)uVar2;
    if ((uVar4 == 0) || ((int)puVar1[1] == 0)) {
      *(uint *)(puVar1 + 1) = uVar2;
    }
  }
  else {
    puVar3 = (ulong *)0x0;
  }
  return puVar3;
}



/* Entry: 108b88a84; end: 108b88cbb;  */

undefined4 FUN_108b88a84(ulong *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = *param_1 - 1;
  *param_1 = uVar2;
  if (uVar2 >> 0x10 == 0) {
    uVar1 = 1;
    if (uVar2 == 0) {
      uVar1 = 2;
    }
    else if ((int)param_1[1] != 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 1) = uVar1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108b88cbc; end: 108b88d1b;  */

void FUN_108b88cbc(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 + 0x1fU >> 3 & 0x1ffffffffffffffc) + 0xf & 0x3ffffffffffffff0;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_108b88268();
    param_1[1] = uVar1;
    if (uVar1 != 0) {
      *param_1 = param_2 + 0x1fU & 0xffffffffffffffe0;
      FUN_108b88d1c(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 108b88d1c; end: 108b88d2b;  */

void FUN_108b88d1c(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1[1],*param_1 >> 3);
  return;
}



/* Entry: 108b88d2c; end: 108b88d57;  */

void FUN_108b88d2c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    func_0x000108b882f0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 108b88d58; end: 108b88ee7;  */

void FUN_108b88d58(ulong *param_1,ulong param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  
  if (*param_1 <= param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1[1],*param_1 >> 3);
    return;
  }
  uVar4 = param_2 >> 5;
  uVar3 = *param_1 >> 5;
  param_2 = param_2 & 0x1f;
  if (param_2 == 0) {
    uVar5 = uVar3 - uVar4;
    for (uVar6 = 0; uVar5 != uVar6; uVar6 = uVar6 + 1) {
      puVar1 = (undefined4 *)(param_1[1] + uVar6 * 4);
      *puVar1 = puVar1[uVar4];
    }
  }
  else {
    puVar7 = (uint *)param_1[1];
    puVar2 = puVar7;
    for (lVar8 = uVar3 + ~uVar4; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar2 = (puVar2 + uVar4)[1] << (ulong)(0x20U - (int)param_2 & 0x1f) ^
                puVar2[uVar4] >> param_2;
      puVar2 = puVar2 + 1;
    }
    puVar7[uVar3 + ~uVar4] = puVar7[uVar3 - 1] >> param_2;
    uVar5 = uVar3 - uVar4;
  }
  for (; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    *(undefined4 *)(param_1[1] + uVar5 * 4) = 0;
  }
  return;
}



/* Entry: 108b88ee8; end: 108b88f6b;  */

undefined8 FUN_108b88ee8(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 - *param_1;
  if (param_2 < *param_1) {
    return 9;
  }
  iVar1 = uVar2 - 0x7f;
  if (uVar2 < 0x7f || iVar1 == 0) {
    param_1[(ulong)(uVar2 >> 5) + 2] = param_1[(ulong)(uVar2 >> 5) + 2] | 1 << (ulong)(uVar2 & 0x1f)
    ;
  }
  else {
    func_0x000108b88c04(param_1 + 2,iVar1);
    param_1[5] = param_1[5] | 0x80000000;
    *param_1 = *param_1 + iVar1;
  }
  return 0;
}



/* Entry: 108b88f6c; end: 108b88fdb;  */

ulong FUN_108b88f6c(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *param_1 >> 0x10;
  uVar5 = (uint)*param_1;
  uVar1 = uVar5 & 0xffff;
  uVar3 = (long)(int)(param_3 - uVar1);
  uVar2 = uVar6;
  if (param_3 < uVar1 - 0x8000) {
    uVar2 = uVar6 + 1;
    uVar3 = (ulong)((param_3 | 0x10000) - uVar1);
  }
  iVar4 = param_3 - uVar1;
  if (0x8000 < iVar4) {
    iVar4 = iVar4 + -0x10000;
    uVar6 = uVar6 + 0xffffffff;
  }
  if ((uVar5 >> 0xf & 1) == 0) {
    uVar3 = (long)iVar4;
    uVar2 = uVar6;
  }
  *param_2 = (ulong)param_3 & 0xffff00000000ffff | (uVar2 & 0xffffffff) << 0x10;
  return uVar3;
}



/* Entry: 108b88fdc; end: 108b8901f;  */

undefined8 FUN_108b88fdc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (int)param_1 + 8;
    FUN_108b88cbc();
    if (iVar1 == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
      *param_1 = 0;
    }
    return uVar2;
  }
  return 2;
}



/* Entry: 108b89020; end: 108b8906b;  */

uint FUN_108b89020(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8) + -1;
  if (-1 < param_2 + (int)lVar2) {
    uVar1 = lVar2 + param_2;
    return -(*(uint *)(*(long *)(param_1 + 0x10) + (uVar1 >> 5) * 4) >> (ulong)((uint)uVar1 & 0x1f)
            & 1) & 9;
  }
  return 10;
}



/* Entry: 108b8906c; end: 108b890db;  */

undefined8 FUN_108b8906c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((long)param_2 < 1) {
    lVar1 = param_2 + param_1[1];
  }
  else {
    *param_1 = *param_1 + (param_2 & 0xffff);
    FUN_108b88d58(param_1 + 1);
    lVar1 = param_1[1];
  }
  uVar2 = lVar1 - 1U >> 3 & 0x1ffffffffffffffc;
  *(uint *)(param_1[2] + uVar2) =
       1 << (ulong)((uint)(lVar1 - 1U) & 0x1f) | *(uint *)(param_1[2] + uVar2);
  return 0;
}



/* Entry: 108b890dc; end: 108b890ff;  */

ulong FUN_108b890dc(ulong *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  if (*param_1 < 0x8001) {
    *param_2 = (ulong)param_3;
    return (ulong)param_3 - *param_1;
  }
  uVar6 = *param_1 >> 0x10;
  uVar5 = (uint)*param_1;
  uVar1 = uVar5 & 0xffff;
  uVar3 = (long)(int)(param_3 - uVar1);
  uVar2 = uVar6;
  if (param_3 < uVar1 - 0x8000) {
    uVar2 = uVar6 + 1;
    uVar3 = (ulong)((param_3 | 0x10000) - uVar1);
  }
  iVar4 = param_3 - uVar1;
  if (0x8000 < iVar4) {
    iVar4 = iVar4 + -0x10000;
    uVar6 = uVar6 + 0xffffffff;
  }
  if ((uVar5 >> 0xf & 1) == 0) {
    uVar3 = (long)iVar4;
    uVar2 = uVar6;
  }
  *param_2 = (ulong)param_3 & 0xffff00000000ffff | (uVar2 & 0xffffffff) << 0x10;
  return uVar3;
}



/* Entry: 108b89100; end: 108b8913b;  */

undefined8 FUN_108b89100(ulong *param_1,uint param_2,uint param_3)

{
  if ((ulong)param_2 < *param_1 >> 0x10) {
    return 10;
  }
  *param_1 = (ulong)param_3 | (ulong)param_2 << 0x10;
  FUN_108b88d1c(param_1 + 1);
  return 0;
}



/* Entry: 108b8913c; end: 108b8914b;  */

void FUN_108b8913c(undefined8 param_1,long param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,*(undefined8 *)(param_2 + 0x40));
    return;
  }
  return;
}



/* Entry: 108b8914c; end: 108b897a3;  */

ulong FUN_108b8914c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [256];
  undefined8 uStack_170;
  undefined4 auStack_168 [62];
  undefined8 uStack_70;
  
  puVar7 = param_1;
  func_0x000108b8c570();
  puVar5 = (undefined8 *)puVar7[9];
  *puVar5 = 0xffffffffffff;
  *(undefined4 *)(puVar5 + 1) = 0;
  uStack_70 = extraout_x8;
  if (param_3 == 0) {
    param_1[8] = 0;
LAB_108b891c0:
    plVar8 = (long *)*param_1;
    puVar7 = (undefined8 *)(ulong)*(uint *)(*plVar8 + 0x50);
    puVar6 = puVar7;
    FUN_108b897a4();
    plVar10 = (long *)param_1[3];
    puVar5 = (undefined8 *)(ulong)*(uint *)(*plVar10 + 0x50);
    FUN_108b897a4();
    if (puVar5 <= puVar6) {
      puVar5 = puVar6;
    }
    puVar13 = (undefined8 *)plVar8[2];
    puVar6 = (undefined8 *)plVar10[2];
    func_0x000108b897c4(puVar7,puVar13);
    in_ZR = puVar13 < puVar5 && puVar6 == puVar5;
    if (puVar13 >= puVar5 || puVar5 <= puVar6) {
      uVar9 = (long)puVar13 - (long)puVar7;
      puVar1 = (undefined8 *)0x2e;
      if (puVar13 < (undefined8 *)0x1f) {
        puVar1 = (undefined8 *)0x1e;
      }
      puVar13 = (undefined8 *)0x2e;
      if (puVar6 <= puVar1) {
        puVar13 = puVar1;
      }
      puVar1 = (undefined8 *)0x2e;
      if (puVar5 <= puVar13) {
        puVar1 = puVar13;
      }
      in_ZR = bRam000000011328ae70 == 1;
      if ((bool)in_ZR) {
        func_0x000108b8c4ac();
        func_0x000108b8c68c();
        if ((bool)in_ZR) {
          func_0x000108b8c4ac();
          func_0x000108b8c68c();
          if ((bool)in_ZR) {
            func_0x000108b8c4ac();
            func_0x000108b8c68c();
            if ((bool)in_ZR) {
              func_0x000108b8c4ac();
              func_0x000108b8c68c();
              if ((bool)in_ZR) {
                func_0x000108b8c4ac();
                func_0x000108b8c68c();
                if ((bool)in_ZR) {
                  func_0x000108b8c53c();
                  func_0x000108b8c4ac();
                }
              }
            }
          }
        }
      }
      func_0x000108b8c480();
      ___memcpy_chk(&uStack_170,*param_2,puVar5,0x100);
      puVar5 = &uStack_278;
      FUN_108b89800(puVar5,&uStack_170,puVar1);
      uVar3 = (uint)puVar5;
      if (uVar3 == 0) {
        func_0x000108b8c734();
        func_0x000108b8c6b0();
        if (uVar3 == 0) {
          func_0x000108b8c528();
          if ((bool)in_ZR) {
            func_0x000108b8c564();
            func_0x000108b8c4ac();
          }
          if (uVar9 != 0) {
            func_0x000108b8c528();
            if ((bool)in_ZR) {
              func_0x000108b8c53c();
              func_0x000108b8c4ac();
            }
            puVar5 = &uStack_278;
            func_0x000108b8c720(puVar5,2,(undefined8 *)((long)&uStack_170 + (long)puVar7));
            uVar3 = (uint)puVar5;
            if (uVar3 != 0) {
              func_0x000108b8c470();
              goto LAB_108b89340;
            }
            param_1[5] = *(undefined8 *)((long)&uStack_170 + (long)puVar7);
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)auStack_168 + (long)puVar7);
            func_0x000108b8c528();
            if ((bool)in_ZR) {
              func_0x000108b8c63c();
              func_0x000108b8c4ac();
            }
          }
          uVar3 = (uint)*param_1;
          func_0x000108b8c6b8();
          if (uVar3 == 0) {
            plVar8 = (long *)param_1[1];
            if (plVar8 == (long *)0x0) goto LAB_108b895b4;
            lVar14 = *(long *)*param_1;
            in_ZR = *plVar8 == lVar14;
            if (!(bool)in_ZR) {
              lVar11 = plVar8[2];
              puVar7 = (undefined8 *)(ulong)*(uint *)(*plVar8 + 0x50);
              func_0x000108b897c4(puVar7,lVar11);
              uVar12 = lVar11 - (long)puVar7;
              in_ZR = uVar12 == uVar9;
              if ((uVar12 <= uVar9) ||
                 (in_ZR = (*(uint *)(lVar14 + 0x50) & 0xfffffffe) == 6, uVar12 = uVar9, (bool)in_ZR)
                 ) {
                uVar9 = uVar12;
                func_0x000108b8c6e8();
                ___memcpy_chk(auStack_270,*param_2,uVar9 + (long)puVar7,0x100);
                puVar5 = &uStack_280;
                FUN_108b89800(puVar5,auStack_270,puVar1);
                puVar13 = puVar5;
                func_0x000108b8c6e8();
                if ((int)puVar5 == 0) {
                  puVar5 = &uStack_280;
                  goto LAB_108b894c8;
                }
                uVar9 = 5;
                puVar7 = puVar13;
              }
              else {
                uVar9 = 2;
              }
              uVar3 = (uint)puVar7;
              func_0x000108b8c480();
              goto LAB_108b89344;
            }
            puVar5 = &uStack_278;
LAB_108b894c8:
            puVar13 = puVar5;
            func_0x000108b8c6b0(puVar5,6,&uStack_170);
            uVar3 = (uint)puVar13;
            if (uVar3 == 0) {
              func_0x000108b8c528();
              if ((bool)in_ZR) {
                func_0x000108b8c564();
                func_0x000108b8c4ac();
              }
              if (uVar9 != 0) {
                func_0x000108b8c528();
                if ((bool)in_ZR) {
                  func_0x000108b8c53c();
                  func_0x000108b8c4ac();
                }
                puVar13 = puVar5;
                func_0x000108b8c720(puVar5,7,(long)&uStack_170 + (long)puVar7);
                uVar3 = (uint)puVar13;
                if (uVar3 != 0) {
                  func_0x000108b8c470();
                  goto LAB_108b89340;
                }
                func_0x000108b8c528();
                if ((bool)in_ZR) {
                  func_0x000108b8c63c();
                  func_0x000108b8c4ac();
                }
              }
              uVar3 = (uint)param_1[1];
              func_0x000108b8c6b8();
              if (uVar3 == 0) {
                in_ZR = puVar5 == &uStack_278;
                if (!(bool)in_ZR) {
                  FUN_108b898f0();
                  uVar3 = (uint)puVar5;
                  if (uVar3 != 0) {
                    func_0x000108b8c470();
                    goto LAB_108b89340;
                  }
                }
LAB_108b895b4:
                func_0x000108b8c734();
                func_0x000108b89884();
                if (uVar3 == 0) {
                  func_0x000108b8c528();
                  if ((bool)in_ZR) {
                    func_0x000108b8c6c0(param_1[2]);
                    func_0x000108b8c4ac();
                  }
                  func_0x000108b8c5a4(param_1[2]);
                  if (uVar3 == 0) {
                    puVar5 = (undefined8 *)(ulong)*(uint *)(*(long *)param_1[3] + 0x50);
                    func_0x000108b897c4(puVar5,puVar6);
                    puVar7 = puVar5;
                    func_0x000108b8c528();
                    uVar3 = (uint)puVar7;
                    if ((bool)in_ZR) {
                      func_0x000108b8c53c();
                      func_0x000108b8c4ac();
                    }
                    func_0x000108b8c734();
                    func_0x000108b8c6b0();
                    if (uVar3 == 0) {
                      in_ZR = puVar6 == puVar5;
                      uVar2 = in_ZR;
                      if (!(bool)in_ZR) {
                        func_0x000108b8c528();
                        if ((bool)in_ZR) {
                          func_0x000108b8c53c();
                          func_0x000108b8c4ac();
                        }
                        puVar7 = &uStack_278;
                        func_0x000108b8c720(puVar7,5,(undefined8 *)
                                                     ((long)&uStack_170 + (long)puVar5));
                        uVar3 = (uint)puVar7;
                        if (uVar3 != 0) {
                          func_0x000108b8c470();
                          goto LAB_108b89340;
                        }
                        *(undefined8 *)((long)param_1 + 0x34) =
                             *(undefined8 *)((long)&uStack_170 + (long)puVar5);
                        *(undefined4 *)((long)param_1 + 0x3c) =
                             *(undefined4 *)((long)auStack_168 + (long)puVar5);
                        uVar2 = in_ZR;
                      }
                      func_0x000108b8c528();
                      in_ZR = 0;
                      if ((bool)uVar2) {
                        func_0x000108b8c564();
                        func_0x000108b8c4ac();
                        in_ZR = puVar6 == puVar5;
                        if ((!(bool)in_ZR) && ((bRam000000011328ae70 & 1) != 0)) {
                          func_0x000108b8c63c();
                          func_0x000108b8c4ac();
                        }
                      }
                      uVar3 = (uint)param_1[3];
                      func_0x000108b8c6b8();
                      if (uVar3 == 0) {
                        func_0x000108b8c734();
                        func_0x000108b89884();
                        if (uVar3 == 0) {
                          func_0x000108b8c528();
                          if ((bool)in_ZR) {
                            func_0x000108b8c6c0(param_1[4]);
                            func_0x000108b8c4ac();
                          }
                          func_0x000108b8c5a4(param_1[4]);
                          if (uVar3 == 0) {
                            uVar4 = (uint)&uStack_278;
                            FUN_108b898f0();
                            uVar3 = uVar4;
                            func_0x000108b8c480();
                            in_ZR = uVar4 == 0;
                            uVar4 = 0;
                            if (!(bool)in_ZR) {
                              uVar4 = 5;
                            }
                            uVar9 = (ulong)uVar4;
                            goto LAB_108b89344;
                          }
                          func_0x000108b8c470();
                        }
                        else {
                          func_0x000108b8c470();
                        }
                      }
                      else {
                        func_0x000108b8c470();
                      }
                    }
                    else {
                      func_0x000108b8c470();
                    }
                  }
                  else {
                    func_0x000108b8c470();
                  }
                }
                else {
                  func_0x000108b8c470();
                }
              }
              else {
                func_0x000108b8c470();
              }
            }
            else {
              func_0x000108b8c470();
            }
          }
          else {
            func_0x000108b8c470();
          }
        }
        else {
          func_0x000108b8c470();
        }
      }
      else {
        func_0x000108b8c470();
      }
LAB_108b89340:
      uVar9 = 5;
      goto LAB_108b89344;
    }
  }
  else if (param_2[1] != 0) {
    FUN_108b88268();
    param_1[8] = param_3;
    uVar3 = 0;
    if (param_3 != 0) {
      _memcpy();
      goto LAB_108b891c0;
    }
    goto LAB_108b89340;
  }
  uVar3 = (uint)puVar7;
  uVar9 = 2;
LAB_108b89344:
  func_0x000108b8c4e4(uStack_70);
  if ((bool)in_ZR) {
    return uVar9;
  }
  ___stack_chk_fail();
  if (uVar3 < 8) {
    return *(ulong *)(&UNK_10df93e30 + (ulong)uVar3 * 8);
  }
  return 0;
}



/* Entry: 108b897a4; end: 108b897ff;  */

undefined8 FUN_108b897a4(uint param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)(&UNK_10df93e30 + (ulong)param_1 * 8);
  }
  return 0;
}



/* Entry: 108b89800; end: 108b898ef;  */

undefined8 FUN_108b89800(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  func_0x000108b8c698();
  if (param_3 == 0x1e) {
    uVar1 = 1;
  }
  else if (param_3 == 0x2e) {
    uVar1 = 5;
  }
  else {
    if (param_3 != 0x26) {
      return 2;
    }
    uVar1 = 4;
  }
  FUN_108b88848();
  if ((int)uVar1 == 0) {
    uVar1 = *unaff_x19;
    func_0x000108b87058();
    if ((int)uVar1 != 0) {
      func_0x000108b87040(*unaff_x19);
    }
  }
  return uVar1;
}



/* Entry: 108b898f0; end: 108b8997b;  */

void FUN_108b898f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  func_0x000108b87040();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  return;
}



/* Entry: 108b8997c; end: 108b89a4f;  */

undefined8 FUN_108b8997c(long param_1,long param_2,ulong param_3,ulong *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *param_4 = 0;
    *param_5 = *(long *)(param_1 + 8);
    return 0;
  }
  plVar4 = *(long **)(param_1 + 8);
  if ((*(uint *)(*plVar4 + 0x18) & 0xfffffffe) == 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(plVar4[2] + 0x10);
    if (param_3 < uVar2) goto LAB_108b899ec;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (param_3 - uVar2 < uVar3) {
    return 0x19;
  }
  for (lVar5 = *(long *)(param_1 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar1 = param_2 + ((param_3 - uVar2) - uVar3);
    _memcmp(lVar1,plVar4[8],uVar3);
    if ((int)lVar1 == 0) {
      *param_4 = uVar3;
      *param_5 = (long)plVar4;
      return 0;
    }
    plVar4 = plVar4 + 10;
  }
LAB_108b899ec:
  *param_4 = 0;
  return 0x19;
}



/* Entry: 108b89a50; end: 108b8a13b;  */

void FUN_108b89a50(uint *param_1,ushort *param_2,ulong *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint extraout_w8;
  long extraout_x8;
  uint extraout_w9;
  code *extraout_x9;
  ushort *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ushort *puVar19;
  ushort *puStack_a0;
  long lStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lStack_98 = 0;
  if (cRam000000011328ae70 == '\x01') {
    func_0x000108b8c4ac(param_1,&UNK_10f502d38);
  }
  uVar13 = *param_3;
  puVar6 = param_2;
  FUN_108b8a13c(param_2,uVar13);
  if ((int)puVar6 != 0) {
    return;
  }
  if (uVar13 < 0xc) {
    return;
  }
  uVar13 = (ulong)*(uint *)(param_2 + 4);
  puVar7 = *(uint **)param_1;
  FUN_108b8add8(puVar7,uVar13);
  if (puVar7 == (uint *)0x0) {
    lVar11 = *(long *)(param_1 + 2);
    if (lVar11 == 0) {
      return;
    }
    FUN_108b8a198(lVar11,uVar13,&puStack_90);
    puVar7 = puStack_90;
    if ((int)lVar11 != 0) {
      return;
    }
    uVar8 = *(undefined8 *)param_1;
    func_0x000108b8a368(uVar8,puStack_90,*(undefined8 *)(param_1 + 2));
    if ((int)uVar8 != 0) {
      return;
    }
LAB_108b89b18:
    puVar7[0x19] = 1;
  }
  else if (puVar7[0x19] != 1) {
    if (puVar7[0x19] == 0) goto LAB_108b89b18;
    if (PTR_DAT_11328ae80 != (undefined *)0x0) {
      uVar4 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uStack_88 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
      puStack_90 = param_1;
      (*(code *)PTR_DAT_11328ae80)(&puStack_90);
    }
  }
  if ((char)puVar7[6] == '\x01') {
    if (*(ulong *)(puVar7 + 4) <= param_4) {
      return;
    }
    plVar14 = (long *)(*(long *)(puVar7 + 2) + param_4 * 0x50);
  }
  else {
    plVar14 = *(long **)(puVar7 + 2);
  }
  bVar2 = (*(uint *)(*plVar14 + 0x18) & 0xfffffffe) == 6;
  if (bVar2) {
    func_0x000108b8c6a4();
    if (bVar2) {
      func_0x000108b8c4ac();
    }
    iVar5 = (int)plVar14[9];
    FUN_108b88a84();
    if (iVar5 != 0) {
      if (iVar5 == 2) goto LAB_108b89c50;
      if (PTR_DAT_11328ae80 != (undefined *)0x0) {
        func_0x000108b8c548();
      }
    }
    lStack_80 = *(long *)(plVar14[2] + 0x10);
    func_0x000108b8c768();
    if ((extraout_w9 >> 4 & 1) == 0) {
      uVar15 = uVar13;
      uVar13 = 0;
    }
    else {
      func_0x000108b8c740();
      uVar15 = extraout_x8 + 4;
    }
    if ((long)param_2 + *param_3 < uVar15) {
      return;
    }
    uStack_68 = *param_3 - (uVar15 - (long)param_2);
    uVar4 = (uint)param_2[1];
    func_0x000108b8a3a4(param_2[1],puVar7,&uStack_70,&uStack_78);
    if (uVar4 == 0) {
      puVar9 = puVar7 + 10;
      FUN_108b89020(puVar9,uStack_78);
      if ((int)puVar9 != 0) {
        if ((int)puVar9 != 9) {
          return;
        }
        if ((char)puVar7[0x1a] != '\x01') {
          return;
        }
      }
    }
    else {
      if (uVar4 != 0x1b) {
        return;
      }
      func_0x000108b8c5e8(uStack_70);
      puVar7[0x20] = 0;
      uStack_78 = 0;
    }
    FUN_108b8906c(puVar7 + 10,uStack_78);
    if (cRam000000011328ae70 == '\x01') {
      func_0x000108b8c4ac();
    }
    func_0x000108b8c238(plVar14,&puStack_90,uStack_70,param_2);
    uVar18 = (uStack_70 & 0xff00ff00ff00ff00) >> 8 | (uStack_70 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = (uVar18 >> 0x20 | uVar18 << 0x20) >> 0x10;
    iVar5 = (int)*plVar14;
    uStack_70 = uVar18;
    func_0x000108b8c51c();
    if (iVar5 != 0) {
      return;
    }
    lVar11 = plVar14[1];
    if (lVar11 != 0) {
      puStack_90 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      uStack_88 = uVar18;
      func_0x000108b8c51c();
      if ((int)lVar11 != 0) {
        return;
      }
    }
    if (((uVar13 != 0) && (plVar14[1] != 0)) &&
       (puVar9 = puVar7, FUN_108b8a468(puVar7,uVar13,plVar14), (int)puVar9 != 0)) {
      return;
    }
    iVar5 = (int)*plVar14;
    func_0x000108b8c700();
    if (iVar5 != 0) {
      return;
    }
    lVar11 = *plVar14;
    FUN_108b870e0(lVar11,uVar15,&uStack_68);
    if ((int)lVar11 != 0) {
      return;
    }
    lVar11 = *plVar14;
    func_0x000108b87120(lVar11,uVar15 + uStack_68,&lStack_80);
    if ((int)lVar11 != 0) {
      return;
    }
    if ((char)puVar7[6] == '\x01') {
      func_0x000108b8c654((long)param_2 + lStack_80 + *param_3);
      lVar11 = *(long *)(puVar7 + 8);
    }
    else {
      lVar11 = 0;
    }
    uVar13 = lStack_80 + lVar11 + *param_3;
  }
  else {
    iVar5 = (int)plVar14[9];
    FUN_108b88a84();
    if (iVar5 == 2) {
LAB_108b89c50:
      if (PTR_DAT_11328ae80 == (undefined *)0x0) {
        return;
      }
      uVar4 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uStack_88 = CONCAT44(2,uVar4 >> 0x10 | uVar4 << 0x10);
      puStack_90 = param_1;
      (*(code *)PTR_DAT_11328ae80)(&puStack_90);
      return;
    }
    if ((iVar5 == 1) && (PTR_DAT_11328ae80 != (undefined *)0x0)) {
      func_0x000108b8c548();
    }
    lVar11 = *(long *)(plVar14[2] + 0x10);
    uVar4 = puVar7[0x10];
    if ((uVar4 & 1) == 0) {
      puVar19 = (ushort *)0x0;
      puVar12 = (ushort *)0x0;
    }
    else {
      uVar13 = (ulong)*param_2 & 0xf;
      puVar6 = param_2 + uVar13 * 2 + 6;
      if ((*param_2 >> 4 & 1) == 0) {
        puVar12 = (ushort *)0x0;
        puVar19 = puVar6;
      }
      else {
        puVar19 = puVar6 + (ulong)((uint)(param_2[uVar13 * 2 + 7] >> 8) |
                                  (param_2[uVar13 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
        puVar12 = puVar6;
      }
      if ((ushort *)((long)param_2 + *param_3) < puVar19) {
        return;
      }
      lStack_98 = (long)param_2 + (*param_3 - (long)puVar19);
    }
    uVar1 = (char)puVar7[6] != '\0';
    uVar3 = (char)puVar7[6] == '\x01';
    if ((bool)uVar3) {
      func_0x000108b8c654((long)param_2 + *param_3);
      lVar16 = *(long *)(puVar7 + 8);
      uVar4 = puVar7[0x10];
    }
    else {
      lVar16 = 0;
    }
    if ((uVar4 >> 1 & 1) == 0) {
      puStack_a0 = (ushort *)0x0;
      lVar17 = 0;
    }
    else {
      lVar17 = (long)param_2 + *param_3 + lVar16;
      puStack_a0 = param_2;
    }
    uVar4 = (uint)param_2[1];
    func_0x000108b8a3a4(param_2[1],puVar7,&uStack_68,&uStack_70);
    if (uVar4 == 0) {
      puVar9 = puVar7 + 10;
      FUN_108b89020(puVar9,uStack_70);
      if ((int)puVar9 != 0) {
        if ((int)puVar9 != 9) {
          return;
        }
        uVar1 = (char)puVar7[0x1a] != '\0';
        uVar3 = (char)puVar7[0x1a] == '\x01';
        if (!(bool)uVar3) {
          return;
        }
      }
      FUN_108b8906c(puVar7 + 10,uStack_70);
    }
    else {
      uVar1 = 0x1a < uVar4;
      uVar3 = uVar4 == 0x1b;
      if (!(bool)uVar3) {
        return;
      }
      func_0x000108b8c5e8(uStack_68);
      puVar7[0x20] = 0;
      FUN_108b8906c(puVar7 + 10,0);
    }
    func_0x000108b8c6a4();
    if ((bool)uVar3) {
      func_0x000108b8c4ac();
    }
    lVar10 = *plVar14;
    func_0x000108b8c67c();
    uVar3 = (bool)uVar1 && !(bool)uVar3 || (1 << (ulong)(extraout_w8 & 0x1f) & 0x32U) == 0;
    if ((bool)uVar3) {
      uVar13 = (uStack_68 & 0xff00ff00ff00ff00) >> 8 | (uStack_68 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uStack_88 = uVar13 >> 0x20 | uVar13 << 0x20;
      puStack_90 = (uint *)0x0;
    }
    else {
      puStack_90 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      uVar13 = (uStack_68 & 0xff00ff00ff00ff00) >> 8 | (uStack_68 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uStack_88 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 0x10;
    }
    func_0x000108b8c51c();
    if (((int)lVar10 == 0) && (lVar10 = plVar14[1], lVar10 != 0)) {
      func_0x000108b8c51c();
    }
    if ((int)lVar10 != 0) {
      return;
    }
    uVar13 = (uStack_68 & 0xff00ff00ff00ff00) >> 8 | (uStack_68 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uStack_68 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 0x10;
    iVar5 = 0;
    if ((puStack_a0 != (ushort *)0x0) &&
       (puStack_90 = *(uint **)(plVar14[2] + 0x20), puStack_90 != (uint *)0x0)) {
      lVar10 = *plVar14;
      FUN_108b87098(lVar10,lVar17,&puStack_90);
      iVar5 = (int)lVar10;
      if (iVar5 != 0) {
        return;
      }
      func_0x000108b8c6a4();
      if ((bool)uVar3) {
        lVar10 = lVar17;
        func_0x000108b88ac4(lVar17,puStack_90);
        iVar5 = (int)lVar10;
        func_0x000108b8c48c();
      }
    }
    if ((puVar12 != (ushort *)0x0) && (plVar14[1] != 0)) {
      FUN_108b8a468(puVar7,puVar12,plVar14);
      iVar5 = 0;
      if ((int)puVar7 != 0) {
        return;
      }
    }
    if (puVar19 != (ushort *)0x0) {
      lVar10 = *plVar14;
      FUN_108b870e0(lVar10,puVar19,&lStack_98);
      iVar5 = 0;
      if ((int)lVar10 != 0) {
        return;
      }
    }
    if (puStack_a0 != (ushort *)0x0) {
      func_0x000108b8c4f8(plVar14[2]);
      if (iVar5 != 0) {
        return;
      }
      lVar10 = ((long *)plVar14[2])[1];
      (**(code **)(*(long *)plVar14[2] + 0x20))(lVar10,puStack_a0,*param_3);
      iVar5 = (int)lVar10;
      if (iVar5 != 0) {
        return;
      }
      func_0x000108b8c6a4();
      if ((bool)uVar3) {
        func_0x000108b8c4ac();
      }
      func_0x000108b8c66c(plVar14[2]);
      (*extraout_x9)();
      func_0x000108b8c6a4();
      if ((bool)uVar3) {
        func_0x000108b88ac4(lVar17,lVar11);
        func_0x000108b8c4ac();
      }
      if (iVar5 != 0) {
        return;
      }
    }
    lVar10 = 0;
    if (lVar17 != 0) {
      lVar10 = lVar11;
    }
    uVar13 = lVar10 + lVar16 + *param_3;
  }
  *param_3 = uVar13;
  return;
}



/* Entry: 108b8a13c; end: 108b8a197;  */

undefined8 FUN_108b8a13c(ushort *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0xb < param_2) {
    uVar3 = (ulong)*param_1 & 0xf;
    lVar2 = uVar3 * 4;
    if ((lVar2 + 0xcU <= param_2) &&
       (((*param_1 >> 4 & 1) == 0 ||
        ((uVar1 = lVar2 + 0x10, uVar1 <= param_2 &&
         (uVar1 + (ulong)((uint)(param_1[uVar3 * 2 + 7] >> 8) |
                         (param_1[uVar3 * 2 + 7] & 0xff00ff) << 8) * 4 <= param_2)))))) {
      return 0;
    }
  }
  return 2;
}



/* Entry: 108b8a198; end: 108b8a367;  */

undefined4 * FUN_108b8a198(long param_1,undefined4 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  func_0x000108b8c4d4();
  if ((bool)in_ZR) {
    func_0x000108b8c53c();
    func_0x000108b8c4ac();
  }
  puVar3 = (undefined4 *)0x88;
  FUN_108b88268();
  if (puVar3 != (undefined4 *)0x0) {
    *param_3 = (long)puVar3;
    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x10);
    puVar4 = puVar3;
    func_0x000108b8c6f4();
    *(undefined4 **)(puVar3 + 2) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      lVar7 = 0;
      uVar8 = 0;
      while( true ) {
        if (*(ulong *)(param_1 + 0x10) <= uVar8) {
          *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(param_1 + 0x18);
          *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_1 + 0x20);
          puVar4 = puVar3 + 10;
          FUN_108b88fdc(puVar4,*(undefined8 *)(param_1 + 0x30));
          if ((int)puVar4 != 0) {
            func_0x000108b8c504();
            *param_3 = 0;
            return puVar4;
          }
          *(undefined8 *)(puVar3 + 0x14) = 0;
          *(undefined8 *)(puVar3 + 0x16) = 0;
          *(undefined1 *)(puVar3 + 0x1a) = *(undefined1 *)(param_1 + 0x68);
          puVar3[0x12] = 0;
          *puVar3 = param_2;
          puVar3[0x20] = 0;
          puVar3[0x10] = *(undefined4 *)(param_1 + 0x40);
          *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(param_1 + 0x60);
          uVar6 = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)(puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 *)(puVar3 + 0x1e) = uVar6;
          return puVar4;
        }
        lVar9 = *(long *)(puVar3 + 2);
        puVar1 = (undefined8 *)(lVar9 + lVar7);
        lVar10 = *(long *)(param_1 + 8);
        puVar2 = (undefined8 *)(lVar10 + lVar7);
        uVar6 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar6;
        uVar6 = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[2] = uVar6;
        puVar1[4] = puVar2[4];
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) {
          puVar1[8] = 0;
        }
        else {
          FUN_108b88268();
          puVar1[8] = lVar5;
          if (lVar5 == 0) {
            func_0x000108b8c504();
            *param_3 = 0;
            return (undefined4 *)0x5;
          }
          _memcpy();
        }
        lVar9 = lVar9 + lVar7;
        lVar10 = lVar10 + lVar7;
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar10 + 0x30);
        *(undefined8 *)(lVar9 + 0x28) = uVar6;
        uVar6 = *(undefined8 *)(lVar10 + 0x34);
        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined8 *)(lVar9 + 0x34) = uVar6;
        if (*(long *)(lVar10 + 0x48) == 0) break;
        *(long *)(lVar9 + 0x48) = *(long *)(lVar10 + 0x48);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x50;
      }
      func_0x000108b8c504();
      *param_3 = 0;
      return (undefined4 *)0x2;
    }
    func_0x000108b8c504();
    *param_3 = 0;
  }
  return (undefined4 *)0x3;
}



/* Entry: 108b8a368; end: 108b8a467;  */

undefined8 FUN_108b8a368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108b8c1ac();
  if ((int)param_1 != 0) {
    FUN_108b8aea0(param_2,param_3);
  }
  return param_1;
}



/* Entry: 108b8a468; end: 108b8adaf;  */

/* WARNING: Removing unreachable block (ram,0x000108b885a8) */
/* WARNING: Type propagation algorithm not settling */

ushort * FUN_108b8a468(long param_1,ushort *param_2,ulong *param_3)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  ushort uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort **ppuVar15;
  ulong uVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *pcVar17;
  code *extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  uint extraout_w9;
  code *extraout_x9;
  char *extraout_x10;
  ushort *puVar18;
  ushort *puVar19;
  long *plVar20;
  ulong *puVar21;
  ulong uVar22;
  ushort *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ushort *puStack_250;
  undefined4 uStack_244;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long alStack_218 [3];
  ushort *puStack_200;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  byte abStack_168 [256];
  undefined8 uStack_68;
  
  lVar27 = param_1;
  func_0x000108b8c570();
  puVar14 = param_2 + 2;
  puVar13 = puVar14 + (ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8) * 2;
  uStack_68 = extraout_x8;
  if (*param_2 == 0xdebe) {
    while( true ) {
      iVar10 = (int)lVar27;
      uVar7 = puVar14 == puVar13;
      if (puVar13 <= puVar14) break;
      puVar23 = (ushort *)((long)puVar14 + 1);
      uVar6 = *puVar14;
      lVar26 = ((ulong)(byte)uVar6 & 0xf) + 1;
      puVar14 = (ushort *)((long)puVar23 + lVar26);
      uVar7 = puVar14 == puVar13;
      if (puVar13 <= puVar14 && !(bool)uVar7) goto LAB_108b8a5ec;
      bVar3 = (byte)uVar6 >> 4;
      puVar21 = (ulong *)(ulong)bVar3;
      uVar7 = bVar3 == 0xf;
      if ((bool)uVar7) break;
      func_0x000108b8c614();
      if (iVar10 != 0) goto LAB_108b8a5fc;
      lVar27 = *(long *)(param_1 + 0x70);
      param_2 = *(ushort **)(param_1 + 0x78);
      FUN_108b8c318();
      pbVar5 = abStack_168;
      if ((int)lVar27 != 0) {
        for (; puVar14 = puVar23, lVar26 != 0; lVar26 = lVar26 + -1) {
          *(byte *)puVar14 = (byte)*puVar14 ^ *pbVar5;
          pbVar5 = pbVar5 + 1;
          puVar23 = (ushort *)((long)puVar14 + 1);
        }
      }
      for (; (param_3 = puVar21, puVar14 < puVar13 && ((byte)*puVar14 == 0));
          puVar14 = (ushort *)((long)puVar14 + 1)) {
      }
    }
  }
  else {
    uVar7 = (*param_2 & 0xf0ff) == 0x10;
    if (!(bool)uVar7) {
LAB_108b8a5ec:
      puVar13 = (ushort *)0x15;
      goto LAB_108b8a600;
    }
    while (uVar7 = (ushort *)((long)puVar14 + 1U) == puVar13,
          (ushort *)((long)puVar14 + 1U) < puVar13) {
      puVar21 = (ulong *)(ulong)(byte)*puVar14;
      bVar3 = *(byte *)((long)puVar14 + 1);
      uVar22 = (ulong)bVar3;
      puVar23 = puVar14 + 1;
      puVar14 = (ushort *)((long)puVar23 + uVar22);
      uVar7 = puVar14 == puVar13;
      if (puVar13 <= puVar14 && !(bool)uVar7) goto LAB_108b8a5ec;
      func_0x000108b8c614();
      if ((int)lVar27 != 0) goto LAB_108b8a5fc;
      if (bVar3 != 0) {
        lVar27 = *(long *)(param_1 + 0x70);
        param_2 = *(ushort **)(param_1 + 0x78);
        FUN_108b8c318();
        param_3 = puVar21;
        pbVar5 = abStack_168;
        if ((int)lVar27 != 0) {
          for (; puVar14 = puVar23, uVar22 != 0; uVar22 = uVar22 - 1) {
            *(byte *)puVar14 = (byte)*puVar14 ^ pbVar5[1];
            puVar23 = (ushort *)((long)puVar14 + 1);
            pbVar5 = pbVar5 + 1;
          }
        }
      }
      for (; (puVar14 < puVar13 && ((byte)*puVar14 == 0)); puVar14 = (ushort *)((long)puVar14 + 1))
      {
      }
    }
  }
  puVar13 = (ushort *)0x0;
  goto LAB_108b8a600;
LAB_108b8a5fc:
  puVar13 = (ushort *)0x8;
LAB_108b8a600:
  func_0x000108b8c4e4(uStack_68);
  if ((bool)uVar7) {
    return puVar13;
  }
  ___stack_chk_fail();
  func_0x000108b8c570();
  alStack_218[0] = 0;
  plStack_240 = (long *)0x0;
  lStack_238 = 0;
  uVar7 = cRam000000011328ae70 == '\x01';
  uStack_1f0 = extraout_x8_00;
  if ((bool)uVar7) {
    func_0x000108b8c4ac();
  }
  uVar22 = *param_3;
  puVar14 = param_2;
  FUN_108b8a13c(param_2,uVar22);
  if ((int)puVar14 != 0) goto LAB_108b8a8c8;
  uVar7 = uVar22 == 0xc;
  if (uVar22 < 0xc) {
    puVar14 = (ushort *)0x2;
    goto LAB_108b8a8c8;
  }
  puVar23 = *(ushort **)puVar13;
  FUN_108b8add8(puVar23,*(undefined4 *)(param_2 + 4));
  if (puVar23 == (ushort *)0x0) {
    puVar23 = *(ushort **)(puVar13 + 4);
    if (puVar23 == (ushort *)0x0) {
      puVar14 = (ushort *)0xd;
      goto LAB_108b8a8c8;
    }
    func_0x000108b8c528();
    if ((bool)uVar7) {
      func_0x000108b8c4ac();
    }
    bVar4 = false;
    uVar24 = 0;
    uVar28 = 0;
    uVar22 = (ulong)((uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8);
    uStack_228 = uVar22;
    uStack_220 = uVar22;
  }
  else {
    puVar14 = (ushort *)(ulong)param_2[1];
    func_0x000108b8a3a4(puVar14,puVar23,&uStack_220,&uStack_228);
    uVar22 = uStack_220;
    iVar10 = (int)puVar14;
    uVar7 = iVar10 == 0x1b;
    if ((!(bool)uVar7) && (iVar10 != 0)) goto LAB_108b8a8c8;
    uVar7 = iVar10 == 0x1b;
    if ((bool)uVar7) {
      uVar24 = uStack_220 >> 0x10;
      bVar4 = true;
      uVar28 = uStack_220;
    }
    else {
      puVar14 = puVar23 + 0x14;
      FUN_108b89020(puVar14,uStack_228);
      if ((int)puVar14 != 0) goto LAB_108b8a8c8;
      bVar4 = false;
      uVar24 = 0;
      uVar28 = 0;
    }
  }
  func_0x000108b8c528();
  if ((bool)uVar7) {
    func_0x000108b8c4ac();
  }
  puVar14 = puVar23;
  FUN_108b8997c(puVar23,param_2,*param_3,&lStack_238,&plStack_240);
  uVar16 = uStack_228;
  lVar27 = lStack_238;
  plVar20 = plStack_240;
  if ((int)puVar14 != 0) goto LAB_108b8a8c8;
  uVar25 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
  uVar25 = uVar25 >> 0x20 | uVar25 << 0x20;
  bVar8 = (*(uint *)((long *)*plStack_240 + 3) & 0xfffffffe) == 6;
  if (bVar8) {
    func_0x000108b8c528();
    uVar7 = 0;
    if (bVar8) {
      FUN_108b889b4(3,&UNK_10f502f74);
      uVar7 = *extraout_x10 == '\x01';
      if ((bool)uVar7) {
        func_0x000108b8c4ac();
      }
    }
    puVar14 = *(ushort **)(plVar20[2] + 0x10);
    func_0x000108b8c238(plVar20,alStack_218 + 1,uVar22,param_2);
    iVar10 = (int)*plVar20;
    func_0x000108b8c598();
    if (iVar10 == 0) {
      lVar26 = plVar20[1];
      if (lVar26 != 0) {
        func_0x000108b8c77c();
        iVar10 = (int)lVar26;
        func_0x000108b8c534();
        if (iVar10 != 0) goto LAB_108b8a8c4;
      }
      func_0x000108b8c768();
      if ((extraout_w9 >> 4 & 1) == 0) {
        uVar24 = 0;
        uVar28 = uVar25;
      }
      else {
        func_0x000108b8c740();
        uVar28 = extraout_x8_01 + 4;
        uVar24 = uVar25;
      }
      lVar26 = (long)puVar14 + lVar27;
      uVar25 = (long)param_2 + (*param_3 - lVar26);
      uVar7 = uVar28 == uVar25;
      if (uVar25 <= uVar28 && !(bool)uVar7) {
LAB_108b8aa44:
        puVar14 = (ushort *)0x15;
        goto LAB_108b8a8c8;
      }
      puStack_250 = (ushort *)((*param_3 - lVar27) - (uVar28 - (long)param_2));
      uVar7 = puStack_250 == puVar14;
      if (puVar14 <= puStack_250) {
        iVar10 = (int)plVar20[9];
        FUN_108b88a84();
        uVar7 = iVar10 == 2;
        if ((bool)uVar7) {
          func_0x000108b8c608();
          if (extraout_x8_06 != 0) {
            puStack_200 = puVar13;
            func_0x000108b8c624();
            uStack_1f4 = 2;
            ppuVar15 = &puStack_200;
            pcVar17 = extraout_x8_07;
            goto LAB_108b8ac80;
          }
          goto LAB_108b8ac84;
        }
        uVar7 = iVar10 == 1;
        if (((bool)uVar7) && (func_0x000108b8c608(), extraout_x8_02 != 0)) {
          puStack_200 = puVar13;
          func_0x000108b8c624();
          uStack_1f4 = 1;
          (*extraout_x8_03)(&puStack_200);
        }
        iVar10 = (int)*plVar20;
        func_0x000108b8c700();
        if (iVar10 == 0) {
          puVar14 = (ushort *)*plVar20;
          func_0x000108b87100(puVar14,uVar28,&puStack_250);
          if (((int)puVar14 != 0) ||
             (((uVar24 != 0 && (plVar20[1] != 0)) &&
              (puVar14 = puVar23, FUN_108b8a468(puVar23,uVar24,plVar20), (int)puVar14 != 0))))
          goto LAB_108b8a8c8;
          if (*(int *)(puVar23 + 0x32) != 2) {
            if (*(int *)(puVar23 + 0x32) == 0) {
              puVar23[0x32] = 2;
              puVar23[0x33] = 0;
            }
            else {
              func_0x000108b8c608();
              if (extraout_x8_09 != 0) {
                puStack_200 = puVar13;
                func_0x000108b8c624();
                uStack_1f4 = 0;
                (*extraout_x8_10)(&puStack_200);
              }
            }
          }
          puVar14 = *(ushort **)(puVar13 + 4);
          uVar7 = puVar23 == puVar14;
          if (((bool)uVar7) &&
             ((FUN_108b8a198(puVar14,*(undefined4 *)(param_2 + 4),&puStack_200),
              puVar23 = puStack_200, (int)puVar14 != 0 || (func_0x000108b8c728(), (int)puVar14 != 0)
              ))) goto LAB_108b8a8c8;
          if (bVar4) {
            FUN_108b89100(puVar23 + 0x14,uVar22 >> 0x10,(uint)uVar22 & 0xffff);
            puVar23[0x40] = 0;
            puVar23[0x41] = 0;
            uVar16 = 0;
          }
          FUN_108b8906c(puVar23 + 0x14,uVar16);
          uVar22 = *param_3 - lVar26;
          goto LAB_108b8ad18;
        }
      }
    }
  }
  else {
    lVar27 = *(long *)(plStack_240[2] + 0x10);
    uVar2 = *(uint *)(*(long *)*plStack_240 + 0x50);
    uVar7 = 5 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x32U) == 0;
    if ((bool)uVar7) {
      alStack_218[1] = 0;
      alStack_218[2] = uVar25;
    }
    else {
      func_0x000108b8c77c();
    }
    iVar10 = (int)*plVar20;
    func_0x000108b8c598();
    if ((iVar10 == 0) &&
       ((puVar14 = (ushort *)plVar20[1], puVar14 == (ushort *)0x0 ||
        (func_0x000108b8c598(), (int)puVar14 == 0)))) {
      uStack_220 = uVar25 >> 0x10;
      if ((*(uint *)(puVar23 + 0x20) & 1) == 0) {
        puVar18 = (ushort *)0x0;
        puVar19 = (ushort *)0x0;
      }
      else {
        uVar22 = (ulong)*param_2 & 0xf;
        puVar19 = param_2 + uVar22 * 2 + 6;
        if ((*param_2 >> 4 & 1) == 0) {
          puVar18 = puVar19;
          puVar19 = (ushort *)0x0;
        }
        else {
          puVar18 = puVar19 + (ulong)((uint)(param_2[uVar22 * 2 + 7] >> 8) |
                                     (param_2[uVar22 * 2 + 7] & 0xff00ff) << 8) * 2 + 2;
        }
        lVar26 = (*param_3 - lStack_238) - lVar27;
        puVar1 = (ushort *)((long)param_2 + lVar26);
        uVar7 = puVar18 == puVar1;
        if (puVar1 < puVar18) goto LAB_108b8aa44;
        alStack_218[0] = (long)param_2 + (lVar26 - (long)puVar18);
      }
      if ((*(uint *)(puVar23 + 0x20) >> 1 & 1) != 0) {
        uVar22 = *param_3;
        lVar26 = plVar20[2];
        if (*(long *)(lVar26 + 0x20) != 0) {
          puVar14 = (ushort *)*plVar20;
          lStack_230 = *(long *)(lVar26 + 0x20);
          FUN_108b87098(puVar14,&puStack_200,&lStack_230);
          func_0x000108b8c528();
          if ((bool)uVar7) {
            func_0x000108b88ac4(&puStack_200,lStack_230);
            func_0x000108b8c48c();
            puVar14 = (ushort *)((ulong)puVar14 & 0xffffffff);
          }
          if ((int)puVar14 != 0) goto LAB_108b8a8c4;
          lVar26 = plVar20[2];
        }
        func_0x000108b8c4f8(lVar26);
        if ((int)puVar14 != 0) goto LAB_108b8a8c8;
        puVar14 = (ushort *)((long *)plVar20[2])[1];
        (**(code **)(*(long *)plVar20[2] + 0x20))(puVar14,param_2,(*param_3 - lStack_238) - lVar27);
        if ((int)puVar14 != 0) goto LAB_108b8a8c8;
        func_0x000108b8c66c(plVar20[2]);
        iVar10 = (int)puVar14;
        (*extraout_x9)();
        func_0x000108b8c528();
        uVar9 = 0;
        if ((bool)uVar7) {
          func_0x000108b88ac4(&puStack_200,lVar27);
          func_0x000108b8c4ac();
          uVar9 = cRam000000011328ae70 == '\x01';
          if ((bool)uVar9) {
            func_0x000108b88ac4((long)param_2 + -lVar27 + uVar22,lVar27);
            func_0x000108b8c4ac();
          }
        }
        uVar7 = uVar9;
        if (iVar10 == 0) {
          ppuVar15 = &puStack_200;
          func_0x000108b88e18(ppuVar15,(long)param_2 + -lVar27 + uVar22,lVar27);
          if ((int)ppuVar15 != 0) goto LAB_108b8aa5c;
        }
        puVar14 = (ushort *)0x7;
        goto LAB_108b8a8c8;
      }
LAB_108b8aa5c:
      iVar10 = (int)plVar20[9];
      FUN_108b88a84();
      uVar7 = iVar10 == 2;
      if ((bool)uVar7) {
        if (PTR_DAT_11328ae80 != (undefined *)0x0) {
          puStack_250 = puVar13;
          func_0x000108b8c624();
          uStack_244 = 2;
          ppuVar15 = &puStack_250;
          pcVar17 = extraout_x8_05;
LAB_108b8ac80:
          (*pcVar17)(ppuVar15);
        }
LAB_108b8ac84:
        puVar14 = (ushort *)0xf;
        goto LAB_108b8a8c8;
      }
      uVar7 = iVar10 == 1;
      if (((bool)uVar7) && (PTR_DAT_11328ae80 != (undefined *)0x0)) {
        puStack_250 = puVar13;
        func_0x000108b8c624();
        uStack_244 = 1;
        (*extraout_x8_04)(&puStack_250);
      }
      if (((puVar19 != (ushort *)0x0) && (plVar20[1] != 0)) &&
         (puVar14 = puVar23, FUN_108b8a468(puVar23,puVar19,plVar20), (int)puVar14 != 0))
      goto LAB_108b8a8c8;
      if (puVar18 != (ushort *)0x0) {
        lVar26 = *plStack_240;
        func_0x000108b87100(lVar26,puVar18,alStack_218);
        if ((int)lVar26 != 0) goto LAB_108b8a8c4;
      }
      if (*(int *)(puVar23 + 0x32) != 2) {
        if (*(int *)(puVar23 + 0x32) == 0) {
          puVar23[0x32] = 2;
          puVar23[0x33] = 0;
        }
        else if (PTR_DAT_11328ae80 != (undefined *)0x0) {
          puStack_250 = puVar13;
          func_0x000108b8c624();
          uStack_244 = 0;
          (*extraout_x8_08)(&puStack_250);
        }
      }
      puVar14 = *(ushort **)(puVar13 + 4);
      uVar7 = puVar23 == puVar14;
      if (((bool)uVar7) &&
         ((FUN_108b8a198(puVar14,*(undefined4 *)(param_2 + 4),&puStack_250), puVar23 = puStack_250,
          (int)puVar14 != 0 || (func_0x000108b8c728(), (int)puVar14 != 0)))) goto LAB_108b8a8c8;
      uVar22 = uStack_228;
      if (bVar4) {
        FUN_108b89100(puVar23 + 0x14,uVar24,(uint)uVar28 & 0xffff);
        puVar23[0x40] = 0;
        puVar23[0x41] = 0;
        uVar22 = 0;
      }
      FUN_108b8906c(puVar23 + 0x14,uVar22);
      uVar22 = (*param_3 - lStack_238) - lVar27;
LAB_108b8ad18:
      puVar14 = (ushort *)0x0;
      *param_3 = uVar22;
      goto LAB_108b8a8c8;
    }
  }
LAB_108b8a8c4:
  puVar14 = (ushort *)0x8;
LAB_108b8a8c8:
  func_0x000108b8c4e4(uStack_1f0);
  if ((bool)uVar7) {
    return puVar14;
  }
  ___stack_chk_fail();
  FUN_108b88348();
  if ((int)puVar14 == 0) {
    uVar11 = 0x11328ae70;
    if (PTR_DAT_11328ae78 != (undefined *)0x0) {
      plVar20 = (long *)0x113828740;
      do {
        if (*plVar20 == 0) {
          puVar12 = (undefined8 *)0x10;
          FUN_108b88268();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = 0x11328ae70;
            puVar12[1] = puRam0000000113828740;
            puRam0000000113828740 = puVar12;
            return (ushort *)0x0;
          }
          return (ushort *)0x3;
        }
        plVar20 = (long *)(*plVar20 + 8);
        func_0x000108b88974();
      } while ((int)uVar11 != 0);
    }
    return (ushort *)0x2;
  }
  return puVar14;
}



/* Entry: 108b8adb0; end: 108b8add7;  */

/* WARNING: Removing unreachable block (ram,0x000108b885a8) */

undefined8 FUN_108b8adb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  FUN_108b88348();
  if ((int)param_1 != 0) {
    return param_1;
  }
  uVar1 = 0x11328ae70;
  if (PTR_DAT_11328ae78 != (undefined *)0x0) {
    plVar3 = (long *)0x113828740;
    do {
      if (*plVar3 == 0) {
        puVar2 = (undefined8 *)0x10;
        FUN_108b88268();
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0x11328ae70;
          puVar2[1] = puRam0000000113828740;
          puRam0000000113828740 = puVar2;
          return 0;
        }
        return 3;
      }
      plVar3 = (long *)(*plVar3 + 8);
      func_0x000108b88974();
    } while ((int)uVar1 != 0);
  }
  return 2;
}



/* Entry: 108b8add8; end: 108b8ae0f;  */

undefined8 FUN_108b8add8(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  puVar1 = (undefined8 *)(*param_1 + 8);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(puVar1 + -1) == param_2) break;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  }
  return *puVar1;
}



/* Entry: 108b8ae10; end: 108b8ae6b;  */

void FUN_108b8ae10(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  FUN_108b8ae6c(uVar2,param_1[1]);
  if (((int)uVar2 == 0) &&
     ((lVar3 = param_1[1], lVar3 == 0 || (FUN_108b8aea0(lVar3,0), (int)lVar3 == 0)))) {
    iVar1 = (int)*param_1;
    FUN_108b8b0f0();
    if (iVar1 == 0) {
      func_0x000108b8c6e0();
    }
  }
  return;
}



/* Entry: 108b8ae6c; end: 108b8ae9f;  */

ulong FUN_108b8ae6c(undefined8 param_1,undefined8 param_2)

{
  ulong uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_108b8c13c(param_1,FUN_108b8c348,&uStack_28);
  return uStack_28 & 0xffffffff;
}



/* Entry: 108b8aea0; end: 108b8b0ef;  */

void FUN_108b8aea0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  func_0x000108b8c698();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar6 = 0x48;
    for (uVar5 = 0; uVar5 < *(ulong *)(unaff_x19 + 0x10); uVar5 = uVar5 + 1) {
      if (((unaff_x20 == 0) || (*(ulong *)(unaff_x19 + 0x10) != *(ulong *)(unaff_x20 + 0x10))) ||
         (*(long *)(unaff_x20 + 8) == 0)) {
        puVar7 = (undefined8 *)0x0;
        plVar2 = *(long **)(lVar4 + lVar6 + -0x48);
        bVar8 = true;
joined_r0x000108b8af20:
        if (plVar2 != (long *)0x0) {
          if (*plVar2 == 0) {
            return;
          }
          func_0x000108b8c5c0();
          if ((int)plVar2 != 0) {
            return;
          }
        }
        if (!bVar8) goto LAB_108b8af4c;
        puVar3 = *(undefined8 **)(lVar4 + lVar6 + -0x38);
        bVar8 = true;
joined_r0x000108b8af44:
        if ((puVar3 != (undefined8 *)0x0) && (func_0x000108b8c5c0(*puVar3), (int)puVar3 != 0)) {
          return;
        }
        if (!bVar8) goto LAB_108b8af8c;
        plVar2 = *(long **)(lVar4 + lVar6 + -0x40);
        bVar8 = true;
joined_r0x000108b8afa4:
        if (plVar2 != (long *)0x0) {
          if (*plVar2 == 0) {
            return;
          }
          func_0x000108b8c5c0();
          if ((int)plVar2 != 0) {
            return;
          }
        }
        if (!bVar8) goto LAB_108b8afd0;
        plVar2 = *(long **)(lVar4 + lVar6 + -0x30);
        bVar8 = true;
joined_r0x000108b8afe8:
        if (plVar2 != (long *)0x0) {
          if (*plVar2 == 0) {
            return;
          }
          func_0x000108b8c5c0();
          if ((int)plVar2 != 0) {
            return;
          }
        }
        if (!bVar8) goto LAB_108b8b010;
        puVar3 = *(undefined8 **)(lVar4 + lVar6 + -0x28);
        bVar8 = true;
LAB_108b8b028:
        if ((puVar3 != (undefined8 *)0x0) && (func_0x000108b8c5c0(*puVar3), (int)puVar3 != 0)) {
          return;
        }
      }
      else {
        puVar7 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar6 + -0x48);
        plVar2 = *(long **)(lVar4 + lVar6 + -0x48);
        if (plVar2 != (long *)*puVar7) {
          bVar8 = false;
          goto joined_r0x000108b8af20;
        }
LAB_108b8af4c:
        puVar3 = *(undefined8 **)(lVar4 + lVar6 + -0x38);
        if (puVar3 != (undefined8 *)puVar7[2]) {
          bVar8 = false;
          goto joined_r0x000108b8af44;
        }
LAB_108b8af8c:
        plVar2 = *(long **)(lVar4 + lVar6 + -0x40);
        if (plVar2 != (long *)puVar7[1]) {
          bVar8 = false;
          goto joined_r0x000108b8afa4;
        }
LAB_108b8afd0:
        plVar2 = *(long **)(lVar4 + lVar6 + -0x30);
        if (plVar2 != (long *)puVar7[3]) {
          bVar8 = false;
          goto joined_r0x000108b8afe8;
        }
LAB_108b8b010:
        bVar8 = false;
        puVar3 = *(undefined8 **)(lVar4 + lVar6 + -0x28);
        if (puVar3 != (undefined8 *)puVar7[4]) goto LAB_108b8b028;
      }
      lVar1 = lVar4 + lVar6;
      *(undefined4 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      if (*(long *)(lVar1 + -8) != 0) {
        func_0x00010ae45444(*(long *)(lVar1 + -8),*(undefined8 *)(unaff_x19 + 0x20));
        func_0x000108b882f0(*(undefined8 *)(lVar1 + -8));
        *(undefined8 *)(lVar1 + -8) = 0;
      }
      lVar4 = *(long *)(lVar4 + lVar6);
      if (bVar8) {
        if (lVar4 != 0) {
LAB_108b8b090:
          func_0x000108b882f0();
        }
      }
      else if ((lVar4 != 0) && (lVar4 != puVar7[9])) goto LAB_108b8b090;
      lVar4 = *(long *)(unaff_x19 + 8);
      lVar6 = lVar6 + 0x50;
    }
    func_0x000108b882f0(lVar4);
  }
  FUN_108b88d2c(unaff_x19 + 0x30);
  lVar4 = *(long *)(unaff_x19 + 0x70);
  if (unaff_x20 == 0) {
    if (lVar4 == 0) goto LAB_108b8b0d8;
  }
  else if ((lVar4 == 0) || (lVar4 == *(long *)(unaff_x20 + 0x70))) goto LAB_108b8b0d8;
  func_0x000108b882f0();
LAB_108b8b0d8:
  func_0x000108b8c6e0();
  return;
}



/* Entry: 108b8b0f0; end: 108b8b127;  */

undefined8 FUN_108b8b0f0(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    return 1;
  }
  func_0x000108b882f0(*param_1);
  func_0x000108b8c6e0();
  return 0;
}



/* Entry: 108b8b128; end: 108b8b1fb;  */

long ****** FUN_108b8b128(long ******param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long ******pppppplVar3;
  long *****ppppplStack_38;
  
  if (param_1 == (long ******)0x0) {
LAB_108b8b1c4:
    pppppplVar3 = (long ******)0x2;
  }
  else {
    pppppplVar3 = param_1;
    func_0x000108b8c70c();
    if ((int)pppppplVar3 != 0) {
      return pppppplVar3;
    }
    pppppplVar3 = &ppppplStack_38;
    FUN_108b8b288(pppppplVar3,param_2);
    if ((int)pppppplVar3 != 0) {
      return pppppplVar3;
    }
    pppppplVar3 = (long ******)ppppplStack_38;
    FUN_108b8b470(ppppplStack_38,param_2);
    if ((int)pppppplVar3 != 0) {
      func_0x000108b8c510();
      return pppppplVar3;
    }
    iVar1 = *param_2;
    if (iVar1 == 1) {
      pppppplVar3 = (long ******)*param_1;
      FUN_108b8a368(pppppplVar3,ppppplStack_38,param_1[1]);
      if ((int)pppppplVar3 != 0) {
        return pppppplVar3;
      }
    }
    else {
      if (iVar1 == 2) {
        if (param_1[1] != (long *****)0x0) goto LAB_108b8b1c0;
        param_1[1] = ppppplStack_38;
        uVar2 = 2;
      }
      else {
        if ((iVar1 != 3) || (param_1[1] != (long *****)0x0)) {
LAB_108b8b1c0:
          func_0x000108b8c510();
          goto LAB_108b8b1c4;
        }
        param_1[1] = ppppplStack_38;
        uVar2 = 1;
      }
      *(undefined4 *)((long)ppppplStack_38 + 100) = uVar2;
    }
    pppppplVar3 = (long ******)0x0;
  }
  return pppppplVar3;
}



/* Entry: 108b8b1fc; end: 108b8b287;  */

undefined8 FUN_108b8b1fc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      if (0xffffffffffffffef < *(long *)(param_1 + 0x78) - 0x11U) {
        if (*(char *)(param_1 + 0x80) == '\x01') {
          if (*(long *)(param_1 + 0x88) - 0x81U < 0xffffffffffffff80) {
            return 2;
          }
        }
        else if (*(long *)(param_1 + 0x88) != 0) {
          return 2;
        }
        lVar1 = 0;
        while( true ) {
          if (*(long *)(param_1 + 0x78) == lVar1) {
            return 0;
          }
          plVar2 = *(long **)(*(long *)(param_1 + 0x70) + lVar1 * 8);
          if (*plVar2 == 0) break;
          if ((*(char *)(param_1 + 0x80) != '\0') && (plVar2[1] == 0)) {
            return 2;
          }
          lVar1 = lVar1 + 1;
        }
        return 2;
      }
    }
    else if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (*(long *)(param_1 + 0x88) == 0)) {
      return 0;
    }
  }
  return 2;
}



/* Entry: 108b8b288; end: 108b8b46f;  */

long * FUN_108b8b288(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  plVar8 = param_1;
  func_0x000108b8c70c();
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  lVar2 = 0x88;
  FUN_108b88268();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    if (*(long *)(param_2 + 0x68) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x78);
    }
    else {
      uVar6 = 1;
    }
    *(undefined8 *)(lVar2 + 0x10) = uVar6;
    lVar5 = lVar2;
    func_0x000108b8c6f4();
    *(long *)(lVar2 + 8) = lVar5;
    if (lVar5 != 0) {
      uVar9 = 0xffffffffffffffff;
      lVar5 = 0;
      do {
        uVar7 = *(ulong *)(lVar2 + 0x10);
        uVar9 = uVar9 + 1;
        if (uVar7 <= uVar9) {
          if ((*(long *)(param_2 + 0xa0) == 0) || (lVar5 = *(long *)(param_2 + 0xa8), lVar5 == 0)) {
            lVar5 = 8;
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined8 *)(*(long *)(lVar2 + 8) + lVar5) = 0;
              lVar5 = lVar5 + 0x50;
            }
            *(undefined8 *)(lVar2 + 0x70) = 0;
            *(undefined8 *)(lVar2 + 0x78) = 0;
            return (long *)0x0;
          }
          FUN_108b88268();
          *(long *)(lVar2 + 0x70) = lVar5;
          if (lVar5 != 0) {
            _memcpy();
            *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0xa8);
            uVar1 = *(uint *)(param_2 + 8);
            plVar8 = (long *)(ulong)uVar1;
            if (uVar1 == 6) {
              plVar8 = (long *)0x1;
              uVar6 = 0x1e;
            }
            else if (uVar1 == 7) {
              plVar8 = (long *)0x5;
              uVar6 = 0x2e;
            }
            else {
              uVar6 = *(undefined8 *)(param_2 + 0x10);
            }
            uVar9 = 0xffffffffffffffff;
            lVar5 = 8;
            do {
              uVar9 = uVar9 + 1;
              if (*(ulong *)(lVar2 + 0x10) <= uVar9) {
                return (long *)0x0;
              }
              plVar3 = plVar8;
              FUN_108b88848(plVar8,*(long *)(lVar2 + 8) + lVar5,uVar6,0);
              lVar5 = lVar5 + 0x50;
            } while ((int)plVar3 == 0);
LAB_108b8b454:
            func_0x000108b8c510();
            return plVar3;
          }
          break;
        }
        lVar10 = *(long *)(lVar2 + 8);
        plVar3 = (long *)(ulong)*(uint *)(param_2 + 8);
        FUN_108b88848(plVar3,lVar10 + lVar5,*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x28));
        if ((int)plVar3 != 0) goto LAB_108b8b454;
        plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x18);
        FUN_108b888d0(plVar3,lVar10 + lVar5 + 0x10,*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)(param_2 + 0x28));
        if ((int)plVar3 != 0) goto LAB_108b8b454;
        plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x38);
        FUN_108b88848(plVar3,lVar10 + lVar5 + 0x18,*(undefined8 *)(param_2 + 0x40),
                      *(undefined8 *)(param_2 + 0x58));
        if ((int)plVar3 != 0) goto LAB_108b8b454;
        plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x48);
        FUN_108b888d0(plVar3,lVar10 + lVar5 + 0x20,*(undefined8 *)(param_2 + 0x50),
                      *(undefined8 *)(param_2 + 0x58));
        if ((int)plVar3 != 0) goto LAB_108b8b454;
        *(undefined8 *)(lVar10 + lVar5 + 0x40) = 0;
        lVar4 = 0x10;
        FUN_108b88268();
        *(long *)(lVar10 + lVar5 + 0x48) = lVar4;
        lVar5 = lVar5 + 0x50;
      } while (lVar4 != 0);
    }
    func_0x000108b8c510();
  }
  return (long *)0x3;
}



/* Entry: 108b8b470; end: 108b8b5f7;  */

uint * FUN_108b8b470(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 in_ZR;
  uint *puVar3;
  long lVar4;
  uint *unaff_x19;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long alStack_50 [2];
  
  func_0x000108b8c698();
  func_0x000108b8c70c();
  if ((int)param_1 != 0) {
    return param_1;
  }
  func_0x000108b8c4d4();
  if ((bool)in_ZR) {
    func_0x000108b8c53c();
    func_0x000108b8c4ac();
  }
  lVar4 = *(long *)(unaff_x20 + 0x90);
  if (lVar4 == 0) {
    lVar4 = 0x80;
  }
  else if (lVar4 - 0x8000U < 0xffffffffffff8040) {
    return (uint *)0x2;
  }
  puVar3 = unaff_x19 + 10;
  FUN_108b88fdc(puVar3,lVar4);
  if ((int)puVar3 != 0) {
    return puVar3;
  }
  uVar2 = (*(uint *)(unaff_x20 + 4) & 0xff00ff00) >> 8 | (*(uint *)(unaff_x20 + 4) & 0xff00ff) << 8;
  *unaff_x19 = uVar2 >> 0x10 | uVar2 << 0x10;
  unaff_x19[0x20] = 0;
  unaff_x19[0x10] = *(uint *)(unaff_x20 + 0x30);
  unaff_x19[0x18] = *(uint *)(unaff_x20 + 0x60);
  unaff_x19[0x19] = 0;
  unaff_x19[0x12] = 0;
  unaff_x19[0x14] = 0;
  unaff_x19[0x15] = 0;
  unaff_x19[0x16] = 0;
  unaff_x19[0x17] = 0;
  *(undefined1 *)(unaff_x19 + 0x1a) = *(undefined1 *)(unaff_x20 + 0x98);
  lVar4 = *(long *)(unaff_x20 + 0x68);
  if (lVar4 == 0) {
    if (*(ulong *)(unaff_x20 + 0x78) < 0x11) {
      cVar1 = *(char *)(unaff_x20 + 0x80);
      lVar4 = *(long *)(unaff_x20 + 0x88);
      if ((cVar1 != '\x01') || (lVar4 != 0)) {
        lVar5 = 0;
        uVar6 = 0;
        *(ulong *)(unaff_x19 + 4) = *(ulong *)(unaff_x20 + 0x78);
        *(char *)(unaff_x19 + 6) = cVar1;
        *(long *)(unaff_x19 + 8) = lVar4;
        do {
          if (*(ulong *)(unaff_x19 + 4) <= uVar6) {
            return (uint *)0x0;
          }
          puVar3 = (uint *)(*(long *)(unaff_x19 + 2) + lVar5);
          FUN_108b8914c(puVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x70) + uVar6 * 8),
                        *(undefined8 *)(unaff_x19 + 8));
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x50;
        } while ((int)puVar3 == 0);
        goto LAB_108b8b598;
      }
    }
  }
  else if ((*(byte *)(unaff_x20 + 0x80) & 1) == 0) {
    unaff_x19[4] = 1;
    unaff_x19[5] = 0;
    *(undefined1 *)(unaff_x19 + 6) = 0;
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    alStack_50[1] = 0;
    puVar3 = *(uint **)(unaff_x19 + 2);
    alStack_50[0] = lVar4;
    FUN_108b8914c(puVar3,alStack_50,0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    goto LAB_108b8b598;
  }
  puVar3 = (uint *)0x2;
LAB_108b8b598:
  FUN_108b88d2c(unaff_x19 + 0xc);
  return puVar3;
}



/* Entry: 108b8b5f8; end: 108b8b693;  */

undefined8 * FUN_108b8b5f8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x2;
  }
  else {
    func_0x000108b8c698();
    if ((param_2 == 0) || (puVar2 = unaff_x20, FUN_108b8b1fc(), (int)puVar2 == 0)) {
      puVar1 = (undefined8 *)0x18;
      FUN_108b88268();
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x3;
      }
      else {
        *unaff_x19 = puVar1;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar2 = puVar1;
        FUN_108b8b694();
        if ((int)puVar2 == 0) {
          for (; unaff_x20 != (undefined8 *)0x0; unaff_x20 = (undefined8 *)unaff_x20[0x16]) {
            puVar2 = puVar1;
            FUN_108b8b128(puVar1,unaff_x20);
            if ((int)puVar2 != 0) goto LAB_108b8b648;
          }
          puVar2 = (undefined8 *)0x0;
        }
        else {
LAB_108b8b648:
          FUN_108b8ae10(*unaff_x19);
          *unaff_x19 = 0;
        }
      }
    }
  }
  return puVar2;
}



/* Entry: 108b8b694; end: 108b8b6ef;  */

undefined8 FUN_108b8b694(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)0x18;
  FUN_108b88268();
  if (plVar1 != (long *)0x0) {
    lVar2 = 0x20;
    FUN_108b88268();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      plVar1[2] = 0;
      plVar1[1] = 2;
      *param_1 = (long)plVar1;
      return 0;
    }
    func_0x000108b882f0(plVar1);
  }
  return 3;
}



/* Entry: 108b8b6f0; end: 108b8b757;  */

long * FUN_108b8b6f0(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  lVar4 = *param_1;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  lVar5 = lVar4;
  FUN_108b8add8(lVar4,uVar2 >> 0x10 | uVar2 << 0x10);
  if (lVar5 == 0) {
    return (long *)0xd;
  }
  FUN_108b8b758(lVar4,lVar5);
  func_0x000108b8c698(lVar5,param_1[1]);
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 != 0) {
    lVar4 = 0x48;
    for (uVar6 = 0; uVar6 < *(ulong *)(unaff_x19 + 0x10); uVar6 = uVar6 + 1) {
      if (((unaff_x20 == 0) || (*(ulong *)(unaff_x19 + 0x10) != *(ulong *)(unaff_x20 + 0x10))) ||
         (*(long *)(unaff_x20 + 8) == 0)) {
        puVar7 = (undefined8 *)0x0;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x48);
        bVar8 = true;
joined_r0x000108b8af20:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8af4c;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x38);
        bVar8 = true;
joined_r0x000108b8af44:
        if ((plVar3 != (long *)0x0) && (func_0x000108b8c5c0(*plVar3), (int)plVar3 != 0)) {
          return plVar3;
        }
        if (!bVar8) goto LAB_108b8af8c;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x40);
        bVar8 = true;
joined_r0x000108b8afa4:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8afd0;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x30);
        bVar8 = true;
joined_r0x000108b8afe8:
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 0) {
            return (long *)0x2;
          }
          func_0x000108b8c5c0();
          if ((int)plVar3 != 0) {
            return plVar3;
          }
        }
        if (!bVar8) goto LAB_108b8b010;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x28);
        bVar8 = true;
LAB_108b8b028:
        if ((plVar3 != (long *)0x0) && (func_0x000108b8c5c0(*plVar3), (int)plVar3 != 0)) {
          return plVar3;
        }
      }
      else {
        puVar7 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar4 + -0x48);
        plVar3 = *(long **)(lVar5 + lVar4 + -0x48);
        if (plVar3 != (long *)*puVar7) {
          bVar8 = false;
          goto joined_r0x000108b8af20;
        }
LAB_108b8af4c:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x38);
        if (plVar3 != (long *)puVar7[2]) {
          bVar8 = false;
          goto joined_r0x000108b8af44;
        }
LAB_108b8af8c:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x40);
        if (plVar3 != (long *)puVar7[1]) {
          bVar8 = false;
          goto joined_r0x000108b8afa4;
        }
LAB_108b8afd0:
        plVar3 = *(long **)(lVar5 + lVar4 + -0x30);
        if (plVar3 != (long *)puVar7[3]) {
          bVar8 = false;
          goto joined_r0x000108b8afe8;
        }
LAB_108b8b010:
        bVar8 = false;
        plVar3 = *(long **)(lVar5 + lVar4 + -0x28);
        if (plVar3 != (long *)puVar7[4]) goto LAB_108b8b028;
      }
      lVar1 = lVar5 + lVar4;
      *(undefined4 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      if (*(long *)(lVar1 + -8) != 0) {
        func_0x00010ae45444(*(long *)(lVar1 + -8),*(undefined8 *)(unaff_x19 + 0x20));
        func_0x000108b882f0(*(undefined8 *)(lVar1 + -8));
        *(undefined8 *)(lVar1 + -8) = 0;
      }
      lVar5 = *(long *)(lVar5 + lVar4);
      if (bVar8) {
        if (lVar5 != 0) {
LAB_108b8b090:
          func_0x000108b882f0();
        }
      }
      else if ((lVar5 != 0) && (lVar5 != puVar7[9])) goto LAB_108b8b090;
      lVar5 = *(long *)(unaff_x19 + 8);
      lVar4 = lVar4 + 0x50;
    }
    func_0x000108b882f0(lVar5);
  }
  FUN_108b88d2c(unaff_x19 + 0x30);
  lVar5 = *(long *)(unaff_x19 + 0x70);
  if (unaff_x20 == 0) {
    if (lVar5 == 0) goto LAB_108b8b0d8;
  }
  else if ((lVar5 == 0) || (lVar5 == *(long *)(unaff_x20 + 0x70))) goto LAB_108b8b0d8;
  func_0x000108b882f0();
LAB_108b8b0d8:
  func_0x000108b8c6e0();
  return (long *)0x0;
}



/* Entry: 108b8b758; end: 108b8b7cb;  */

void FUN_108b8b758(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = param_1[2];
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*param_1 + lVar1) == *param_2) break;
    lVar1 = lVar1 + 0x10;
    lVar2 = lVar2 + -1;
  }
  lVar2 = *param_1 + lVar1;
  _memmove(lVar2,lVar2 + 0x10,(param_1[2] * 0x10 - lVar1) + -0x10);
  param_1[2] = param_1[2] + -1;
  return;
}



/* Entry: 108b8b7cc; end: 108b8c13b;  */

long FUN_108b8b7cc(uint *param_1,long param_2,ulong *param_3,ulong param_4)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint extraout_w8;
  code *extraout_x8;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lStack_90;
  uint uStack_84;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  long lStack_70;
  long lStack_68;
  
  if (*param_3 < 8) {
    return 2;
  }
  uVar3 = *(undefined4 *)(param_2 + 4);
  puVar11 = *(uint **)param_1;
  FUN_108b8add8(puVar11,uVar3);
  if (puVar11 == (uint *)0x0) {
    lVar17 = *(long *)(param_1 + 2);
    if (lVar17 == 0) {
      return 0xd;
    }
    FUN_108b8a198(lVar17,uVar3,&puStack_80);
    puVar11 = puStack_80;
    if ((int)lVar17 != 0) {
      return lVar17;
    }
    lVar17 = *(long *)param_1;
    FUN_108b8a368(lVar17,puStack_80,*(undefined8 *)(param_1 + 2));
    if ((int)lVar17 != 0) {
      return lVar17;
    }
  }
  if (puVar11[0x19] != 1) {
    if (puVar11[0x19] == 0) {
      puVar11[0x19] = 1;
    }
    else {
      func_0x000108b8c608();
      if (extraout_x8 != (code *)0x0) {
        uVar20 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
        uStack_78 = uVar20 >> 0x10 | uVar20 << 0x10;
        uStack_74 = 0;
        puStack_80 = param_1;
        (*extraout_x8)(&puStack_80);
      }
    }
  }
  cVar5 = (char)puVar11[6];
  if (cVar5 == '\x01') {
    if (*(ulong *)(puVar11 + 4) <= param_4) {
      return 0x19;
    }
    plVar16 = (long *)(*(long *)(puVar11 + 2) + param_4 * 0x50);
  }
  else {
    plVar16 = *(long **)(puVar11 + 2);
  }
  if ((*(uint *)(*plVar16 + 0x18) & 0xfffffffe) == 6) {
    lStack_70 = *(long *)(plVar16[4] + 0x10);
    uVar18 = *param_3;
    lStack_68 = uVar18 - 8;
    if ((puVar11[0x18] & 1) == 0) {
      lVar17 = 0;
      uVar20 = 0;
      lStack_68 = 0;
    }
    else {
      lVar17 = param_2 + 8;
      uVar20 = 0x80;
    }
    puVar1 = (uint *)(param_2 + uVar18 + lStack_70);
    if (cVar5 == '\0') {
      lVar19 = 4;
    }
    else {
      func_0x000108b8c654(puVar1 + 1);
      lVar19 = *(long *)(puVar11 + 8) + 4;
      uVar18 = *param_3;
    }
    uVar4 = puVar11[0x12];
    bVar8 = uVar4 == 0x7ffffffe;
    if (0x7ffffffe < uVar4) {
      return 0xf;
    }
    uVar4 = uVar4 + 1;
    puVar11[0x12] = uVar4;
    uVar6 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x10 | uVar20;
    func_0x000108b8c4d4();
    if (bVar8) {
      func_0x000108b8c53c();
      func_0x000108b8c49c();
    }
    *puVar1 = uVar20;
    plVar12 = plVar16;
    FUN_108b8c388(plVar16,&puStack_80,uVar4,*(undefined4 *)(param_2 + 4));
    if ((int)plVar12 == 0) {
      lVar13 = plVar16[3];
      func_0x000108b8c534(lVar13,&puStack_80);
      if ((int)lVar13 == 0) {
        lVar13 = plVar16[3];
        if (lVar17 == 0) {
          func_0x000108b8714c(lVar13,param_2,*param_3);
          if ((int)lVar13 != 0) {
            return 8;
          }
        }
        else {
          func_0x000108b8714c(lVar13,param_2,8);
          if ((int)lVar13 != 0) {
            return 8;
          }
        }
        lVar13 = plVar16[3];
        uStack_84 = uVar20;
        func_0x000108b8714c(lVar13,&uStack_84,4);
        if ((int)lVar13 == 0) {
          if (lVar17 == 0) {
            lStack_90 = 0;
            lVar13 = plVar16[3];
            plVar12 = &lStack_90;
            lVar17 = 0;
          }
          else {
            lVar13 = plVar16[3];
            plVar12 = &lStack_68;
          }
          func_0x000108b870e0(lVar13,lVar17,plVar12);
          if ((int)lVar13 == 0) {
            lVar17 = plVar16[3];
            func_0x000108b87120(lVar17,param_2 + uVar18,&lStack_70);
            if ((int)lVar17 == 0) {
              uVar18 = lStack_70 + lVar19 + *param_3;
              goto LAB_108b8bc00;
            }
          }
        }
      }
    }
  }
  else {
    lVar17 = *(long *)(plVar16[4] + 0x10);
    uVar18 = *param_3;
    lStack_68 = uVar18 - 8;
    if ((puVar11[0x18] & 1) == 0) {
      lVar19 = 0;
      uVar20 = 0;
      lStack_68 = 0;
    }
    else {
      lVar19 = param_2 + 8;
      uVar20 = 0x80;
    }
    puVar1 = (uint *)(param_2 + uVar18);
    if (cVar5 == '\0') {
      lVar13 = 0;
    }
    else {
      func_0x000108b8c654(puVar1 + 1);
      lVar13 = *(long *)(puVar11 + 8);
      uVar18 = *param_3;
    }
    if (0x7ffffffe < puVar11[0x12]) {
      return 0xf;
    }
    uVar4 = puVar11[0x12] + 1;
    puVar11[0x12] = uVar4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar7 = cRam000000011328ae70 != '\0';
    uVar9 = cRam000000011328ae70 == '\x01';
    if ((bool)uVar9) {
      func_0x000108b8c49c();
    }
    *puVar1 = uVar6 | uVar20;
    iVar10 = (int)plVar16[3];
    func_0x000108b8c67c();
    uVar9 = (bool)uVar7 && !(bool)uVar9 || (1 << (ulong)(extraout_w8 & 0x1f) & 0x32U) == 0;
    if ((bool)uVar9) {
      puStack_80 = (uint *)0x0;
      uStack_78 = 0;
      uStack_74 = uVar6;
    }
    else {
      puStack_80 = (uint *)((ulong)*(uint *)(param_2 + 4) << 0x20);
      uStack_78 = (uVar4 >> 0x10) << 0x10;
      uStack_74 = uVar4 & 0xffff;
    }
    func_0x000108b8c534();
    if (iVar10 == 0) {
      lVar2 = param_2 + lVar13 + uVar18;
      lVar14 = plVar16[3];
      puStack_80 = *(uint **)(plVar16[4] + 0x20);
      FUN_108b87098(lVar14,lVar2 + 4,&puStack_80);
      lVar15 = lVar14;
      func_0x000108b8c4d4();
      if ((bool)uVar9) {
        lVar15 = lVar2 + 4;
        func_0x000108b88ac4(lVar15,puStack_80);
        func_0x000108b8c48c();
      }
      if ((int)lVar14 == 0) {
        if (lVar19 != 0) {
          lVar15 = plVar16[3];
          func_0x000108b870e0(lVar15,lVar19,&lStack_68);
          if ((int)lVar15 != 0) {
            return 8;
          }
        }
        func_0x000108b8c4f8(plVar16[4]);
        if ((int)lVar15 != 0) {
          return lVar15;
        }
        plVar16 = (long *)plVar16[4];
        lVar19 = plVar16[1];
        (**(code **)(*plVar16 + 0x18))(lVar19,param_2,*param_3 + 4,plVar16[2],lVar2 + 4);
        func_0x000108b8c4d4();
        if ((bool)uVar9) {
          func_0x000108b8c63c();
          func_0x000108b8c4ac();
        }
        if ((int)lVar19 != 0) {
          return 7;
        }
        uVar18 = lVar17 + lVar13 + *param_3 + 4;
LAB_108b8bc00:
        *param_3 = uVar18;
        return 0;
      }
    }
  }
  return 8;
}



/* Entry: 108b8c13c; end: 108b8c1ab;  */

void FUN_108b8c13c(long *param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = 0;
  lVar5 = *param_1;
  uVar6 = param_1[2];
  while( true ) {
    if (uVar6 <= uVar4) {
      return;
    }
    uVar2 = *(undefined8 *)(lVar5 + uVar4 * 0x10 + 8);
    (*param_2)(uVar2,param_3);
    if ((int)uVar2 == 0) break;
    uVar3 = param_1[2];
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      uVar4 = uVar4 + 1;
    }
  }
  return;
}



/* Entry: 108b8c1ac; end: 108b8c317;  */

undefined8 FUN_108b8c1ac(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong *unaff_x19;
  undefined4 *unaff_x20;
  ulong uVar3;
  
  func_0x000108b8c698();
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == *(ulong *)(param_1 + 8)) {
    uVar2 = uVar3 * 0x20;
    if ((uVar2 < uVar3 * 0x10 || (uVar3 & 0xfffffffffffffff) == 0) || (FUN_108b88268(), uVar2 == 0))
    {
      return 3;
    }
    _memcpy();
    func_0x000108b882f0(*unaff_x19);
    *unaff_x19 = uVar2;
    unaff_x19[1] = uVar3 << 1;
    uVar3 = unaff_x19[2];
  }
  else {
    uVar2 = *unaff_x19;
  }
  puVar1 = (undefined4 *)(uVar2 + uVar3 * 0x10);
  *puVar1 = *unaff_x20;
  *(undefined4 **)(puVar1 + 2) = unaff_x20;
  unaff_x19[2] = uVar3 + 1;
  return 0;
}



/* Entry: 108b8c318; end: 108b8c347;  */

bool FUN_108b8c318(byte *param_1,long param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    do {
      bVar2 = param_2 != 0;
      param_2 = param_2 + -1;
      if (!bVar2) {
        return false;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (bVar1 != param_3);
  }
  return bVar2;
}



/* Entry: 108b8c348; end: 108b8c387;  */

bool FUN_108b8c348(undefined8 param_1,int *param_2)

{
  FUN_108b8b758(*(undefined8 *)(param_2 + 2),param_1);
  FUN_108b8aea0(param_1,*(undefined8 *)(param_2 + 4));
  *param_2 = (int)param_1;
  return (int)param_1 == 0;
}



/* Entry: 108b8c388; end: 108b8c46f;  */

void FUN_108b8c388(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uStack_58;
  
  if (-1 < (int)param_3) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    if ((bRam000000011328ae70 & 1) == 0) {
      uStack_58 = *(uint *)(param_1 + 0x3c);
    }
    else {
      func_0x000108b88b2c();
      func_0x000108b8c4ac();
      uStack_58 = *(uint *)(param_1 + 0x3c);
      if (bRam000000011328ae70 == 1) {
        func_0x000108b8c5f8();
        func_0x000108b8c4ac();
      }
    }
    func_0x000108b8c754(0);
    *(uint *)(param_2 + 8) = uStack_58 ^ (uVar1 >> 0x10 | uVar1 << 0x10);
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}



/* Entry: 108b8c470; end: 108b8c78f;  */

void FUN_108b8c470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(&stack0x00000120,0x100);
  return;
}



/* Entry: 108b8c790; end: 108b8c7e7;  */

/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */

void FUN_108b8c790(int *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  FUN_108b8d59c();
  FUN_108b8c7e8();
  lVar5 = param_2;
  func_0x000108b8dbe0();
  uStack_48 = extraout_x8;
  func_0x000108b8e840();
  lVar7 = 0;
  if ((int)lVar5 == 0) {
    pcVar6 = (char *)((long)param_1 + 0x41);
    for (; lVar7 != 0x14; lVar7 = lVar7 + 1) {
      if (*pcVar6 == '\0') goto LAB_108b8d948;
      pcVar6 = pcVar6 + 0x40;
    }
    uVar2 = 1;
    goto LAB_108b8db74;
  }
LAB_108b8d948:
  if (*(long *)(param_2 + 0x18) == 0) {
    if (param_3 != 0) goto LAB_108b8d97c;
  }
  else {
    param_4 = *(undefined8 *)(param_2 + 0x20);
    param_3 = *(long *)(param_2 + 0x18);
LAB_108b8d97c:
    uVar2 = *(char *)(param_2 + 0x38) == '\x01';
    if ((bool)uVar2) {
      uStack_58 = *(undefined8 *)(param_2 + 0x30);
      uStack_60 = *(undefined8 *)(param_2 + 0x28);
    }
    else if ((*(byte *)(param_1 + 0x144) >> 1 & 1) != 0) {
      func_0x000108b8dc70();
      lVar4 = lVar5;
      func_0x000108b8dc50();
      if ((lVar4 == 0) || (lVar5 == 0)) {
        func_0x000108b8dca0(uStack_60);
        lVar5 = lVar4;
        goto LAB_108b8dad8;
      }
      FUN_108b8de2c(lVar5,uStack_62,lVar4,uStack_64,param_3,param_4,&uStack_60);
      func_0x000108b8dca0(uStack_60);
    }
    lVar5 = param_2;
    FUN_108b8e354(param_2,8,0x14);
    if (lVar5 == 0) goto LAB_108b8db74;
    uVar1 = param_1[0x144];
    iVar3 = *param_1;
    if ((uVar1 >> 1 & 1) == 0) {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar8 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar8 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(param_2 + 8);
      func_0x000108b8dc00(uVar8);
    }
    else {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar8 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar8 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(param_2 + 8);
      func_0x000108b8dc00(uVar8);
    }
    FUN_108b8dd60();
  }
LAB_108b8dad8:
  iVar3 = (int)lVar5;
  uVar2 = *param_1 - 1U == 1;
  if ((*param_1 - 1U < 2) && ((*(byte *)(param_1 + 0x144) >> 2 & 1) != 0)) {
    FUN_108b8e354(param_2,0x8028,4);
    if (param_2 != 0) {
      return;
    }
  }
  else {
    func_0x000108b8dc20();
    if (iVar3 == 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_2 + 8) + 4);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 4) = *(undefined8 *)(*(long *)(param_2 + 8) + 0xc);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 2) = uVar8;
      lVar5 = param_2;
      func_0x000108b8e80c();
      param_1[lVar7 * 0x10 + 6] = (int)lVar5;
      *(long *)(param_1 + lVar7 * 0x10 + 8) = param_3;
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 10) = param_4;
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 0xe) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 0xc) = uVar8;
      *(undefined1 *)(param_1 + lVar7 * 0x10 + 0x10) = *(undefined1 *)(param_2 + 0x38);
      *(undefined1 *)((long)param_1 + lVar7 * 0x40 + 0x41) = 1;
    }
    *(long *)(param_2 + 0x18) = param_3;
    *(undefined8 *)(param_2 + 0x20) = param_4;
  }
LAB_108b8db74:
  func_0x000108b8dbb4(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b8c7e8; end: 108b8c7fb;  */

void FUN_108b8c7e8(void)

{
  return;
}



/* Entry: 108b8c7fc; end: 108b8cb3f;  */

/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */

void FUN_108b8c7fc(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,long param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,ulong param_12,int param_13)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 extraout_x8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  int *piStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar10 = (ulong)param_9._1_1_;
  lStack_70 = param_7;
  uStack_68 = param_8;
  FUN_108b8d59c();
  if (param_13 == 3 || param_13 == 0) {
    if ((((byte)param_9 != 0) && (uVar5 = param_2, FUN_108b8e4cc(param_2,0x25), (int)uVar5 != 0)) ||
       (uVar5 = param_2, FUN_108b8e4d8(param_2,0x24,param_10), (int)uVar5 != 0)) goto LAB_108b8c92c;
    uVar8 = 0x8029;
    if (param_9._1_1_ != 0) {
      uVar8 = 0x802a;
    }
    uVar5 = param_2;
    func_0x000108b8e500(param_2,uVar8,param_11);
    if ((int)uVar5 != 0) goto LAB_108b8c92c;
  }
  if (((param_5 != 0) && (param_6 != 0)) &&
     (uVar5 = param_2, FUN_108b8e474(param_2,6,param_5,param_6), (int)uVar5 != 0)) {
LAB_108b8c92c:
    func_0x000108b8cbe0(0);
    return;
  }
  if (param_13 == 3) {
    param_6 = param_12;
    _strlen();
    uVar1 = 0;
    if ((param_6 & 3) != 0) {
      uVar1 = 4 - ((uint)param_6 & 3);
    }
    uVar10 = (ulong)uVar1;
    lVar12 = param_6 + uVar10;
    _malloc(lVar12);
    _bzero();
    _memcpy(lVar12,param_12,param_6);
    param_12 = param_2;
    FUN_108b8e474(param_2,0x8054,lVar12,param_6 + uVar10);
    _free(lVar12);
    if ((int)param_12 != 0) goto LAB_108b8c92c;
  }
  piVar4 = param_1;
  uVar6 = param_2;
  lVar7 = lStack_70;
  uVar11 = uStack_68;
  func_0x000108b8cbe0();
  uVar5 = uVar6;
  uStack_b0 = param_6;
  uStack_a8 = param_12;
  piStack_a0 = param_1;
  uStack_98 = param_2;
  uStack_90 = (ulong)(byte)param_9;
  uStack_88 = uVar10;
  func_0x000108b8dbe0();
  uStack_b8 = extraout_x8;
  func_0x000108b8e840();
  lVar12 = 0;
  if ((int)uVar5 == 0) {
    pcVar9 = (char *)((long)piVar4 + 0x41);
    for (; lVar12 != 0x14; lVar12 = lVar12 + 1) {
      if (*pcVar9 == '\0') goto LAB_108b8d948;
      pcVar9 = pcVar9 + 0x40;
    }
    uVar2 = 1;
    goto LAB_108b8db74;
  }
LAB_108b8d948:
  if (*(long *)(uVar6 + 0x18) == 0) {
    if (lVar7 != 0) goto LAB_108b8d97c;
  }
  else {
    uVar11 = *(undefined8 *)(uVar6 + 0x20);
    lVar7 = *(long *)(uVar6 + 0x18);
LAB_108b8d97c:
    uVar2 = *(char *)(uVar6 + 0x38) == '\x01';
    if ((bool)uVar2) {
      uStack_c8 = *(undefined8 *)(uVar6 + 0x30);
      uStack_d0 = *(undefined8 *)(uVar6 + 0x28);
    }
    else if ((*(byte *)(piVar4 + 0x144) >> 1 & 1) != 0) {
      func_0x000108b8dc70();
      uVar10 = uVar5;
      func_0x000108b8dc50();
      if ((uVar10 == 0) || (uVar5 == 0)) {
        func_0x000108b8dca0(uStack_d0);
        uVar5 = uVar10;
        goto LAB_108b8dad8;
      }
      FUN_108b8de2c(uVar5,uStack_d2,uVar10,uStack_d4,lVar7,uVar11,&uStack_d0);
      func_0x000108b8dca0(uStack_d0);
    }
    uVar10 = uVar6;
    FUN_108b8e354(uVar6,8,0x14);
    if (uVar10 == 0) goto LAB_108b8db74;
    uVar1 = piVar4[0x144];
    iVar3 = *piVar4;
    if ((uVar1 >> 1 & 1) == 0) {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar13 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar13 = 0xfffffffffffffff4;
      }
      uVar5 = *(ulong *)(uVar6 + 8);
      func_0x000108b8dc00(uVar13);
    }
    else {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar13 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar13 = 0xfffffffffffffff4;
      }
      uVar5 = *(ulong *)(uVar6 + 8);
      func_0x000108b8dc00(uVar13);
    }
    FUN_108b8dd60();
  }
LAB_108b8dad8:
  iVar3 = (int)uVar5;
  uVar2 = *piVar4 - 1U == 1;
  if ((*piVar4 - 1U < 2) && ((*(byte *)(piVar4 + 0x144) >> 2 & 1) != 0)) {
    FUN_108b8e354(uVar6,0x8028,4);
    if (uVar6 != 0) {
      return;
    }
  }
  else {
    func_0x000108b8dc20();
    if (iVar3 == 0) {
      uVar13 = *(undefined8 *)(*(long *)(uVar6 + 8) + 4);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 4) = *(undefined8 *)(*(long *)(uVar6 + 8) + 0xc);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 2) = uVar13;
      uVar10 = uVar6;
      func_0x000108b8e80c();
      piVar4[lVar12 * 0x10 + 6] = (int)uVar10;
      *(long *)(piVar4 + lVar12 * 0x10 + 8) = lVar7;
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 10) = uVar11;
      uVar13 = *(undefined8 *)(uVar6 + 0x28);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 0xe) = *(undefined8 *)(uVar6 + 0x30);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 0xc) = uVar13;
      *(undefined1 *)(piVar4 + lVar12 * 0x10 + 0x10) = *(undefined1 *)(uVar6 + 0x38);
      *(undefined1 *)((long)piVar4 + lVar12 * 0x40 + 0x41) = 1;
    }
    *(long *)(uVar6 + 0x18) = lVar7;
    *(undefined8 *)(uVar6 + 0x20) = uVar11;
  }
LAB_108b8db74:
  func_0x000108b8dbb4(uStack_b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b8cb40; end: 108b8cb87;  */

void FUN_108b8cb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  *param_4 = 0;
  func_0x000108b8d73c();
  if ((iVar1 != 0) && (FUN_108b8cba8(), CONCAT44(uVar2,iVar1) != 0)) {
    *param_4 = CONCAT44(uVar2,iVar1);
  }
  return;
}



/* Entry: 108b8cb88; end: 108b8cba7;  */

bool FUN_108b8cb88(undefined8 param_1)

{
  FUN_108b8e0ac(param_1,0x25);
  return (int)param_1 == 0;
}



/* Entry: 108b8cba8; end: 108b8cbfb;  */

/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */

void FUN_108b8cba8(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long lVar6;
  char *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  int *unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar8 = 0;
  lVar9 = 0;
  lVar5 = unaff_x20;
  func_0x000108b8dbe0();
  uStack_48 = extraout_x8;
  func_0x000108b8e840();
  lVar10 = 0;
  if ((int)lVar5 == 0) {
    pcVar7 = (char *)((long)unaff_x21 + 0x41);
    for (; lVar10 != 0x14; lVar10 = lVar10 + 1) {
      if (*pcVar7 == '\0') goto LAB_108b8d948;
      pcVar7 = pcVar7 + 0x40;
    }
    uVar2 = 1;
    goto LAB_108b8db74;
  }
LAB_108b8d948:
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(char *)(unaff_x20 + 0x38) == '\x01';
    lVar9 = lVar6;
    if ((bool)uVar2) {
      uStack_58 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x28);
    }
    else if ((*(byte *)(unaff_x21 + 0x144) >> 1 & 1) != 0) {
      func_0x000108b8dc70();
      lVar4 = lVar5;
      func_0x000108b8dc50();
      if ((lVar4 == 0) || (lVar5 == 0)) {
        func_0x000108b8dca0(uStack_60);
        lVar5 = lVar4;
        goto LAB_108b8dad8;
      }
      FUN_108b8de2c(lVar5,uStack_62,lVar4,uStack_64,lVar6,uVar8,&uStack_60);
      func_0x000108b8dca0(uStack_60);
    }
    lVar5 = unaff_x20;
    FUN_108b8e354();
    if (lVar5 == 0) goto LAB_108b8db74;
    uVar1 = unaff_x21[0x144];
    iVar3 = *unaff_x21;
    if ((uVar1 >> 1 & 1) == 0) {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar11 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar11 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(unaff_x20 + 8);
      func_0x000108b8dc00(uVar11);
    }
    else {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar11 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar11 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(unaff_x20 + 8);
      func_0x000108b8dc00(uVar11);
    }
    FUN_108b8dd60();
  }
LAB_108b8dad8:
  iVar3 = (int)lVar5;
  uVar2 = *unaff_x21 - 1U == 1;
  if ((*unaff_x21 - 1U < 2) && ((*(byte *)(unaff_x21 + 0x144) >> 2 & 1) != 0)) {
    FUN_108b8e354();
    if (unaff_x20 != 0) {
      return;
    }
  }
  else {
    func_0x000108b8dc20();
    if (iVar3 == 0) {
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 8) + 4);
      *(undefined8 *)(unaff_x21 + lVar10 * 0x10 + 4) =
           *(undefined8 *)(*(long *)(unaff_x20 + 8) + 0xc);
      *(undefined8 *)(unaff_x21 + lVar10 * 0x10 + 2) = uVar11;
      lVar5 = unaff_x20;
      func_0x000108b8e80c();
      unaff_x21[lVar10 * 0x10 + 6] = (int)lVar5;
      *(long *)(unaff_x21 + lVar10 * 0x10 + 8) = lVar9;
      *(undefined8 *)(unaff_x21 + lVar10 * 0x10 + 10) = uVar8;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined8 *)(unaff_x21 + lVar10 * 0x10 + 0xe) = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x21 + lVar10 * 0x10 + 0xc) = uVar11;
      *(undefined1 *)(unaff_x21 + lVar10 * 0x10 + 0x10) = *(undefined1 *)(unaff_x20 + 0x38);
      *(undefined1 *)((long)unaff_x21 + lVar10 * 0x40 + 0x41) = 1;
    }
    *(long *)(unaff_x20 + 0x18) = lVar9;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
  }
LAB_108b8db74:
  func_0x000108b8dbb4(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b8cbfc; end: 108b8cd97;  */

void FUN_108b8cbfc(undefined1 *param_1,undefined8 **param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 **unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack_184;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined1 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 **ppuStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [7];
  undefined8 *apuStack_e8 [6];
  undefined1 auStack_b4 [20];
  undefined8 auStack_a0 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = unaff_x19;
  ppuStack_130 = param_2;
  puStack_128 = param_1;
  if (param_3 < (undefined8 *)0x6) {
    unaff_x20 = param_1;
    unaff_x21 = param_2;
    if ((undefined8 **)0x40 < param_2) {
      unaff_x20 = auStack_b4;
      FUN_108b8cd98(1,&puStack_128,&ppuStack_130,auStack_b4);
      unaff_x21 = (undefined8 **)0x14;
    }
    auStack_a0[5] = 0;
    auStack_a0[4] = 0;
    auStack_a0[7] = 0;
    auStack_a0[6] = 0;
    auStack_a0[1] = 0;
    auStack_a0[0] = 0;
    auStack_a0[3] = 0;
    auStack_a0[2] = 0;
    FUN_108b8ce20();
    for (lVar2 = 0; lVar2 != 0x40; lVar2 = lVar2 + 1) {
      *(byte *)((long)auStack_a0 + lVar2) = *(byte *)((long)auStack_a0 + lVar2) ^ 0x36;
    }
    apuStack_e8[0] = auStack_a0;
    auStack_120[0] = 0x40;
    for (lVar2 = 1; lVar2 - (long)param_3 != 1; lVar2 = lVar2 + 1) {
      apuStack_e8[lVar2] = (undefined8 *)*param_4;
      auStack_120[lVar2] = *param_5;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
    }
    FUN_108b8cd98((long)param_3 + 1,apuStack_e8,auStack_120,param_6);
    auStack_a0[5] = 0;
    auStack_a0[4] = 0;
    auStack_a0[7] = 0;
    auStack_a0[6] = 0;
    auStack_a0[1] = 0;
    auStack_a0[0] = 0;
    auStack_a0[3] = 0;
    auStack_a0[2] = 0;
    unaff_x22 = auStack_a0;
    FUN_108b8ce20();
    for (lVar2 = 0; lVar2 != 0x40; lVar2 = lVar2 + 1) {
      *(byte *)((long)unaff_x22 + lVar2) = *(byte *)((long)unaff_x22 + lVar2) ^ 0x5c;
    }
    apuStack_e8[0] = auStack_a0;
    auStack_120[1] = 0x14;
    auStack_120[0] = 0x40;
    param_2 = apuStack_e8;
    param_3 = auStack_120;
    param_1 = (undefined1 *)0x2;
    param_4 = param_6;
    apuStack_e8[1] = param_6;
    FUN_108b8cd98();
    puStack_148 = param_6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_138 = FUN_108b8cd98;
    uStack_184 = 0;
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    puVar1 = param_1;
    puStack_160 = unaff_x22;
    ppuStack_158 = unaff_x21;
    puStack_150 = unaff_x20;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x000107c2b424();
    func_0x00010ae34f90(&lStack_180,puVar1);
    for (; param_1 != (undefined1 *)0x0; param_1 = param_1 + -1) {
      (**(code **)(lStack_180 + 0x18))(&lStack_180,*param_2,*param_3);
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
    func_0x00010ae34f9c(&lStack_180,param_4,&uStack_184);
    return;
  }
  return;
}



/* Entry: 108b8cd98; end: 108b8ce1f;  */

void FUN_108b8cd98(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_54;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_54 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar1 = param_1;
  func_0x000107c2b424();
  func_0x00010ae34f90(&lStack_50,lVar1);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    (**(code **)(lStack_50 + 0x18))(&lStack_50,*param_2,*param_3);
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  func_0x00010ae34f9c(&lStack_50,param_4,&uStack_54);
  return;
}



/* Entry: 108b8ce20; end: 108b8ce33;  */

void FUN_108b8ce20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____memcpy_chk_11034bd80)(&stack0x00000090);
  return;
}



/* Entry: 108b8ce34; end: 108b8ceeb;  */

ulong FUN_108b8ce34(long param_1,long param_2)

{
  byte *pbVar1;
  undefined1 in_ZR;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iStack_80;
  ushort uStack_4a;
  long alStack_48 [2];
  ushort *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  long lStack_20;
  
  func_0x000108b8cf50();
  uVar7 = (int)param_2 - 0x14;
  uStack_4a = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
  alStack_48[1] = 2;
  puStack_38 = &uStack_4a;
  uStack_30 = 2;
  lStack_28 = param_1 + 4;
  lStack_20 = param_2 + -0xc;
  plVar3 = alStack_48;
  pbVar6 = (byte *)0x3;
  alStack_48[0] = param_1;
  func_0x000108b8dcf4();
  func_0x000108b8cf38();
  if ((bool)in_ZR) {
    uVar7 = (uint)plVar3 ^ 0x5354554e;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    return (ulong)(uVar7 >> 0x10 | uVar7 << 0x10);
  }
  ___stack_chk_fail();
  func_0x000108b8cf50();
  iStack_80 = (int)*(undefined8 *)(plVar3[1] + 4);
  bVar2 = iStack_80 == 0x42a41221;
  uVar4 = (ulong)bVar2;
  func_0x000108b8cf38();
  if (!bVar2) {
    ___stack_chk_fail();
    uVar7 = 0;
    pbVar8 = &UNK_10f502ff1;
    pbVar1 = &UNK_10f502ff1;
    if (pbVar6 != (byte *)0x0) {
      pbVar8 = pbVar6;
      pbVar1 = pbVar6;
    }
    for (; ((ulong)*pbVar8 != 0 && (uVar7 < 0x80)); uVar7 = uVar7 + 1) {
      pbVar8 = pbVar8 + (char)(&UNK_10df93e90)[*pbVar8];
    }
    FUN_108b8e354();
    if (uVar4 == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
      if ((pbVar1 != (byte *)0x0) && ((long)pbVar8 - (long)pbVar1 != 0)) {
        _memcpy(uVar4,pbVar1,(long)pbVar8 - (long)pbVar1);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return uVar4;
}



/* Entry: 108b8ceec; end: 108b8cf8f;  */

undefined8 FUN_108b8ceec(long param_1,byte *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  pbVar5 = &UNK_10f502ff1;
  pbVar1 = &UNK_10f502ff1;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    pbVar1 = param_2;
  }
  for (; ((ulong)*pbVar5 != 0 && (uVar4 < 0x80)); uVar4 = uVar4 + 1) {
    pbVar5 = pbVar5 + (char)(&UNK_10df93e90)[*pbVar5];
  }
  lVar3 = (long)pbVar5 - (long)pbVar1;
  FUN_108b8e354(param_1,0x8022,lVar3);
  if (param_1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
    if ((pbVar1 != (byte *)0x0) && (lVar3 != 0)) {
      _memcpy(param_1,pbVar1,lVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 108b8cf90; end: 108b8d01b;  */

undefined8
FUN_108b8cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined8 *param_5,undefined8 *param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_7 == 0) {
    return 0;
  }
  puVar2 = (undefined8 *)(param_7 + 0x10);
  while( true ) {
    if (puVar2[-2] == 0) {
      return 0;
    }
    if ((puVar2[-1] == (ulong)param_4) &&
       (uVar1 = param_3, _memcmp(param_3,puVar2[-2],(ulong)param_4), (int)uVar1 == 0)) break;
    puVar2 = puVar2 + 4;
  }
  uVar1 = puVar2[1];
  *param_5 = *puVar2;
  *param_6 = uVar1;
  return 1;
}



/* Entry: 108b8d01c; end: 108b8d4fb;  */

void FUN_108b8d01c(long param_1,undefined8 param_2,uint *param_3,uint *param_4,code *param_5)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 extraout_x8;
  long lVar18;
  ulong uVar19;
  short *psVar20;
  uint *unaff_x19;
  int *unaff_x20;
  int iVar21;
  byte bVar22;
  long lVar23;
  long unaff_x26;
  bool bVar24;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  uint uStack_e0;
  undefined1 auStack_da [10];
  long lStack_d0;
  ushort uStack_c6;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint auStack_94 [5];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar15 = param_4;
  func_0x000108b8dbc8();
  lStack_d0 = 0;
  puVar16 = (uint *)(ulong)((*(uint *)(param_1 + 0x510) & 0x80) == 0);
  puVar10 = param_3;
  puVar17 = puVar15;
  uStack_68 = extraout_x8;
  func_0x000108b8e77c();
  uVar8 = (uint)puVar10;
  uVar7 = uVar8 == 0xffffffff;
  if ((bool)uVar7) {
LAB_108b8d138:
    unaff_x20 = (int *)0x1;
    goto LAB_108b8d13c;
  }
  if (uVar8 == 0) {
    unaff_x20 = (int *)0x2;
    goto LAB_108b8d13c;
  }
  uVar6 = (uint)param_4 <= uVar8;
  uVar7 = uVar8 == (uint)param_4;
  if (!(bool)uVar7) goto LAB_108b8d138;
  *(int **)unaff_x19 = unaff_x20;
  *(uint **)(unaff_x19 + 2) = param_3;
  *(undefined1 *)(unaff_x19 + 0xe) = 0;
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  unaff_x19[8] = 0;
  unaff_x19[9] = 0;
  *(uint **)(unaff_x19 + 4) = param_4;
  func_0x000108b8dbf0();
  if (!(bool)uVar6 || (bool)uVar7) {
    puVar10 = unaff_x19;
    func_0x000108b8cea4();
    if ((int)puVar10 != 0) {
      func_0x000108b8dbf0();
      if (((bool)uVar6 && !(bool)uVar7) || ((*(byte *)(unaff_x20 + 0x144) >> 2 & 1) == 0))
      goto LAB_108b8d0c0;
      puVar16 = &uStack_c4;
      puVar15 = (uint *)0x8028;
      puVar10 = unaff_x19;
      FUN_108b8e0e4();
      if ((int)puVar10 == 0) {
        func_0x000108b8db9c();
        func_0x000108b8dc80();
        uVar8 = (uStack_c4 & 0xff00ff00) >> 8 | (uStack_c4 & 0xff00ff) << 8;
        uVar7 = 0;
        if ((uVar8 >> 0x10 | uVar8 << 0x10) == (uint)puVar10) goto LAB_108b8d0c0;
      }
    }
    unaff_x20 = (int *)0x3;
    goto LAB_108b8d13c;
  }
LAB_108b8d0c0:
  func_0x000108b8dc20();
  if (((int)puVar10 == 2) || (func_0x000108b8dc20(), (int)puVar10 == 3)) {
    iVar21 = 0;
    uStack_78 = *(undefined8 *)(*(long *)(unaff_x19 + 2) + 0xc);
    uStack_80 = *(undefined8 *)(*(long *)(unaff_x19 + 2) + 4);
    for (lVar18 = 0; lVar18 != 0x500; lVar18 = lVar18 + 0x40) {
      if ((*(char *)((long)unaff_x20 + lVar18 + 0x41) == '\x01') &&
         (iVar9 = *(int *)((long)unaff_x20 + lVar18 + 0x18), puVar10 = unaff_x19,
         func_0x000108b8e80c(), iVar9 == (int)puVar10)) {
        puVar10 = (uint *)&uStack_80;
        puVar15 = (uint *)((long)unaff_x20 + lVar18 + 8);
        puVar16 = (uint *)0x10;
        _memcmp();
        if ((int)puVar10 == 0) {
          lVar23 = *(long *)((long)unaff_x20 + lVar18 + 0x20);
          unaff_x26 = *(long *)((long)unaff_x20 + lVar18 + 0x28);
          uStack_a8 = *(undefined8 *)((long)unaff_x20 + lVar18 + 0x38);
          uStack_b0 = *(undefined8 *)((long)unaff_x20 + lVar18 + 0x30);
          bVar22 = *(byte *)((long)unaff_x20 + lVar18 + 0x40);
          auStack_da._2_8_ = unaff_x26;
          lStack_d0 = lVar23;
          goto LAB_108b8d198;
        }
      }
      iVar21 = iVar21 + 1;
    }
    unaff_x20 = (int *)0x6;
    uVar7 = 1;
    goto LAB_108b8d13c;
  }
  lVar23 = 0;
  bVar22 = 0;
  iVar21 = -1;
LAB_108b8d198:
  if (((*(byte *)(unaff_x20 + 0x144) >> 4 & 1) == 0) &&
     (((func_0x000108b8dc20(), (int)puVar10 != 3 || (func_0x000108b8dcb0(), (int)puVar10 != 0)) ||
      ((uStack_e0 & 0xfffffffe) != 400)))) {
    func_0x000108b8dc20();
    uVar7 = (int)puVar10 == 1;
    if ((bool)uVar7) {
      uVar7 = (*(byte *)(unaff_x20 + 0x144) & 0x20) == 0;
      bVar24 = (bool)uVar7;
    }
    else {
      bVar24 = true;
    }
    if ((lVar23 == 0) && (bVar24)) {
      func_0x000108b8dc20();
      if ((int)puVar10 == 0) {
LAB_108b8d208:
        if ((unaff_x20[0x144] & 1U) == 0) {
          if (((uint)unaff_x20[0x144] >> 1 & 1) == 0) goto LAB_108b8d2a0;
LAB_108b8d214:
          func_0x000108b8dc20();
          if ((int)puVar10 != 0) goto LAB_108b8d2a0;
          func_0x000108b8dc44();
          iVar9 = (int)puVar10;
          if ((iVar9 != 0) && (func_0x000108b8dc14(), iVar9 != 0)) {
            puVar15 = (uint *)0x15;
            puVar10 = unaff_x19;
            FUN_108b8e868();
            if ((int)puVar10 != 0) {
              puVar15 = (uint *)0x14;
              puVar10 = unaff_x19;
              FUN_108b8e868();
              if ((int)puVar10 != 0) goto LAB_108b8d2a0;
            }
          }
        }
        else {
          func_0x000108b8dc44();
          if (((int)puVar10 == 0) || (func_0x000108b8dc14(), (int)puVar10 == 0)) goto LAB_108b8d3a8;
          if (((uint)unaff_x20[0x144] >> 1 & 1) != 0) goto LAB_108b8d214;
LAB_108b8d2a0:
          if ((((*(byte *)(unaff_x20 + 0x144) >> 4 & 1) != 0) ||
              (func_0x000108b8dc44(), (int)puVar10 == 0)) ||
             (func_0x000108b8dc14(), (int)puVar10 != 0)) goto LAB_108b8d2b8;
        }
LAB_108b8d3a8:
        unaff_x20 = (int *)0x4;
        goto LAB_108b8d13c;
      }
      func_0x000108b8dc20();
      uVar7 = 1;
      if ((int)puVar10 == 1) goto LAB_108b8d208;
LAB_108b8d2b8:
      bVar24 = true;
    }
  }
  else {
    bVar24 = false;
  }
  func_0x000108b8dc14();
  if (((int)puVar10 == 0) ||
     ((uVar7 = lVar23 == 0, !(bool)(uVar7 & bVar24) &&
      ((*(byte *)(unaff_x20 + 0x144) >> 6 & 1) == 0)))) {
LAB_108b8d314:
    uVar7 = false;
    if (lVar23 != 0) {
      uVar7 = bVar24;
    }
    if (((bool)uVar7) && (unaff_x26 != 0)) {
      puVar16 = (uint *)auStack_da;
      puVar15 = (uint *)0x8;
      puVar10 = unaff_x19;
      FUN_108b8dfec();
      if (puVar10 == (uint *)0x0) {
        func_0x000108b8dc20();
        iVar9 = (int)puVar10;
        uVar7 = iVar9 == 3;
        if (((!(bool)uVar7) || (func_0x000108b8dcb0(), iVar9 != 0)) ||
           (uVar7 = 0, (uStack_e0 & 0xfffffffe) != 400)) goto LAB_108b8d4a4;
      }
      else {
        if ((*(byte *)(unaff_x20 + 0x144) >> 1 & 1) == 0) {
          iVar9 = *unaff_x20;
          uVar7 = true;
          if (iVar9 == 3) {
LAB_108b8d360:
            func_0x000108b8dce8();
          }
          else {
            uVar7 = iVar9 == 2;
            if ((bool)uVar7) {
              func_0x000108b8dc00((long)puVar10 - *(long *)(unaff_x19 + 2));
            }
            else {
              if (iVar9 == 0) goto LAB_108b8d360;
              func_0x000108b8dce8();
            }
          }
        }
        else {
          if ((bVar22 & 1) == 0) {
            puVar12 = puVar10;
            func_0x000108b8dc70();
            puVar16 = (uint *)&uStack_e4;
            puVar13 = puVar12;
            func_0x000108b8dc50();
            if ((puVar13 == (uint *)0x0) || (puVar12 == (uint *)0x0)) goto LAB_108b8d4a4;
            FUN_108b8de2c(puVar12,uStack_e2,puVar13,uStack_e4,lStack_d0,auStack_da._2_8_,&uStack_c0)
            ;
          }
          else {
            uStack_b8 = uStack_a8;
            uStack_c0 = uStack_b0;
          }
          func_0x000108b8dca0(uStack_c0);
          iVar9 = *unaff_x20;
          uVar7 = true;
          if (iVar9 == 3) {
LAB_108b8d404:
            func_0x000108b8dce8();
          }
          else {
            uVar7 = iVar9 == 2;
            if ((bool)uVar7) {
              func_0x000108b8dc00((long)puVar10 - *(long *)(unaff_x19 + 2));
            }
            else {
              if (iVar9 == 0) goto LAB_108b8d404;
              func_0x000108b8dce8();
            }
          }
        }
        puVar17 = auStack_94;
        FUN_108b8dd60();
        iVar9 = (int)auStack_94;
        puVar16 = (uint *)0x14;
        _memcmp();
        puVar15 = puVar10;
        if (iVar9 != 0) goto LAB_108b8d4a4;
        *(long *)(unaff_x19 + 6) = lStack_d0;
        *(undefined8 *)(unaff_x19 + 8) = auStack_da._2_8_;
      }
    }
    uVar7 = iVar21 == 0x13;
    if (iVar21 != -1 && iVar21 < 0x14) {
      *(undefined1 *)((long)unaff_x20 + (long)iVar21 * 0x40 + 0x41) = 0;
    }
    puVar16 = (uint *)&uStack_c0;
    puVar17 = (uint *)0x1;
    FUN_108b8d4fc();
    puVar15 = unaff_x19;
    if ((int)unaff_x20 != 0) {
      func_0x000108b8dc20();
      uVar7 = (int)unaff_x20 == 0;
      uVar8 = 7;
      if (!(bool)uVar7) {
        uVar8 = 8;
      }
      unaff_x20 = (int *)(ulong)uVar8;
      puVar15 = unaff_x19;
    }
  }
  else {
    uStack_c6 = 0;
    puVar16 = (uint *)&uStack_c6;
    func_0x000108b8dc50();
    if (param_5 != (code *)0x0) {
      puVar17 = (uint *)(ulong)uStack_c6;
      piVar11 = unaff_x20;
      puVar15 = unaff_x19;
      (*param_5)();
      puVar16 = puVar10;
      lVar23 = lStack_d0;
      unaff_x26 = auStack_da._2_8_;
      if ((int)piVar11 != 0) goto LAB_108b8d314;
    }
LAB_108b8d4a4:
    unaff_x20 = (int *)0x5;
  }
LAB_108b8d13c:
  func_0x000108b8dbb4(uStack_68);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = 0;
  lVar18 = *(long *)(puVar15 + 2);
  uVar7 = *(undefined1 *)(lVar18 + 2);
  uVar6 = *(undefined1 *)(lVar18 + 3);
  uVar19 = 0x14;
  do {
    if (((ulong)(CONCAT11(uVar7,uVar6) + 0x14) & 0xffff) <= uVar19 ||
        ((ulong)puVar17 & 0xffffffff) <= uVar14) {
      return;
    }
    pcVar1 = (char *)(lVar18 + uVar19);
    uVar4 = *(ushort *)(pcVar1 + 2);
    cVar3 = *pcVar1;
    if (-1 < cVar3) {
      psVar20 = *(short **)(unaff_x20 + 0x142);
      do {
        sVar5 = *psVar20;
        if (sVar5 == 0) break;
        psVar20 = psVar20 + 1;
      } while (sVar5 != CONCAT11(cVar3,pcVar1[1]));
      if (sVar5 == 0) {
        *(ushort *)((long)puVar16 + uVar14 * 2) = CONCAT11(pcVar1[1],cVar3);
        uVar14 = uVar14 + 1;
      }
    }
    uVar8 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    uVar2 = (ulong)(uVar8 + 3) & 0x1fffc;
    if ((*(byte *)(unaff_x20 + 0x144) & 0x80) != 0) {
      uVar2 = (ulong)uVar8;
    }
    uVar19 = uVar19 + uVar2 + 4;
  } while( true );
}



/* Entry: 108b8d4fc; end: 108b8d59b;  */

void FUN_108b8d4fc(long param_1,long param_2,long param_3,uint param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  
  uVar9 = 0;
  lVar10 = *(long *)(param_2 + 8);
  uVar3 = *(undefined1 *)(lVar10 + 2);
  uVar4 = *(undefined1 *)(lVar10 + 3);
  uVar11 = 0x14;
  do {
    if (((ulong)(CONCAT11(uVar3,uVar4) + 0x14) & 0xffff) <= uVar11 || param_4 <= uVar9) {
      return;
    }
    pcVar1 = (char *)(lVar10 + uVar11);
    uVar6 = *(ushort *)(pcVar1 + 2);
    cVar5 = *pcVar1;
    if (-1 < cVar5) {
      psVar12 = *(short **)(param_1 + 0x508);
      do {
        sVar7 = *psVar12;
        if (sVar7 == 0) break;
        psVar12 = psVar12 + 1;
      } while (sVar7 != CONCAT11(cVar5,pcVar1[1]));
      if (sVar7 == 0) {
        *(ushort *)(param_3 + uVar9 * 2) = CONCAT11(pcVar1[1],cVar5);
        uVar9 = uVar9 + 1;
      }
    }
    uVar8 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
    uVar2 = (ulong)(uVar8 + 3) & 0x1fffc;
    if ((*(byte *)(param_1 + 0x510) & 0x80) != 0) {
      uVar2 = (ulong)uVar8;
    }
    uVar11 = uVar11 + uVar2 + 4;
  } while( true );
}



/* Entry: 108b8d59c; end: 108b8d67b;  */

/* WARNING: Possible PIC construction at 0x000108b8d884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8d888) */
/* WARNING: Removing unreachable block (ram,0x000108b8d88c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d898) */
/* WARNING: Removing unreachable block (ram,0x000108b8d89c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8ac) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8f0) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8c4) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8c8) */
/* WARNING: Removing unreachable block (ram,0x000108b8d904) */
/* WARNING: Removing unreachable block (ram,0x000108b8d95c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d960) */
/* WARNING: Removing unreachable block (ram,0x000108b8da20) */
/* WARNING: Removing unreachable block (ram,0x000108b8d968) */
/* WARNING: Removing unreachable block (ram,0x000108b8d970) */
/* WARNING: Removing unreachable block (ram,0x000108b8d948) */
/* WARNING: Removing unreachable block (ram,0x000108b8d978) */
/* WARNING: Removing unreachable block (ram,0x000108b8d950) */
/* WARNING: Removing unreachable block (ram,0x000108b8d97c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d994) */
/* WARNING: Removing unreachable block (ram,0x000108b8d99c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9b0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da44) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9b4) */
/* WARNING: Removing unreachable block (ram,0x000108b8d988) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9dc) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9f0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da28) */
/* WARNING: Removing unreachable block (ram,0x000108b8da2c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da7c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da88) */
/* WARNING: Removing unreachable block (ram,0x000108b8da9c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da34) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da38) */
/* WARNING: Removing unreachable block (ram,0x000108b8da04) */
/* WARNING: Removing unreachable block (ram,0x000108b8da08) */
/* WARNING: Removing unreachable block (ram,0x000108b8da50) */
/* WARNING: Removing unreachable block (ram,0x000108b8da5c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da70) */
/* WARNING: Removing unreachable block (ram,0x000108b8daa4) */
/* WARNING: Removing unreachable block (ram,0x000108b8da10) */
/* WARNING: Removing unreachable block (ram,0x000108b8daac) */
/* WARNING: Removing unreachable block (ram,0x000108b8da14) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8d4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad8) */
/* WARNING: Removing unreachable block (ram,0x000108b8dae8) */
/* WARNING: Removing unreachable block (ram,0x000108b8db18) */
/* WARNING: Removing unreachable block (ram,0x000108b8db20) */
/* WARNING: Removing unreachable block (ram,0x000108b8db58) */
/* WARNING: Removing unreachable block (ram,0x000108b8daf0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db74) */
/* WARNING: Removing unreachable block (ram,0x000108b8db98) */
/* WARNING: Removing unreachable block (ram,0x000108b8db80) */
/* WARNING: Removing unreachable block (ram,0x000108b8db04) */
/* WARNING: Removing unreachable block (ram,0x000108b8db9c) */

void FUN_108b8d59c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *in_x4;
  int *piVar12;
  int *in_x5;
  undefined8 extraout_x8;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar13;
  undefined8 uVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  int aiStack_98 [4];
  undefined8 uStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  func_0x000108b8dbc8();
  func_0x000108b8dc28();
  piVar4 = unaff_x19;
  FUN_108b8df9c();
  if (((int)piVar4 != 0) && (func_0x000108b8dbf0(), !(bool)in_CY || (bool)in_ZR)) {
    func_0x000108b8dcd4();
    func_0x000108b8dbf0();
    if ((!(bool)in_CY || (bool)in_ZR) &&
       ((*(long *)(unaff_x20 + 0x146) != 0 || ((*(byte *)(unaff_x20 + 0x144) >> 3 & 1) != 0)))) {
      FUN_108b8ceec();
    }
  }
  func_0x000108b8dbb4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_58 = 0x108b8d620;
    piVar7 = in_x4;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000108b8dbc8();
    func_0x000108b8dc28();
    piVar4 = aiStack_98;
    piVar8 = (int *)0x1;
    piVar5 = unaff_x19;
    FUN_108b8df9c();
    iVar3 = (int)piVar5;
    if ((iVar3 != 0) && (func_0x000108b8dbf0(), !(bool)in_CY || (bool)in_ZR)) {
      func_0x000108b8dcd4();
    }
    func_0x000108b8dbb4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      piVar10 = (int *)&uStack_100;
      uStack_a8 = 0x108b8d67c;
      pppuVar13 = &ppuStack_b0;
      piVar5 = in_x4;
      piVar9 = piVar4;
      piVar12 = piVar7;
      ppuStack_b0 = &puStack_60;
      func_0x000108b8dbc8();
      func_0x000108b8dcbc();
      if (iVar3 == 0) {
        *(int **)unaff_x19 = unaff_x20;
        *(int **)(unaff_x19 + 2) = in_x4;
        uVar14 = *(undefined8 *)(piVar7 + 6);
        uVar1 = *(undefined8 *)(piVar7 + 8);
        *(int **)(unaff_x19 + 4) = piVar4;
        *(undefined8 *)(unaff_x19 + 6) = uVar14;
        *(undefined8 *)(unaff_x19 + 8) = uVar1;
        uVar14 = *(undefined8 *)(piVar7 + 10);
        *(undefined8 *)(unaff_x19 + 0xc) = *(undefined8 *)(piVar7 + 0xc);
        *(undefined8 *)(unaff_x19 + 10) = uVar14;
        *(char *)(unaff_x19 + 0xe) = (char)piVar7[0xe];
        uStack_f8 = *(undefined8 *)(*(long *)(piVar7 + 2) + 0xc);
        uStack_100 = *(undefined8 *)(*(long *)(piVar7 + 2) + 4);
        piVar5 = piVar7;
        func_0x000108b8e80c();
        piVar8 = (int *)0x2;
        piVar6 = unaff_x19;
        FUN_108b8df9c();
        if ((int)piVar6 != 0) {
          func_0x000108b8dbf0();
          if ((!(bool)in_CY || (bool)in_ZR) &&
             ((piVar8 = *(int **)(unaff_x20 + 0x146), piVar8 != (int *)0x0 ||
              ((*(byte *)(unaff_x20 + 0x144) >> 3 & 1) != 0)))) {
            FUN_108b8ceec();
          }
          piVar6 = (int *)0x1;
        }
      }
      else {
        piVar6 = (int *)0x0;
        piVar10 = piVar9;
      }
      func_0x000108b8dbb4(uStack_e8);
      if ((bool)in_ZR) {
        return;
      }
      uVar14 = 0x108b8d73c;
      ___stack_chk_fail();
      puVar2 = &uStack_100;
      do {
        piVar11 = (int *)((long)puVar2 + -0x60);
        *(int **)((long)puVar2 + -0x40) = unaff_x24;
        *(int **)((long)puVar2 + -0x38) = in_x4;
        *(int **)((long)puVar2 + -0x30) = piVar4;
        *(int **)((long)puVar2 + -0x28) = piVar7;
        *(int **)((long)puVar2 + -0x20) = unaff_x20;
        *(int **)((long)puVar2 + -0x18) = unaff_x19;
        *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar13;
        *(undefined8 *)((long)puVar2 + -8) = uVar14;
        piVar4 = piVar6;
        unaff_x19 = piVar8;
        unaff_x24 = piVar5;
        piVar9 = piVar10;
        unaff_x20 = piVar12;
        func_0x000108b8dbe0();
        iVar3 = (int)piVar4;
        func_0x000108b8dcbc();
        if (iVar3 == 0) {
          *(int **)piVar8 = piVar6;
          *(int **)(piVar8 + 2) = piVar5;
          uVar14 = *(undefined8 *)(piVar12 + 6);
          uVar1 = *(undefined8 *)(piVar12 + 8);
          *(int **)(piVar8 + 4) = piVar10;
          *(undefined8 *)(piVar8 + 6) = uVar14;
          *(undefined8 *)(piVar8 + 8) = uVar1;
          uVar14 = *(undefined8 *)(piVar12 + 10);
          *(undefined8 *)(piVar8 + 0xc) = *(undefined8 *)(piVar12 + 0xc);
          *(undefined8 *)(piVar8 + 10) = uVar14;
          *(char *)(piVar8 + 0xe) = (char)piVar12[0xe];
          uVar14 = *(undefined8 *)(*(long *)(piVar12 + 2) + 4);
          *(undefined8 *)((long)puVar2 + -0x58) = *(undefined8 *)(*(long *)(piVar12 + 2) + 0xc);
          *(undefined8 *)((long)puVar2 + -0x60) = uVar14;
          unaff_x24 = piVar12;
          func_0x000108b8e80c();
          unaff_x19 = (int *)0x3;
          piVar4 = piVar8;
          FUN_108b8df9c();
          piVar9 = piVar11;
          if ((int)piVar4 == 0) goto LAB_108b8d7fc;
          in_ZR = *piVar6 - 1U == 1;
          if ((*piVar6 - 1U < 2) &&
             ((*(long *)(piVar6 + 0x146) != 0 || ((*(byte *)(piVar6 + 0x144) >> 3 & 1) != 0)))) {
            FUN_108b8ceec(piVar8);
          }
          piVar4 = piVar8;
          unaff_x19 = in_x5;
          func_0x000108b8e6b4();
          piVar9 = piVar11;
          if ((int)piVar4 != 0) goto LAB_108b8d7fc;
          piVar7 = (int *)0x1;
        }
        else {
LAB_108b8d7fc:
          piVar7 = (int *)0x0;
          piVar11 = piVar9;
        }
        func_0x000108b8dbb4(*(undefined8 *)((long)puVar2 + -0x48));
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        *(undefined8 *)((long)puVar2 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)puVar2 + -0xa8) = unaff_x27;
        *(int **)((long)puVar2 + -0xa0) = piVar5;
        *(int **)((long)puVar2 + -0x98) = piVar10;
        *(int **)((long)puVar2 + -0x90) = piVar12;
        *(int **)((long)puVar2 + -0x88) = piVar6;
        *(int **)((long)puVar2 + -0x80) = piVar8;
        *(int **)((long)puVar2 + -0x78) = in_x5;
        *(undefined1 **)((long)puVar2 + -0x70) = (undefined1 *)((long)puVar2 + -0x10);
        *(code **)((long)puVar2 + -0x68) = FUN_108b8d820;
        pppuVar13 = (undefined1 ***)((long)puVar2 + -0x70);
        piVar4 = piVar7;
        func_0x000108b8dbe0();
        *(undefined8 *)((long)puVar2 + -0xb8) = extraout_x8;
        FUN_108b8d4fc();
        in_x5 = (int *)0x1a4;
        uVar14 = 0x108b8d888;
        puVar2 = (undefined8 *)((long)puVar2 + -0x2c0);
        piVar6 = piVar7;
        piVar8 = unaff_x19;
        piVar5 = unaff_x24;
        piVar10 = piVar11;
        piVar12 = unaff_x20;
        in_x4 = piVar11;
      } while( true );
    }
  }
  return;
}



/* Entry: 108b8d67c; end: 108b8d81f;  */

/* WARNING: Possible PIC construction at 0x000108b8d884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8d888) */
/* WARNING: Removing unreachable block (ram,0x000108b8d88c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d898) */
/* WARNING: Removing unreachable block (ram,0x000108b8d89c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8ac) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8f0) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8c4) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8c8) */
/* WARNING: Removing unreachable block (ram,0x000108b8d904) */
/* WARNING: Removing unreachable block (ram,0x000108b8d95c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d960) */
/* WARNING: Removing unreachable block (ram,0x000108b8da20) */
/* WARNING: Removing unreachable block (ram,0x000108b8d968) */
/* WARNING: Removing unreachable block (ram,0x000108b8d970) */
/* WARNING: Removing unreachable block (ram,0x000108b8d948) */
/* WARNING: Removing unreachable block (ram,0x000108b8d978) */
/* WARNING: Removing unreachable block (ram,0x000108b8d950) */
/* WARNING: Removing unreachable block (ram,0x000108b8d97c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d994) */
/* WARNING: Removing unreachable block (ram,0x000108b8d99c) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9b0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da44) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9b4) */
/* WARNING: Removing unreachable block (ram,0x000108b8d988) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9dc) */
/* WARNING: Removing unreachable block (ram,0x000108b8d9f0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da28) */
/* WARNING: Removing unreachable block (ram,0x000108b8da2c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da7c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da88) */
/* WARNING: Removing unreachable block (ram,0x000108b8da9c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da34) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac0) */
/* WARNING: Removing unreachable block (ram,0x000108b8da38) */
/* WARNING: Removing unreachable block (ram,0x000108b8da04) */
/* WARNING: Removing unreachable block (ram,0x000108b8da08) */
/* WARNING: Removing unreachable block (ram,0x000108b8da50) */
/* WARNING: Removing unreachable block (ram,0x000108b8da5c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da70) */
/* WARNING: Removing unreachable block (ram,0x000108b8daa4) */
/* WARNING: Removing unreachable block (ram,0x000108b8da10) */
/* WARNING: Removing unreachable block (ram,0x000108b8daac) */
/* WARNING: Removing unreachable block (ram,0x000108b8da14) */
/* WARNING: Removing unreachable block (ram,0x000108b8d8d4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad8) */
/* WARNING: Removing unreachable block (ram,0x000108b8dae8) */
/* WARNING: Removing unreachable block (ram,0x000108b8db18) */
/* WARNING: Removing unreachable block (ram,0x000108b8db20) */
/* WARNING: Removing unreachable block (ram,0x000108b8db58) */
/* WARNING: Removing unreachable block (ram,0x000108b8daf0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db74) */
/* WARNING: Removing unreachable block (ram,0x000108b8db98) */
/* WARNING: Removing unreachable block (ram,0x000108b8db80) */
/* WARNING: Removing unreachable block (ram,0x000108b8db04) */
/* WARNING: Removing unreachable block (ram,0x000108b8db9c) */

void FUN_108b8d67c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined8 extraout_x8;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  int *piVar6;
  
  piVar7 = (int *)&uStack_60;
  puVar11 = &stack0xfffffffffffffff0;
  piVar5 = param_3;
  piVar6 = param_4;
  piVar10 = param_5;
  func_0x000108b8dbc8();
  func_0x000108b8dcbc();
  if (param_1 == 0) {
    *(int **)unaff_x19 = unaff_x20;
    *(int **)(unaff_x19 + 2) = param_3;
    uVar12 = *(undefined8 *)(param_5 + 6);
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(int **)(unaff_x19 + 4) = param_4;
    *(undefined8 *)(unaff_x19 + 6) = uVar12;
    *(undefined8 *)(unaff_x19 + 8) = uVar1;
    uVar12 = *(undefined8 *)(param_5 + 10);
    *(undefined8 *)(unaff_x19 + 0xc) = *(undefined8 *)(param_5 + 0xc);
    *(undefined8 *)(unaff_x19 + 10) = uVar12;
    *(char *)(unaff_x19 + 0xe) = (char)param_5[0xe];
    uStack_58 = *(undefined8 *)(*(long *)(param_5 + 2) + 0xc);
    uStack_60 = *(undefined8 *)(*(long *)(param_5 + 2) + 4);
    piVar5 = param_5;
    func_0x000108b8e80c();
    param_2 = (int *)0x2;
    piVar4 = unaff_x19;
    FUN_108b8df9c();
    if ((int)piVar4 != 0) {
      func_0x000108b8dbf0();
      if ((!(bool)in_CY || (bool)in_ZR) &&
         ((param_2 = *(int **)(unaff_x20 + 0x146), param_2 != (int *)0x0 ||
          ((*(byte *)(unaff_x20 + 0x144) >> 3 & 1) != 0)))) {
        FUN_108b8ceec();
      }
      piVar4 = (int *)0x1;
    }
  }
  else {
    piVar4 = (int *)0x0;
    piVar7 = piVar6;
  }
  func_0x000108b8dbb4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  uVar12 = 0x108b8d73c;
  ___stack_chk_fail();
  puVar2 = &uStack_60;
  do {
    piVar9 = (int *)((long)puVar2 + -0x60);
    *(int **)((long)puVar2 + -0x40) = unaff_x24;
    *(int **)((long)puVar2 + -0x38) = param_3;
    *(int **)((long)puVar2 + -0x30) = param_4;
    *(int **)((long)puVar2 + -0x28) = param_5;
    *(int **)((long)puVar2 + -0x20) = unaff_x20;
    *(int **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar2 + -0x10) = puVar11;
    *(undefined8 *)((long)puVar2 + -8) = uVar12;
    piVar6 = piVar4;
    unaff_x19 = param_2;
    unaff_x24 = piVar5;
    piVar8 = piVar7;
    unaff_x20 = piVar10;
    func_0x000108b8dbe0();
    iVar3 = (int)piVar6;
    func_0x000108b8dcbc();
    if (iVar3 == 0) {
      *(int **)param_2 = piVar4;
      *(int **)(param_2 + 2) = piVar5;
      uVar12 = *(undefined8 *)(piVar10 + 6);
      uVar1 = *(undefined8 *)(piVar10 + 8);
      *(int **)(param_2 + 4) = piVar7;
      *(undefined8 *)(param_2 + 6) = uVar12;
      *(undefined8 *)(param_2 + 8) = uVar1;
      uVar12 = *(undefined8 *)(piVar10 + 10);
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(piVar10 + 0xc);
      *(undefined8 *)(param_2 + 10) = uVar12;
      *(char *)(param_2 + 0xe) = (char)piVar10[0xe];
      uVar12 = *(undefined8 *)(*(long *)(piVar10 + 2) + 4);
      *(undefined8 *)((long)puVar2 + -0x58) = *(undefined8 *)(*(long *)(piVar10 + 2) + 0xc);
      *(undefined8 *)((long)puVar2 + -0x60) = uVar12;
      unaff_x24 = piVar10;
      func_0x000108b8e80c();
      unaff_x19 = (int *)0x3;
      piVar6 = param_2;
      FUN_108b8df9c();
      piVar8 = piVar9;
      if ((int)piVar6 == 0) goto LAB_108b8d7fc;
      in_ZR = *piVar4 - 1U == 1;
      if ((*piVar4 - 1U < 2) &&
         ((*(long *)(piVar4 + 0x146) != 0 || ((*(byte *)(piVar4 + 0x144) >> 3 & 1) != 0)))) {
        FUN_108b8ceec(param_2);
      }
      piVar6 = param_2;
      unaff_x19 = param_6;
      func_0x000108b8e6b4();
      piVar8 = piVar9;
      if ((int)piVar6 != 0) goto LAB_108b8d7fc;
      param_5 = (int *)0x1;
    }
    else {
LAB_108b8d7fc:
      param_5 = (int *)0x0;
      piVar9 = piVar8;
    }
    func_0x000108b8dbb4(*(undefined8 *)((long)puVar2 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)puVar2 + -0xb0) = unaff_x28;
    *(undefined8 *)((long)puVar2 + -0xa8) = unaff_x27;
    *(int **)((long)puVar2 + -0xa0) = piVar5;
    *(int **)((long)puVar2 + -0x98) = piVar7;
    *(int **)((long)puVar2 + -0x90) = piVar10;
    *(int **)((long)puVar2 + -0x88) = piVar4;
    *(int **)((long)puVar2 + -0x80) = param_2;
    *(int **)((long)puVar2 + -0x78) = param_6;
    *(undefined1 **)((long)puVar2 + -0x70) = (undefined1 *)((long)puVar2 + -0x10);
    *(code **)((long)puVar2 + -0x68) = FUN_108b8d820;
    puVar11 = (undefined1 *)((long)puVar2 + -0x70);
    param_4 = param_5;
    func_0x000108b8dbe0();
    *(undefined8 *)((long)puVar2 + -0xb8) = extraout_x8;
    FUN_108b8d4fc();
    param_6 = (int *)0x1a4;
    uVar12 = 0x108b8d888;
    puVar2 = (undefined8 *)((long)puVar2 + -0x2c0);
    piVar4 = param_5;
    param_2 = unaff_x19;
    piVar5 = unaff_x24;
    piVar7 = piVar9;
    piVar10 = unaff_x20;
    param_3 = piVar9;
  } while( true );
}



/* Entry: 108b8d820; end: 108b8d907;  */

/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */

void FUN_108b8d820(int *param_1,long param_2,undefined2 *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined2 uStack_2c4;
  undefined2 uStack_2c2;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined2 *puStack_2a0;
  ulong uStack_298;
  int *piStack_290;
  int *piStack_288;
  ulong uStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined2 auStack_258 [256];
  undefined8 uStack_58;
  
  piVar11 = param_1;
  func_0x000108b8dbe0();
  uStack_58 = extraout_x8;
  FUN_108b8d4fc();
  piVar4 = param_1;
  lVar7 = param_2;
  puVar8 = param_3;
  uVar9 = param_4;
  func_0x000108b8d73c();
  if ((int)piVar4 == 0) {
LAB_108b8d8c4:
    piVar4 = (int *)0x0;
  }
  else {
    uVar9 = param_5;
    func_0x000108b8cea4();
    if (((uVar9 & 1) == 0) && (((ulong)piVar11 & 1) != 0)) {
      auStack_258[(ulong)piVar11 & 0xffffffff] = auStack_258[0];
      piVar11 = (int *)(ulong)((int)piVar11 + 1);
    }
    uVar9 = (ulong)(uint)((int)piVar11 << 1);
    puVar8 = auStack_258;
    lVar7 = 10;
    lVar12 = param_2;
    FUN_108b8e474();
    if ((int)lVar12 != 0) goto LAB_108b8d8c4;
    puVar8 = *(undefined2 **)(param_5 + 0x18);
    uVar9 = *(ulong *)(param_5 + 0x20);
    piVar4 = param_1;
    lVar7 = param_2;
    FUN_108b8d908();
  }
  func_0x000108b8dbb4(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_108b8d908;
  lVar6 = lVar7;
  puStack_2a0 = param_3;
  uStack_298 = param_4;
  piStack_290 = piVar11;
  piStack_288 = param_1;
  uStack_280 = param_5;
  lStack_278 = param_2;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x000108b8dbe0();
  uStack_2a8 = extraout_x8_00;
  func_0x000108b8e840();
  lVar12 = 0;
  if ((int)lVar6 == 0) {
    pcVar10 = (char *)((long)piVar4 + 0x41);
    for (; lVar12 != 0x14; lVar12 = lVar12 + 1) {
      if (*pcVar10 == '\0') goto LAB_108b8d948;
      pcVar10 = pcVar10 + 0x40;
    }
    uVar2 = 1;
    goto LAB_108b8db74;
  }
LAB_108b8d948:
  if (*(undefined2 **)(lVar7 + 0x18) == (undefined2 *)0x0) {
    if (puVar8 != (undefined2 *)0x0) goto LAB_108b8d97c;
  }
  else {
    uVar9 = *(ulong *)(lVar7 + 0x20);
    puVar8 = *(undefined2 **)(lVar7 + 0x18);
LAB_108b8d97c:
    uVar2 = *(char *)(lVar7 + 0x38) == '\x01';
    if ((bool)uVar2) {
      uStack_2b8 = *(undefined8 *)(lVar7 + 0x30);
      uStack_2c0 = *(undefined8 *)(lVar7 + 0x28);
    }
    else if ((*(byte *)(piVar4 + 0x144) >> 1 & 1) != 0) {
      func_0x000108b8dc70();
      lVar5 = lVar6;
      func_0x000108b8dc50();
      if ((lVar5 == 0) || (lVar6 == 0)) {
        func_0x000108b8dca0(uStack_2c0);
        lVar6 = lVar5;
        goto LAB_108b8dad8;
      }
      FUN_108b8de2c(lVar6,uStack_2c2,lVar5,uStack_2c4,puVar8,uVar9,&uStack_2c0);
      func_0x000108b8dca0(uStack_2c0);
    }
    lVar6 = lVar7;
    FUN_108b8e354(lVar7,8,0x14);
    if (lVar6 == 0) goto LAB_108b8db74;
    uVar1 = piVar4[0x144];
    iVar3 = *piVar4;
    if ((uVar1 >> 1 & 1) == 0) {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar13 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar13 = 0xfffffffffffffff4;
      }
      lVar6 = *(long *)(lVar7 + 8);
      func_0x000108b8dc00(uVar13);
    }
    else {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar13 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar13 = 0xfffffffffffffff4;
      }
      lVar6 = *(long *)(lVar7 + 8);
      func_0x000108b8dc00(uVar13);
    }
    FUN_108b8dd60();
  }
LAB_108b8dad8:
  iVar3 = (int)lVar6;
  uVar2 = *piVar4 - 1U == 1;
  if ((*piVar4 - 1U < 2) && ((*(byte *)(piVar4 + 0x144) >> 2 & 1) != 0)) {
    FUN_108b8e354(lVar7,0x8028,4);
    if (lVar7 != 0) {
      return;
    }
  }
  else {
    func_0x000108b8dc20();
    if (iVar3 == 0) {
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 8) + 4);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 4) = *(undefined8 *)(*(long *)(lVar7 + 8) + 0xc);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 2) = uVar13;
      lVar6 = lVar7;
      func_0x000108b8e80c();
      piVar4[lVar12 * 0x10 + 6] = (int)lVar6;
      *(undefined2 **)(piVar4 + lVar12 * 0x10 + 8) = puVar8;
      *(ulong *)(piVar4 + lVar12 * 0x10 + 10) = uVar9;
      uVar13 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 0xe) = *(undefined8 *)(lVar7 + 0x30);
      *(undefined8 *)(piVar4 + lVar12 * 0x10 + 0xc) = uVar13;
      *(undefined1 *)(piVar4 + lVar12 * 0x10 + 0x10) = *(undefined1 *)(lVar7 + 0x38);
      *(undefined1 *)((long)piVar4 + lVar12 * 0x40 + 0x41) = 1;
    }
    *(undefined2 **)(lVar7 + 0x18) = puVar8;
    *(ulong *)(lVar7 + 0x20) = uVar9;
  }
LAB_108b8db74:
  func_0x000108b8dbb4(uStack_2a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b8d908; end: 108b8db9b;  */

/* WARNING: Possible PIC construction at 0x000108b8da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8db08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8da38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8dac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8da3c) */
/* WARNING: Removing unreachable block (ram,0x000108b8dab0) */
/* WARNING: Removing unreachable block (ram,0x000108b8db0c) */
/* WARNING: Removing unreachable block (ram,0x000108b8da18) */
/* WARNING: Removing unreachable block (ram,0x000108b8dac4) */
/* WARNING: Removing unreachable block (ram,0x000108b8dad0) */

void FUN_108b8d908(int *param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  lVar5 = param_2;
  func_0x000108b8dbe0();
  uStack_48 = extraout_x8;
  func_0x000108b8e840();
  lVar7 = 0;
  if ((int)lVar5 == 0) {
    pcVar6 = (char *)((long)param_1 + 0x41);
    for (; lVar7 != 0x14; lVar7 = lVar7 + 1) {
      if (*pcVar6 == '\0') goto LAB_108b8d948;
      pcVar6 = pcVar6 + 0x40;
    }
    uVar2 = 1;
    goto LAB_108b8db74;
  }
LAB_108b8d948:
  if (*(long *)(param_2 + 0x18) == 0) {
    if (param_3 != 0) goto LAB_108b8d97c;
  }
  else {
    param_4 = *(undefined8 *)(param_2 + 0x20);
    param_3 = *(long *)(param_2 + 0x18);
LAB_108b8d97c:
    uVar2 = *(char *)(param_2 + 0x38) == '\x01';
    if ((bool)uVar2) {
      uStack_58 = *(undefined8 *)(param_2 + 0x30);
      uStack_60 = *(undefined8 *)(param_2 + 0x28);
    }
    else if ((*(byte *)(param_1 + 0x144) >> 1 & 1) != 0) {
      func_0x000108b8dc70();
      lVar4 = lVar5;
      func_0x000108b8dc50();
      if ((lVar4 == 0) || (lVar5 == 0)) {
        func_0x000108b8dca0(uStack_60);
        lVar5 = lVar4;
        goto LAB_108b8dad8;
      }
      FUN_108b8de2c(lVar5,uStack_62,lVar4,uStack_64,param_3,param_4,&uStack_60);
      func_0x000108b8dca0(uStack_60);
    }
    lVar5 = param_2;
    FUN_108b8e354(param_2,8,0x14);
    if (lVar5 == 0) goto LAB_108b8db74;
    uVar1 = param_1[0x144];
    iVar3 = *param_1;
    if ((uVar1 >> 1 & 1) == 0) {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar8 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar8 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(param_2 + 8);
      func_0x000108b8dc00(uVar8);
    }
    else {
      if (iVar3 == 3) {
        return;
      }
      if (iVar3 != 2) {
        return;
      }
      uVar8 = 0xffffffffffffffec;
      if ((uVar1 & 4) != 0) {
        uVar8 = 0xfffffffffffffff4;
      }
      lVar5 = *(long *)(param_2 + 8);
      func_0x000108b8dc00(uVar8);
    }
    FUN_108b8dd60();
  }
LAB_108b8dad8:
  iVar3 = (int)lVar5;
  uVar2 = *param_1 - 1U == 1;
  if ((*param_1 - 1U < 2) && ((*(byte *)(param_1 + 0x144) >> 2 & 1) != 0)) {
    FUN_108b8e354(param_2,0x8028,4);
    if (param_2 != 0) {
      return;
    }
  }
  else {
    func_0x000108b8dc20();
    if (iVar3 == 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_2 + 8) + 4);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 4) = *(undefined8 *)(*(long *)(param_2 + 8) + 0xc);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 2) = uVar8;
      lVar5 = param_2;
      func_0x000108b8e80c();
      param_1[lVar7 * 0x10 + 6] = (int)lVar5;
      *(long *)(param_1 + lVar7 * 0x10 + 8) = param_3;
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 10) = param_4;
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 0xe) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + lVar7 * 0x10 + 0xc) = uVar8;
      *(undefined1 *)(param_1 + lVar7 * 0x10 + 0x10) = *(undefined1 *)(param_2 + 0x38);
      *(undefined1 *)((long)param_1 + lVar7 * 0x40 + 0x41) = 1;
    }
    *(long *)(param_2 + 0x18) = param_3;
    *(undefined8 *)(param_2 + 0x20) = param_4;
  }
LAB_108b8db74:
  func_0x000108b8dbb4(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108b8db9c; end: 108b8dd5f;  */

void FUN_108b8db9c(void)

{
  return;
}



/* Entry: 108b8dd60; end: 108b8de2b;  */

/* WARNING: Possible PIC construction at 0x000108b8de6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b8de8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b8de70) */
/* WARNING: Removing unreachable block (ram,0x000108b8de90) */
/* WARNING: Removing unreachable block (ram,0x000108b8df1c) */
/* WARNING: Removing unreachable block (ram,0x000108b8df08) */

void FUN_108b8dd60(long param_1,ulong param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  ushort uStack_a2;
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
  long lStack_50;
  long lStack_48;
  long lStack_38;
  ushort *puStack_30;
  long lStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_a2 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_30 = &uStack_a2;
  uStack_58 = 2;
  uStack_60 = 2;
  lStack_28 = param_1 + 4;
  lStack_50 = param_2 - 0x1c;
  pcVar4 = (char *)0x3;
  uVar2 = (param_2 & 0x3f) == 0x18;
  if ((!(bool)uVar2) && (param_7 != 0)) {
    lStack_48 = 0x40 - ((ulong)((int)param_2 + 0x28) & 0x3f);
    puStack_20 = &uStack_a0;
    pcVar4 = (char *)0x4;
  }
  plVar5 = &lStack_38;
  lStack_38 = param_1;
  FUN_108b8cbfc(param_5);
  func_0x000108b8df88(uStack_18);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  for (pcVar3 = pcVar4; *pcVar3 == '\"'; pcVar3 = pcVar3 + 1) {
  }
  pcVar4 = pcVar4 + (long)plVar5 + -1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + -1;
  } while (cVar1 == '\"' || cVar1 == '\0');
  return;
}



/* Entry: 108b8de2c; end: 108b8df1f;  */

void FUN_108b8de2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char *param_7)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [9];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_6;
  uStack_b0 = param_4;
  uStack_a8 = param_2;
  FUN_108b8df20(param_3,&uStack_b0);
  FUN_108b8df20(param_5,&uStack_b8);
  FUN_108b8df20(param_1,&uStack_a8);
  alStack_a0[5] = 0;
  alStack_a0[4] = 0;
  alStack_a0[7] = 0;
  alStack_a0[6] = 0;
  uStack_58 = 0;
  alStack_a0[8] = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  alStack_a0[1] = 0x1032547698badcfe;
  alStack_a0[0] = -0x1032547698badcff;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  func_0x000107c2b4a0(alStack_a0,param_3,uStack_b0);
  func_0x000108b8df78();
  func_0x000107c2b4a0(alStack_a0,param_1,uStack_a8);
  func_0x000108b8df78();
  func_0x000107c2b4a0(alStack_a0,param_5,uStack_b8);
  plVar2 = alStack_a0;
  func_0x000107c2b4a4();
  func_0x000108b8df88(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *plVar2;
  lVar4 = lVar3 + -1;
  for (pcVar1 = param_7; *pcVar1 == '\"'; pcVar1 = pcVar1 + 1) {
    *plVar2 = lVar4;
    lVar4 = lVar4 + -1;
  }
  pcVar1 = param_7 + lVar3 + -1;
  while (*pcVar1 == '\"' || *pcVar1 == '\0') {
    *plVar2 = lVar4;
    lVar4 = lVar4 + -1;
    pcVar1 = pcVar1 + -1;
  }
  return;
}



/* Entry: 108b8df20; end: 108b8df9b;  */

void FUN_108b8df20(char *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar3 = lVar2 + -1;
  for (pcVar1 = param_1; *pcVar1 == '\"'; pcVar1 = pcVar1 + 1) {
    *param_2 = lVar3;
    lVar3 = lVar3 + -1;
  }
  pcVar1 = param_1 + lVar2 + -1;
  while (*pcVar1 == '\"' || *pcVar1 == '\0') {
    *param_2 = lVar3;
    lVar3 = lVar3 + -1;
    pcVar1 = pcVar1 + -1;
  }
  return;
}



/* Entry: 108b8df9c; end: 108b8dfeb;  */

bool FUN_108b8df9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0x13 < uVar2) {
    **(undefined4 **)(param_1 + 8) = 0;
    func_0x000108b8e938(*(undefined8 *)(param_1 + 8));
    lVar1 = *(long *)(param_1 + 8);
    uVar3 = *param_4;
    *(undefined8 *)(lVar1 + 0xc) = param_4[1];
    *(undefined8 *)(lVar1 + 4) = uVar3;
  }
  return 0x13 < uVar2;
}



/* Entry: 108b8dfec; end: 108b8e0ab;  */

long FUN_108b8dfec(long *param_1,uint param_2,undefined2 *param_3)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  piVar1 = (int *)*param_1;
  lVar2 = param_1[1];
  if (piVar1 != (int *)0x0) {
    uVar5 = 0x14;
    if (param_2 != 0x15) {
      uVar5 = param_2;
    }
    uVar6 = 0x15;
    if (param_2 != 0x14) {
      uVar6 = uVar5;
    }
    if (*piVar1 == 3) {
      param_2 = uVar6;
    }
  }
  uVar7 = 0x14;
  while( true ) {
    if (((ulong)(CONCAT11(*(undefined1 *)(lVar2 + 2),*(undefined1 *)(lVar2 + 3)) + 0x14) & 0xffff)
        <= uVar7) {
      return 0;
    }
    uVar3 = *(ushort *)(lVar2 + uVar7);
    uVar4 = ((ushort *)(lVar2 + uVar7))[1];
    uVar5 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    uVar8 = (ulong)uVar5;
    if (param_2 == ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) break;
    uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    if (uVar6 == 8) {
      if (param_2 != 0x8028) {
        return 0;
      }
    }
    else if (uVar6 == 0x8028) {
      return 0;
    }
    if ((piVar1 == (int *)0x0) || (-1 < (char)piVar1[0x144])) {
      uVar8 = (ulong)(uVar5 + 3) & 0x1fffc;
    }
    uVar7 = uVar8 + uVar7 + 4;
  }
  *param_3 = (short)uVar5;
  return lVar2 + uVar7 + 4;
}



/* Entry: 108b8e0ac; end: 108b8e0e3;  */

undefined4 FUN_108b8e0ac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  short sStack_12;
  
  sStack_12 = 0;
  FUN_108b8dfec(param_1,param_2,&sStack_12);
  uVar1 = 0;
  if (sStack_12 != 0) {
    uVar1 = 2;
  }
  if (param_1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108b8e0e4; end: 108b8e183;  */

undefined8 FUN_108b8e0e4(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *unaff_x19;
  undefined2 uStack_22;
  
  func_0x000108b8e898();
  if (param_1 == (uint *)0x0) {
    uVar2 = 1;
  }
  else if (uStack_22 == 4) {
    uVar2 = 0;
    uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    *unaff_x19 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


