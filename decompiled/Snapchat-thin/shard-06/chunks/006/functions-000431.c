/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c32b5c; end: 104c32bd7;  */

void FUN_104c32b5c(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_104c32bd8();
  if ((param_3 & 1) != 0) {
    FUN_104c32cec(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x78;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 104c32bd8; end: 104c32ceb;  */

undefined1  [16] FUN_104c32bd8(undefined8 *param_1,ulong param_2)

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
  
  func_0x0001000d03a8();
  Hint_Prefetch(*param_1,0,2,0);
  FUN_104c2fe38(*param_1);
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
      FUN_104c32d9c(&stack0xffffffffffffff70,unaff_x19[1] + (long)puVar4 * 0x78);
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_104c32ca8;
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
  FUN_104c32d08();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_104c32ca8:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 104c32cec; end: 104c32d07;  */

void FUN_104c32cec(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_104c32e98(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 104c32d08; end: 104c32d9b;  */

void FUN_104c32d08(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001000d03a8();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    FUN_104c32de0();
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



/* Entry: 104c32d9c; end: 104c32db3;  */

bool FUN_104c32d9c(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  FUN_104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  FUN_104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 104c32db4; end: 104c32ddf;  */

bool FUN_104c32db4(long param_1)

{
  long unaff_x20;
  
  FUN_104c2fe38();
  func_0x000104c345b0();
  FUN_104c2fe38();
  return unaff_x20 == param_1;
}



/* Entry: 104c32de0; end: 104c32e0f;  */

long * FUN_104c32de0(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = param_1[2];
  if ((8 < uVar5) &&
     (uVar3 = uVar5 * 0x19 + param_1[3] * -0x20 == 0, (ulong)(param_1[3] * 0x20) <= uVar5 * 0x19)) {
    func_0x000100060994();
    plVar4 = (long *)&UNK_1107eb130;
    func_0x00010ae6c914();
    func_0x000100060b40(extraout_x8);
    if ((bool)uVar3) {
      return param_1;
    }
    ___stack_chk_fail();
    plVar7 = (long *)plVar4[6];
    if (plVar7 == (long *)0xffffffffffffffff) {
      plVar7 = plVar4;
      FUN_104c2fcd4();
      func_0x000104c2fcf0(plVar4);
      func_0x0001001030f4(plVar7,(undefined *)((long)plVar7 + (long)plVar4));
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return plVar7;
  }
  lVar1 = *param_1;
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  param_1[2] = uVar5 << 1 | 1;
  plVar4 = param_1;
  FUN_104c32974();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      lVar6 = lVar8;
      FUN_104c2fe38();
      plVar7 = param_1;
      func_0x000100061de0(param_1,lVar6);
      bVar2 = (byte)lVar6 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar7) = bVar2;
      *(byte *)(lVar6 + ((long)plVar7 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      plVar4 = param_1;
      func_0x000104c329c4(param_1,lVar11 + (long)plVar7 * 0x78,lVar8);
    }
    lVar8 = lVar8 + 0x78;
  }
  if (lVar9 != 0) {
    plVar4 = (long *)(lVar1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 104c32e10; end: 104c32e4f;  */

undefined * FUN_104c32e10(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000100060994();
  puVar1 = &UNK_1107eb130;
  func_0x00010ae6c914();
  func_0x000100060b40(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    FUN_104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 104c32e50; end: 104c32e73;  */

long FUN_104c32e50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    FUN_104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 104c32e74; end: 104c32e97;  */

void FUN_104c32e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_104c32e98(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 104c32e98; end: 104c32ecb;  */

long FUN_104c32e98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104c2fe00(param_1,*param_2);
  FUN_104c32a18(lVar1 + 0x38,*param_3);
  return param_1;
}



/* Entry: 104c32ecc; end: 104c32f6b;  */

undefined8 *
FUN_104c32ecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong extraout_x9;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100060b04();
  if (((bool)in_ZR) && ((0x51 < extraout_x9 || ((bRam00000001138369ba & 1) == 0)))) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000104c346d0();
      } while (extraout_w10 != 0);
    }
    FUN_104c32f98();
    puVar1 = &uStack_30;
    FUN_104c33970(puVar1);
    return puVar1;
  }
  func_0x0001000609a4(param_1,param_2,extraout_x9);
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 104c32f6c; end: 104c32f97;  */

bool FUN_104c32f6c(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)*param_1;
  FUN_104c2f588(param_1,param_1[1]);
  return cVar1 != '\0';
}



/* Entry: 104c32f98; end: 104c32fb3;  */

void FUN_104c32f98(long param_1)

{
  FUN_104c32fb4();
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return;
}



/* Entry: 104c32fb4; end: 104c32fcb;  */

void FUN_104c32fb4(void)

{
  FUN_104c32fcc();
  return;
}



/* Entry: 104c32fcc; end: 104c33003;  */

void FUN_104c32fcc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000104c346d0();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 4;
  return;
}



/* Entry: 104c33004; end: 104c3302b;  */

undefined4 * FUN_104c33004(undefined4 *param_1)

{
  *param_1 = 2;
  FUN_104c318bc(param_1 + 2);
  return param_1;
}



/* Entry: 104c3302c; end: 104c3304f;  */

undefined8 FUN_104c3302c(undefined8 param_1)

{
  FUN_104c33050();
  return param_1;
}



/* Entry: 104c33050; end: 104c33083;  */

void FUN_104c33050(undefined4 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000104c342bc();
  FUN_104c33084(*param_1,unaff_x20 + 2);
  func_0x000104c34398();
  FUN_104c32a48();
  *unaff_x20 = *unaff_x19;
  return;
}



/* Entry: 104c33084; end: 104c33107;  */

void FUN_104c33084(int param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    return;
  }
  if (param_1 == 5) {
    return;
  }
  if (param_1 == 4) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 2) {
    if (*(uint *)(param_2 + 5) != 0xffffffff) {
      (*(code *)(&PTR_FUN_1107eb090)[*(uint *)(param_2 + 5)])((long)&uStack_28 + 7,param_2);
    }
    *(undefined4 *)(param_2 + 5) = 0xffffffff;
    return;
  }
  if (param_1 == 1) {
    puVar2 = param_2;
    FUN_104c33620();
    pcVar1 = pcRam00000001138369a8;
    if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
      uStack_28 = param_2[1];
      uStack_30 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar1)(&uStack_30);
      func_0x0001000df524(&uStack_30);
    }
    FUN_104c33428(param_2);
  }
  else {
    if (param_1 != 0) {
      return;
    }
    puVar2 = param_2;
    FUN_104c33168();
    pcVar1 = pcRam00000001138369a8;
    if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
      uStack_28 = param_2[1];
      uStack_30 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar1)(&uStack_30);
      func_0x0001000df524(&uStack_30);
    }
    FUN_104c331a4(param_2);
  }
  return;
}



/* Entry: 104c33108; end: 104c33167;  */

void FUN_104c33108(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_104c33168();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_104c331a4(param_1);
  return;
}



/* Entry: 104c33168; end: 104c331a3;  */

long FUN_104c33168(long *param_1)

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



/* Entry: 104c331a4; end: 104c33217;  */

void FUN_104c331a4(long param_1)

{
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c33218; end: 104c3321f;  */

long * FUN_104c33218(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar2 = (byte *)param_1[1];
  pbVar5 = (byte *)*param_1;
  if ((pbVar2 != pbVar5) && (bVar1 = *pbVar5, -1 < (long)(char)bVar1)) {
    *param_1 = (long)(pbVar5 + 1);
    return (long *)(long)(char)bVar1;
  }
  pbVar5 = (byte *)*param_1;
  if (9 < (long)pbVar2 - (long)pbVar5) {
    pbVar2 = pbVar5 + 1;
    plVar3 = (long *)((ulong)*pbVar5 & 0x7f);
    if ((char)*pbVar5 < '\0') {
      plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[1] & 0x7f) << 7);
      if ((char)pbVar5[1] < '\0') {
        plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[2] & 0x7f) << 0xe);
        if ((char)pbVar5[2] < '\0') {
          plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[3] & 0x7f) << 0x15);
          if ((char)pbVar5[3] < '\0') {
            plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[4] & 0x7f) << 0x1c);
            if ((char)pbVar5[4] < '\0') {
              plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[5] & 0x7f) << 0x23);
              if ((char)pbVar5[5] < '\0') {
                plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[6] & 0x7f) << 0x2a);
                if ((char)pbVar5[6] < '\0') {
                  plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[7] & 0x7f) << 0x31);
                  if ((char)pbVar5[7] < '\0') {
                    pbVar2 = pbVar5 + 9;
                    plVar3 = (long *)((ulong)plVar3 | ((ulong)pbVar5[8] & 0x7f) << 0x38);
                    if ((char)pbVar5[8] < '\0') {
                      if ((long)(char)*pbVar2 < 0) goto LAB_104c2f4f8;
                      plVar3 = (long *)((ulong)plVar3 | (long)(char)*pbVar2 << 0x3f);
                      pbVar2 = pbVar5 + 10;
                    }
                  }
                  else {
                    pbVar2 = pbVar5 + 8;
                  }
                }
                else {
                  pbVar2 = pbVar5 + 7;
                }
              }
              else {
                pbVar2 = pbVar5 + 6;
              }
            }
            else {
              pbVar2 = pbVar5 + 5;
            }
          }
          else {
            pbVar2 = pbVar5 + 4;
          }
        }
        else {
          pbVar2 = pbVar5 + 3;
        }
      }
      else {
        pbVar2 = pbVar5 + 2;
      }
    }
LAB_104c2f444:
    *param_1 = (long)pbVar2;
    return plVar3;
  }
  uVar4 = 0;
  uVar6 = 0;
  while (pbVar5 != pbVar2) {
    bVar1 = *pbVar5;
    if (-1 < (char)bVar1) {
      plVar3 = (long *)((ulong)bVar1 << (uVar6 & 0x3f) | uVar4);
      pbVar2 = pbVar5 + 1;
      goto LAB_104c2f444;
    }
    uVar4 = ((ulong)bVar1 & 0x7f) << (uVar6 & 0x3f) | uVar4;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar5 = pbVar5 + 1;
  }
  func_0x000104c34438();
  func_0x000104c3419c();
LAB_104c2f4f8:
  func_0x000104c34438();
  func_0x000104c343bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return param_1;
}



/* Entry: 104c33220; end: 104c3323b;  */

ulong FUN_104c33220(ulong param_1)

{
  func_0x000104c34718();
  return -(param_1 & 1) ^ param_1 >> 1;
}



/* Entry: 104c3323c; end: 104c3325f;  */

void FUN_104c3323c(void)

{
  func_0x000104c3463c();
  FUN_104c33084();
  return;
}



/* Entry: 104c33260; end: 104c33287;  */

undefined8 FUN_104c33260(undefined8 param_1)

{
  FUN_104c33288(param_1);
  return param_1;
}



/* Entry: 104c33288; end: 104c3329b;  */

void FUN_104c33288(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    if ((bRam00000001130a8650 & 1) == 0) {
      iVar3 = 0x130a8650;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_104c33328(0x1130a8640);
        ___cxa_guard_release(0x1130a8650);
      }
    }
    lVar2 = lRam00000001130a8648;
    uVar1 = uRam00000001130a8640;
    param_1[1] = lRam00000001130a8648;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x000104c346d0();
      } while (extraout_w10 != 0);
    }
    return;
  }
  FUN_104c3347c(&stack0xffffffffffffffef,param_3);
  return;
}



/* Entry: 104c3329c; end: 104c33327;  */

void FUN_104c3329c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001130a8650 & 1) == 0) {
    iVar3 = 0x130a8650;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_104c33328(0x1130a8640);
      ___cxa_guard_release(0x1130a8650);
    }
  }
  lVar2 = lRam00000001130a8648;
  uVar1 = uRam00000001130a8640;
  param_1[1] = lRam00000001130a8648;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000104c346d0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104c33328; end: 104c33343;  */

void FUN_104c33328(void)

{
  undefined1 uStack_11;
  
  FUN_104c33344(&uStack_11);
  return;
}



/* Entry: 104c33344; end: 104c333b3;  */

long FUN_104c33344(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000100060994();
  func_0x000104c34784();
  *puStack_30 = &PTR_FUN_1107eb160;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &UNK_10e52b660;
  puStack_30[6] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0;
  func_0x000104c34370();
  FUN_104c3344c();
  func_0x000100060b40(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104c333dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104c333b4; end: 104c333db;  */

long FUN_104c333b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104c333dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104c333dc; end: 104c333f7;  */

void FUN_104c333dc(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  FUN_104bd35f4();
  *param_1 = &PTR_FUN_1107eb160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c333f8; end: 104c333fb;  */

void FUN_104c333f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c333fc; end: 104c3340f;  */

void FUN_104c333fc(void)

{
  func_0x000104c3341c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c33410; end: 104c33427;  */

long * FUN_104c33410(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_104c33584(plVar1);
    __ZdlPv(*plVar1 + -8);
  }
  return plVar1;
}



/* Entry: 104c33428; end: 104c3344b;  */

void FUN_104c33428(long param_1)

{
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c3344c; end: 104c3345b;  */

void FUN_104c3344c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c3345c; end: 104c3347b;  */

void FUN_104c3345c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_104c3347c(&uStack_11,param_1);
  return;
}



/* Entry: 104c3347c; end: 104c334df;  */

undefined8 * FUN_104c3347c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000100060994();
  func_0x000104c34784();
  FUN_104c334e0(puStack_30,param_2);
  func_0x000104c34370();
  FUN_104c3344c();
  func_0x000100060b40(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x000104c345e0();
  FUN_104c3344c();
  func_0x000104c342c8();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1107eb160;
  puStack_30[1] = 0;
  FUN_104c33514(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 104c334e0; end: 104c33513;  */

undefined8 * FUN_104c334e0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107eb160;
  param_1[1] = 0;
  FUN_104c33514(param_1 + 3);
  return param_1;
}



/* Entry: 104c33514; end: 104c3352b;  */

void FUN_104c33514(long param_1)

{
  FUN_104c3352c();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 104c3352c; end: 104c33547;  */

void FUN_104c3352c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 104c33548; end: 104c33583;  */

long * FUN_104c33548(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_104c33584(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 104c33584; end: 104c335bf;  */

void FUN_104c33584(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      FUN_104c32ad0(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x78;
  }
  return;
}



/* Entry: 104c335c0; end: 104c3361f;  */

void FUN_104c335c0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_104c33620();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_104c33428(param_1);
  return;
}



/* Entry: 104c33620; end: 104c3365b;  */

long FUN_104c33620(long *param_1)

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



/* Entry: 104c3365c; end: 104c3367f;  */

void FUN_104c3365c(void)

{
  func_0x000104c3463c();
  FUN_104c31c04();
  return;
}



/* Entry: 104c33680; end: 104c336eb;  */

long * FUN_104c33680(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000104c336c8();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 104c336ec; end: 104c336ff;  */

void FUN_104c336ec(undefined8 *param_1)

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



/* Entry: 104c33700; end: 104c33757;  */

undefined8 FUN_104c33700(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_104c319e0(param_1 + 0x18);
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 104c33758; end: 104c337c3;  */

void FUN_104c33758(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long *unaff_x19;
  long lVar1;
  long lVar2;
  
  func_0x000104c345ec();
  if ((extraout_x8 != 0) && (*unaff_x19 != 0)) {
    func_0x000104c347f8();
    if (extraout_x9 != 0) {
      lVar1 = extraout_x8_00 + extraout_x9 * 0x28 + -0x20;
      lVar2 = extraout_x9 * -0x28;
      do {
        func_0x000104c33728(lVar1 + 0x10);
        func_0x000104c33728(lVar1);
        lVar1 = lVar1 + -0x28;
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != 0);
    }
    func_0x000104c345a0();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 104c337c4; end: 104c3387f;  */

undefined4 * FUN_104c337c4(undefined4 *param_1)

{
  switch(*param_1) {
  case 2:
    func_0x000104c33850(param_1 + 2);
    break;
  case 3:
    func_0x000104c33880(param_1 + 2);
    break;
  case 4:
    if ((*(long *)(param_1 + 4) != 0) && (*(long *)(param_1 + 2) != 0)) {
      __ZdaPv();
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
    }
    break;
  case 5:
    func_0x000104c338d0(param_1 + 2);
    break;
  case 6:
    func_0x000104c33920(param_1 + 2);
  }
  return param_1;
}



/* Entry: 104c33880; end: 104c3396f;  */

void FUN_104c33880(void)

{
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long unaff_x21;
  
  func_0x000104c345ec();
  if ((extraout_x8 != 0) && (*unaff_x19 != 0)) {
    func_0x000104c347f8();
    if (extraout_x9 != 0) {
      func_0x000104c3462c();
      do {
        func_0x000104c33850();
        unaff_x21 = unaff_x21 + 0x10;
      } while (unaff_x21 != 0);
    }
    func_0x000104c345a0();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 104c33970; end: 104c33993;  */

void FUN_104c33970(long param_1)

{
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c33994; end: 104c33a77;  */

/* WARNING: Possible PIC construction at 0x000104c33ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c33ad4) */

undefined8 ** FUN_104c33994(undefined8 ***param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  int iVar5;
  undefined8 *puVar6;
  long extraout_x9;
  undefined8 **ppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *apuStack_a8 [5];
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uVar8 = 0;
  uVar10 = 0;
  ppuVar7 = (undefined8 **)0x0;
  puStack_50 = param_1[0x10];
  puStack_48 = param_1[0x11];
  puVar1 = param_1[0x12];
  puVar6 = param_1[0x13];
  do {
    if (puStack_50 == puVar1 && puStack_48 == puVar6) {
      return ppuVar7;
    }
    if (uVar10 == 0) {
      ppuVar3 = &puStack_50;
      func_0x000104c343e0();
      param_1 = &ppuStack_60;
      ppuStack_60 = ppuVar3;
      uStack_58 = param_2;
      FUN_104c327f8();
      uVar8 = (ulong)((uint)param_1 & 7);
      uVar10 = (uint)param_1 >> 3;
      if (0xffff < uVar10) {
        uVar10 = 0x10000;
      }
    }
    iVar5 = (int)uVar8;
    if (iVar5 != 7) {
      if (iVar5 != 2) {
        if (iVar5 != 1) {
          func_0x000104c3444c();
          func_0x000104c3472c();
          func_0x000104c3420c();
          ppuVar7 = param_1;
          ___cxa_throw();
          func_0x000104c345b0();
          ___cxa_free_exception();
          func_0x000104c34390();
          pppuVar2 = (undefined1 ***)auStack_b0;
          pcStack_68 = FUN_104c33a78;
          puStack_80 = puVar1;
          ppuStack_78 = param_1;
          puStack_70 = &stack0xfffffffffffffff0;
          func_0x000104c347c0();
          if (param_2 <= (ulong)(extraout_x9 / 0x18)) {
            return ppuVar7;
          }
          if (param_2 < 0xaaaaaaaaaaaaaab) {
            ppuVar3 = apuStack_a8;
            func_0x000104c33bb0();
            func_0x000104c343b0();
            uVar12 = 0x104c33ad4;
            param_1 = (undefined8 ***)ppuVar7;
            pppuVar11 = (undefined1 ***)&puStack_70;
          }
          else {
            FUN_104c33ae8();
            pppuVar2 = &ppuStack_c0;
            pppuVar11 = &ppuStack_c0;
            pcStack_b8 = FUN_104c33ae8;
            uVar12 = 0x104c33af4;
            ppuStack_c0 = &puStack_70;
            func_0x000104c341c0();
            ppuVar3 = ppuVar7;
          }
          *(ulong *)((long)pppuVar2 + -0x30) = uVar8;
          *(undefined8 **)((long)pppuVar2 + -0x28) = puVar6;
          *(undefined8 **)((long)pppuVar2 + -0x20) = puVar1;
          *(undefined8 ****)((long)pppuVar2 + -0x18) = param_1;
          *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar11;
          *(undefined8 *)((long)pppuVar2 + -8) = uVar12;
          func_0x000104c342bc();
          ppuVar4 = (undefined8 **)*ppuVar3;
          ppuVar3 = (undefined8 **)ppuVar3[1];
          puVar9 = (undefined8 *)
                   (*(long *)(param_2 + 8) + (((long)ppuVar3 - (long)ppuVar4) / -0x18) * 0x18);
          puVar6 = puVar9;
          for (ppuVar7 = ppuVar4; ppuVar7 != ppuVar3; ppuVar7 = ppuVar7 + 3) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar13 = *ppuVar7;
            puVar6[1] = ppuVar7[1];
            *puVar6 = puVar13;
            puVar6[2] = ppuVar7[2];
            *ppuVar7 = (undefined8 *)0x0;
            ppuVar7[1] = (undefined8 *)0x0;
            ppuVar7[2] = (undefined8 *)0x0;
            puVar6 = puVar6 + 3;
          }
          for (; ppuVar4 != ppuVar3; ppuVar4 = ppuVar4 + 3) {
            func_0x000104c336c8();
          }
          param_1[1] = (undefined8 **)puVar9;
          puVar6 = (undefined8 *)*puVar1;
          *puVar1 = puVar9;
          puVar1[1] = puVar6;
          param_1[1] = (undefined8 **)puVar6;
          puVar6 = (undefined8 *)puVar1[1];
          puVar1[1] = param_1[2];
          param_1[2] = (undefined8 **)puVar6;
          puVar6 = (undefined8 *)puVar1[2];
          puVar1[2] = param_1[3];
          param_1[3] = (undefined8 **)puVar6;
          *param_1 = param_1[1];
          return ppuVar4;
        }
        ppuVar7 = (undefined8 **)((long)ppuVar7 + 1);
      }
      func_0x000104c343e0(&puStack_50);
      param_1 = (undefined8 ***)&puStack_50;
      func_0x000104c343e0();
    }
    uVar10 = uVar10 - 1;
  } while( true );
}



/* Entry: 104c33a78; end: 104c33ae7;  */

/* WARNING: Possible PIC construction at 0x000104c33ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c33ad4) */

void FUN_104c33a78(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [5];
  
  ppuVar2 = (undefined1 **)auStack_50;
  func_0x000104c347c0();
  if (param_2 <= (ulong)(extraout_x9 / 0x18)) {
    return;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    puVar3 = auStack_48;
    func_0x000104c33bb0();
    func_0x000104c343b0();
    uVar8 = 0x104c33ad4;
    unaff_x19 = param_1;
    ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    FUN_104c33ae8();
    ppuVar2 = &puStack_60;
    ppuVar7 = &puStack_60;
    pcStack_58 = FUN_104c33ae8;
    uVar8 = 0x104c33af4;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000104c341c0();
    puVar3 = param_1;
  }
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(undefined8 **)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar7;
  *(undefined8 *)((long)ppuVar2 + -8) = uVar8;
  func_0x000104c342bc();
  puVar4 = (undefined8 *)*puVar3;
  puVar1 = (undefined8 *)puVar3[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar4) / -0x18) * 0x18);
  puVar5 = puVar6;
  for (puVar3 = puVar4; puVar3 != puVar1; puVar3 = puVar3 + 3) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    uVar8 = *puVar3;
    puVar5[1] = puVar3[1];
    *puVar5 = uVar8;
    puVar5[2] = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar5 = puVar5 + 3;
  }
  for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
    func_0x000104c336c8();
  }
  unaff_x19[1] = puVar6;
  uVar8 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar8;
  unaff_x19[1] = uVar8;
  uVar8 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar8;
  uVar8 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar8;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 104c33ae8; end: 104c33af3;  */

void FUN_104c33ae8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  
  func_0x000104c341c0();
  func_0x000104c342bc();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar4;
    puVar3[2] = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x000104c336c8();
  }
  unaff_x19[1] = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 104c33af4; end: 104c33c1b;  */

void FUN_104c33af4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  
  func_0x000104c342bc();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar4;
    puVar3[2] = puVar5[2];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x000104c336c8();
  }
  unaff_x19[1] = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 104c33c1c; end: 104c33d23;  */

long * FUN_104c33c1c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x000104c336c8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c33d24; end: 104c33d7b;  */

void FUN_104c33d24(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x000104c347c0();
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_104c33d7c();
      func_0x000104c34350();
      func_0x000104c342c8();
      func_0x000104c341c0();
      func_0x000104c340f0();
      func_0x000104c34088();
      return;
    }
    FUN_104c33da8(auStack_48);
    func_0x000104c342fc();
    func_0x000104c34424();
  }
  return;
}



/* Entry: 104c33d7c; end: 104c33d87;  */

void FUN_104c33d7c(void)

{
  func_0x000104c341c0();
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c33d88; end: 104c33da7;  */

void FUN_104c33d88(void)

{
  func_0x000104c340f0();
  func_0x000104c34088();
  return;
}



/* Entry: 104c33da8; end: 104c33e07;  */

void FUN_104c33da8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000104c342d0();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104c33de8();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 104c33e08; end: 104c33e23;  */

long * FUN_104c33e08(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104c33e50();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c33e24; end: 104c33e4f;  */

long * FUN_104c33e24(long *param_1)

{
  FUN_104c33e50();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c33e50; end: 104c33e73;  */

void FUN_104c33e50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 104c33e74; end: 104c33f03;  */

void FUN_104c33e74(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long alStack_48 [3];
  long lStack_30;
  
  uVar2 = param_1[1] - *param_1;
  if (uVar2 < (ulong)(param_1[2] - *param_1)) {
    lVar1 = (long)uVar2 >> 2;
    FUN_104c33da8(alStack_48,lVar1,lVar1);
    if ((ulong)(lStack_30 - alStack_48[0]) < (ulong)(param_1[2] - *param_1)) {
      func_0x000104c342fc();
    }
    func_0x000104c34424();
  }
  return;
}



/* Entry: 104c33f04; end: 104c33f47;  */

undefined2 * FUN_104c33f04(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined1 in_CY;
  undefined2 *puVar2;
  undefined2 *extraout_x8;
  undefined2 *unaff_x19;
  
  func_0x000104c3464c();
  if ((bool)in_CY) {
    puVar2 = unaff_x19;
    FUN_104c33f48();
  }
  else {
    uVar1 = *param_3;
    *extraout_x8 = *param_2;
    extraout_x8[1] = uVar1;
    puVar2 = extraout_x8 + 2;
  }
  *(undefined2 **)(unaff_x19 + 4) = puVar2;
  return puVar2 + -2;
}



/* Entry: 104c33f48; end: 104c33fb7;  */

long FUN_104c33f48(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 *puStack_48;
  
  func_0x000104c346f8(param_1[1] - *param_1);
  func_0x000104c34298();
  func_0x000104c34570();
  uVar1 = *param_3;
  *puStack_48 = *param_2;
  puStack_48[1] = uVar1;
  func_0x000104c342fc();
  lVar2 = param_1[1];
  func_0x000104c34424();
  return lVar2;
}



/* Entry: 104c33fb8; end: 104c33ff7;  */

undefined4 * FUN_104c33fb8(long *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar1 = (undefined4 *)(param_1[2] - *param_1 >> 1);
    if (puVar1 <= param_2) {
      puVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      puVar1 = (undefined4 *)0x3fffffffffffffff;
    }
    return puVar1;
  }
  FUN_104c33d7c();
  func_0x000104c344bc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_104c34030();
  }
  else {
    puVar1 = (undefined4 *)((long)param_1 + 4);
    *(undefined4 *)param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 104c33ff8; end: 104c3402f;  */

undefined4 * FUN_104c33ff8(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x000104c344bc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_104c34030();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 104c34030; end: 104c34087;  */

undefined8 FUN_104c34030(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 *unaff_x20;
  undefined8 uStack_38;
  
  func_0x000104c34188();
  func_0x000104c346f8();
  func_0x000104c34298();
  func_0x000104c34570();
  *uStack_38 = *unaff_x20;
  func_0x000104c342fc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104c34424();
  return uVar1;
}



/* Entry: 104c34088; end: 104c34883;  */

void FUN_104c34088(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
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



/* Entry: 104c34884; end: 104c348b3;  */

void FUN_104c34884(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000104c35d70();
  while (param_1 != unaff_x20) {
    param_1 = param_1 + -0xa0;
    func_0x000104c35148();
  }
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 104c348b4; end: 104c34927;  */

void FUN_104c348b4(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x9;
  long extraout_x9_00;
  undefined1 *puVar6;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  undefined1 auStack_48 [40];
  
  func_0x000104c35d3c();
  if ((ulong)(extraout_x9 / 0xa0) < param_2) {
    if (param_2 < 0x19999999999999a) {
      func_0x000104c34ac8(auStack_48);
      func_0x000104c35cd0();
      func_0x000104c35c30();
    }
    else {
      FUN_104c3499c();
      func_0x000104c35c30();
      func_0x000104c35c18();
      func_0x000104c35d3c();
      if ((ulong)(extraout_x9_00 / 0x30) < param_2) {
        if (0x555555555555555 < param_2) {
          FUN_104c34b78();
          plVar2 = param_1;
          func_0x000104c35c38();
          func_0x000104c35c18();
          func_0x000104c35b84();
          func_0x000104c35c7c();
          puVar3 = (undefined1 *)*plVar2;
          puVar1 = (undefined1 *)plVar2[1];
          puVar7 = (undefined1 *)(extraout_x8 + (((long)puVar1 - (long)puVar3) / -0xa0) * 0xa0);
          puVar4 = puVar7;
          for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 0xa0) {
            *puVar4 = *puVar6;
            uVar8 = *(undefined8 *)(puVar6 + 0x10);
            uVar5 = *(undefined8 *)(puVar6 + 8);
            *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
            *(undefined8 *)(puVar4 + 0x10) = uVar8;
            *(undefined8 *)(puVar4 + 8) = uVar5;
            *(undefined8 *)(puVar6 + 0x10) = 0;
            *(undefined8 *)(puVar6 + 0x18) = 0;
            *(undefined8 *)(puVar6 + 8) = 0;
            *(undefined8 *)(puVar4 + 0x20) = 0;
            *(undefined8 *)(puVar4 + 0x28) = 0;
            *(undefined8 *)(puVar4 + 0x30) = 0;
            uVar5 = *(undefined8 *)(puVar6 + 0x20);
            *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(puVar6 + 0x28);
            *(undefined8 *)(puVar4 + 0x20) = uVar5;
            *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
            *(undefined8 *)(puVar6 + 0x20) = 0;
            *(undefined8 *)(puVar6 + 0x28) = 0;
            *(undefined8 *)(puVar6 + 0x30) = 0;
            *(undefined8 *)(puVar4 + 0x38) = 0;
            *(undefined8 *)(puVar4 + 0x40) = 0;
            *(undefined8 *)(puVar4 + 0x48) = 0;
            uVar5 = *(undefined8 *)(puVar6 + 0x38);
            *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(puVar6 + 0x40);
            *(undefined8 *)(puVar4 + 0x38) = uVar5;
            *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(puVar6 + 0x48);
            *(undefined8 *)(puVar6 + 0x38) = 0;
            *(undefined8 *)(puVar6 + 0x40) = 0;
            *(undefined8 *)(puVar6 + 0x48) = 0;
            uVar8 = *(undefined8 *)(puVar6 + 0x58);
            uVar5 = *(undefined8 *)(puVar6 + 0x50);
            *(undefined8 *)(puVar4 + 0x60) = *(undefined8 *)(puVar6 + 0x60);
            *(undefined8 *)(puVar4 + 0x58) = uVar8;
            *(undefined8 *)(puVar4 + 0x50) = uVar5;
            *(undefined8 *)(puVar6 + 0x58) = 0;
            *(undefined8 *)(puVar6 + 0x60) = 0;
            *(undefined8 *)(puVar6 + 0x50) = 0;
            uVar8 = *(undefined8 *)(puVar6 + 0x70);
            uVar5 = *(undefined8 *)(puVar6 + 0x68);
            *(undefined8 *)(puVar4 + 0x78) = *(undefined8 *)(puVar6 + 0x78);
            *(undefined8 *)(puVar4 + 0x70) = uVar8;
            *(undefined8 *)(puVar4 + 0x68) = uVar5;
            *(undefined8 *)(puVar6 + 0x70) = 0;
            *(undefined8 *)(puVar6 + 0x78) = 0;
            *(undefined8 *)(puVar6 + 0x68) = 0;
            puVar4[0x80] = puVar6[0x80];
            uVar8 = *(undefined8 *)(puVar6 + 0x90);
            uVar5 = *(undefined8 *)(puVar6 + 0x88);
            *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(puVar6 + 0x98);
            *(undefined8 *)(puVar4 + 0x90) = uVar8;
            *(undefined8 *)(puVar4 + 0x88) = uVar5;
            *(undefined8 *)(puVar6 + 0x90) = 0;
            *(undefined8 *)(puVar6 + 0x98) = 0;
            *(undefined8 *)(puVar6 + 0x88) = 0;
            puVar4 = puVar4 + 0xa0;
          }
          for (; puVar3 != puVar1; puVar3 = puVar3 + 0xa0) {
            func_0x000104c35148();
          }
          param_1[1] = (long)puVar7;
          uVar5 = *unaff_x20;
          *unaff_x20 = puVar7;
          unaff_x20[1] = uVar5;
          func_0x000104c35b54();
          return;
        }
        FUN_104c34c64(auStack_98);
        func_0x000104c35cdc();
        func_0x000104c35c38();
      }
    }
  }
  return;
}



/* Entry: 104c34928; end: 104c3499b;  */

void FUN_104c34928(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x9;
  undefined1 *puVar6;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [40];
  
  func_0x000104c35d3c();
  if ((ulong)(extraout_x9 / 0x30) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_104c34b78();
      plVar2 = param_1;
      func_0x000104c35c38();
      func_0x000104c35c18();
      func_0x000104c35b84();
      func_0x000104c35c7c();
      puVar3 = (undefined1 *)*plVar2;
      puVar1 = (undefined1 *)plVar2[1];
      puVar7 = (undefined1 *)(extraout_x8 + (((long)puVar1 - (long)puVar3) / -0xa0) * 0xa0);
      puVar4 = puVar7;
      for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 0xa0) {
        *puVar4 = *puVar6;
        uVar8 = *(undefined8 *)(puVar6 + 0x10);
        uVar5 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
        *(undefined8 *)(puVar4 + 0x10) = uVar8;
        *(undefined8 *)(puVar4 + 8) = uVar5;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        *(undefined8 *)(puVar4 + 0x30) = 0;
        uVar5 = *(undefined8 *)(puVar6 + 0x20);
        *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(puVar6 + 0x28);
        *(undefined8 *)(puVar4 + 0x20) = uVar5;
        *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x28) = 0;
        *(undefined8 *)(puVar6 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x38) = 0;
        *(undefined8 *)(puVar4 + 0x40) = 0;
        *(undefined8 *)(puVar4 + 0x48) = 0;
        uVar5 = *(undefined8 *)(puVar6 + 0x38);
        *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(puVar6 + 0x40);
        *(undefined8 *)(puVar4 + 0x38) = uVar5;
        *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(puVar6 + 0x48);
        *(undefined8 *)(puVar6 + 0x38) = 0;
        *(undefined8 *)(puVar6 + 0x40) = 0;
        *(undefined8 *)(puVar6 + 0x48) = 0;
        uVar8 = *(undefined8 *)(puVar6 + 0x58);
        uVar5 = *(undefined8 *)(puVar6 + 0x50);
        *(undefined8 *)(puVar4 + 0x60) = *(undefined8 *)(puVar6 + 0x60);
        *(undefined8 *)(puVar4 + 0x58) = uVar8;
        *(undefined8 *)(puVar4 + 0x50) = uVar5;
        *(undefined8 *)(puVar6 + 0x58) = 0;
        *(undefined8 *)(puVar6 + 0x60) = 0;
        *(undefined8 *)(puVar6 + 0x50) = 0;
        uVar8 = *(undefined8 *)(puVar6 + 0x70);
        uVar5 = *(undefined8 *)(puVar6 + 0x68);
        *(undefined8 *)(puVar4 + 0x78) = *(undefined8 *)(puVar6 + 0x78);
        *(undefined8 *)(puVar4 + 0x70) = uVar8;
        *(undefined8 *)(puVar4 + 0x68) = uVar5;
        *(undefined8 *)(puVar6 + 0x70) = 0;
        *(undefined8 *)(puVar6 + 0x78) = 0;
        *(undefined8 *)(puVar6 + 0x68) = 0;
        puVar4[0x80] = puVar6[0x80];
        uVar8 = *(undefined8 *)(puVar6 + 0x90);
        uVar5 = *(undefined8 *)(puVar6 + 0x88);
        *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(puVar6 + 0x98);
        *(undefined8 *)(puVar4 + 0x90) = uVar8;
        *(undefined8 *)(puVar4 + 0x88) = uVar5;
        *(undefined8 *)(puVar6 + 0x90) = 0;
        *(undefined8 *)(puVar6 + 0x98) = 0;
        *(undefined8 *)(puVar6 + 0x88) = 0;
        puVar4 = puVar4 + 0xa0;
      }
      for (; puVar3 != puVar1; puVar3 = puVar3 + 0xa0) {
        func_0x000104c35148();
      }
      param_1[1] = (long)puVar7;
      uVar5 = *unaff_x20;
      *unaff_x20 = puVar7;
      unaff_x20[1] = uVar5;
      func_0x000104c35b54();
      return;
    }
    FUN_104c34c64(auStack_48);
    func_0x000104c35cdc();
    func_0x000104c35c38();
  }
  return;
}



/* Entry: 104c3499c; end: 104c349a7;  */

void FUN_104c3499c(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  func_0x000104c35b84();
  func_0x000104c35c7c();
  puVar2 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)param_1[1];
  puVar6 = (undefined1 *)(extraout_x8 + (((long)puVar1 - (long)puVar2) / -0xa0) * 0xa0);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 0xa0) {
    *puVar3 = *puVar5;
    uVar7 = *(undefined8 *)(puVar5 + 0x10);
    uVar4 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(puVar5 + 0x18);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(puVar3 + 8) = uVar4;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    uVar4 = *(undefined8 *)(puVar5 + 0x20);
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar5 + 0x28);
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(puVar5 + 0x30);
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    uVar4 = *(undefined8 *)(puVar5 + 0x38);
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(puVar5 + 0x40);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(puVar5 + 0x48);
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    uVar7 = *(undefined8 *)(puVar5 + 0x58);
    uVar4 = *(undefined8 *)(puVar5 + 0x50);
    *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(puVar5 + 0x60);
    *(undefined8 *)(puVar3 + 0x58) = uVar7;
    *(undefined8 *)(puVar3 + 0x50) = uVar4;
    *(undefined8 *)(puVar5 + 0x58) = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0;
    *(undefined8 *)(puVar5 + 0x50) = 0;
    uVar7 = *(undefined8 *)(puVar5 + 0x70);
    uVar4 = *(undefined8 *)(puVar5 + 0x68);
    *(undefined8 *)(puVar3 + 0x78) = *(undefined8 *)(puVar5 + 0x78);
    *(undefined8 *)(puVar3 + 0x70) = uVar7;
    *(undefined8 *)(puVar3 + 0x68) = uVar4;
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x78) = 0;
    *(undefined8 *)(puVar5 + 0x68) = 0;
    puVar3[0x80] = puVar5[0x80];
    uVar7 = *(undefined8 *)(puVar5 + 0x90);
    uVar4 = *(undefined8 *)(puVar5 + 0x88);
    *(undefined8 *)(puVar3 + 0x98) = *(undefined8 *)(puVar5 + 0x98);
    *(undefined8 *)(puVar3 + 0x90) = uVar7;
    *(undefined8 *)(puVar3 + 0x88) = uVar4;
    *(undefined8 *)(puVar5 + 0x90) = 0;
    *(undefined8 *)(puVar5 + 0x98) = 0;
    *(undefined8 *)(puVar5 + 0x88) = 0;
    puVar3 = puVar3 + 0xa0;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xa0) {
    func_0x000104c35148();
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  func_0x000104c35b54();
  return;
}



/* Entry: 104c349a8; end: 104c34b37;  */

void FUN_104c349a8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  func_0x000104c35c7c();
  puVar2 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)param_1[1];
  puVar6 = (undefined1 *)(extraout_x8 + (((long)puVar1 - (long)puVar2) / -0xa0) * 0xa0);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 0xa0) {
    *puVar3 = *puVar5;
    uVar7 = *(undefined8 *)(puVar5 + 0x10);
    uVar4 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(puVar5 + 0x18);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(puVar3 + 8) = uVar4;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    uVar4 = *(undefined8 *)(puVar5 + 0x20);
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar5 + 0x28);
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(puVar5 + 0x30);
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    uVar4 = *(undefined8 *)(puVar5 + 0x38);
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(puVar5 + 0x40);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(puVar5 + 0x48);
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    uVar7 = *(undefined8 *)(puVar5 + 0x58);
    uVar4 = *(undefined8 *)(puVar5 + 0x50);
    *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(puVar5 + 0x60);
    *(undefined8 *)(puVar3 + 0x58) = uVar7;
    *(undefined8 *)(puVar3 + 0x50) = uVar4;
    *(undefined8 *)(puVar5 + 0x58) = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0;
    *(undefined8 *)(puVar5 + 0x50) = 0;
    uVar7 = *(undefined8 *)(puVar5 + 0x70);
    uVar4 = *(undefined8 *)(puVar5 + 0x68);
    *(undefined8 *)(puVar3 + 0x78) = *(undefined8 *)(puVar5 + 0x78);
    *(undefined8 *)(puVar3 + 0x70) = uVar7;
    *(undefined8 *)(puVar3 + 0x68) = uVar4;
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x78) = 0;
    *(undefined8 *)(puVar5 + 0x68) = 0;
    puVar3[0x80] = puVar5[0x80];
    uVar7 = *(undefined8 *)(puVar5 + 0x90);
    uVar4 = *(undefined8 *)(puVar5 + 0x88);
    *(undefined8 *)(puVar3 + 0x98) = *(undefined8 *)(puVar5 + 0x98);
    *(undefined8 *)(puVar3 + 0x90) = uVar7;
    *(undefined8 *)(puVar3 + 0x88) = uVar4;
    *(undefined8 *)(puVar5 + 0x90) = 0;
    *(undefined8 *)(puVar5 + 0x98) = 0;
    *(undefined8 *)(puVar5 + 0x88) = 0;
    puVar3 = puVar3 + 0xa0;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xa0) {
    func_0x000104c35148();
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  func_0x000104c35b54();
  return;
}



/* Entry: 104c34b38; end: 104c34b77;  */

void FUN_104c34b38(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000104c35cb0();
  while (func_0x000104c35c8c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0xa0;
    func_0x000104c35148();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 104c34b78; end: 104c34b83;  */

void FUN_104c34b78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000104c35b84();
  func_0x000104c35c7c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)(extraout_x8 + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30);
  puVar3 = puVar5;
  for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 6) {
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar7;
    *puVar3 = uVar6;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar7 = puVar4[4];
    uVar6 = puVar4[3];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar7;
    puVar3[3] = uVar6;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = 0;
    puVar3 = puVar3 + 6;
  }
  func_0x000104c35d50();
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_104c34e24();
  }
  func_0x000104c35d08();
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104c35b54();
  return;
}



/* Entry: 104c34b84; end: 104c34c63;  */

void FUN_104c34b84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000104c35c7c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)(extraout_x8 + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30);
  puVar3 = puVar5;
  for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 6) {
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar7;
    *puVar3 = uVar6;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar7 = puVar4[4];
    uVar6 = puVar4[3];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar7;
    puVar3[3] = uVar6;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = 0;
    puVar3 = puVar3 + 6;
  }
  func_0x000104c35d50();
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_104c34e24();
  }
  func_0x000104c35d08();
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104c35b54();
  return;
}



/* Entry: 104c34c64; end: 104c34d5f;  */

long * FUN_104c34c64(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000104c34cb0();
    lVar1 = param_2;
    param_2 = lVar2;
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x30;
  return param_1;
}



/* Entry: 104c34d60; end: 104c34df3;  */

long * FUN_104c34d60(long *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  ulong extraout_x10;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (0x555555555555555 < (param_1[1] - *param_1) / 0x30 + 1U) {
    FUN_104c34b78();
    plVar2 = param_1;
    func_0x000104c35c38();
    func_0x000104c35c18();
    func_0x000104c35bd0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (plVar2 + 3,unaff_x20 + 0x18);
    return param_1;
  }
  func_0x000104c35c98();
  func_0x000104c35d5c();
  uVar1 = extraout_x9;
  if (0x2aaaaaaaaaaaaa9 < extraout_x10) {
    uVar1 = extraout_x8;
  }
  FUN_104c34c64(auStack_48,uVar1);
  FUN_104c34df4();
  lStack_38 = lStack_38 + 0x30;
  func_0x000104c35cdc();
  plVar2 = *(long **)(unaff_x19 + 8);
  func_0x000104c35c38();
  return plVar2;
}



/* Entry: 104c34df4; end: 104c34e23;  */

void FUN_104c34df4(long param_1)

{
  long unaff_x20;
  
  func_0x000104c35bd0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 104c34e24; end: 104c34e47;  */

void FUN_104c34e24(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104c34e48; end: 104c34edb;  */

long * FUN_104c34e48(long *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  ulong extraout_x10;
  long unaff_x19;
  long *plVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (0x199999999999999 < (param_1[1] - *param_1) / 0xa0 + 1U) {
    FUN_104c3499c();
    func_0x000104c35c30();
    func_0x000104c35c18();
    *(undefined1 *)param_1 = *param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 1,param_2 + 8);
    FUN_104c34fb0(param_1 + 4,param_2 + 0x20);
    func_0x00010015bc98(param_1 + 7,param_2 + 0x38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 10,param_2 + 0x50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 0xd,param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x10) = param_2[0x80];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 0x11,param_2 + 0x88);
    return param_1;
  }
  func_0x000104c35c98();
  func_0x000104c35d5c();
  uVar1 = extraout_x9;
  if (0xcccccccccccccb < extraout_x10) {
    uVar1 = extraout_x8;
  }
  func_0x000104c34ac8(auStack_48,uVar1);
  FUN_104c34edc();
  lStack_38 = lStack_38 + 0xa0;
  func_0x000104c35cd0();
  plVar2 = *(long **)(unaff_x19 + 8);
  func_0x000104c35c30();
  return plVar2;
}



/* Entry: 104c34edc; end: 104c34faf;  */

undefined1 * FUN_104c34edc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 8,param_2 + 8);
  FUN_104c34fb0(param_1 + 0x20,param_2 + 0x20);
  func_0x00010015bc98(param_1 + 0x38,param_2 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x50,param_2 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x68,param_2 + 0x68);
  param_1[0x80] = param_2[0x80];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



/* Entry: 104c34fb0; end: 104c3505b;  */

undefined8 * FUN_104c34fb0(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  bVar2 = *param_2 <= param_2[1];
  lVar3 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    lVar3 = lVar3 / 0x30;
    func_0x000104c35b90();
    if (bVar2) {
      FUN_104c34b78();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c35040);
      (*pcVar1)();
    }
    func_0x000104c34cb0();
    func_0x000104c35c50();
    FUN_104c3505c();
    param_1[1] = lVar3;
  }
  uStack_38 = 1;
  FUN_104c350b0(&puStack_40);
  return param_1;
}



/* Entry: 104c3505c; end: 104c350af;  */

void FUN_104c3505c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000104c35bdc();
  while (unaff_x21 != unaff_x19) {
    FUN_104c34df4();
    func_0x000104c35d28();
  }
  func_0x000104c35d50();
  func_0x000104c35d08();
  return;
}



/* Entry: 104c350b0; end: 104c351bf;  */

long FUN_104c350b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000104c350dc(param_1);
  }
  return param_1;
}



/* Entry: 104c351c0; end: 104c351cf;  */

void FUN_104c351c0(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x18;
  if ((ulong)((param_1[2] - *param_1) / 0x18) < uVar1) {
    func_0x00010014d1ec(param_1);
    plVar2 = param_1;
    func_0x0001000480a4(param_1,uVar1);
    func_0x00010007e1a0(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x18)) {
      FUN_104c352c0(param_2,param_3);
      func_0x00010002b82c();
      lVar3 = param_1[1];
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x18;
        func_0x000107c60ca0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_104c352c0(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  func_0x00010016394c(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 104c351d0; end: 104c352bf;  */

void FUN_104c351d0(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_4) {
    func_0x00010014d1ec(param_1);
    plVar1 = param_1;
    func_0x0001000480a4(param_1,param_4);
    func_0x00010007e1a0(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x18)) {
      FUN_104c352c0(param_2,param_3);
      func_0x00010002b82c();
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x18;
        func_0x000107c60ca0();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_104c352c0(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  func_0x00010016394c(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 104c352c0; end: 104c352eb;  */

void FUN_104c352c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_104c352ec(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 104c352ec; end: 104c35347;  */

undefined1  [16] FUN_104c352ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_2);
    lVar1 = lVar1 + 0x18;
    param_4 = param_4 + 0x18;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 104c35348; end: 104c35353;  */

long * FUN_104c35348(long *param_1)

{
  func_0x000104c35b84();
  if (*param_1 != 0) {
    FUN_104c35384(param_1);
    func_0x000104c35bbc();
  }
  return param_1;
}



/* Entry: 104c35354; end: 104c35383;  */

long * FUN_104c35354(long *param_1)

{
  if (*param_1 != 0) {
    FUN_104c35384(param_1);
    func_0x000104c35bbc();
  }
  return param_1;
}



/* Entry: 104c35384; end: 104c353c3;  */

void FUN_104c35384(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x0001000e30f4(lVar2 + -0x18);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 104c353c4; end: 104c353cf;  */

undefined1 FUN_104c353c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104c353d0; end: 104c35477;  */

void FUN_104c353d0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  bVar2 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_2 + 0x18);
  lVar3 = *(ulong *)(param_2 + 0x18) - *(ulong *)(param_2 + 0x10);
  puStack_40 = param_1;
  if (lVar3 != 0) {
    lVar3 = lVar3 / 0x30;
    func_0x000104c35b90();
    if (bVar2) {
      func_0x000104c3548c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c3545c);
      (*pcVar1)();
    }
    FUN_104c35498();
    func_0x000104c35c50();
    FUN_104c354c4();
    param_1[1] = lVar3;
  }
  uStack_38 = 1;
  func_0x000104c3558c(&puStack_40);
  return;
}


