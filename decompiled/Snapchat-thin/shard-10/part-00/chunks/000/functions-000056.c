/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073dfee0; end: 1073dff1b;  */

void FUN_1073dfee0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 1073dff1c; end: 1073dffe3;  */

long FUN_1073dff1c(long param_1)

{
  func_0x0001073dff40(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073dffe4; end: 1073dffeb;  */

void FUN_1073dffe4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001073e1650(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0xd0) {
    FUN_1073dee2c(lVar1 + -200);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073dffec; end: 1073e0027;  */

void FUN_1073dffec(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001073e1650();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0xd0) {
    FUN_1073dee2c(lVar1 + -200);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073e0028; end: 1073e0087;  */

void FUN_1073e0028(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1073e0088();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1073dd578(param_1);
  return;
}



/* Entry: 1073e0088; end: 1073e00c3;  */

long FUN_1073e0088(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 1073e00c4; end: 1073e0127;  */

undefined8 FUN_1073e00c4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001073e00f0(&uStack_28);
  return param_1;
}



/* Entry: 1073e0128; end: 1073e012f;  */

void FUN_1073e0128(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001073dfdc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073e0130; end: 1073e0237;  */

void FUN_1073e0130(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001073dfdc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073e0238; end: 1073e0253;  */

void FUN_1073e0238(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[2] = param_2[2];
    return;
  }
  lVar1 = *param_3;
  func_0x000107277f30();
  param_1[2] = *(undefined8 *)(lVar1 + 0x10);
  return;
}



/* Entry: 1073e0254; end: 1073e0273;  */

void FUN_1073e0254(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1073e0424(&uStack_18);
  return;
}



/* Entry: 1073e0274; end: 1073e0303;  */

void FUN_1073e0274(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x5d0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_1109ac3a0;
  FUN_107440ef0(param_1,puVar2,param_3,param_4);
  *param_2 = puVar2;
  param_2[1] = puVar1;
  return;
}



/* Entry: 1073e0304; end: 1073e0307;  */

void FUN_1073e0304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ac3a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073e0308; end: 1073e031b;  */

void FUN_1073e0308(void)

{
  func_0x0001073e0328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e031c; end: 1073e0337;  */

undefined8 * FUN_1073e031c(long param_1)

{
  func_0x0001074437d8(param_1 + 0x5a8);
  func_0x000104c2f714(param_1 + 0x1a0);
  func_0x00010744374c(param_1 + 0x188);
  func_0x0001074435a0(param_1 + 0x170);
  func_0x000107261dac(param_1 + 0x150);
  func_0x00010730b10c(param_1 + 0x130);
  func_0x00010730b10c(param_1 + 0x110);
  func_0x00010730b13c(param_1 + 0xd8);
  FUN_1073eb118(param_1 + 0xc0);
  FUN_1073eb118(param_1 + 0xa8);
  func_0x00010731e26c(param_1 + 0x90);
  func_0x00010731e26c(param_1 + 0x70);
  func_0x000107440e08(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073e0338; end: 1073e0397;  */

void FUN_1073e0338(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1073e0398();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1073e03d4(param_1);
  return;
}



/* Entry: 1073e0398; end: 1073e03d3;  */

long FUN_1073e0398(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 1073e03d4; end: 1073e0423;  */

void FUN_1073e03d4(long param_1)

{
  func_0x0001073e1b1c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073e0424; end: 1073e0427;  */

void FUN_1073e0424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073e0458(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073e0428; end: 1073e0457;  */

void FUN_1073e0428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073e0458(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073e0458; end: 1073e04d3;  */

void FUN_1073e0458(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_1073e04d4();
  if ((param_3 & 1) != 0) {
    FUN_1073e05e8(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x58;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1073e04d4; end: 1073e05e7;  */

undefined1  [16] FUN_1073e04d4(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x0001073e17d0();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar3 = uVar6 >> 0xc ^ param_2 >> 7;
  bVar1 = (byte)param_2;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar3);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar4 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7);
      uVar2 = 0;
      FUN_1073e0698(&stack0xffffffffffffff70,unaff_x19[1] + (long)puVar4 * 0x58);
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_1073e05a4;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar3 = lVar5 + uVar3;
  }
  FUN_1073e0604();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_1073e05a4:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 1073e05e8; end: 1073e0603;  */

void FUN_1073e05e8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_1073e08c0(*(long *)(param_1 + 8) + param_2 * 0x58,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073e0604; end: 1073e0697;  */

void FUN_1073e0604(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001073e17d0();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    FUN_1073e0778();
    param_1 = unaff_x19;
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar1 + -8) =
       *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  uVar2 = unaff_x19[2];
  *(byte *)(lVar1 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar1 + (uVar2 & (long)param_1 - 7U) + (uVar2 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 1073e0698; end: 1073e06af;  */

bool FUN_1073e0698(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1073e06b0; end: 1073e0777;  */

void FUN_1073e06b0(long *param_1,long param_2)

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
  FUN_10732f6dc();
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
      FUN_1073e07a8(param_1,lVar9 + (long)plVar3 * 0x58,lVar6);
    }
    lVar6 = lVar6 + 0x58;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1073e0778; end: 1073e07a7;  */

/* WARNING: Possible PIC construction at 0x0001073e06fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073e0700) */

long * FUN_1073e0778(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [32];
  
  uVar4 = param_1[2];
  if ((uVar4 < 9) ||
     (uVar2 = uVar4 * 0x19 + param_1[3] * -0x20 == 0, uVar4 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    puVar1 = &stack0xffffffffffffffb0;
    unaff_x22 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar6 = param_1[2];
    param_1[2] = uVar4 << 1 | 1;
    plVar5 = param_1;
    FUN_10732f6dc();
    lVar7 = 0;
    while( true ) {
      if (lVar6 == lVar7) {
        if (lVar6 != 0) {
          plVar3 = (long *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar3);
          return plVar3;
        }
        return plVar5;
      }
      if (-1 < *(char *)(unaff_x22 + lVar7)) break;
      lVar7 = lVar7 + 1;
      plVar3 = plVar3 + 0xb;
    }
    pcVar8 = (code *)0x1073e0700;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_70;
    func_0x0001073e15cc();
    plVar3 = (long *)&UNK_1109ac558;
    func_0x00010ae6c914();
    func_0x0001073e1584(extraout_x8);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar8 = FUN_1073e0880;
    ___stack_chk_fail();
  }
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar8;
  plVar5 = (long *)plVar3[6];
  if (plVar5 == (long *)0xffffffffffffffff) {
    plVar5 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar5,(undefined *)((long)plVar5 + (long)plVar3));
    *(undefined8 *)(puVar1 + -0x38) = 0xffffffffffffffff;
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar5;
}



/* Entry: 1073e07a8; end: 1073e07ff;  */

undefined8 FUN_1073e07a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  
  func_0x0001073e07d4(param_2,param_3);
  func_0x0001073e2174(param_3);
  func_0x0001073e08f4();
  func_0x0001073e1c7c();
  return unaff_x19;
}



/* Entry: 1073e0800; end: 1073e081b;  */

void FUN_1073e0800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1073e081c; end: 1073e083f;  */

void FUN_1073e081c(void)

{
  func_0x0001073e2174();
  func_0x0001073e08f4();
  func_0x0001073e1c7c();
  return;
}



/* Entry: 1073e0840; end: 1073e087f;  */

undefined * FUN_1073e0840(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x0001073e15cc();
  puVar1 = &UNK_1109ac558;
  func_0x00010ae6c914();
  func_0x0001073e1584(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 1073e0880; end: 1073e0897;  */

long FUN_1073e0880(undefined8 param_1,long param_2)

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



/* Entry: 1073e0898; end: 1073e08bf;  */

void FUN_1073e0898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1073e08c0(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073e08c0; end: 1073e0963;  */

long FUN_1073e08c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  FUN_1073e0800(lVar1 + 0x38,*param_3);
  return param_1;
}



/* Entry: 1073e0964; end: 1073e09bb;  */

void FUN_1073e0964(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  func_0x000107261fa8();
  func_0x000107261fa8(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107261fa8(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1073e09bc; end: 1073e09c3;  */

void FUN_1073e09bc(void)

{
  return;
}



/* Entry: 1073e09c4; end: 1073e09eb;  */

void FUN_1073e09c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073e2008();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109ac3f0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073e09ec; end: 1073e0a13;  */

void FUN_1073e09ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ac3f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073e0a14; end: 1073e0a4b;  */

long FUN_1073e0a14(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ac450);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073e0a4c; end: 1073e0a63;  */

undefined ** FUN_1073e0a4c(void)

{
  return &PTR_DAT_1109ac450;
}



/* Entry: 1073e0a64; end: 1073e0a77;  */

void FUN_1073e0a64(void)

{
  FUN_1073e1478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e0a78; end: 1073e0a7b;  */

void FUN_1073e0a78(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x380);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e0a7c; end: 1073e0d4b;  */

long ** FUN_1073e0a7c(undefined8 param_1,undefined8 param_2,long **param_3,long *param_4,
                     ulong param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long **pplVar8;
  undefined8 uVar9;
  ulong uVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar16;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x9;
  int extraout_w10;
  uint uVar17;
  long **unaff_x20;
  long lVar18;
  long *unaff_x24;
  long *plVar19;
  long **pplVar20;
  undefined1 auStack_a41 [9];
  long **pplStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  long lStack_a18;
  long *plStack_a10;
  long lStack_a08;
  undefined1 auStack_9f8 [24];
  long *plStack_9e0;
  long lStack_9d8;
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [56];
  undefined1 auStack_958 [56];
  undefined1 uStack_920;
  undefined8 uStack_918;
  undefined1 auStack_8e0 [400];
  undefined1 auStack_750 [64];
  undefined8 uStack_710;
  long *plStack_700;
  long **pplStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined1 *puStack_6e0;
  long lStack_6d8;
  long **pplStack_6d0;
  long *plStack_6c8;
  long **pplStack_6c0;
  undefined1 ***pppuStack_6b0;
  code *pcStack_6a8;
  long *aplStack_6a0 [2];
  long lStack_690;
  undefined1 *puStack_678;
  undefined8 uStack_670;
  long alStack_668 [3];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  char cStack_620;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long **pplStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  long lStack_5b0;
  long **pplStack_5a8;
  undefined1 **ppuStack_590;
  code *pcStack_588;
  undefined1 auStack_578 [400];
  undefined8 uStack_3e8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 auStack_3b8 [80];
  undefined1 auStack_368 [24];
  long *plStack_350;
  undefined1 auStack_2f0 [112];
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined1 auStack_220 [432];
  undefined8 uStack_70;
  
  func_0x0001073e1650();
  func_0x0001073e15cc();
  func_0x0001073e1790();
  func_0x0001073e1db8();
  func_0x0001073e1d80();
  func_0x000107288cd8(&plStack_280);
  func_0x0001073e1d98();
  func_0x0001073e20e4();
  func_0x0001073e1a6c();
  func_0x0001073e1e50();
  func_0x0001073e1ffc();
  func_0x0001073e1a44();
  func_0x0001073e1cfc();
  func_0x0001073e1a08(*(undefined4 *)(unaff_x20 + 0x6f));
  FUN_10745f750(auStack_368,unaff_x20[0x5e]);
  pplVar5 = (long **)unaff_x20[0x5f];
  FUN_10750a49c(auStack_2f0);
  func_0x0001073e19d0();
  func_0x0001073e1db0();
  func_0x0001073e2054();
  pplVar6 = pplVar5;
  func_0x0001073e18a4();
  func_0x0001073e1da0();
  plVar14 = plStack_350;
  lVar18 = 0;
  plVar19 = unaff_x20[0x1a];
  for (plVar12 = unaff_x20[0x19]; plVar12 != plVar19; plVar12 = plVar12 + 0xb) {
    unaff_x24 = plVar12 + 1;
    func_0x0001073e1fe4();
    lVar18 = (long)pplVar6 + lVar18;
  }
  func_0x0001073e2160();
  func_0x0001073e1fd8();
  plVar1 = unaff_x20[0x1a];
  pplVar20 = &plStack_280;
  plVar12 = unaff_x20[0x19];
  while (plVar12 != plVar1) {
    func_0x0001073e1afc();
    func_0x0001073e1db0();
    FUN_107330078(&plStack_280);
    func_0x0001073e2124();
    (*extraout_x8)();
    func_0x00010726236c(auStack_2f0);
    puVar7 = auStack_2f0;
    func_0x0001073e1684(&plStack_280);
    func_0x0001073e1e04();
    func_0x00010786967c();
    puStack_3c0 = puVar7;
    func_0x0001073e1c84();
    FUN_1073de9d8(auStack_3b8);
    func_0x0001073e18a4();
    func_0x0001073e1750();
    func_0x0001073e19d0();
    (*extraout_x9)(auStack_220);
    func_0x0001073e1c44();
    func_0x0001073e2048();
    pplVar6 = &plStack_280;
    func_0x0001073e03f8();
    func_0x0001073e1ea0();
    (*extraout_x8_00)();
    param_7 = lVar18 + -0x20;
    plVar19 = (long *)(lVar18 + -0x10);
    param_3 = pplVar6;
    func_0x0001073e18c8();
    func_0x0001073e1bf8();
    func_0x0001073e1da8();
    func_0x0001073e1bf0();
    plVar12 = (long *)(lVar18 + 0x20);
  }
  if ((plStack_350[0x15] != plStack_350[0x16]) ||
     (uVar3 = true, plStack_350[0x12] != plStack_350[0x13])) {
    func_0x0001073e2110();
    while (uVar3 = pplVar5 == unaff_x20, !(bool)uVar3) {
      plStack_280 = plStack_350;
      if (lVar18 != 0) {
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_268 = pplVar5[0xc];
      plStack_270 = pplVar5[0xb];
      lStack_278 = lVar18;
      if (pplVar5[0xc] != (long *)0x0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10 != 0);
      }
      func_0x0001073e1d20();
      func_0x0001073e08f4(&plStack_280);
      func_0x00010002c7d4();
      pplVar6 = pplVar5;
    }
  }
  func_0x0001073e1bb0();
  func_0x0001073e1d70();
  func_0x0001073e1d78();
  func_0x0001073e1584(uStack_70);
  if ((bool)uVar3) {
    return pplVar6;
  }
  ___stack_chk_fail();
  func_0x0001073e1bb0();
  func_0x0001073e1d70();
  func_0x0001073e1d78();
  func_0x0001073e1648();
  if (((ulong)pplVar6[0x77] & 1) != 0) {
    return (long **)0x1;
  }
  pcStack_3c8 = FUN_1073e0d4c;
  pplVar11 = pplVar6 + 99;
  puStack_3d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  uStack_3e8 = extraout_x8_01;
  func_0x000107751284(auStack_578);
  uVar3 = *(char *)(pplVar6 + 0x65) == '\x01';
  if ((bool)uVar3) {
    plVar16 = pplVar6[99];
    uVar3 = (char)plVar16[4] == '\x01';
    if ((bool)uVar3) {
      uVar17 = *(byte *)((long)plVar16 + 0x22) ^ 1;
    }
    else {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 0;
  }
  func_0x000107267da8(auStack_578);
  func_0x0001073ec008(uStack_3e8);
  if ((bool)uVar3) {
    return (long **)(ulong)(uVar17 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pplVar6 = (long **)0x0;
  pplVar8 = aplStack_6a0;
  plStack_5b8 = plVar14;
  pcStack_588 = FUN_1073eb6b8;
  plVar14 = param_4;
  uVar15 = param_5;
  plStack_5e0 = plVar1;
  pplStack_5d8 = pplVar20;
  plStack_5d0 = plVar12;
  plStack_5c8 = plVar19;
  plStack_5c0 = unaff_x24;
  lStack_5b0 = lVar18;
  pplStack_5a8 = pplVar5;
  ppuStack_590 = &puStack_3d0;
  func_0x0001073ec044();
  uStack_5e8 = extraout_x8_03;
  *(undefined4 *)(extraout_x8_02 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_02 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_02 + 0x40) = 1;
  plVar12 = *param_3;
  plVar19 = param_3[1];
  func_0x0001072d306c();
  plVar16 = (long *)lStack_690;
  do {
    if (plVar16 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_5e8);
      if ((bool)uVar3) {
        return pplVar8;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_02);
      __Unwind_Resume(pplVar8);
      uStack_6f0 = 2;
      pcStack_6a8 = FUN_1073eb8e0;
      plVar13 = plVar19;
      lStack_a18 = param_7;
      plStack_700 = plVar1;
      pplStack_6f8 = pplVar20;
      puStack_6e8 = auStack_650;
      puStack_6e0 = auStack_618;
      lStack_6d8 = (long)plVar16;
      pplStack_6d0 = pplVar11;
      plStack_6c8 = param_4;
      pplStack_6c0 = pplVar8;
      pppuStack_6b0 = &ppuStack_590;
      func_0x0001073ec044();
      pplVar20 = (long **)*plVar13;
      uStack_710 = extraout_x8_04;
      (*(code *)(*pplVar20)[2])();
      pplVar6 = pplVar20;
      for (pplVar5 = (long **)0x0; bVar4 = pplVar5 == pplVar20, !bVar4;
          pplVar5 = (long **)((long)pplVar5 + 1)) {
        (**(code **)(*(long *)*plVar19 + 0x18))(&plStack_9e0,(long *)*plVar19,pplVar5);
        (**(code **)(*plStack_9e0 + 0x30))();
        func_0x00010726236c(auStack_750);
        func_0x0001072e7640(auStack_8e0,auStack_750,0x1138369c0);
        uVar9 = param_6;
        func_0x000107869b38(auStack_958,param_6,auStack_8e0);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_9f8,auStack_958,uVar9);
        FUN_1073de9d8(auStack_958);
        func_0x000104c2f714(auStack_8e0);
        lStack_a08 = lStack_9d8;
        plStack_a10 = plStack_9e0;
        if (lStack_9d8 != 0) {
          plVar1 = (long *)(lStack_9d8 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104c2fe00(auStack_9c8,plVar14);
        (**(code **)(*(long *)*plVar19 + 0x20))(auStack_990);
        func_0x0001073c4f74(auStack_958,auStack_9c8);
        func_0x000107751444(plVar12,&plStack_a10,auStack_958);
        plVar12[0x1c] = (long)auStack_9f8;
        func_0x000107751334(auStack_8e0,plVar12);
        func_0x000107267e8c(auStack_958);
        func_0x000107267eac(auStack_9c8);
        func_0x000107267e44(&plStack_a10);
        auStack_958[0] = 0;
        uStack_920 = 0;
        uStack_918 = 0;
        uVar10 = uVar15;
        func_0x00010777faa8(uVar15,auStack_8e0,auStack_958);
        func_0x00010724b3d8(auStack_958);
        if ((uVar10 & 1) != 0) {
          FUN_1073ebfe0(lStack_a18,auStack_8e0);
        }
        func_0x000107267da8(auStack_8e0);
        func_0x00010726b264(auStack_9f8);
        func_0x00010724b3d8(auStack_750);
        pplVar6 = &plStack_9e0;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_710);
      if (bVar4) {
        return pplVar6;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_8e0);
      func_0x00010726b264(auStack_9f8);
      func_0x00010724b3d8(auStack_750);
      FUN_107330fdc(&plStack_9e0);
      pplVar20 = pplVar6;
      __Unwind_Resume();
      pcStack_a28 = FUN_1073ebb78;
      pplVar5 = pplVar20;
      if (*(uint *)(pplVar20 + 2) != 0xffffffff) {
        pplVar5 = (long **)auStack_a41;
        auStack_a41._1_8_ = param_6;
        pplStack_a38 = pplVar6;
        pppuStack_a30 = &pppuStack_6b0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar20 + 2)])(pplVar5,pplVar20);
      }
      *(undefined4 *)(pplVar20 + 2) = 0xffffffff;
      return pplVar5;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      plVar12 = plVar16 + 2;
      pplVar6 = pplVar11;
      plVar19 = param_4;
      FUN_10746e408();
      if ((int)pplVar6 != 0) {
        plVar12 = plVar16 + 2;
        plVar19 = param_4;
        FUN_10746e5cc(auStack_650,pplVar11);
        uVar3 = false;
        if (cStack_620 == '\x01') {
          FUN_1073ebbdc(auStack_618,extraout_x8_02);
          FUN_1073ebbdc(auStack_600,auStack_650);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_02,alStack_668);
          FUN_1073ebb78(alStack_668);
          lVar18 = 0x18;
          do {
            FUN_1073ebb78(auStack_618 + lVar18);
            lVar18 = lVar18 + -0x18;
          } while (lVar18 != -0x18);
          FUN_1073ebbdc(auStack_618,extraout_x8_02 + 0x18);
          FUN_1073ebbdc(auStack_600,auStack_638);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          plVar12 = alStack_668;
          FUN_1073ebc60(extraout_x8_02 + 0x18);
          FUN_1073ebb78(alStack_668);
          pplVar20 = (long **)0x18;
          do {
            FUN_1073ebb78(auStack_618 + (long)pplVar20);
            pplVar20 = pplVar20 + -3;
            uVar3 = pplVar20 == (long **)0xffffffffffffffe8;
          } while (!(bool)uVar3);
        }
        pplVar6 = (long **)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c((*pplVar11)[6]);
      if (((ulong)pplVar6 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c((*pplVar11)[6]);
      if (((ulong)pplVar6 & 1) != 0) goto LAB_1073eb724;
    }
    plVar16 = (long *)*plVar16;
  } while( true );
}



/* Entry: 1073e0d4c; end: 1073e0d5f;  */

long ** FUN_1073e0d4c(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar16;
  long *plVar17;
  long **pplVar18;
  undefined1 auStack_681 [9];
  long **pplStack_678;
  undefined1 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  long *plStack_650;
  long lStack_648;
  undefined1 auStack_638 [24];
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_520 [400];
  undefined1 auStack_390 [64];
  undefined8 uStack_350;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long *aplStack_2e0 [2];
  long lStack_2d0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char cStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [400];
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x3b8) & 1) != 0) {
    return (long **)0x1;
  }
  plVar9 = (long *)(param_1 + 0x318U);
  func_0x0001073ec044();
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_1b8);
  uVar2 = *(char *)(param_1 + 0x328) == '\x01';
  if ((bool)uVar2) {
    lVar15 = *(long *)(param_1 + 0x318U);
    uVar2 = *(char *)(lVar15 + 0x20) == '\x01';
    if ((bool)uVar2) {
      uVar16 = *(byte *)(lVar15 + 0x22) ^ 1;
    }
    else {
      uVar16 = 1;
    }
  }
  else {
    uVar16 = 0;
  }
  func_0x000107267da8(auStack_1b8);
  func_0x0001073ec008(uStack_28);
  if ((bool)uVar2) {
    return (long **)(ulong)(uVar16 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)0x0;
  pplVar5 = aplStack_2e0;
  pcStack_1c8 = FUN_1073eb6b8;
  puVar13 = param_4;
  uVar14 = param_5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  *(undefined4 *)(extraout_x8_00 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  puVar10 = (undefined1 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  uStack_228 = extraout_x8_01;
  func_0x0001072d306c();
  plVar17 = (long *)lStack_2d0;
  do {
    if (plVar17 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_228);
      if ((bool)uVar2) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_00);
      __Unwind_Resume(pplVar5);
      pcStack_2e8 = FUN_1073eb8e0;
      puVar12 = puVar11;
      uStack_658 = param_7;
      ppuStack_2f0 = &puStack_1d0;
      func_0x0001073ec044();
      pplVar6 = (long **)*puVar12;
      uStack_350 = extraout_x8_02;
      (*(code *)(*pplVar6)[2])();
      pplVar5 = pplVar6;
      for (pplVar18 = (long **)0x0; bVar3 = pplVar18 == pplVar6, !bVar3;
          pplVar18 = (long **)((long)pplVar18 + 1)) {
        (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_620,(long *)*puVar11,pplVar18);
        (**(code **)(*plStack_620 + 0x30))();
        func_0x00010726236c(auStack_390);
        func_0x0001072e7640(auStack_520,auStack_390,0x1138369c0);
        uVar7 = param_6;
        func_0x000107869b38(auStack_598,param_6,auStack_520);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_638,auStack_598,uVar7);
        FUN_1073de9d8(auStack_598);
        func_0x000104c2f714(auStack_520);
        lStack_648 = lStack_618;
        plStack_650 = plStack_620;
        if (lStack_618 != 0) {
          plVar9 = (long *)(lStack_618 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_608,puVar13);
        (**(code **)(*(long *)*puVar11 + 0x20))(auStack_5d0);
        func_0x0001073c4f74(auStack_598,auStack_608);
        func_0x000107751444(puVar10,&plStack_650,auStack_598);
        *(undefined1 **)(puVar10 + 0xe0) = auStack_638;
        func_0x000107751334(auStack_520,puVar10);
        func_0x000107267e8c(auStack_598);
        func_0x000107267eac(auStack_608);
        func_0x000107267e44(&plStack_650);
        auStack_598[0] = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uVar8 = uVar14;
        func_0x00010777faa8(uVar14,auStack_520,auStack_598);
        func_0x00010724b3d8(auStack_598);
        if ((uVar8 & 1) != 0) {
          FUN_1073ebfe0(uStack_658,auStack_520);
        }
        func_0x000107267da8(auStack_520);
        func_0x00010726b264(auStack_638);
        func_0x00010724b3d8(auStack_390);
        pplVar5 = &plStack_620;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_350);
      if (bVar3) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_520);
      func_0x00010726b264(auStack_638);
      func_0x00010724b3d8(auStack_390);
      FUN_107330fdc(&plStack_620);
      pplVar6 = pplVar5;
      __Unwind_Resume();
      pcStack_668 = FUN_1073ebb78;
      pplVar18 = pplVar6;
      if (*(uint *)(pplVar6 + 2) != 0xffffffff) {
        pplVar18 = (long **)auStack_681;
        auStack_681._1_8_ = param_6;
        pplStack_678 = pplVar5;
        pppuStack_670 = &ppuStack_2f0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar6 + 2)])(pplVar18,pplVar6);
      }
      *(undefined4 *)(pplVar6 + 2) = 0xffffffff;
      return pplVar18;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar10 = (undefined1 *)(plVar17 + 2);
      plVar4 = plVar9;
      puVar11 = param_4;
      FUN_10746e408();
      if ((int)plVar4 != 0) {
        puVar10 = (undefined1 *)(plVar17 + 2);
        puVar11 = param_4;
        FUN_10746e5cc(auStack_290,plVar9);
        uVar2 = false;
        if (cStack_260 == '\x01') {
          FUN_1073ebbdc(auStack_258,extraout_x8_00);
          FUN_1073ebbdc(auStack_240,auStack_290);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_00,auStack_2a8);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x18);
          FUN_1073ebbdc(auStack_258,extraout_x8_00 + 0x18);
          FUN_1073ebbdc(auStack_240,auStack_278);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          puVar10 = auStack_2a8;
          FUN_1073ebc60(extraout_x8_00 + 0x18);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
            uVar2 = lVar15 == -0x18;
          } while (!(bool)uVar2);
        }
        plVar4 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) != 0) goto LAB_1073eb724;
    }
    plVar17 = (long *)*plVar17;
  } while( true );
}



/* Entry: 1073e0d60; end: 1073e0ddf;  */

void FUN_1073e0d60(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e1598();
  uStack_28 = extraout_x8;
  func_0x0001073e20a8();
  if (*(long *)(param_2 + 0xf0) != 0) {
    ppuStack_48 = &PTR_FUN_1109ac4d8;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_2;
    func_0x0001073e2090();
    func_0x0001073e1b50();
  }
  func_0x0001073e209c();
  func_0x0001073e1de0();
  func_0x0001073e1584(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073e1b50();
  func_0x0001073e1de0();
  func_0x0001073e1648();
  FUN_1073e0ef4();
  return;
}



/* Entry: 1073e0de0; end: 1073e0e0f;  */

void FUN_1073e0de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined4 *puStack_20;
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  puStack_20 = &uStack_14;
  uStack_28 = param_3;
  uStack_14 = param_1;
  FUN_1073e0ef4(param_2,&uStack_15,&uStack_28);
  return;
}



/* Entry: 1073e0e10; end: 1073e0ef3;  */

void FUN_1073e0e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong unaff_x19;
  long *unaff_x20;
  undefined1 auStack_68 [40];
  
  func_0x0001073e1650();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    if (unaff_x19 == *(ulong *)(param_1 + 8)) {
      FUN_1073e103c();
    }
    else {
      func_0x0001073e18e4();
      FUN_1073e1060();
      FUN_1073e10d4();
    }
  }
  else {
    plVar1 = unaff_x20;
    FUN_1073dfb88();
    FUN_1073dfc30(auStack_68,plVar1,(long)(unaff_x19 - *unaff_x20) / 0x58,(ulong *)(param_1 + 0x10))
    ;
    FUN_1073e1128(auStack_68,param_3);
    FUN_1073e1200();
    func_0x0001073e19e0();
  }
  return;
}



/* Entry: 1073e0ef4; end: 1073e0f1b;  */

void FUN_1073e0ef4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  FUN_1073e0f1c(param_1,&uStack_20);
  return;
}



/* Entry: 1073e0f1c; end: 1073e0f3b;  */

ulong FUN_1073e0f1c(uint *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[0xc] == 0) {
    return (ulong)*param_1;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_80[0] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar1 = (ulong)*(uint *)param_2[1];
  func_0x00010727f6f4(uVar1,param_1,*param_2,auStack_80);
  uVar2 = uVar1;
  func_0x0001073e1984();
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001073e1984();
  func_0x0001073e1648();
  FUN_1073e0fe8();
  return uVar2;
}



/* Entry: 1073e0f3c; end: 1073e0fbf;  */

ulong FUN_1073e0f3c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_80[0] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar1 = (ulong)*(uint *)param_1[1];
  func_0x00010727f6f4(uVar1,param_2,*param_1,auStack_80);
  uVar2 = uVar1;
  func_0x0001073e1984();
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001073e1984();
  func_0x0001073e1648();
  FUN_1073e0fe8();
  return uVar2;
}



/* Entry: 1073e0fc0; end: 1073e0fe7;  */

void FUN_1073e0fc0(void)

{
  FUN_1073e0fe8();
  return;
}



/* Entry: 1073e0fe8; end: 1073e103b;  */

void FUN_1073e0fe8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = (param_2 - param_1) / 0x58;
  while (lVar2 = param_1, uVar1 != 0) {
    uVar3 = uVar1 >> 1;
    lVar4 = lVar2 + uVar3 * 0x58;
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    param_1 = lVar4 + 0x58;
    if (*(float *)(param_3 + 0x50) <= *(float *)(lVar4 + 0x50)) {
      uVar1 = uVar3;
      param_1 = lVar2;
    }
  }
  return;
}



/* Entry: 1073e103c; end: 1073e105f;  */

void FUN_1073e103c(long param_1)

{
  long unaff_x19;
  
  func_0x0001073e1b1c();
  func_0x0001073dfd64();
  *(long *)(unaff_x19 + 8) = param_1 + 0x58;
  return;
}



/* Entry: 1073e1060; end: 1073e10d3;  */

void FUN_1073e1060(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar3 - param_4);
  lVar2 = lVar3;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0x58) {
    func_0x0001073dfd64(lVar2,uVar4);
    lVar2 = lVar2 + 0x58;
  }
  *(long *)(param_1 + 8) = lVar2;
  func_0x0001073e1ee8(param_2,uVar1,lVar3);
  FUN_1073e12ec(&stack0xffffffffffffffef,param_2);
  return;
}



/* Entry: 1073e10d4; end: 1073e1127;  */

void FUN_1073e10d4(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650();
  *param_1 = *param_2;
  func_0x0001073c13fc(param_1 + 1,param_2 + 1);
  FUN_10737ef78(unaff_x20 + 0x18,unaff_x19 + 0x18);
  FUN_10737ef78(unaff_x20 + 0x28,unaff_x19 + 0x28);
  FUN_1073e1348(unaff_x20 + 0x38,unaff_x19 + 0x38);
  *(undefined4 *)(unaff_x20 + 0x50) = *(undefined4 *)(unaff_x19 + 0x50);
  return;
}



/* Entry: 1073e1128; end: 1073e11ff;  */

void FUN_1073e1128(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x0001073e17d0();
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == *(ulong *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
      uVar2 = (long)(uVar1 - uVar4) / 0x58 << 1;
      if (uVar1 - uVar4 == 0) {
        uVar2 = 1;
      }
      FUN_1073dfc30(&uStack_60,uVar2,uVar2 >> 2,unaff_x19[4]);
      FUN_1073e13a4(&uStack_60,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar1 = *unaff_x19;
      uVar5 = unaff_x19[3];
      uVar2 = unaff_x19[2];
      unaff_x19[1] = uStack_58;
      *unaff_x19 = uStack_60;
      unaff_x19[3] = uStack_48;
      unaff_x19[2] = uStack_50;
      uStack_60 = uVar1;
      uStack_58 = uVar4;
      uStack_50 = uVar2;
      uStack_48 = uVar5;
      func_0x0001073dfe78(&uStack_60);
      uVar1 = unaff_x19[2];
    }
    else {
      lVar3 = (((long)(uVar2 - uVar4) / 0x58 + 1) / -2) * 0x58;
      FUN_1073e13b4(uVar2,uVar1,uVar2 + lVar3);
      unaff_x19[1] = unaff_x19[1] + lVar3;
      unaff_x19[2] = uVar1;
    }
  }
  func_0x0001073dfd64(uVar1);
  unaff_x19[2] = unaff_x19[2] + 0x58;
  return;
}



/* Entry: 1073e1200; end: 1073e12c3;  */

undefined8 FUN_1073e1200(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001073e1c60();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_1073dfcc0(param_1 + 2);
  lVar3 = *param_1;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (param_1[1] - unaff_x19);
  param_1[1] = unaff_x19;
  FUN_1073dfcc0(param_1 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0x58) * 0x58;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1073e12c4; end: 1073e12eb;  */

void FUN_1073e12c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001073e1ee8();
  FUN_1073e12ec(&uStack_11,param_1);
  return;
}



/* Entry: 1073e12ec; end: 1073e1347;  */

void FUN_1073e12ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001073e19c0();
  while (param_4 = param_4 + -0x58, param_3 != unaff_x21) {
    param_3 = param_3 + -0x58;
    FUN_1073e10d4(param_4,param_3);
  }
  func_0x0001073e18e4();
  return;
}



/* Entry: 1073e1348; end: 1073e13a3;  */

void FUN_1073e1348(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  
  func_0x0001073e1650();
  plVar4 = (long *)(param_1 + 8);
  func_0x0001073dff40();
  *unaff_x20 = *unaff_x19;
  plVar1 = unaff_x19 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = unaff_x19[2];
  unaff_x20[2] = lVar3;
  if (lVar3 == 0) {
    *unaff_x20 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *unaff_x19 = plVar1;
    *plVar1 = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 1073e13a4; end: 1073e13b3;  */

void FUN_1073e13a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  lVar3 = (param_3 - param_2) / 0x58;
  func_0x0001073e17d0();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = lVar3 * 0x58;
  lVar1 = lVar2 + lVar3;
  for (; lVar3 != 0; lVar3 = lVar3 + -0x58) {
    func_0x0001073dfd64(lVar2,unaff_x20);
    lVar2 = lVar2 + 0x58;
    unaff_x20 = unaff_x20 + 0x58;
  }
  *(long *)(unaff_x19 + 0x10) = lVar1;
  return;
}



/* Entry: 1073e13b4; end: 1073e13db;  */

void FUN_1073e13b4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001073e1ee8();
  FUN_1073e13dc(&uStack_11,param_1);
  return;
}



/* Entry: 1073e13dc; end: 1073e1477;  */

void FUN_1073e13dc(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001073e19c0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x58) {
    FUN_1073e10d4(in_x3,unaff_x21);
    in_x3 = in_x3 + 0x58;
  }
  func_0x0001073e18e4();
  return;
}



/* Entry: 1073e1478; end: 1073e14e7;  */

long FUN_1073e1478(long param_1)

{
  func_0x0001073e1ca4(&PTR_DAT_1109ac470);
  func_0x0001073e1be8();
  func_0x0001073e1cb4();
  FUN_1073e0028(param_1 + 0x300);
  func_0x0001073de240(param_1 + 0x140);
  func_0x000107266af0(param_1 + 0xe0);
  FUN_1073e00c4(param_1 + 200);
  func_0x0001073e1cbc();
  func_0x000107331000(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  func_0x0001073e1f18();
  func_0x0001073e0164();
  return param_1;
}



/* Entry: 1073e14e8; end: 1073e14ef;  */

void FUN_1073e14e8(void)

{
  return;
}



/* Entry: 1073e14f0; end: 1073e1517;  */

void FUN_1073e14f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073e2008();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109ac4d8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073e1518; end: 1073e153f;  */

void FUN_1073e1518(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109ac4d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073e1540; end: 1073e1577;  */

long FUN_1073e1540(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ac538);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073e1578; end: 1073e2233;  */

undefined ** FUN_1073e1578(void)

{
  return &PTR_DAT_1109ac538;
}



/* Entry: 1073e2234; end: 1073e22d3;  */

void FUN_1073e2234(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_68 [7];
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  FUN_1073e25c0(auStack_68);
  iVar2 = (int)param_4;
  if (cStack_30 == '\x01') {
    uVar1 = 0x48;
    __Znwm();
    puVar3 = auStack_68;
    iVar2 = param_3;
    func_0x00010778ff94();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  func_0x00010724b3d8(auStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = 0x200;
  __Znwm();
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1073e9a54();
  func_0x000107331000(&uStack_c0);
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1073e22d4; end: 1073e236b;  */

void FUN_1073e22d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x200;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1073e9a54();
  func_0x000107331000(&uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 1073e236c; end: 1073e2403;  */

void FUN_1073e236c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073e2404(&uStack_50,param_3);
  uVar1 = 0x430;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_107494758();
  FUN_1073e2454(&uStack_40);
  *param_1 = uVar1;
  FUN_1073e2454(&uStack_50);
  return;
}



/* Entry: 1073e2404; end: 1073e244b;  */

void FUN_1073e2404(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e2454(&uStack_20);
  return;
}



/* Entry: 1073e244c; end: 1073e2453;  */

void FUN_1073e244c(void)

{
  return;
}



/* Entry: 1073e2454; end: 1073e250b;  */

long FUN_1073e2454(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e250c; end: 1073e2523;  */

void FUN_1073e250c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073e2524; end: 1073e25b7;  */

long FUN_1073e2524(long param_1)

{
  func_0x0001073e2548(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073e25b8; end: 1073e25bf;  */

void FUN_1073e25b8(void)

{
  return;
}



/* Entry: 1073e25c0; end: 1073e2693;  */

void FUN_1073e25c0(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_80 [56];
  byte bStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = 0xf410145;
  (**(code **)(*param_3 + 0x38))(&lStack_40,param_3 + 1);
  if ((bStack_30 & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    (**(code **)(lStack_40 + 0x68))(auStack_80,auStack_38);
    if ((bStack_48 & 1) == 0) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      iVar1 = (int)auStack_80;
      func_0x0001072627ac(param_1);
    }
    func_0x00010724b3d8(auStack_80);
  }
  func_0x0001072f5f4c(&lStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar1 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *extraout_x8 = 0;
  return;
}



/* Entry: 1073e2694; end: 1073e26a3;  */

void FUN_1073e2694(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1073e26a4; end: 1073e27df;  */

void FUN_1073e26a4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  (**(code **)(*param_2 + 0x10))();
  if (param_2 == (long *)0x0) {
    func_0x000100060b18(auStack_70,&uStack_40);
    func_0x0001004c3cd0(auStack_58,&UNK_10f41016c,auStack_70);
    FUN_1073e28f4();
    func_0x0001073e2910();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,&UNK_10f410184,param_7);
    FUN_1073e28f4();
    func_0x0001073e2910();
    *param_1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_1);
    if (*param_1 == 0) {
      func_0x00010724ef84(auStack_a0,param_5);
      func_0x0001004c3cd0(auStack_88,&UNK_10f41014c,auStack_a0);
      func_0x00010048a6c8(auStack_70,auStack_88,&UNK_10f410161);
      func_0x000100060b18(auStack_b8,&uStack_40);
      func_0x00010533a9c0(auStack_58,auStack_70,auStack_b8);
      FUN_1073e28f4();
      func_0x0001073e2910();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    }
  }
  return;
}



/* Entry: 1073e27e0; end: 1073e28f3;  */

void FUN_1073e27e0(undefined8 param_1,long *param_2,long param_3)

{
  func_0x0001073e2918(param_2,*(undefined8 *)(param_3 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001073e2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_1);
  return;
}



/* Entry: 1073e28f4; end: 1073e2943;  */

void FUN_1073e28f4(void)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    func_0x000107c60e14(*unaff_x19);
  }
  uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x48);
  unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0x38);
  unaff_x19[1] = uVar2;
  *unaff_x19 = uVar1;
  *(undefined1 *)(unaff_x29 + -0x31) = 0;
  *(undefined1 *)(unaff_x29 + -0x48) = 0;
  return;
}



/* Entry: 1073e2944; end: 1073e29cf;  */

void FUN_1073e2944(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long ****extraout_x10;
  long ****extraout_x10_00;
  long ****pppplVar13;
  long *plVar14;
  undefined8 *puVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  undefined8 uVar20;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined1 **ppuStack_1350;
  code *pcStack_1348;
  long ***ppplStack_1338;
  undefined8 *puStack_1330;
  long ***ppplStack_1328;
  long ***ppplStack_1320;
  long ***ppplStack_1318;
  long *plStack_1310;
  long ***ppplStack_1308;
  long ***ppplStack_1300;
  long ***ppplStack_12f8;
  long ***ppplStack_12f0;
  undefined8 uStack_12e8;
  undefined8 *puStack_12e0;
  long ***ppplStack_12d8;
  long ***ppplStack_12d0;
  undefined8 *puStack_12c8;
  long alStack_12c0 [2];
  undefined1 auStack_12b0 [24];
  long ***ppplStack_1298;
  long **pplStack_1290;
  long lStack_1288;
  long ***ppplStack_1280;
  long lStack_1278;
  long ***ppplStack_1270;
  long **pplStack_1268;
  long lStack_1260;
  undefined1 auStack_1258 [24];
  long ***ppplStack_1240;
  long lStack_1238;
  long lStack_1230;
  ulong uStack_1220;
  undefined8 uStack_1218;
  undefined1 auStack_11e8 [56];
  long **applStack_11b0 [8];
  undefined1 auStack_1170 [496];
  long ***ppplStack_f80;
  long lStack_f78;
  undefined1 auStack_f20 [96];
  undefined1 auStack_ec0 [96];
  undefined1 auStack_e60 [400];
  long ***ppplStack_cd0;
  long **pplStack_cc8;
  long lStack_cc0;
  undefined1 auStack_c10 [96];
  undefined1 auStack_bb0 [400];
  long **applStack_a20 [30];
  undefined8 *puStack_930;
  long ***ppplStack_890;
  long lStack_888;
  long **applStack_6f8 [7];
  undefined1 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 auStack_698 [128];
  undefined1 *puStack_618;
  long lStack_610;
  long ***ppplStack_600;
  int iStack_460;
  undefined1 auStack_410 [64];
  long ***ppplStack_3d0;
  undefined1 auStack_3b0 [304];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [320];
  undefined8 uStack_100;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [56];
  char cStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e54fc();
  uStack_28 = extraout_x8;
  FUN_1073e25c0(auStack_68);
  uVar3 = cStack_30 == '\x01';
  if ((bool)uVar3) {
    uVar5 = 0x48;
    __Znwm();
    func_0x000107791c4c();
    param_4 = param_3;
  }
  else {
    uVar5 = 0;
  }
  *param_1 = uVar5;
  func_0x00010724b3d8(auStack_68);
  func_0x0001073e54d8(uStack_28);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_1073e29d0;
  puStack_80 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_1330 = extraout_x8_00;
  func_0x0001073e54fc();
  pppplVar11 = (long ****)((undefined8 *)*param_5)[1];
  plStack_1310 = param_5;
  uStack_100 = extraout_x8_01;
  FUN_1073e3cc0(alStack_12c0,*(undefined8 *)*param_5);
  puVar15 = (undefined8 *)*param_4;
  if (*(int *)(*(long *)(alStack_12c0[0] + 8) + 0x2e8) == 0) {
    puVar6 = (undefined8 *)0x2b8;
    __Znwm();
    func_0x0001073e5d10();
    *puVar6 = &PTR_DAT_1109ac658;
    ppplStack_12d0 = (long ***)(puVar6 + 2);
    *ppplStack_12d0 = (long **)0x0;
    puStack_12c8 = puVar6 + 1;
    *puStack_12c8 = ppplStack_12d0;
    puVar6[3] = 0;
    func_0x000104c2f64c(puVar6 + 4);
    pppplVar13 = (long ****)(param_1 + 0xb);
    *pppplVar13 = (long ***)0x0;
    func_0x0001073e55f8();
    uVar20 = puVar15[1];
    uVar5 = *puVar15;
    pppplVar18 = (long ****)(param_1 + 0x1c);
    *pppplVar18 = (long ***)&UNK_10e52b660;
    ppplStack_12f8 = (long ***)(param_1 + 0x19);
    *ppplStack_12f8 = (long **)0x0;
    param_1[0x18] = uVar20;
    param_1[0x17] = uVar5;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = &UNK_10e52b660;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = &UNK_10e52b660;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x37] = 0;
    param_1[0x36] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    *(undefined8 *)((long)param_1 + 0x179) = 0;
    *(undefined8 *)((long)param_1 + 0x171) = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    *(undefined1 *)((long)param_1 + 0x18c) = 0;
    *(undefined8 *)((long)param_1 + 0x184) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    lVar12 = param_4[9];
    param_1[0x38] = 0;
    param_1[0x39] = lVar12;
    lVar12 = param_4[7];
    param_1[0x3a] = param_4[5];
    param_1[0x3b] = lVar12;
    puStack_12e0 = param_1 + 0x3c;
    FUN_1073dd510(puStack_12e0,param_4[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e56dc();
    ppplStack_12d8 = (long ***)extraout_x10_00;
    func_0x0001073e5d38();
    func_0x000104c2f64c(param_1 + 0x4c);
    func_0x0001073e561c();
    func_0x0001073e55bc();
    func_0x0001073e594c();
    func_0x0001073e5770();
    func_0x000107288cd8(applStack_6f8);
    func_0x0001073e5934();
    func_0x0001073e56b8(auStack_240);
    func_0x0001073e574c();
    func_0x0001073e5530();
    func_0x0001073e5724();
    func_0x0001073e5648();
    ppplStack_3d0 = (long ***)pppplVar18;
    func_0x0001073e58ac();
    FUN_1073e49f0(param_1 + 0x28,applStack_6f8);
    func_0x0001073e58c4();
    func_0x0001073e56ac();
    func_0x0001073e5bd0();
    func_0x0001073e590c(param_1 + 0x4c);
    func_0x0001073e567c();
    func_0x0001073e56ac();
    func_0x0001073e5be4();
    func_0x0001073e590c(param_1 + 4);
    func_0x0001073e567c();
    pppplVar9 = (long ****)&DAT_10f42888c;
    pppplVar8 = pppplVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    plVar2 = (long *)plStack_1310[1];
    pppplVar19 = (long ****)0x1;
    ppplStack_1328 = (long ***)pppplVar18;
    ppplStack_1320 = (long ***)pppplVar13;
    for (plVar14 = (long *)*plStack_1310; plVar14 != plVar2; plVar14 = plVar14 + 2) {
      lVar12 = *plVar14;
      func_0x0001073e5aa0(auStack_410);
      func_0x0001073e5aa0(auStack_3b0);
      func_0x0001073e595c();
      func_0x0001073bc804(auStack_410);
      if (*(int *)(lVar12 + 0x2c0) == 0) {
        uVar10 = 0;
        func_0x000104c2d614();
        if ((uVar10 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x53) = 1;
          auStack_410[0] = 1;
          func_0x0001073e5868(param_4[3],auStack_698);
          auStack_410[0] = 1;
          pppplVar9 = (long ****)applStack_6f8;
          func_0x0001073e5868(param_4[3]);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x53) = 1;
      }
      func_0x0001073e5a3c();
      pppplVar8 = (long ****)applStack_6f8;
      func_0x0001073bc804();
    }
    pppplVar13 = (long ****)param_4[8];
    func_0x0001073e57a8();
    (**(code **)(extraout_x8_07 + 0x10))();
    ppplStack_12f0 = &pplStack_1268;
    ppplStack_1318 = &pplStack_1290;
    ppplStack_1308 = (long ***)pppplVar8;
    ppplStack_1300 = (long ***)pppplVar13;
    for (pppplVar18 = (long ****)0x0; uVar3 = pppplVar18 == pppplVar8, !(bool)uVar3;
        pppplVar18 = (long ****)((long)pppplVar18 + 1)) {
      func_0x0001073e57a8();
      (**(code **)(extraout_x8_08 + 0x18))(&ppplStack_1240);
      func_0x0001073e5d4c(ppplStack_1240);
      (*extraout_x8_09)();
      func_0x0001073e5c20();
      func_0x0001073e553c(applStack_6f8,auStack_280);
      pppplVar9 = pppplVar13;
      func_0x000107869b38(auStack_410,pppplVar13,applStack_6f8);
      func_0x00010786967c();
      func_0x0001073e5bc4();
      func_0x0001073e593c();
      func_0x0001073e567c();
      pppplVar19 = (long ****)(ulong)*(uint *)(param_1 + 0x4b);
      ppplVar16 = (long ***)0x0;
      func_0x0001073e5bdc();
      func_0x0001073e5d04();
      ppplStack_cd0 = (long ***)pppplVar19;
      pplStack_cc8 = (long **)ppplVar16;
      if (extraout_x8_10 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10_02 != 0);
      }
      pppplVar19 = (long ****)applStack_a20;
      func_0x0001073e56b8();
      func_0x0001073e5514();
      func_0x0001073e5708();
      func_0x0001073e58cc();
      func_0x0001073e5b0c(ppplStack_12d8);
      func_0x0001073e5c2c();
      func_0x0001073e5714();
      func_0x0001073e571c();
      func_0x0001073e5860();
      func_0x0001073e57f4();
      func_0x0001073e56ac();
      applStack_6f8[0]._0_1_ = 0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      func_0x0001073e5afc();
      pppplVar17 = pppplVar19;
      func_0x0001073e58bc();
      if (((ulong)pppplVar19 & 1) != 0) {
        func_0x0001073e56ac();
        func_0x0001073e5cdc();
        func_0x0001073e5d58(ppplStack_12f0);
        if ((bool)uVar3) {
          pppplVar11 = (long ****)plStack_1310[1];
          for (pppplVar19 = (long ****)*plStack_1310; pppplVar19 != pppplVar11;
              pppplVar19 = pppplVar19 + 2) {
            func_0x0001073e5cd0();
            if ((long ****)ppplStack_12d0 != pppplVar17) {
              func_0x0001073e5bf0(pppplVar17[0xb]);
              if (iStack_460 != 0) {
                uVar10 = (ulong)*(uint *)(param_1 + 0x4b);
                uVar5 = 0;
                func_0x0001077512dc(applStack_a20);
                func_0x0001073e5d04();
                uStack_1220 = uVar10;
                uStack_1218 = uVar5;
                if (extraout_x8_11 != 0) {
                  do {
                    func_0x0001073e54ec();
                  } while (extraout_w10_03 != 0);
                }
                func_0x0001073e56b8(&ppplStack_f80);
                func_0x0001073e5c98();
                func_0x0001073e5b6c();
                func_0x0001073e5880();
                puStack_930 = puStack_12e0;
                func_0x0001073e5b3c(ppplStack_12d8);
                func_0x0001073e5b78();
                func_0x0001073e5858();
                func_0x0001073e5a70();
                func_0x0001073e5a2c();
                func_0x0001073e5b8c();
                func_0x0001073e5a10(*(float *)(param_1 + 0x4b) + -1.0);
                func_0x0001073e57a0(auStack_bb0);
                FUN_1073e3fb8(auStack_c10);
                func_0x0001073e57b8();
                func_0x0001073e59cc();
                func_0x0001073e59ec();
                func_0x0001073e5a10(*(undefined4 *)(param_1 + 0x4b));
                func_0x0001073e57a0(auStack_e60);
                FUN_1073e3fb8(auStack_ec0);
                func_0x0001073e5810();
                func_0x0001073e599c();
                func_0x0001073e59c4();
                func_0x0001073e5a10(*(float *)(param_1 + 0x4b) + 1.0);
                uVar10 = 0;
                func_0x0001073e57a0();
                FUN_1073e3fb8(auStack_1170);
                func_0x0001073e57fc();
                func_0x0001073e596c();
                func_0x0001073e597c();
                func_0x0001073e5c40();
                func_0x0001073e5944(applStack_a20);
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(applStack_a20);
                }
                func_0x0001073e5944(&ppplStack_cd0);
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(&ppplStack_cd0);
                }
                uVar10 = 0;
                func_0x000104c2d614();
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5c08();
                }
                func_0x0001073e5924(applStack_a20,&uStack_1220);
                func_0x0001073e5924(&ppplStack_cd0,auStack_11e8);
                pppplVar17 = (long ****)applStack_11b0;
                func_0x000104c2fe00(pppplVar17,auStack_f20);
                func_0x0001073e58fc();
                func_0x0001073e5a34();
                func_0x0001073e5a68();
                func_0x0001073e5850();
                func_0x0001073e5878();
                func_0x0001073e5b84();
              }
              func_0x0001073e58a4();
            }
          }
        }
        func_0x0001073e5ba0(applStack_6f8);
        lStack_1278 = lStack_1238;
        ppplStack_1280 = ppplStack_1240;
        ppplStack_1240 = (long ***)0x0;
        lStack_1238 = 0;
        func_0x0001073e56ac();
        pppplVar13 = (long ****)ppplStack_1300;
        pppplVar8 = (long ****)ppplStack_1308;
        ppplStack_1298 = ppplStack_1270;
        pplStack_1290 = pplStack_1268;
        lStack_1288 = lStack_1260;
        if (lStack_1260 == 0) {
          ppplStack_1298 = ppplStack_1318;
        }
        else {
          pplStack_1268[2] = (long *)ppplStack_1318;
          ppplStack_1270 = ppplStack_12f0;
          *ppplStack_12f0 = (long **)0x0;
          ppplStack_12f0[1] = (long **)0x0;
        }
        pppplVar9 = &ppplStack_890;
        pppplVar11 = &ppplStack_1280;
        ppplStack_890 = (long ***)pppplVar18;
        func_0x0001073df908(ppplStack_12f8,pppplVar9,pppplVar11,applStack_6f8,extraout_x8_12 + 0xc0,
                            &ppplStack_1298);
        func_0x0001073e5a98();
        func_0x0001073e5a90();
        func_0x000107283194(applStack_6f8);
        func_0x0001073e58dc();
      }
      func_0x0001073e5c38();
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
    }
  }
  else {
    puVar6 = (undefined8 *)0x2b8;
    __Znwm();
    func_0x0001073e5d10();
    *puVar6 = &PTR_DAT_1109ac818;
    pppplVar8 = (long ****)(puVar6 + 2);
    *pppplVar8 = (long ***)0x0;
    puStack_12c8 = puVar6 + 1;
    *puStack_12c8 = pppplVar8;
    puVar6[3] = 0;
    func_0x000104c2f64c(puVar6 + 4);
    ppplStack_1338 = (long ***)(param_1 + 0xb);
    *ppplStack_1338 = (long **)0x0;
    func_0x0001073e55f8();
    uVar20 = puVar15[1];
    uVar5 = *puVar15;
    ppplStack_1308 = (long ***)(param_1 + 0x1c);
    *ppplStack_1308 = (long **)&UNK_10e52b660;
    ppplStack_1318 = (long ***)(param_1 + 0x19);
    *ppplStack_1318 = (long **)0x0;
    param_1[0x18] = uVar20;
    param_1[0x17] = uVar5;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = &UNK_10e52b660;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = &UNK_10e52b660;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x37] = 0;
    param_1[0x36] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    *(undefined8 *)((long)param_1 + 0x179) = 0;
    *(undefined8 *)((long)param_1 + 0x171) = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    *(undefined1 *)((long)param_1 + 0x18c) = 0;
    *(undefined8 *)((long)param_1 + 0x184) = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    lVar12 = param_4[9];
    param_1[0x38] = 0;
    param_1[0x39] = lVar12;
    lVar12 = param_4[7];
    param_1[0x3a] = param_4[5];
    param_1[0x3b] = lVar12;
    puStack_12e0 = param_1 + 0x3c;
    FUN_1073dd510(puStack_12e0,param_4[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e56dc();
    ppplStack_12d0 = (long ***)extraout_x10;
    func_0x0001073e5d38();
    func_0x000104c2f64c(param_1 + 0x4c);
    func_0x0001073e561c();
    func_0x0001073e55bc();
    func_0x0001073e594c();
    func_0x0001073e5770();
    func_0x000107288cd8(applStack_6f8);
    func_0x0001073e5934();
    func_0x0001073e56b8(auStack_240);
    func_0x0001073e574c();
    func_0x0001073e5530();
    func_0x0001073e5724();
    func_0x0001073e5648();
    ppplVar16 = ppplStack_1308;
    ppplStack_3d0 = ppplStack_1308;
    func_0x0001073e58ac();
    FUN_1073e49f0(ppplVar16 + 0xc,applStack_6f8);
    func_0x0001073e58c4();
    func_0x0001073e56ac();
    func_0x0001073e5bd0();
    func_0x0001073e590c(param_1 + 0x4c);
    func_0x0001073e567c();
    func_0x0001073e56ac();
    func_0x0001073e5be4();
    func_0x0001073e590c(param_1 + 4);
    func_0x0001073e567c();
    pppplVar9 = (long ****)&DAT_10f42888c;
    pppplVar18 = (long ****)ppplStack_1338;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    pppplVar19 = (long ****)plStack_1310[1];
    ppplStack_12d8 = (long ***)pppplVar8;
    for (pppplVar13 = (long ****)*plStack_1310; pppplVar13 != pppplVar19;
        pppplVar13 = pppplVar13 + 2) {
      ppplVar16 = *pppplVar13;
      func_0x0001073e5aa0(auStack_410);
      func_0x0001073e5aa0(auStack_3b0);
      func_0x0001073e595c();
      func_0x0001073bc804(auStack_410);
      if (*(int *)(ppplVar16 + 0x58) == 0) {
        uVar10 = 0;
        func_0x000104c2d614();
        if ((uVar10 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x53) = 1;
          auStack_410[0] = 1;
          func_0x0001073e5868(param_4[3],auStack_698);
          auStack_410[0] = 1;
          pppplVar9 = (long ****)applStack_6f8;
          func_0x0001073e5868(param_4[3]);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x53) = 1;
      }
      func_0x0001073e5a3c();
      pppplVar18 = (long ****)applStack_6f8;
      func_0x0001073bc804();
    }
    pppplVar17 = (long ****)param_4[8];
    func_0x0001073e57a8();
    (**(code **)(extraout_x8_02 + 0x10))();
    pppplVar19 = (long ****)0x0;
    ppplStack_12f8 = &pplStack_1268;
    ppplStack_1300 = &pplStack_1290;
    ppplStack_1328 = &pplStack_cc8;
    pppplVar8 = (long ****)ppplStack_12d8;
    ppplStack_1320 = (long ***)pppplVar17;
    ppplStack_12f0 = (long ***)pppplVar18;
    while( true ) {
      uVar4 = pppplVar19 == (long ****)ppplStack_12f0;
      uVar3 = true;
      if ((bool)uVar4) break;
      func_0x0001073e57a8();
      (**(code **)(extraout_x8_03 + 0x18))(&ppplStack_1240);
      func_0x0001073e5d4c(ppplStack_1240);
      (*extraout_x8_04)();
      func_0x0001073e5c20();
      func_0x0001073e553c(applStack_6f8,auStack_280);
      pppplVar9 = pppplVar17;
      func_0x000107869b38(auStack_410,pppplVar17,applStack_6f8);
      func_0x00010786967c();
      func_0x0001073e5bc4();
      func_0x0001073e593c();
      func_0x0001073e567c();
      pppplVar18 = (long ****)(ulong)*(uint *)(param_1 + 0x4b);
      ppplVar16 = (long ***)0x0;
      func_0x0001073e5bdc();
      func_0x0001073e5d04();
      ppplStack_cd0 = (long ***)pppplVar18;
      pplStack_cc8 = (long **)ppplVar16;
      if (extraout_x8_05 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10 != 0);
      }
      pppplVar18 = (long ****)applStack_a20;
      func_0x0001073e56b8();
      func_0x0001073e5514();
      func_0x0001073e5708();
      func_0x0001073e58cc();
      func_0x0001073e5b0c(ppplStack_12d0);
      func_0x0001073e5c2c();
      func_0x0001073e5714();
      func_0x0001073e571c();
      func_0x0001073e5860();
      func_0x0001073e57f4();
      func_0x0001073e56ac();
      applStack_6f8[0]._0_1_ = 0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      func_0x0001073e5afc();
      pppplVar7 = pppplVar18;
      func_0x0001073e58bc();
      if (((ulong)pppplVar18 & 1) != 0) {
        func_0x0001073e56ac();
        func_0x0001073e5cdc();
        func_0x0001073e5d58(ppplStack_12f8);
        if ((bool)uVar4) {
          lVar1 = plStack_1310[1];
          for (lVar12 = *plStack_1310; lVar12 != lVar1; lVar12 = lVar12 + 0x10) {
            func_0x0001073e5cd0();
            if (pppplVar8 != pppplVar7) {
              func_0x0001073e5bf0(pppplVar7[0xb]);
              if (iStack_460 != 0) {
                uVar10 = (ulong)*(uint *)(param_1 + 0x4b);
                uVar5 = 0;
                func_0x0001077512dc(applStack_a20);
                func_0x0001073e5d04();
                uStack_1220 = uVar10;
                uStack_1218 = uVar5;
                if (extraout_x8_06 != 0) {
                  do {
                    func_0x0001073e54ec();
                  } while (extraout_w10_00 != 0);
                }
                func_0x0001073e56b8(&ppplStack_f80);
                func_0x0001073e5c98();
                func_0x0001073e5b6c();
                func_0x0001073e5880();
                puStack_930 = puStack_12e0;
                func_0x0001073e5b3c(ppplStack_12d0);
                func_0x0001073e5b78();
                func_0x0001073e5858();
                func_0x0001073e5a70();
                func_0x0001073e5a2c();
                func_0x0001073e5b8c();
                func_0x0001073e5a10(*(float *)(param_1 + 0x4b) + -1.0);
                func_0x0001073e57a0(auStack_bb0);
                FUN_1073e3fb8(auStack_c10);
                func_0x0001073e57b8();
                func_0x0001073e59cc();
                func_0x0001073e59ec();
                func_0x0001073e5a10(*(undefined4 *)(param_1 + 0x4b));
                func_0x0001073e57a0(auStack_e60);
                FUN_1073e3fb8(auStack_ec0);
                func_0x0001073e5810();
                func_0x0001073e599c();
                func_0x0001073e59c4();
                func_0x0001073e5a10(*(float *)(param_1 + 0x4b) + 1.0);
                uVar10 = 0;
                func_0x0001073e57a0();
                FUN_1073e3fb8(auStack_1170);
                func_0x0001073e57fc();
                func_0x0001073e596c();
                func_0x0001073e597c();
                func_0x0001073e5c40();
                func_0x0001073e5944(applStack_a20);
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(applStack_a20);
                }
                func_0x0001073e5944(&ppplStack_cd0);
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(&ppplStack_cd0);
                }
                uVar10 = 0;
                func_0x000104c2d614();
                if ((uVar10 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5c08();
                }
                func_0x0001073e5924(applStack_a20,&uStack_1220);
                func_0x0001073e5924(&ppplStack_cd0,auStack_11e8);
                pppplVar7 = (long ****)applStack_11b0;
                func_0x000104c2fe00(pppplVar7,auStack_f20);
                func_0x0001073e58fc();
                func_0x0001073e5a34();
                func_0x0001073e5a68();
                func_0x0001073e5850();
                func_0x0001073e5878();
                func_0x0001073e5b84();
                pppplVar8 = (long ****)ppplStack_12d8;
              }
              func_0x0001073e58a4();
            }
          }
        }
        func_0x0001073e5ba0(&uStack_1220);
        lStack_1278 = lStack_1238;
        ppplStack_1280 = ppplStack_1240;
        ppplStack_1240 = (long ***)0x0;
        lStack_1238 = 0;
        pppplVar13 = *(long *****)(lStack_1230 + 8);
        ppplStack_1298 = ppplStack_1270;
        pplStack_1290 = pplStack_1268;
        lStack_1288 = lStack_1260;
        if (lStack_1260 == 0) {
          ppplStack_1298 = ppplStack_1300;
        }
        else {
          pplStack_1268[2] = (long *)ppplStack_1300;
          ppplStack_1270 = ppplStack_12f8;
          *ppplStack_12f8 = (long **)0x0;
          ppplStack_12f8[1] = (long **)0x0;
        }
        lVar12 = param_4[6];
        func_0x0001073e5bdc(*(undefined4 *)(param_1 + 0x4b));
        lStack_f78 = lStack_1278;
        ppplStack_f80 = ppplStack_1280;
        if (lStack_1278 != 0) {
          do {
            func_0x0001073e54ec();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001073e56b8(applStack_a20);
        func_0x0001073e5514();
        func_0x0001073e5708();
        func_0x000107751444(applStack_6f8,&ppplStack_f80,&ppplStack_890);
        ppplStack_600 = ppplStack_12d0;
        puStack_618 = auStack_1258;
        uVar5 = 0;
        lStack_610 = lVar12;
        FUN_1073e0de0(0,ppplStack_1308 + 0x16,applStack_6f8);
        func_0x0001073e5714();
        func_0x0001073e571c();
        func_0x000107267e44(&ppplStack_f80);
        func_0x0001073e57f4();
        pppplVar17 = (long ****)ppplStack_1320;
        lStack_888 = lStack_1278;
        ppplStack_890 = ppplStack_1280;
        ppplStack_1280 = (long ***)0x0;
        lStack_1278 = 0;
        ppplStack_cd0 = ppplStack_1298;
        pplStack_cc8 = pplStack_1290;
        lStack_cc0 = lStack_1288;
        if (lStack_1288 == 0) {
          ppplStack_cd0 = ppplStack_1328;
        }
        else {
          pplStack_1290[2] = (long *)ppplStack_1328;
          ppplStack_1298 = ppplStack_1300;
          *ppplStack_1300 = (long **)0x0;
          ppplStack_1300[1] = (long **)0x0;
        }
        FUN_1073dfae4(uVar5,applStack_6f8,pppplVar19,&ppplStack_890,&uStack_1220,pppplVar13 + 0x18,
                      &ppplStack_cd0);
        FUN_1073dff1c(&ppplStack_cd0);
        FUN_107330fdc(&ppplStack_890);
        pppplVar9 = (long ****)param_1[0x19];
        FUN_1073e0fc0(pppplVar9,param_1[0x1a],applStack_6f8);
        pppplVar11 = (long ****)applStack_6f8;
        FUN_1073e0e10(ppplStack_1318);
        func_0x0001073dfdc0(applStack_6f8);
        func_0x0001073e5a98();
        func_0x0001073e5a90();
        func_0x000107283194(&uStack_1220);
        func_0x0001073e58dc();
      }
      func_0x0001073e5c38();
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
      pppplVar19 = (long ****)((long)pppplVar19 + 1);
    }
  }
  func_0x0001073e5764();
  func_0x0001073e5c6c();
  func_0x000107331000(auStack_12b0);
  *puStack_1330 = param_1;
  FUN_1073e3ddc(alStack_12c0);
  func_0x0001073e54d8(uStack_100);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001073e5844();
    if ((int)pppplVar9 == 0) {
      func_0x0001073e5914();
      func_0x0001073e5a68();
      func_0x0001073e5850();
      func_0x0001073e5878();
      func_0x000107267da8(&ppplStack_890);
      func_0x0001073e58a4();
      func_0x0001073e58dc();
      func_0x000107267da8(auStack_410);
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
      func_0x0001073e5764();
      func_0x0001073e5c6c();
      func_0x0001073dff80(param_1 + 0x54);
      func_0x0001073e59e4();
      func_0x0001073e5ae4();
      FUN_1073e0028(puStack_12e0);
      ppplVar16 = ppplStack_1308;
      func_0x0001073e4b5c(ppplStack_1308 + 0xc);
      func_0x000107266af0(ppplVar16);
      FUN_1073e00c4(ppplStack_1318);
      func_0x0001073e5870();
      func_0x000107331000(uStack_12e8);
      pppplVar8 = (long ****)ppplStack_1338;
    }
    else {
      func_0x0001073e5764();
      func_0x0001073e5c6c();
      func_0x0001073dff80(param_1 + 0x54);
      func_0x0001073e59e4();
      func_0x0001073e5ae4();
      FUN_1073e0028(puStack_12e0);
      func_0x0001073e4b5c(pppplVar19 + 0xc);
      func_0x000107266af0(pppplVar19);
      FUN_1073e00c4(ppplStack_12f8);
      func_0x0001073e5870();
      func_0x000107331000(uStack_12e8);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar8);
    func_0x0001073e5ce8();
    func_0x0001073e0164(puStack_12c8);
    func_0x000107331000(auStack_12b0);
    __ZdlPv(param_1);
    func_0x000104bd46a0();
    pcStack_1348 = FUN_1073e3cc0;
    ppuStack_1350 = &puStack_80;
    if (pppplVar11 != (long ****)0x0) {
      do {
        func_0x0001073e54ec();
      } while (extraout_w10_04 != 0);
    }
    *pppplVar13 = (long ***)pppplVar9;
    pppplVar13[1] = (long ***)pppplVar11;
    uStack_1360 = 0;
    uStack_1358 = 0;
    FUN_1073e3ddc(&uStack_1360);
    return;
  }
  return;
}



/* Entry: 1073e29d0; end: 1073e3cbf;  */

void FUN_1073e29d0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ****pppplVar10;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long ****extraout_x10;
  long ****extraout_x10_00;
  long unaff_x19;
  long ****pppplVar12;
  long *plVar13;
  undefined8 *puVar14;
  long ***ppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined1 *puStack_12e0;
  code *pcStack_12d8;
  long ***ppplStack_12c8;
  long *plStack_12c0;
  long ***ppplStack_12b8;
  long ***ppplStack_12b0;
  long ***ppplStack_12a8;
  long *plStack_12a0;
  long ***ppplStack_1298;
  long ***ppplStack_1290;
  long ***ppplStack_1288;
  long ***ppplStack_1280;
  undefined8 uStack_1278;
  long lStack_1270;
  long ***ppplStack_1268;
  long ***ppplStack_1260;
  undefined8 *puStack_1258;
  long alStack_1250 [2];
  undefined1 auStack_1240 [24];
  long ***ppplStack_1228;
  long **pplStack_1220;
  long lStack_1218;
  long ***ppplStack_1210;
  long lStack_1208;
  long ***ppplStack_1200;
  long **pplStack_11f8;
  long lStack_11f0;
  undefined1 auStack_11e8 [24];
  long ***ppplStack_11d0;
  long lStack_11c8;
  long lStack_11c0;
  ulong uStack_11b0;
  undefined8 uStack_11a8;
  undefined1 auStack_1178 [56];
  long **applStack_1140 [8];
  undefined1 auStack_1100 [496];
  long ***ppplStack_f10;
  long lStack_f08;
  undefined1 auStack_eb0 [96];
  undefined1 auStack_e50 [96];
  undefined1 auStack_df0 [400];
  long ***ppplStack_c60;
  long **pplStack_c58;
  long lStack_c50;
  undefined1 auStack_ba0 [96];
  undefined1 auStack_b40 [400];
  long **applStack_9b0 [30];
  long lStack_8c0;
  long ***ppplStack_820;
  long lStack_818;
  long **applStack_688 [7];
  undefined1 uStack_650;
  undefined8 uStack_648;
  undefined1 auStack_628 [128];
  undefined1 *puStack_5a8;
  long lStack_5a0;
  long ***ppplStack_590;
  int iStack_3f0;
  undefined1 auStack_3a0 [64];
  long ***ppplStack_360;
  undefined1 auStack_340 [304];
  undefined1 auStack_210 [64];
  undefined1 auStack_1d0 [320];
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_12c0 = extraout_x8;
  func_0x0001073e54fc();
  pppplVar10 = (long ****)((undefined8 *)*param_4)[1];
  plStack_12a0 = param_4;
  uStack_90 = extraout_x8_00;
  FUN_1073e3cc0(alStack_1250,*(undefined8 *)*param_4);
  puVar14 = (undefined8 *)*param_2;
  if (*(int *)(*(long *)(alStack_1250[0] + 8) + 0x2e8) == 0) {
    puVar5 = (undefined8 *)0x2b8;
    __Znwm();
    func_0x0001073e5d10();
    *puVar5 = &PTR_DAT_1109ac658;
    ppplStack_1260 = (long ***)(puVar5 + 2);
    *ppplStack_1260 = (long **)0x0;
    puStack_1258 = puVar5 + 1;
    *puStack_1258 = ppplStack_1260;
    puVar5[3] = 0;
    func_0x000104c2f64c(puVar5 + 4);
    pppplVar12 = (long ****)(unaff_x19 + 0x58);
    *pppplVar12 = (long ***)0x0;
    func_0x0001073e55f8();
    uVar19 = puVar14[1];
    uVar20 = *puVar14;
    pppplVar18 = (long ****)(unaff_x19 + 0xe0);
    *pppplVar18 = (long ***)&UNK_10e52b660;
    ppplStack_1288 = (long ***)(unaff_x19 + 200);
    *ppplStack_1288 = (long **)0x0;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar19;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar20;
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    *(undefined **)(unaff_x19 + 0x100) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x108) = 0;
    *(undefined8 *)(unaff_x19 + 0x110) = 0;
    *(undefined8 *)(unaff_x19 + 0x118) = 0;
    *(undefined **)(unaff_x19 + 0x120) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x198) = 0;
    *(undefined8 *)(unaff_x19 + 400) = 0;
    *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x19 + 0x150) = 0;
    *(undefined8 *)(unaff_x19 + 0x148) = 0;
    *(undefined8 *)(unaff_x19 + 0x179) = 0;
    *(undefined8 *)(unaff_x19 + 0x171) = 0;
    *(undefined8 *)(unaff_x19 + 0x160) = 0;
    *(undefined8 *)(unaff_x19 + 0x158) = 0;
    *(undefined8 *)(unaff_x19 + 0x170) = 0;
    *(undefined8 *)(unaff_x19 + 0x168) = 0;
    *(undefined1 *)(unaff_x19 + 0x18c) = 0;
    *(undefined8 *)(unaff_x19 + 0x184) = 0;
    *(undefined8 *)(unaff_x19 + 0x130) = 0;
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    *(undefined1 *)(unaff_x19 + 0x140) = 0;
    lVar11 = param_2[9];
    *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
    *(long *)(unaff_x19 + 0x1c8) = lVar11;
    lVar11 = param_2[7];
    *(long *)(unaff_x19 + 0x1d0) = param_2[5];
    *(long *)(unaff_x19 + 0x1d8) = lVar11;
    lStack_1270 = unaff_x19 + 0x1e0;
    FUN_1073dd510(lStack_1270,param_2[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e56dc();
    ppplStack_1268 = (long ***)extraout_x10_00;
    func_0x0001073e5d38();
    func_0x000104c2f64c(unaff_x19 + 0x260);
    func_0x0001073e561c();
    func_0x0001073e55bc();
    func_0x0001073e594c();
    func_0x0001073e5770();
    func_0x000107288cd8(applStack_688);
    func_0x0001073e5934();
    func_0x0001073e56b8(auStack_1d0);
    func_0x0001073e574c();
    func_0x0001073e5530();
    func_0x0001073e5724();
    func_0x0001073e5648();
    ppplStack_360 = (long ***)pppplVar18;
    func_0x0001073e58ac();
    FUN_1073e49f0(unaff_x19 + 0x140,applStack_688);
    func_0x0001073e58c4();
    func_0x0001073e56ac();
    func_0x0001073e5bd0();
    func_0x0001073e590c(unaff_x19 + 0x260);
    func_0x0001073e567c();
    func_0x0001073e56ac();
    func_0x0001073e5be4();
    func_0x0001073e590c(unaff_x19 + 0x20);
    func_0x0001073e567c();
    pppplVar8 = (long ****)&DAT_10f42888c;
    pppplVar7 = pppplVar12;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    plVar2 = (long *)plStack_12a0[1];
    pppplVar17 = (long ****)0x1;
    ppplStack_12b8 = (long ***)pppplVar18;
    ppplStack_12b0 = (long ***)pppplVar12;
    for (plVar13 = (long *)*plStack_12a0; plVar13 != plVar2; plVar13 = plVar13 + 2) {
      lVar11 = *plVar13;
      func_0x0001073e5aa0(auStack_3a0);
      func_0x0001073e5aa0(auStack_340);
      func_0x0001073e595c();
      func_0x0001073bc804(auStack_3a0);
      if (*(int *)(lVar11 + 0x2c0) == 0) {
        uVar9 = 0;
        func_0x000104c2d614();
        if ((uVar9 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x298) = 1;
          auStack_3a0[0] = 1;
          func_0x0001073e5868(param_2[3],auStack_628);
          auStack_3a0[0] = 1;
          pppplVar8 = (long ****)applStack_688;
          func_0x0001073e5868(param_2[3]);
        }
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x298) = 1;
      }
      func_0x0001073e5a3c();
      pppplVar7 = (long ****)applStack_688;
      func_0x0001073bc804();
    }
    pppplVar12 = (long ****)param_2[8];
    func_0x0001073e57a8();
    (**(code **)(extraout_x8_06 + 0x10))();
    ppplStack_1280 = &pplStack_11f8;
    ppplStack_12a8 = &pplStack_1220;
    ppplStack_1298 = (long ***)pppplVar7;
    ppplStack_1290 = (long ***)pppplVar12;
    for (pppplVar18 = (long ****)0x0; uVar4 = pppplVar18 == pppplVar7, !(bool)uVar4;
        pppplVar18 = (long ****)((long)pppplVar18 + 1)) {
      func_0x0001073e57a8();
      (**(code **)(extraout_x8_07 + 0x18))(&ppplStack_11d0);
      func_0x0001073e5d4c(ppplStack_11d0);
      (*extraout_x8_08)();
      func_0x0001073e5c20();
      func_0x0001073e553c(applStack_688,auStack_210);
      pppplVar8 = pppplVar12;
      func_0x000107869b38(auStack_3a0,pppplVar12,applStack_688);
      func_0x00010786967c();
      func_0x0001073e5bc4();
      func_0x0001073e593c();
      func_0x0001073e567c();
      pppplVar17 = (long ****)(ulong)*(uint *)(unaff_x19 + 600);
      ppplVar15 = (long ***)0x0;
      func_0x0001073e5bdc();
      func_0x0001073e5d04();
      ppplStack_c60 = (long ***)pppplVar17;
      pplStack_c58 = (long **)ppplVar15;
      if (extraout_x8_09 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10_02 != 0);
      }
      pppplVar17 = (long ****)applStack_9b0;
      func_0x0001073e56b8();
      func_0x0001073e5514();
      func_0x0001073e5708();
      func_0x0001073e58cc();
      func_0x0001073e5b0c(ppplStack_1268);
      func_0x0001073e5c2c();
      func_0x0001073e5714();
      func_0x0001073e571c();
      func_0x0001073e5860();
      func_0x0001073e57f4();
      func_0x0001073e56ac();
      applStack_688[0]._0_1_ = 0;
      uStack_650 = 0;
      uStack_648 = 0;
      func_0x0001073e5afc();
      pppplVar16 = pppplVar17;
      func_0x0001073e58bc();
      if (((ulong)pppplVar17 & 1) != 0) {
        func_0x0001073e56ac();
        func_0x0001073e5cdc();
        func_0x0001073e5d58(ppplStack_1280);
        if ((bool)uVar4) {
          pppplVar10 = (long ****)plStack_12a0[1];
          for (pppplVar17 = (long ****)*plStack_12a0; pppplVar17 != pppplVar10;
              pppplVar17 = pppplVar17 + 2) {
            func_0x0001073e5cd0();
            if ((long ****)ppplStack_1260 != pppplVar16) {
              func_0x0001073e5bf0(pppplVar16[0xb]);
              if (iStack_3f0 != 0) {
                uVar9 = (ulong)*(uint *)(unaff_x19 + 600);
                uVar20 = 0;
                func_0x0001077512dc(applStack_9b0);
                func_0x0001073e5d04();
                uStack_11b0 = uVar9;
                uStack_11a8 = uVar20;
                if (extraout_x8_10 != 0) {
                  do {
                    func_0x0001073e54ec();
                  } while (extraout_w10_03 != 0);
                }
                func_0x0001073e56b8(&ppplStack_f10);
                func_0x0001073e5c98();
                func_0x0001073e5b6c();
                func_0x0001073e5880();
                lStack_8c0 = lStack_1270;
                func_0x0001073e5b3c(ppplStack_1268);
                func_0x0001073e5b78();
                func_0x0001073e5858();
                func_0x0001073e5a70();
                func_0x0001073e5a2c();
                func_0x0001073e5b8c();
                func_0x0001073e5a10(*(float *)(unaff_x19 + 600) + -1.0);
                func_0x0001073e57a0(auStack_b40);
                FUN_1073e3fb8(auStack_ba0);
                func_0x0001073e57b8();
                func_0x0001073e59cc();
                func_0x0001073e59ec();
                func_0x0001073e5a10(*(undefined4 *)(unaff_x19 + 600));
                func_0x0001073e57a0(auStack_df0);
                FUN_1073e3fb8(auStack_e50);
                func_0x0001073e5810();
                func_0x0001073e599c();
                func_0x0001073e59c4();
                func_0x0001073e5a10(*(float *)(unaff_x19 + 600) + 1.0);
                uVar9 = 0;
                func_0x0001073e57a0();
                FUN_1073e3fb8(auStack_1100);
                func_0x0001073e57fc();
                func_0x0001073e596c();
                func_0x0001073e597c();
                func_0x0001073e5c40();
                func_0x0001073e5944(applStack_9b0);
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(applStack_9b0);
                }
                func_0x0001073e5944(&ppplStack_c60);
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(&ppplStack_c60);
                }
                uVar9 = 0;
                func_0x000104c2d614();
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5c08();
                }
                func_0x0001073e5924(applStack_9b0,&uStack_11b0);
                func_0x0001073e5924(&ppplStack_c60,auStack_1178);
                pppplVar16 = (long ****)applStack_1140;
                func_0x000104c2fe00(pppplVar16,auStack_eb0);
                func_0x0001073e58fc();
                func_0x0001073e5a34();
                func_0x0001073e5a68();
                func_0x0001073e5850();
                func_0x0001073e5878();
                func_0x0001073e5b84();
              }
              func_0x0001073e58a4();
            }
          }
        }
        func_0x0001073e5ba0(applStack_688);
        lStack_1208 = lStack_11c8;
        ppplStack_1210 = ppplStack_11d0;
        ppplStack_11d0 = (long ***)0x0;
        lStack_11c8 = 0;
        func_0x0001073e56ac();
        pppplVar12 = (long ****)ppplStack_1290;
        pppplVar7 = (long ****)ppplStack_1298;
        ppplStack_1228 = ppplStack_1200;
        pplStack_1220 = pplStack_11f8;
        lStack_1218 = lStack_11f0;
        if (lStack_11f0 == 0) {
          ppplStack_1228 = ppplStack_12a8;
        }
        else {
          pplStack_11f8[2] = (long *)ppplStack_12a8;
          ppplStack_1200 = ppplStack_1280;
          *ppplStack_1280 = (long **)0x0;
          ppplStack_1280[1] = (long **)0x0;
        }
        pppplVar8 = &ppplStack_820;
        pppplVar10 = &ppplStack_1210;
        ppplStack_820 = (long ***)pppplVar18;
        func_0x0001073df908(ppplStack_1288,pppplVar8,pppplVar10,applStack_688,extraout_x8_11 + 0xc0,
                            &ppplStack_1228);
        func_0x0001073e5a98();
        func_0x0001073e5a90();
        func_0x000107283194(applStack_688);
        func_0x0001073e58dc();
      }
      func_0x0001073e5c38();
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
    }
  }
  else {
    puVar5 = (undefined8 *)0x2b8;
    __Znwm();
    func_0x0001073e5d10();
    *puVar5 = &PTR_DAT_1109ac818;
    pppplVar7 = (long ****)(puVar5 + 2);
    *pppplVar7 = (long ***)0x0;
    puStack_1258 = puVar5 + 1;
    *puStack_1258 = pppplVar7;
    puVar5[3] = 0;
    func_0x000104c2f64c(puVar5 + 4);
    ppplStack_12c8 = (long ***)(unaff_x19 + 0x58);
    *ppplStack_12c8 = (long **)0x0;
    func_0x0001073e55f8();
    uVar19 = puVar14[1];
    uVar20 = *puVar14;
    ppplStack_1298 = (long ***)(unaff_x19 + 0xe0);
    *ppplStack_1298 = (long **)&UNK_10e52b660;
    ppplStack_12a8 = (long ***)(unaff_x19 + 200);
    *ppplStack_12a8 = (long **)0x0;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar19;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar20;
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    *(undefined **)(unaff_x19 + 0x100) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x108) = 0;
    *(undefined8 *)(unaff_x19 + 0x110) = 0;
    *(undefined8 *)(unaff_x19 + 0x118) = 0;
    *(undefined **)(unaff_x19 + 0x120) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x198) = 0;
    *(undefined8 *)(unaff_x19 + 400) = 0;
    *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x19 + 0x150) = 0;
    *(undefined8 *)(unaff_x19 + 0x148) = 0;
    *(undefined8 *)(unaff_x19 + 0x179) = 0;
    *(undefined8 *)(unaff_x19 + 0x171) = 0;
    *(undefined8 *)(unaff_x19 + 0x160) = 0;
    *(undefined8 *)(unaff_x19 + 0x158) = 0;
    *(undefined8 *)(unaff_x19 + 0x170) = 0;
    *(undefined8 *)(unaff_x19 + 0x168) = 0;
    *(undefined1 *)(unaff_x19 + 0x18c) = 0;
    *(undefined8 *)(unaff_x19 + 0x184) = 0;
    *(undefined8 *)(unaff_x19 + 0x130) = 0;
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    *(undefined1 *)(unaff_x19 + 0x140) = 0;
    lVar11 = param_2[9];
    *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
    *(long *)(unaff_x19 + 0x1c8) = lVar11;
    lVar11 = param_2[7];
    *(long *)(unaff_x19 + 0x1d0) = param_2[5];
    *(long *)(unaff_x19 + 0x1d8) = lVar11;
    lStack_1270 = unaff_x19 + 0x1e0;
    FUN_1073dd510(lStack_1270,param_2[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e56dc();
    ppplStack_1260 = (long ***)extraout_x10;
    func_0x0001073e5d38();
    func_0x000104c2f64c(unaff_x19 + 0x260);
    func_0x0001073e561c();
    func_0x0001073e55bc();
    func_0x0001073e594c();
    func_0x0001073e5770();
    func_0x000107288cd8(applStack_688);
    func_0x0001073e5934();
    func_0x0001073e56b8(auStack_1d0);
    func_0x0001073e574c();
    func_0x0001073e5530();
    func_0x0001073e5724();
    func_0x0001073e5648();
    ppplVar15 = ppplStack_1298;
    ppplStack_360 = ppplStack_1298;
    func_0x0001073e58ac();
    FUN_1073e49f0(ppplVar15 + 0xc,applStack_688);
    func_0x0001073e58c4();
    func_0x0001073e56ac();
    func_0x0001073e5bd0();
    func_0x0001073e590c(unaff_x19 + 0x260);
    func_0x0001073e567c();
    func_0x0001073e56ac();
    func_0x0001073e5be4();
    func_0x0001073e590c(unaff_x19 + 0x20);
    func_0x0001073e567c();
    pppplVar8 = (long ****)&DAT_10f42888c;
    pppplVar18 = (long ****)ppplStack_12c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    pppplVar17 = (long ****)plStack_12a0[1];
    ppplStack_1268 = (long ***)pppplVar7;
    for (pppplVar12 = (long ****)*plStack_12a0; pppplVar12 != pppplVar17;
        pppplVar12 = pppplVar12 + 2) {
      ppplVar15 = *pppplVar12;
      func_0x0001073e5aa0(auStack_3a0);
      func_0x0001073e5aa0(auStack_340);
      func_0x0001073e595c();
      func_0x0001073bc804(auStack_3a0);
      if (*(int *)(ppplVar15 + 0x58) == 0) {
        uVar9 = 0;
        func_0x000104c2d614();
        if ((uVar9 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x298) = 1;
          auStack_3a0[0] = 1;
          func_0x0001073e5868(param_2[3],auStack_628);
          auStack_3a0[0] = 1;
          pppplVar8 = (long ****)applStack_688;
          func_0x0001073e5868(param_2[3]);
        }
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x298) = 1;
      }
      func_0x0001073e5a3c();
      pppplVar18 = (long ****)applStack_688;
      func_0x0001073bc804();
    }
    pppplVar16 = (long ****)param_2[8];
    func_0x0001073e57a8();
    (**(code **)(extraout_x8_01 + 0x10))();
    pppplVar17 = (long ****)0x0;
    ppplStack_1288 = &pplStack_11f8;
    ppplStack_1290 = &pplStack_1220;
    ppplStack_12b8 = &pplStack_c58;
    pppplVar7 = (long ****)ppplStack_1268;
    ppplStack_12b0 = (long ***)pppplVar16;
    ppplStack_1280 = (long ***)pppplVar18;
    while( true ) {
      uVar3 = pppplVar17 == (long ****)ppplStack_1280;
      uVar4 = true;
      if ((bool)uVar3) break;
      func_0x0001073e57a8();
      (**(code **)(extraout_x8_02 + 0x18))(&ppplStack_11d0);
      func_0x0001073e5d4c(ppplStack_11d0);
      (*extraout_x8_03)();
      func_0x0001073e5c20();
      func_0x0001073e553c(applStack_688,auStack_210);
      pppplVar8 = pppplVar16;
      func_0x000107869b38(auStack_3a0,pppplVar16,applStack_688);
      func_0x00010786967c();
      func_0x0001073e5bc4();
      func_0x0001073e593c();
      func_0x0001073e567c();
      pppplVar18 = (long ****)(ulong)*(uint *)(unaff_x19 + 600);
      ppplVar15 = (long ***)0x0;
      func_0x0001073e5bdc();
      func_0x0001073e5d04();
      ppplStack_c60 = (long ***)pppplVar18;
      pplStack_c58 = (long **)ppplVar15;
      if (extraout_x8_04 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10 != 0);
      }
      pppplVar18 = (long ****)applStack_9b0;
      func_0x0001073e56b8();
      func_0x0001073e5514();
      func_0x0001073e5708();
      func_0x0001073e58cc();
      func_0x0001073e5b0c(ppplStack_1260);
      func_0x0001073e5c2c();
      func_0x0001073e5714();
      func_0x0001073e571c();
      func_0x0001073e5860();
      func_0x0001073e57f4();
      func_0x0001073e56ac();
      applStack_688[0]._0_1_ = 0;
      uStack_650 = 0;
      uStack_648 = 0;
      func_0x0001073e5afc();
      pppplVar6 = pppplVar18;
      func_0x0001073e58bc();
      if (((ulong)pppplVar18 & 1) != 0) {
        func_0x0001073e56ac();
        func_0x0001073e5cdc();
        func_0x0001073e5d58(ppplStack_1288);
        if ((bool)uVar3) {
          lVar1 = plStack_12a0[1];
          for (lVar11 = *plStack_12a0; lVar11 != lVar1; lVar11 = lVar11 + 0x10) {
            func_0x0001073e5cd0();
            if (pppplVar7 != pppplVar6) {
              func_0x0001073e5bf0(pppplVar6[0xb]);
              if (iStack_3f0 != 0) {
                uVar9 = (ulong)*(uint *)(unaff_x19 + 600);
                uVar20 = 0;
                func_0x0001077512dc(applStack_9b0);
                func_0x0001073e5d04();
                uStack_11b0 = uVar9;
                uStack_11a8 = uVar20;
                if (extraout_x8_05 != 0) {
                  do {
                    func_0x0001073e54ec();
                  } while (extraout_w10_00 != 0);
                }
                func_0x0001073e56b8(&ppplStack_f10);
                func_0x0001073e5c98();
                func_0x0001073e5b6c();
                func_0x0001073e5880();
                lStack_8c0 = lStack_1270;
                func_0x0001073e5b3c(ppplStack_1260);
                func_0x0001073e5b78();
                func_0x0001073e5858();
                func_0x0001073e5a70();
                func_0x0001073e5a2c();
                func_0x0001073e5b8c();
                func_0x0001073e5a10(*(float *)(unaff_x19 + 600) + -1.0);
                func_0x0001073e57a0(auStack_b40);
                FUN_1073e3fb8(auStack_ba0);
                func_0x0001073e57b8();
                func_0x0001073e59cc();
                func_0x0001073e59ec();
                func_0x0001073e5a10(*(undefined4 *)(unaff_x19 + 600));
                func_0x0001073e57a0(auStack_df0);
                FUN_1073e3fb8(auStack_e50);
                func_0x0001073e5810();
                func_0x0001073e599c();
                func_0x0001073e59c4();
                func_0x0001073e5a10(*(float *)(unaff_x19 + 600) + 1.0);
                uVar9 = 0;
                func_0x0001073e57a0();
                FUN_1073e3fb8(auStack_1100);
                func_0x0001073e57fc();
                func_0x0001073e596c();
                func_0x0001073e597c();
                func_0x0001073e5c40();
                func_0x0001073e5944(applStack_9b0);
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(applStack_9b0);
                }
                func_0x0001073e5944(&ppplStack_c60);
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5548(&ppplStack_c60);
                }
                uVar9 = 0;
                func_0x000104c2d614();
                if ((uVar9 & 1) == 0) {
                  func_0x0001073e5a4c();
                  func_0x0001073e5c08();
                }
                func_0x0001073e5924(applStack_9b0,&uStack_11b0);
                func_0x0001073e5924(&ppplStack_c60,auStack_1178);
                pppplVar6 = (long ****)applStack_1140;
                func_0x000104c2fe00(pppplVar6,auStack_eb0);
                func_0x0001073e58fc();
                func_0x0001073e5a34();
                func_0x0001073e5a68();
                func_0x0001073e5850();
                func_0x0001073e5878();
                func_0x0001073e5b84();
                pppplVar7 = (long ****)ppplStack_1268;
              }
              func_0x0001073e58a4();
            }
          }
        }
        func_0x0001073e5ba0(&uStack_11b0);
        lStack_1208 = lStack_11c8;
        ppplStack_1210 = ppplStack_11d0;
        ppplStack_11d0 = (long ***)0x0;
        lStack_11c8 = 0;
        pppplVar12 = *(long *****)(lStack_11c0 + 8);
        ppplStack_1228 = ppplStack_1200;
        pplStack_1220 = pplStack_11f8;
        lStack_1218 = lStack_11f0;
        if (lStack_11f0 == 0) {
          ppplStack_1228 = ppplStack_1290;
        }
        else {
          pplStack_11f8[2] = (long *)ppplStack_1290;
          ppplStack_1200 = ppplStack_1288;
          *ppplStack_1288 = (long **)0x0;
          ppplStack_1288[1] = (long **)0x0;
        }
        lVar11 = param_2[6];
        func_0x0001073e5bdc(*(undefined4 *)(unaff_x19 + 600));
        lStack_f08 = lStack_1208;
        ppplStack_f10 = ppplStack_1210;
        if (lStack_1208 != 0) {
          do {
            func_0x0001073e54ec();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001073e56b8(applStack_9b0);
        func_0x0001073e5514();
        func_0x0001073e5708();
        func_0x000107751444(applStack_688,&ppplStack_f10,&ppplStack_820);
        ppplStack_590 = ppplStack_1260;
        puStack_5a8 = auStack_11e8;
        uVar20 = 0;
        lStack_5a0 = lVar11;
        FUN_1073e0de0(0,ppplStack_1298 + 0x16,applStack_688);
        func_0x0001073e5714();
        func_0x0001073e571c();
        func_0x000107267e44(&ppplStack_f10);
        func_0x0001073e57f4();
        pppplVar16 = (long ****)ppplStack_12b0;
        lStack_818 = lStack_1208;
        ppplStack_820 = ppplStack_1210;
        ppplStack_1210 = (long ***)0x0;
        lStack_1208 = 0;
        ppplStack_c60 = ppplStack_1228;
        pplStack_c58 = pplStack_1220;
        lStack_c50 = lStack_1218;
        if (lStack_1218 == 0) {
          ppplStack_c60 = ppplStack_12b8;
        }
        else {
          pplStack_1220[2] = (long *)ppplStack_12b8;
          ppplStack_1228 = ppplStack_1290;
          *ppplStack_1290 = (long **)0x0;
          ppplStack_1290[1] = (long **)0x0;
        }
        FUN_1073dfae4(uVar20,applStack_688,pppplVar17,&ppplStack_820,&uStack_11b0,pppplVar12 + 0x18,
                      &ppplStack_c60);
        FUN_1073dff1c(&ppplStack_c60);
        FUN_107330fdc(&ppplStack_820);
        pppplVar8 = *(long *****)(unaff_x19 + 200);
        FUN_1073e0fc0(pppplVar8,*(undefined8 *)(unaff_x19 + 0xd0),applStack_688);
        pppplVar10 = (long ****)applStack_688;
        FUN_1073e0e10(ppplStack_12a8);
        func_0x0001073dfdc0(applStack_688);
        func_0x0001073e5a98();
        func_0x0001073e5a90();
        func_0x000107283194(&uStack_11b0);
        func_0x0001073e58dc();
      }
      func_0x0001073e5c38();
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
      pppplVar17 = (long ****)((long)pppplVar17 + 1);
    }
  }
  func_0x0001073e5764();
  func_0x0001073e5c6c();
  func_0x000107331000(auStack_1240);
  *plStack_12c0 = unaff_x19;
  FUN_1073e3ddc(alStack_1250);
  func_0x0001073e54d8(uStack_90);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001073e5844();
    if ((int)pppplVar8 == 0) {
      func_0x0001073e5914();
      func_0x0001073e5a68();
      func_0x0001073e5850();
      func_0x0001073e5878();
      func_0x000107267da8(&ppplStack_820);
      func_0x0001073e58a4();
      func_0x0001073e58dc();
      func_0x000107267da8(auStack_3a0);
      func_0x0001073e5a88();
      func_0x0001073e5524();
      func_0x0001073e5a78();
      func_0x0001073e5764();
      func_0x0001073e5c6c();
      func_0x0001073dff80(unaff_x19 + 0x2a0);
      func_0x0001073e59e4();
      func_0x0001073e5ae4();
      FUN_1073e0028(lStack_1270);
      ppplVar15 = ppplStack_1298;
      func_0x0001073e4b5c(ppplStack_1298 + 0xc);
      func_0x000107266af0(ppplVar15);
      FUN_1073e00c4(ppplStack_12a8);
      func_0x0001073e5870();
      func_0x000107331000(uStack_1278);
      pppplVar7 = (long ****)ppplStack_12c8;
    }
    else {
      func_0x0001073e5764();
      func_0x0001073e5c6c();
      func_0x0001073dff80(unaff_x19 + 0x2a0);
      func_0x0001073e59e4();
      func_0x0001073e5ae4();
      FUN_1073e0028(lStack_1270);
      func_0x0001073e4b5c(pppplVar17 + 0xc);
      func_0x000107266af0(pppplVar17);
      FUN_1073e00c4(ppplStack_1288);
      func_0x0001073e5870();
      func_0x000107331000(uStack_1278);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar7);
    func_0x0001073e5ce8();
    func_0x0001073e0164(puStack_1258);
    func_0x000107331000(auStack_1240);
    __ZdlPv();
    func_0x000104bd46a0();
    pcStack_12d8 = FUN_1073e3cc0;
    puStack_12e0 = &stack0xfffffffffffffff0;
    if (pppplVar10 != (long ****)0x0) {
      do {
        func_0x0001073e54ec();
      } while (extraout_w10_04 != 0);
    }
    *pppplVar12 = (long ***)pppplVar8;
    pppplVar12[1] = (long ***)pppplVar10;
    uStack_12f0 = 0;
    uStack_12e8 = 0;
    FUN_1073e3ddc(&uStack_12f0);
    return;
  }
  return;
}



/* Entry: 1073e3cc0; end: 1073e3cf7;  */

void FUN_1073e3cc0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    do {
      func_0x0001073e54ec();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e3ddc(&uStack_20);
  return;
}



/* Entry: 1073e3cf8; end: 1073e3d8b;  */

void FUN_1073e3cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073e3d8c(&uStack_50,param_3);
  uVar1 = 0x600;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_107499d14();
  func_0x0001073e3e04(&uStack_40);
  *param_1 = uVar1;
  func_0x0001073e3e04(&uStack_50);
  return;
}



/* Entry: 1073e3d8c; end: 1073e3dd3;  */

void FUN_1073e3d8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0001073e3e04(&uStack_20);
  return;
}



/* Entry: 1073e3dd4; end: 1073e3ddb;  */

void FUN_1073e3dd4(void)

{
  return;
}



/* Entry: 1073e3ddc; end: 1073e3e2b;  */

long FUN_1073e3ddc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e3e2c; end: 1073e3fb7;  */

void FUN_1073e3e2c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  undefined8 *puStack_d0;
  uint uStack_c8;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  
  uVar1 = SUB81(&puStack_d0,0);
  puVar4 = param_4;
  func_0x0001073e5d6c();
  uStack_90 = 1;
  puStack_98 = puVar4;
  func_0x0001073e43f4(param_3);
  puStack_d0 = &puStack_98;
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x30);
  if (*(uint *)(unaff_x20 + 0x30) == 0xffffffff) {
    uVar5 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ac6c0)[uVar5])();
  uStack_c8 = uStack_c8 & 0xffffff00;
  puStack_d0 = param_4;
  FUN_1073e4550(unaff_x20 + 0x38);
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x68);
  if (*(uint *)(unaff_x20 + 0x68) == 0xffffffff) {
    uVar5 = 0xffffffffffffffff;
  }
  puStack_60 = &puStack_d0;
  (*(code *)(&PTR_LAB_1109ac6d8)[uVar5])(&puStack_98,&puStack_60,unaff_x20 + 0x38);
  lVar2 = unaff_x20;
  func_0x0001073e43ac();
  uStack_c8 = 0x40000000;
  puStack_d0 = param_4;
  FUN_1073e48a4(&puStack_d0,unaff_x20 + 0xa8);
  uStack_c8 = 0x3f800000;
  uVar6 = param_1;
  puStack_d0 = param_4;
  FUN_1073e48a4(&puStack_d0,unaff_x20 + 0xe0);
  lVar3 = unaff_x20;
  func_0x0001073e43d0();
  uStack_58 = 0;
  puStack_60 = param_4;
  FUN_1073dd8d8(&puStack_d0,&puStack_60,unaff_x20 + 0x150);
  *unaff_x19 = uVar1;
  FUN_1073e46e0(unaff_x19 + 8,&puStack_98);
  unaff_x19[0x40] = (char)lVar2;
  *(undefined4 *)(unaff_x19 + 0x44) = param_1;
  *(undefined4 *)(unaff_x19 + 0x48) = uVar6;
  unaff_x19[0x4c] = (char)lVar3;
  FUN_1073dd9b0(unaff_x19 + 0x50,&puStack_d0);
  FUN_1073dd4c4(&puStack_d0);
  FUN_1073e434c(&puStack_98);
  return;
}



/* Entry: 1073e3fb8; end: 1073e3fd3;  */

void FUN_1073e3fb8(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1073e3fd4; end: 1073e3fe7;  */

void FUN_1073e3fd4(void)

{
  func_0x0001073e4d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e3fe8; end: 1073e3feb;  */

void FUN_1073e3fe8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x260);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e3fec; end: 1073e42af;  */

long ** FUN_1073e3fec(void)

{
  long **pplVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  long **pplVar8;
  undefined8 uVar9;
  long **pplVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long *in_x3;
  long *plVar14;
  ulong in_x4;
  ulong uVar15;
  undefined8 in_x5;
  long **in_x6;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long *plVar16;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar17;
  long **unaff_x20;
  long **pplVar18;
  long **unaff_x23;
  long *plVar19;
  long **unaff_x25;
  long **pplVar20;
  long **pplVar21;
  long lVar22;
  long **pplVar23;
  undefined1 auStack_a41 [9];
  long **pplStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  long **pplStack_a18;
  long *plStack_a10;
  long lStack_a08;
  undefined1 auStack_9f8 [24];
  long *plStack_9e0;
  long lStack_9d8;
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [56];
  undefined1 auStack_958 [56];
  undefined1 uStack_920;
  undefined8 uStack_918;
  undefined1 auStack_8e0 [400];
  undefined1 auStack_750 [64];
  undefined8 uStack_710;
  long **pplStack_700;
  long **pplStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined1 *puStack_6e0;
  long lStack_6d8;
  long **pplStack_6d0;
  long *plStack_6c8;
  long **pplStack_6c0;
  undefined1 ***pppuStack_6b0;
  code *pcStack_6a8;
  long *aplStack_6a0 [2];
  long lStack_690;
  undefined1 *puStack_678;
  undefined8 uStack_670;
  long alStack_668 [3];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  char cStack_620;
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined8 uStack_5e8;
  long **pplStack_5e0;
  long **pplStack_5d8;
  long **pplStack_5d0;
  long **pplStack_5c8;
  long **pplStack_5c0;
  long **pplStack_5b8;
  long **pplStack_5b0;
  long **pplStack_5a8;
  long **pplStack_5a0;
  ulong uStack_598;
  undefined1 **ppuStack_590;
  code *pcStack_588;
  undefined1 auStack_578 [400];
  undefined8 uStack_3e8;
  long **pplStack_3e0;
  long **pplStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_380;
  undefined1 auStack_368 [24];
  long **pplStack_350;
  undefined1 auStack_2f0 [112];
  long *aplStack_280 [2];
  long *plStack_270;
  long *plStack_268;
  undefined1 auStack_220 [432];
  undefined8 uStack_70;
  
  func_0x0001073e59f4();
  func_0x0001073e54fc();
  func_0x0001073e5554();
  func_0x0001073e59ac();
  func_0x0001073e598c();
  func_0x000107288cd8(aplStack_280);
  func_0x0001073e58e4();
  func_0x0001073e5c4c();
  func_0x0001073e57e0();
  func_0x0001073e5974();
  func_0x0001073e5c14();
  func_0x0001073e57cc();
  func_0x0001073e591c();
  func_0x0001073e5684();
  FUN_10745f750(auStack_368,unaff_x20[0x3a]);
  pplVar5 = (long **)unaff_x20[0x3b];
  FUN_10750a49c(auStack_2f0);
  func_0x0001073e573c();
  func_0x0001073e59a4();
  func_0x0001073e5bfc();
  func_0x0001073e56a4();
  func_0x0001073e58f4();
  pplVar18 = (long **)0x0;
  pplVar21 = (long **)unaff_x20[0x1a];
  for (pplVar23 = (long **)unaff_x20[0x19]; pplVar23 != pplVar21; pplVar23 = pplVar23 + 0xb) {
    unaff_x23 = pplVar23 + 1;
    pplVar6 = pplStack_350;
    FUN_107454dc8(pplStack_350,unaff_x23);
    pplVar18 = (long **)((long)pplVar6 + (long)pplVar18);
  }
  pplVar6 = pplStack_350;
  func_0x0001073e5cf0();
  pplVar11 = pplVar18;
  func_0x000107454e54();
  pplVar1 = (long **)unaff_x20[0x1a];
  pplVar23 = aplStack_280;
  pplVar20 = (long **)unaff_x20[0x19];
  while (pplVar20 != pplVar1) {
    func_0x0001073e5824();
    func_0x0001073e59a4();
    pplVar21 = aplStack_280;
    FUN_107330078();
    func_0x0001073e5d4c(uStack_380);
    (*extraout_x8)();
    func_0x00010726236c(auStack_2f0);
    puVar7 = auStack_2f0;
    func_0x0001073e553c(aplStack_280);
    func_0x0001073e5ac4();
    func_0x00010786967c();
    puStack_3c0 = puVar7;
    func_0x0001073e5aec();
    func_0x0001073e5a60();
    func_0x0001073e56a4();
    func_0x0001073e5594();
    func_0x0001073e573c();
    (*extraout_x9)(auStack_220);
    func_0x0001073e5aa8();
    func_0x0001073e5c58();
    pplVar6 = aplStack_280;
    func_0x0001073e03f8();
    func_0x0001073e5b54();
    (*extraout_x8_00)();
    in_x6 = pplVar18 + -4;
    unaff_x25 = pplVar18 + -2;
    pplVar11 = pplVar6;
    func_0x0001073e56c0();
    func_0x0001073e5a24();
    func_0x0001073e58ec();
    func_0x0001073e5a1c();
    pplVar20 = pplVar18 + 4;
  }
  uVar3 = pplStack_350[0x1d] == pplStack_350[0x1e];
  if (!(bool)uVar3) {
    pplVar5 = (long **)unaff_x20[1];
    unaff_x20 = unaff_x20 + 2;
    while (uVar3 = pplVar5 == unaff_x20, !(bool)uVar3) {
      func_0x0001073e5d24();
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10 != 0);
      }
      plStack_268 = pplVar5[0xc];
      plStack_270 = pplVar5[0xb];
      if (pplVar5[0xc] != (long *)0x0) {
        do {
          func_0x0001073e54ec();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001073e59d4();
      func_0x0001073e08f4(aplStack_280);
      func_0x00010002c7d4();
      pplVar6 = pplVar5;
    }
  }
  func_0x0001073e59bc();
  func_0x0001073e592c();
  func_0x0001073e5984();
  func_0x0001073e54d8(uStack_70);
  if ((bool)uVar3) {
    return pplVar6;
  }
  ___stack_chk_fail();
  pplVar8 = pplVar6;
  func_0x0001073e59bc();
  func_0x0001073e592c();
  func_0x0001073e5984();
  func_0x0001073e5640();
  if (((ulong)pplVar8[0x53] & 1) != 0) {
    return (long **)0x1;
  }
  pcStack_3c8 = FUN_1073e42b0;
  pplVar10 = pplVar8 + 0x3f;
  pplStack_3e0 = unaff_x20;
  pplStack_3d8 = pplVar6;
  puStack_3d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  uStack_3e8 = extraout_x8_02;
  func_0x000107751284(auStack_578);
  uVar3 = *(char *)(pplVar8 + 0x41) == '\x01';
  if ((bool)uVar3) {
    plVar16 = pplVar8[0x3f];
    uVar3 = (char)plVar16[4] == '\x01';
    if ((bool)uVar3) {
      uVar17 = (ulong)(*(byte *)((long)plVar16 + 0x22) ^ 1);
    }
    else {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 0;
  }
  func_0x000107267da8(auStack_578);
  func_0x0001073ec008(uStack_3e8);
  if ((bool)uVar3) {
    return (long **)(ulong)((uint)uVar17 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pplVar6 = (long **)0x0;
  pplVar8 = aplStack_6a0;
  pcStack_588 = FUN_1073eb6b8;
  plVar14 = in_x3;
  uVar15 = in_x4;
  pplStack_5e0 = pplVar1;
  pplStack_5d8 = pplVar23;
  pplStack_5d0 = pplVar20;
  pplStack_5c8 = unaff_x25;
  pplStack_5c0 = pplVar21;
  pplStack_5b8 = unaff_x23;
  pplStack_5b0 = pplVar18;
  pplStack_5a8 = pplVar5;
  pplStack_5a0 = unaff_x20;
  uStack_598 = uVar17;
  ppuStack_590 = &puStack_3d0;
  func_0x0001073ec044();
  uStack_5e8 = extraout_x8_04;
  *(undefined4 *)(extraout_x8_03 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_03 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_03 + 0x40) = 1;
  plVar16 = *pplVar11;
  plVar12 = pplVar11[1];
  func_0x0001072d306c();
  plVar19 = (long *)lStack_690;
  do {
    if (plVar19 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_5e8);
      if ((bool)uVar3) {
        return pplVar8;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_03);
      __Unwind_Resume(pplVar8);
      uStack_6f0 = 2;
      pcStack_6a8 = FUN_1073eb8e0;
      plVar13 = plVar12;
      pplStack_a18 = in_x6;
      pplStack_700 = pplVar1;
      pplStack_6f8 = pplVar23;
      puStack_6e8 = auStack_650;
      puStack_6e0 = auStack_618;
      lStack_6d8 = (long)plVar19;
      pplStack_6d0 = pplVar10;
      plStack_6c8 = in_x3;
      pplStack_6c0 = pplVar8;
      pppuStack_6b0 = &ppuStack_590;
      func_0x0001073ec044();
      pplVar18 = (long **)*plVar13;
      uStack_710 = extraout_x8_05;
      (*(code *)(*pplVar18)[2])();
      pplVar23 = pplVar18;
      for (pplVar21 = (long **)0x0; bVar4 = pplVar21 == pplVar18, !bVar4;
          pplVar21 = (long **)((long)pplVar21 + 1)) {
        (**(code **)(*(long *)*plVar12 + 0x18))(&plStack_9e0,(long *)*plVar12,pplVar21);
        (**(code **)(*plStack_9e0 + 0x30))();
        func_0x00010726236c(auStack_750);
        func_0x0001072e7640(auStack_8e0,auStack_750,0x1138369c0);
        uVar9 = in_x5;
        func_0x000107869b38(auStack_958,in_x5,auStack_8e0);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_9f8,auStack_958,uVar9);
        FUN_1073de9d8(auStack_958);
        func_0x000104c2f714(auStack_8e0);
        lStack_a08 = lStack_9d8;
        plStack_a10 = plStack_9e0;
        if (lStack_9d8 != 0) {
          plVar19 = (long *)(lStack_9d8 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar4) {
              *plVar19 = *plVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104c2fe00(auStack_9c8,plVar14);
        (**(code **)(*(long *)*plVar12 + 0x20))(auStack_990);
        func_0x0001073c4f74(auStack_958,auStack_9c8);
        func_0x000107751444(plVar16,&plStack_a10,auStack_958);
        plVar16[0x1c] = (long)auStack_9f8;
        func_0x000107751334(auStack_8e0,plVar16);
        func_0x000107267e8c(auStack_958);
        func_0x000107267eac(auStack_9c8);
        func_0x000107267e44(&plStack_a10);
        auStack_958[0] = 0;
        uStack_920 = 0;
        uStack_918 = 0;
        uVar17 = uVar15;
        func_0x00010777faa8(uVar15,auStack_8e0,auStack_958);
        func_0x00010724b3d8(auStack_958);
        if ((uVar17 & 1) != 0) {
          FUN_1073ebfe0(pplStack_a18,auStack_8e0);
        }
        func_0x000107267da8(auStack_8e0);
        func_0x00010726b264(auStack_9f8);
        func_0x00010724b3d8(auStack_750);
        pplVar23 = &plStack_9e0;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_710);
      if (bVar4) {
        return pplVar23;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_8e0);
      func_0x00010726b264(auStack_9f8);
      func_0x00010724b3d8(auStack_750);
      FUN_107330fdc(&plStack_9e0);
      pplVar18 = pplVar23;
      __Unwind_Resume();
      pcStack_a28 = FUN_1073ebb78;
      pplVar21 = pplVar18;
      if (*(uint *)(pplVar18 + 2) != 0xffffffff) {
        pplVar21 = (long **)auStack_a41;
        auStack_a41._1_8_ = in_x5;
        pplStack_a38 = pplVar23;
        pppuStack_a30 = &pppuStack_6b0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar18 + 2)])(pplVar21,pplVar18);
      }
      *(undefined4 *)(pplVar18 + 2) = 0xffffffff;
      return pplVar21;
    }
    if (((uint)in_x4 >> 8 & 1) == 0) {
LAB_1073eb724:
      plVar16 = plVar19 + 2;
      pplVar6 = pplVar10;
      plVar12 = in_x3;
      FUN_10746e408();
      if ((int)pplVar6 != 0) {
        plVar16 = plVar19 + 2;
        plVar12 = in_x3;
        FUN_10746e5cc(auStack_650,pplVar10);
        uVar3 = false;
        if (cStack_620 == '\x01') {
          FUN_1073ebbdc(auStack_618,extraout_x8_03);
          FUN_1073ebbdc(auStack_600,auStack_650);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_03,alStack_668);
          FUN_1073ebb78(alStack_668);
          lVar22 = 0x18;
          do {
            FUN_1073ebb78(auStack_618 + lVar22);
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != -0x18);
          FUN_1073ebbdc(auStack_618,extraout_x8_03 + 0x18);
          FUN_1073ebbdc(auStack_600,auStack_638);
          uStack_670 = 2;
          puStack_678 = auStack_618;
          func_0x0001073ec054();
          plVar16 = alStack_668;
          FUN_1073ebc60(extraout_x8_03 + 0x18);
          FUN_1073ebb78(alStack_668);
          pplVar23 = (long **)0x18;
          do {
            FUN_1073ebb78(auStack_618 + (long)pplVar23);
            pplVar23 = pplVar23 + -3;
            uVar3 = pplVar23 == (long **)0xffffffffffffffe8;
          } while (!(bool)uVar3);
        }
        pplVar6 = (long **)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((in_x4 & 1) == 0) {
      func_0x0001073ec06c((*pplVar10)[6]);
      if (((ulong)pplVar6 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c((*pplVar10)[6]);
      if (((ulong)pplVar6 & 1) != 0) goto LAB_1073eb724;
    }
    plVar19 = (long *)*plVar19;
  } while( true );
}



/* Entry: 1073e42b0; end: 1073e42c7;  */

long ** FUN_1073e42b0(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar16;
  long *plVar17;
  long **pplVar18;
  undefined1 auStack_681 [9];
  long **pplStack_678;
  undefined1 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  long *plStack_650;
  long lStack_648;
  undefined1 auStack_638 [24];
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_520 [400];
  undefined1 auStack_390 [64];
  undefined8 uStack_350;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long *aplStack_2e0 [2];
  long lStack_2d0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char cStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [400];
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
    return (long **)0x1;
  }
  plVar9 = (long *)(param_1 + 0x1f8U);
  func_0x0001073ec044();
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_1b8);
  uVar2 = *(char *)(param_1 + 0x208) == '\x01';
  if ((bool)uVar2) {
    lVar15 = *(long *)(param_1 + 0x1f8U);
    uVar2 = *(char *)(lVar15 + 0x20) == '\x01';
    if ((bool)uVar2) {
      uVar16 = *(byte *)(lVar15 + 0x22) ^ 1;
    }
    else {
      uVar16 = 1;
    }
  }
  else {
    uVar16 = 0;
  }
  func_0x000107267da8(auStack_1b8);
  func_0x0001073ec008(uStack_28);
  if ((bool)uVar2) {
    return (long **)(ulong)(uVar16 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)0x0;
  pplVar5 = aplStack_2e0;
  pcStack_1c8 = FUN_1073eb6b8;
  puVar13 = param_4;
  uVar14 = param_5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  *(undefined4 *)(extraout_x8_00 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  puVar10 = (undefined1 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  uStack_228 = extraout_x8_01;
  func_0x0001072d306c();
  plVar17 = (long *)lStack_2d0;
  do {
    if (plVar17 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_228);
      if ((bool)uVar2) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_00);
      __Unwind_Resume(pplVar5);
      pcStack_2e8 = FUN_1073eb8e0;
      puVar12 = puVar11;
      uStack_658 = param_7;
      ppuStack_2f0 = &puStack_1d0;
      func_0x0001073ec044();
      pplVar6 = (long **)*puVar12;
      uStack_350 = extraout_x8_02;
      (*(code *)(*pplVar6)[2])();
      pplVar5 = pplVar6;
      for (pplVar18 = (long **)0x0; bVar3 = pplVar18 == pplVar6, !bVar3;
          pplVar18 = (long **)((long)pplVar18 + 1)) {
        (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_620,(long *)*puVar11,pplVar18);
        (**(code **)(*plStack_620 + 0x30))();
        func_0x00010726236c(auStack_390);
        func_0x0001072e7640(auStack_520,auStack_390,0x1138369c0);
        uVar7 = param_6;
        func_0x000107869b38(auStack_598,param_6,auStack_520);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_638,auStack_598,uVar7);
        FUN_1073de9d8(auStack_598);
        func_0x000104c2f714(auStack_520);
        lStack_648 = lStack_618;
        plStack_650 = plStack_620;
        if (lStack_618 != 0) {
          plVar9 = (long *)(lStack_618 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_608,puVar13);
        (**(code **)(*(long *)*puVar11 + 0x20))(auStack_5d0);
        func_0x0001073c4f74(auStack_598,auStack_608);
        func_0x000107751444(puVar10,&plStack_650,auStack_598);
        *(undefined1 **)(puVar10 + 0xe0) = auStack_638;
        func_0x000107751334(auStack_520,puVar10);
        func_0x000107267e8c(auStack_598);
        func_0x000107267eac(auStack_608);
        func_0x000107267e44(&plStack_650);
        auStack_598[0] = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uVar8 = uVar14;
        func_0x00010777faa8(uVar14,auStack_520,auStack_598);
        func_0x00010724b3d8(auStack_598);
        if ((uVar8 & 1) != 0) {
          FUN_1073ebfe0(uStack_658,auStack_520);
        }
        func_0x000107267da8(auStack_520);
        func_0x00010726b264(auStack_638);
        func_0x00010724b3d8(auStack_390);
        pplVar5 = &plStack_620;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_350);
      if (bVar3) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_520);
      func_0x00010726b264(auStack_638);
      func_0x00010724b3d8(auStack_390);
      FUN_107330fdc(&plStack_620);
      pplVar6 = pplVar5;
      __Unwind_Resume();
      pcStack_668 = FUN_1073ebb78;
      pplVar18 = pplVar6;
      if (*(uint *)(pplVar6 + 2) != 0xffffffff) {
        pplVar18 = (long **)auStack_681;
        auStack_681._1_8_ = param_6;
        pplStack_678 = pplVar5;
        pppuStack_670 = &ppuStack_2f0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar6 + 2)])(pplVar18,pplVar6);
      }
      *(undefined4 *)(pplVar6 + 2) = 0xffffffff;
      return pplVar18;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar10 = (undefined1 *)(plVar17 + 2);
      plVar4 = plVar9;
      puVar11 = param_4;
      FUN_10746e408();
      if ((int)plVar4 != 0) {
        puVar10 = (undefined1 *)(plVar17 + 2);
        puVar11 = param_4;
        FUN_10746e5cc(auStack_290,plVar9);
        uVar2 = false;
        if (cStack_260 == '\x01') {
          FUN_1073ebbdc(auStack_258,extraout_x8_00);
          FUN_1073ebbdc(auStack_240,auStack_290);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_00,auStack_2a8);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x18);
          FUN_1073ebbdc(auStack_258,extraout_x8_00 + 0x18);
          FUN_1073ebbdc(auStack_240,auStack_278);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          puVar10 = auStack_2a8;
          FUN_1073ebc60(extraout_x8_00 + 0x18);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
            uVar2 = lVar15 == -0x18;
          } while (!(bool)uVar2);
        }
        plVar4 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) != 0) goto LAB_1073eb724;
    }
    plVar17 = (long *)*plVar17;
  } while( true );
}



/* Entry: 1073e42c8; end: 1073e434b;  */

void FUN_1073e42c8(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 uStack_d1;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e54fc();
  uStack_28 = extraout_x8;
  func_0x0001073e5cc4();
  if (*(long *)(param_2 + 0xf0) != 0) {
    ppuStack_48 = &PTR_FUN_1109ac798;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_2;
    func_0x0001073e5ca4();
    func_0x0001073e5890();
  }
  func_0x0001073e5cb0();
  func_0x0001073e5a58();
  func_0x0001073e54d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x0001073e5890();
  func_0x0001073e5a58();
  func_0x0001073e5640();
  pcStack_b8 = FUN_1073e434c;
  if (*(uint *)(lVar1 + 0x30) != 0xffffffff) {
    lStack_d0 = param_2;
    lStack_c8 = param_1;
    puStack_c0 = &stack0xfffffffffffffff0;
    (*(code *)(&PTR_FUN_1109ac6b0)[*(uint *)(lVar1 + 0x30)])(&uStack_d1,lVar1);
  }
  *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1073e434c; end: 1073e439f;  */

void FUN_1073e434c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109ac6b0)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1073e43a0; end: 1073e43ab;  */

void FUN_1073e43a0(void)

{
  return;
}



/* Entry: 1073e43ac; end: 1073e440f;  */

void FUN_1073e43ac(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x0001073e5b24();
  FUN_1073dd608(param_1,extraout_x8 + 0x70);
  return;
}


