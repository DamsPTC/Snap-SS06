/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033eb390; end: 1033eb3cf;  */

void FUN_1033eb390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc00d4;
  func_0x000107c61520(&UNK_10dbc00d4,&UNK_11064f160);
  puRam0000000112f63f30 = puVar1;
  return;
}



/* Entry: 1033eb3d0; end: 1033eb403;  */

undefined8 FUN_1033eb3d0(undefined8 param_1)

{
  FUN_1033ec94c();
  return param_1;
}



/* Entry: 1033eb404; end: 1033eb40b;  */

void FUN_1033eb404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar7 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = puVar3 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_4,puVar3);
  puVar2 = puVar3;
  (**(code **)(lVar8 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4();
    puVar9 = puVar3;
  }
  else {
    puVar2 = puVar9;
    (**(code **)(lVar8 + 0x20))(puVar9,puVar3,lVar1);
    if (param_6 >> 0x3c < 0xf) {
      func_0x00010139a774();
      func_0x000107c613fc();
      *(undefined8 *)(puVar2 + 0x18) = 5;
      *(undefined8 *)(puVar2 + 0x10) = 2;
      puVar4 = PTR_PTR_1126b1d00;
      func_0x000107c610f8();
      uVar6 = param_5;
      puStack_70 = puVar7;
      func_0x00010006c00c(param_5,param_6);
      func_0x000107c5ed90();
      uVar5 = param_5;
      func_0x000107c5ee20(param_5,param_6);
      uStack_78 = param_5;
      func_0x000107c49150();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      *(undefined **)(puVar2 + 0x20) = puVar4;
      puVar4 = PTR_PTR_1126b1d00;
      func_0x000107c610f8();
      uVar6 = param_2;
      func_0x00010006c00c(param_2,param_3);
      func_0x000107c5ed90();
      uVar5 = param_2;
      func_0x000107c5ee20(param_2,param_3);
      func_0x00010006c090(param_2,param_3);
      func_0x000107c49150();
      func_0x000107c61170(uVar6);
      puVar7 = puStack_70;
      func_0x000107c61170(uVar5);
      func_0x0001000b44c0(uStack_78,param_6);
      (**(code **)(lVar8 + 8))(puVar9,lVar1);
      *(undefined **)(puVar2 + 0x28) = puVar4;
      goto LAB_1033e3064;
    }
    (**(code **)(lVar8 + 8))(puVar9,lVar1);
  }
  func_0x00010139a774();
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 3;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  puVar4 = PTR_PTR_1126b1d00;
  func_0x000107c610f8();
  uVar6 = param_2;
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c5ed90();
  uVar5 = param_2;
  func_0x000107c5ee20(param_2,param_3);
  func_0x00010006c090(param_2,param_3);
  func_0x000107c49150();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  *(undefined **)(puVar9 + 0x20) = puVar4;
  puVar2 = puVar9;
LAB_1033e3064:
  uVar6 = *puVar7;
  *puVar7 = puVar2;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 1033eb40c; end: 1033eb42b;  */

void FUN_1033eb40c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033eb42c; end: 1033eb433;  */

void FUN_1033eb42c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1033eb434; end: 1033eb453;  */

void FUN_1033eb434(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033eb454; end: 1033eb723;  */

void FUN_1033eb454(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1;
  func_0x000107c5fb5c();
  if ((lVar11 < 1) || (lVar11 = param_3, func_0x000107c5fb5c(param_3,param_4), lVar11 < 1)) {
LAB_1033eb6d8:
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
  }
  else {
    func_0x000107c5fb1c();
    func_0x000107c5fb78(0x7c,0xe100000000000000);
    func_0x000107c5fb1c(param_3,param_4);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_4);
    func_0x000100e35e30();
    uVar1 = (uint)((ulong)param_2 >> 0x20);
    uVar9 = uVar1 >> 0x1e;
    puVar6 = PTR_PTR_1126b7fb8;
    uVar8 = param_2;
    if (uVar1 >> 0x1e < 2) {
      if (uVar9 != 0) {
        lVar11 = (long)(int)param_1;
        if (param_1 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033eb714);
          (*pcVar2)();
        }
        lVar4 = param_1;
        func_0x000107c5ec30();
        if (lVar4 == 0) {
          func_0x000107c5ec38();
        }
        else {
          lVar5 = lVar4;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar11,lVar5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033eb720);
            (*pcVar2)();
          }
          func_0x000107c5ec38();
          if ((lVar11 - lVar5) + lVar4 != 0) {
            puVar6 = PTR_PTR_1126b7fb8;
            func_0x000107c61168();
            func_0x000107c5a8dc();
            goto LAB_1033eb690;
          }
        }
LAB_1033eb6cc:
        func_0x00010006c090(param_1,param_2);
        goto LAB_1033eb6d8;
      }
      func_0x000107c61168();
      func_0x000107c5a8dc();
    }
    else if (uVar9 == 2) {
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x18);
      lVar11 = param_1;
      func_0x000107c5ec30();
      if (lVar11 != 0) {
        lVar3 = lVar11;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033eb71c);
          (*pcVar2)();
        }
        lVar11 = (lVar4 - lVar3) + lVar11;
      }
      if (SBORROW8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033eb718);
        (*pcVar2)();
      }
      func_0x000107c5ec38();
      if (lVar11 == 0) goto LAB_1033eb6cc;
      puVar6 = PTR_PTR_1126b7fb8;
      func_0x000107c61168();
      func_0x000107c5a8dc();
    }
    else {
      func_0x000107c61168();
      func_0x000107c5a8dc();
    }
LAB_1033eb690:
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    func_0x00010006c090(param_1,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78(puVar7,uVar8);
  func_0x0001033ea424();
  return;
}



/* Entry: 1033eb724; end: 1033eb757;  */

void FUN_1033eb724(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001033ea424(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1033eb758; end: 1033eb797;  */

undefined8 FUN_1033eb758(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1033eb798; end: 1033eb80f;  */

void FUN_1033eb798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc00ac;
  func_0x000107c61520(&UNK_10dbc00ac,&UNK_11064f0d8);
  puRam0000000112f63f40 = puVar1;
  return;
}



/* Entry: 1033eb810; end: 1033eb817;  */

/* WARNING: Possible PIC construction at 0x0001033eb068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033eb15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033eb16c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033eb160) */
/* WARNING: Removing unreachable block (ram,0x0001033eb06c) */
/* WARNING: Removing unreachable block (ram,0x0001033eb170) */

void FUN_1033eb810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  uStack_68 = *param_1;
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x000107c614b0(uStack_68);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(&uStack_80,&uStack_68,uVar2,&UNK_11064ead0,0);
    if ((uVar3 & 1) == 0) {
      func_0x000107c614ac(uStack_68);
      func_0x000103dac9b4(lVar5,8,uVar1,0,0);
    }
    else {
      func_0x000107c61434(uStack_78);
      func_0x000103dac9b4(lVar5,uStack_70,uVar1,uStack_80,uStack_78);
      func_0x000107c61430(uStack_78,2);
      func_0x000107c614ac(uStack_68);
    }
    return;
  }
  lVar4 = lVar5;
  lVar6 = lVar5;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c4e33c(lVar5);
  func_0x000107c61180();
  func_0x000107c5f9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1033eb818; end: 1033eb857;  */

void FUN_1033eb818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0084;
  func_0x000107c61520(&UNK_10dbc0084,&UNK_11064f048);
  puRam0000000112f63f48 = puVar1;
  return;
}



/* Entry: 1033eb858; end: 1033eb88b;  */

undefined8 FUN_1033eb858(undefined8 param_1)

{
  FUN_1033ec4f0();
  return param_1;
}



/* Entry: 1033eb88c; end: 1033eba43;  */

void FUN_1033eb88c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1033eba44; end: 1033eba93;  */

void FUN_1033eba44(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f63f50 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f63f58;
  func_0x00010002969c(0x112f63f58,&UNK_10dbbfe90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f63f50 = puVar2;
  return;
}



/* Entry: 1033eba94; end: 1033ebac3;  */

void FUN_1033eba94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar2 = 0xd;
  func_0x0001044e4b78(0xd,uVar1);
  uRam00000001138072f8 = uVar2;
  return;
}



/* Entry: 1033ebac4; end: 1033ebb03;  */

void FUN_1033ebac4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  func_0x0001044e4b78(param_2,uVar1);
  *param_3 = param_2;
  return;
}



/* Entry: 1033ebb04; end: 1033ebd7f;  */

void FUN_1033ebb04(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  if (lRam0000000112f64058 != -1) {
    func_0x000107c61568(0x112f64058,FUN_1033eba94);
  }
  *(undefined8 *)(param_1 + 0x20) = uRam00000001138072f8;
  lVar1 = lRam0000000112f64060;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112f64060,0x1033ebaa4);
  }
  *(undefined8 *)(param_1 + 0x28) = uRam00000001138072f0;
  lVar1 = lRam0000000112f64068;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112f64068,0x1033ebab4);
  }
  uVar6 = uRam00000001138072e8;
  *(undefined8 *)(param_1 + 0x30) = uRam00000001138072e8;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 3;
  func_0x000107c602e8();
  lVar1 = lVar3 + 0x38;
  func_0x000107c61174(uVar6);
  uVar12 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ebd38);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + 0x20 + uVar12 * 8);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar12;
      func_0x000100f060ac(uVar12,param_1);
    }
    uVar5 = *(ulong *)(lVar3 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
    uVar9 = 1L << (uVar5 & 0x3f);
    if ((uVar9 & uVar8) != 0) {
      func_0x0001044e4d64(0);
      do {
        uVar8 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
        func_0x000107c61174();
        uVar7 = uVar8;
        func_0x000107c60118();
        func_0x000107c61170(uVar8);
        if ((uVar7 & 1) != 0) {
          func_0x000107c61170(uVar4);
          goto LAB_1033ebbf8;
        }
        uVar5 = uVar5 + 1 & ~uVar10;
        uVar7 = uVar5 >> 6;
        uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
        uVar9 = 1L << (uVar5 & 0x3f);
      } while ((uVar9 & uVar8) != 0);
    }
    *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
    *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ebd34);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1033ebbf8:
    uVar12 = uVar12 + 1;
    if (uVar12 == 3) {
      func_0x000107c61588(param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = 0;
      func_0x0001044e4d64(0);
      func_0x000107c61408(param_1 + 0x20,uVar11,uVar6);
      lRam0000000113807300 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 1033ebd80; end: 1033ebda7;  */

bool FUN_1033ebd80(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1033ebda8; end: 1033ebeeb;  */

void FUN_1033ebda8(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = "show_retry_disclaimer";
  uVar5 = 0xd000000000000010;
  if (param_2 != 6) {
    pcVar4 = "cesSaberEntryPoint.swift";
    uVar5 = 0xd000000000000015;
  }
  uVar6 = 0x6d6f72705f746573;
  if (param_2 != 4) {
    uVar6 = 0x6d6f72705f746567;
  }
  uVar3 = (ulong)pcVar4 | 0x8000000000000000;
  if (param_2 < 6) {
    uVar3 = 0xef617461645f7470;
    uVar5 = uVar6;
  }
  uVar2 = 0xec00000065736e6f;
  uVar6 = 0x707365725f746567;
  if (param_2 != 2) {
    uVar2 = 0xef65736e6f707365;
    uVar6 = 0x725f657461657263;
  }
  uVar1 = 0xea00000000007470;
  uVar7 = 0x6d6f72705f746567;
  if (param_2 != 0) {
    uVar1 = 0xed000074706d6f72;
    uVar7 = 0x705f657461657263;
  }
  if (param_2 < 2) {
    uVar2 = uVar1;
    uVar6 = uVar7;
  }
  if (param_2 < 4) {
    uVar3 = uVar2;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1033ebeec; end: 1033ebef3;  */

void FUN_1033ebeec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  pcVar5 = "show_retry_disclaimer";
  uVar6 = 0xd000000000000010;
  if (bVar4 != 6) {
    pcVar5 = "cesSaberEntryPoint.swift";
    uVar6 = 0xd000000000000015;
  }
  uVar7 = 0x6d6f72705f746573;
  if (bVar4 != 4) {
    uVar7 = 0x6d6f72705f746567;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar4 < 6) {
    uVar3 = 0xef617461645f7470;
    uVar6 = uVar7;
  }
  uVar2 = 0xec00000065736e6f;
  uVar7 = 0x707365725f746567;
  if (bVar4 != 2) {
    uVar2 = 0xef65736e6f707365;
    uVar7 = 0x725f657461657263;
  }
  uVar1 = 0xea00000000007470;
  uVar8 = 0x6d6f72705f746567;
  if (bVar4 != 0) {
    uVar1 = 0xed000074706d6f72;
    uVar8 = 0x705f657461657263;
  }
  if (bVar4 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar8;
  }
  if (bVar4 < 4) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ebef4; end: 1033ec2bf;  */

void FUN_1033ebef4(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar6 = 0x5365727574706163;
  uVar5 = 0xeb0000000070616e;
  if (param_2 != 4) {
    uVar6 = 0xd000000000000017;
    uVar5 = 0x800000010f149ae0;
  }
  uVar1 = 0x65726f6373;
  if (param_2 != 3) {
    uVar1 = uVar6;
  }
  uVar6 = 0xe500000000000000;
  if (param_2 != 3) {
    uVar6 = uVar5;
  }
  uVar5 = 0xe900000000000073;
  uVar3 = 0x656c626170706174;
  if (param_2 != 1) {
    uVar5 = 0xea00000000006574;
    uVar3 = 0x656c706d6f437369;
  }
  uVar2 = 0xee00617461446465;
  uVar4 = 0x746169636f737361;
  if (param_2 != 0) {
    uVar2 = uVar5;
    uVar4 = uVar3;
  }
  if (param_2 < 3) {
    uVar6 = uVar2;
    uVar1 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ec2c0; end: 1033ec3e7;  */

void FUN_1033ec2c0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  pcVar5 = "show_retry_disclaimer";
  uVar6 = 0xd000000000000010;
  if (bVar4 != 6) {
    pcVar5 = "cesSaberEntryPoint.swift";
    uVar6 = 0xd000000000000015;
  }
  uVar7 = 0x6d6f72705f746573;
  if (bVar4 != 4) {
    uVar7 = 0x6d6f72705f746567;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar4 < 6) {
    uVar3 = 0xef617461645f7470;
    uVar6 = uVar7;
  }
  uVar2 = 0xec00000065736e6f;
  uVar7 = 0x707365725f746567;
  if (bVar4 != 2) {
    uVar2 = 0xef65736e6f707365;
    uVar7 = 0x725f657461657263;
  }
  uVar1 = 0xea00000000007470;
  uVar8 = 0x6d6f72705f746567;
  if (bVar4 != 0) {
    uVar1 = 0xed000074706d6f72;
    uVar8 = 0x705f657461657263;
  }
  if (bVar4 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar8;
  }
  if (bVar4 < 4) {
    uVar3 = uVar2;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1033ec3e8; end: 1033ec427;  */

void FUN_1033ec3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f63f68;
  func_0x0001000285a8(0x112f63f68,&UNK_10dbbff70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033ec428; end: 1033ec42b;  */

void FUN_1033ec428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbff48;
  func_0x000107c61520(&UNK_10dbbff48,&UNK_11064eeb8);
  puRam0000000112f63f60 = puVar1;
  return;
}



/* Entry: 1033ec42c; end: 1033ec46b;  */

void FUN_1033ec42c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f63f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbff48;
  func_0x000107c61520(&UNK_10dbbff48,&UNK_11064eeb8);
  puRam0000000112f63f60 = puVar1;
  return;
}



/* Entry: 1033ec46c; end: 1033ec4cf;  */

ulong FUN_1033ec46c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 1033ec4d0; end: 1033ec4ef;  */

undefined1  [16] FUN_1033ec4d0(void)

{
  return ZEXT816(0x11064eed8);
}



/* Entry: 1033ec4f0; end: 1033ec573;  */

/* WARNING: Possible PIC construction at 0x0001033ec504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ec508) */

void FUN_1033ec4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1033ec574; end: 1033ec5ff;  */

undefined8 * FUN_1033ec574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
  return param_1;
}



/* Entry: 1033ec600; end: 1033ec613;  */

void FUN_1033ec600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1b);
  *(undefined8 *)((long)param_1 + 0x23) = *(undefined8 *)((long)param_2 + 0x23);
  *(undefined8 *)((long)param_1 + 0x1b) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1033ec614; end: 1033ec67f;  */

undefined8 * FUN_1033ec614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
  return param_1;
}



/* Entry: 1033ec680; end: 1033ec74f;  */

int FUN_1033ec680(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x2b) != '\0')) {
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



/* Entry: 1033ec750; end: 1033ec77f;  */

/* WARNING: Possible PIC construction at 0x0001033ec764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ec768) */

void FUN_1033ec750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1033ec780; end: 1033ec857;  */

undefined8 * FUN_1033ec780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1033ec858; end: 1033ec8ab;  */

undefined8 * FUN_1033ec858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1033ec8ac; end: 1033ec94b;  */

int FUN_1033ec8ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033ec94c; end: 1033ec993;  */

/* WARNING: Possible PIC construction at 0x0001033ec960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ec970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ec964) */
/* WARNING: Removing unreachable block (ram,0x0001033ec974) */
/* WARNING: Removing unreachable block (ram,0x0001033ec980) */
/* WARNING: Removing unreachable block (ram,0x0001033ec984) */

void FUN_1033ec94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1033ec994; end: 1033eca27;  */

undefined8 * FUN_1033ec994(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  lVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  if (lVar2 == 1) {
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar2;
    func_0x000107c61434(lVar2);
  }
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033eca28; end: 1033ecb3b;  */

undefined8 * FUN_1033eca28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  lVar2 = param_1[7];
  if (lVar2 == 1) {
    if (param_2[7] != 1) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      func_0x000107c61434();
      goto LAB_1033ecb08;
    }
  }
  else {
    if (param_2[7] != 1) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      func_0x000107c61434();
      func_0x000107c6142c(lVar2);
      goto LAB_1033ecb08;
    }
    FUN_1033ecb3c(param_1 + 6);
  }
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
LAB_1033ecb08:
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033ecb3c; end: 1033ecbff;  */

long FUN_1033ecb3c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1033ecc00; end: 1033eccd3;  */

int FUN_1033ecc00(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
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



/* Entry: 1033eccd4; end: 1033ecd43;  */

undefined8 * FUN_1033eccd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1033ecd44; end: 1033ecdff;  */

int FUN_1033ecd44(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
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



/* Entry: 1033ece00; end: 1033ed25f;  */

void FUN_1033ece00(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010ef25530;
  uVar2 = 0xd000000000000010;
  if (param_1 != 4) {
    uVar1 = 0xef73656572676544;
    uVar2 = 0x6e6f697461746f72;
  }
  uVar4 = 0xef68746469576465;
  uVar5 = 0x7a696c616d726f6e;
  if (param_1 != 3) {
    uVar4 = uVar1;
    uVar5 = uVar2;
  }
  uVar1 = 0xeb00000000586465;
  if (param_1 != 1) {
    uVar1 = 0xeb00000000596465;
  }
  uVar2 = 0x79656b;
  if (param_1 != 0) {
    uVar2 = 0x7a696c616d726f6e;
  }
  uVar3 = 0xe300000000000000;
  if (param_1 != 0) {
    uVar3 = uVar1;
  }
  if (param_1 < 3) {
    uVar4 = uVar3;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ed260; end: 1033ed343;  */

void FUN_1033ed260(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xee00617461446465;
  uVar2 = 0x746169636f737361;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe900000000000073;
    uVar2 = 0x656c626170706174;
  }
  uVar1 = 0xea00000000007478;
  uVar3 = 0x655474706d6f7270;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1033ed344; end: 1033ed367;  */

void FUN_1033ed344(undefined1 *param_1,undefined1 param_2)

{
  FUN_1033ee6e0();
  *param_1 = param_2;
  return;
}



/* Entry: 1033ed368; end: 1033ed37f;  */

undefined1  [16] FUN_1033ed368(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033ed380; end: 1033ed3cf;  */

void FUN_1033ed380(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1033ee930();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033ed3d0; end: 1033ed413;  */

void FUN_1033ed3d0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1033ee744(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 1033ed414; end: 1033ed41b;  */

void FUN_1033ed414(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010ef25530;
  uVar2 = 0xd000000000000010;
  if (bVar5 != 4) {
    uVar1 = 0xef73656572676544;
    uVar2 = 0x6e6f697461746f72;
  }
  uVar4 = 0xef68746469576465;
  uVar6 = 0x7a696c616d726f6e;
  if (bVar5 != 3) {
    uVar4 = uVar1;
    uVar6 = uVar2;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar5 != 1) {
    uVar1 = 0xeb00000000596465;
  }
  uVar2 = 0x79656b;
  if (bVar5 != 0) {
    uVar2 = 0x7a696c616d726f6e;
  }
  uVar3 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ed41c; end: 1033ed513;  */

void FUN_1033ed41c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x800000010ef25530;
  uVar2 = 0xd000000000000010;
  if (bVar5 != 4) {
    uVar1 = 0xef73656572676544;
    uVar2 = 0x6e6f697461746f72;
  }
  uVar4 = 0xef68746469576465;
  uVar6 = 0x7a696c616d726f6e;
  if (bVar5 != 3) {
    uVar4 = uVar1;
    uVar6 = uVar2;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar5 != 1) {
    uVar1 = 0xeb00000000596465;
  }
  uVar2 = 0x79656b;
  if (bVar5 != 0) {
    uVar2 = 0x7a696c616d726f6e;
  }
  uVar3 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  func_0x000107c5fb58(param_1,uVar6,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1033ed514; end: 1033ed51b;  */

void FUN_1033ed514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x800000010ef25530;
  uVar2 = 0xd000000000000010;
  if (bVar5 != 4) {
    uVar1 = 0xef73656572676544;
    uVar2 = 0x6e6f697461746f72;
  }
  uVar4 = 0xef68746469576465;
  uVar6 = 0x7a696c616d726f6e;
  if (bVar5 != 3) {
    uVar4 = uVar1;
    uVar6 = uVar2;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar5 != 1) {
    uVar1 = 0xeb00000000596465;
  }
  uVar2 = 0x79656b;
  if (bVar5 != 0) {
    uVar2 = 0x7a696c616d726f6e;
  }
  uVar3 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ed51c; end: 1033ed54f;  */

void FUN_1033ed51c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1033eef0c(uVar1,param_2[1],0x112f64328);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1033ed550; end: 1033ed703;  */

void FUN_1033ed550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x800000010ef25530;
  uVar2 = 0xd000000000000010;
  if (bVar5 != 4) {
    uVar1 = 0xef73656572676544;
    uVar2 = 0x6e6f697461746f72;
  }
  uVar4 = 0xef68746469576465;
  uVar6 = 0x7a696c616d726f6e;
  if (bVar5 != 3) {
    uVar4 = uVar1;
    uVar6 = uVar2;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar5 != 1) {
    uVar1 = 0xeb00000000596465;
  }
  uVar2 = 0x79656b;
  if (bVar5 != 0) {
    uVar2 = 0x7a696c616d726f6e;
  }
  uVar3 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar6 = uVar2;
  }
  *param_1 = uVar6;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1033ed704; end: 1033ed72f;  */

void FUN_1033ed704(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1033eef0c(param_2,param_3,0x112f64328);
  *param_1 = (char)param_2;
  return;
}



/* Entry: 1033ed730; end: 1033ed73b;  */

undefined1  [16] FUN_1033ed730(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033ed73c; end: 1033ed78b;  */

void FUN_1033ed73c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033efe14();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033ed78c; end: 1033ed7d7;  */

void FUN_1033ed78c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1033eea20(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 1033ed7d8; end: 1033ed883;  */

void FUN_1033ed7d8(void)

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



/* Entry: 1033ed884; end: 1033eda47;  */

/* WARNING: Removing unreachable block (ram,0x0001033ed9bc) */

void FUN_1033ed884(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112f64078;
  func_0x0001000285a8(0x112f64078,&UNK_10dbc0100);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  func_0x0001033ee660();
  func_0x000107c606ec(puVar4,&UNK_11064f4c8,&UNK_11064f4c8,param_1,uVar3,uVar1);
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  func_0x000107c60520(*unaff_x20,unaff_x20[1],&uStack_60,lVar2);
  if (unaff_x21 == 0) {
    uStack_60._0_1_ = 1;
    func_0x000107c60520(unaff_x20[2],unaff_x20[3],&uStack_60,lVar2);
    uVar3 = unaff_x20[4];
    uStack_60 = CONCAT71(uStack_60._1_7_,2);
    func_0x000107c60520(uVar3,unaff_x20[5],&uStack_60,lVar2);
    uStack_58 = unaff_x20[7];
    uStack_60 = unaff_x20[6];
    uStack_61 = 3;
    func_0x0001033ee6a0();
    func_0x000107c60530(&uStack_60,&uStack_61,lVar2,&UNK_11064f1f0,uVar3);
    uStack_60 = CONCAT71(uStack_60._1_7_,4);
    func_0x000107c60520(unaff_x20[8],unaff_x20[9],&uStack_60,lVar2);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 1033eda48; end: 1033edb03;  */

undefined1  [16] FUN_1033eda48(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar2 = *unaff_x20;
  uVar5 = 0xeb000000006f666e;
  uVar3 = 0x49726f7461657263;
  if (bVar2 != 3) {
    uVar5 = 0xe900000000000064;
    uVar3 = 0x496e6f6973736573;
  }
  uVar1 = 0x800000010f149b00;
  uVar4 = 0xd000000000000016;
  if (bVar2 != 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  uVar5 = 0xea00000000007478;
  uVar3 = 0x655474706d6f7270;
  if (bVar2 != 0) {
    uVar5 = 0xee00617461446465;
    uVar3 = 0x746169636f737361;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1033edb04; end: 1033edb27;  */

void FUN_1033edb04(undefined1 *param_1,undefined1 param_2)

{
  FUN_1033eed3c();
  *param_1 = param_2;
  return;
}



/* Entry: 1033edb28; end: 1033edb3f;  */

undefined1  [16] FUN_1033edb28(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033edb40; end: 1033edb8f;  */

void FUN_1033edb40(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033ee660();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033edb90; end: 1033edba3;  */

void FUN_1033edb90(void)

{
  FUN_1033ed884();
  return;
}



/* Entry: 1033edba4; end: 1033edbcf;  */

undefined8 FUN_1033edba4(void)

{
  return 1;
}



/* Entry: 1033edbd0; end: 1033edc5b;  */

void FUN_1033edbd0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x55726f7461657263 && param_3 == -0x12ffff9bb68d9a8d) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1033edc5c; end: 1033edc67;  */

undefined1  [16] FUN_1033edc5c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033edc68; end: 1033edcb7;  */

void FUN_1033edc68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033ef2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033edcb8; end: 1033edda7;  */

void FUN_1033edcb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112f640e0;
  func_0x0001000285a8(0x112f640e0,&UNK_10dbc0128);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x0001033ef2e0();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11064f288,&UNK_11064f288,param_1,
                      uVar2,uVar4);
  func_0x000107c60520(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 1033edda8; end: 1033eddaf;  */

void FUN_1033edda8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar7 = 0x5365727574706163;
  uVar6 = 0xeb0000000070616e;
  if (bVar3 != 4) {
    uVar7 = 0xd000000000000017;
    uVar6 = 0x800000010f149ae0;
  }
  uVar1 = 0x65726f6373;
  if (bVar3 != 3) {
    uVar1 = uVar7;
  }
  uVar7 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar7 = uVar6;
  }
  uVar6 = 0xe900000000000073;
  uVar4 = 0x656c626170706174;
  if (bVar3 != 1) {
    uVar6 = 0xea00000000006574;
    uVar4 = 0x656c706d6f437369;
  }
  uVar2 = 0xee00617461446465;
  uVar5 = 0x746169636f737361;
  if (bVar3 != 0) {
    uVar2 = uVar6;
    uVar5 = uVar4;
  }
  if (bVar3 < 3) {
    uVar7 = uVar2;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033eddb0; end: 1033edea7;  */

void FUN_1033eddb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar7 = 0x5365727574706163;
  uVar6 = 0xeb0000000070616e;
  if (bVar3 != 4) {
    uVar7 = 0xd000000000000017;
    uVar6 = 0x800000010f149ae0;
  }
  uVar1 = 0x65726f6373;
  if (bVar3 != 3) {
    uVar1 = uVar7;
  }
  uVar7 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar7 = uVar6;
  }
  uVar6 = 0xe900000000000073;
  uVar4 = 0x656c626170706174;
  if (bVar3 != 1) {
    uVar6 = 0xea00000000006574;
    uVar4 = 0x656c706d6f437369;
  }
  uVar2 = 0xee00617461446465;
  uVar5 = 0x746169636f737361;
  if (bVar3 != 0) {
    uVar2 = uVar6;
    uVar5 = uVar4;
  }
  if (bVar3 < 3) {
    uVar7 = uVar2;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1033edea8; end: 1033edeaf;  */

void FUN_1033edea8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar7 = 0x5365727574706163;
  uVar6 = 0xeb0000000070616e;
  if (bVar3 != 4) {
    uVar7 = 0xd000000000000017;
    uVar6 = 0x800000010f149ae0;
  }
  uVar1 = 0x65726f6373;
  if (bVar3 != 3) {
    uVar1 = uVar7;
  }
  uVar7 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar7 = uVar6;
  }
  uVar6 = 0xe900000000000073;
  uVar4 = 0x656c626170706174;
  if (bVar3 != 1) {
    uVar6 = 0xea00000000006574;
    uVar4 = 0x656c706d6f437369;
  }
  uVar2 = 0xee00617461446465;
  uVar5 = 0x746169636f737361;
  if (bVar3 != 0) {
    uVar2 = uVar6;
    uVar5 = uVar4;
  }
  if (bVar3 < 3) {
    uVar7 = uVar2;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033edeb0; end: 1033edee3;  */

void FUN_1033edeb0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1033eef0c(uVar1,param_2[1],0x112f641f8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1033edee4; end: 1033ee097;  */

void FUN_1033edee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar7 = 0x5365727574706163;
  uVar6 = 0xeb0000000070616e;
  if (bVar3 != 4) {
    uVar7 = 0xd000000000000017;
    uVar6 = 0x800000010f149ae0;
  }
  uVar1 = 0x65726f6373;
  if (bVar3 != 3) {
    uVar1 = uVar7;
  }
  uVar7 = 0xe500000000000000;
  if (bVar3 != 3) {
    uVar7 = uVar6;
  }
  uVar6 = 0xe900000000000073;
  uVar4 = 0x656c626170706174;
  if (bVar3 != 1) {
    uVar6 = 0xea00000000006574;
    uVar4 = 0x656c706d6f437369;
  }
  uVar2 = 0xee00617461446465;
  uVar5 = 0x746169636f737361;
  if (bVar3 != 0) {
    uVar2 = uVar6;
    uVar5 = uVar4;
  }
  if (bVar3 < 3) {
    uVar7 = uVar2;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar7;
  return;
}



/* Entry: 1033ee098; end: 1033ee0c3;  */

void FUN_1033ee098(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1033eef0c(param_2,param_3,0x112f641f8);
  *param_1 = (char)param_2;
  return;
}



/* Entry: 1033ee0c4; end: 1033ee0cf;  */

undefined1  [16] FUN_1033ee0c4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033ee0d0; end: 1033ee11f;  */

void FUN_1033ee0d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1033ef220();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033ee120; end: 1033ee15f;  */

void FUN_1033ee120(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  FUN_1033eef78(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = CONCAT53(uStack_35,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x23) = uStack_2d;
    *(ulong *)((long)param_1 + 0x1b) = CONCAT35(uStack_30,uStack_35);
  }
  return;
}



/* Entry: 1033ee160; end: 1033ee1cb;  */

void FUN_1033ee160(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x4547414d49;
  if (cVar2 != '\x01') {
    uVar1 = 0x4f45444956;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ee1cc; end: 1033ee20b;  */

void FUN_1033ee1cc(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x4547414d49;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4f45444956;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe500000000000000);
  return;
}



/* Entry: 1033ee20c; end: 1033ee273;  */

void FUN_1033ee20c(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x4547414d49;
  if (cVar2 != '\x01') {
    uVar1 = 0x4f45444956;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ee274; end: 1033ee2eb;  */

void FUN_1033ee274(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1033ee2ec; end: 1033ee31b;  */

void FUN_1033ee2ec(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x4547414d49;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4f45444956;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe500000000000000;
  return;
}



/* Entry: 1033ee31c; end: 1033ee377;  */

void FUN_1033ee31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001033efe54();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1033ee378; end: 1033ee3c3;  */

void FUN_1033ee378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033efe54();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1033ee3c4; end: 1033ee4bf;  */

void FUN_1033ee3c4(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar3 = 0x112f640c8;
  func_0x0001000285a8(0x112f640c8,&UNK_10dbc0120);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x0001033ef260();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_11064f318,&UNK_11064f318,param_1,uVar1,uVar2);
  uStack_51 = param_2;
  func_0x0001033ef2a0();
  func_0x000107c60554(&uStack_51);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 1033ee4c0; end: 1033ee4c7;  */

undefined8 FUN_1033ee4c0(void)

{
  return 1;
}



/* Entry: 1033ee4c8; end: 1033ee543;  */

void FUN_1033ee4c8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1033ee544; end: 1033ee55f;  */

undefined1  [16] FUN_1033ee544(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000065;
  auVar1._0_8_ = 0x707954616964656d;
  return auVar1;
}



/* Entry: 1033ee560; end: 1033ee5eb;  */

void FUN_1033ee560(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x6d;
  if (param_2 == 0x707954616964656d && param_3 == -0x16ffffffffffff9b) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x707954616964656d,0xe900000000000065,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1033ee5ec; end: 1033ee5f7;  */

undefined1  [16] FUN_1033ee5ec(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1033ee5f8; end: 1033ee647;  */

void FUN_1033ee5f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033ef260();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1033ee648; end: 1033ee6df;  */

void FUN_1033ee648(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1033ee3c4(param_1,*unaff_x20);
  return;
}



/* Entry: 1033ee6e0; end: 1033ee743;  */

ulong FUN_1033ee6e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1033ee744; end: 1033ee92f;  */

/* WARNING: Removing unreachable block (ram,0x0001033ee81c) */
/* WARNING: Removing unreachable block (ram,0x0001033ee8c8) */
/* WARNING: Removing unreachable block (ram,0x0001033ee858) */

void FUN_1033ee744(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112f64090;
  func_0x0001000285a8(0x112f64090,&UNK_10dbc0108);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar5);
  FUN_1033ee930();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_11064f438,&UNK_11064f438,lVar2,uVar5,uVar6);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar2 = lVar1;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar4 = &uStack_52;
    lVar7 = lVar1;
    lStack_78 = lVar2;
    puStack_70 = puVar3;
    func_0x000107c604f4();
    uVar5 = 0x112f640a0;
    func_0x0001000285a8(0x112f640a0,&UNK_10dbc0110);
    uStack_53 = 2;
    uVar6 = uVar5;
    FUN_1033ee970();
    func_0x000107c60508(&uStack_68,uVar5,&uStack_53,lVar1,uVar5,uVar6);
    (**(code **)(lVar8 + 8))(auStack_80 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_70;
    param_1[1] = lStack_78;
    param_1[2] = puVar4;
    param_1[3] = lVar7;
    param_1[4] = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1033ee930; end: 1033ee96f;  */

void FUN_1033ee930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc077c;
  func_0x000107c61520(&UNK_10dbc077c,&UNK_11064f438);
  puRam0000000112f64098 = puVar1;
  return;
}



/* Entry: 1033ee970; end: 1033ee9df;  */

void FUN_1033ee970(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f640a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f640a0;
  func_0x00010002969c(0x112f640a0,&UNK_10dbc0110);
  uVar2 = uVar1;
  FUN_1033ee9e0();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112f640a8 = puVar3;
  return;
}



/* Entry: 1033ee9e0; end: 1033eea1f;  */

void FUN_1033ee9e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f640b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0754;
  func_0x000107c61520(&UNK_10dbc0754,&UNK_11064f5d0);
  puRam0000000112f640b0 = puVar1;
  return;
}


