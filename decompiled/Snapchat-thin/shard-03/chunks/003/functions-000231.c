/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102775e14; end: 102775e37;  */

void FUN_102775e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1027760cc(param_1,param_2,param_4);
  return;
}



/* Entry: 102775e38; end: 102775e4b;  */

bool FUN_102775e38(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102775e4c; end: 102775ef7;  */

void FUN_102775e4c(void)

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



/* Entry: 102775ef8; end: 102775f07;  */

void FUN_102775ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102775f08; end: 1027760cb;  */

ulong FUN_102775f08(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102775fec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102775ff0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b2dd8;
    func_0x000107c61168(PTR_PTR_1126b2dd8);
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
    puVar4 = PTR_PTR_1126b2dd8;
    func_0x000107c61168(PTR_PTR_1126b2dd8);
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
  func_0x00010277698c(0,0x112ebc9a0,&PTR_PTR_1126b2dd8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027760cc);
  (*pcVar2)();
}



/* Entry: 1027760cc; end: 1027768e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027760cc(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_110;
  ulong auStack_100 [5];
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  
  lVar3 = 0;
  func_0x000100371f10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar4 = param_1;
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)plVar4 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    auStack_100[1] = 0;
    auStack_100[0] = 0;
    auStack_100[3] = 0;
    auStack_100[2] = 0;
LAB_1027763f4:
    puVar8 = auStack_100;
    func_0x00010006e7f4();
  }
  else {
    lVar21 = *plVar4;
    uVar5 = plVar4[1];
    func_0x000107c61434(uVar5);
    func_0x000107c61434(param_3);
    uVar15 = uVar5;
    func_0x000100029284(lVar21);
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(param_3);
      auStack_100[1] = 0;
      auStack_100[0] = 0;
      auStack_100[3] = 0;
      auStack_100[2] = 0;
      func_0x000107c6142c(uVar5);
      goto LAB_1027763f4;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar21 * 0x20,auStack_100);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(param_3);
    if (auStack_100[3] == 0) goto LAB_1027763f4;
    puVar8 = &uStack_d8;
    func_0x000107c6147c(puVar8,auStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000100083b20(auStack_100);
      uVar5 = auStack_100[3];
      func_0x0001000a8868(auStack_100,auStack_100[3]);
      (**(code **)(auStack_100[4] + 0x10))(uVar5,auStack_100[4]);
      if (uVar5 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar15 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar15 != 0) {
        uStack_168 = uVar5 & 0xc000000000000001;
        uStack_170 = uVar5 & 0xffffffffffffff8;
        lStack_178 = uVar5 + 0x20;
        uVar12 = 0;
        uStack_160 = uVar15;
        lStack_158 = param_2;
        lStack_150 = (long)&uStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        lStack_148 = lVar3;
        uStack_130 = uVar5;
        do {
          if (uStack_168 == 0) {
            if (*(ulong *)(uStack_170 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1027768b8);
              (*pcVar1)();
            }
            uVar5 = *(ulong *)(lStack_178 + uVar12 * 8);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar12;
            func_0x00010275c620(uVar12,uStack_130);
          }
          lVar3 = _DAT_112ebd970;
          uStack_140 = uVar12 + 1;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1027768bc);
            (*pcVar1)();
          }
          uVar15 = *(ulong *)(uVar5 + _DAT_112ebd970);
          uVar12 = uVar15 & 0xffffffffffffff8;
          if (uVar15 >> 0x3e == 0) {
            uVar16 = *(ulong *)(uVar12 + 0x10);
          }
          else {
            uVar16 = uVar12;
            if (0x7fffffffffffffff < uVar15) {
              uVar16 = uVar15;
            }
            func_0x000107c60480();
          }
          uVar20 = 0;
LAB_1027762dc:
          if (uVar16 != uVar20) {
            if ((uVar15 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar12 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10277688c);
                (*pcVar1)();
              }
              uVar6 = *(ulong *)(uVar15 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar20;
              func_0x00010275c7bc(uVar20,uVar15);
            }
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102776888);
              (*pcVar1)();
            }
            uVar7 = *(ulong *)(uVar6 + _DAT_112ebd9d0);
            if (uVar7 != uStack_d8 ||
                (undefined8 *)((ulong *)(uVar6 + _DAT_112ebd9d0))[1] != puStack_d0)
            goto code_r0x000102776334;
            func_0x000107c6142c(uStack_130);
            func_0x000107c61170(uVar6);
            goto LAB_102776494;
          }
          func_0x000107c61170(uVar5);
          uVar5 = uStack_130;
          uVar12 = uStack_140;
        } while (uStack_140 != uStack_160);
      }
      func_0x000107c6142c(puStack_d0);
      func_0x000107c6142c(uVar5);
      puVar8 = auStack_100;
      func_0x0001000834e4();
      uVar10 = 1;
      goto LAB_102776400;
    }
  }
  uVar10 = 0;
LAB_102776400:
  func_0x000102776918();
  func_0x000107c613f8(&UNK_1105467b0,puVar8,0,0);
  *(undefined1 *)puVar8 = uVar10;
  func_0x000107c61654();
  return;
code_r0x000102776334:
  func_0x000107c605b8();
  func_0x000107c61170(uVar6);
  uVar20 = uVar20 + 1;
  if ((uVar7 & 1) != 0) {
    func_0x000107c6142c(uStack_130);
LAB_102776494:
    func_0x0001000834e4(auStack_100);
    lVar21 = ((undefined8 *)(uVar5 + _DAT_112ebd980))[1];
    if (lVar21 == 0) {
      uStack_170 = *(undefined8 *)(uVar5 + _DAT_112ebd968);
      lStack_178 = ((undefined8 *)(uVar5 + _DAT_112ebd968))[1];
      func_0x000107c61434();
    }
    else {
      uStack_170 = *(undefined8 *)(uVar5 + _DAT_112ebd980);
      lStack_178 = lVar21;
    }
    puVar13 = (undefined8 *)(uVar5 + _DAT_112ebd988);
    puVar18 = (undefined8 *)(uVar5 + _DAT_112ebd990);
    uStack_128 = puVar13[1];
    uStack_130 = *puVar13;
    uVar19 = puVar13[1];
    uStack_138 = puVar18[1];
    uStack_140 = *puVar18;
    uVar17 = puVar18[1];
    uStack_160 = *(undefined8 *)(uVar5 + _DAT_112ebd998);
    uStack_168 = CONCAT44(uStack_168._4_4_,
                          (uint)*(byte *)((undefined8 *)(uVar5 + _DAT_112ebd998) + 1));
    uVar15 = *(ulong *)(uVar5 + lVar3);
    if (uVar15 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar12 = uVar15;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(lVar21);
    func_0x000107c61434(uVar19);
    func_0x000107c61434(uVar17);
    if (uVar12 == 0) {
      uStack_180 = 0;
      uVar17 = 0;
      goto LAB_102776680;
    }
    uVar16 = 0;
    goto LAB_1027765a8;
  }
  goto LAB_1027762dc;
  while( true ) {
    func_0x000107c61170(uVar20);
    uVar16 = uVar16 + 1;
    if (uVar6 == uVar12) break;
LAB_1027765a8:
    if ((uVar15 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10277689c);
        (*pcVar1)();
      }
      uVar20 = *(ulong *)(uVar15 + uVar16 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar20 = uVar16;
      func_0x00010275c7bc(uVar16,uVar15);
    }
    uVar6 = uVar16 + 1;
    if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102776898);
      (*pcVar1)();
    }
    uVar7 = *(ulong *)(uVar20 + _DAT_112ebd9d0);
    if ((uVar7 == uStack_d8 && (undefined8 *)((ulong *)(uVar20 + _DAT_112ebd9d0))[1] == puStack_d0)
       || (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
      uStack_180 = *(undefined8 *)(uVar20 + _DAT_112ebd9d8);
      uVar17 = ((undefined8 *)(uVar20 + _DAT_112ebd9d8))[1];
      func_0x000107c61434();
      func_0x000107c61170(uVar20);
      goto LAB_102776680;
    }
  }
  uStack_180 = 0;
  uVar17 = 0;
LAB_102776680:
  puVar18 = *(undefined8 **)(uVar5 + lVar3);
  puVar13 = (undefined8 *)((ulong)puVar18 & 0xffffffffffffff8);
  if ((ulong)puVar18 >> 0x3e == 0) {
    puStack_110 = (undefined8 *)puVar13[2];
  }
  else {
    puStack_110 = puVar13;
    if ((undefined8 *)0x7fffffffffffffff < puVar18) {
      puStack_110 = puVar18;
    }
    func_0x000107c60480();
  }
  puVar11 = (undefined8 *)0x0;
  while( true ) {
    if (puStack_110 == puVar11) {
      func_0x000107c6142c();
      puVar11 = (undefined8 *)0x0;
      uStack_70 = 1;
      puVar9 = puStack_d0;
      goto LAB_10277676c;
    }
    if (((ulong)puVar18 & 0xc000000000000001) == 0) {
      if ((undefined8 *)puVar13[2] <= puVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102776890);
        (*pcVar1)();
      }
      puVar9 = (undefined8 *)puVar18[(long)puVar11 + 4];
      func_0x000107c61174();
    }
    else {
      puVar9 = puVar11;
      func_0x00010275c7bc(puVar11,puVar18);
    }
    uVar15 = *(ulong *)((long)puVar9 + _DAT_112ebd9d0);
    if (uVar15 == uStack_d8 &&
        (undefined8 *)((ulong *)((long)puVar9 + _DAT_112ebd9d0))[1] == puStack_d0) break;
    func_0x000107c605b8();
    func_0x000107c61170(puVar9);
    if ((uVar15 & 1) != 0) {
      func_0x000107c6142c();
      puVar9 = puStack_d0;
      goto LAB_102776768;
    }
    bVar2 = SCARRY8((long)puVar11,1);
    puVar11 = (undefined8 *)((long)puVar11 + 1);
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102776894);
      (*pcVar1)();
    }
  }
  func_0x000107c6142c(puStack_d0);
  func_0x000107c61170();
LAB_102776768:
  uStack_70 = 0;
LAB_10277676c:
  uStack_c8 = uStack_170;
  lStack_c0 = lStack_178;
  uStack_a0 = uStack_138;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_128;
  uStack_b8 = uStack_130;
  uStack_98 = uStack_160;
  uStack_90 = (undefined1)uStack_168;
  uStack_88 = uStack_180;
  uStack_80 = uVar17;
  puStack_78 = puVar11;
  func_0x000103bb485c();
  if (param_1 == (long *)*puVar9 && lStack_158 == puVar9[1]) {
    uVar14 = 0;
  }
  else {
    func_0x000107c605b8(param_1);
    uVar14 = ((uint)param_1 ^ 0xffffffff) & 1;
  }
  lVar21 = lStack_148;
  lVar3 = lStack_150;
  func_0x000100083b20(auStack_100);
  func_0x000100083b20(lVar3);
  uVar17 = *(undefined8 *)(lVar3 + *(int *)(lVar21 + 0x18));
  func_0x000107c61174(uVar17);
  func_0x00010275acf8(lVar3);
  func_0x0001038d8ac8(uVar14,&uStack_c8,uVar17);
  func_0x000107c61574(auStack_100[0]);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  FUN_102776958(&uStack_c8);
  return;
}



/* Entry: 1027768e8; end: 1027768f7;  */

undefined1  [16] FUN_1027768e8(void)

{
  return ZEXT816(0x110546720);
}



/* Entry: 1027768f8; end: 102776957;  */

void FUN_1027768f8(void)

{
  func_0x000107c61168(&PTR_PTR_112ebcfa0);
  return;
}



/* Entry: 102776958; end: 1027769cb;  */

undefined8 FUN_102776958(undefined8 param_1)

{
  (*(code *)&DAT_1038d840c)();
  return param_1;
}



/* Entry: 1027769cc; end: 102776b33;  */

int FUN_1027769cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102776a48;
        goto LAB_102776a2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102776a2c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102776a48:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102776b34; end: 102776b73;  */

void FUN_102776b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad73c0;
  func_0x000107c61520(&UNK_10dad73c0,&UNK_1105467b0);
  puRam0000000112ebd020 = puVar1;
  return;
}



/* Entry: 102776b74; end: 102776e03;  */

void FUN_102776b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  puVar1 = &UNK_110546838;
  func_0x000107c613fc(&UNK_110546838,0x48,7);
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
  func_0x0001000823a8(FUN_102776e04,puVar1);
  return;
}



/* Entry: 102776e04; end: 102776e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102776e04(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar10 = lVar1;
  FUN_102778df0();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar9 = _DAT_112ebd028;
  puVar12 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar12[3] = 4;
  puVar12[2] = 2;
  puVar13 = puVar12;
  func_0x000103bb46b4();
  puVar14 = (undefined8 *)puVar13[1];
  puVar12[4] = *puVar13;
  puVar12[5] = puVar14;
  func_0x000107c61434();
  func_0x000103bb4b44();
  uVar4 = puVar14[1];
  puVar12[6] = *puVar14;
  puVar12[7] = uVar4;
  func_0x000107c61434();
  puVar14 = puVar12;
  func_0x000100111634();
  func_0x000107c61588(puVar12);
  func_0x000107c61408(puVar12 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(lVar11 + lVar9) = puVar14;
  *(long *)(lVar11 + _DAT_112ebd030) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112ebd038) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112ebd040) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112ebd048) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112ebd050) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112ebd058) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112ebd060) = uVar16;
  puVar8 = PTR_s_init_1125d9248;
  lStack_b0 = lVar11;
  lStack_a8 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar16);
  plVar15 = &lStack_b0;
  func_0x000107c61154(plVar15,puVar8);
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_110546878;
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 102776e18; end: 102776f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102776e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ebd028;
  puVar3 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar3[3] = 4;
  puVar3[2] = 2;
  puVar4 = puVar3;
  func_0x000103bb46b4();
  puVar5 = (undefined8 *)puVar4[1];
  puVar3[4] = *puVar4;
  puVar3[5] = puVar5;
  func_0x000107c61434();
  func_0x000103bb4b44();
  uVar1 = puVar5[1];
  puVar3[6] = *puVar5;
  puVar3[7] = uVar1;
  func_0x000107c61434();
  puVar5 = puVar3;
  func_0x000100111634();
  func_0x000107c61588(puVar3);
  func_0x000107c61408(puVar3 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd030) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd038) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd040) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd048) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd050) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd058) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd060) = param_7;
  func_0x000107c61154(auStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102776f74; end: 1027772cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102776f74(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  long alStack_a0 [6];
  long lStack_70;
  ulong uStack_68;
  
  plVar1 = param_1;
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112ebd028));
  if (((ulong)plVar1 & 1) == 0) {
    return;
  }
  if ((param_4 == 0) || (FUN_10278552c(), *(long *)(param_4 + 0x10) == 0)) {
    alStack_a0[1] = 0;
    alStack_a0[0] = 0;
    alStack_a0[3] = 0;
    alStack_a0[2] = 0;
  }
  else {
    lVar2 = *plVar1;
    uVar8 = plVar1[1];
    func_0x000107c61434(uVar8);
    func_0x000107c61434(param_4);
    uVar7 = uVar8;
    func_0x000100029284(lVar2);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(param_4);
      alStack_a0[1] = 0;
      alStack_a0[0] = 0;
      alStack_a0[3] = 0;
      alStack_a0[2] = 0;
      func_0x000107c6142c(uVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar2 * 0x20,alStack_a0);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(param_4);
      if (alStack_a0[3] != 0) {
        plVar1 = &lStack_70;
        func_0x000107c6147c(plVar1,alStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lVar2 = lStack_70;
        if (((ulong)plVar1 & 1) == 0) goto LAB_102777134;
        func_0x000100083b20(alStack_a0);
        lVar9 = alStack_a0[3];
        func_0x0001000a8868(alStack_a0,alStack_a0[3]);
        uVar8 = uStack_68;
        (**(code **)(alStack_a0[4] + 0x20))(lVar2,uStack_68,lVar9,alStack_a0[4]);
        func_0x000107c6142c(uStack_68);
        plVar1 = alStack_a0;
        if (lVar2 == 0) {
          func_0x0001000834e4();
          goto LAB_102777134;
        }
        func_0x0001000834e4();
        if (param_3 == 0) {
          alStack_a0[1] = 0;
          alStack_a0[0] = 0;
          alStack_a0[3] = 0;
          alStack_a0[2] = 0;
LAB_102777228:
          func_0x00010006e7f4(alStack_a0);
        }
        else {
          ppuVar3 = &PTR____CFConstantStringClassReference_110dcab38;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
          if (*(long *)(param_3 + 0x10) == 0) {
LAB_1027771a4:
            alStack_a0[1] = 0;
            alStack_a0[0] = 0;
            alStack_a0[3] = 0;
            alStack_a0[2] = 0;
          }
          else {
            func_0x000107c61434(param_3);
            uVar7 = uVar8;
            func_0x000100029284(ppuVar3);
            if ((uVar7 & 1) == 0) {
              func_0x000107c6142c(param_3);
              goto LAB_1027771a4;
            }
            func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)ppuVar3 * 0x20,alStack_a0);
            func_0x000107c6142c(uVar8);
            uVar8 = param_3;
          }
          func_0x000107c6142c(uVar8);
          if (alStack_a0[3] == 0) goto LAB_102777228;
          uVar4 = 0;
          func_0x0001013c5ec8(0);
          plVar1 = &lStack_70;
          plVar10 = alStack_a0;
          func_0x000107c6147c(plVar1,plVar10,PTR___sypN_11034f1a8 + 8,uVar4,6);
          if (((ulong)plVar1 & 1) != 0) {
            lVar5 = lStack_70;
            func_0x000107c52060();
            func_0x000107c61180();
            func_0x000107c61170(lStack_70);
            lVar9 = lVar5;
            func_0x000107c5faec();
            func_0x000107c61170(lVar5);
            goto LAB_102777238;
          }
        }
        lVar9 = 0;
        plVar10 = (long *)0x0;
LAB_102777238:
        puVar6 = &UNK_110546860;
        func_0x000107c613fc(&UNK_110546860,0x40,7);
        *(long **)(puVar6 + 0x10) = param_1;
        *(undefined8 *)(puVar6 + 0x18) = param_2;
        *(long *)(puVar6 + 0x20) = unaff_x20;
        *(long *)(puVar6 + 0x28) = lVar2;
        *(long *)(puVar6 + 0x30) = lVar9;
        *(long **)(puVar6 + 0x38) = plVar10;
        func_0x000107c61434(param_2);
        func_0x000107c61174(unaff_x20);
        func_0x000107c61174(lVar2);
        uVar4 = 0xc1;
        func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad7430,puVar6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(uVar4);
        return;
      }
    }
  }
  plVar1 = alStack_a0;
  func_0x00010006e7f4();
LAB_102777134:
  FUN_102778cd8();
  func_0x000107c613f8(&UNK_110546930,plVar1,0,0);
  *(undefined1 *)plVar1 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 1027772d0; end: 102777343;  */

void FUN_1027772d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102777344,uVar1,uVar2);
  return;
}



/* Entry: 102777344; end: 1027773f7;  */

void FUN_102777344(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  lVar8 = *(long *)(unaff_x22 + 0x18);
  func_0x000103bb4b44();
  if (lVar3 != *param_1 || lVar8 != param_1[1]) {
    uVar4 = *(ulong *)(unaff_x22 + 0x10);
    func_0x000107c605b8(uVar4,*(undefined8 *)(unaff_x22 + 0x18),*param_1,param_1[1],0);
    if ((uVar4 & 1) == 0) {
      plVar2 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x68) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102777480;
      lVar3 = *(long *)(unaff_x22 + 0x30);
      lVar8 = *(long *)(unaff_x22 + 0x20);
      lVar1 = *(long *)(unaff_x22 + 0x28);
      plVar2[4] = *(long *)(unaff_x22 + 0x38);
      plVar2[5] = lVar8;
      plVar2[2] = lVar1;
      plVar2[3] = lVar3;
      lVar3 = 0;
      func_0x00010392d0f4();
      plVar2[6] = lVar3;
      uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
      uVar6 = uVar4 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar2[7] = uVar6;
      uVar4 = uVar4 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar2[8] = uVar4;
      lVar3 = 0;
      func_0x000107c5ede0();
      plVar2[9] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[10] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
      uVar6 = uVar4 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar2[0xb] = uVar6;
      uVar4 = uVar4 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar2[0xc] = uVar4;
      lVar8 = 0;
      func_0x000107c5fcec();
      lVar3 = lVar8;
      func_0x000107c5fce8();
      plVar2[0xd] = lVar3;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar2[0xe] = lVar8;
      plVar2[0xf] = lVar3;
      pcVar7 = FUN_102777bbc;
      goto LAB_107c615e0;
    }
  }
  plVar2 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1027773f8;
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar8 = *(long *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x28);
  plVar2[0x18] = *(long *)(unaff_x22 + 0x38);
  plVar2[0x19] = lVar8;
  plVar2[0x16] = lVar1;
  plVar2[0x17] = lVar3;
  lVar3 = 0;
  func_0x00010392d0f4();
  plVar2[0x1a] = lVar3;
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1b] = uVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar2[0x1c] = lVar3;
  func_0x000107c5fce8();
  plVar2[0x1d] = lVar3;
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[0x1e] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_1027775fc;
  plVar5[0xb] = lVar1;
  plVar5[0xc] = lVar8;
  plVar5[10] = uVar4;
  pcVar7 = FUN_102778524;
  lVar8 = 0;
  lVar3 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,lVar8,lVar3);
  return;
}



/* Entry: 1027773f8; end: 10277744f;  */

void FUN_1027773f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102777450;
  }
  else {
    pcVar1 = FUN_1027774d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 102777450; end: 10277747f;  */

void FUN_102777450(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010277747c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102777480; end: 1027774d7;  */

void FUN_102777480(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    uVar1 = 0x102779030;
  }
  else {
    uVar1 = 0x102777514;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (uVar1,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 1027774d8; end: 10277754f;  */

void FUN_1027774d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102777510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102777550; end: 1027775fb;  */

void FUN_102777550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(long *)(unaff_x22 + 200) = unaff_x20;
  *(long *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  lVar1 = 0;
  func_0x00010392d0f4();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1027775fc;
  plVar4[0xb] = param_1;
  plVar4[0xc] = unaff_x20;
  plVar4[10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102778524,0,0);
  return;
}



/* Entry: 1027775fc; end: 10277767b;  */

void FUN_1027775fc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf0);
  uVar4 = *(undefined8 *)(lVar3 + 0xe0);
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10277767c;
  }
  else {
    pcVar2 = FUN_102777aac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 10277767c; end: 102777aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277767c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c614c4(uVar10,uVar11);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xd8);
  if ((int)uVar10 == 1) {
    FUN_102778fb8();
    FUN_102778cd8();
    func_0x000107c613f8(&UNK_110546930,puVar2,0,0);
    *(undefined1 *)puVar2 = 2;
    func_0x000107c61654();
  }
  else {
    uVar11 = *puVar2;
    func_0x000100083b20(unaff_x22 + 0x70);
    lVar3 = *(long *)(unaff_x22 + 0x88);
    lVar9 = *(long *)(unaff_x22 + 0x90);
    func_0x0001000a8868(unaff_x22 + 0x70,lVar3);
    (**(code **)(lVar9 + 8))(lVar3,lVar9);
    if (lVar3 != 0) {
      lVar9 = *(long *)(unaff_x22 + 0xb0);
      func_0x0001000834e4(unaff_x22 + 0x70);
      puVar2 = (undefined8 *)(lVar9 + _DAT_112ebd9d8);
      lVar9 = puVar2[1];
      if (lVar9 == 0) {
        puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0xb0) + _DAT_112ebd9d0);
        uVar10 = *puVar2;
        lVar12 = puVar2[1];
        func_0x000107c61434(lVar12);
      }
      else {
        uVar10 = *puVar2;
        lVar12 = lVar9;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x0001038eac78(0);
      func_0x000107c610f8();
      func_0x000107c61434(lVar9);
      func_0x000107c61434(uVar13);
      uVar5 = 4;
      func_0x0001038ea984(4,0xe,2,uVar10,lVar12,0,0,uVar15,uVar13,0);
      puVar7 = &UNK_110546950;
      puVar6 = puVar7;
      func_0x000107c613fc(&UNK_110546950,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar3);
      func_0x000107c613fc(&UNK_110546950,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar3);
      puVar8 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      *(code **)(unaff_x22 + 0x30) = FUN_102778ff4;
      *(undefined **)(unaff_x22 + 0x38) = puVar6;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_100e1779c;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110546968;
      lVar9 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar9);
      *(undefined8 *)(unaff_x22 + 0x60) = 0x102778ffc;
      *(undefined **)(unaff_x22 + 0x68) = puVar7;
      *(undefined **)(unaff_x22 + 0x40) = puVar1;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x50) = &UNK_100e17304;
      *(undefined **)(unaff_x22 + 0x58) = &UNK_110546990;
      lVar12 = unaff_x22 + 0x40;
      func_0x000107c60bc4(lVar12);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar7);
      func_0x000107c47be0(puVar8);
      func_0x000107c60bd0(lVar12);
      func_0x000107c60bd0(lVar9);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      func_0x000100926e50(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(puVar8);
      func_0x000107c61174();
      uVar10 = uVar11;
      func_0x0001038ea4b0(uVar11,uVar5,puVar8,uVar14);
      func_0x000100083b20(unaff_x22 + 0x98);
      lVar12 = *(long *)(unaff_x22 + 0x98);
      lVar9 = lVar12;
      func_0x000107c5194c();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar9 != 0) {
        func_0x000107c61170(lVar9);
        func_0x000100083b20(unaff_x22 + 0xa8);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
        func_0x000107c4ffe8(uVar13);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(uVar13);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
      func_0x000100083b20(unaff_x22 + 0xa0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      func_0x000107c42c1c(uVar13);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar11);
      func_0x000107c615c0(uVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_102777a88;
    }
    puVar4 = (undefined1 *)(unaff_x22 + 0x70);
    func_0x0001000834e4();
    FUN_102778cd8();
    func_0x000107c613f8(&UNK_110546930,puVar4,0,0);
    *puVar4 = 1;
    func_0x000107c61654();
    func_0x000107c61170(uVar11);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102777a88:
                    /* WARNING: Could not recover jumptable at 0x000102777aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102777aac; end: 102777ae7;  */

void FUN_102777aac(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x000102777ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102777ae8; end: 102777bbb;  */

void FUN_102777ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x00010392d0f4();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102777bbc,uVar4,uVar5);
  return;
}



/* Entry: 102777bbc; end: 102777daf;  */

/* WARNING: Removing unreachable block (ram,0x000102777cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102777bbc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x10) + _DAT_112ebd9f0;
  if (*(long *)(lVar8 + 8) == 0) {
    FUN_102787314();
    uVar4 = param_1;
    FUN_1027af714();
    func_0x000107c61170(param_1);
    uVar1 = (uint)param_2 & 0xff;
    if (uVar1 != 0xff) {
      if (uVar1 != 1) {
        FUN_10276f644(uVar4,param_2);
        goto LAB_102777d60;
      }
      FUN_10276f644(uVar4,1);
    }
  }
  else if (*(char *)(lVar8 + 0x10) != '\x01') {
LAB_102777d60:
    plVar7 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102777f88;
    lVar8 = *(long *)(unaff_x22 + 0x38);
    goto LAB_102777d84;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar5 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x80) = puVar5;
  func_0x000104500598(0);
  func_0x000107c43bf4(puVar5);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000104500200();
  func_0x000107c61170(puVar5);
  FUN_10277829c(puVar6,uVar2,uVar3,uVar4);
  func_0x000107c61170(puVar6);
  plVar7 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102777db0;
  lVar8 = *(long *)(unaff_x22 + 0x40);
LAB_102777d84:
  lVar9 = *(long *)(unaff_x22 + 0x28);
  plVar7[0xb] = *(long *)(unaff_x22 + 0x10);
  plVar7[0xc] = lVar9;
  plVar7[10] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102778524,0,0);
  return;
}



/* Entry: 102777db0; end: 102777e07;  */

void FUN_102777db0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102777e08;
  }
  else {
    pcVar1 = FUN_102778190;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
  return;
}



/* Entry: 102777e08; end: 102777f87;  */

void FUN_102777e08(void)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c614c4(uVar7,uVar5);
  if ((int)uVar7 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar1 = *(long *)(unaff_x22 + 0x50);
    uVar5 = uVar8;
    (**(code **)(lVar1 + 0x20))(uVar8,*(undefined8 *)(unaff_x22 + 0x40),uVar7);
    func_0x000107c5ed90();
    func_0x000107c3fefc(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    (**(code **)(lVar1 + 8))(uVar8,uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar2 = *(undefined1 **)(unaff_x22 + 0x40);
    FUN_102778fb8();
    FUN_102778cd8();
    puVar3 = &UNK_110546930;
    func_0x000107c613f8(&UNK_110546930,puVar2,0,0);
    *puVar2 = 2;
    func_0x000107c61654();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c5ed2c(puVar3);
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c3fef8(uVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61654();
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102777f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102777f88; end: 102777fdf;  */

void FUN_102777f88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102777fe0;
  }
  else {
    pcVar1 = FUN_10277823c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
  return;
}



/* Entry: 102777fe0; end: 10277818f;  */

void FUN_102777fe0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c614c4(uVar6,uVar5);
  if ((int)uVar6 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(lVar1 + 0x20))(uVar5,*(undefined8 *)(unaff_x22 + 0x38),uVar6);
    func_0x000104500598(0);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar4 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c451b0(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000104500200(puVar3,0);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar1 + 8))(uVar5,uVar6);
  }
  else {
    uVar5 = **(undefined8 **)(unaff_x22 + 0x38);
    func_0x000104500598(0);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x00010450019c();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61174(puVar4);
  FUN_10277829c();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010277818c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102778190; end: 10277823b;  */

void FUN_102778190(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c5ed2c(uVar3);
  uVar1 = uVar3;
  func_0x000107c5ed2c();
  func_0x000107c61170(uVar3);
  func_0x000107c3fef8(uVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102778238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277823c; end: 10277829b;  */

void FUN_10277823c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102778298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277829c; end: 102778507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277829c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long alStack_88 [3];
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(alStack_88);
  func_0x0001000a8868(alStack_88,lStack_70);
  lVar2 = lStack_70;
  (**(code **)(lStack_68 + 8))(lStack_70,lStack_68);
  if (lVar2 == 0) {
    plVar4 = alStack_88;
    func_0x0001000834e4();
    FUN_102778cd8();
    func_0x000107c613f8(&UNK_110546930,plVar4,0,0);
    *(undefined1 *)plVar4 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x0001000834e4(alStack_88);
    func_0x000100083b20(alStack_88);
    lVar1 = alStack_88[0];
    lVar3 = ((undefined8 *)(param_2 + _DAT_112ebd9d8))[1];
    if (lVar3 == 0) {
      uVar6 = *(undefined8 *)(param_2 + _DAT_112ebd9d0);
      lVar5 = ((undefined8 *)(param_2 + _DAT_112ebd9d0))[1];
      func_0x000107c61434(lVar5);
      lVar3 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + _DAT_112ebd9d8);
      lVar5 = lVar3;
    }
    func_0x000107c61434(lVar3);
    func_0x000107c5fadc(uVar6,lVar5);
    func_0x000107c6142c(lVar5);
    uVar7 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar7 = param_3;
    }
    lVar3 = lVar1;
    func_0x000107c3ed74(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000100083b20(alStack_88);
    lVar1 = alStack_88[0];
    lVar5 = alStack_88[0];
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar5 != 0) {
      func_0x000107c61170(lVar5);
      func_0x000100083b20(alStack_88);
      lVar1 = alStack_88[0];
      lVar5 = alStack_88[0];
      func_0x000107c4ffe8(alStack_88[0]);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar5);
    }
    func_0x000100083b20(alStack_88);
    func_0x000107c42c1c(alStack_88[0]);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(alStack_88[0]);
  }
  return;
}



/* Entry: 102778508; end: 102778523;  */

void FUN_102778508(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102778524,0,0);
  return;
}



/* Entry: 102778524; end: 1027785d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102778524(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar4,uVar2);
  FUN_102787314();
  *(long *)(unaff_x22 + 0x68) = lVar4;
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027785d4;
                    /* WARNING: Could not recover jumptable at 0x0001027785d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(lVar4,uVar2,lVar3);
  return;
}



/* Entry: 1027785d4; end: 10277863b;  */

void FUN_1027785d4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x78) = param_1;
  *(long *)(lVar3 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x70));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10277863c;
  }
  else {
    pcVar2 = (code *)0x1027787e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10277863c; end: 102778737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277863c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112fb1200);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar5);
  func_0x0001000d224c(unaff_x22 + 0x38);
  func_0x000107c61574(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  piVar3 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102778738;
                    /* WARNING: Could not recover jumptable at 0x000102778734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x50),uVar4,uVar6,lVar5);
  return;
}



/* Entry: 102778738; end: 1027787af;  */

void FUN_102778738(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  uVar4 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1027787b0;
  }
  else {
    pcVar2 = (code *)0x102778818;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1027787b0; end: 10277884b;  */

void FUN_1027787b0(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001027787e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277884c; end: 1027788cb;  */

void FUN_10277884c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5677c(param_1);
    func_0x000107c56784(param_1);
    func_0x000107c4f018(param_2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1027788cc; end: 1027789e7;  */

void FUN_1027788cc(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    if (param_1 == (code *)0x0) {
      return;
    }
    (*param_1)();
    return;
  }
  uVar3 = uVar2;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c49aa0();
    if ((uVar4 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
      if (param_1 != (code *)0x0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_1105469b8;
        ppuVar5 = &puStack_88;
        pcStack_68 = param_1;
        uStack_60 = param_2;
        func_0x000107c60bc4(ppuVar5);
        uVar1 = uStack_60;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(uVar1);
      }
      func_0x000107c420a8(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c60bd0(ppuVar5);
      uVar2 = uVar3;
      goto LAB_1027789cc;
    }
    func_0x000107c61170(uVar3);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
LAB_1027789cc:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027789e8; end: 102778a47; -[_TtC38MemTwoOperaContextPluginImplementation35MemTwoOperaRemixActionHandlerPlugin init] */

void FUN_1027789e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaContextPluginImplementation.MemTwoOperaRemixActionHandlerPlugin",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102778a14);
  (*pcVar1)();
}



/* Entry: 102778a48; end: 102778adf; -[_TtC38MemTwoOperaContextPluginImplementation35MemTwoOperaRemixActionHandlerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102778a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102778a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102778ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102778a98) */
/* WARNING: Removing unreachable block (ram,0x000102778a78) */
/* WARNING: Removing unreachable block (ram,0x000102778ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102778a48(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebd028));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebd030));
  return;
}



/* Entry: 102778ae0; end: 102778af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102778ae0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + _DAT_112ebd028));
  return;
}



/* Entry: 102778af4; end: 102778b13;  */

void FUN_102778af4(void)

{
  FUN_102776f74();
  return;
}



/* Entry: 102778b14; end: 102778b43; -[_TtC38MemTwoOperaContextPluginImplementation35MemTwoOperaRemixActionHandlerPlugin remixScopeDidComplete] */

void FUN_102778b14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102778b44(&DAT_112ebd058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102778b44; end: 102778bd7;  */

void FUN_102778b44(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102778bd8; end: 102778c07; -[_TtC38MemTwoOperaContextPluginImplementation35MemTwoOperaRemixActionHandlerPlugin aiRemixScopeDidComplete] */

void FUN_102778bd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102778b44(&DAT_112ebd060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102778c08; end: 102778c1b;  */

bool FUN_102778c08(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102778c1c; end: 102778cc7;  */

void FUN_102778c1c(void)

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



/* Entry: 102778cc8; end: 102778cd7;  */

void FUN_102778cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102778cd8; end: 102778d17;  */

void FUN_102778cd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad754c;
  func_0x000107c61520(&UNK_10dad754c,&UNK_110546930);
  puRam0000000112ebd068 = puVar1;
  return;
}



/* Entry: 102778d18; end: 102778da3;  */

void FUN_102778d18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102778da4;
  plVar7[6] = lVar1;
  plVar7[7] = lVar4;
  plVar7[4] = lVar5;
  plVar7[5] = lVar3;
  plVar7[2] = lVar6;
  plVar7[3] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[8] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[9] = lVar5;
  plVar7[10] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102777344,lVar5,lVar6);
  return;
}



/* Entry: 102778da4; end: 102778ddf;  */

void FUN_102778da4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102778ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102778de0; end: 102778def;  */

undefined1  [16] FUN_102778de0(void)

{
  return ZEXT816(0x1105468a0);
}



/* Entry: 102778df0; end: 102778e0f;  */

void FUN_102778df0(void)

{
  func_0x000107c61168(&PTR_PTR_11285ff68);
  return;
}



/* Entry: 102778e10; end: 102778f77;  */

int FUN_102778e10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102778e8c;
        goto LAB_102778e70;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102778e70:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102778e8c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102778f78; end: 102778fb7;  */

void FUN_102778f78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7524;
  func_0x000107c61520(&UNK_10dad7524,&UNK_110546930);
  puRam0000000112ebd098 = puVar1;
  return;
}



/* Entry: 102778fb8; end: 102778ff3;  */

undefined8 FUN_102778fb8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010392d0f4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102778ff4; end: 102779033;  */

void FUN_102778ff4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5677c(param_1);
    func_0x000107c56784(param_1);
    func_0x000107c4f018(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102779034; end: 10277907f;  */

void FUN_102779034(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10277910c,param_1);
  return;
}



/* Entry: 102779080; end: 10277910b;  */

void FUN_102779080(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ebd0a0;
  func_0x0001000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10277910c; end: 102779123;  */

void FUN_10277910c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112ebd0a0;
  func_0x0001000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102779124; end: 10277916f;  */

void FUN_102779124(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102779260,param_1);
  return;
}



/* Entry: 102779170; end: 10277925f;  */

void FUN_102779170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = param_2;
  FUN_102779870();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = param_2;
  func_0x000107c6157c();
  func_0x000103bb5780();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb463c();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = param_2;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546a68;
  *param_1 = puVar3;
  return;
}



/* Entry: 102779260; end: 102779267;  */

void FUN_102779260(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  
  puVar2 = unaff_x20;
  FUN_102779870();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = unaff_x20;
  func_0x000107c6157c();
  func_0x000103bb5780();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb463c();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = unaff_x20;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546a68;
  *param_1 = puVar3;
  return;
}



/* Entry: 102779268; end: 102779333;  */

long FUN_102779268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb5780();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb463c();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 102779334; end: 1027793b3;  */

void FUN_102779334(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1027793b4;
  plVar2[3] = param_4;
  plVar2[4] = param_2;
  plVar2[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787df0,0,0);
  return;
}



/* Entry: 1027793b4; end: 102779433;  */

void FUN_1027793b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102779434;
  }
  else {
    pcVar2 = (code *)0x102779464;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102779434; end: 1027794cb;  */

void FUN_102779434(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102779460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027794cc; end: 1027794d7;  */

void FUN_1027794cc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1027794d8; end: 1027794fb;  */

void FUN_1027794d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1027795cc(param_1,param_2,param_4);
  return;
}



/* Entry: 1027794fc; end: 10277950f;  */

bool FUN_1027794fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102779510; end: 1027795bb;  */

void FUN_102779510(void)

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



/* Entry: 1027795bc; end: 1027795cb;  */

void FUN_1027795bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1027795cc; end: 10277985f;  */

void FUN_1027795cc(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long alStack_80 [6];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_80[1] = 0;
    alStack_80[0] = 0;
    alStack_80[3] = 0;
    alStack_80[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar8 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_80[1] = 0;
      alStack_80[0] = 0;
      alStack_80[3] = 0;
      alStack_80[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_80);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_80[3] != 0) {
        plVar7 = &lStack_50;
        func_0x000107c6147c(plVar7,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar7 & 1) != 0) {
          func_0x000100083b20(alStack_80);
          lVar2 = alStack_80[3];
          func_0x0001000a8868(alStack_80,alStack_80[3]);
          lVar3 = lStack_50;
          uVar9 = uStack_48;
          (**(code **)(alStack_80[4] + 0x20))(lStack_50,uStack_48,lVar2,alStack_80[4]);
          func_0x000107c6142c(uStack_48);
          plVar7 = alStack_80;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            FUN_102787314();
            plVar4 = plVar7;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170();
            if (plVar4 == (long *)0x0) {
              func_0x000102779890();
              func_0x000107c613f8(&UNK_110546b48,plVar7,0,0);
              *(undefined1 *)plVar7 = 1;
              func_0x000107c61654();
            }
            else {
              plVar7 = plVar4;
              func_0x000107c5ee30();
              func_0x000107c61170(plVar4);
              puVar5 = &UNK_110546ab0;
              func_0x000107c613fc(&UNK_110546ab0,0x28,7);
              *(long *)(puVar5 + 0x10) = lVar3;
              *(long **)(puVar5 + 0x18) = plVar7;
              *(undefined8 *)(puVar5 + 0x20) = uVar9;
              func_0x000107c61174(lVar3);
              func_0x00010006c00c(plVar7,uVar9);
              uVar6 = 0xc1;
              func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad7688,puVar5,PTR___sytN_11034f1b0 + 8);
              func_0x000107c61574(puVar5);
              func_0x000107c61574(uVar6);
              func_0x00010006c090(plVar7,uVar9);
            }
            func_0x000107c61170(lVar3);
            return;
          }
          func_0x0001000834e4();
        }
        goto LAB_1027797d4;
      }
    }
  }
  plVar7 = alStack_80;
  func_0x00010006e7f4();
LAB_1027797d4:
  func_0x000102779890();
  func_0x000107c613f8(&UNK_110546b48,plVar7,0,0);
  *(undefined1 *)plVar7 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 102779860; end: 10277986f;  */

undefined1  [16] FUN_102779860(void)

{
  return ZEXT816(0x110546a90);
}



/* Entry: 102779870; end: 1027798cf;  */

void FUN_102779870(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd0e8);
  return;
}



/* Entry: 1027798d0; end: 10277993b;  */

void FUN_1027798d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10277993c;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar5[2] = lVar3;
  func_0x000107c5fce8();
  plVar5[3] = lVar3;
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  plVar5[4] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1027793b4;
  plVar4[3] = lVar6;
  plVar4[4] = lVar1;
  plVar4[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787df0,0,0);
  return;
}



/* Entry: 10277993c; end: 102779977;  */

void FUN_10277993c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102779974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102779978; end: 102779adf;  */

int FUN_102779978(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1027799f4;
        goto LAB_1027799d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1027799d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1027799f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102779ae0; end: 102779b1f;  */

void FUN_102779ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad76f4;
  func_0x000107c61520(&UNK_10dad76f4,&UNK_110546b48);
  puRam0000000112ebd158 = puVar1;
  return;
}



/* Entry: 102779b20; end: 102779b6b;  */

void FUN_102779b20(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102779c5c,param_1);
  return;
}



/* Entry: 102779b6c; end: 102779c5b;  */

void FUN_102779b6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = param_2;
  FUN_10277a2b8();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = param_2;
  func_0x000107c6157c();
  func_0x000103bb5748();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb4274();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = param_2;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546c68;
  *param_1 = puVar3;
  return;
}



/* Entry: 102779c5c; end: 102779c63;  */

void FUN_102779c5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  
  puVar2 = unaff_x20;
  FUN_10277a2b8();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = unaff_x20;
  func_0x000107c6157c();
  func_0x000103bb5748();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb4274();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = unaff_x20;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546c68;
  *param_1 = puVar3;
  return;
}



/* Entry: 102779c64; end: 102779d2f;  */

long FUN_102779c64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb5748();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb4274();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 102779d30; end: 102779d9f;  */

void FUN_102779d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102779da0,uVar1,uVar2);
  return;
}



/* Entry: 102779da0; end: 102779e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102779da0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  plVar5 = (long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebd9d0);
  lVar1 = *plVar5;
  lVar3 = plVar5[1];
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102779e24;
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  plVar5[7] = 0;
  plVar5[8] = lVar6;
  plVar5[5] = lVar3;
  plVar5[6] = 0;
  plVar5[3] = lVar4;
  plVar5[4] = lVar1;
  plVar5[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787c30,0,0);
  return;
}



/* Entry: 102779e24; end: 102779e7b;  */

void FUN_102779e24(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102779e7c;
  }
  else {
    pcVar1 = (code *)0x102779eac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
  return;
}



/* Entry: 102779e7c; end: 102779f13;  */

void FUN_102779e7c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000102779ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102779f14; end: 102779f1f;  */

void FUN_102779f14(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102779f20; end: 102779f43;  */

void FUN_102779f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10277a014(param_1,param_2,param_4);
  return;
}



/* Entry: 102779f44; end: 102779f57;  */

bool FUN_102779f44(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102779f58; end: 10277a003;  */

void FUN_102779f58(void)

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



/* Entry: 10277a004; end: 10277a013;  */

void FUN_10277a004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10277a014; end: 10277a2a7;  */

void FUN_10277a014(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long alStack_80 [6];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_80[1] = 0;
    alStack_80[0] = 0;
    alStack_80[3] = 0;
    alStack_80[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar8 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_80[1] = 0;
      alStack_80[0] = 0;
      alStack_80[3] = 0;
      alStack_80[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_80);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_80[3] != 0) {
        plVar7 = &lStack_50;
        func_0x000107c6147c(plVar7,alStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar7 & 1) != 0) {
          func_0x000100083b20(alStack_80);
          lVar2 = alStack_80[3];
          func_0x0001000a8868(alStack_80,alStack_80[3]);
          lVar3 = lStack_50;
          uVar9 = uStack_48;
          (**(code **)(alStack_80[4] + 0x20))(lStack_50,uStack_48,lVar2,alStack_80[4]);
          func_0x000107c6142c(uStack_48);
          plVar7 = alStack_80;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            FUN_102787314();
            plVar4 = plVar7;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170();
            if (plVar4 == (long *)0x0) {
              func_0x00010277a2d8();
              func_0x000107c613f8(&UNK_110546d48,plVar7,0,0);
              *(undefined1 *)plVar7 = 1;
              func_0x000107c61654();
            }
            else {
              plVar7 = plVar4;
              func_0x000107c5ee30();
              func_0x000107c61170(plVar4);
              puVar5 = &UNK_110546cb0;
              func_0x000107c613fc(&UNK_110546cb0,0x28,7);
              *(long *)(puVar5 + 0x10) = lVar3;
              *(long **)(puVar5 + 0x18) = plVar7;
              *(undefined8 *)(puVar5 + 0x20) = uVar9;
              func_0x000107c61174(lVar3);
              func_0x00010006c00c(plVar7,uVar9);
              uVar6 = 0xc1;
              func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad7828,puVar5,PTR___sytN_11034f1b0 + 8);
              func_0x000107c61574(puVar5);
              func_0x000107c61574(uVar6);
              func_0x00010006c090(plVar7,uVar9);
            }
            func_0x000107c61170(lVar3);
            return;
          }
          func_0x0001000834e4();
        }
        goto LAB_10277a21c;
      }
    }
  }
  plVar7 = alStack_80;
  func_0x00010006e7f4();
LAB_10277a21c:
  func_0x00010277a2d8();
  func_0x000107c613f8(&UNK_110546d48,plVar7,0,0);
  *(undefined1 *)plVar7 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 10277a2a8; end: 10277a2b7;  */

undefined1  [16] FUN_10277a2a8(void)

{
  return ZEXT816(0x110546c90);
}



/* Entry: 10277a2b8; end: 10277a317;  */

void FUN_10277a2b8(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd1a0);
  return;
}



/* Entry: 10277a318; end: 10277a383;  */

void FUN_10277a318(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10277a384;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102779da0,lVar1,lVar2);
  return;
}


