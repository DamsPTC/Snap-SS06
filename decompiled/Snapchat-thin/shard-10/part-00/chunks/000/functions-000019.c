/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10735a678; end: 10735a6b7;  */

void FUN_10735a678(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104c2f714(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10735a6b8; end: 10735a77b;  */

long FUN_10735a6b8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong unaff_x23;
  long *plVar7;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    func_0x000107360c4c();
    if ((bool)in_ZR) {
      plVar7 = (long *)((ulong)plVar2 & unaff_x23);
    }
    else {
      plVar7 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & unaff_x23) == 0) {
        plVar4 = (long *)((ulong)plVar4 & unaff_x23);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar7);
  }
  return 0;
}



/* Entry: 10735a77c; end: 10735a7e7;  */

void FUN_10735a77c(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001009eba74();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_107359a98();
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a4b28)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10735a7e8; end: 10735a81b;  */

void FUN_10735a7e8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10735a81c; end: 10735a897;  */

undefined8 FUN_10735a81c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010735a844(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107360438(param_1);
  FUN_10735a898();
  return unaff_x19;
}



/* Entry: 10735a898; end: 10735a8af;  */

void FUN_10735a898(long *param_1)

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



/* Entry: 10735a8b0; end: 10735a9ab;  */

void FUN_10735a8b0(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  plVar3 = &lStack_70;
  func_0x0001073600bc();
  FUN_10735a9ac();
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x00010735a9c0();
    func_0x000107360584();
    while (puStack_50 = (undefined1 *)plVar3, lStack_48 = lVar6, plVar3 != (long *)0x0) {
      func_0x000107360938();
      plVar4 = &lStack_70;
      func_0x00010ae6c8b4(&lStack_70,plVar3);
      uVar2 = uStack_60;
      lVar8 = lStack_68;
      lVar7 = lStack_70;
      bVar1 = (byte)plVar3 & 0x7f;
      *(byte *)((long)plVar4 + lStack_70) = bVar1;
      *(byte *)(lVar7 + ((ulong)((long)plVar4 + -7) & uVar2) + (uVar2 & 7)) = bVar1;
      func_0x00010735ab48(lVar8 + (long)plVar4 * 0x48,lVar6);
      FUN_107352fe0(&puStack_50);
      plVar3 = (long *)puStack_50;
      lVar6 = lStack_48;
    }
    lStack_58 = lVar5;
    func_0x000107360734(lStack_70);
  }
  lVar8 = unaff_x19[1];
  lVar7 = *unaff_x19;
  lVar6 = unaff_x19[3];
  lVar5 = unaff_x19[2];
  unaff_x19[1] = lStack_68;
  *unaff_x19 = lStack_70;
  unaff_x19[3] = lStack_58;
  unaff_x19[2] = uStack_60;
  lStack_70 = lVar7;
  lStack_68 = lVar8;
  uStack_60 = lVar5;
  lStack_58 = lVar6;
  FUN_10735ab80(&lStack_70);
  return;
}



/* Entry: 10735a9ac; end: 10735aa27;  */

void FUN_10735a9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001073601d8(param_1,0,param_2,param_3,param_4);
  if (lVar1 != 0) {
    func_0x0001073607f4();
    FUN_107324d80();
  }
  return;
}



/* Entry: 10735aa28; end: 10735aa4f;  */

void FUN_10735aa28(undefined8 param_1,long param_2)

{
  func_0x0001073601d8();
  if (param_2 != 0) {
    func_0x0001073607f4();
    FUN_107324d80();
  }
  return;
}



/* Entry: 10735aa50; end: 10735aacb;  */

void FUN_10735aa50(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  
  func_0x0001073604b0();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      func_0x000104c2fe38(unaff_x20);
      func_0x00010736042c();
      func_0x000100061de0();
      func_0x00010735fdb8((uint)lVar1 & 0x7f);
      func_0x0001073605b8();
    }
    unaff_x20 = unaff_x20 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10735aacc; end: 10735ab7f;  */

undefined8 FUN_10735aacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  
  func_0x00010735aaf8(param_2,param_3);
  func_0x000107360c2c(param_3);
  func_0x00010735ce54();
  func_0x000104c2f714(unaff_x19);
  return unaff_x19;
}



/* Entry: 10735ab80; end: 10735abb3;  */

long FUN_10735ab80(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10735abb4(param_1);
    func_0x0001073609d0();
  }
  return param_1;
}



/* Entry: 10735abb4; end: 10735abef;  */

void FUN_10735abb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010735ab20(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 10735abf0; end: 10735ac0f;  */

void FUN_10735abf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10735ac10(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10735ac10; end: 10735acbb;  */

void FUN_10735ac10(long param_1,long param_2)

{
  undefined8 *unaff_x19;
  long lVar1;
  uint unaff_w22;
  
  func_0x000107360438();
  FUN_10735aa28();
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    func_0x0001073602a8();
    func_0x00010735a9c0();
    func_0x000107360584();
    while (param_1 != 0) {
      func_0x000107360938();
      func_0x000107360564();
      func_0x00010735fdb8(unaff_w22 & 0x7f);
      func_0x00010735aa14();
      func_0x0001073608e0();
    }
    unaff_x19[3] = lVar1;
    func_0x000107360734(*unaff_x19);
  }
  return;
}



/* Entry: 10735acbc; end: 10735acdf;  */

void FUN_10735acbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  func_0x0001073608bc();
  *param_2 = extraout_x8;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10735ace0; end: 10735acf7;  */

void FUN_10735ace0(void)

{
  FUN_10735acf8();
  return;
}



/* Entry: 10735acf8; end: 10735ad37;  */

void FUN_10735acf8(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001073600bc();
  FUN_10735ad38();
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  func_0x000107360464();
  return;
}



/* Entry: 10735ad38; end: 10735ad3b;  */

void FUN_10735ad38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10735ad3c; end: 10735ae0f;  */

void FUN_10735ad3c(undefined1 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x25;
  long unaff_x27;
  ulong unaff_x28;
  
  func_0x000107360cb0();
  func_0x0001009eba74();
  func_0x000107360078();
  func_0x000104c2fe38();
  func_0x00010735fef4();
  do {
    func_0x0001073601b0();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      uVar1 = (unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x28 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined1 *)
                (unaff_x27 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25);
      puVar2 = &stack0xffffffffffffff70;
      FUN_10735aef8(&stack0xffffffffffffff70,*(long *)(unaff_x19 + 8) + (long)param_1 * 0x48);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10735ade0;
      param_1 = puVar2;
    }
    func_0x0001073603b0();
  } while ((extraout_x8 & 1) == 0);
  func_0x00010736042c();
  func_0x00010735ae48();
  FUN_10735af1c(*(long *)(unaff_x19 + 8) + (long)param_1 * 0x48);
LAB_10735ade0:
  func_0x000107360c80(*(long *)(unaff_x19 + 8) + (long)param_1 * 0x48 + 0x38);
  return;
}



/* Entry: 10735ae10; end: 10735aef7;  */

void FUN_10735ae10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10735af34();
  if (lVar1 != 0) {
    FUN_10735af54(param_1,lVar1,param_2);
  }
  return;
}



/* Entry: 10735aef8; end: 10735af1b;  */

bool FUN_10735aef8(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10735af1c; end: 10735af33;  */

void FUN_10735af1c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10735af34; end: 10735af53;  */

long FUN_10735af34(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
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
  func_0x00010735ff94();
  func_0x000107360714();
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
      lVar4 = uVar1 + uVar11 * 0x38;
      func_0x000104c32db4(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar11;
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



/* Entry: 10735af54; end: 10735af8b;  */

void FUN_10735af54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar6;
  long lVar7;
  
  func_0x000107360170();
  func_0x000104c2f714(param_3);
  uVar1 = unaff_x21[2];
  unaff_x21[3] = unaff_x21[3] + -1;
  lVar3 = *unaff_x21;
  uVar6 = *unaff_x20;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)unaff_x20 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)unaff_x20 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10735af8c; end: 10735af93;  */

void FUN_10735af8c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10735af94; end: 10735afd3;  */

void FUN_10735af94(long param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_107352f04();
  if (param_1 != 0) {
    plVar3 = param_2;
    func_0x00010735ab20();
    func_0x0001073602a8();
    uVar1 = param_2[2];
    param_2[3] = param_2[3] + -1;
    lVar4 = *param_2;
    lVar7 = *plVar3;
    uVar5 = CONCAT17(-((char)((ulong)lVar7 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)lVar7 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)lVar7 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)lVar7 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)lVar7 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)lVar7 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) == -0x80),-((char)lVar7 == -0x80))))))
                             ));
    uVar8 = *(undefined8 *)(lVar4 + ((long)plVar3 + (-8 - lVar4) & uVar1));
    lVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) == -0x80),
                     CONCAT16(-((char)((ulong)uVar8 >> 0x30) == -0x80),
                              CONCAT15(-((char)((ulong)uVar8 >> 0x28) == -0x80),
                                       CONCAT14(-((char)((ulong)uVar8 >> 0x20) == -0x80),
                                                CONCAT13(-((char)((ulong)uVar8 >> 0x18) == -0x80),
                                                         CONCAT12(-((char)((ulong)uVar8 >> 0x10) ==
                                                                   -0x80),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) == -0x80),-((char)uVar8 == -0x80))))))
                             ));
    if (lVar7 == 0 || uVar5 == 0) {
      uVar5 = 0;
      uVar6 = 0xfe;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) <
              8;
      uVar5 = (ulong)bVar2;
      uVar6 = 0x80;
      if (!bVar2) {
        uVar6 = 0xfe;
      }
    }
    *(undefined1 *)plVar3 = uVar6;
    *(undefined1 *)(lVar4 + ((long)plVar3 + (-7 - lVar4) & uVar1) + (uVar1 & 7)) = uVar6;
    *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) + uVar5;
    return;
  }
  return;
}



/* Entry: 10735afd4; end: 10735b023;  */

void FUN_10735afd4(undefined8 *param_1,undefined8 *param_2)

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
      func_0x00010736000c();
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



/* Entry: 10735b024; end: 10735b09f;  */

void FUN_10735b024(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001009eba74();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  FUN_10731e2b0(unaff_x19 + 0x18,unaff_x20 + 0x18);
  FUN_10735b0a0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  return;
}



/* Entry: 10735b0a0; end: 10735b0d7;  */

void FUN_10735b0a0(long param_1)

{
  long unaff_x20;
  
  func_0x0001009eba74();
  FUN_10735abf0();
  func_0x000107261fa8(param_1 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 10735b0d8; end: 10735b227;  */

long * FUN_10735b0d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x48) {
      FUN_107359a98(lVar2 + -0x40);
    }
    param_1[1] = lVar1;
    func_0x000107360598();
  }
  return param_1;
}



/* Entry: 10735b228; end: 10735b23f;  */

void FUN_10735b228(long *param_1,long param_2)

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



/* Entry: 10735b240; end: 10735b343;  */

void FUN_10735b240(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar4;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar5;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001073604c4();
      FUN_10735b344();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001073605c8();
    func_0x0001073603d8();
    FUN_10735b344();
    func_0x00010735ff44();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x000107360234();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001073603c0();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x11;
        if ((bool)uVar1) {
          plVar5 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107360420();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar5 = extraout_x13_00;
          }
        }
        uVar1 = plVar5 == plVar4;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar5 * 8) == 0) {
            func_0x000107360414();
            plVar3 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar3 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735b344; end: 10735b35b;  */

void FUN_10735b344(long *param_1,long param_2)

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



/* Entry: 10735b35c; end: 10735b3c3;  */

void FUN_10735b35c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107360098();
  if (unaff_x20 != 0) {
    func_0x000107360658();
    if ((bool)in_ZR) {
      FUN_107358cf0(unaff_x20 + 0x18);
    }
    func_0x000107360134();
  }
  return;
}



/* Entry: 10735b3c4; end: 10735b3df;  */

void FUN_10735b3c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_8c [4];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0x78) == 1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073601c8();
  func_0x00010787da4c(&uStack_78);
  puVar11 = (undefined8 *)0x0;
  do {
    uVar3 = uStack_78;
    uVar5 = uStack_78;
    func_0x000107882368();
    if ((int)uVar5 == 0) {
      func_0x000107880dc4(&uStack_78);
      return;
    }
    func_0x0001078823ac(auStack_8c,uVar3);
    if (puVar11 < (undefined8 *)unaff_x19[2]) {
      *(undefined4 *)(puVar11 + 1) = uStack_80;
      puVar12 = (undefined8 *)((long)puVar11 + 0xc);
      *puVar11 = uStack_88;
    }
    else {
      lVar8 = *unaff_x19;
      lVar9 = (long)puVar11 - lVar8;
      uVar1 = lVar9 / 0xc + 1;
      if (0x1555555555555555 < uVar1) {
        FUN_10735b7f8();
LAB_10735b534:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10735b538);
        (*pcVar4)();
      }
      uVar2 = (unaff_x19[2] - lVar8) / 0xc;
      uVar7 = uVar2 * 2;
      if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
        uVar7 = uVar1;
      }
      if (0xaaaaaaaaaaaaaa9 < uVar2) {
        uVar7 = 0x1555555555555555;
      }
      if (0x1555555555555555 < uVar7) {
        func_0x000104bd35f4();
        goto LAB_10735b534;
      }
      lVar6 = uVar7 * 0xc;
      __Znwm();
      puVar11 = (undefined8 *)(lVar6 + lVar9);
      *puVar11 = uStack_88;
      *(undefined4 *)(puVar11 + 1) = uStack_80;
      puVar12 = (undefined8 *)((long)puVar11 + 0xc);
      lVar10 = (long)puVar11 + (lVar9 / -0xc) * 0xc;
      _memcpy(lVar10,lVar8,lVar9);
      *unaff_x19 = lVar10;
      unaff_x19[2] = lVar6 + uVar7 * 0xc;
      if (lVar8 != 0) {
        func_0x000107360134();
      }
    }
    unaff_x19[1] = (long)puVar12;
    puVar11 = puVar12;
  } while( true );
}



/* Entry: 10735b3e0; end: 10735b55b;  */

void FUN_10735b3e0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_7c [4];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001073601c8();
  func_0x00010787da4c(&uStack_68);
  puVar11 = (undefined8 *)0x0;
  do {
    uVar3 = uStack_68;
    uVar5 = uStack_68;
    func_0x000107882368();
    if ((int)uVar5 == 0) {
      func_0x000107880dc4(&uStack_68);
      return;
    }
    func_0x0001078823ac(auStack_7c,uVar3);
    if (puVar11 < (undefined8 *)unaff_x19[2]) {
      *(undefined4 *)(puVar11 + 1) = uStack_70;
      puVar12 = (undefined8 *)((long)puVar11 + 0xc);
      *puVar11 = uStack_78;
    }
    else {
      lVar8 = *unaff_x19;
      lVar9 = (long)puVar11 - lVar8;
      uVar1 = lVar9 / 0xc + 1;
      if (0x1555555555555555 < uVar1) {
        FUN_10735b7f8();
LAB_10735b534:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10735b538);
        (*pcVar4)();
      }
      uVar2 = (unaff_x19[2] - lVar8) / 0xc;
      uVar7 = uVar2 * 2;
      if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
        uVar7 = uVar1;
      }
      if (0xaaaaaaaaaaaaaa9 < uVar2) {
        uVar7 = 0x1555555555555555;
      }
      if (0x1555555555555555 < uVar7) {
        func_0x000104bd35f4();
        goto LAB_10735b534;
      }
      lVar6 = uVar7 * 0xc;
      __Znwm();
      puVar11 = (undefined8 *)(lVar6 + lVar9);
      *puVar11 = uStack_78;
      *(undefined4 *)(puVar11 + 1) = uStack_70;
      puVar12 = (undefined8 *)((long)puVar11 + 0xc);
      lVar10 = (long)puVar11 + (lVar9 / -0xc) * 0xc;
      _memcpy(lVar10,lVar8,lVar9);
      *unaff_x19 = lVar10;
      unaff_x19[2] = lVar6 + uVar7 * 0xc;
      if (lVar8 != 0) {
        func_0x000107360134();
      }
    }
    unaff_x19[1] = (long)puVar12;
    puVar11 = puVar12;
  } while( true );
}



/* Entry: 10735b55c; end: 10735b72f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010735b644 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10735b55c(undefined8 param_1,undefined8 param_2,long *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x23;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  bVar1 = *param_4;
  uVar12 = (ulong)bVar1;
  uVar10 = param_3[1];
  uVar11 = (uint)bVar1;
  plVar4 = param_3;
  if (uVar10 != 0) {
    func_0x0001073607ac();
    uVar9 = (uint)uVar10;
    if ((bool)in_ZR) {
      unaff_x23 = uVar9 - 1 & uVar12;
    }
    else {
      in_NG = (long)(uVar10 - uVar12) < 0;
      unaff_x23 = uVar12;
      if (uVar10 <= uVar12) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar11 / uVar9;
        }
        unaff_x23 = (ulong)(uVar11 - uVar2 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar5 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10735b604;
          uVar7 = plVar8[1];
          if (uVar7 != uVar12) break;
          in_NG = (int)(*(byte *)(plVar8 + 2) - uVar11) < 0;
          if (*(byte *)(plVar8 + 2) == uVar11) goto LAB_10735b70c;
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x000107360b28();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10735b604:
  plVar8 = param_3 + 2;
  func_0x000107360370();
  uStack_48 = 1;
  *plVar4 = 0;
  plVar4[1] = uVar12;
  *(byte *)(plVar4 + 2) = bVar1;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 7) = 0x3f800000;
  plStack_58 = plVar4;
  plStack_50 = plVar8;
  func_0x00010735fe38();
  if ((uVar10 == 0) || (func_0x00010736013c(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    uVar3 = uVar10 == 3;
    func_0x00010735fd34(uVar10 << 1);
    func_0x00010735b124(param_3);
    uVar10 = param_3[1];
    func_0x0001073607ac();
    if ((bool)uVar3) {
      unaff_x23 = (int)uVar10 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar10 <= uVar12) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar12 / uVar10;
        }
        unaff_x23 = uVar12 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *param_3;
  if (*(long *)(lVar6 + unaff_x23 * 8) == 0) {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*plVar4 != 0) {
      uVar12 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar12 = uVar12 & uVar10 - 1;
      }
      else if (uVar10 <= uVar12) {
        func_0x000107360b28();
        lVar6 = extraout_x8_01;
        uVar12 = extraout_x9_00;
      }
      *(long **)(lVar6 + uVar12 * 8) = plVar4;
    }
  }
  else {
    func_0x000107360328();
  }
  plStack_58 = (long *)0x0;
  func_0x000107360240();
  param_3[3] = extraout_x8_02;
  FUN_10735b35c(&plStack_58);
  plVar8 = plVar4;
LAB_10735b70c:
  return plVar8 + 3;
}



/* Entry: 10735b730; end: 10735b7f7;  */

void FUN_10735b730(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001009eba74();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x000107360744();
    lVar1 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x0001073606c4();
        lVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    lVar1 = lVar1 + 0x10;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    FUN_1073596c8();
    func_0x0001009ebb00();
    FUN_10735b838(auStack_58);
    func_0x000107360744(lStack_48);
    lVar1 = extraout_x8_01;
    if (extraout_x9_00 != 0) {
      do {
        func_0x00010736000c();
        lVar1 = lStack_48;
      } while (extraout_w10 != 0);
    }
    lStack_48 = lVar1 + 0x10;
    func_0x0001009ebb10();
    FUN_10735b804();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x00010735b868(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10735b7f8; end: 10735b803;  */

void FUN_10735b7f8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010735fe88();
  func_0x00010014b284();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010014b2d8();
  return;
}



/* Entry: 10735b804; end: 10735b837;  */

void FUN_10735b804(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014b284();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010014b2d8();
  return;
}



/* Entry: 10735b838; end: 10735b893;  */

void FUN_10735b838(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010014b1ec();
  if (param_2 != 0) {
    FUN_107358b5c(param_4);
  }
  func_0x00010736083c();
  return;
}



/* Entry: 10735b894; end: 10735b89b;  */

void FUN_10735b894(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107358a58();
  }
  return;
}



/* Entry: 10735b89c; end: 10735b8f7;  */

void FUN_10735b89c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000107358a58();
  }
  return;
}



/* Entry: 10735b8f8; end: 10735b947;  */

undefined8 * FUN_10735b8f8(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010735ab20(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x0001073609d0();
  }
  return param_1;
}



/* Entry: 10735b948; end: 10735ba4b;  */

void FUN_10735b948(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar2 = param_3;
  func_0x0001009eba74();
  lVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_70 = param_2;
  plStack_68 = plVar2;
  while (lStack_70 != 0) {
    lVar3 = lVar3 + 1;
    func_0x000107262260(&lStack_70);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    func_0x00010726de5c();
    lVar3 = *(long *)(unaff_x19 + 8);
    lStack_70 = unaff_x19 + 0x10;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar3;
    while (lStack_48 = lVar3, unaff_x20 != 0) {
      func_0x000104c2fe00(lVar3,param_3);
      func_0x000107262260(&stack0xffffffffffffffc0);
      lVar3 = lStack_48 + 0x38;
    }
    func_0x000107360378();
    func_0x00010726df70(&lStack_70);
    *(long *)(unaff_x19 + 8) = lVar3;
    lVar1 = lStack_70;
  }
  lStack_70 = lVar1;
  func_0x000107360088();
  func_0x00010726dfe0();
  return;
}



/* Entry: 10735ba4c; end: 10735bd37;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010735bbe8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10735ba4c(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  ulong extraout_x8;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined2 *unaff_x27;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *aplStack_68 [11];
  
  func_0x000107360cb0();
  *param_2 = *param_3;
  FUN_10735bd38(param_2 + 4,param_3 + 4);
  FUN_107358a7c(param_2 + 0x10,param_3 + 0x10);
  plVar9 = (long *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *plVar9 = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  FUN_10735c31c(plVar9,*(undefined8 *)(param_3 + 0x20));
  puVar13 = (undefined8 *)(param_3 + 0x24);
  plVar1 = (long *)(param_2 + 0x24);
LAB_10735bac4:
  do {
    puVar13 = (undefined8 *)*puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      func_0x000107360c80(param_2);
      return;
    }
    puVar7 = param_2 + 0x28;
    func_0x00010786e5e4(puVar7,puVar13 + 2);
    puVar8 = *(undefined2 **)(param_2 + 0x20);
    if (puVar8 != (undefined2 *)0x0) {
      uVar10 = (long)puVar8 - 1;
      if (((ulong)puVar8 & uVar10) == 0) {
        unaff_x27 = (undefined2 *)(uVar10 & (ulong)puVar7);
      }
      else {
        unaff_x27 = puVar7;
        if (puVar8 <= puVar7) {
          uVar4 = 0;
          if (puVar8 != (undefined2 *)0x0) {
            uVar4 = (ulong)puVar7 / (ulong)puVar8;
          }
          unaff_x27 = (undefined2 *)((long)puVar7 - uVar4 * (long)puVar8);
        }
      }
      plVar11 = *(long **)(*plVar9 + (long)unaff_x27 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10735bb68;
            puVar5 = (undefined2 *)plVar11[1];
            if (puVar5 != puVar7) break;
            uVar4 = (ulong)(plVar11 + 2);
            func_0x00010735c498(uVar4,puVar13 + 2);
            if ((uVar4 & 1) != 0) goto LAB_10735bac4;
          }
          if (((ulong)puVar8 & uVar10) == 0) {
            puVar5 = (undefined2 *)((ulong)puVar5 & uVar10);
          }
          else if (puVar8 <= puVar5) {
            uVar4 = 0;
            if (puVar8 != (undefined2 *)0x0) {
              uVar4 = (ulong)puVar5 / (ulong)puVar8;
            }
            puVar5 = (undefined2 *)((long)puVar5 - uVar4 * (long)puVar8);
          }
        } while (puVar5 == unaff_x27);
      }
    }
LAB_10735bb68:
    plVar11 = (long *)0x68;
    __Znwm();
    uStack_70 = 0;
    *plVar11 = 0;
    plVar11[1] = (long)puVar7;
    plStack_80 = plVar11;
    plStack_78 = plVar1;
    func_0x000107269bac(plVar11 + 2,puVar13 + 2);
    plVar12 = plVar11 + 10;
    *(undefined1 *)plVar12 = 0;
    *(undefined4 *)(plVar11 + 0xc) = 0xffffffff;
    FUN_10735c55c(plVar12);
    uVar2 = *(uint *)(puVar13 + 0xc);
    uVar3 = (int)(uVar2 + 1) < 0;
    if (uVar2 != 0xffffffff) {
      aplStack_68[0] = plVar12;
      (*(code *)(&PTR_DAT_1109a4b68)[uVar2])(aplStack_68,puVar13 + 10);
      *(uint *)(plVar11 + 0xc) = uVar2;
    }
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    func_0x000107360148(*(undefined8 *)(param_2 + 0x28));
    if ((puVar8 == (undefined2 *)0x0) ||
       (func_0x00010736013c(param_1,*(undefined4 *)(param_2 + 0x2c),(float)puVar8), (bool)uVar3)) {
      func_0x0001073602e8();
      uVar3 = puVar8 == (undefined2 *)0x3;
      func_0x00010735fd34();
      FUN_10735c31c(plVar9);
      puVar8 = *(undefined2 **)(param_2 + 0x20);
      func_0x0001073607dc();
      if ((bool)uVar3) {
        unaff_x27 = (undefined2 *)(extraout_x8 & (ulong)puVar7);
      }
      else {
        unaff_x27 = puVar7;
        if (puVar8 <= puVar7) {
          uVar10 = 0;
          if (puVar8 != (undefined2 *)0x0) {
            uVar10 = (ulong)puVar7 / (ulong)puVar8;
          }
          unaff_x27 = (undefined2 *)((long)puVar7 - uVar10 * (long)puVar8);
        }
      }
    }
    lVar6 = *plVar9;
    plVar11 = *(long **)(lVar6 + (long)unaff_x27 * 8);
    if (plVar11 == (long *)0x0) {
      *plStack_80 = *plVar1;
      *plVar1 = (long)plStack_80;
      *(long **)(lVar6 + (long)unaff_x27 * 8) = plVar1;
      if (*plStack_80 != 0) {
        puVar7 = *(undefined2 **)(*plStack_80 + 8);
        if (((ulong)puVar8 & (long)puVar8 - 1U) == 0) {
          puVar7 = (undefined2 *)((ulong)puVar7 & (long)puVar8 - 1U);
        }
        else if (puVar8 <= puVar7) {
          uVar10 = 0;
          if (puVar8 != (undefined2 *)0x0) {
            uVar10 = (ulong)puVar7 / (ulong)puVar8;
          }
          puVar7 = (undefined2 *)((long)puVar7 - uVar10 * (long)puVar8);
        }
        *(long **)(lVar6 + (long)puVar7 * 8) = plStack_80;
      }
    }
    else {
      *plStack_80 = *plVar11;
      *plVar11 = (long)plStack_80;
    }
    plStack_80 = (long *)0x0;
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
    FUN_10735c5ec(&plStack_80);
  } while( true );
}



/* Entry: 10735bd38; end: 10735bd6b;  */

void FUN_10735bd38(void)

{
  func_0x0001073601c8();
  FUN_10735bd6c();
  return;
}



/* Entry: 10735bd6c; end: 10735bdb3;  */

void FUN_10735bd6c(void)

{
  long in_x3;
  
  func_0x00010736086c();
  if (in_x3 != 0) {
    func_0x00010735ffd4();
    FUN_10735bdb4();
    func_0x0001073600a8();
    FUN_10735bdf8();
  }
  func_0x000107360088();
  func_0x00010735c254();
  return;
}



/* Entry: 10735bdb4; end: 10735bdf7;  */

void FUN_10735bdb4(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 < 0x222222222222223) {
    func_0x000107360c00();
    FUN_10735be30();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x78;
  }
  else {
    FUN_10735be24();
    func_0x000107360688();
    param_1 = param_1 + 0x10;
    func_0x00010735be7c();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 10735bdf8; end: 10735be23;  */

void FUN_10735bdf8(long param_1)

{
  long unaff_x19;
  
  func_0x000107360688();
  param_1 = param_1 + 0x10;
  func_0x00010735be7c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10735be24; end: 10735be2f;  */

void FUN_10735be24(void)

{
  func_0x00010735fe88();
  FUN_10735be50();
  return;
}



/* Entry: 10735be30; end: 10735be4f;  */

void FUN_10735be30(void)

{
  FUN_10735be50();
  return;
}



/* Entry: 10735be50; end: 10735be8f;  */

void FUN_10735be50(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x222222222222223) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x78);
    return;
  }
  func_0x000104bd35f4();
  FUN_10735be90();
  return;
}



/* Entry: 10735be90; end: 10735befb;  */

long FUN_10735be90(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001073605e8();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x78) {
    FUN_10735befc(param_4,unaff_x21);
    param_4 = uStack_38 + 0x78;
    uStack_38 = param_4;
  }
  func_0x000107360724();
  FUN_10735c1e8();
  return param_4;
}



/* Entry: 10735befc; end: 10735bf57;  */

void FUN_10735befc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001009eba74();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  FUN_10735bf58(unaff_x19 + 0x10,unaff_x20 + 0x10);
  func_0x000104c2fe00(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 10735bf58; end: 10735bfbb;  */

undefined8 * FUN_10735bf58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010735bf8c(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10735bfbc; end: 10735c003;  */

void FUN_10735bfbc(void)

{
  long in_x3;
  
  func_0x00010736086c();
  if (in_x3 != 0) {
    func_0x00010735ffd4();
    FUN_10735c004();
    func_0x0001073600a8();
    FUN_10735c038();
  }
  func_0x000107360088();
  func_0x00010735c1c0();
  return;
}



/* Entry: 10735c004; end: 10735c037;  */

void FUN_10735c004(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107360c00();
    FUN_10735c070();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_10735c064();
    func_0x000107360688();
    param_1 = param_1 + 0x10;
    func_0x00010735c0ac();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 10735c038; end: 10735c063;  */

void FUN_10735c038(long param_1)

{
  long unaff_x19;
  
  func_0x000107360688();
  param_1 = param_1 + 0x10;
  func_0x00010735c0ac();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10735c064; end: 10735c06f;  */

void FUN_10735c064(void)

{
  func_0x00010735fe88();
  FUN_10735c090();
  return;
}



/* Entry: 10735c070; end: 10735c08f;  */

void FUN_10735c070(void)

{
  FUN_10735c090();
  return;
}



/* Entry: 10735c090; end: 10735c0bf;  */

void FUN_10735c090(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_10735c0c0();
  return;
}



/* Entry: 10735c0c0; end: 10735c117;  */

long FUN_10735c0c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001073605e8();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x20) {
    func_0x00010736042c();
    FUN_10735c118();
    param_4 = uStack_38 + 0x20;
    uStack_38 = param_4;
  }
  func_0x000107360724();
  FUN_10735c150();
  return param_4;
}



/* Entry: 10735c118; end: 10735c14f;  */

void FUN_10735c118(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 10735c150; end: 10735c17b;  */

void FUN_10735c150(void)

{
  uint extraout_w8;
  
  func_0x000107360bf4();
  if ((extraout_w8 & 1) == 0) {
    FUN_10735c17c();
  }
  return;
}



/* Entry: 10735c17c; end: 10735c18b;  */

void FUN_10735c17c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010736089c();
  for (; param_3 != param_5; param_3 = param_3 + -0x20) {
    func_0x000107358a58(param_3 + -0x18);
  }
  return;
}



/* Entry: 10735c18c; end: 10735c1e7;  */

void FUN_10735c18c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x20) {
    func_0x000107358a58(param_3 + -0x18);
  }
  return;
}



/* Entry: 10735c1e8; end: 10735c213;  */

void FUN_10735c1e8(void)

{
  uint extraout_w8;
  
  func_0x000107360bf4();
  if ((extraout_w8 & 1) == 0) {
    FUN_10735c214();
  }
  return;
}



/* Entry: 10735c214; end: 10735c223;  */

void FUN_10735c214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010736089c();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x78;
    FUN_10735a18c();
  }
  return;
}



/* Entry: 10735c224; end: 10735c2a7;  */

void FUN_10735c224(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x78;
    FUN_10735a18c();
  }
  return;
}



/* Entry: 10735c2a8; end: 10735c2af;  */

void FUN_10735c2a8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_10735a18c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735c2b0; end: 10735c303;  */

void FUN_10735c2b0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_10735a18c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735c304; end: 10735c31b;  */

void FUN_10735c304(long *param_1)

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



/* Entry: 10735c31c; end: 10735c3b3;  */

void FUN_10735c31c(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar6;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar2 = param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 < param_2) {
LAB_10735c364:
    func_0x0001073602a8();
    if (uVar3 == 0) {
      FUN_10735c464(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      FUN_10735c47c(uVar2 + 8);
      func_0x0001073603d8();
      FUN_10735c464();
      func_0x00010735ff44();
      uVar6 = extraout_x9;
      while (uVar1 = uVar3 == uVar6, !(bool)uVar1) {
        func_0x000107360234();
        uVar6 = extraout_x9_00;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x00010735fdf0();
        func_0x00010735fddc();
        plVar5 = extraout_x9_01;
        while (*plVar5 != 0) {
          func_0x0001073603c0();
          lVar4 = extraout_x8_00;
          plVar5 = extraout_x12;
          uVar2 = extraout_x11;
          if ((bool)uVar1) {
            uVar6 = extraout_x13 & extraout_x10;
          }
          else {
            uVar6 = extraout_x13;
            if (uVar3 <= extraout_x13) {
              func_0x000107360420();
              lVar4 = extraout_x8_01;
              uVar2 = extraout_x11_00;
              plVar5 = extraout_x12_00;
              uVar6 = extraout_x13_00;
            }
          }
          uVar1 = uVar6 == uVar2;
          if (!(bool)uVar1) {
            if (*(long *)(lVar4 + uVar6 * 8) == 0) {
              func_0x000107360414();
              plVar5 = extraout_x12_01;
            }
            else {
              func_0x00010735fd00();
              plVar5 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar6) {
    func_0x00010735ff7c();
    if ((uVar6 < 3) || (func_0x0001073603cc(), extraout_x8 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010735fce0();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar6) goto LAB_10735c364;
  }
  return;
}



/* Entry: 10735c3b4; end: 10735c463;  */

void FUN_10735c3b4(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  
  if (param_2 == 0) {
    FUN_10735c464(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_10735c47c(param_1 + 8);
    func_0x0001073603d8();
    FUN_10735c464();
    func_0x00010735ff44();
    uVar3 = extraout_x9;
    while (uVar1 = param_2 == uVar3, !(bool)uVar1) {
      func_0x000107360234();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001073603c0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (param_2 <= extraout_x13) {
            func_0x000107360420();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107360414();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10735c464; end: 10735c47b;  */

void FUN_10735c464(long *param_1,long param_2)

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



/* Entry: 10735c47c; end: 10735c4db;  */

int * FUN_10735c47c(int *param_1,int *param_2)

{
  int *piStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    param_2 = (int *)((long)param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  func_0x000104bd35f4();
  if (*param_2 == *param_1) {
    uStack_18 = 0x10735c498;
    piStack_28 = param_1;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_10735c4dc(param_2,&piStack_28);
    return param_2;
  }
  return (int *)0x0;
}



/* Entry: 10735c4dc; end: 10735c55b;  */

bool FUN_10735c4dc(int *param_1,long *param_2)

{
  long lVar1;
  long unaff_x20;
  
  if (*param_1 == 4) {
    return true;
  }
  if ((*param_1 != 3) && (*param_1 != 2)) {
    if (*param_1 == 1) {
      return *(double *)(*param_2 + 8) == *(double *)(param_1 + 2);
    }
    lVar1 = *param_2 + 8;
    func_0x000104c2fe38(lVar1,param_1 + 2);
    func_0x000104c345b0();
    func_0x000104c2fe38();
    return unaff_x20 == lVar1;
  }
  return *(long *)(*param_2 + 8) == *(long *)(param_1 + 2);
}



/* Entry: 10735c55c; end: 10735c5a3;  */

void FUN_10735c55c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x000107360204((&PTR_FUN_1109a4b58)[*(uint *)(param_1 + 0x10)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10735c5a4; end: 10735c5eb;  */

void FUN_10735c5a4(void)

{
  return;
}



/* Entry: 10735c5ec; end: 10735c60b;  */

void FUN_10735c5ec(void)

{
  func_0x000107360438();
  FUN_10735c60c();
  return;
}



/* Entry: 10735c60c; end: 10735c623;  */

void FUN_10735c60c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010735c664(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10735c624; end: 10735c707;  */

void FUN_10735c624(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010735c664(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10735c708; end: 10735c713;  */

void FUN_10735c708(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010735fe88();
  if (param_1 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360c2c();
  func_0x00010735c688();
  FUN_1073589cc(unaff_x19 + 0x20);
  func_0x00010735c6e4(unaff_x19 + 8);
  return;
}



/* Entry: 10735c714; end: 10735c85b;  */

void FUN_10735c714(ulong param_1)

{
  long unaff_x19;
  
  if (param_1 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360c2c();
  func_0x00010735c688();
  FUN_1073589cc(unaff_x19 + 0x20);
  func_0x00010735c6e4(unaff_x19 + 8);
  return;
}



/* Entry: 10735c85c; end: 10735c863;  */

void FUN_10735c85c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x00010735c754();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735c864; end: 10735c8e3;  */

void FUN_10735c864(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x00010735c754();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735c8e4; end: 10735c91b;  */

void FUN_10735c8e4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107360344();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10735c91c; end: 10735c957;  */

long FUN_10735c91c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10735c958();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_10735c988();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10735c958; end: 10735c987;  */

void FUN_10735c958(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001073606c4();
      puVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return;
}



/* Entry: 10735c988; end: 10735ca0f;  */

undefined8 FUN_10735c988(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001009eba74();
  func_0x0001009ebaf4();
  FUN_10735a078();
  func_0x0001009ebb00();
  FUN_107359efc(auStack_48);
  func_0x000107360744(lStack_38);
  lVar1 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010736000c();
      lVar1 = lStack_38;
    } while (extraout_w10 != 0);
  }
  lStack_38 = lVar1 + 0x10;
  func_0x0001009ebb10();
  FUN_107359ec8();
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  FUN_107359f68(auStack_48);
  return uVar2;
}



/* Entry: 10735ca10; end: 10735ca3f;  */

void FUN_10735ca10(void)

{
  func_0x0001073601c8();
  FUN_10735ca40();
  return;
}



/* Entry: 10735ca40; end: 10735ca87;  */

void FUN_10735ca40(void)

{
  long in_x3;
  
  func_0x00010736086c();
  if (in_x3 != 0) {
    func_0x00010735ffd4();
    FUN_10735ca88();
    func_0x0001073600a8();
    FUN_10735cabc();
  }
  func_0x000107360088();
  func_0x00010735cbdc();
  return;
}



/* Entry: 10735ca88; end: 10735cabb;  */

void FUN_10735ca88(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107360c00();
    func_0x000107359f2c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
  }
  else {
    FUN_107359ebc();
    func_0x000107360688();
    param_1 = param_1 + 0x10;
    FUN_10735cae8();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 10735cabc; end: 10735cae7;  */

void FUN_10735cabc(long param_1)

{
  long unaff_x19;
  
  func_0x000107360688();
  param_1 = param_1 + 0x10;
  FUN_10735cae8();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10735cae8; end: 10735cafb;  */

void FUN_10735cae8(void)

{
  FUN_10735cafc();
  return;
}



/* Entry: 10735cafc; end: 10735cb6f;  */

undefined8 *
FUN_10735cafc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    param_4 = param_4 + 2;
  }
  func_0x000107360724();
  FUN_10735cb70();
  return param_4;
}



/* Entry: 10735cb70; end: 10735cb9b;  */

void FUN_10735cb70(void)

{
  uint extraout_w8;
  
  func_0x000107360bf4();
  if ((extraout_w8 & 1) == 0) {
    FUN_10735cb9c();
  }
  return;
}



/* Entry: 10735cb9c; end: 10735cbab;  */

void FUN_10735cb9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010736089c();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x00010735ce54();
  }
  return;
}


