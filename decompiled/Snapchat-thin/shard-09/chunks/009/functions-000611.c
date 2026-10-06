/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072fce64; end: 1072fce67;  */

undefined8 * FUN_1072fce64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e370;
  FUN_1072fd178(param_1 + 1);
  return param_1;
}



/* Entry: 1072fce68; end: 1072fce7b;  */

void FUN_1072fce68(void)

{
  FUN_1072fcfa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fce7c; end: 1072fceb7;  */

undefined8 FUN_1072fce7c(undefined8 param_1)

{
  func_0x0001072fdce4();
  FUN_1072fcfd0();
  return param_1;
}



/* Entry: 1072fceb8; end: 1072fcedb;  */

void FUN_1072fceb8(long param_1,undefined8 param_2)

{
  func_0x0001072fdcf4(param_2,param_1 + 8);
  func_0x0001072fdc90(&PTR_FUN_11099e370);
  func_0x0001072fb714();
  return;
}



/* Entry: 1072fcedc; end: 1072fcf5f;  */

void FUN_1072fcedc(void)

{
  int iVar1;
  long unaff_x19;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [128];
  
  func_0x0001072fdcf4();
  FUN_1072fd048(auStack_b0,unaff_x19 + 8);
  iVar1 = (int)unaff_x19 + 8;
  func_0x0001072fd0d4();
  if (iVar1 != 0) {
    func_0x0001075281c8(auStack_a0);
    FUN_1072fb768(unaff_x19 + 0x20,auStack_a0);
    func_0x00010724b340(auStack_a0);
  }
  func_0x000107270b00(auStack_b0);
  return;
}



/* Entry: 1072fcf60; end: 1072fcf97;  */

long FUN_1072fcf60(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099e3d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072fcf98; end: 1072fcfa3;  */

undefined ** FUN_1072fcf98(void)

{
  return &PTR_DAT_11099e3d0;
}



/* Entry: 1072fcfa4; end: 1072fcfcf;  */

undefined8 * FUN_1072fcfa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e370;
  FUN_1072fd178(param_1 + 1);
  return param_1;
}



/* Entry: 1072fcfd0; end: 1072fd017;  */

void FUN_1072fcfd0(void)

{
  func_0x0001072fdcf4();
  func_0x0001072fdc90(&PTR_FUN_11099e370);
  func_0x0001072fb714();
  return;
}



/* Entry: 1072fd018; end: 1072fd047;  */

void FUN_1072fd018(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072fdcc8();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1072fd048; end: 1072fd123;  */

void FUN_1072fd048(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1072fd0c0;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1072fd0c0:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 1072fd124; end: 1072fd177;  */

void FUN_1072fd124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001072fdcc8();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 1072fd178; end: 1072fd297;  */

undefined8 FUN_1072fd178(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072ad0c8(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072fd298; end: 1072fd36b;  */

void FUN_1072fd298(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_10726d624();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_1072fd36c(lVar9 + (long)plVar3 * 0x50,lVar6);
    }
    lVar6 = lVar6 + 0x50;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1072fd36c; end: 1072fd40f;  */

long FUN_1072fd36c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x0001072fd3dc(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 1072fd410; end: 1072fd457;  */

void FUN_1072fd410(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x18) {
    FUN_10724ae28(lVar2 + -0x10);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1072fd458; end: 1072fd46b;  */

long FUN_1072fd458(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1072fd46c; end: 1072fd47f;  */

undefined * FUN_1072fd46c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*(long *)(puVar1 + 0x10) != 0) {
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 1072fd480; end: 1072fd4a7;  */

long FUN_1072fd480(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072fd4a8; end: 1072fd4b7;  */

void FUN_1072fd4a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072fd4b8; end: 1072fd4cb;  */

void FUN_1072fd4b8(void)

{
  FUN_1072fd4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fd4cc; end: 1072fd4db;  */

void FUN_1072fd4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072fd4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072fd4dc; end: 1072fd50b;  */

void FUN_1072fd4dc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001072fdd00();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000104c318bc(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 1072fd50c; end: 1072fd50f;  */

undefined8 * FUN_1072fd50c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e460;
  FUN_1072fda18(param_1 + 1);
  return param_1;
}



/* Entry: 1072fd510; end: 1072fd523;  */

void FUN_1072fd510(void)

{
  FUN_1072fd850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fd524; end: 1072fd547;  */

undefined8 FUN_1072fd524(undefined8 param_1)

{
  func_0x0001072fdcec();
  func_0x0001072fdc90(&PTR_FUN_11099e460);
  FUN_1072fd8b8();
  return param_1;
}



/* Entry: 1072fd548; end: 1072fd56b;  */

undefined8 FUN_1072fd548(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072fdc90(&PTR_FUN_11099e460);
  FUN_1072fd8b8();
  return param_2;
}



/* Entry: 1072fd56c; end: 1072fd80b;  */

void FUN_1072fd56c(void)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  byte bVar22;
  undefined1 auStack_138 [16];
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 uStack_109;
  undefined1 auStack_108 [16];
  undefined7 uStack_f8;
  undefined4 uStack_f1;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  
  func_0x0001072fdcf4();
  FUN_1072fd048(auStack_138,unaff_x19 + 8);
  iVar4 = (int)unaff_x19 + 8;
  func_0x0001072fd0d4();
  if (iVar4 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    auStack_108[0] = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_f8 = 0;
    uStack_f1 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (*(int *)(unaff_x20 + 0x28) == 3) {
      uStack_109 = 6;
      FUN_1072fbd64(&lStack_128,&uStack_109,*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      lVar13 = lStack_128;
      lStack_128 = 0;
      FUN_10724b300(&uStack_f8,lVar13);
      FUN_1072d6f8c(&lStack_128);
    }
    else if (*(int *)(unaff_x20 + 0x28) == 2) {
      FUN_1072fd8e0(&lStack_128,*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
      FUN_10724ac30(&uStack_e8,&lStack_128);
      FUN_10724c894(&lStack_128);
    }
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    __ZNSt3__15mutex4lockEv(lVar9 + 0x30);
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    Hint_Prefetch(uVar7,0,2,0);
    uVar10 = unaff_x19 + 0x28;
    func_0x000104c2fe38(uVar7);
    lVar13 = 0;
    lVar1 = *(long *)(lVar9 + 0x18);
    uVar2 = *(ulong *)(lVar9 + 0x20);
    uVar12 = *(ulong *)(lVar9 + 0x10);
    uVar8 = uVar12 >> 0xc ^ uVar10 >> 7;
    bVar3 = (byte)uVar10;
    uVar16 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar8 = uVar8 & uVar2;
      uVar7 = *(undefined8 *)(uVar12 + uVar8);
      cVar17 = (char)((ulong)uVar7 >> 8);
      cVar18 = (char)((ulong)uVar7 >> 0x10);
      cVar19 = (char)((ulong)uVar7 >> 0x18);
      cVar20 = (char)((ulong)uVar7 >> 0x20);
      cVar21 = (char)((ulong)uVar7 >> 0x28);
      bVar15 = (byte)((ulong)uVar7 >> 0x30);
      bVar22 = (byte)((ulong)uVar7 >> 0x38);
      for (uVar10 = CONCAT17(-(bVar22 == (bVar3 & 0x7f)),
                             CONCAT16(-(bVar15 == (bVar3 & 0x7f)),
                                      CONCAT15(-(cVar21 == (char)(uVar16 >> 0x28)),
                                               CONCAT14(-(cVar20 == (char)(uVar16 >> 0x20)),
                                                        CONCAT13(-(cVar19 == (char)(uVar16 >> 0x18))
                                                                 ,CONCAT12(-(cVar18 ==
                                                                            (char)(uVar16 >> 0x10)),
                                                                           CONCAT11(-(cVar17 ==
                                                                                     (char)(uVar16 
                                                  >> 8)),-((char)uVar7 == (char)uVar16)))))))) &
                    0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar8 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
        uVar5 = lVar1 + uVar14 * 0x50;
        func_0x000104c32db4(uVar5,unaff_x19 + 0x28);
        if ((uVar5 & 1) != 0) {
          lVar1 = *(long *)(lVar9 + 0x10);
          lVar6 = *(long *)(lVar9 + 0x18) + uVar14 * 0x50;
          lVar13 = *(long *)(lVar6 + 0x38);
          uStack_118 = *(undefined8 *)(lVar6 + 0x48);
          lVar11 = *(long *)(lVar6 + 0x40);
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x48) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          lStack_128 = lVar13;
          lStack_120 = lVar11;
          func_0x0001072fd3b0();
          func_0x00010ae6cb48((undefined8 *)(lVar9 + 0x10),lVar1 + uVar14,0x50);
          goto LAB_1072fd748;
        }
      }
      bVar15 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                   CONCAT16(-(bVar15 == 0x80),
                                            CONCAT15(-(cVar21 == -0x80),
                                                     CONCAT14(-(cVar20 == -0x80),
                                                              CONCAT13(-(cVar19 == -0x80),
                                                                       CONCAT12(-(cVar18 == -0x80),
                                                                                CONCAT11(-(cVar17 ==
                                                                                          -0x80),-((
                                                  char)uVar7 == -0x80)))))))),1);
      if ((bVar15 & 1) != 0) break;
      lVar13 = lVar13 + 8;
      uVar8 = lVar13 + uVar8;
    }
    lVar11 = 0;
    lVar13 = 0;
LAB_1072fd748:
    __ZNSt3__15mutex6unlockEv(lVar9 + 0x30);
    for (; lVar13 != lVar11; lVar13 = lVar13 + 0x18) {
      FUN_1072fba20(lVar13,&SUB_10789ee64,0,auStack_108);
    }
    func_0x0001072fd3dc(&lStack_128);
    func_0x00010724b340(auStack_108);
  }
  func_0x000107270b00(auStack_138);
  return;
}



/* Entry: 1072fd80c; end: 1072fd843;  */

long FUN_1072fd80c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099e4c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072fd844; end: 1072fd84f;  */

undefined ** FUN_1072fd844(void)

{
  return &PTR_DAT_11099e4c0;
}



/* Entry: 1072fd850; end: 1072fd87b;  */

undefined8 * FUN_1072fd850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e460;
  FUN_1072fda18(param_1 + 1);
  return param_1;
}



/* Entry: 1072fd87c; end: 1072fd8b7;  */

undefined8 FUN_1072fd87c(undefined8 param_1)

{
  func_0x0001072fdc90(&PTR_FUN_11099e460);
  FUN_1072fd8b8();
  return param_1;
}



/* Entry: 1072fd8b8; end: 1072fd8df;  */

undefined8 * FUN_1072fd8b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000104c2fe00(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1072fd8e0; end: 1072fd903;  */

void FUN_1072fd8e0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072fd904(&uStack_11,param_1);
  return;
}



/* Entry: 1072fd904; end: 1072fd98b;  */

undefined8 * FUN_1072fd904(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001072fdca0();
  uStack_28 = extraout_x8;
  FUN_10724c79c(auStack_40,1);
  FUN_1072fd98c(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010724c884();
  func_0x0001072fdc5c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010724c884();
  func_0x0001072fdc88();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110995158;
  puVar3[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 3);
  return puVar3;
}



/* Entry: 1072fd98c; end: 1072fd9cf;  */

undefined8 * FUN_1072fd98c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995158;
  param_1[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3);
  return param_1;
}



/* Entry: 1072fd9d0; end: 1072fd9fb;  */

undefined8 * FUN_1072fd9d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099e4e0;
  FUN_1072740c8(param_1 + 1);
  return param_1;
}



/* Entry: 1072fd9fc; end: 1072fda0f;  */

void FUN_1072fd9fc(void)

{
  FUN_1072fd9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fda10; end: 1072fda17;  */

void FUN_1072fda10(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107275728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001072753b4();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107274e64(uVar2);
  return;
}



/* Entry: 1072fda18; end: 1072fda3f;  */

undefined8 FUN_1072fda18(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072fda40; end: 1072fdae7;  */

undefined8 * FUN_1072fda40(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072fdcc8();
    } while (extraout_w10 != 0);
  }
  param_1[2] = &UNK_10e52b660;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  FUN_10726ed14(param_1 + 0xe);
  param_1[0x10] = param_1;
  return param_1;
}



/* Entry: 1072fdae8; end: 1072fdb23;  */

long * FUN_1072fdae8(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1072fdb24(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1072fdb24; end: 1072fdb87;  */

void FUN_1072fdb24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001072fd3b0(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 1072fdb88; end: 1072fdb9f;  */

void FUN_1072fdb88(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072fdbbc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fdba0; end: 1072fdbbb;  */

void FUN_1072fdba0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072fdbbc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fdbbc; end: 1072fdbf3;  */

undefined8 FUN_1072fdbbc(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1072fdbf4(param_1 + 0x70);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  FUN_1072fdae8(param_1 + 0x10);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072fdbf4; end: 1072fdc1b;  */

long FUN_1072fdbf4(long param_1)

{
  FUN_1072fdc1c();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072fdc1c; end: 1072fdc47;  */

void FUN_1072fdc1c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1072fdc48; end: 1072fdd13;  */

void FUN_1072fdc48(void)

{
  return;
}



/* Entry: 1072fdd14; end: 1072fdd8b;  */

void FUN_1072fdd14(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0x10),*(undefined1 (*) [16])(param_2 + 0x10),8,
                    1);
  uStack_38 = auVar8._8_8_;
  uStack_40 = auVar8._0_8_;
  puVar4 = auStack_30;
  FUN_1067e2f1c(&uStack_40);
  func_0x0001002a2640(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uVar5 = *(ulong *)((long)puVar2 + 0x10);
    puVar1 = (ulong *)((long)puVar2 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + 7);
    }
    for (lVar6 = (long)*(int *)((long)puVar2 + 0x18) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      uVar7 = *puVar1;
      puVar3 = puVar4 + 0x10;
      FUN_1072fde1c();
      *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(uVar7 + 0x20);
      *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(uVar7 + 0x28);
      puVar3[0x28] = *(undefined1 *)(uVar7 + 0x34);
      uVar5 = *(ulong *)(puVar3 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x0001001a53d4(puVar3 + 0x10,*(ulong *)(uVar7 + 0x18) & 0xfffffffffffffffc,uVar5);
      puVar1 = puVar1 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1072fdd8c; end: 1072fde1b;  */

void FUN_1072fdd8c(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x18) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar5 = *puVar1;
    lVar2 = param_2 + 0x10;
    FUN_1072fde1c();
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(uVar5 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(uVar5 + 0x28);
    *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(uVar5 + 0x34);
    uVar3 = *(ulong *)(lVar2 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(lVar2 + 0x10,*(ulong *)(uVar5 + 0x18) & 0xfffffffffffffffc,uVar3);
    puVar1 = puVar1 + 1;
  }
  return;
}



/* Entry: 1072fde1c; end: 1072fde27;  */

void FUN_1072fde1c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1072fde28);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1072fde28);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1072fde28; end: 1072fdefb;  */

void FUN_1072fde28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_DAT_1109ec100;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  *(undefined2 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1072fdefc; end: 1072fdf47;  */

void FUN_1072fdefc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1072fdf48; end: 1072fdf6f;  */

undefined8 FUN_1072fdf48(undefined8 param_1)

{
  FUN_1072fdf70(param_1,0);
  return param_1;
}



/* Entry: 1072fdf70; end: 1072fdf87;  */

void FUN_1072fdf70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fdf88; end: 1072fdfaf;  */

undefined8 FUN_1072fdf88(undefined8 param_1)

{
  FUN_1072fdfb0(param_1,0);
  return param_1;
}



/* Entry: 1072fdfb0; end: 1072fdfc7;  */

void FUN_1072fdfb0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072fdfe4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fdfc8; end: 1072fdfe3;  */

void FUN_1072fdfc8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072fdfe4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072fdfe4; end: 1072fe00b;  */

undefined8 FUN_1072fdfe4(undefined8 param_1)

{
  FUN_1072fe00c(param_1,0);
  return param_1;
}



/* Entry: 1072fe00c; end: 1072fe023;  */

void FUN_1072fe00c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fe024; end: 1072fe1e3;  */

undefined8 *
FUN_1072fe024(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 auStack_68 [3];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_90;
  puVar1 = param_1;
  func_0x0001073011bc();
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((long)puVar1 + 0x92) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  lVar3 = param_3[1];
  uVar4 = *param_3;
  puVar1[0x17] = param_3[1];
  puVar1[0x16] = uVar4;
  uStack_48 = extraout_x8;
  if (lVar3 != 0) {
    do {
      func_0x000107301254();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_2[1];
  uVar4 = *param_2;
  param_1[0x19] = param_2[1];
  param_1[0x18] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107301254();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = param_4[1];
  lVar5 = *param_4;
  param_1[0x1b] = param_4[1];
  param_1[0x1a] = lVar5;
  if (lVar3 != 0) {
    do {
      func_0x000107301254();
    } while (extraout_w10_01 != 0);
  }
  FUN_10726ed14(param_1 + 0x1d);
  param_1[0x1f] = param_1;
  lVar3 = *param_4;
  FUN_1072fec48(&uStack_90,param_1 + 0x1d);
  puStack_50 = (undefined8 *)0x0;
  puStack_78 = param_1;
  func_0x000107301284();
  *puVar2 = &PTR_SUB_11099e5b0;
  puVar2[2] = uStack_88;
  puVar2[1] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar2[3] = uStack_80;
  puVar2[4] = param_1;
  lVar3 = lVar3 + 0xf0;
  puStack_50 = puVar2;
  FUN_107276a38(lVar3,auStack_68);
  *(int *)(param_1 + 0x1c) = (int)lVar3;
  puVar2 = auStack_68;
  func_0x0001072791f8();
  func_0x0001073012f0();
  func_0x000107301118(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072791f8(auStack_68);
    func_0x0001073012f0();
    FUN_107300030(param_1 + 0x1d);
    func_0x0001072aa114(param_1 + 0x1a);
    func_0x00010726ee94(param_1 + 0x18);
    func_0x0001072ac994(puVar1 + 0x16);
    FUN_1072fec94(param_1 + 8);
    __ZNSt3__15mutexD1Ev(param_1);
    __Unwind_Resume();
    (**(code **)(*(long *)puVar2[0x16] + 0x18))();
    FUN_107276ab4(puVar2[0x1a] + 0xf0,*(undefined4 *)(puVar2 + 0x1c));
    FUN_107300030(puVar2 + 0x1d);
    func_0x0001072aa114(puVar2 + 0x1a);
    func_0x00010726ee94(puVar2 + 0x18);
    func_0x0001072ac994(puVar2 + 0x16);
    FUN_1072fec94(puVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 1072fe1e4; end: 1072fe25f;  */

void FUN_1072fe1e4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
  FUN_107276ab4(*(long *)(param_1 + 0xd0) + 0xf0,*(undefined4 *)(param_1 + 0xe0));
  FUN_107300030(param_1 + 0xe8);
  func_0x0001072aa114((long *)(param_1 + 0xd0));
  func_0x00010726ee94(param_1 + 0xc0);
  func_0x0001072ac994((undefined8 *)(param_1 + 0xb0));
  FUN_1072fec94(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 1072fe260; end: 1072fe2ef;  */

void FUN_1072fe260(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uStack_44;
  
  lVar2 = param_2;
  func_0x00010785f1f4();
  uStack_44 = 0x10;
  uVar3 = lVar2 + 0x7c0;
  FUN_1072b86c8(uVar3,&uStack_44);
  if ((double)(uVar3 & 0xffffffff) <= param_1) {
    __ZNSt3__15mutex4lockEv(param_2);
    uVar4 = *param_4;
    *(undefined8 *)(param_2 + 0xa0) = param_4[1];
    *(undefined8 *)(param_2 + 0x98) = uVar4;
    bVar1 = *(byte *)(param_2 + 0x91);
    __ZNSt3__15mutex6unlockEv(param_2);
    if ((bVar1 & 1) == 0) {
      FUN_1072fe2f0(param_2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1072fe2f0; end: 1072feb2f;  */

undefined ***
FUN_1072fe2f0(undefined8 param_1,double param_2,long param_3,undefined **param_4,undefined8 param_5)

{
  undefined ***pppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined ***unaff_x19;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  int iVar21;
  double dVar22;
  undefined *puVar23;
  long lStack_1d8;
  undefined1 auStack_1d0 [40];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *apuStack_130 [6];
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  
  lVar17 = param_3;
  func_0x0001073011bc();
  lStack_168 = 0;
  ppuStack_170 = (undefined **)0x0;
  uStack_158 = 0;
  puStack_160 = (undefined *)0x0;
  uStack_150 = 0x3f800000;
  uStack_98 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  func_0x00010785f1f4();
  uStack_100 = uStack_100 & 0xffffff00;
  lVar17 = lVar17 + 0x9f0;
  FUN_10724e2c8(lVar17,&uStack_100);
  if ((int)lVar17 == 0) {
    FUN_1072619a8(&uStack_100,param_4,0xe);
    uVar2 = (uint)uStack_f8;
    uVar20 = uStack_100;
    param_4 = (undefined **)(ulong)uStack_f8._4_4_;
    lStack_a8 = param_3 + 0x40;
    lStack_b0 = param_3 + 0x68;
    ppuStack_b8 = &PTR_FUN_11099e520;
    pppuStack_a0 = &ppuStack_b8;
    uVar9 = uStack_100 == (uint)uStack_f8;
    if ((uint)uStack_f8 < uStack_100) {
      func_0x0001073012c0();
      func_0x000107301198(uVar20,0x3fff);
      FUN_1072ffd44(&uStack_100);
      FUN_1072ffc18(&ppuStack_148,&ppuStack_b8);
      pppuVar12 = &ppuStack_148;
      func_0x000107301198(0,uVar2);
    }
    else {
      func_0x0001073012c0();
      pppuVar12 = (undefined ***)&uStack_100;
      func_0x000107301198(uVar20,uVar2);
    }
    FUN_1072ffd44(pppuVar12);
    pppuVar12 = &ppuStack_b8;
    FUN_1072ffd44();
  }
  else {
    dVar22 = 16384.0;
    func_0x0001072466d8(param_5);
    ppuStack_148 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x310;
    uStack_e0 = &ppuStack_138;
    __Znwm();
    ppuStack_138 = ppuVar10 + 0x62;
    uStack_f8._0_4_ = 0;
    uStack_f8._4_4_ = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_f0 = (undefined **)0x0;
    ppuStack_148 = ppuVar10;
    ppuStack_140 = ppuVar10;
    FUN_1072fed98(&uStack_100);
    for (iVar14 = -3; iVar14 != 4; iVar14 = iVar14 + 1) {
      uVar2 = iVar14 + (int)param_2;
      uVar20 = (int)dVar22 - 3;
      for (iVar21 = -3; iVar21 != 4; iVar21 = iVar21 + 1) {
        if (uVar2 >> 0xe == 0) {
          uVar3 = uVar20 - 0x4000;
          if ((int)uVar20 < 0x4000) {
            uVar3 = uVar20;
          }
          uVar4 = uVar20 + 0x4000;
          if (-1 < (int)uVar20) {
            uVar4 = uVar3;
          }
          param_4 = (undefined **)(ulong)uVar4;
          uVar13 = param_3 + 0x68;
          FUN_1072fecbc(uVar13,param_4,uVar2);
          ppuVar5 = ppuStack_138;
          ppuVar10 = ppuStack_148;
          if ((uVar13 & 1) == 0) {
            puVar23 = (undefined *)(double)(uint)(iVar14 * iVar14 + iVar21 * iVar21);
            if (ppuStack_140 < ppuStack_138) {
              *ppuStack_140 = (undefined *)CONCAT44(uVar2,uVar4);
              ppuStack_140[1] = puVar23;
              ppuStack_140 = ppuStack_140 + 2;
            }
            else {
              lVar17 = (long)ppuStack_140 - (long)ppuStack_148;
              uVar13 = (lVar17 >> 4) + 1;
              if (uVar13 >> 0x3c != 0) {
                FUN_1072fed8c();
LAB_1072feab4:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1072feab8);
                (*pcVar8)();
              }
              uVar15 = (long)ppuStack_138 - (long)ppuStack_148 >> 3;
              if (uVar15 <= uVar13) {
                uVar15 = uVar13;
              }
              if (0x7fffffffffffffef < (ulong)((long)ppuStack_138 - (long)ppuStack_148)) {
                uVar15 = 0xfffffffffffffff;
              }
              if (uVar15 == 0) {
                lVar11 = 0;
                uStack_e0 = &ppuStack_138;
              }
              else {
                if (uVar15 >> 0x3c != 0) {
                  uStack_e0 = &ppuStack_138;
                  func_0x000104bd35f4();
                  goto LAB_1072feab4;
                }
                lVar11 = uVar15 << 4;
                uStack_e0 = &ppuStack_138;
                __Znwm();
              }
              plVar16 = (long *)(lVar11 + lVar17);
              *plVar16 = (long)CONCAT44(uVar2,uVar4);
              plVar16[1] = (long)puVar23;
              _memcpy(plVar16 + (lVar17 >> 4) * -2,ppuVar10,lVar17);
              ppuStack_f0 = ppuVar10;
              ppuStack_e8 = ppuVar5;
              uStack_100 = (uint)ppuVar10;
              uStack_fc = (uint)((ulong)ppuVar10 >> 0x20);
              ppuStack_148 = (undefined **)(plVar16 + (lVar17 >> 4) * -2);
              ppuStack_140 = (undefined **)(plVar16 + 2);
              ppuStack_138 = (undefined **)(lVar11 + uVar15 * 0x10);
              uStack_f8._0_4_ = uStack_100;
              uStack_f8._4_4_ = uStack_fc;
              FUN_1072fed98(&uStack_100);
              param_4 = ppuVar10;
              ppuStack_140 = (undefined **)(plVar16 + 2);
            }
          }
        }
        uVar20 = uVar20 + 1;
      }
    }
    ppuVar10 = ppuStack_148;
    if (ppuStack_148 != ppuStack_140) {
      FUN_1072fedd8(ppuStack_148,ppuStack_140,
                    LZCOUNT((long)ppuStack_140 - (long)ppuStack_148 >> 4) << 1 ^ 0x7e,1);
      ppuVar10 = ppuStack_140;
    }
    unaff_x19 = (undefined ***)0x0;
    uVar13 = (long)ppuVar10 - (long)ppuStack_148 >> 4;
    if (0x13 < uVar13) {
      uVar13 = 0x14;
    }
    for (; uVar9 = uVar13 * 0x10 - (long)unaff_x19 == 0, !(bool)uVar9; unaff_x19 = unaff_x19 + 2) {
      func_0x0001072fed88(param_3 + 0x40,(long)ppuStack_148 + (long)unaff_x19);
    }
    pppuVar12 = &ppuStack_148;
    func_0x0001072ffb64();
  }
  plVar16 = (long *)puStack_160;
  if (((*(byte *)(param_3 + 0x90) & 1) != 0) || (*(long *)(param_3 + 0x58) == 0)) {
    func_0x000107301308();
    goto LAB_1072fe998;
  }
  pppuVar1 = (undefined ***)(param_3 + 0x40);
  *(undefined1 *)(param_3 + 0x90) = 1;
  if (&ppuStack_170 == pppuVar1) {
    uStack_e0 = (undefined ***)CONCAT44(uStack_e0._4_4_,0x3f800000);
LAB_1072fe75c:
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_f0 = (undefined **)0x0;
    func_0x0001072fff88(pppuVar1,*(undefined8 *)(param_3 + 0x50));
    *(undefined8 *)(param_3 + 0x50) = 0;
    lVar11 = *(long *)(param_3 + 0x48);
    for (lVar17 = 0; uVar9 = lVar11 == lVar17, !(bool)uVar9; lVar17 = lVar17 + 1) {
      (*pppuVar1)[lVar17] = (undefined *)0x0;
    }
    *(undefined8 *)(param_3 + 0x58) = 0;
  }
  else {
    uStack_150 = *(undefined4 *)(param_3 + 0x60);
    plVar18 = *(long **)(param_3 + 0x50);
    uVar9 = 0;
    ppuVar10 = ppuStack_170;
    lVar17 = lStack_168;
    if (lStack_168 != 0) {
      for (; lVar17 != 0; lVar17 = lVar17 + -1) {
        *ppuVar10 = (undefined *)0x0;
        ppuVar10 = ppuVar10 + 1;
      }
      puStack_160 = (undefined *)0x0;
      uStack_158 = 0;
      for (plVar19 = plVar18;
          (plVar18 = plVar19, plVar16 != (long *)0x0 &&
          (plVar18 = (long *)0x0, plVar19 != (long *)0x0)); plVar19 = (long *)*plVar19) {
        plVar16[2] = plVar19[2];
        lVar17 = *plVar16;
        pppuVar12 = &ppuStack_170;
        FUN_1073004b8(pppuVar12,plVar16);
        plVar16 = (long *)lVar17;
      }
      func_0x000107301330();
    }
    param_4 = &puStack_160;
    for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      ppuVar10 = (undefined **)plVar18[2];
      func_0x000107301310();
      uStack_100 = (uint)pppuVar12;
      uStack_fc = (uint)((ulong)pppuVar12 >> 0x20);
      ppuStack_f0 = (undefined **)0x1;
      uVar13 = ((ulong)ppuVar10 & 0xffffffff) + 0x9e3779b97f4a7c15;
      *pppuVar12 = (undefined **)0x0;
      pppuVar12[1] = (undefined **)
                     (((ulong)ppuVar10 >> 0x20) + 0x9e3779b97f4a7c15 + uVar13 * 0x1000 +
                      (uVar13 >> 4) ^ uVar13);
      pppuVar12[2] = ppuVar10;
      uStack_f8 = param_4;
      FUN_1073004b8(&ppuStack_170);
      uStack_100 = 0;
      uStack_fc = 0;
      pppuVar12 = (undefined ***)&uStack_100;
      func_0x0001072ffb38();
    }
    ppuStack_f0 = (undefined **)0x0;
    ppuStack_e8 = (undefined **)0x0;
    uStack_e0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
    uStack_e0 = (undefined ***)CONCAT44(uStack_e0._4_4_,0x3f800000);
    if (*(long *)(param_3 + 0x58) != 0) goto LAB_1072fe75c;
  }
  uStack_100 = 0;
  uStack_fc = 0;
  func_0x0001073012b4();
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  uStack_f8._0_4_ = 0;
  uStack_f8._4_4_ = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined4 *)(param_3 + 0x60) = 0x3f800000;
  FUN_1072fff60(&uStack_100);
  func_0x000107301308();
  plVar16 = *(long **)(param_3 + 0xb0);
  ppuStack_188 = (undefined **)0x0;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_178 = (undefined **)0x0;
  ppuVar10 = &puStack_160;
  while (ppuVar10 = (undefined **)*ppuVar10, ppuVar10 != (undefined **)0x0) {
    uStack_100 = CONCAT31(uStack_100._1_3_,0xe);
    uStack_fc = (uint)ppuVar10[2];
    uStack_f8._0_4_ = (uint)((ulong)ppuVar10[2] >> 0x20);
    func_0x00010786ea9c(&ppuStack_148,&uStack_100);
    puVar23 = apuStack_130[0];
    ppuVar7 = ppuStack_138;
    ppuVar6 = ppuStack_140;
    ppuVar5 = ppuStack_148;
    uVar9 = ppuStack_180 == ppuStack_178;
    if (ppuStack_180 < ppuStack_178) {
      *ppuStack_180 = (undefined *)ppuStack_138;
      ppuStack_180[1] = (undefined *)ppuVar6;
      ppuStack_180[2] = (undefined *)ppuStack_148;
      ppuStack_180[3] = puVar23;
      ppuStack_180 = ppuStack_180 + 4;
    }
    else {
      pppuVar12 = &ppuStack_188;
      FUN_1072ffd80(pppuVar12,((long)ppuStack_180 - (long)ppuStack_188 >> 5) + 1);
      FUN_1072ffdcc(&uStack_100,pppuVar12,(long)ppuStack_180 - (long)ppuStack_188 >> 5,&ppuStack_178
                   );
      *ppuStack_f0 = (undefined *)ppuVar7;
      ppuStack_f0[1] = (undefined *)ppuVar6;
      ppuStack_f0[2] = (undefined *)ppuVar5;
      ppuStack_f0[3] = puVar23;
      ppuStack_f0 = ppuStack_f0 + 4;
      func_0x000107301264(CONCAT44(uStack_f8._4_4_,(uint)uStack_f8));
      ppuVar6 = ppuStack_f0;
      ppuVar5 = ppuStack_178;
      ppuStack_178 = ppuStack_e8;
      ppuStack_180 = ppuStack_f0;
      ppuStack_f0 = ppuStack_188;
      ppuStack_e8 = ppuVar5;
      uStack_100 = (uint)ppuStack_188;
      uStack_fc = (uint)((ulong)ppuStack_188 >> 0x20);
      ppuStack_188 = param_4;
      uStack_f8._0_4_ = uStack_100;
      uStack_f8._4_4_ = uStack_fc;
      FUN_1072ffe54(&uStack_100);
      ppuStack_180 = ppuVar6;
    }
  }
  lStack_1d8 = param_3;
  FUN_107300854(auStack_1d0,&ppuStack_170);
  FUN_1072fec48(&ppuStack_148,param_3 + 0xe8);
  FUN_1072ffea4(apuStack_130,&lStack_1d8);
  unaff_x19 = (undefined ***)0x40;
  __Znwm();
  unaff_x19[1] = (undefined **)0x0;
  unaff_x19[2] = (undefined **)0x0;
  *unaff_x19 = &PTR_DAT_11099e640;
  FUN_1073008ec(&uStack_100,&ppuStack_148);
  pppuVar12 = (undefined ***)0x50;
  __Znwm();
  *pppuVar12 = &PTR_SUB_11099e690;
  FUN_1073008ec(pppuVar12 + 1,&uStack_100);
  pppuStack_a0 = pppuVar12;
  FUN_107300df0(unaff_x19 + 3,&ppuStack_b8);
  func_0x000107300ebc(&ppuStack_b8);
  FUN_1072feb30(&uStack_100);
  func_0x000107300f08(0);
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  pppuStack_198 = unaff_x19 + 3;
  pppuStack_190 = unaff_x19;
  (**(code **)(*plVar16 + 0x10))(plVar16,&ppuStack_188,&pppuStack_198);
  func_0x000107300f3c(&pppuStack_198);
  func_0x000107300f14(&uStack_1a8);
  FUN_1072feb30(&ppuStack_148);
  FUN_1072fff60(auStack_1d0);
  func_0x0001072fffb8(&ppuStack_188);
LAB_1072fe998:
  pppuVar12 = &ppuStack_170;
  FUN_1072fff60();
  func_0x000107301118(uStack_98);
  if ((bool)uVar9) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  FUN_1072ffd44(&ppuStack_148);
  FUN_1072ffd44(&ppuStack_b8);
  func_0x000107301308();
  pppuVar12 = &ppuStack_170;
  FUN_1072fff60();
  func_0x0001073011a4();
  FUN_1072fff60(pppuVar12 + 4);
  func_0x00010725c0a0();
  if (pppuVar12 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072feb30; end: 1072feb57;  */

undefined8 FUN_1072feb30(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1072fff60(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072feb58; end: 1072feb8b;  */

int FUN_1072feb58(long param_1)

{
  int iVar1;
  undefined4 uStack_14;
  
  func_0x00010785f1f4();
  uStack_14 = 0;
  param_1 = param_1 + 0x6b0;
  FUN_1072b86c8(param_1,&uStack_14);
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Entry: 1072feb8c; end: 1072fec47;  */

void FUN_1072feb8c(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_128 [30];
  undefined8 uStack_38;
  
  func_0x000107301228();
  func_0x0001073011bc();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (param_3 - (long)param_2) / 0x58;
  if (uVar1 <= param_4) {
    param_4 = uVar1;
  }
  uVar3 = (param_5 & 1) == 0;
  lVar2 = param_4 * 0x58;
  uStack_38 = extraout_x8;
  if ((bool)uVar3) {
    lVar2 = param_3 - (long)param_2;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -0x58) {
    FUN_1072d6ffc(auStack_128,unaff_x20);
    param_2 = auStack_128;
    FUN_10726d718();
    func_0x000107269e60(auStack_128);
    unaff_x20 = unaff_x20 + 0x58;
  }
  func_0x000107301118(uStack_38);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_10726e43c();
    func_0x0001073011a4();
    uVar6 = param_2[1];
    uVar5 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x000107301254();
      } while (extraout_w10 != 0);
    }
    uVar4 = param_2[2];
    unaff_x19[1] = uVar6;
    *unaff_x19 = uVar5;
    unaff_x19[2] = uVar4;
    func_0x0001073012dc();
    func_0x0001073012f0();
    return;
  }
  return;
}



/* Entry: 1072fec48; end: 1072fec93;  */

void FUN_1072fec48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107301254();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  func_0x0001073012dc();
  func_0x0001073012f0();
  return;
}



/* Entry: 1072fec94; end: 1072fecbb;  */

long FUN_1072fec94(long param_1)

{
  FUN_1072fff60(param_1 + 0x28);
  func_0x0001072fff88(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1072fff48(param_1,0);
  return param_1;
}



/* Entry: 1072fecbc; end: 1072fed8b;  */

undefined8 FUN_1072fecbc(long *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = (ulong)param_2 + 0x9e3779b97f4a7c15;
    uVar3 = uVar3 * 0x1000 + (ulong)param_3 + (uVar3 >> 4) + 0x9e3779b97f4a7c15 ^ uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar3 != uVar7) break;
          if (*(uint *)(plVar6 + 2) == param_2 && *(uint *)((long)plVar6 + 0x14) == param_3) {
            return 1;
          }
        }
        if ((uVar2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar2 <= uVar7) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar7 / uVar2;
          }
          uVar7 = uVar7 - uVar1 * uVar2;
        }
      } while (uVar7 == uVar5);
    }
  }
  return 0;
}



/* Entry: 1072fed8c; end: 1072fed97;  */

long * FUN_1072fed8c(long *param_1)

{
  long lVar1;
  
  func_0x000107301318();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072fed98; end: 1072fedd7;  */

long * FUN_1072fed98(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072fedd8; end: 1072ff463;  */

void FUN_1072fedd8(undefined8 param_1,undefined8 param_2,double *param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  bool bVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double extraout_x8;
  double extraout_x8_00;
  double *pdVar13;
  double *extraout_x9;
  double *extraout_x9_00;
  double *pdVar14;
  ulong uVar15;
  long lVar16;
  double *extraout_x10;
  double *extraout_x10_00;
  ulong uVar17;
  double *extraout_x11;
  long lVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  ulong uVar22;
  double *unaff_x19;
  double *unaff_x20;
  undefined8 unaff_x30;
  
  pdVar7 = param_3;
  func_0x000107301228();
LAB_1072fee00:
  pdVar8 = unaff_x20 + -2;
  pdVar9 = unaff_x19;
LAB_1072fee10:
  while( true ) {
    unaff_x19 = pdVar9;
    uVar10 = (long)unaff_x20 - (long)unaff_x19 >> 4;
    switch(uVar10) {
    case 0:
    case 1:
      goto LAB_1072ff450;
    case 2:
      if (unaff_x20[-1] < unaff_x19[1]) {
        func_0x0001073011d8();
      }
      goto LAB_1072ff450;
    case 3:
      pdVar7 = unaff_x19 + 2;
      func_0x000107301390();
      dVar11 = pdVar7[1];
      if (unaff_x19[1] <= dVar11) {
        if (pdVar8[1] < dVar11) {
          dVar11 = *pdVar7;
          *pdVar7 = *pdVar8;
          *pdVar8 = dVar11;
          dVar11 = pdVar7[1];
          pdVar7[1] = pdVar8[1];
          pdVar8[1] = dVar11;
          if (pdVar7[1] < unaff_x19[1]) {
            dVar11 = *unaff_x19;
            *unaff_x19 = *pdVar7;
            *pdVar7 = dVar11;
            dVar11 = unaff_x19[1];
            unaff_x19[1] = pdVar7[1];
            pdVar7[1] = dVar11;
            return;
          }
        }
      }
      else {
        dVar12 = *unaff_x19;
        if (dVar11 <= pdVar8[1]) {
          *unaff_x19 = *pdVar7;
          *pdVar7 = dVar12;
          dVar11 = unaff_x19[1];
          unaff_x19[1] = pdVar7[1];
          pdVar7[1] = dVar11;
          if (dVar11 <= pdVar8[1]) {
            return;
          }
          dVar11 = *pdVar7;
          *pdVar7 = *pdVar8;
          *pdVar8 = dVar11;
          dVar11 = pdVar7[1];
          pdVar7[1] = pdVar8[1];
        }
        else {
          *unaff_x19 = *pdVar8;
          *pdVar8 = dVar12;
          dVar11 = unaff_x19[1];
          unaff_x19[1] = pdVar8[1];
        }
        pdVar8[1] = dVar11;
      }
      return;
    case 4:
      func_0x000107301370();
      func_0x000107301390(unaff_x19);
      func_0x00010730129c();
      FUN_1072ff464();
      bVar4 = pdVar8[1] < pdVar7[1];
      if (((bVar4) && (func_0x000107301168(), bVar4)) && (func_0x000107301138(), bVar4)) {
        func_0x0001073011fc();
      }
      return;
    case 5:
      func_0x000107301370();
      pdVar9 = unaff_x19 + 6;
      func_0x000107301390(unaff_x19);
      func_0x00010730129c();
      FUN_1072ff548();
      if (pdVar8[1] < pdVar9[1]) {
        dVar11 = *pdVar9;
        *pdVar9 = *pdVar8;
        *pdVar8 = dVar11;
        dVar11 = pdVar9[1];
        pdVar9[1] = pdVar8[1];
        pdVar8[1] = dVar11;
        bVar4 = pdVar9[1] < pdVar7[1];
        if (((bVar4) && (func_0x000107301168(), bVar4)) && (func_0x000107301138(), bVar4)) {
          func_0x0001073011fc();
        }
      }
      return;
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (unaff_x19 != unaff_x20) {
          pdVar7 = unaff_x19 + 3;
          while (pdVar9 = unaff_x19 + 2, pdVar9 != unaff_x20) {
            dVar11 = unaff_x19[3];
            if (dVar11 < unaff_x19[1]) {
              dVar12 = *pdVar9;
              pdVar8 = pdVar7;
              do {
                pdVar13 = pdVar8;
                pdVar13[-1] = pdVar13[-3];
                pdVar8 = pdVar13 + -2;
                *pdVar13 = *pdVar8;
              } while (dVar11 < pdVar13[-4]);
              pdVar13[-3] = dVar12;
              *pdVar8 = dVar11;
            }
            pdVar7 = pdVar7 + 2;
            unaff_x19 = pdVar9;
          }
        }
        goto LAB_1072ff450;
      }
      if (unaff_x19 == unaff_x20) goto LAB_1072ff450;
      lVar20 = 0;
      pdVar7 = unaff_x19;
      goto LAB_1072ff180;
    }
    if (param_3 == (double *)0x0) {
      if (unaff_x19 == unaff_x20) goto LAB_1072ff450;
      uVar15 = uVar10 - 2 >> 1;
      uVar17 = uVar15;
      goto LAB_1072ff208;
    }
    pdVar9 = unaff_x19 + (uVar10 & 0xfffffffffffffffe);
    if (uVar10 < 0x81) {
      func_0x000107301300(pdVar9,unaff_x19);
    }
    else {
      func_0x000107301300(unaff_x19,pdVar9);
      FUN_1072ff464(unaff_x19 + 2,pdVar9 + -2,unaff_x20 + -4);
      FUN_1072ff464(unaff_x19 + 4,pdVar9 + 2,unaff_x20 + -6);
      pdVar7 = pdVar9 + 2;
      FUN_1072ff464(pdVar9 + -2,pdVar9);
      dVar11 = *unaff_x19;
      *unaff_x19 = *pdVar9;
      *pdVar9 = dVar11;
      dVar11 = unaff_x19[1];
      unaff_x19[1] = pdVar9[1];
      pdVar9[1] = dVar11;
    }
    param_3 = (double *)((long)param_3 + -1);
    if ((param_4 & 1) != 0) break;
    dVar11 = unaff_x19[1];
    if (unaff_x19[-1] < dVar11) goto LAB_1072feed0;
    pdVar13 = unaff_x19;
    if (unaff_x20[-1] <= dVar11) {
      do {
        pdVar9 = pdVar13 + 2;
        if (unaff_x20 <= pdVar9) break;
        pdVar5 = pdVar13 + 3;
        pdVar13 = pdVar9;
      } while (*pdVar5 <= dVar11);
    }
    else {
      do {
        pdVar9 = pdVar13 + 2;
        pdVar5 = pdVar13 + 3;
        pdVar13 = pdVar9;
      } while (*pdVar5 <= dVar11);
    }
    pdVar13 = unaff_x20;
    pdVar5 = unaff_x20;
    if (pdVar9 < unaff_x20) {
      do {
        pdVar5 = pdVar13 + -2;
        pdVar6 = pdVar13 + -1;
        pdVar13 = pdVar5;
      } while (dVar11 < *pdVar6);
    }
    dVar12 = *unaff_x19;
    while (pdVar9 < pdVar5) {
      dVar21 = *pdVar9;
      *pdVar9 = *pdVar5;
      *pdVar5 = dVar21;
      dVar21 = pdVar9[1];
      pdVar9[1] = pdVar5[1];
      pdVar5[1] = dVar21;
      do {
        pdVar13 = pdVar9 + 3;
        pdVar9 = pdVar9 + 2;
      } while (*pdVar13 <= dVar11);
      do {
        pdVar13 = pdVar5 + -1;
        pdVar5 = pdVar5 + -2;
      } while (dVar11 < *pdVar13);
    }
    if (unaff_x19 != pdVar9 + -2) {
      *unaff_x19 = pdVar9[-2];
      unaff_x19[1] = pdVar9[-1];
    }
    param_4 = 0;
    pdVar9[-2] = dVar12;
    pdVar9[-1] = dVar11;
  }
  dVar11 = unaff_x19[1];
LAB_1072feed0:
  dVar12 = *unaff_x19;
  lVar20 = 0;
  do {
    lVar16 = lVar20;
    lVar20 = lVar16 + 0x10;
  } while (*(double *)((long)unaff_x19 + lVar16 + 0x18) < dVar11);
  pdVar9 = (double *)((long)unaff_x19 + lVar20);
  uVar3 = lVar16 < 0;
  pdVar13 = unaff_x20;
  if (lVar20 == 0x10) {
    do {
      pdVar5 = pdVar13;
      bVar4 = (long)pdVar9 - (long)pdVar5 < 0;
      pdVar6 = pdVar5;
      pdVar14 = pdVar9;
      if (pdVar5 <= pdVar9) break;
      func_0x000107301348();
      dVar12 = extraout_x8_00;
      pdVar9 = extraout_x9_00;
      pdVar5 = extraout_x10_00;
      pdVar13 = extraout_x11;
      pdVar6 = extraout_x10_00;
      pdVar14 = extraout_x9_00;
    } while (!bVar4);
  }
  else {
    do {
      func_0x000107301348();
      pdVar5 = extraout_x10;
      pdVar9 = extraout_x9;
      pdVar6 = extraout_x10;
      pdVar14 = extraout_x9;
      dVar12 = extraout_x8;
    } while (!(bool)uVar3);
  }
  while (pdVar9 < pdVar5) {
    dVar21 = *pdVar9;
    *pdVar9 = *pdVar5;
    *pdVar5 = dVar21;
    dVar21 = pdVar9[1];
    pdVar9[1] = pdVar5[1];
    pdVar5[1] = dVar21;
    do {
      pdVar13 = pdVar9 + 3;
      pdVar9 = pdVar9 + 2;
    } while (*pdVar13 < dVar11);
    do {
      pdVar13 = pdVar5 + -1;
      pdVar5 = pdVar5 + -2;
    } while (dVar11 <= *pdVar13);
  }
  pdVar13 = pdVar9 + -2;
  if (unaff_x19 != pdVar13) {
    *unaff_x19 = pdVar9[-2];
    unaff_x19[1] = pdVar9[-1];
  }
  pdVar9[-2] = dVar12;
  pdVar9[-1] = dVar11;
  if (pdVar6 <= pdVar14) {
    pdVar5 = unaff_x19;
    FUN_1072ff618(unaff_x19,pdVar13);
    pdVar6 = pdVar9;
    FUN_1072ff618(pdVar9,unaff_x20);
    if ((int)pdVar6 != 0) goto LAB_1072ff0cc;
    if (((ulong)pdVar5 & 1) != 0) goto LAB_1072fee10;
  }
  pdVar7 = param_3;
  FUN_1072fedd8(unaff_x19,pdVar13,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_1072fee10;
LAB_1072ff180:
  pdVar9 = pdVar7 + 2;
  if (pdVar9 == unaff_x20) goto LAB_1072ff450;
  dVar11 = pdVar7[3];
  if (dVar11 < pdVar7[1]) {
    dVar12 = *pdVar9;
    lVar16 = lVar20;
    do {
      lVar18 = lVar16;
      puVar1 = (undefined8 *)((long)unaff_x19 + lVar18);
      puVar1[2] = *puVar1;
      puVar1[3] = puVar1[1];
      pdVar7 = unaff_x19;
      if (lVar18 == 0) goto LAB_1072ff1dc;
      lVar16 = lVar18 + -0x10;
    } while (dVar11 < (double)puVar1[-1]);
    pdVar7 = (double *)((long)unaff_x19 + lVar18);
LAB_1072ff1dc:
    *pdVar7 = dVar12;
    pdVar7[1] = dVar11;
  }
  lVar20 = lVar20 + 0x10;
  pdVar7 = pdVar9;
  goto LAB_1072ff180;
LAB_1072ff208:
  do {
    if ((long)uVar17 <= (long)uVar15) {
      uVar19 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
      pdVar7 = unaff_x19 + uVar19 * 2;
      uVar22 = uVar17 * 2 + 2;
      if (((long)uVar22 < (long)uVar10) && (pdVar7[1] < pdVar7[3])) {
        pdVar7 = pdVar7 + 2;
        uVar19 = uVar22;
      }
      pdVar9 = unaff_x19 + uVar17 * 2;
      dVar11 = pdVar9[1];
      if (dVar11 <= pdVar7[1]) {
        dVar12 = *pdVar9;
        do {
          pdVar8 = pdVar7;
          *pdVar9 = *pdVar8;
          pdVar9[1] = pdVar8[1];
          if ((long)uVar15 < (long)uVar19) break;
          uVar2 = uVar19 << 1 | 1;
          pdVar7 = unaff_x19 + uVar2 * 2;
          uVar22 = uVar19 * 2 + 2;
          uVar19 = uVar2;
          if (((long)uVar22 < (long)uVar10) && (pdVar7[1] < pdVar7[3])) {
            pdVar7 = pdVar7 + 2;
            uVar19 = uVar22;
          }
          pdVar9 = pdVar8;
        } while (dVar11 <= pdVar7[1]);
        *pdVar8 = dVar12;
        pdVar8[1] = dVar11;
      }
    }
    uVar17 = uVar17 - 1;
  } while (-1 < (long)uVar17);
  do {
    if ((long)uVar10 < 2) {
LAB_1072ff450:
      func_0x000107301390(unaff_x30);
      return;
    }
    dVar11 = *unaff_x19;
    dVar12 = unaff_x19[1];
    pdVar7 = unaff_x19;
    uVar17 = 0;
    do {
      uVar22 = uVar17 << 1 | 1;
      uVar15 = uVar17 * 2 + 2;
      pdVar9 = pdVar7 + uVar17 * 2 + 2;
      if (((long)uVar15 < (long)uVar10) && (pdVar7[uVar17 * 2 + 3] < pdVar7[uVar17 * 2 + 5])) {
        pdVar9 = pdVar7 + uVar17 * 2 + 4;
        uVar22 = uVar15;
      }
      *pdVar7 = *pdVar9;
      pdVar7[1] = pdVar9[1];
      pdVar7 = pdVar9;
      uVar17 = uVar22;
    } while ((long)uVar22 <= (long)(uVar10 - 2 >> 1));
    if (pdVar9 == unaff_x20 + -2) {
      *pdVar9 = dVar11;
LAB_1072ff3d8:
      pdVar9[1] = dVar12;
    }
    else {
      *pdVar9 = unaff_x20[-2];
      pdVar9[1] = unaff_x20[-1];
      unaff_x20[-2] = dVar11;
      unaff_x20[-1] = dVar12;
      lVar20 = (long)pdVar9 + (0x10 - (long)unaff_x19) >> 4;
      if (1 < lVar20) {
        uVar17 = lVar20 - 2U >> 1;
        dVar12 = pdVar9[1];
        if ((unaff_x19 + uVar17 * 2)[1] < dVar12) {
          dVar11 = *pdVar9;
          pdVar8 = unaff_x19 + uVar17 * 2;
          do {
            pdVar9 = pdVar8;
            *pdVar7 = *pdVar9;
            pdVar7[1] = pdVar9[1];
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            pdVar7 = pdVar9;
            pdVar8 = unaff_x19 + uVar17 * 2;
          } while ((unaff_x19 + uVar17 * 2)[1] < dVar12);
          *pdVar9 = dVar11;
          goto LAB_1072ff3d8;
        }
      }
    }
    uVar10 = uVar10 - 1;
    unaff_x20 = unaff_x20 + -2;
  } while( true );
LAB_1072ff0cc:
  unaff_x20 = pdVar13;
  if (((ulong)pdVar5 & 1) != 0) goto LAB_1072ff450;
  goto LAB_1072fee00;
}



/* Entry: 1072ff464; end: 1072ff547;  */

void FUN_1072ff464(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)param_2[1];
  if ((double)param_1[1] <= dVar2) {
    if ((double)param_3[1] < dVar2) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar1;
      if ((double)param_2[1] < (double)param_1[1]) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
        uVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar1;
        return;
      }
    }
  }
  else {
    uVar1 = *param_1;
    if (dVar2 <= (double)param_3[1]) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      dVar2 = (double)param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = dVar2;
      if (dVar2 <= (double)param_3[1]) {
        return;
      }
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_2[1];
      param_2[1] = param_3[1];
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar1;
      uVar1 = param_1[1];
      param_1[1] = param_3[1];
    }
    param_3[1] = uVar1;
  }
  return;
}



/* Entry: 1072ff548; end: 1072ff593;  */

void FUN_1072ff548(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  
  func_0x00010730129c();
  FUN_1072ff464();
  bVar1 = *(double *)(param_4 + 8) < *(double *)(param_3 + 8);
  if (((bVar1) && (func_0x000107301168(), bVar1)) && (func_0x000107301138(), bVar1)) {
    func_0x0001073011fc();
  }
  return;
}



/* Entry: 1072ff594; end: 1072ff617;  */

void FUN_1072ff594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  func_0x00010730129c();
  FUN_1072ff548();
  if ((double)param_5[1] < (double)param_4[1]) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar2 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar2;
    bVar1 = (double)param_4[1] < *(double *)(param_3 + 8);
    if (((bVar1) && (func_0x000107301168(), bVar1)) && (func_0x000107301138(), bVar1)) {
      func_0x0001073011fc();
    }
  }
  return;
}



/* Entry: 1072ff618; end: 1072ff76f;  */

void FUN_1072ff618(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  double dVar9;
  
  func_0x000107301228();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if ((double)unaff_x20[-1] < (double)unaff_x19[1]) {
      func_0x0001073011d8();
    }
    break;
  case 3:
    FUN_1072ff464();
    break;
  case 4:
    func_0x000107301370(1);
    FUN_1072ff548();
    break;
  case 5:
    func_0x000107301370(1);
    FUN_1072ff594();
    break;
  default:
    func_0x000107301300();
    lVar2 = 0;
    iVar3 = 0;
    puVar7 = unaff_x19 + 6;
    puVar8 = unaff_x19 + 4;
    while (puVar4 = puVar7, puVar4 != unaff_x20) {
      dVar9 = (double)puVar4[1];
      if (dVar9 < (double)puVar8[1]) {
        uVar5 = *puVar4;
        lVar1 = lVar2;
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar6 + 0x30) =
               *(undefined8 *)((long)unaff_x19 + lVar6 + 0x20);
          *(undefined8 *)((long)unaff_x19 + lVar6 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar6 + 0x28);
          puVar7 = unaff_x19;
          if (lVar6 == -0x20) goto LAB_1072ff718;
          lVar1 = lVar6 + -0x10;
        } while (dVar9 < *(double *)((long)unaff_x19 + lVar6 + 0x18));
        puVar7 = (undefined8 *)((long)unaff_x19 + lVar6 + 0x20);
LAB_1072ff718:
        *puVar7 = uVar5;
        puVar7[1] = dVar9;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar2 = lVar2 + 0x10;
      puVar8 = puVar4;
      puVar7 = puVar4 + 2;
    }
  }
  return;
}



/* Entry: 1072ff770; end: 1072ff98f;  */

undefined8 FUN_1072ff770(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar6;
  long extraout_x10;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  long lVar12;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar12 = *param_2;
  plVar5 = param_1;
  func_0x00010730137c((int)*param_2);
  uVar11 = extraout_x8 + extraout_x10;
  uVar11 = extraout_x9 + uVar11 * 0x1000 + (uVar11 >> 4) + extraout_x10 ^ uVar11;
  uVar10 = plVar5[1];
  if (uVar10 != 0) {
    uVar7 = uVar10 - 1;
    if ((uVar10 & uVar7) == 0) {
      unaff_x23 = uVar11 & uVar7;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar9 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1072ff840;
          uVar9 = plVar8[1];
          if (uVar9 != uVar11) break;
          if (*(int *)(plVar8 + 2) == (int)extraout_x8 &&
              *(int *)((long)plVar8 + 0x14) == (int)extraout_x9) {
            return 0;
          }
        }
        if ((uVar10 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar10 <= uVar9) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar9 / uVar10;
          }
          uVar9 = uVar9 - uVar2 * uVar10;
        }
      } while (uVar9 == unaff_x23);
    }
  }
LAB_1072ff840:
  plVar8 = param_1 + 2;
  func_0x000107301310();
  uStack_58 = 1;
  *plVar5 = 0;
  plVar5[1] = uVar11;
  plVar5[2] = lVar12;
  plStack_60 = plVar8;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    plStack_68 = plVar5;
    func_0x00010730135c(uVar10 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9_00;
    }
    FUN_1072ff990(param_1,uVar1);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar7 * uVar10;
      }
    }
  }
  lVar12 = *param_1;
  plVar6 = *(long **)(lVar12 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar12 + unaff_x23 * 8) = plVar8;
    if (*plVar5 != 0) {
      uVar11 = *(ulong *)(*plVar5 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar7 * uVar10;
      }
      *(long **)(lVar12 + uVar11 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar6;
    *plVar6 = (long)plVar5;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1072ffb38(&plStack_68);
  return 1;
}



/* Entry: 1072ff990; end: 1072ffb03;  */

void FUN_1072ff990(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 > param_2 || param_2 == uVar7) {
    if (uVar7 <= param_2) {
      return;
    }
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107301234();
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (uVar7 <= param_2) {
      return;
    }
    if (param_2 == 0) {
      func_0x0001073012b4();
      param_1[1] = 0;
      return;
    }
  }
  uVar7 = param_2;
  FUN_1072ffb1c(param_2);
  FUN_1072ffb04(param_1,uVar7);
  param_1[1] = param_2;
  lVar1 = *param_1;
  for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
    *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
  }
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    uVar5 = plVar2[1];
    uVar4 = param_2 - 1;
    uVar7 = 0;
    if (param_2 != 0) {
      uVar7 = uVar5 / param_2;
    }
    uVar6 = uVar5;
    if (param_2 <= uVar5) {
      uVar6 = uVar5 - uVar7 * param_2;
    }
    if ((param_2 & uVar4) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
    while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
      uVar7 = plVar2[1];
      if ((param_2 & uVar4) == 0) {
        uVar7 = uVar7 & uVar4;
      }
      else if (param_2 <= uVar7) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar5 * param_2;
      }
      if (uVar7 != uVar6) {
        if (*(long *)(lVar1 + uVar7 * 8) == 0) {
          *(long **)(lVar1 + uVar7 * 8) = plVar3;
          uVar6 = uVar7;
        }
        else {
          *plVar3 = *plVar2;
          *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
          **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
          plVar2 = plVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 1072ffb04; end: 1072ffb1b;  */

void FUN_1072ffb04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ffb1c; end: 1072ffb37;  */

long * FUN_1072ffb1c(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    param_1 = (long *)((long)param_1 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072ffb38; end: 1072ffb8f;  */

long * FUN_1072ffb38(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072ffb90; end: 1072ffc17;  */

long * FUN_1072ffb90(long *param_1,uint *param_2,uint param_3,uint param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uStack_48;
  uint uStack_44;
  
  puVar2 = param_2;
  plVar4 = param_1;
  do {
    uVar3 = (uint)plVar4;
    uVar5 = param_3;
    if ((uint)param_2 < uVar3) {
      return param_1;
    }
    while (uVar5 <= param_4) {
      param_1 = *(long **)(param_5 + 0x18);
      uStack_48 = uVar3;
      uStack_44 = uVar5;
      if (param_1 == (long *)0x0) {
        func_0x000104bfeb48();
        puVar1 = *(uint **)(puVar2 + 6);
        if (puVar1 == (uint *)0x0) {
          param_1[3] = 0;
        }
        else if (puVar1 == puVar2) {
          param_1[3] = (long)param_1;
          (**(code **)(**(long **)(puVar2 + 6) + 0x18))(*(long **)(puVar2 + 6),param_1);
        }
        else {
          func_0x00010730133c();
          param_1[3] = (long)puVar1;
        }
        return param_1;
      }
      puVar2 = &uStack_48;
      (**(code **)(*param_1 + 0x30))();
      uVar5 = uVar5 + 1;
      if (((ulong)param_1 & 1) == 0) {
        return param_1;
      }
    }
    plVar4 = (long *)(ulong)(uVar3 + 1);
  } while( true );
}



/* Entry: 1072ffc18; end: 1072ffc6f;  */

long FUN_1072ffc18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    func_0x00010730133c();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1072ffc70; end: 1072ffc77;  */

void FUN_1072ffc70(void)

{
  return;
}



/* Entry: 1072ffc78; end: 1072ffca7;  */

void FUN_1072ffc78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107301310();
  *puVar1 = &PTR_FUN_11099e520;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1072ffca8; end: 1072ffccf;  */

void FUN_1072ffca8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099e520;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072ffcd0; end: 1072ffd37;  */

undefined8 FUN_1072ffcd0(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010730129c();
  uVar1 = *(ulong *)(param_1 + 8);
  FUN_1072fecbc(uVar1,*param_2,*(undefined4 *)(unaff_x19 + 4));
  if ((uVar1 & 1) == 0) {
    func_0x0001072fed88(*(undefined8 *)(unaff_x20 + 0x10));
  }
  return 1;
}



/* Entry: 1072ffd38; end: 1072ffd43;  */

undefined ** FUN_1072ffd38(void)

{
  return &PTR_DAT_11099e590;
}



/* Entry: 1072ffd44; end: 1072ffd7f;  */

long FUN_1072ffd44(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001073012e4(uVar1);
  return param_1;
}



/* Entry: 1072ffd80; end: 1072ffdcb;  */

/* WARNING: Possible PIC construction at 0x0001072ffdbc: Changing call to branch */

long * FUN_1072ffd80(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x7ffffffffffffff;
    }
    return plVar2;
  }
  func_0x000107301318();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    param_4 = 0;
  }
  else {
    func_0x0001072ffe14();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + (long)param_2 * 0x20;
  return param_1;
}



/* Entry: 1072ffdcc; end: 1072ffe37;  */

long * FUN_1072ffdcc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072ffe14();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1072ffe38; end: 1072ffe53;  */

long * FUN_1072ffe38(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1072ffe80();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072ffe54; end: 1072ffe7f;  */

long * FUN_1072ffe54(long *param_1)

{
  FUN_1072ffe80();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072ffe80; end: 1072ffea3;  */

void FUN_1072ffe80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1072ffea4; end: 1072fff23;  */

undefined8 * FUN_1072ffea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  param_1[2] = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  FUN_1072ff990(puVar1,param_2[2]);
  param_2 = param_2 + 3;
  while (param_2 = (undefined8 *)*param_2, param_2 != (undefined8 *)0x0) {
    FUN_1072ff770(puVar1,param_2 + 2);
  }
  return param_1;
}



/* Entry: 1072fff24; end: 1072fff47;  */

undefined8 FUN_1072fff24(undefined8 param_1)

{
  FUN_1072fff48(param_1,0);
  return param_1;
}



/* Entry: 1072fff48; end: 1072fff5f;  */

void FUN_1072fff48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072fff60; end: 1072fffeb;  */

long FUN_1072fff60(long param_1)

{
  func_0x0001072fff88(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1072fff48(param_1,0);
  return param_1;
}


