/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10325414c; end: 1032541ab; -[_TtC20SCContextActionBarUI15ActionBarButton initWithFrame:] */

void FUN_10325414c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextActionBarUI.ActionBarButton",0x24,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103254178);
  (*pcVar1)();
}



/* Entry: 1032541ac; end: 103254257; -[_TtC20SCContextActionBarUI15ActionBarButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032541c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032541e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325421c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010325423c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103254220) */
/* WARNING: Removing unreachable block (ram,0x0001032541ec) */
/* WARNING: Removing unreachable block (ram,0x0001032541cc) */
/* WARNING: Removing unreachable block (ram,0x000103254240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032541ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ecc0));
  return;
}



/* Entry: 103254258; end: 103254267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254258(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4ecc8));
  return;
}



/* Entry: 103254268; end: 1032542a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103254268(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4ece8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ece8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1032542a8; end: 1032542f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032542a8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ece8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ece8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1032542f4; end: 103254333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032542f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4ece8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ece8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103255054;
  return auVar2;
}



/* Entry: 103254334; end: 103254343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254334(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4ecc0));
  return;
}



/* Entry: 103254344; end: 10325439b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103254344(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f4ecd8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_1032510cc(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10325439c; end: 1032543f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325439c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ecd8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010324e128(uVar2,uVar3);
  return;
}



/* Entry: 1032543f8; end: 103254437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032543f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4ecd8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ecd8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103255058;
  return auVar2;
}



/* Entry: 103254438; end: 103254467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254438(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f4ed38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf49230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f4ed38),PTR_s_constant_1125afe30);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103254450);
  (*pcVar1)();
}



/* Entry: 103254468; end: 1032544c3;  */

code * FUN_103254468(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xd402);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_103253f50();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1032544c4;
}



/* Entry: 1032544c4; end: 103254537;  */

void FUN_1032544c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103254538; end: 1032545ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254538(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ed20);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  FUN_1032512dc(&DAT_112f4ed20,&DAT_112f4ed28);
  return;
}



/* Entry: 1032545ac; end: 10325462f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032545ac(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112f4ed20;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ed20,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10325506c;
  return auVar2;
}



/* Entry: 103254630; end: 10325468f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254630(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ed28;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ed28,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_1032512dc(&DAT_112f4ed20,&DAT_112f4ed28);
  return;
}



/* Entry: 103254690; end: 10325475b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103254690(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112f4ed28;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ed28,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103255070;
  return auVar2;
}



/* Entry: 10325475c; end: 1032547c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325475c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ece0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1032547c4; end: 103254963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032547c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4ece0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ece0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10325505c;
  return auVar2;
}



/* Entry: 103254964; end: 103254a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103254964(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  lVar4 = unaff_x20;
  dVar5 = param_1;
  dVar6 = param_2;
  func_0x000107c42450();
  lVar2 = 8;
  if (lVar4 == 1) {
    lVar2 = 0x18;
  }
  lVar3 = 0x18;
  if (lVar4 == 1) {
    lVar3 = 8;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4ece0);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  dVar7 = *(double *)((long)pdVar1 + lVar3);
  dVar8 = pdVar1[2];
  dVar9 = *(double *)((long)pdVar1 + lVar2);
  dVar10 = *pdVar1;
  func_0x000107c3ec60();
  func_0x000107c609a4(dVar9 + dVar5,dVar10 + dVar6,param_3 - (dVar7 + dVar9),
                      param_4 - (dVar8 + dVar10),param_1,param_2);
  return;
}



/* Entry: 103254a34; end: 103254a37;  */

void FUN_103254a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1b30;
  func_0x000107c61520(&UNK_10dba1b30,&UNK_11062bbe0);
  puRam0000000112f4ed50 = puVar1;
  return;
}



/* Entry: 103254a38; end: 103254a77;  */

void FUN_103254a38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1b30;
  func_0x000107c61520(&UNK_10dba1b30,&UNK_11062bbe0);
  puRam0000000112f4ed50 = puVar1;
  return;
}



/* Entry: 103254a78; end: 103254a7b;  */

void FUN_103254a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1b98;
  func_0x000107c61520(&UNK_10dba1b98,&UNK_11062bc70);
  puRam0000000112f4ed58 = puVar1;
  return;
}



/* Entry: 103254a7c; end: 103254abb;  */

void FUN_103254a7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1b98;
  func_0x000107c61520(&UNK_10dba1b98,&UNK_11062bc70);
  puRam0000000112f4ed58 = puVar1;
  return;
}



/* Entry: 103254abc; end: 103254abf;  */

void FUN_103254abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1c00;
  func_0x000107c61520(&UNK_10dba1c00,&UNK_11062bd00);
  puRam0000000112f4ed60 = puVar1;
  return;
}



/* Entry: 103254ac0; end: 103254b1f;  */

void FUN_103254ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1c00;
  func_0x000107c61520(&UNK_10dba1c00,&UNK_11062bd00);
  puRam0000000112f4ed60 = puVar1;
  return;
}



/* Entry: 103254b20; end: 103254f1b;  */

int FUN_103254b20(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103254b9c;
        goto LAB_103254b80;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103254b80:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_103254b9c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103254f1c; end: 103254f47;  */

long FUN_103254f1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103254f48; end: 103254f93;  */

int FUN_103254f48(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103254f94; end: 103254fe3;  */

void FUN_103254f94(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f4ed90 != 0) {
    return;
  }
  puVar1 = &UNK_11062bd78;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f4ed90 = param_1;
  return;
}



/* Entry: 103254fe4; end: 103255023;  */

void FUN_103254fe4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103255024; end: 1032550c7;  */

undefined1 FUN_103255024(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1032550c8; end: 103255173;  */

void FUN_1032550c8(void)

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



/* Entry: 103255174; end: 103255177;  */

void FUN_103255174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1d88;
  func_0x000107c61520(&UNK_10dba1d88,&UNK_11062bef8);
  puRam0000000112f4ed98 = puVar1;
  return;
}



/* Entry: 103255178; end: 1032551b7;  */

void FUN_103255178(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ed98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1d88;
  func_0x000107c61520(&UNK_10dba1d88,&UNK_11062bef8);
  puRam0000000112f4ed98 = puVar1;
  return;
}



/* Entry: 1032551b8; end: 1032553d3;  */

bool FUN_1032551b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1032553d4; end: 1032554bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1032553d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4eda0);
  puVar1[1] = 0xc028000000000000;
  *puVar1 = 0xc028000000000000;
  puVar1[3] = 0xc028000000000000;
  puVar1[2] = 0xc028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4edb0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4eda8) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c55424();
  func_0x000107c57748(puVar2);
  func_0x000107c54124(0x4018000000000000,0x4018000000000000,0x4018000000000000,0x4018000000000000,
                      puVar2);
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 1032554bc; end: 1032554db; -[_TtC20SCContextActionBarUI13ActionBarView initWithFrame:] */

void FUN_1032554bc(void)

{
  FUN_1032553d4();
  return;
}



/* Entry: 1032554dc; end: 10325556f; -[_TtC20SCContextActionBarUI13ActionBarView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032554dc(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4eda0);
  puVar1[1] = 0xc028000000000000;
  *puVar1 = 0xc028000000000000;
  puVar1[2] = 0xc028000000000000;
  puVar1[3] = 0xc028000000000000;
  *(undefined8 *)(param_1 + _DAT_112f4edb0) = 0;
  *(undefined1 *)(param_1 + _DAT_112f4eda8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextActionBarUI/ActionBarView.swift",0x28,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103255570);
  (*pcVar2)();
}



/* Entry: 103255570; end: 10325568b; -[_TtC20SCContextActionBarUI13ActionBarView hitTest:withEvent:] */

void FUN_103255570(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  ppuVar3 = &puStack_60;
  puVar2 = param_3;
  func_0x000107c614f0();
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_60 = param_3;
  puStack_58 = puVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(param_1,param_2,&puStack_60,puVar1,param_5);
  func_0x000107c61180();
  if (ppuVar3 == (undefined1 **)0x0) {
    func_0x000107c61170(param_5);
  }
  else {
    FUN_103255920(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    puVar2 = (undefined1 *)ppuVar3;
    func_0x000107c60118();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    param_3 = (undefined1 *)ppuVar3;
    if (((ulong)puVar2 & 1) == 0) goto LAB_10325566c;
  }
  func_0x000107c61170(param_3);
  ppuVar3 = (undefined1 **)0x0;
LAB_10325566c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10325568c; end: 1032556fb; -[_TtC20SCContextActionBarUI13ActionBarView pointInside:withEvent:] */

uint FUN_10325568c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103255830(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1032556fc; end: 10325572f;  */

void FUN_1032556fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103255730; end: 10325573f; -[_TtC20SCContextActionBarUI13ActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103255730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4edb0));
  return;
}



/* Entry: 103255740; end: 103255787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103255740(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4eda0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 103255788; end: 1032557ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103255788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4eda0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1032557f0; end: 10325582f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032557f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4eda0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4eda0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103255960;
  return auVar2;
}



/* Entry: 103255830; end: 1032558ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103255830(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  lVar4 = unaff_x20;
  dVar5 = param_1;
  dVar6 = param_2;
  func_0x000107c42450();
  lVar2 = 8;
  if (lVar4 == 1) {
    lVar2 = 0x18;
  }
  lVar3 = 0x18;
  if (lVar4 == 1) {
    lVar3 = 8;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4eda0);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  dVar7 = *(double *)((long)pdVar1 + lVar3);
  dVar8 = pdVar1[2];
  dVar9 = *(double *)((long)pdVar1 + lVar2);
  dVar10 = *pdVar1;
  func_0x000107c3ec60();
  func_0x000107c609a4(dVar9 + dVar5,dVar10 + dVar6,param_3 - (dVar7 + dVar9),
                      param_4 - (dVar8 + dVar10),param_1,param_2);
  return;
}



/* Entry: 103255900; end: 10325591f;  */

void FUN_103255900(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3380);
  return;
}



/* Entry: 103255920; end: 10325595f;  */

void FUN_103255920(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103255960; end: 103255967;  */

void FUN_103255960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103255968; end: 1032559a7;  */

void FUN_103255968(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1032559a8(param_1,param_2);
  return;
}



/* Entry: 1032559a8; end: 103255eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032559a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  
  puVar5 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f4ee00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ee18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ee20) = 0;
  lVar11 = _DAT_112f4ede0;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar11) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ede8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4edf0);
  puVar1[1] = 0xc028000000000000;
  *puVar1 = 0xc028000000000000;
  puVar1[3] = 0xc028000000000000;
  puVar1[2] = 0xc028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f4edf8) = 0x4020000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ee08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ee10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ee28) = 0;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff70,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c52100();
  func_0x000107c55424(puVar5);
  puVar6 = puVar5;
  func_0x000107c5e308(puVar5);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c44d9c(puVar5);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c4029c(0x3ff0000000000000,puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c521e8(puVar8);
  func_0x000107c61170(puVar8);
  puVar6 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar12 = *(undefined8 *)(puVar5 + _DAT_112f4ee20);
  *(undefined1 **)(puVar5 + _DAT_112f4ee20) = puVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103255eb0);
    (*pcVar3)();
  }
  func_0x000107c521e8(puVar7);
  func_0x000107c61170(puVar7);
  uVar12 = 0;
  FUN_103257b9c(0);
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c3d6fc(puVar5);
  func_0x000107c61170(uVar12);
  lVar2 = _DAT_112f4ede0;
  func_0x000107c59c74(*(undefined8 *)(puVar5 + _DAT_112f4ede0));
  func_0x000107c5a050(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c5523c(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c5381c(0x437a0000,*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c537fc(0x437a0000,*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c3d89c(puVar5);
  puVar6 = puVar5;
  func_0x000107c61174();
  func_0x000107c54124(0x4020000000000000,0x4034000000000000,0x4020000000000000,0x4034000000000000);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  lVar11 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar12);
  (**(code **)(lVar11 + 8))(puVar6,&PTR_DAT_11062bf78,param_2,3,uVar12,lVar11);
  func_0x000107c61170(puVar6);
  puVar7 = puVar6;
  func_0x000107c4ac04(puVar6);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c5ce8c(puVar7);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar8);
  lVar11 = _DAT_112f4ee18;
  lVar10 = *(long *)(puVar6 + _DAT_112f4ee18);
  *(undefined8 *)(puVar6 + _DAT_112f4ee18) = uVar12;
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 7;
  *(undefined8 *)(lVar10 + 0x10) = 3;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c3f764(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar10 + 0x20) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c4acb0(puVar7);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  lVar11 = *(long *)(puVar6 + lVar11);
  if (lVar11 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    *(long *)(lVar10 + 0x30) = lVar11;
    uVar12 = 0;
    func_0x000100847984(0);
    func_0x000107c61174(lVar11);
    lVar11 = lVar10;
    func_0x000107c5fc48(lVar10,uVar12);
    func_0x000107c61574(lVar10);
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar6);
    func_0x0001000834e4(param_1);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103255eb4);
  (*pcVar3)();
}



/* Entry: 103255eb4; end: 103255edb; -[_TtC20SCContextActionBarUI15ChatReplyButton initWithCoder:] */

void FUN_103255eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103256a14();
  return;
}



/* Entry: 103255edc; end: 1032561cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103255edc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c4ff34();
  lVar2 = _DAT_112f4ee28;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee28,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4ee00);
    *(undefined8 *)(unaff_x20 + _DAT_112f4ee00) = 0;
    func_0x000107c61170(uVar4);
    if (*(long *)(unaff_x20 + _DAT_112f4ee18) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032561d0);
      (*pcVar1)();
    }
    func_0x000107c521e8();
  }
  else {
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c3d89c();
    lVar3 = lVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4ede0);
    func_0x000107c5ce8c(uVar4);
    func_0x000107c61180();
    lVar8 = _DAT_112f4edf8;
    func_0x000107c61428(unaff_x20 + _DAT_112f4edf8,auStack_80,0,0);
    lVar5 = lVar3;
    func_0x000107c40284(*(undefined8 *)(unaff_x20 + lVar8));
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4ee00);
    *(long *)(unaff_x20 + _DAT_112f4ee00) = lVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    if (*(long *)(unaff_x20 + _DAT_112f4ee18) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032561cc);
      (*pcVar1)();
    }
    func_0x000107c521e8();
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 9;
    *(undefined8 *)(puVar7 + 0x10) = 4;
    lVar8 = lVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar3);
    *(long *)(puVar7 + 0x20) = lVar9;
    *(long *)(puVar7 + 0x28) = lVar5;
    func_0x000107c61174(lVar5);
    lVar8 = lVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar3);
    *(long *)(puVar7 + 0x30) = lVar9;
    lVar8 = lVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar3 = lVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(unaff_x20);
    *(long *)(puVar7 + 0x38) = lVar3;
    uVar4 = 0;
    func_0x000100847984(0);
    puVar10 = puVar7;
    func_0x000107c5fc48(puVar7,uVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar10);
  }
  return;
}



/* Entry: 1032561d0; end: 103256243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032561d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ee28;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61174(param_1);
  FUN_103255edc(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103256244; end: 1032562e7; -[_TtC20SCContextActionBarUI15ChatReplyButton layoutSubviews] */

void FUN_103256244(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1032512c8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1032562e8; end: 10325630f;  */

void FUN_1032562e8(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1[1] + param_1[2]);
  if ((param_2 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103256310);
      (*pcVar1)();
    }
  }
  else if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032562fc);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_1,lVar2,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 103256310; end: 1032563db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103256310(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103257b9c(0);
  lVar4 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + _DAT_112f4ee60), lVar4 != 0)) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ede8);
    func_0x000107c61428(puVar1,auStack_48,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 != (code *)0x0) {
      uVar2 = puVar1[1];
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar4);
      FUN_1032510cc(pcVar3,uVar2);
      (*pcVar3)(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar4);
      func_0x00010324e128(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 1032563dc; end: 10325642b; -[_TtC20SCContextActionBarUI15ChatReplyButton _didTap:] */

/* WARNING: Possible PIC construction at 0x000103256414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103256418) */

void FUN_1032563dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103256310(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10325642c; end: 10325649b; -[_TtC20SCContextActionBarUI15ChatReplyButton pointInside:withEvent:] */

uint FUN_10325642c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103256b24(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 10325649c; end: 1032564fb; -[_TtC20SCContextActionBarUI15ChatReplyButton initWithFrame:] */

void FUN_10325649c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextActionBarUI.ChatReplyButton",0x24,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032564c8);
  (*pcVar1)();
}



/* Entry: 1032564fc; end: 103256577; -[_TtC20SCContextActionBarUI15ChatReplyButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103256518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010325651c) */
/* WARNING: Removing unreachable block (ram,0x00010325653c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032564fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4ee00));
  return;
}



/* Entry: 103256578; end: 103256587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103256578(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4ede0));
  return;
}



/* Entry: 103256588; end: 1032565df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103256588(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f4ede8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_1032510cc(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1032565e0; end: 10325663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032565e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ede8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010324e128(uVar2,uVar3);
  return;
}



/* Entry: 10325663c; end: 10325667b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10325663c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4ede8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ede8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103256c14;
  return auVar2;
}



/* Entry: 10325667c; end: 1032566ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325667c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f4ee20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf49230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f4ee20),PTR_s_constant_1125afe30);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103256694);
  (*pcVar1)();
}



/* Entry: 1032566ac; end: 103256707;  */

code * FUN_1032566ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x2ef6);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x0001032562a0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_103256708;
}



/* Entry: 103256708; end: 10325677b;  */

void FUN_103256708(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 10325677c; end: 1032567d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325677c(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ee08);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  FUN_1032512c8();
  return;
}



/* Entry: 1032567d8; end: 10325685b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032567d8(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112f4ee08;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee08,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103256c1c;
  return auVar2;
}



/* Entry: 10325685c; end: 1032568ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325685c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4ee10;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee10,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_1032512c8();
  return;
}



/* Entry: 1032568ac; end: 1032568ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032568ac(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112f4ee10;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee10,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1032568f0;
  return auVar2;
}



/* Entry: 1032568f0; end: 1032568f3;  */

void FUN_1032568f0(undefined8 param_1,ulong param_2)

{
  func_0x000107c614a8();
  if ((param_2 & 1) == 0) {
    FUN_1032512c8();
  }
  return;
}



/* Entry: 1032568f4; end: 10325696b;  */

void FUN_1032568f4(undefined8 param_1,ulong param_2)

{
  func_0x000107c614a8();
  if ((param_2 & 1) == 0) {
    FUN_1032512c8();
  }
  return;
}



/* Entry: 10325696c; end: 1032569d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10325696c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4edf0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1032569d4; end: 103256b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032569d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4edf0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4edf0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103256c18;
  return auVar2;
}



/* Entry: 103256b24; end: 103256bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103256b24(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  lVar4 = unaff_x20;
  dVar5 = param_1;
  dVar6 = param_2;
  func_0x000107c42450();
  lVar2 = 8;
  if (lVar4 == 1) {
    lVar2 = 0x18;
  }
  lVar3 = 0x18;
  if (lVar4 == 1) {
    lVar3 = 8;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4edf0);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  dVar7 = *(double *)((long)pdVar1 + lVar3);
  dVar8 = pdVar1[2];
  dVar9 = *(double *)((long)pdVar1 + lVar2);
  dVar10 = *pdVar1;
  func_0x000107c3ec60();
  func_0x000107c609a4(dVar9 + dVar5,dVar10 + dVar6,param_3 - (dVar7 + dVar9),
                      param_4 - (dVar8 + dVar10),param_1,param_2);
  return;
}



/* Entry: 103256bf4; end: 103256c13;  */

void FUN_103256bf4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3448);
  return;
}



/* Entry: 103256c14; end: 103256c1f;  */

void FUN_103256c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103256c20; end: 103256f0b;  */

/* WARNING: Possible PIC construction at 0x000103256d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103256ee0) */
/* WARNING: Removing unreachable block (ram,0x000103256e88) */
/* WARNING: Removing unreachable block (ram,0x000103256e94) */
/* WARNING: Removing unreachable block (ram,0x000103256eb0) */
/* WARNING: Removing unreachable block (ram,0x000103256eb4) */
/* WARNING: Removing unreachable block (ram,0x000103256e4c) */
/* WARNING: Removing unreachable block (ram,0x000103256df0) */
/* WARNING: Removing unreachable block (ram,0x000103256e14) */
/* WARNING: Removing unreachable block (ram,0x000103256e54) */
/* WARNING: Removing unreachable block (ram,0x000103256ee8) */
/* WARNING: Removing unreachable block (ram,0x000103256eec) */
/* WARNING: Removing unreachable block (ram,0x000103256e64) */
/* WARNING: Removing unreachable block (ram,0x000103256e18) */
/* WARNING: Removing unreachable block (ram,0x000103256dcc) */
/* WARNING: Removing unreachable block (ram,0x000103256d2c) */
/* WARNING: Removing unreachable block (ram,0x000103256d64) */
/* WARNING: Removing unreachable block (ram,0x000103256d6c) */
/* WARNING: Removing unreachable block (ram,0x000103256dbc) */

void FUN_103256c20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = (uint)param_3 & 0xff;
  if (2 < uVar1) {
LAB_103256c68:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,uVar2,lVar3);
    return;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_3 & 0xff) == 0) {
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
  }
  else {
    if (uVar1 == 1) goto LAB_103256c68;
    cVar4 = *(char *)(unaff_x20 + 0x28);
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    if (cVar4 == '\x01') {
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      goto code_r0x000107c61170;
    }
    func_0x000107c5af88();
  }
  func_0x000107c61180();
  func_0x000107c52b50(param_1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 103256f0c; end: 103256f0f;  */

/* WARNING: Possible PIC construction at 0x000103256d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103256d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103256ee0) */
/* WARNING: Removing unreachable block (ram,0x000103256e88) */
/* WARNING: Removing unreachable block (ram,0x000103256e94) */
/* WARNING: Removing unreachable block (ram,0x000103256eb0) */
/* WARNING: Removing unreachable block (ram,0x000103256eb4) */
/* WARNING: Removing unreachable block (ram,0x000103256e4c) */
/* WARNING: Removing unreachable block (ram,0x000103256df0) */
/* WARNING: Removing unreachable block (ram,0x000103256e14) */
/* WARNING: Removing unreachable block (ram,0x000103256e54) */
/* WARNING: Removing unreachable block (ram,0x000103256ee8) */
/* WARNING: Removing unreachable block (ram,0x000103256eec) */
/* WARNING: Removing unreachable block (ram,0x000103256e64) */
/* WARNING: Removing unreachable block (ram,0x000103256e18) */
/* WARNING: Removing unreachable block (ram,0x000103256dcc) */
/* WARNING: Removing unreachable block (ram,0x000103256d2c) */
/* WARNING: Removing unreachable block (ram,0x000103256d64) */
/* WARNING: Removing unreachable block (ram,0x000103256d6c) */
/* WARNING: Removing unreachable block (ram,0x000103256dbc) */

void FUN_103256f0c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = (uint)param_3 & 0xff;
  if (2 < uVar1) {
LAB_103256c68:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,uVar2,lVar3);
    return;
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_3 & 0xff) == 0) {
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
  }
  else {
    if (uVar1 == 1) goto LAB_103256c68;
    cVar4 = *(char *)(unaff_x20 + 0x28);
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    if (cVar4 == '\x01') {
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      goto code_r0x000107c61170;
    }
    func_0x000107c5af88();
  }
  func_0x000107c61180();
  func_0x000107c52b50(param_1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 103256f10; end: 103256f3b;  */

long FUN_103256f10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103256f3c; end: 103256f3f;  */

void FUN_103256f3c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103256f40; end: 103257003;  */

long FUN_103256f40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 103257004; end: 1032570a7;  */

int FUN_103257004(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032570a8; end: 1032570db;  */

void FUN_1032570a8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000113807150 = puVar1;
  return;
}



/* Entry: 1032570dc; end: 1032576bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032570dc(undefined *param_1,long param_2,byte param_3,char param_4,uint param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 auStack_78 [24];
  
  if (param_3 < 3) {
    if (param_3 == 0) {
LAB_1032571dc:
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar3 = puVar4;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar3);
      func_0x000107c5af88(puVar4);
LAB_1032572e0:
      func_0x000107c61180();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if (param_3 == 1) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
      }
      else {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
      }
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar3);
      if (lRam0000000112f4ee58 != -1) {
        func_0x000107c61568(0x112f4ee58,FUN_1032570a8);
      }
      puVar4 = puRam0000000113807150;
      func_0x000107c61174(puRam0000000113807150);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (param_3 == 3) {
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c3fdd0(0x3fe0000000000000);
    }
    else {
      if (param_3 != 4) {
        func_0x000107c52b50(param_1,param_2,0);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        goto LAB_1032572e0;
      }
      if ((param_5 & 1) == 0) goto LAB_1032571dc;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar4 = puVar3;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar2 = puVar4;
      func_0x000107c3fdd0(0x3fb1eb851eb851ec);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c5af88(puVar3);
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c3fdd0(0x3feb333333333333);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  uVar5 = 0;
  func_0x000103254b00(0);
  puVar3 = param_1;
  func_0x000107c61480(param_1,uVar5);
  lVar7 = _DAT_112f4ed18;
  puVar2 = param_1;
  if (puVar3 == (undefined *)0x0) {
    if (param_4 == '\x04') goto LAB_103257390;
LAB_10325755c:
    bVar1 = false;
LAB_103257560:
    puVar3 = param_1;
    func_0x000107c614f0(param_1);
    pcVar9 = *(code **)(param_2 + 0x10);
    func_0x000107c61174(puVar4);
    (*pcVar9)(puVar3,param_2);
    func_0x000107c5a100();
    func_0x000107c61170(puVar3);
    if ((!bVar1) || (param_4 != '\x02')) goto LAB_1032573cc;
LAB_1032575b8:
    puVar3 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (puVar3 == (undefined *)0x0) goto LAB_1032573cc;
    func_0x000107c61174(param_1);
    puVar8 = puVar2;
    FUN_1032514e0();
    func_0x000107c5378c(0x4030000000000000);
    func_0x000107c61170(puVar8);
    lVar7 = *(long *)(puVar3 + _DAT_112f4ed48);
    if (lVar7 != 0) {
      func_0x000107c61174();
      func_0x000107c5378c(0x4020000000000000);
      func_0x000107c61170(lVar7);
    }
  }
  else {
    func_0x000107c61428(puVar3 + _DAT_112f4ed18,auStack_78,0,0);
    if (param_4 != '\x04') {
      if (puVar3[lVar7] != '\x01') goto LAB_10325755c;
      if (param_4 != '\x02') {
        bVar1 = true;
        goto LAB_103257560;
      }
      puVar3 = param_1;
      func_0x000107c614f0(param_1);
      pcVar9 = *(code **)(param_2 + 0x10);
      func_0x000107c61174(puVar4);
      (*pcVar9)(puVar3,param_2);
      func_0x000107c5a100();
      func_0x000107c61170(puVar3);
      goto LAB_1032575b8;
    }
LAB_103257390:
    func_0x000107c614f0(param_1);
    pcVar9 = *(code **)(param_2 + 0x10);
    func_0x000107c61174(puVar4);
    (*pcVar9)(puVar2,param_2);
    func_0x000107c5a100();
  }
  func_0x000107c61170(puVar2);
LAB_1032573cc:
  puVar3 = param_1;
  func_0x000107c614f0(param_1);
  puVar2 = puVar3;
  (*pcVar9)();
  func_0x000107c59c78();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  (**(code **)(param_2 + 0x50))(0,1,puVar3,param_2);
  (**(code **)(param_2 + 0x68))(0,puVar3,param_2);
  puVar3 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c5903c(0);
  func_0x000107c61170(puVar3);
  puVar3 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c59030();
  func_0x000107c61170(puVar3);
  if (param_3 == 3) {
    puVar3 = param_1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52df8();
    func_0x000107c61170(puVar3);
    puVar3 = param_1;
    func_0x000107c4aba4(param_1);
    func_0x000107c61180();
    func_0x000107c52e0c(0);
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_1032576c4(param_1,param_2);
  }
  puVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = puVar3;
  func_0x000107c61440();
  puVar8 = puVar4;
  if ((puVar2 != (undefined *)0x0) && (param_1 != (undefined *)0x0)) {
    pcVar9 = *(code **)(puVar2 + 0x10);
    func_0x000107c61174(param_1);
    puVar8 = puVar3;
    (*pcVar9)(puVar3,puVar2);
    puVar6 = puVar8;
    func_0x000107c45034();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar6;
      func_0x000107c45154(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
    }
    puVar6 = puVar3;
    (*pcVar9)(puVar3,puVar2);
    func_0x000107c55258();
    func_0x000107c61170(puVar6);
    (*pcVar9)(puVar3,puVar2);
    func_0x000107c59e10();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1032576bc; end: 1032576c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032576bc(undefined *param_1,long param_2,byte param_3,char param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  byte *unaff_x20;
  code *pcVar9;
  undefined1 auStack_78 [24];
  
  if (param_3 < 3) {
    if (param_3 == 0) {
LAB_1032571dc:
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar3 = puVar4;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar3);
      func_0x000107c5af88(puVar4);
LAB_1032572e0:
      func_0x000107c61180();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if (param_3 == 1) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
      }
      else {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
      }
      func_0x000107c61180();
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar3);
      if (lRam0000000112f4ee58 != -1) {
        func_0x000107c61568(0x112f4ee58,FUN_1032570a8);
      }
      puVar4 = puRam0000000113807150;
      func_0x000107c61174(puRam0000000113807150);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (param_3 == 3) {
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c3fdd0(0x3fe0000000000000);
    }
    else {
      if (param_3 != 4) {
        func_0x000107c52b50(param_1,param_2,0);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        goto LAB_1032572e0;
      }
      if ((*unaff_x20 & 1) == 0) goto LAB_1032571dc;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar4 = puVar3;
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar2 = puVar4;
      func_0x000107c3fdd0(0x3fb1eb851eb851ec);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c52b50(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c5af88(puVar3);
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c3fdd0(0x3feb333333333333);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  uVar5 = 0;
  func_0x000103254b00(0);
  puVar3 = param_1;
  func_0x000107c61480(param_1,uVar5);
  lVar7 = _DAT_112f4ed18;
  puVar2 = param_1;
  if (puVar3 == (undefined *)0x0) {
    if (param_4 == '\x04') goto LAB_103257390;
LAB_10325755c:
    bVar1 = false;
LAB_103257560:
    puVar3 = param_1;
    func_0x000107c614f0(param_1);
    pcVar9 = *(code **)(param_2 + 0x10);
    func_0x000107c61174(puVar4);
    (*pcVar9)(puVar3,param_2);
    func_0x000107c5a100();
    func_0x000107c61170(puVar3);
    if ((!bVar1) || (param_4 != '\x02')) goto LAB_1032573cc;
LAB_1032575b8:
    puVar3 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (puVar3 == (undefined *)0x0) goto LAB_1032573cc;
    func_0x000107c61174(param_1);
    puVar8 = puVar2;
    FUN_1032514e0();
    func_0x000107c5378c(0x4030000000000000);
    func_0x000107c61170(puVar8);
    lVar7 = *(long *)(puVar3 + _DAT_112f4ed48);
    if (lVar7 != 0) {
      func_0x000107c61174();
      func_0x000107c5378c(0x4020000000000000);
      func_0x000107c61170(lVar7);
    }
  }
  else {
    func_0x000107c61428(puVar3 + _DAT_112f4ed18,auStack_78,0,0);
    if (param_4 != '\x04') {
      if (puVar3[lVar7] != '\x01') goto LAB_10325755c;
      if (param_4 != '\x02') {
        bVar1 = true;
        goto LAB_103257560;
      }
      puVar3 = param_1;
      func_0x000107c614f0(param_1);
      pcVar9 = *(code **)(param_2 + 0x10);
      func_0x000107c61174(puVar4);
      (*pcVar9)(puVar3,param_2);
      func_0x000107c5a100();
      func_0x000107c61170(puVar3);
      goto LAB_1032575b8;
    }
LAB_103257390:
    func_0x000107c614f0(param_1);
    pcVar9 = *(code **)(param_2 + 0x10);
    func_0x000107c61174(puVar4);
    (*pcVar9)(puVar2,param_2);
    func_0x000107c5a100();
  }
  func_0x000107c61170(puVar2);
LAB_1032573cc:
  puVar3 = param_1;
  func_0x000107c614f0(param_1);
  puVar2 = puVar3;
  (*pcVar9)();
  func_0x000107c59c78();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  (**(code **)(param_2 + 0x50))(0,1,puVar3,param_2);
  (**(code **)(param_2 + 0x68))(0,puVar3,param_2);
  puVar3 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c5903c(0);
  func_0x000107c61170(puVar3);
  puVar3 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c59030();
  func_0x000107c61170(puVar3);
  if (param_3 == 3) {
    puVar3 = param_1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52df8();
    func_0x000107c61170(puVar3);
    puVar3 = param_1;
    func_0x000107c4aba4(param_1);
    func_0x000107c61180();
    func_0x000107c52e0c(0);
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_1032576c4(param_1,param_2);
  }
  puVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = puVar3;
  func_0x000107c61440();
  puVar8 = puVar4;
  if ((puVar2 != (undefined *)0x0) && (param_1 != (undefined *)0x0)) {
    pcVar9 = *(code **)(puVar2 + 0x10);
    func_0x000107c61174(param_1);
    puVar8 = puVar3;
    (*pcVar9)(puVar3,puVar2);
    puVar6 = puVar8;
    func_0x000107c45034();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar6;
      func_0x000107c45154(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
    }
    puVar6 = puVar3;
    (*pcVar9)(puVar3,puVar2);
    func_0x000107c55258();
    func_0x000107c61170(puVar6);
    (*pcVar9)(puVar3,puVar2);
    func_0x000107c59e10();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1032576c4; end: 10325778f;  */

/* WARNING: Possible PIC construction at 0x000103257724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103257740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103257754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103257744) */
/* WARNING: Removing unreachable block (ram,0x000103257728) */
/* WARNING: Removing unreachable block (ram,0x000103257758) */

void FUN_1032576c4(void)

{
  undefined *puVar1;
  
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c3fdd0(0x3fd51eb851eb851f);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103257790; end: 103257837;  */

int FUN_103257790(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x11] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103257838; end: 1032578a3; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103257838(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_reset_11262ba18;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = 0;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1032578a4; end: 1032578af; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032578a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesBegan_withEvent__11267b780,uVar3,param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = param_4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032578b0; end: 1032578bb; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032578b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesMoved_withEvent__11252ca58,uVar3,param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = param_4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032578bc; end: 1032578c7; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032578bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesEnded_withEvent__11267b788,uVar3,param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = param_4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032578c8; end: 1032578d3; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032578c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesCancelled_withEvent__112526c90,uVar3,param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = param_4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032578d4; end: 1032579bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032578d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102be1030(0);
  uVar4 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar4);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,*param_5,uVar3,param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f4ee60);
  *(undefined8 *)(param_1 + _DAT_112f4ee60) = param_4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032579c0; end: 103257aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032579c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f4ee60) = 0;
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_80,lStack_68);
    lVar3 = *(long *)(lStack_68 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar1 = auStack_80 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar3 + 0x10))(puVar1);
    puVar2 = puVar1;
    func_0x000107c605b0(puVar1,lStack_68);
    (**(code **)(lVar3 + 8))(puVar1,lStack_68);
    func_0x000100183ab8(auStack_80);
  }
  puVar1 = &stack0xffffffffffffff70;
  func_0x000107c61154(puVar1,PTR_s_initWithTarget_action__1125f1c48,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x00010006e7f4(param_1);
  return puVar1;
}



/* Entry: 103257af0; end: 103257b57; -[_TtC20SCContextActionBarUI29TapWithEventGestureRecognizer initWithTarget:action:] */

void FUN_103257af0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_1032579c0(&uStack_50,param_4);
  return;
}



/* Entry: 103257b58; end: 103257b8b;  */

void FUN_103257b58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


