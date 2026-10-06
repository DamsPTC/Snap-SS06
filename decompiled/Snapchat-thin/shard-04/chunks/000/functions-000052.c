/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10303235c; end: 103032467;  */

void FUN_10303235c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  lVar3 = *plVar8;
  bVar1 = *(byte *)(plVar8 + 4);
  if ((param_2 & 1) == 0) {
    if (lVar3 == 0) goto LAB_1030323e4;
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) goto LAB_1030323d8;
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103032468);
      (*pcVar2)();
    }
  }
  else {
    if (lVar3 == 0) {
LAB_1030323e4:
      if ((bVar1 & 1) != 0) {
        func_0x000103031b60(plVar8[3],*(undefined8 *)plVar8[2]);
      }
      goto LAB_103032444;
    }
    uVar7 = plVar8[3];
    lVar6 = *(long *)plVar8[2];
    if ((bVar1 & 1) != 0) {
LAB_1030323d8:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
      goto LAB_103032444;
    }
    lVar4 = plVar8[1];
    lVar5 = lVar6 + (uVar7 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar7 & 0x3f);
    *(long *)(*(long *)(lVar6 + 0x30) + uVar7 * 8) = lVar4;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar7 * 8) = lVar3;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030323c8);
      (*pcVar2)();
    }
  }
  *(long *)(lVar6 + 0x10) = lVar5 + 1;
LAB_103032444:
  lVar6 = *plVar8;
  func_0x000107c61434(lVar3);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar8);
  return;
}



/* Entry: 103032468; end: 10303248b;  */

undefined1  [16] FUN_103032468(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x103032480;
  return auVar1;
}



/* Entry: 10303248c; end: 1030325db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10303248c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *apuStack_b0 [3];
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *apuStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  puStack_70 = &UNK_110600368;
  ppuStack_68 = &PTR_DAT_110600388;
  puVar4 = &UNK_1106002e8;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1106002e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  apuStack_88[0] = puVar1;
  FUN_103034588();
  puVar2 = puVar1;
  func_0x000107c610f8();
  ppuVar3 = apuStack_88;
  func_0x0001000c6518(ppuVar3,&UNK_110600368);
  FUN_103034ab0(&uStack_e0,ppuVar3,&UNK_110600368);
  puStack_98 = &UNK_110600368;
  ppuStack_90 = &PTR_DAT_110600388;
  func_0x000107c613fc(&UNK_1106002e8,0x30,7);
  *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x10) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x20) = uStack_d0;
  puVar2[_DAT_112f354c8] = 0;
  *(undefined8 *)(puVar2 + _DAT_112f354b0) = param_1;
  *(undefined8 *)(puVar2 + _DAT_112f354b8) = param_2;
  apuStack_b0[0] = puVar4;
  func_0x000103034a08(apuStack_b0,puVar2 + _DAT_112f354c0);
  *(undefined8 *)(puVar2 + _DAT_112f354a8) = param_7;
  ppuVar3 = &puStack_c0;
  puStack_c0 = puVar2;
  puStack_b8 = puVar1;
  func_0x000107c61154(ppuVar3,PTR_s_init_1125d9248);
  func_0x0001000834e4(apuStack_b0);
  func_0x0001000834e4(apuStack_88);
  return ppuVar3;
}



/* Entry: 1030325dc; end: 103032627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030325dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + _DAT_112f354c8) & 1) == 0) {
      *(undefined1 *)(lVar2 + _DAT_112f354c8) = 1;
      uVar7 = *(undefined8 *)(lVar2 + _DAT_112f354b0);
      uVar8 = *(undefined8 *)(lVar2 + _DAT_112f354a8);
      puVar3 = &UNK_1105ffde8;
      func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar2);
      puVar4 = &UNK_1106001f8;
      func_0x000107c613fc(&UNK_1106001f8,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(code **)(puVar4 + 0x18) = pcVar1;
      *(undefined8 *)(puVar4 + 0x20) = uVar6;
      pcStack_68 = FUN_103034944;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f3aa0;
      puStack_70 = &UNK_110600210;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_60;
      func_0x000107c615f0(uVar7);
      func_0x000107c61174(uVar8);
      func_0x000107c6157c(uVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c5abf4(uVar7);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar8);
      return;
    }
    func_0x000107c61170();
  }
  (*pcVar1)(0);
  return;
}



/* Entry: 103032628; end: 10303272b;  */

undefined *
FUN_103032628(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10303272c);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = param_5;
      FUN_103031728(param_5,param_6,param_7,param_8);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103032728);
      (*pcVar3)();
    }
    uVar6 = 0;
    FUN_103034904(0,param_5,param_6);
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 10303272c; end: 1030327db;  */

undefined * FUN_10303272c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7600;
  func_0x000107c610f8(PTR_PTR_1126b7600);
  func_0x000107c453e4();
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f11a820);
  func_0x000107c57dd8(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b7608;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c5bf84();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c3d798();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030327dc);
  (*pcVar1)();
}



/* Entry: 1030327dc; end: 1030327ff;  */

void FUN_1030327dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 103032800; end: 10303280f;  */

void FUN_103032800(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x20),uVar2,
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    (*pcVar3)();
  }
  else {
    FUN_10303463c(param_1,param_2,uVar2);
    lVar7 = 0;
    lVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar6 = -lVar8;
    uVar9 = 0xffffffffffffffff;
    if (uVar6 < 0x40) {
      uVar9 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_2 + 0x40);
    while( true ) {
      while (uVar9 != 0) {
        uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        uVar6 = *(ulong *)(*(long *)(param_2 + 0x38) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                          lVar7 * 0x200);
        if (uVar6 >> 0x3e != 0) {
          uVar1 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar1 = uVar6;
          }
          func_0x000107c60480(uVar1);
        }
      }
      bVar4 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10302fefc);
        (*pcVar3)();
      }
      if ((long)(0x3fU - lVar8 >> 6) <= lVar7) break;
      uVar9 = ((ulong *)(param_2 + 0x40))[lVar7];
    }
    func_0x000107c61434(param_2);
    FUN_1030348fc();
    (*pcVar3)((uint)param_1 & 1);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 103032810; end: 103032c77;  */

undefined8 FUN_103032810(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_90;
  ulong uStack_80;
  
  uVar14 = param_1 >> 0x3e;
  if (uVar14 == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) != 4) {
      return 0;
    }
    uStack_90 = 4;
  }
  else {
    uStack_90 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uStack_90 = param_1;
    }
    uVar12 = uStack_90;
    func_0x000107c60480();
    if (uVar12 != 4) {
      return 0;
    }
    func_0x000107c60480();
    if (uStack_90 == 0) {
      return 1;
    }
  }
  uVar12 = 0;
  uVar10 = param_1 & 0xffffffffffffff8;
  uVar1 = uVar10;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = param_1;
  }
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c38);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + 0x20 + uVar12 * 8);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar12;
      param_2 = param_1;
      func_0x00010105930c();
    }
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c34);
      (*pcVar2)();
    }
    if (uVar14 == 0) {
      uVar4 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar4 = uVar1;
      func_0x000107c60480();
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c70);
        (*pcVar2)();
      }
      uVar4 = uVar1;
      func_0x000107c60480();
    }
    if ((long)uVar4 < (long)uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c3c);
      (*pcVar2)();
    }
    if (((param_1 & 0xc000000000000001) == 0) || (uVar12 == 0)) {
      func_0x000107c61434(param_1);
      if (uVar14 == 0) goto LAB_103032924;
LAB_103032948:
      func_0x000107c6142c(param_1);
      uStack_80 = 0;
      param_2 = uVar12;
      uVar4 = uVar1;
      func_0x000107c60484();
      uVar15 = param_4 >> 1;
      uVar16 = param_2;
    }
    else {
      uVar5 = 0;
      FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c61434(param_1);
      uVar4 = 0;
      do {
        uVar16 = uVar4 + 1;
        param_2 = param_1;
        func_0x000107c60318(uVar4,param_1,uVar5);
        uVar4 = uVar16;
      } while (uVar12 != uVar16);
      if (uVar14 != 0) goto LAB_103032948;
LAB_103032924:
      uVar4 = 0;
      uStack_80 = uVar10;
      uVar16 = uVar10 + 0x20;
      uVar15 = uVar12;
    }
    for (; uVar4 != uVar15; uVar4 = uVar4 + 1) {
      if ((long)uVar15 <= (long)uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c30);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(uVar16 + uVar4 * 8);
      func_0x000107c61174();
      uVar11 = uVar6;
      func_0x000107c5bff0();
      if ((uVar11 == 0) || (uVar11 = uVar3, func_0x000107c5bff0(), uVar11 == 0)) {
        uVar11 = uVar6;
        func_0x000107c5bfec();
        func_0x000107c61180();
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c74);
          (*pcVar2)();
        }
        uVar13 = uVar11;
        func_0x000107c5faec();
        uVar9 = param_2;
        func_0x000107c61170(uVar11);
        func_0x000107c6142c(param_2);
        uVar11 = uVar13 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar11 = param_2 >> 0x38 & 0xf;
        }
        param_2 = uVar9;
        if (uVar11 == 0) {
LAB_1030329a4:
          uVar13 = uVar6;
          func_0x000107c49cec();
          func_0x000107c61170(uVar6);
        }
        else {
          uVar11 = uVar3;
          func_0x000107c5bfec();
          func_0x000107c61180();
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103032c78);
            (*pcVar2)();
          }
          uVar13 = uVar11;
          func_0x000107c5faec();
          param_2 = uVar9;
          func_0x000107c61170(uVar11);
          func_0x000107c6142c(uVar9);
          uVar11 = uVar13 & 0xffffffffffff;
          if ((uVar9 & 0x2000000000000000) != 0) {
            uVar11 = uVar9 >> 0x38 & 0xf;
          }
          if (uVar11 == 0) goto LAB_1030329a4;
          uVar11 = uVar6;
          func_0x000107c5bfec();
          func_0x000107c61180();
          if (uVar11 == 0) {
            uVar13 = 0;
            uVar11 = 0;
            uVar9 = param_2;
          }
          else {
            uVar13 = uVar11;
            func_0x000107c5faec();
            uVar9 = param_2;
            func_0x000107c61170(uVar11);
            uVar11 = param_2;
          }
          uVar7 = uVar3;
          func_0x000107c5bfec();
          func_0x000107c61180();
          if (uVar7 == 0) {
            param_2 = uVar9;
            if (uVar11 != 0) {
LAB_103032b78:
              func_0x000107c61170(uVar6);
              uVar9 = uVar11;
LAB_103032b98:
              func_0x000107c6142c(uVar9);
              goto LAB_1030329c0;
            }
            func_0x000107c61170(uVar6);
LAB_103032bf4:
            func_0x000107c615e8(uStack_80);
            goto LAB_103032bc0;
          }
          uVar8 = uVar7;
          func_0x000107c5faec();
          param_2 = uVar9;
          func_0x000107c61170(uVar7);
          if (uVar11 == 0) {
            func_0x000107c61170(uVar6);
            if (uVar9 != 0) goto LAB_103032b98;
            goto LAB_103032bf4;
          }
          if (uVar9 == 0) goto LAB_103032b78;
          if ((uVar13 == uVar8) && (uVar11 == uVar9)) {
            func_0x000107c615e8(uStack_80);
            func_0x000107c61170(uVar3);
            func_0x000107c6142c(uVar11);
            func_0x000107c6142c(uVar9);
            uVar3 = uVar6;
            goto LAB_103032bc0;
          }
          param_2 = uVar11;
          param_4 = uVar9;
          func_0x000107c605b8(uVar13,uVar11,uVar8,uVar9,0);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(uVar6);
        }
        if ((uVar13 & 1) != 0) goto LAB_103032bb8;
      }
      else {
        uVar11 = uVar6;
        func_0x000107c5bff0();
        uVar13 = uVar3;
        func_0x000107c5bff0();
        func_0x000107c61170(uVar6);
        if (uVar11 == uVar13) {
LAB_103032bb8:
          func_0x000107c615e8(uStack_80);
LAB_103032bc0:
          func_0x000107c61170(uVar3);
          return 0;
        }
      }
LAB_1030329c0:
    }
    uVar12 = uVar12 + 1;
    func_0x000107c615e8(uStack_80);
    func_0x000107c61170(uVar3);
    if (uVar12 == uStack_90) {
      return 1;
    }
  } while( true );
}



/* Entry: 103032c78; end: 103032dbb;  */

undefined * FUN_103032c78(void)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  double dVar3;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR_PTR_1126aca88;
  func_0x000107c610f8(PTR_PTR_1126aca88);
  func_0x000107c453e4();
  func_0x000107c55924();
  func_0x000107c5eea0(puVar4);
  dVar3 = 86400.0;
  func_0x000107c5ee6c((long)puVar4 - extraout_x12);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar4,lVar1);
  func_0x000107c5ee8c();
  (*pcVar6)((long)puVar4 - extraout_x12,lVar1);
  dVar3 = dVar3 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103032db4);
    (*pcVar6)();
  }
  if (-1.0 < dVar3) {
    if (dVar3 < 1.8446744073709552e+19) {
      func_0x000107c547ac(puVar2);
      return puVar2;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103032dbc);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x103032db8);
  (*pcVar6)();
}



/* Entry: 103032dbc; end: 103033b63;  */

undefined8 FUN_103032dbc(undefined8 ****param_1,long param_2,undefined8 ****param_3)

{
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined8 ****ppppuVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  undefined8 *****pppppuVar27;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_88;
  undefined8 ****appppuStack_80 [4];
  
  ppppuVar6 = param_1;
  FUN_103032810();
  if ((((ulong)ppppuVar6 & 1) == 0) ||
     (ppppuVar6 = param_3, func_0x000107c44b40(), ((ulong)ppppuVar6 & 1) != 0)) {
LAB_103033488:
    uVar7 = 0;
  }
  else {
    if ((ulong)param_1 >> 0x3e == 0) {
      ppppuVar24 = *(undefined8 *****)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      ppppuVar6 = (undefined8 ****)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined8 ****)0x7fffffffffffffff < param_1) {
        ppppuVar6 = param_1;
      }
      func_0x000107c60480();
      ppppuVar24 = ppppuVar6;
    }
    if (ppppuVar24 != (undefined8 ****)0x0) {
      ppppuVar21 = (undefined8 ****)0x0;
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined8 *****)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= ppppuVar21) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334f4);
              (*pcVar4)();
            }
            ppppuVar6 = (undefined8 ****)param_1[(long)ppppuVar21 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar6 = ppppuVar21;
            func_0x00010105930c(ppppuVar21,param_1);
          }
          bVar5 = SCARRY8((long)ppppuVar21,1);
          ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334f0);
            (*pcVar4)();
          }
          ppppuVar11 = param_3;
          func_0x000107c4e064();
          func_0x000107c61180();
          if (ppppuVar11 != (undefined8 ****)0x0) break;
LAB_103032e3c:
          func_0x000107c61170();
          if (ppppuVar21 == ppppuVar24) goto LAB_10303318c;
        }
        ppppuVar22 = ppppuVar11;
        func_0x000107c3f654();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar11);
        if (ppppuVar22 == (undefined8 ****)0x0) goto LAB_103032e3c;
        appppuStack_80[0] = (undefined8 *****)0x0;
        uVar7 = 0;
        FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
        pppppuVar16 = appppuStack_80;
        func_0x000107c5fc50(ppppuVar22,pppppuVar16,uVar7);
        func_0x000107c61170(ppppuVar22);
        ppppuVar11 = appppuStack_80[0];
        if ((undefined8 *****)appppuStack_80[0] == (undefined8 *****)0x0) {
          func_0x000107c61170();
        }
        else {
          pppppuVar27 = (undefined8 *****)((ulong)appppuStack_80[0] & 0xffffffffffffff8);
          if ((ulong)appppuStack_80[0] >> 0x3e == 0) {
            pppppuVar26 = (undefined8 *****)pppppuVar27[2];
          }
          else {
            pppppuVar26 = (undefined8 *****)appppuStack_80[0];
            if (-1 < (long)appppuStack_80[0]) {
              pppppuVar26 = pppppuVar27;
            }
            func_0x000107c60480();
          }
          if (pppppuVar26 != (undefined8 *****)0x0) {
            ppppuVar22 = (undefined8 ****)0x0;
            do {
              if (((ulong)ppppuVar11 & 0xc000000000000001) == 0) {
                if (pppppuVar27[2] <= ppppuVar22) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334e4);
                  (*pcVar4)();
                }
                ppppuVar8 = (undefined8 ****)ppppuVar11[(long)ppppuVar22 + 4];
                func_0x000107c61174();
              }
              else {
                ppppuVar8 = ppppuVar22;
                pppppuVar16 = (undefined8 *****)ppppuVar11;
                func_0x00010105930c();
              }
              pppppuVar1 = (undefined8 *****)((long)ppppuVar22 + 1);
              if (SCARRY8((long)ppppuVar22,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334e0);
                (*pcVar4)();
              }
              ppppuVar9 = ppppuVar8;
              func_0x000107c5bff0();
              if ((ppppuVar9 == (undefined8 ****)0x0) ||
                 (ppppuVar9 = ppppuVar6, func_0x000107c5bff0(), ppppuVar9 == (undefined8 ****)0x0))
              {
                ppppuVar9 = ppppuVar8;
                func_0x000107c5bfec();
                func_0x000107c61180();
                if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103033514);
                  (*pcVar4)();
                }
                ppppuVar10 = ppppuVar9;
                func_0x000107c5faec();
                pppppuVar17 = pppppuVar16;
                func_0x000107c61170(ppppuVar9);
                func_0x000107c6142c(pppppuVar16);
                uVar3 = (ulong)ppppuVar10 & 0xffffffffffff;
                if (((ulong)pppppuVar16 & 0x2000000000000000) != 0) {
                  uVar3 = (ulong)pppppuVar16 >> 0x38 & 0xf;
                }
                pppppuVar16 = pppppuVar17;
                if (uVar3 == 0) {
LAB_103032f10:
                  pppuStack_d0 = ppppuVar8;
                  func_0x000107c49cec();
                  func_0x000107c61170(ppppuVar8);
joined_r0x000103032f28:
                  if (((ulong)pppuStack_d0 & 1) == 0) goto LAB_103032f2c;
                }
                else {
                  ppppuVar9 = ppppuVar6;
                  func_0x000107c5bfec();
                  func_0x000107c61180();
                  if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10303351c);
                    (*pcVar4)();
                  }
                  ppppuVar10 = ppppuVar9;
                  func_0x000107c5faec();
                  pppppuVar16 = pppppuVar17;
                  func_0x000107c61170(ppppuVar9);
                  func_0x000107c6142c(pppppuVar17);
                  uVar3 = (ulong)ppppuVar10 & 0xffffffffffff;
                  if (((ulong)pppppuVar17 & 0x2000000000000000) != 0) {
                    uVar3 = (ulong)pppppuVar17 >> 0x38 & 0xf;
                  }
                  if (uVar3 == 0) goto LAB_103032f10;
                  ppppuVar9 = ppppuVar8;
                  func_0x000107c5bfec();
                  func_0x000107c61180();
                  if (ppppuVar9 == (undefined8 ****)0x0) {
                    pppuStack_d0 = (undefined8 ****)0x0;
                    pppppuVar18 = (undefined8 *****)0x0;
                    pppppuVar17 = pppppuVar16;
                  }
                  else {
                    pppuStack_d0 = ppppuVar9;
                    func_0x000107c5faec();
                    pppppuVar17 = pppppuVar16;
                    func_0x000107c61170(ppppuVar9);
                    pppppuVar18 = pppppuVar16;
                  }
                  ppppuVar9 = ppppuVar6;
                  func_0x000107c5bfec();
                  func_0x000107c61180();
                  if (ppppuVar9 != (undefined8 ****)0x0) {
                    ppppuVar10 = ppppuVar9;
                    func_0x000107c5faec();
                    pppppuVar16 = pppppuVar17;
                    func_0x000107c61170(ppppuVar9);
                    if (pppppuVar18 == (undefined8 *****)0x0) {
                      func_0x000107c61170(ppppuVar8);
                      if (pppppuVar17 != (undefined8 *****)0x0) goto LAB_103033114;
                      goto LAB_103033478;
                    }
                    if (pppppuVar17 == (undefined8 *****)0x0) goto LAB_1030330f8;
                    if (((undefined8 ****)pppuStack_d0 != ppppuVar10) ||
                       (pppppuVar18 != pppppuVar17)) {
                      pppppuVar16 = pppppuVar18;
                      func_0x000107c605b8(pppuStack_d0,pppppuVar18,ppppuVar10,pppppuVar17,0);
                      func_0x000107c6142c(pppppuVar18);
                      func_0x000107c6142c(pppppuVar17);
                      func_0x000107c61170(ppppuVar8);
                      goto joined_r0x000103032f28;
                    }
                    func_0x000107c61170(ppppuVar6);
                    func_0x000107c6142c(ppppuVar11);
                    func_0x000107c6142c(pppppuVar18);
                    func_0x000107c6142c(pppppuVar17);
                    func_0x000107c61170(ppppuVar8);
                    goto LAB_103033488;
                  }
                  pppppuVar16 = pppppuVar17;
                  if (pppppuVar18 != (undefined8 *****)0x0) {
LAB_1030330f8:
                    func_0x000107c61170(ppppuVar8);
                    pppppuVar17 = pppppuVar18;
LAB_103033114:
                    func_0x000107c6142c(pppppuVar17);
                    goto LAB_103032f2c;
                  }
                  func_0x000107c61170(ppppuVar8);
                }
LAB_103033478:
                func_0x000107c61170(ppppuVar6);
                func_0x000107c6142c(ppppuVar11);
                goto LAB_103033488;
              }
              ppppuVar9 = ppppuVar8;
              func_0x000107c5bff0();
              ppppuVar10 = ppppuVar6;
              func_0x000107c5bff0();
              func_0x000107c61170(ppppuVar8);
              if (ppppuVar9 == ppppuVar10) goto LAB_103033478;
LAB_103032f2c:
              ppppuVar22 = (undefined8 ****)((long)ppppuVar22 + 1);
            } while (pppppuVar1 != pppppuVar26);
          }
          func_0x000107c6142c(ppppuVar11);
          func_0x000107c61170();
        }
      } while (ppppuVar21 != ppppuVar24);
    }
LAB_10303318c:
    FUN_103032c78();
    func_0x000108f55400();
    if (ppppuVar24 != (undefined8 ****)0x0) {
      ppppuVar21 = (undefined8 ****)0x0;
      do {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined8 *****)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= ppppuVar21) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334ec);
            (*pcVar4)();
          }
          ppppuVar11 = (undefined8 ****)param_1[(long)ppppuVar21 + 4];
          func_0x000107c61174();
        }
        else {
          ppppuVar11 = ppppuVar21;
          func_0x00010105930c(ppppuVar21,param_1);
        }
        puVar12 = PTR_PTR_1126df2b0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        if (ppppuVar21 == (undefined8 ****)0x100000000) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334e8);
          (*pcVar4)();
        }
        func_0x000107c55924();
        ppppuVar22 = ppppuVar11;
        func_0x000107c40794(ppppuVar11);
        func_0x000107c60234(appppuStack_80);
        func_0x000107c615e8(ppppuVar22);
        uVar13 = 0;
        FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
        puVar14 = &uStack_88;
        pppppuVar16 = appppuStack_80;
        func_0x000107c6147c(puVar14,pppppuVar16,PTR___sypN_11034f1a8 + 8,uVar13,6);
        uVar7 = uStack_88;
        if ((int)puVar14 == 0) {
          uVar7 = 0;
        }
        func_0x000107c53180(puVar12);
        func_0x000107c61170(uVar7);
        func_0x000107c55420(puVar12);
        puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((*(long *)(param_2 + 0x10) != 0) &&
           (ppppuVar22 = ppppuVar21, func_0x00010035a314(),
           puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8, ((ulong)pppppuVar16 & 1) != 0)) {
          puVar19 = *(undefined **)(*(long *)(param_2 + 0x38) + (long)ppppuVar22 * 8);
          func_0x000107c61434(puVar19);
        }
        if ((ulong)puVar19 >> 0x3e == 0) {
          puVar20 = *(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar20 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar19) {
            puVar20 = puVar19;
          }
          func_0x000107c60480();
        }
        if (puVar20 != (undefined *)0x0) {
          lVar25 = 4;
          do {
            puVar23 = (undefined *)(lVar25 + -4);
            if (((ulong)puVar19 & 0xc000000000000001) == 0) {
              if (*(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1030334b0);
                (*pcVar4)();
              }
              puVar15 = *(undefined **)(puVar19 + lVar25 * 8);
              func_0x000107c61174(puVar15);
            }
            else {
              puVar15 = puVar23;
              func_0x00010105930c(puVar23,puVar19);
            }
            puVar2 = (undefined *)(lVar25 + -3);
            if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103033470);
              (*pcVar4)();
            }
            puVar23 = puVar15;
            func_0x000107c40794(puVar15);
            func_0x000107c60234(appppuStack_80);
            func_0x000107c615e8(puVar23);
            puVar14 = &uStack_88;
            func_0x000107c6147c(puVar14,appppuStack_80,PTR___sypN_11034f1a8 + 8,uVar13,6);
            uVar7 = uStack_88;
            if ((int)puVar14 != 0) {
              puVar23 = puVar12;
              func_0x000107c5b02c();
              func_0x000107c61180();
              if (puVar23 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103033510);
                (*pcVar4)();
              }
              func_0x000107c3d798();
              func_0x000107c61170(puVar15);
              func_0x000107c61170(uVar7);
              puVar15 = puVar23;
            }
            func_0x000107c61170(puVar15);
            lVar25 = lVar25 + 1;
          } while (puVar2 != puVar20);
        }
        func_0x000107c6142c(puVar19);
        ppppuVar22 = ppppuVar6;
        func_0x000107c3f518();
        func_0x000107c61180();
        if (ppppuVar22 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103033518);
          (*pcVar4)();
        }
        ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
        func_0x000107c3d798();
        func_0x000107c61170(ppppuVar11);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(ppppuVar22);
      } while (ppppuVar21 != ppppuVar24);
    }
    func_0x000107c59750(param_3);
    func_0x000107c61170(ppppuVar6);
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 103033b64; end: 103033d57;  */

void FUN_103033b64(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  uVar6 = param_2;
  func_0x000107c5bff0();
  if ((uVar5 != 0) && (uVar5 = param_2, func_0x000107c5bff0(), uVar5 != 0)) {
    func_0x000107c5bff0(param_1);
    func_0x000107c5bff0(param_2);
    return;
  }
  uVar5 = param_1;
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103033d54);
    (*pcVar1)();
  }
  uVar2 = uVar5;
  func_0x000107c5faec();
  uVar4 = uVar6;
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar6);
  uVar5 = uVar2 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar5 = uVar6 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
LAB_103033c74:
    func_0x000107c49cec(param_1);
    return;
  }
  uVar5 = param_2;
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103033d58);
    (*pcVar1)();
  }
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar2 = uVar4;
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar4);
  uVar5 = uVar6 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar5 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) goto LAB_103033c74;
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = uVar2;
  }
  else {
    uVar6 = param_1;
    func_0x000107c5faec();
    uVar4 = uVar2;
    func_0x000107c61170(param_1);
    uVar5 = uVar2;
  }
  func_0x000107c5bfec();
  func_0x000107c61180();
  uVar2 = uVar5;
  if (param_2 != 0) {
    uVar3 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    uVar2 = uVar4;
    if (uVar5 != 0) {
      if (uVar4 != 0) {
        if ((uVar6 == uVar3) && (uVar5 == uVar4)) {
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar4);
          return;
        }
        func_0x000107c605b8(uVar6,uVar5,uVar3,uVar4,0);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar4);
        return;
      }
      goto LAB_103033cf8;
    }
  }
  uVar5 = uVar2;
  if (uVar5 == 0) {
    return;
  }
LAB_103033cf8:
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 103033d58; end: 103033eb7;  */

void FUN_103033d58(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  func_0x000107c4e064();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c3f654();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar3 != 0) {
      uStack_58 = 0;
      uVar4 = 0;
      FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c5fc50(lVar3,&uStack_58,uVar4);
      func_0x000107c61170(lVar3);
      uVar1 = uStack_58;
      if (uStack_58 != 0) {
        uVar9 = uStack_58 & 0xffffffffffffff8;
        if (uStack_58 >> 0x3e == 0) {
          uVar7 = *(ulong *)(uVar9 + 0x10);
        }
        else {
          uVar7 = uStack_58;
          if (-1 < (long)uStack_58) {
            uVar7 = uVar9;
          }
          func_0x000107c60480();
        }
        uVar8 = 0;
        do {
          if (uVar7 == uVar8) {
            func_0x000107c6142c(uVar1);
            return;
          }
          if ((uVar1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103033ea4);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar1 + uVar8 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar8;
            func_0x00010105930c(uVar8,uVar1);
          }
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103033e68);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          FUN_103033b64();
          func_0x000107c61170(uVar5);
          uVar8 = uVar8 + 1;
        } while ((uVar6 & 1) == 0);
        func_0x000107c6142c(uVar1);
      }
    }
  }
  return;
}



/* Entry: 103033eb8; end: 103034587;  */

undefined8 FUN_103033eb8(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  uVar3 = param_2;
  func_0x000107c44b40();
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_103033d58(param_1,param_2), (uVar3 & 1) == 0)) {
    FUN_103032c78();
    func_0x000108f55400();
    puVar1 = PTR___sypN_11034f1a8;
    lVar8 = 0;
    do {
      puVar5 = PTR_PTR_1126df2b0;
      func_0x000107c610f8(PTR_PTR_1126df2b0);
      func_0x000107c453e4();
      func_0x000107c55924();
      uVar6 = param_1;
      func_0x000107c40794(param_1);
      func_0x000107c60234(auStack_80);
      func_0x000107c615e8(uVar6);
      uVar4 = 0;
      FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      puVar7 = &uStack_88;
      func_0x000107c6147c(puVar7,auStack_80,puVar1 + 8,uVar4,6);
      uVar4 = uStack_88;
      if ((int)puVar7 == 0) {
        uVar4 = 0;
      }
      func_0x000107c53180(puVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c55420(puVar5);
      uVar6 = uVar3;
      func_0x000107c3f518();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103034048);
        (*pcVar2)();
      }
      lVar8 = lVar8 + 1;
      func_0x000107c3d798();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
    } while (lVar8 != 4);
    func_0x000107c59750(param_2);
    func_0x000107c61170(uVar3);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 103034588; end: 1030345a7;  */

void FUN_103034588(void)

{
  func_0x000107c61168(&PTR_PTR_1128b12a0);
  return;
}



/* Entry: 1030345a8; end: 1030345cb;  */

void FUN_1030345a8(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1030345cc; end: 1030345ef;  */

void FUN_1030345cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 1030345f0; end: 10303460f;  */

void FUN_1030345f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103034610; end: 10303463b;  */

void FUN_103034610(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10303463c; end: 1030348fb;  */

uint FUN_10303463c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (3 < uVar9) {
      uVar8 = 4;
      if ((param_1 & 0xc000000000000001) == 0) {
LAB_1030347a4:
        func_0x000107c61434(param_1);
      }
      else {
LAB_103034684:
        uVar2 = 0;
        FUN_103034904(0,0x112d56e40,&PTR_PTR_1126b0ef0);
        func_0x000107c61434(param_1);
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 1;
          func_0x000107c60318(uVar10,param_1,uVar2);
          uVar10 = uVar9;
        } while (uVar8 != uVar9);
      }
      if (param_1 >> 0x3e != 0) goto LAB_1030347cc;
      uVar10 = 0;
      puVar4 = (undefined *)(param_1 & 0xffffffffffffff8);
      param_4 = uVar8 << 1;
LAB_103034834:
      uVar2 = 0;
      func_0x000107c605fc(0);
      puVar5 = puVar4;
      func_0x000107c615f4(puVar4,2);
      func_0x000107c61480();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c615e8(puVar4);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar11 = *(long *)(puVar5 + 0x10);
      func_0x000107c61574();
      if (SBORROW8(param_4 >> 1,uVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030348f0);
        (*pcVar1)();
      }
      if (lVar11 != (param_4 >> 1) - uVar10) {
        func_0x000107c615e8();
        goto LAB_1030347fc;
      }
      puVar6 = puVar4;
      func_0x000107c61480(puVar4,uVar2);
      func_0x000107c615e8(puVar4);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar6 == (undefined *)0x0) goto LAB_1030348ac;
LAB_1030348b4:
      puVar4 = puVar6;
      func_0x00010303351c(puVar6,param_2,param_3);
      uVar7 = (uint)puVar4;
      func_0x000107c61574(puVar6);
      goto LAB_1030348d0;
    }
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar10 = param_1;
    }
    uVar8 = uVar10;
    func_0x000107c60480();
    uVar9 = uVar10;
    func_0x000107c60480();
    if (3 < (long)uVar8) {
      uVar8 = uVar10;
      func_0x000107c60480();
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103034788);
        (*pcVar1)();
      }
      uVar8 = uVar9;
      if (3 < uVar9) {
        uVar8 = 4;
      }
      func_0x000107c60480();
      if ((long)uVar10 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10303472c);
        (*pcVar1)();
      }
      if ((param_1 & 0xc000000000000001) == 0) goto LAB_1030347a4;
      if (uVar9 != 0) goto LAB_103034684;
      func_0x000107c61434(param_1);
      uVar8 = 0;
LAB_1030347cc:
      func_0x000107c6142c(param_1);
      uVar10 = param_1 & 0xffffffffffffff8;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar10 = param_1;
      }
      puVar4 = (undefined *)0x0;
      func_0x000107c60484(0,uVar8);
      if ((param_4 & 1) != 0) goto LAB_103034834;
LAB_1030347fc:
      puVar5 = puVar4;
      FUN_103032628(puVar4);
LAB_1030348ac:
      func_0x000107c615e8(puVar4);
      puVar6 = puVar5;
      goto LAB_1030348b4;
    }
  }
  if (uVar9 == 0) {
    return 0;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103034784);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    func_0x00010105930c(0,param_1);
  }
  uVar3 = uVar2;
  func_0x000103034048();
  uVar7 = (uint)uVar3;
  func_0x000107c61170(uVar2);
LAB_1030348d0:
  return uVar7 & 1;
}



/* Entry: 1030348fc; end: 103034903;  */

void FUN_1030348fc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103034904; end: 103034943;  */

void FUN_103034904(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103034944; end: 10303494f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103034944(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((param_1 & 1) == 0) {
      *(undefined1 *)(lVar2 + _DAT_112f354c8) = 0;
      (*pcVar1)(0);
      func_0x000107c61170(lVar2);
    }
    else {
      lVar3 = lVar2;
      FUN_10303272c();
      puVar4 = &UNK_1105ffde8;
      func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar2);
      puVar5 = &UNK_110600248;
      func_0x000107c613fc(&UNK_110600248,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = pcVar1;
      *(undefined8 *)(puVar5 + 0x20) = uVar6;
      *(long *)(puVar5 + 0x28) = lVar3;
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(uVar6);
      func_0x000107c61174(lVar3);
      func_0x00010302f9d0();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
    }
  }
  return;
}



/* Entry: 103034950; end: 10303498f;  */

void FUN_103034950(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103034990; end: 10303499b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103034990(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 & 1) == 0) {
      *(undefined1 *)(lVar4 + _DAT_112f354c8) = 0;
      (*pcVar2)(0);
      func_0x000107c61170(lVar4);
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + _DAT_112f354b8);
      puVar5 = &UNK_1105ffde8;
      func_0x000107c613fc(&UNK_1105ffde8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,lVar4);
      puVar6 = &UNK_110600270;
      func_0x000107c613fc(&UNK_110600270,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(code **)(puVar6 + 0x18) = pcVar2;
      *(undefined8 *)(puVar6 + 0x20) = uVar1;
      func_0x000107c61174(uVar7);
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(uVar1);
      FUN_103034cdc(uVar3,FUN_1030349c8,puVar6);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(puVar6);
    }
  }
  return;
}



/* Entry: 10303499c; end: 1030349c7;  */

void FUN_10303499c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030349c8; end: 1030349d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030349c8(byte param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = &UNK_110600298;
    lStack_b8 = lVar11;
    func_0x000107c613fc(&UNK_110600298,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    puVar4[0x18] = param_1 & 1;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    *(undefined8 *)(puVar4 + 0x28) = uVar8;
    pcStack_88 = FUN_1030349d4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1106002b0;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(uVar8);
    func_0x000107c5f808(lVar10);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = uVar6;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar9,&puStack_b0,uVar6,uVar7,lVar1,uVar8);
    func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    (**(code **)(lStack_b8 + 8))(puVar9,lVar1);
    (**(code **)(lVar12 + 8))(lVar10,lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 1030349d4; end: 103034aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030349d4(void)

{
  code *pcVar1;
  undefined1 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined1 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f354c8) = 0;
  (*pcVar1)(uVar2);
  return;
}



/* Entry: 103034ab0; end: 103034b8f;  */

undefined8 * FUN_103034ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 103034b90; end: 103034be3;  */

undefined8 * FUN_103034b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103034be4; end: 103034cdb;  */

int FUN_103034be4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103034cdc; end: 103035173;  */

/* WARNING: Possible PIC construction at 0x000103034d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103034fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103035084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303510c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303511c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103035134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103035034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103035138) */
/* WARNING: Removing unreachable block (ram,0x000103035120) */
/* WARNING: Removing unreachable block (ram,0x000103035110) */
/* WARNING: Removing unreachable block (ram,0x000103035088) */
/* WARNING: Removing unreachable block (ram,0x000103034fec) */
/* WARNING: Removing unreachable block (ram,0x000103034fdc) */
/* WARNING: Removing unreachable block (ram,0x000103034f28) */
/* WARNING: Removing unreachable block (ram,0x00010303515c) */
/* WARNING: Removing unreachable block (ram,0x000103034f44) */
/* WARNING: Removing unreachable block (ram,0x000103034f04) */
/* WARNING: Removing unreachable block (ram,0x000103034f0c) */
/* WARNING: Removing unreachable block (ram,0x000103034e88) */
/* WARNING: Removing unreachable block (ram,0x000103034e94) */
/* WARNING: Removing unreachable block (ram,0x000103034e98) */
/* WARNING: Removing unreachable block (ram,0x000103034f10) */
/* WARNING: Removing unreachable block (ram,0x00010303505c) */
/* WARNING: Removing unreachable block (ram,0x00010303508c) */
/* WARNING: Removing unreachable block (ram,0x000103035094) */
/* WARNING: Removing unreachable block (ram,0x000103035070) */
/* WARNING: Removing unreachable block (ram,0x000103034f20) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000103034ecc) */
/* WARNING: Removing unreachable block (ram,0x000103034dd0) */
/* WARNING: Removing unreachable block (ram,0x000103034ddc) */
/* WARNING: Removing unreachable block (ram,0x000103034d64) */
/* WARNING: Removing unreachable block (ram,0x000103034e00) */
/* WARNING: Removing unreachable block (ram,0x000103034d6c) */
/* WARNING: Removing unreachable block (ram,0x000103034e1c) */
/* WARNING: Removing unreachable block (ram,0x000103034e20) */
/* WARNING: Removing unreachable block (ram,0x000103034d84) */
/* WARNING: Removing unreachable block (ram,0x000103034e30) */
/* WARNING: Removing unreachable block (ram,0x000103034d8c) */
/* WARNING: Removing unreachable block (ram,0x000103034d94) */
/* WARNING: Removing unreachable block (ram,0x000103034de0) */
/* WARNING: Removing unreachable block (ram,0x000103034d98) */
/* WARNING: Removing unreachable block (ram,0x000103034e18) */
/* WARNING: Removing unreachable block (ram,0x000103034da4) */
/* WARNING: Removing unreachable block (ram,0x000103034db0) */
/* WARNING: Removing unreachable block (ram,0x000103034e14) */
/* WARNING: Removing unreachable block (ram,0x000103034dbc) */
/* WARNING: Removing unreachable block (ram,0x000103034e08) */
/* WARNING: Removing unreachable block (ram,0x000103034e3c) */
/* WARNING: Removing unreachable block (ram,0x000103034dc8) */
/* WARNING: Removing unreachable block (ram,0x000103035038) */

void FUN_103034cdc(long param_1,code *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 auStack_90 [6];
  
  func_0x000107c614f0();
  func_0x000107c5bf84();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5b9a0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c6142c(0);
      (*param_2)(0);
      unaff_x20 = 0;
    }
    else {
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      FUN_103036f00();
    }
  }
  else {
    auStack_90[0] = 0;
    uVar1 = 0;
    FUN_1030383d0(0,0x112d56e38,&PTR_PTR_1126b7600);
    func_0x000107c5fc50(param_1,auStack_90,uVar1);
    unaff_x20 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 103035174; end: 10303528f;  */

void FUN_103035174(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1030383d0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1
            );
  puVar2 = puVar3;
  func_0x000107c5fff0();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  puRam0000000112f35670 = puVar2;
  return;
}



/* Entry: 103035290; end: 103035363; -[_TtC40SCSpotlightInterstitialResponseProcessor40SCSpotlightInterstitialResponseProcessor initWithRepository:discoverFeedResponseProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103035290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f35660) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f35678) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103035364; end: 1030353f3; -[_TtC40SCSpotlightInterstitialResponseProcessor40SCSpotlightInterstitialResponseProcessor processWithStoriesBatchResponse:completion:] */

void FUN_103035364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110600420;
  func_0x000107c613fc(&UNK_110600420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103034cdc(param_3,FUN_10303784c,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030353f4; end: 103035543;  */

undefined8 FUN_1030353f4(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
LAB_103035520:
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar6 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar5 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103035544);
              (*pcVar2)();
            }
            if ((long)(uVar6 + 0x3f >> 6) <= lVar8) goto LAB_103035520;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar5 = lVar5 + 1;
          } while (uVar9 == 0);
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar5;
        }
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar4) | lVar8 << 6) * 4);
        uVar4 = *(ulong *)(param_2 + 0x28);
        func_0x000107c60684(uVar4,iVar1,4);
        uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0) break;
        while (lVar5 = lVar8, *(int *)(*(long *)(param_2 + 0x30) + uVar4 * 4) != iVar1) {
          uVar4 = uVar4 + 1 & ~uVar7;
          if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0)
          goto LAB_103035518;
        }
      }
    }
LAB_103035518:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 103035544; end: 103035687;  */

void FUN_103035544(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000103038674(param_3,param_1,param_4);
      func_0x000107c61170(param_2);
      goto LAB_1030355cc;
    }
  }
  param_3 = 0;
LAB_1030355cc:
  func_0x000107c4b940(param_5);
  func_0x000107c61428(param_6 + 0x10,auStack_68,0x21,0);
  uVar6 = *(ulong *)(param_6 + 0x10);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  uVar4 = uVar6;
  func_0x000107c61558();
  *(ulong *)(param_6 + 0x10) = uVar6;
  if ((uVar4 & 1) == 0) {
    func_0x000103031d10();
    *(ulong *)(param_6 + 0x10) = uVar6;
  }
  if ((long)param_7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103035684);
    (*pcVar2)();
  }
  if (param_7 < *(ulong *)(uVar6 + 0x10)) {
    lVar1 = uVar6 + param_7 * 8;
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    *(ulong *)(param_6 + 0x10) = uVar6;
    func_0x000107c614a8(auStack_68);
    func_0x000107c61170(uVar5);
    func_0x000107c5d278(param_5);
    func_0x000107c60f3c(param_8);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103035688);
  (*pcVar2)();
}



/* Entry: 103035688; end: 1030356f7;  */

void FUN_103035688(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_1030383d0(0,0x112e0fd70,&PTR_PTR_1126c2098);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030356f8; end: 103035997;  */

/* WARNING: Removing unreachable block (ram,0x00010303598c) */

void FUN_1030356f8(undefined8 param_1,long param_2,undefined *param_3,code *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c4b940();
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar10 = *(long *)(param_2 + 0x10);
  uVar11 = *(ulong *)(lVar10 + 0x10);
  func_0x000107c61434(lVar10);
  uVar9 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (uVar11 != uVar9) {
    if (*(ulong *)(lVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10303592c);
      (*pcVar2)();
    }
    lVar3 = *(long *)(lVar10 + uVar9 * 8 + 0x20);
    uVar9 = uVar9 + 1;
    if (lVar3 != 0) {
      func_0x000107c61174();
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
        func_0x000101f19118(0,puVar4 + 1,1,puVar6);
      }
      uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x000101f19118(puVar6,uVar1 + 1,1,puVar5);
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
      *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar3;
    }
  }
  func_0x000107c6142c(lVar10);
  func_0x000107c5d278(param_1);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar5 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if (((ulong)puVar6 & 0x8000000000000000) != 0) {
      puVar5 = puVar6;
    }
    func_0x000107c60480();
  }
  if ((ulong)param_3 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)param_3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_3) {
      puVar4 = param_3;
    }
    func_0x000107c60480();
  }
  if (puVar5 == puVar4) {
    if ((ulong)puVar6 >> 0x3e == 0) {
      func_0x000107c61434(puVar6);
      puStack_80 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if (((ulong)puVar6 & 0x8000000000000000) != 0) {
        puVar5 = puVar6;
      }
      func_0x000107c60480();
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c61434(puVar6);
        puVar4 = puVar5;
        func_0x000101f19240(puVar5,0);
        puVar7 = puVar6;
        func_0x000103036d24(puVar4 + 0x20,puVar5);
        func_0x000107c6142c();
        puStack_80 = puVar4;
        if (puVar7 != puVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030358ec);
          (*pcVar2)();
        }
      }
    }
    FUN_103036080(&puStack_80);
    func_0x000107c6142c(puVar6);
    puVar6 = puStack_80;
    (*param_4)(puStack_80);
    func_0x000107c61574(puVar6);
    return;
  }
  func_0x000107c6142c(puVar6);
  (*param_4)(0);
  return;
}



/* Entry: 103035998; end: 1030359f7; -[_TtC40SCSpotlightInterstitialResponseProcessor40SCSpotlightInterstitialResponseProcessor init] */

void FUN_103035998(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialResponseProcessor.SCSpotlightInterstitialResponseProcessor"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030359c4);
  (*pcVar1)();
}



/* Entry: 1030359f8; end: 103035a2f; -[_TtC40SCSpotlightInterstitialResponseProcessor40SCSpotlightInterstitialResponseProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030359f8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35660));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f35678));
  return;
}



/* Entry: 103035a30; end: 103035a43;  */

ulong FUN_103035a30(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103035b28);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103035b2c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b7600;
    func_0x000107c61168(PTR_PTR_1126b7600);
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
    puVar4 = PTR_PTR_1126b7600;
    func_0x000107c61168(PTR_PTR_1126b7600);
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
  FUN_1030383d0(0,0x112d56e38,&PTR_PTR_1126b7600);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103035c00);
  (*pcVar2)();
}



/* Entry: 103035a44; end: 103035bff;  */

ulong FUN_103035a44(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103035b28);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103035b2c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1030383d0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103035c00);
  (*pcVar2)();
}



/* Entry: 103035c00; end: 103035c83;  */

void FUN_103035c00(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010173f4a4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103035c84; end: 103035dbf;  */

undefined *
FUN_103035c84(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103035dc0);
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
    (*param_5)();
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
    FUN_1030383d0(0,param_6,param_7);
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



/* Entry: 103035dc0; end: 10303607f;  */

undefined * FUN_103035dc0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103035ee4);
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
    func_0x000101f193b8();
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
    FUN_10329b290(0);
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



/* Entry: 103036080; end: 10303617f;  */

void FUN_103036080(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_103036e7c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_10329b290(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_103036180(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_103036524(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 103036180; end: 103036523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103036180(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(*(long *)(lVar10 + lVar21 * 8) + _DAT_112f51060);
        lVar15 = *(long *)(*(long *)(lVar10 + lVar9 * 8) + _DAT_112f51060);
        lVar16 = lVar9 + 2;
        lVar19 = lVar12;
        do {
          lVar17 = lVar16;
          lVar21 = lVar7;
          if (lVar7 == lVar17) break;
          lVar21 = *(long *)(*(long *)(lVar10 + lVar17 * 8) + _DAT_112f51060);
          bVar3 = lVar19 <= lVar21;
          lVar16 = lVar17 + 1;
          lVar19 = lVar21;
          lVar21 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364f8);
            (*pcVar2)();
          }
          if (lVar9 < lVar21) {
            puVar8 = (undefined8 *)(lVar10 + lVar21 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar9 * 8);
            lVar16 = lVar21;
            lVar7 = lVar9;
            do {
              puVar8 = puVar8 + -1;
              lVar16 = lVar16 + -1;
              if (lVar7 != lVar16) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103036518);
                  (*pcVar2)();
                }
                uVar18 = *puVar13;
                *puVar13 = *puVar8;
                *puVar8 = uVar18;
              }
              lVar7 = lVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar7 < lVar16);
            lVar7 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar7) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364f4);
          (*pcVar2)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364fc);
            (*pcVar2)();
          }
          lVar19 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar19 = lVar7;
          }
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103036500);
            (*pcVar2)();
          }
          if (lVar21 != lVar19) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar21 * 8 + -8);
            lVar10 = lVar9 - lVar21;
            do {
              lVar12 = *(long *)(lVar7 + lVar21 * 8);
              lVar16 = lVar10;
              plVar20 = plVar14;
              do {
                lVar15 = *plVar20;
                if (*(long *)(lVar15 + _DAT_112f51060) <= *(long *)(lVar12 + _DAT_112f51060)) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103036504);
                  (*pcVar2)();
                }
                *plVar20 = lVar12;
                plVar20[1] = lVar15;
                bVar3 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar20 = plVar20 + -1;
              } while (bVar3);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar16 = lVar19;
            } while (lVar21 != lVar19);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364e4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar23 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar23 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar23 + 1;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10303651c);
        (*pcVar2)();
      }
      FUN_10303659c(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1030364b4;
      lVar7 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103036524);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar22 = (ulong *)(puVar6 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103036520);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_103036804(lVar9 + lVar21 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364e8);
      (*pcVar2)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364ec);
      (*pcVar2)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar11;
    uVar11 = *puVar22;
    lVar9 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030364f0);
      (*pcVar2)();
    }
    uVar23 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1030364b4:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 103036524; end: 10303659b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103036524(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 8);
      lVar6 = param_1;
      plVar7 = plVar4;
      do {
        lVar8 = *plVar7;
        if (*(long *)(lVar8 + _DAT_112f51060) <= *(long *)(lVar5 + _DAT_112f51060)) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10303659c);
          (*pcVar1)();
        }
        *plVar7 = lVar5;
        plVar7[1] = lVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10303659c; end: 103036803;  */

undefined8 FUN_10303659c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_103036670;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367ec);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1030366d4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367dc);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367e4);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367c4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367c8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367d0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367d8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_103036670:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367cc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367d4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367e0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367e8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1030366d4;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367f0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367b8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103036804);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_103036804(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367bc);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030367c0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 103036804; end: 103036a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103036804(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(long *)(lVar2 + _DAT_112f51060) < *(long *)(*param_4 + _DAT_112f51060)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(long *)(*plVar5 + _DAT_112f51060) < *(long *)(*plVar7 + _DAT_112f51060)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1030369e0;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1030369e0:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 103036a3c; end: 103036e7b;  */

ulong FUN_103036a3c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103036bbc);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103036bb0);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1030383d0(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103036bb4);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103036bb8);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_103035a44(uVar7,param_3,&PTR_PTR_1126b0ef0,0x112d56e40);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 103036e7c; end: 103036e8f;  */

/* WARNING: Removing unreachable block (ram,0x000103035de0) */
/* WARNING: Removing unreachable block (ram,0x000103035df0) */
/* WARNING: Removing unreachable block (ram,0x000103035ee0) */
/* WARNING: Removing unreachable block (ram,0x000103035dfc) */
/* WARNING: Removing unreachable block (ram,0x000103035e04) */
/* WARNING: Removing unreachable block (ram,0x000103035e7c) */
/* WARNING: Removing unreachable block (ram,0x000103035e84) */
/* WARNING: Removing unreachable block (ram,0x000103035e88) */
/* WARNING: Removing unreachable block (ram,0x000103035e8c) */
/* WARNING: Removing unreachable block (ram,0x000103035e9c) */

undefined * FUN_103036e7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    func_0x000101f193b8();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  FUN_10329b290(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 103036e90; end: 103036eff;  */

void FUN_103036e90(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5fe14(lVar2,PTR___ss6UInt32VN_11034f020,PTR___ss6UInt32VSHsWP_11034f028);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x20);
    lStack_38 = lVar1;
    do {
      func_0x000101747584(auStack_3c,*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 103036f00; end: 1030376f7;  */

undefined1  [16] FUN_103036f00(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  func_0x000107c3f518();
  func_0x000107c61180();
  if (param_1 != 0) {
    puStack_70 = (undefined *)0x0;
    uVar3 = 0;
    FUN_1030383d0(0,0x112f35648,&PTR_PTR_1126df2b0);
    func_0x000107c5fc50(param_1,&puStack_70,uVar3);
    func_0x000107c61170(param_1);
    puVar9 = puStack_70;
    if (puStack_70 != (undefined *)0x0) {
      puVar13 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff8);
      if ((ulong)puStack_70 >> 0x3e == 0) {
        puVar11 = *(undefined **)(puVar13 + 0x10);
        if (puVar11 != (undefined *)0x4) goto LAB_103037248;
        puVar12 = (undefined *)0x4;
LAB_103036f8c:
        uVar10 = (ulong)puVar9 & 0xc000000000000001;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar12 != (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
          do {
            while( true ) {
              if (uVar10 == 0) {
                if (*(undefined **)(puVar13 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10303721c);
                  (*pcVar2)();
                }
                puVar4 = *(undefined **)(puVar9 + (long)puVar6 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar4 = puVar6;
                FUN_103035a44(puVar6,puVar9,&PTR_PTR_1126df2b0,0x112f35648);
              }
              puVar7 = puVar6 + 1;
              if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103037218);
                (*pcVar2)();
              }
              puVar5 = puVar4;
              func_0x000107c44780();
              if (((ulong)puVar5 & 1) == 0) break;
              func_0x000107c61170(puVar4);
              puVar6 = puVar6 + 1;
              if (puVar7 == puVar12) goto LAB_1030370b4;
            }
            puVar6 = puVar11;
            func_0x000107c61558();
            puStack_70 = puVar11;
            if (((ulong)puVar6 & 1) == 0) {
              func_0x000103035c1c(0,*(long *)(puVar11 + 0x10) + 1,1);
            }
            uVar1 = *(ulong *)(puStack_70 + 0x10);
            if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar1) {
              func_0x000103035c1c(1 < *(ulong *)(puStack_70 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
            *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar4;
            puVar6 = puVar7;
            puVar11 = puStack_70;
          } while (puVar7 != puVar12);
        }
LAB_1030370b4:
        if (((long)puVar11 < 0) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
          puVar13 = puVar11;
          func_0x000107c60480();
          if (puVar13 != (undefined *)0x0) goto LAB_1030370c4;
LAB_103037360:
          func_0x000107c61574(puVar11);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_1030371a4;
LAB_103037378:
          func_0x000107c6142c(puVar6);
          puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_103035c00(0,4,0);
          puVar13 = puStack_70;
          if (uVar10 == 0) {
            uVar3 = *(undefined8 *)(puVar9 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar3 = 0;
            FUN_103035a44(0,puVar9,&PTR_PTR_1126df2b0,0x112f35648);
          }
          uVar8 = uVar3;
          func_0x000107c4a7a4();
          func_0x000107c61170(uVar3);
          uVar1 = *(ulong *)(puVar13 + 0x10);
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
            FUN_103035c00(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
            puVar13 = puStack_70;
          }
          *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
          *(int *)(puVar13 + uVar1 * 4 + 0x20) = (int)uVar8;
          if (uVar10 == 0) {
            uVar3 = *(undefined8 *)(puVar9 + 0x28);
            func_0x000107c61174();
          }
          else {
            uVar3 = 1;
            FUN_103035a44(1,puVar9,&PTR_PTR_1126df2b0,0x112f35648);
          }
          uVar8 = uVar3;
          func_0x000107c4a7a4();
          func_0x000107c61170(uVar3);
          uVar1 = *(ulong *)(puVar13 + 0x10);
          puStack_70 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
            FUN_103035c00(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
          }
          puVar13 = puStack_70;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(int *)(puStack_70 + uVar1 * 4 + 0x20) = (int)uVar8;
          if (uVar10 == 0) {
            uVar3 = *(undefined8 *)(puVar9 + 0x30);
            func_0x000107c61174();
          }
          else {
            uVar3 = 2;
            FUN_103035a44(2,puVar9,&PTR_PTR_1126df2b0,0x112f35648);
          }
          uVar8 = uVar3;
          func_0x000107c4a7a4();
          func_0x000107c61170(uVar3);
          uVar1 = *(ulong *)(puVar13 + 0x10);
          puStack_70 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
            FUN_103035c00(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
          }
          puVar13 = puStack_70;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          *(int *)(puStack_70 + uVar1 * 4 + 0x20) = (int)uVar8;
          if (uVar10 == 0) {
            uVar3 = *(undefined8 *)(puVar9 + 0x38);
            func_0x000107c61174();
          }
          else {
            uVar3 = 3;
            FUN_103035a44(3,puVar9,&PTR_PTR_1126df2b0,0x112f35648);
          }
          uVar8 = uVar3;
          func_0x000107c4a7a4();
          func_0x000107c61170(uVar3);
          uVar10 = *(ulong *)(puVar13 + 0x10);
          puStack_70 = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar10) {
            FUN_103035c00(1 < *(ulong *)(puVar13 + 0x18),uVar10 + 1,1);
          }
          puVar6 = puStack_70;
          *(ulong *)(puStack_70 + 0x10) = uVar10 + 1;
          *(int *)(puStack_70 + uVar10 * 4 + 0x20) = (int)uVar8;
          func_0x000107c6142c(puVar9);
          puVar9 = (undefined *)0x4;
          func_0x000107c5fe14(4,PTR___ss6UInt32VN_11034f020,PTR___ss6UInt32VSHsWP_11034f028);
          puStack_70 = puVar9;
          func_0x000101747584(&puStack_78,0);
          func_0x000101747584(&puStack_78,1);
          func_0x000101747584(&puStack_78,2);
          func_0x000101747584(&puStack_78,3);
          puVar9 = puStack_70;
          puVar13 = puVar6;
          func_0x000107c61434();
          FUN_103036e90();
          func_0x000107c6142c(puVar6);
          puVar12 = puVar13;
          FUN_1030353f4(puVar13,puVar9);
          func_0x000107c6142c(puVar9);
          func_0x000107c6142c(puVar13);
          if (((ulong)puVar12 & 1) != 0) {
            func_0x000107c6142c(puVar6);
            puStack_70 = (undefined *)0x0;
            puStack_68 = (undefined *)0x0;
            goto LAB_103037654;
          }
          puStack_70 = (undefined *)0x0;
          puStack_68 = (undefined *)0xe000000000000000;
          func_0x000107c602fc(0x3c);
          func_0x000107c5fb78(0xd00000000000003a,0x800000010f11aa50);
          puVar9 = PTR___ss6UInt32VN_11034f020;
          func_0x000107c5fc58(puVar6,PTR___ss6UInt32VN_11034f020);
          func_0x000107c5fb78();
        }
        else {
          puVar13 = *(undefined **)(puVar11 + 0x10);
          if (puVar13 == (undefined *)0x0) goto LAB_103037360;
LAB_1030370c4:
          puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_103035c00(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103037678);
            (*pcVar2)();
          }
          puVar12 = (undefined *)0x0;
          do {
            puVar6 = puStack_70;
            if (((ulong)puVar11 & 0xc000000000000001) == 0) {
              puVar4 = *(undefined **)(puVar11 + (long)puVar12 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar4 = puVar12;
              FUN_103035a44(puVar12,puVar11,&PTR_PTR_1126df2b0,0x112f35648);
            }
            puVar7 = puVar4;
            func_0x000107c4a7a4();
            func_0x000107c61170(puVar4);
            uVar1 = *(ulong *)(puVar6 + 0x10);
            puStack_70 = puVar6;
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
              FUN_103035c00(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
            }
            puVar6 = puStack_70;
            puVar12 = puVar12 + 1;
            *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
            *(int *)(puStack_70 + uVar1 * 4 + 0x20) = (int)puVar7;
          } while (puVar13 != puVar12);
          func_0x000107c61574(puVar11);
          if (*(long *)(puVar6 + 0x10) == 0) goto LAB_103037378;
LAB_1030371a4:
          func_0x000107c6142c(puVar9);
          puStack_70 = (undefined *)0x0;
          puStack_68 = (undefined *)0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010f11aa10);
          puVar9 = PTR___ss6UInt32VN_11034f020;
          func_0x000107c5fc58(puVar6,PTR___ss6UInt32VN_11034f020);
          func_0x000107c5fb78();
        }
        func_0x000107c6142c(puVar6);
      }
      else {
        puVar12 = puStack_70;
        if (-1 < (long)puStack_70) {
          puVar12 = puVar13;
        }
        puVar11 = puVar12;
        func_0x000107c60480();
        if (puVar11 == (undefined *)0x4) {
          func_0x000107c60480();
          goto LAB_103036f8c;
        }
LAB_103037248:
        puStack_70 = (undefined *)0x0;
        puStack_68 = (undefined *)0xe000000000000000;
        func_0x000107c602fc(0x35);
        func_0x000107c5fb78(0xd000000000000032,0x800000010f11a9d0);
        puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar13 = PTR___sSiN_11034deb0;
        puStack_78 = (undefined *)0x4;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar6);
        func_0x000107c5fb78(0x20,0xe100000000000000);
        puVar4 = puStack_68;
        puVar6 = puStack_70;
        func_0x000107c6142c(puVar9);
        puStack_70 = (undefined *)0x3d6c6175746361;
        puStack_68 = (undefined *)0xe700000000000000;
        puStack_78 = puVar11;
        func_0x000107c6057c(puVar13,puVar12);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar12);
        puVar9 = puStack_68;
        puVar13 = puStack_70;
        puStack_70 = puVar6;
        puStack_68 = puVar4;
        func_0x000107c61434(puVar4);
        func_0x000107c5fb78(puVar13,puVar9);
        func_0x000107c6142c(puVar4);
      }
      func_0x000107c6142c(puVar9);
      goto LAB_103037654;
    }
  }
  puStack_70 = (undefined *)0xd00000000000002b;
  puStack_68 = (undefined *)0x800000010f11a9a0;
LAB_103037654:
  auVar14._8_8_ = puStack_68;
  auVar14._0_8_ = puStack_70;
  return auVar14;
}



/* Entry: 1030376f8; end: 1030377ef;  */

bool FUN_1030376f8(double param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    param_1 = param_1 * 1000.0;
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030377e8);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030377ec);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030377f0);
      (*pcVar1)();
    }
    bVar2 = param_2 <= (ulong)(long)param_1;
  }
  return bVar2;
}



/* Entry: 1030377f0; end: 10303780f;  */

void FUN_1030377f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103037810; end: 10303782b;  */

void FUN_103037810(long param_1,long param_2)

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



/* Entry: 10303782c; end: 10303784b;  */

void FUN_10303782c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1380);
  return;
}



/* Entry: 10303784c; end: 10303785f;  */

void FUN_10303784c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010303785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103037860; end: 1030378f7;  */

undefined * FUN_103037860(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030378f8);
    (*pcVar1)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    uVar2 = 0x112f35658;
    func_0x0001000285a8(0x112f35658,&UNK_10db7db00);
    puVar3 = param_2;
    func_0x000107c5fc70(param_2,uVar2);
    *(undefined **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != (undefined *)0x0) {
      puVar4 = (undefined8 *)(puVar3 + 0x28);
      do {
        *puVar4 = param_1;
        func_0x000107c61174(param_1);
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 1;
      } while (param_2 != (undefined *)0x0);
    }
    func_0x000107c61174(param_1);
  }
  return puVar3;
}



/* Entry: 1030378f8; end: 103037b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030378f8(ulong param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar8 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      if (param_1 >> 0x3e == 0) {
        uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = param_1;
        if (-1 < (long)param_1) {
          uVar5 = param_1 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if (uVar5 == 4) {
        func_0x000107c61434(param_1);
        uVar2 = param_5;
        func_0x000107c4a7a4();
        func_0x000107c42bdc(param_5);
        lVar1 = param_6;
        func_0x000107c50374();
        func_0x000107c61180();
        if (lVar1 == 0) {
          lVar7 = 0;
          puVar8 = (undefined1 *)0x0;
        }
        else {
          lVar7 = lVar1;
          func_0x000107c5faec();
          func_0x000107c61170(lVar1);
        }
        lVar6 = (long)(int)uVar2;
        uVar2 = 0;
        FUN_10329b2ec(0);
        func_0x000107c610f8();
        func_0x00010329b080(lVar6,param_5,lVar7,puVar8,param_1,uVar2);
        lVar1 = lRam0000000112f35668;
        uVar2 = *(undefined8 *)(param_2 + _DAT_112f35660);
        func_0x000107c615f0(uVar2);
        if (lVar1 != -1) {
          func_0x000107c61568(0x112f35668,FUN_103035174);
        }
        puVar3 = &UNK_110600538;
        func_0x000107c613fc(&UNK_110600538,0x30,7);
        *(long *)(puVar3 + 0x10) = param_6;
        *(long *)(puVar3 + 0x18) = lVar6;
        *(code **)(puVar3 + 0x20) = param_3;
        *(undefined8 *)(puVar3 + 0x28) = param_4;
        uStack_88 = 0x103038bac;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f3aa0;
        puStack_90 = &UNK_110600550;
        ppuVar4 = &puStack_a8;
        puStack_80 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_80;
        func_0x000107c61174(param_6);
        func_0x000107c61174(lVar6);
        func_0x000107c6157c(param_4);
        func_0x000107c61574(puVar3);
        func_0x000107c5016c(uVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar6);
        func_0x000107c615e8(uVar2);
        return;
      }
    }
    func_0x000107c61170();
  }
  (*param_3)(0);
  return;
}



/* Entry: 103037b54; end: 10303839b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103037b54(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  undefined *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  uStack_120 = param_2;
  lStack_e0 = param_3;
  lStack_d8 = param_4;
  func_0x000107c5f7fc();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lStack_150 = *(long *)(lVar4 + -8);
  lStack_148 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar14 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_158 = lVar14;
  func_0x000107c5f804();
  lStack_168 = *(long *)(lVar4 + -8);
  lStack_160 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lStack_170 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &UNK_110600448;
  func_0x000107c613fc(&UNK_110600448,0x40,7);
  *(long *)(puVar15 + 0x10) = param_5;
  *(code **)(puVar15 + 0x18) = param_6;
  *(undefined8 *)(puVar15 + 0x20) = param_7;
  *(undefined8 *)(puVar15 + 0x28) = param_8;
  *(undefined8 *)(puVar15 + 0x30) = param_9;
  *(undefined8 *)(puVar15 + 0x38) = param_10;
  pcStack_188 = param_6;
  lStack_180 = param_5;
  puStack_128 = puVar15;
  func_0x000107c6157c(param_5);
  uStack_178 = param_7;
  func_0x000107c6157c(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = param_9;
  func_0x000107c60f34();
  puVar15 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  uStack_b8 = uVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_198 = param_9;
  uStack_190 = param_8;
  puStack_d0 = puVar15;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar15 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar15 = param_1;
    }
    func_0x000107c60480(puVar15);
  }
  puVar5 = &UNK_110600470;
  func_0x000107c613fc(&UNK_110600470,0x18,7);
  uVar6 = 0;
  FUN_103037860(0,puVar15);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  puStack_140 = puVar17;
  lStack_138 = lVar16;
  lStack_130 = lVar3;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar15 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar15 = param_1;
    }
    puStack_c8 = puVar5;
    func_0x000107c60480();
    puVar5 = puStack_c8;
  }
  puStack_c8 = puVar5;
  if (puVar15 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    uStack_118 = *(undefined8 *)(lStack_d8 + _DAT_112f35678);
    uStack_e8 = (ulong)param_1 & 0xc000000000000001;
    uStack_f0 = (ulong)param_1 & 0xffffffffffffff8;
    uStack_f8 = 3;
    uStack_100 = 1;
    puStack_110 = puVar15;
    puStack_108 = param_1;
    do {
      if (uStack_e8 == 0) {
        if (*(undefined **)(uStack_f0 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103038354);
          (*pcVar2)();
        }
        puVar15 = *(undefined **)(puStack_108 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar15 = puVar18;
        FUN_103035a44(puVar18,puStack_108,&PTR_PTR_1126df2b0,0x112f35648);
      }
      if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103038350);
        (*pcVar2)();
      }
      puVar9 = puVar15;
      func_0x000107c3f514();
      func_0x000107c61180();
      lVar3 = lStack_180;
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61428(lStack_180 + 0x10,&puStack_a8,0,0);
        func_0x000107c61618(lVar3 + 0x10);
        func_0x000107c61170();
        (*pcStack_188)(0);
        func_0x000107c61574(puStack_128);
        func_0x000107c61574(puStack_c8);
        func_0x000107c61170(puStack_d0);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(uStack_b8);
        return;
      }
      puVar10 = puVar15;
      func_0x000107c5b02c();
      func_0x000107c61180();
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined *)0x0) {
        puStack_a8 = (undefined *)0x0;
        uVar6 = 0;
        FUN_1030383d0(0,0x112d56e40,&PTR_PTR_1126b0ef0);
        func_0x000107c5fc50(puVar10,&puStack_a8,uVar6);
        func_0x000107c61170();
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puStack_a8 != (undefined *)0x0) {
          puVar11 = puStack_a8;
        }
      }
      FUN_1030316e0();
      func_0x000107c613fc();
      *(undefined8 *)(puVar10 + 0x18) = uStack_f8;
      *(undefined8 *)(puVar10 + 0x10) = uStack_100;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      puStack_a8 = puVar10;
      func_0x000107c61174(puVar9);
      func_0x000103035ee4(puVar11);
      puVar10 = puStack_a8;
      func_0x000107c4a7a4(puVar15);
      if ((ulong)puVar10 >> 0x3e != 0) {
        puVar11 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar11 = puVar10;
        }
        func_0x000107c60480(puVar11);
      }
      puVar11 = puVar15;
      func_0x000107c3f514();
      func_0x000107c61180();
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c61170(uStack_198);
        func_0x000107c61170(uStack_190);
        func_0x000107c61574(uStack_178);
        func_0x000107c61574(lStack_180);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10303839c);
        (*pcVar2)();
      }
      puVar12 = puVar11;
      func_0x000107c5bfd8();
      func_0x000107c61170(puVar11);
      func_0x000107c60f38(uStack_b8);
      uVar6 = 0;
      FUN_1030383d0(0,0x112d56e40,&PTR_PTR_1126b0ef0);
      puVar11 = puVar10;
      func_0x000107c5fc48(puVar10,uVar6);
      func_0x000107c6142c(puVar10);
      puStack_c0 = puVar18 + 1;
      if (lStack_e0 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uStack_120;
        func_0x000107c5fadc(uStack_120);
      }
      puVar10 = &UNK_1106003a8;
      func_0x000107c613fc(&UNK_1106003a8,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,lStack_d8);
      puVar7 = &UNK_110600498;
      func_0x000107c613fc(&UNK_110600498,0x48,7);
      uVar13 = uStack_b8;
      puVar1 = puStack_d0;
      *(undefined **)(puVar7 + 0x10) = puVar10;
      *(undefined **)(puVar7 + 0x18) = puVar15;
      *(undefined **)(puVar7 + 0x20) = puVar12;
      *(undefined **)(puVar7 + 0x28) = puStack_d0;
      *(undefined **)(puVar7 + 0x30) = puVar5;
      *(undefined **)(puVar7 + 0x38) = puVar18;
      *(undefined8 *)(puVar7 + 0x40) = uStack_b8;
      uStack_88 = 0x1030383ac;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_103035688;
      puStack_90 = &UNK_1106004b0;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar10 = puStack_80;
      func_0x000107c61174(puVar1);
      func_0x000107c6157c(puVar5);
      func_0x000107c61174(puVar15);
      func_0x000107c61174(uVar13);
      func_0x000107c61574(puVar10);
      func_0x000107c4ee48(uStack_118);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(uVar6);
      puVar18 = puVar18 + 1;
      param_1 = puStack_108;
    } while (puStack_c0 != puStack_110);
  }
  FUN_1030383d0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar14 = lStack_160;
  lVar4 = lStack_168;
  lVar3 = lStack_170;
  (**(code **)(lStack_168 + 0x68))
            (lStack_170,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_160);
  lVar16 = lVar3;
  func_0x000107c5fff0();
  puStack_c0 = (undefined *)lVar16;
  (**(code **)(lVar4 + 8))(lVar3,lVar14);
  puVar15 = &UNK_1106004e8;
  func_0x000107c613fc(&UNK_1106004e8,0x38,7);
  puVar9 = puStack_c8;
  puVar18 = puStack_d0;
  puVar5 = puStack_128;
  *(undefined **)(puVar15 + 0x10) = puStack_d0;
  *(undefined **)(puVar15 + 0x18) = puStack_c8;
  *(undefined **)(puVar15 + 0x20) = param_1;
  *(code **)(puVar15 + 0x28) = FUN_10303839c;
  *(undefined **)(puVar15 + 0x30) = puStack_128;
  uStack_88 = 0x1030383c0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_110600500;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar15;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61174(puVar18);
  func_0x000107c6157c(puVar9);
  func_0x000107c61434(param_1);
  puVar15 = puVar5;
  func_0x000107c6157c(puVar5);
  lVar3 = lStack_158;
  func_0x000107c5f808(lStack_158);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = 0x112d4af98;
  FUN_103038b68(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
  lVar4 = lStack_130;
  puVar17 = puStack_140;
  func_0x000107c60264(puStack_140,&puStack_b0,uVar6,uVar13,lStack_130,puVar15);
  uVar6 = uStack_b8;
  puVar15 = puStack_c0;
  func_0x000107c5ffb8(lVar3,puVar17,puStack_c0,ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar15);
  (**(code **)(lStack_138 + 8))(puVar17,lVar4);
  (**(code **)(lStack_150 + 8))(lVar3,lStack_148);
  puVar15 = puStack_80;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar15);
  return;
}



/* Entry: 10303839c; end: 1030383cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303839c(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  puVar13 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar13,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      if (param_1 >> 0x3e == 0) {
        uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = param_1;
        if (-1 < (long)param_1) {
          uVar9 = param_1 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if (uVar9 == 4) {
        func_0x000107c61434(param_1);
        uVar5 = uVar10;
        func_0x000107c4a7a4();
        func_0x000107c42bdc(uVar10);
        lVar4 = lVar8;
        func_0x000107c50374();
        func_0x000107c61180();
        if (lVar4 == 0) {
          lVar12 = 0;
          puVar13 = (undefined1 *)0x0;
        }
        else {
          lVar12 = lVar4;
          func_0x000107c5faec();
          func_0x000107c61170(lVar4);
        }
        lVar11 = (long)(int)uVar5;
        uVar5 = 0;
        FUN_10329b2ec(0);
        func_0x000107c610f8();
        func_0x00010329b080(lVar11,uVar10,lVar12,puVar13,param_1,uVar5);
        lVar4 = lRam0000000112f35668;
        uVar10 = *(undefined8 *)(lVar3 + _DAT_112f35660);
        func_0x000107c615f0(uVar10);
        if (lVar4 != -1) {
          func_0x000107c61568(0x112f35668,FUN_103035174);
        }
        puVar6 = &UNK_110600538;
        func_0x000107c613fc(&UNK_110600538,0x30,7);
        *(long *)(puVar6 + 0x10) = lVar8;
        *(long *)(puVar6 + 0x18) = lVar11;
        *(code **)(puVar6 + 0x20) = pcVar2;
        *(undefined8 *)(puVar6 + 0x28) = uVar1;
        uStack_88 = 0x103038bac;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f3aa0;
        puStack_90 = &UNK_110600550;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_80;
        func_0x000107c61174(lVar8);
        func_0x000107c61174(lVar11);
        func_0x000107c6157c(uVar1);
        func_0x000107c61574(puVar6);
        func_0x000107c5016c(uVar10);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar11);
        func_0x000107c615e8(uVar10);
        return;
      }
    }
    func_0x000107c61170();
  }
  (*pcVar2)(0);
  return;
}



/* Entry: 1030383d0; end: 10303840f;  */

void FUN_1030383d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103038410; end: 103038b67;  */

undefined1  [16] FUN_103038410(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    func_0x000100403514(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103038674);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        func_0x000101eff02c(uVar10,param_1);
      }
      func_0x000107c602fc(0x18);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5bfd8();
      puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x756f4370616e732c,0xeb000000003d746e);
      func_0x000108483614();
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(puVar7);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x20) = 0x7046657075646564;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x28) = 0xe90000000000003d;
    } while (uVar9 != uVar10);
  }
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = 0x112d38278;
  FUN_103038b68(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar6 = 0x3b;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(0x3b,0xe100000000000000,uVar4,uVar5);
  func_0x000107c6142c(puVar1);
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar6;
  return auVar11;
}



/* Entry: 103038b68; end: 103038bcb;  */

void FUN_103038b68(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103038bcc; end: 103038be3;  */

void FUN_103038bcc(long param_1,long param_2)

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



/* Entry: 103038be4; end: 103038c33;  */

void FUN_103038be4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000024;
  func_0x000100442ccc(0xd000000000000024,0x800000010f11abd0,0);
  uRam0000000113806a38 = uVar1;
  return;
}



/* Entry: 103038c34; end: 103038c4f; +[SCSpotlightQueryCoordinatorConfigKeys clientSendsViewedDedupeFps] */

void FUN_103038c34(void)

{
  if (lRam00000001135099f8 != -1) {
    func_0x000107c61568(0x1135099f8,FUN_103038be4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a38);
  return;
}



/* Entry: 103038c50; end: 103038c9f;  */

void FUN_103038c50(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000024;
  func_0x000100442ccc(0xd000000000000024,0x800000010f11aba0,0);
  uRam0000000113806a40 = uVar1;
  return;
}



/* Entry: 103038ca0; end: 103038cbb; +[SCSpotlightQueryCoordinatorConfigKeys engagementRefreshEnabled] */

void FUN_103038ca0(void)

{
  if (lRam0000000113509a00 != -1) {
    func_0x000107c61568(0x113509a00,FUN_103038c50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a40);
  return;
}



/* Entry: 103038cbc; end: 103038d0b;  */

void FUN_103038cbc(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002e;
  func_0x000100bd65fc(0xd00000000000002e,0x800000010f11ab70,0);
  uRam0000000113806a48 = uVar1;
  return;
}



/* Entry: 103038d0c; end: 103038d27; +[SCSpotlightQueryCoordinatorConfigKeys engagementRefreshMaxStories] */

void FUN_103038d0c(void)

{
  if (lRam0000000113509a08 != -1) {
    func_0x000107c61568(0x113509a08,FUN_103038cbc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a48);
  return;
}



/* Entry: 103038d28; end: 103038d77;  */

void FUN_103038d28(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f11ab40,0x19);
  uRam0000000113806a50 = uVar1;
  return;
}



/* Entry: 103038d78; end: 103038d93; +[SCSpotlightQueryCoordinatorConfigKeys engagementRefreshReplyCountCap] */

void FUN_103038d78(void)

{
  if (lRam0000000113509a10 != -1) {
    func_0x000107c61568(0x113509a10,FUN_103038d28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a50);
  return;
}



/* Entry: 103038d94; end: 103038de7;  */

void FUN_103038d94(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f11ab10,0x15180);
  uRam0000000113806a58 = uVar1;
  return;
}



/* Entry: 103038de8; end: 103038e03; +[SCSpotlightQueryCoordinatorConfigKeys engagementRefreshMinAgeSeconds] */

void FUN_103038de8(void)

{
  if (lRam0000000113509a18 != -1) {
    func_0x000107c61568(0x113509a18,FUN_103038d94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a58);
  return;
}



/* Entry: 103038e04; end: 103038e53;  */

void FUN_103038e04(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002e;
  func_0x000100442ccc(0xd00000000000002e,0x800000010f11aae0,0);
  uRam0000000113806a60 = uVar1;
  return;
}



/* Entry: 103038e54; end: 103038e6f; +[SCSpotlightQueryCoordinatorConfigKeys attachStreamTokenInBatchRequest] */

void FUN_103038e54(void)

{
  if (lRam0000000113509a20 != -1) {
    func_0x000107c61568(0x113509a20,FUN_103038e04);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a60);
  return;
}



/* Entry: 103038e70; end: 103038ebf;  */

void FUN_103038e70(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100442ccc(0xd000000000000023,0x800000010f11aab0,0);
  uRam0000000113806a68 = uVar1;
  return;
}



/* Entry: 103038ec0; end: 103038edb; +[SCSpotlightQueryCoordinatorConfigKeys feedCardMigrationMixedFeedEnabled] */

void FUN_103038ec0(void)

{
  if (lRam0000000113509a28 != -1) {
    func_0x000107c61568(0x113509a28,FUN_103038e70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a68);
  return;
}



/* Entry: 103038edc; end: 103038f47;  */

void FUN_103038edc(void)

{
  undefined8 uVar1;
  
  func_0x000103f1fa98(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001d;
  func_0x000103f1f594(0xd00000000000001d,0x800000010f11aa90,0x65662d646578696d,0xef646f72702d6465);
  uRam0000000113806a70 = uVar1;
  return;
}



/* Entry: 103038f48; end: 103038f63; +[SCSpotlightQueryCoordinatorConfigKeys feedCardMigrationRouteTag] */

void FUN_103038f48(void)

{
  if (lRam0000000113509a30 != -1) {
    func_0x000107c61568(0x113509a30,FUN_103038edc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113806a70);
  return;
}



/* Entry: 103038f64; end: 103038fa7;  */

void FUN_103038f64(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103038fa8; end: 103038fe3; -[SCSpotlightQueryCoordinatorConfigKeys init] */

void FUN_103038fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103038fe4; end: 103039017;  */

void FUN_103038fe4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103039018; end: 10303901b; -[SCSpotlightQueryCoordinatorConfigKeys .cxx_destruct] */

void FUN_103039018(void)

{
  return;
}



/* Entry: 10303901c; end: 10303903b;  */

void FUN_10303901c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1448);
  return;
}



/* Entry: 10303903c; end: 10303909b; +[SCSnapProIdValidityRules defaultPublicProfileIdWithCircumstanceEngine:] */

void FUN_10303903c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103039188(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10303909c; end: 10303909f;  */

uint FUN_10303909c(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar6 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = param_2 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uVar6 = 0xd000000000000024;
      if (((param_1 == 0xd000000000000024) && (param_2 == 0x800000010efbcf40)) ||
         (uVar4 = param_1,
         func_0x000107c605b8(param_1,param_2,0xd000000000000024,0x800000010efbcf40,0),
         (uVar4 & 1) != 0)) {
        uVar5 = 0;
      }
      else {
        if (param_3 == 0) {
          uVar4 = 0x800000010f11ac00;
        }
        else {
          func_0x000107c615f0(param_3);
          uVar1 = 0xd000000000000022;
          func_0x000107c5fadc(0xd000000000000022,0x800000010f11ac30);
          uVar4 = 0x800000010f11ac00;
          uVar2 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024);
          uVar3 = param_3;
          func_0x000107c5c1dc();
          func_0x000107c61180();
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar2);
          uVar6 = uVar3;
          func_0x000107c5faec();
          func_0x000107c615e8(param_3);
          func_0x000107c61170(uVar3);
        }
        if ((param_1 == uVar6) && (param_2 == uVar4)) {
          func_0x000107c6142c(uVar4);
          uVar5 = 0;
        }
        else {
          func_0x000107c605b8(param_1,param_2,uVar6,uVar4,0);
          func_0x000107c6142c(uVar4);
          uVar5 = (uint)param_1 ^ 1;
        }
      }
      return uVar5 & 1;
    }
  }
  return 0;
}



/* Entry: 1030390a0; end: 103039113; +[SCSnapProIdValidityRules isRealPublicProfileId:circumstanceEngine:] */

uint FUN_1030390a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c615f0(param_4);
  FUN_10303926c(param_3,param_2,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 103039114; end: 10303914f; -[SCSnapProIdValidityRules init] */

void FUN_103039114(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103039150; end: 103039183;  */

void FUN_103039150(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103039184; end: 103039187; -[SCSnapProIdValidityRules .cxx_destruct] */

void FUN_103039184(void)

{
  return;
}



/* Entry: 103039188; end: 10303926b;  */

undefined1  [16] FUN_103039188(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 != 0) {
    func_0x000107c615f0();
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f11ac30);
    uVar2 = 0xd000000000000024;
    uVar5 = 0x800000010f11ac00;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f11ac00);
    lVar3 = param_1;
    func_0x000107c5c1dc(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    lVar4 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar3);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  auVar7._8_8_ = 0x800000010f11ac00;
  auVar7._0_8_ = 0xd000000000000024;
  return auVar7;
}



/* Entry: 10303926c; end: 1030393ff;  */

uint FUN_10303926c(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar6 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = param_2 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uVar6 = 0xd000000000000024;
      if (((param_1 == 0xd000000000000024) && (param_2 == 0x800000010efbcf40)) ||
         (uVar4 = param_1,
         func_0x000107c605b8(param_1,param_2,0xd000000000000024,0x800000010efbcf40,0),
         (uVar4 & 1) != 0)) {
        uVar5 = 0;
      }
      else {
        if (param_3 == 0) {
          uVar4 = 0x800000010f11ac00;
        }
        else {
          func_0x000107c615f0(param_3);
          uVar1 = 0xd000000000000022;
          func_0x000107c5fadc(0xd000000000000022,0x800000010f11ac30);
          uVar4 = 0x800000010f11ac00;
          uVar2 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024);
          uVar3 = param_3;
          func_0x000107c5c1dc();
          func_0x000107c61180();
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar2);
          uVar6 = uVar3;
          func_0x000107c5faec();
          func_0x000107c615e8(param_3);
          func_0x000107c61170(uVar3);
        }
        if ((param_1 == uVar6) && (param_2 == uVar4)) {
          func_0x000107c6142c(uVar4);
          uVar5 = 0;
        }
        else {
          func_0x000107c605b8(param_1,param_2,uVar6,uVar4,0);
          func_0x000107c6142c(uVar4);
          uVar5 = (uint)param_1 ^ 1;
        }
      }
      return uVar5 & 1;
    }
  }
  return 0;
}



/* Entry: 103039400; end: 10303941f;  */

void FUN_103039400(void)

{
  func_0x000107c61168(&PTR_PTR_1128b14f8);
  return;
}



/* Entry: 103039420; end: 10303948b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039420(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002b2924();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f35700) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10303948c; end: 103039493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303948c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002b2924();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f35700) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}


