/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073c5a34; end: 1073c5abf;  */

void FUN_1073c5a34(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001073c6af4();
  func_0x00010729bd60();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1073c5ac0; end: 1073c5b47;  */

undefined8 FUN_1073c5ac0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073c6be4();
  FUN_1073c5bcc();
  func_0x0001073c6b88();
  FUN_1073c5c88(auStack_58);
  FUN_1073c5b48(lStack_48);
  lStack_48 = lStack_48 + 200;
  func_0x0001073c6d6c();
  FUN_1073c5c24();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c5dd8(auStack_58);
  return uVar1;
}



/* Entry: 1073c5b48; end: 1073c5bcb;  */

void FUN_1073c5b48(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001073c6af4();
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  FUN_1073c6750(param_1 + 0x80,unaff_x19 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x19 + 0xac);
  *(undefined8 *)(unaff_x20 + 0xa4) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  return;
}



/* Entry: 1073c5bcc; end: 1073c5c23;  */

long * FUN_1073c5bcc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x147ae147ae147af) {
    uVar1 = (param_1[2] - *param_1) / 200;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xa3d70a3d70a3d6 < uVar1) {
      plVar2 = (long *)0x147ae147ae147ae;
    }
    return plVar2;
  }
  FUN_1073c5c7c();
  func_0x0001073c6af4();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -200) * 200;
  FUN_1073c5d18(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c6a00();
  return plVar2;
}



/* Entry: 1073c5c24; end: 1073c5c7b;  */

void FUN_1073c5c24(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -200) * 200;
  FUN_1073c5d18(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c6a00();
  return;
}



/* Entry: 1073c5c7c; end: 1073c5c87;  */

void FUN_1073c5c7c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073c6b0c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073c5cc4(param_4);
  }
  func_0x0001073c70a8(200);
  return;
}



/* Entry: 1073c5c88; end: 1073c5ce7;  */

void FUN_1073c5c88(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073c5cc4(param_4);
  }
  func_0x0001073c70a8(200);
  return;
}



/* Entry: 1073c5ce8; end: 1073c5d17;  */

void FUN_1073c5ce8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x147ae147ae147af) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 200);
    return;
  }
  func_0x000104bd35f4();
  uVar1 = param_2;
  func_0x0001073c7290();
  for (; uVar1 != param_3; uVar1 = uVar1 + 200) {
    FUN_1073c5b48(param_4,uVar1);
    param_4 = lStack_48 + 200;
    lStack_48 = param_4;
  }
  func_0x0001073c7390();
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    func_0x0001073c5ec8(param_2);
  }
  FUN_1073c5d94(auStack_70);
  return;
}



/* Entry: 1073c5d18; end: 1073c5d93;  */

void FUN_1073c5d18(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lVar1 = param_2;
  func_0x0001073c7290();
  for (; lVar1 != param_3; lVar1 = lVar1 + 200) {
    FUN_1073c5b48(param_4,lVar1);
    param_4 = lStack_38 + 200;
    lStack_38 = param_4;
  }
  func_0x0001073c7390();
  for (; param_2 != param_3; param_2 = param_2 + 200) {
    func_0x0001073c5ec8(param_2);
  }
  FUN_1073c5d94(auStack_60);
  return;
}



/* Entry: 1073c5d94; end: 1073c5e03;  */

long FUN_1073c5d94(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -200;
      func_0x0001073c5ec8();
    }
  }
  return param_1;
}



/* Entry: 1073c5e04; end: 1073c5e0b;  */

void FUN_1073c5e04(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -200;
    func_0x0001073c5ec8();
  }
  return;
}



/* Entry: 1073c5e0c; end: 1073c5e3f;  */

void FUN_1073c5e0c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -200;
    func_0x0001073c5ec8();
  }
  return;
}



/* Entry: 1073c5e40; end: 1073c5e93;  */

void FUN_1073c5e40(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109ab9e8)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1073c5e94; end: 1073c5ea3;  */

void FUN_1073c5e94(undefined8 param_1,long param_2)

{
  func_0x0001073c706c();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073c5ea4; end: 1073c5f17;  */

void FUN_1073c5ea4(long param_1)

{
  func_0x0001073c706c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073c5f18; end: 1073c5f77;  */

void FUN_1073c5f18(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1073c5f78();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1073c5fb4(param_1);
  return;
}



/* Entry: 1073c5f78; end: 1073c5fb3;  */

long FUN_1073c5f78(long *param_1)

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
    piVar1 = (int *)(*param_1 + 0x18);
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



/* Entry: 1073c5fb4; end: 1073c5fd7;  */

void FUN_1073c5fb4(long param_1)

{
  func_0x0001073c706c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073c5fd8; end: 1073c5fdf;  */

void FUN_1073c5fd8(void)

{
  return;
}



/* Entry: 1073c5fe0; end: 1073c6003;  */

void FUN_1073c5fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109aba08;
  return;
}



/* Entry: 1073c6004; end: 1073c602f;  */

void FUN_1073c6004(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109aba08;
  return;
}



/* Entry: 1073c6030; end: 1073c605b;  */

void FUN_1073c6030(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073c70f8(param_2,param_1,&PTR_DAT_1109aba78);
  func_0x0001073c6fc4();
  return;
}



/* Entry: 1073c605c; end: 1073c6067;  */

undefined ** FUN_1073c605c(void)

{
  return &PTR_DAT_1109aba78;
}



/* Entry: 1073c6068; end: 1073c609f;  */

void FUN_1073c6068(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 4) {
    func_0x0001073c6e3c();
    FUN_1073c60a0();
  }
  return;
}



/* Entry: 1073c60a0; end: 1073c60fb;  */

void FUN_1073c60a0(undefined8 *param_1,short *param_2)

{
  short *psVar1;
  
  psVar1 = (short *)*param_1;
  if (*param_2 < *psVar1) {
    *psVar1 = *param_2;
  }
  if (param_2[1] < psVar1[1]) {
    psVar1[1] = param_2[1];
  }
  psVar1 = (short *)param_1[1];
  if (*psVar1 < *param_2) {
    *psVar1 = *param_2;
  }
  if (psVar1[1] < param_2[1]) {
    psVar1[1] = param_2[1];
  }
  return;
}



/* Entry: 1073c60fc; end: 1073c61b7;  */

long FUN_1073c60fc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x0001073c70c0();
  func_0x0001073c6be4();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      FUN_1073c61b8(&stack0xffffffffffffff70,uVar1 + uVar11 * 0x40);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 1073c61b8; end: 1073c61c3;  */

bool FUN_1073c61b8(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1073c61c4; end: 1073c6227;  */

void FUN_1073c61c4(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_1073c6228();
  if ((uVar3 & 1) != 0) {
    FUN_1073c6534(param_2[1] + (long)plVar2 * 0x50,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x50;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 1073c6228; end: 1073c62ff;  */

undefined1  [16] FUN_1073c6228(ulong param_1)

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
  
  func_0x0001073c70c0();
  func_0x0001073c6be4();
  func_0x0001073c6f10();
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar3 = uVar6 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
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
      FUN_1073c6390(&stack0xffffffffffffff70,unaff_x19[1] + (long)puVar4 * 0x50);
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_1073c62dc;
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
  FUN_1073c6300();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_1073c62dc:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 1073c6300; end: 1073c638f;  */

void FUN_1073c6300(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001073c6be4();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    FUN_1073c6454();
    func_0x0001073c6e3c();
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



/* Entry: 1073c6390; end: 1073c639b;  */

bool FUN_1073c6390(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1073c639c; end: 1073c6453;  */

void FUN_1073c639c(long *param_1,long param_2)

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
  func_0x00010726d624();
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
      FUN_1073c6484(param_1,lVar9 + (long)plVar3 * 0x50,lVar6);
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



/* Entry: 1073c6454; end: 1073c6483;  */

/* WARNING: Possible PIC construction at 0x0001073c63e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073c63ec) */

long * FUN_1073c6454(long *param_1)

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
    func_0x00010726d624();
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
      plVar3 = plVar3 + 10;
    }
    pcVar8 = (code *)0x1073c63ec;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_70;
    func_0x0001073c69bc();
    plVar3 = (long *)&UNK_1109aba88;
    func_0x00010ae6c914();
    func_0x0001073c69a8(extraout_x8);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar8 = FUN_1073c6528;
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



/* Entry: 1073c6484; end: 1073c64eb;  */

undefined8 FUN_1073c6484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  
  func_0x0001073c64b0(param_2,param_3);
  func_0x0001073c7200(param_3);
  func_0x0001073c71c4();
  return unaff_x19;
}



/* Entry: 1073c64ec; end: 1073c6527;  */

undefined * FUN_1073c64ec(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x0001073c69bc();
  puVar1 = &UNK_1109aba88;
  func_0x00010ae6c914();
  func_0x0001073c69a8(extraout_x8);
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



/* Entry: 1073c6528; end: 1073c6533;  */

long FUN_1073c6528(undefined8 param_1,long param_2)

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



/* Entry: 1073c6534; end: 1073c654f;  */

void FUN_1073c6534(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1073c6550; end: 1073c65cb;  */

undefined1 * FUN_1073c6550(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001073c69bc();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1073c65cc(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_1109abab8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001073c671c();
  func_0x0001073c69a8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1073c65f4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1073c65cc; end: 1073c65f3;  */

long FUN_1073c65cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073c65f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073c65f4; end: 1073c661f;  */

void FUN_1073c65f4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109abab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073c6620; end: 1073c6623;  */

void FUN_1073c6620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109abab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073c6624; end: 1073c6637;  */

void FUN_1073c6624(void)

{
  func_0x0001073c6644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073c6638; end: 1073c6653;  */

void FUN_1073c6638(long param_1)

{
  func_0x0001073c6b98(param_1 + 0x18);
  func_0x0001073c6678();
  return;
}



/* Entry: 1073c6654; end: 1073c66a3;  */

void FUN_1073c6654(void)

{
  func_0x0001073c6b98();
  func_0x0001073c6678();
  return;
}



/* Entry: 1073c66a4; end: 1073c66ab;  */

void FUN_1073c66a4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001073c66e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c66ac; end: 1073c6703;  */

void FUN_1073c66ac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001073c66e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c6704; end: 1073c672b;  */

void FUN_1073c6704(undefined8 *param_1)

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



/* Entry: 1073c672c; end: 1073c674f;  */

void FUN_1073c672c(long param_1)

{
  func_0x0001073c706c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073c6750; end: 1073c677f;  */

undefined1 * FUN_1073c6750(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_1073c6780();
  return param_1;
}



/* Entry: 1073c6780; end: 1073c67db;  */

void FUN_1073c6780(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6be4();
  FUN_1073c5e40();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109abaf8)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1073c67dc; end: 1073c67e3;  */

void FUN_1073c67dc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1073c67e4; end: 1073c6807;  */

undefined8 FUN_1073c67e4(undefined8 param_1)

{
  FUN_1073c6808(param_1);
  return param_1;
}



/* Entry: 1073c6808; end: 1073c6853;  */

void FUN_1073c6808(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001073c715c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1073c6854; end: 1073c6887;  */

void FUN_1073c6854(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109abb18;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073c6888; end: 1073c68af;  */

void FUN_1073c6888(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109abb18;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073c68b0; end: 1073c6913;  */

undefined8 FUN_1073c68b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
  FUN_1073c0134(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78),*param_2);
  func_0x0001072ab794(uVar1,uVar2);
  return 0;
}



/* Entry: 1073c6914; end: 1073c6927;  */

undefined ** FUN_1073c6914(void)

{
  return &PTR_DAT_1109abb78;
}



/* Entry: 1073c6928; end: 1073c694b;  */

void FUN_1073c6928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109abb98;
  return;
}



/* Entry: 1073c694c; end: 1073c696f;  */

void FUN_1073c694c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109abb98;
  return;
}



/* Entry: 1073c6970; end: 1073c699b;  */

void FUN_1073c6970(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073c70f8(param_2,param_1,&PTR_DAT_1109abbf8);
  func_0x0001073c6fc4();
  return;
}



/* Entry: 1073c699c; end: 1073c740b;  */

undefined ** FUN_1073c699c(void)

{
  return &PTR_DAT_1109abbf8;
}



/* Entry: 1073c740c; end: 1073c7903;  */

float FUN_1073c740c(uint *param_1,int param_2,long *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  long extraout_x8;
  long extraout_x9;
  long lVar6;
  long extraout_x10;
  uint uVar7;
  float *pfVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_a0;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float *pfStack_78;
  undefined8 uStack_70;
  
  pfVar13 = (float *)*param_3;
  pfVar12 = (float *)param_3[1];
  uVar4 = (long)pfVar12 - (long)pfVar13 >> 2;
  fVar15 = 0.0;
  pfVar8 = pfVar13;
  if (1 < uVar4) {
    for (; pfVar8 != pfVar12; pfVar8 = pfVar8 + 1) {
      fVar15 = fVar15 + *pfVar8;
    }
    fVar14 = (float)NEON_ucvtf(*param_1);
    fVar16 = 0.0;
    fVar14 = fVar14 / fVar15;
    if (((uint)((long)pfVar12 - (long)pfVar13) >> 2 & 1) != 0) {
      fVar16 = -(pfVar12[-1] * fVar14);
    }
    fVar17 = *pfVar13;
    pfStack_98 = (float *)0x0;
    uStack_90 = 0;
    pfStack_a0 = (float *)0x0;
    if (0x1555555555555555 < uVar4) {
      FUN_1073c7d1c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1073c78ec);
      (*pcVar3)();
    }
    func_0x0001073c7dac(&uStack_88,uVar4,0,&uStack_90);
    func_0x0001073c897c(uStack_80);
    pfVar13 = (float *)(extraout_x8 + extraout_x9 * extraout_x10);
    _memcpy(pfVar13);
    uVar2 = uStack_90;
    uStack_90 = uStack_70;
    pfStack_98 = pfStack_78;
    pfStack_78 = pfStack_a0;
    uStack_70 = uVar2;
    uStack_88 = pfStack_a0;
    uStack_80 = pfStack_a0;
    pfStack_a0 = pfVar13;
    FUN_1073c7e20(&uStack_88);
    uStack_88 = (float *)CONCAT44(fVar14 * fVar17,fVar16);
    uStack_80._0_2_ = CONCAT11(*(float *)*param_3 == 0.0,1);
    func_0x0001073c8958();
    pfVar13 = (float *)*param_3;
    fVar16 = *pfVar13;
    for (uVar4 = 1; uVar4 < (ulong)(param_3[1] - (long)pfVar13 >> 2); uVar4 = uVar4 + 1) {
      fVar17 = fVar14 * fVar16;
      fVar16 = fVar16 + pfVar13[uVar4];
      uStack_88 = (float *)CONCAT44(fVar14 * fVar16,fVar17);
      uStack_80 = (float *)(CONCAT71(uStack_80._1_7_,(char)uVar4 + '\x01') & 0xffffffffffffff01);
      uStack_80._0_2_ = CONCAT11(pfVar13[uVar4] == 0.0,(undefined1)uStack_80);
      func_0x0001073c8958();
      pfVar13 = (float *)*param_3;
    }
    pfVar12 = pfStack_a0;
    pfVar13 = pfStack_a0;
    if ((param_4 & 1) == 0) {
      while (pfVar12 != pfStack_98) {
        if (*(char *)((long)pfVar12 + 9) == '\x01') {
          lVar6 = (long)pfStack_98 - (long)(pfVar13 + 3);
          if (lVar6 != 0) {
            func_0x0001073c894c();
          }
          pfStack_98 = (float *)((long)pfVar13 + lVar6);
          pfVar13 = pfVar12;
        }
        else {
          pfVar12 = pfVar12 + 3;
          pfVar13 = pfVar13 + 3;
        }
      }
      if (pfStack_a0 != pfStack_98) {
        pfVar13 = pfStack_a0;
        if (1 < (ulong)(((long)pfStack_98 - (long)pfStack_a0) / 0xc)) {
          do {
            lVar6 = 0;
            pfVar12 = pfVar13;
            while( true ) {
              if (pfStack_98 == pfVar12 + 3) goto LAB_1073c7810;
              pfVar8 = (float *)((long)pfVar13 + lVar6);
              if (*(char *)(pfVar12 + 5) == *(char *)(pfVar8 + 2)) break;
              pfVar12 = pfVar12 + 3;
              lVar6 = lVar6 + 0xc;
            }
            pfVar12[3] = *pfVar8;
            lVar6 = (long)pfStack_98 + (-lVar6 - (long)pfVar13) + -0xc;
            if (pfVar8 + 3 != pfStack_98) {
              func_0x0001073c894c();
            }
            pfStack_98 = (float *)((long)pfVar8 + lVar6);
            pfVar13 = pfVar8;
          } while( true );
        }
LAB_1073c7810:
        bVar10 = *(byte *)(pfStack_a0 + 2);
        uVar11 = *param_1;
        if (bVar10 == *(byte *)(pfStack_98 + -1)) {
          *pfStack_a0 = pfStack_98[-3] - (float)uVar11;
          pfStack_98[-2] = pfStack_a0[1] + (float)uVar11;
        }
        uVar9 = 0;
        uVar7 = uVar11 * param_2;
        fVar14 = *pfStack_a0;
        fVar16 = pfStack_a0[1];
        for (uVar4 = 0; uVar4 < uVar11; uVar4 = uVar4 + 1) {
          fVar17 = (float)(uVar4 & 0xffffffff);
          if ((1.0 < fVar17 / fVar16) &&
             (uVar9 = (ulong)((int)uVar9 + 1),
             uVar9 < (ulong)(((long)pfStack_98 - (long)pfStack_a0) / 0xc))) {
            pfVar13 = pfStack_a0 + uVar9 * 3;
            fVar14 = *pfVar13;
            fVar16 = pfVar13[1];
            bVar10 = *(byte *)(pfVar13 + 2);
          }
          fVar17 = (float)NEON_fminnm(ABS(fVar17 - fVar14),ABS(fVar17 - fVar16));
          if ((bVar10 & 1) == 0) {
            fVar17 = -fVar17;
          }
          fVar17 = (float)NEON_fminnm(fVar17 + 128.0,0x437f0000);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          *(char *)(*(long *)(param_1 + 2) + (ulong)uVar7) = (char)(int)fVar17;
          uVar11 = *param_1;
          uVar7 = uVar7 + 1;
        }
      }
    }
    else if (pfStack_a0 != pfStack_98) {
      fVar14 = fVar14 * 0.5;
      for (iVar5 = -7; iVar5 != 8; iVar5 = iVar5 + 1) {
        uVar9 = 0;
        uVar11 = *param_1;
        fVar17 = *pfStack_a0;
        fVar18 = pfStack_a0[1];
        bVar10 = *(byte *)(pfStack_a0 + 2);
        fVar16 = (fVar14 + 1.0) * ((float)iVar5 / 7.0);
        iVar1 = uVar11 * param_2;
        for (uVar4 = 0; uVar4 < uVar11; uVar4 = uVar4 + 1) {
          if (fVar18 == 0.0) {
            if ((uVar4 != 0) &&
               (uVar9 = (ulong)((int)uVar9 + 1),
               uVar9 < (ulong)(((long)pfStack_98 - (long)pfStack_a0) / 0xc))) {
LAB_1073c7660:
              pfVar13 = pfStack_a0 + uVar9 * 3;
              fVar17 = *pfVar13;
              fVar18 = pfVar13[1];
              bVar10 = *(byte *)(pfVar13 + 2);
            }
          }
          else if ((1.0 < (float)(uVar4 & 0xffffffff) / fVar18) &&
                  (uVar9 = (ulong)((int)uVar9 + 1),
                  uVar9 < (ulong)(((long)pfStack_98 - (long)pfStack_a0) / 0xc))) goto LAB_1073c7660;
          fVar19 = (float)NEON_fminnm(ABS((float)(uVar4 & 0xffffffff) - fVar17),
                                      ABS((float)(uVar4 & 0xffffffff) - fVar18));
          fVar20 = fVar14 - SQRT(fVar16 * fVar16 + fVar19 * fVar19);
          if ((bVar10 & 1) != 0) {
            fVar20 = SQRT((fVar14 - ABS(fVar16)) * (fVar14 - ABS(fVar16)) + fVar19 * fVar19);
          }
          fVar20 = (float)NEON_fminnm(fVar20 + 128.0,0x437f0000);
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          *(char *)(*(long *)(param_1 + 2) + (ulong)(uint)(iVar1 + (int)uVar4)) = (char)(int)fVar20;
          uVar11 = *param_1;
        }
        param_2 = param_2 + 1;
      }
    }
    NEON_ucvtf(param_1[1]);
    func_0x0001073c7f40(&pfStack_a0);
  }
  return fVar15;
}



/* Entry: 1073c7904; end: 1073c797f;  */

void FUN_1073c7904(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return;
  }
  func_0x0001073c8928();
  FUN_1073c82d4(param_1 + 0x18);
  FUN_1073c7980(auStack_38);
  FUN_1073c82ec(unaff_x19 + 0x18,auStack_38);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001073c891c();
  }
  return;
}



/* Entry: 1073c7980; end: 1073c7adf;  */

void FUN_1073c7980(undefined1 *param_1,long *param_2,uint *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  plVar3 = (long *)(ulong)*param_3;
  uVar1 = param_3[1];
  uVar6 = *(undefined8 *)param_3;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))();
  puVar5 = *(undefined4 **)(param_3 + 2);
  uStack_58 = *param_4;
  uStack_5c = 0;
  uStack_54 = *(undefined1 *)(param_4 + 1);
  if (plVar2 < plVar3 || plVar2 < (long *)(ulong)uVar1) {
    uStack_54 = 0;
    uStack_58 = 0;
    uVar6 = 0x100000001;
    puVar5 = &uStack_5c;
    uVar7 = 2;
  }
  else {
    uVar7 = 0xb;
  }
  (**(code **)(*param_2 + 0x60))(&lStack_68,param_2,uVar6,puVar5,&uStack_58,uVar7,param_5);
  if ((((char)param_2[3] == '\x01') &&
      (func_0x0001073da298(plVar3,(long *)(ulong)uVar1,0xb), (int)plVar3 != 0)) &&
     (*(long *)(param_3 + 2) != 0)) {
    uVar8 = (ulong)plVar3 & 0xffffffff;
    uVar4 = uVar8;
    __Znam(uVar8);
    _bzero();
    uStack_70 = 0;
    FUN_1073c8290(lStack_68 + 8,uVar4);
    func_0x00010724e5b8(&uStack_70);
    _memcpy(*(undefined8 *)(lStack_68 + 8),*(undefined8 *)(param_3 + 2),uVar8);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar6;
  param_1[0xc] = uVar7;
  *(long *)(param_1 + 0x10) = lStack_68;
  return;
}



/* Entry: 1073c7ae0; end: 1073c7b07;  */

long FUN_1073c7ae0(long param_1)

{
  func_0x0001057f951c(param_1 + 0x18);
  func_0x0001073c8448(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073c7b08; end: 1073c7be7;  */

long FUN_1073c7b08(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  ulong *puStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  
  uStack_41 = (undefined1)param_4;
  lVar1 = param_2;
  FUN_1073c7be8(param_2,param_4);
  lVar2 = param_3;
  FUN_1073c7be8(param_3,param_4);
  uStack_50 = lVar1 + 0x9e3779b97f4a7c15;
  uStack_50 = lVar2 + uStack_50 * 0x1000 + (uStack_50 >> 4) + 0x9e3779b97f4a7c15 ^ uStack_50;
  lVar1 = param_1;
  func_0x0001073c848c(param_1,&uStack_50);
  if (param_1 + 8 == lVar1) {
    puStack_60 = &uStack_41;
    lVar1 = param_1;
    lStack_70 = param_2;
    lStack_68 = param_3;
    puStack_58 = &uStack_50;
    FUN_1073c7c3c(param_1,&UNK_10dd5b8f9,&puStack_58,&lStack_70);
    func_0x00010737fce0(param_1 + 0x18,&uStack_50);
  }
  return lVar1 + 0x28;
}



/* Entry: 1073c7be8; end: 1073c7c3b;  */

ulong FUN_1073c7be8(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  
  uVar2 = (ulong)param_2 - 1;
  pfVar3 = (float *)*param_1;
  while (pfVar3 != (float *)param_1[1]) {
    lVar1 = -0x61c8864680b583eb;
    if (*pfVar3 != 0.0) {
      lVar1 = (ulong)(uint)*pfVar3 + 0x9e3779b97f4a7c15;
    }
    uVar2 = (uVar2 >> 4) + uVar2 * 0x1000 + lVar1 ^ uVar2;
    pfVar3 = pfVar3 + 1;
  }
  return uVar2;
}



/* Entry: 1073c7c3c; end: 1073c7c53;  */

void FUN_1073c7c3c(void)

{
  FUN_1073c84f8();
  return;
}



/* Entry: 1073c7c54; end: 1073c7ccf;  */

void FUN_1073c7c54(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x0001073c8928();
  lVar1 = *(long *)(param_1 + 0x20);
  for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 8) {
    lVar2 = unaff_x19;
    func_0x0001073c848c();
    if (param_1 + 8 != lVar2) {
      FUN_1073c7904(lVar2 + 0x28);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073c7cd0; end: 1073c7cef;  */

void FUN_1073c7cd0(void)

{
  FUN_1073c7cf0();
  return;
}



/* Entry: 1073c7cf0; end: 1073c7d1b;  */

bool FUN_1073c7cf0(float *param_1,float *param_2,float *param_3)

{
  for (; (param_1 != param_2 && (*param_1 == *param_3)); param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1 == param_2;
}



/* Entry: 1073c7d1c; end: 1073c7d2f;  */

void FUN_1073c7d1c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000104bd47e8();
  func_0x0001073c8970();
  func_0x0001073c897c(*(undefined8 *)(param_2 + 8));
  lVar2 = extraout_x8 + extraout_x9 * extraout_x10;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1073c7d30; end: 1073c7e1f;  */

void FUN_1073c7d30(undefined8 param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001073c8970();
  func_0x0001073c897c(*(undefined8 *)(param_2 + 8));
  lVar2 = extraout_x8 + extraout_x9 * extraout_x10;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1073c7e20; end: 1073c7f6b;  */

long * FUN_1073c7e20(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0xc;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c7f6c; end: 1073c7fbf;  */

void FUN_1073c7f6c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109abc08)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1073c7fc0; end: 1073c7fcf;  */

uint * FUN_1073c7fc0(undefined8 param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  int *extraout_x8_00;
  long *extraout_x9;
  
  if ((ulong)param_2[1] * (ulong)*param_2 != 0) {
    func_0x0001073c893c();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar2) {
        *extraout_x9 = *extraout_x9 - extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073c88ec();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010724e5b8(param_2 + 2);
  return param_2;
}



/* Entry: 1073c7fd0; end: 1073c809b;  */

uint * FUN_1073c7fd0(uint *param_1)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  int *extraout_x8_00;
  long *extraout_x9;
  
  if ((ulong)param_1[1] * (ulong)*param_1 != 0) {
    func_0x0001073c893c();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar2) {
        *extraout_x9 = *extraout_x9 - extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073c88ec();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010724e5b8(param_1 + 2);
  return param_1;
}



/* Entry: 1073c809c; end: 1073c81eb;  */

void FUN_1073c809c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073c8970();
  func_0x00010724e2fc(param_2);
  return;
}



/* Entry: 1073c81ec; end: 1073c828f;  */

void FUN_1073c81ec(uint *param_1)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  int *extraout_x8_00;
  long *extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001073c8928();
  if ((ulong)param_1[1] * (ulong)*param_1 != 0) {
    func_0x0001073c893c();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar2) {
        *extraout_x9 = *extraout_x9 - extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073c88ec();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *unaff_x19 = *unaff_x20;
  func_0x0001073c8268(unaff_x19 + 1,unaff_x20 + 1);
  *(undefined2 *)(unaff_x19 + 2) = *(undefined2 *)(unaff_x20 + 2);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}



/* Entry: 1073c8290; end: 1073c82d3;  */

void FUN_1073c8290(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1073c82d4; end: 1073c82eb;  */

long FUN_1073c82d4(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  FUN_1073c8310();
  return param_1;
}



/* Entry: 1073c82ec; end: 1073c830f;  */

undefined8 FUN_1073c82ec(undefined8 param_1)

{
  FUN_1073c8310();
  return param_1;
}



/* Entry: 1073c8310; end: 1073c831b;  */

void FUN_1073c8310(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (*(int *)(param_1 + 3) == 1) {
    func_0x0001073c8964();
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)(param_2 + 5);
    *param_1 = extraout_x8;
    FUN_1073c8394(param_1 + 2,param_2 + 0x10);
    return;
  }
  FUN_1073c8388(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073c831c; end: 1073c8357;  */

void FUN_1073c831c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 extraout_x8;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    func_0x0001073c8964();
    *(undefined8 *)((long)param_2 + 5) = *(undefined8 *)(param_3 + 5);
    *param_2 = extraout_x8;
    FUN_1073c8394(param_2 + 2,param_3 + 0x10);
    return;
  }
  FUN_1073c8388(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073c8358; end: 1073c8387;  */

void FUN_1073c8358(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001073c8964();
  *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)(param_2 + 5);
  *param_1 = extraout_x8;
  FUN_1073c8394(param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 1073c8388; end: 1073c8393;  */

void FUN_1073c8388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001073c8970(*param_1,param_1[1]);
  FUN_1073c7f6c();
  uVar1 = *unaff_x19;
  *(undefined8 *)((long)unaff_x20 + 5) = *(undefined8 *)((long)unaff_x19 + 5);
  *unaff_x20 = uVar1;
  uVar1 = unaff_x19[2];
  unaff_x19[2] = 0;
  unaff_x20[2] = uVar1;
  *(undefined4 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 1073c8394; end: 1073c8407;  */

void FUN_1073c8394(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001073c8964();
  *param_2 = 0;
  lVar1 = *param_1;
  *unaff_x19 = extraout_x8;
  if (lVar1 != 0) {
    func_0x0001073c891c();
  }
  return;
}



/* Entry: 1073c8408; end: 1073c8423;  */

long FUN_1073c8408(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x0001073c8448();
  return param_1;
}



/* Entry: 1073c8424; end: 1073c84cb;  */

long FUN_1073c8424(long param_1)

{
  func_0x0001073c8448(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073c84cc; end: 1073c84f7;  */

long FUN_1073c84cc(undefined8 param_1,ulong *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(ulong *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1073c84f8; end: 1073c850f;  */

void FUN_1073c84f8(void)

{
  FUN_1073c8510();
  return;
}



/* Entry: 1073c8510; end: 1073c859b;  */

undefined1  [16] FUN_1073c8510(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_1073c859c(alStack_38);
  plVar2 = param_1;
  FUN_1073c8618(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1073c8668(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  FUN_1073c8868(alStack_38);
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1073c859c; end: 1073c8617;  */

void FUN_1073c859c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_1073c86b8(lVar1 + 0x20,param_3,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1073c8618; end: 1073c8667;  */

long * FUN_1073c8618(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (ulong)plVar3[4] <= *param_3) {
        if (*param_3 <= (ulong)plVar3[4]) goto LAB_1073c8660;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1073c8660;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1073c8660:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1073c8668; end: 1073c86b7;  */

void FUN_1073c8668(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1073c86b8; end: 1073c870f;  */

void FUN_1073c86b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = param_4[2];
  func_0x0001073c86ec(param_1,*param_3,&uStack_30);
  return;
}



/* Entry: 1073c8710; end: 1073c8867;  */

void FUN_1073c8710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  func_0x0001073c8964();
  *param_4 = *extraout_x8;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  cVar3 = *(char *)param_6[2];
  puVar9 = param_4 + 4;
  *puVar9 = 0;
  param_4[5] = 0;
  *(undefined2 *)(param_4 + 6) = 1;
  *(undefined4 *)(param_4 + 7) = 0;
  uVar7 = uVar1;
  func_0x0001073c73e4(uVar1,uVar2);
  iVar8 = 0xf;
  if (cVar3 == '\0') {
    iVar8 = 1;
  }
  uVar6 = iVar8 << (ulong)(((uint)uVar7 ^ 1) & 0x1f);
  func_0x000107418910(uVar6);
  func_0x0001073c802c(&uStack_68,(ulong)(uint)(1 << (ulong)(uVar6 & 0x1f)) << 0x20 | 0x100);
  FUN_1073c740c(&uStack_68,0,uVar1,cVar3);
  *(undefined4 *)(unaff_x19 + 8) = param_1;
  *(undefined4 *)(unaff_x19 + 0xc) = param_2;
  *(undefined4 *)(unaff_x19 + 0x10) = param_3;
  if ((uVar7 & 1) == 0) {
    FUN_1073c740c(&uStack_68,iVar8,uVar2,cVar3);
  }
  *(undefined4 *)(unaff_x19 + 0x14) = param_1;
  *(undefined4 *)(unaff_x19 + 0x18) = param_2;
  *(undefined4 *)(unaff_x19 + 0x1c) = param_3;
  uStack_58 = (ushort)uStack_58._1_1_ << 8;
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    FUN_1073c81ec(puVar9,&uStack_68);
  }
  else {
    FUN_1073c7f6c(puVar9);
    uVar5 = uStack_60;
    uVar4 = uStack_68;
    uStack_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    *(short *)(unaff_x19 + 0x30) = uStack_58;
    uStack_58 = CONCAT11(uStack_58._1_1_,1);
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
  }
  func_0x0001073c7fd0(&uStack_68);
  return;
}



/* Entry: 1073c8868; end: 1073c888b;  */

undefined8 FUN_1073c8868(undefined8 param_1)

{
  FUN_1073c888c(param_1,0);
  return param_1;
}



/* Entry: 1073c888c; end: 1073c88a3;  */

void FUN_1073c888c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_1073c7f6c(lVar1 + 0x40);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1073c88a4; end: 1073c88eb;  */

void FUN_1073c88a4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1073c7f6c(param_2 + 0x40);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}


