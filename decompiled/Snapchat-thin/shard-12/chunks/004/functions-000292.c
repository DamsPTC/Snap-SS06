/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090e0608; end: 1090e06af;  */

void FUN_1090e0608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  func_0x0001090e0fd4();
  uStack_58 = extraout_x8;
  FUN_1090e06cc(auStack_70,1);
  FUN_1090e0724(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar2 = lStack_60;
  lStack_60 = 0;
  FUN_1090e06b0(param_1,lVar2 + 0x18);
  FUN_1090e0824();
  func_0x0001090e0fb0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_78 = FUN_1090e06b0;
    lStack_88 = extraout_x8_00[1];
    puStack_90 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    if (lStack_88 != 0) {
      do {
        func_0x0001090e0fc4();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_90);
    func_0x000107c284e8(&puStack_90);
    return;
  }
  return;
}



/* Entry: 1090e06b0; end: 1090e06cb;  */

void FUN_1090e06b0(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001090e0fc4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090e06cc; end: 1090e06f3;  */

long FUN_1090e06cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090e06f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090e06f4; end: 1090e0723;  */

undefined8 * FUN_1090e06f4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xc30c30c30c30c4) {
    puVar1 = (undefined8 *)(param_2 * 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9e10;
  FUN_1090e077c(param_1 + 3);
  return param_1;
}



/* Entry: 1090e0724; end: 1090e0753;  */

undefined8 * FUN_1090e0724(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9e10;
  FUN_1090e077c(param_1 + 3);
  return param_1;
}



/* Entry: 1090e0754; end: 1090e0757;  */

void FUN_1090e0754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e0758; end: 1090e076b;  */

void FUN_1090e0758(void)

{
  FUN_1090e07b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e076c; end: 1090e077b;  */

void FUN_1090e076c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090e0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090e077c; end: 1090e07af;  */

void FUN_1090e077c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1090e10c0(param_1,*param_2,*param_3,param_4,param_5,*param_6,param_6[1],param_7,param_8);
  return;
}



/* Entry: 1090e07b0; end: 1090e07bf;  */

void FUN_1090e07b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e07c0; end: 1090e0823;  */

void FUN_1090e07c0(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001090e0fc4();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090e0824; end: 1090e0833;  */

void FUN_1090e0824(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090e0834; end: 1090e0857;  */

undefined8 * FUN_1090e0834(undefined8 *param_1)

{
  FUN_1090e0858(*param_1);
  return param_1;
}



/* Entry: 1090e0858; end: 1090e0863;  */

void FUN_1090e0858(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090e0864; end: 1090e08df;  */

void FUN_1090e0864(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  plVar2 = param_2;
  FUN_1090e08e0();
  plVar3 = param_2;
  puVar5 = param_3;
  func_0x0001090e0904(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    lVar1 = *param_2;
    puVar5 = (undefined8 *)(param_2[1] + (long)plVar3 * 0x10);
    *puVar5 = *param_3;
    puVar5[1] = 0;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x0001090e1028();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1090e08e0; end: 1090e09df;  */

void FUN_1090e08e0(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x0001090e09c0(&lStack_18);
  return;
}



/* Entry: 1090e09e0; end: 1090e0aa7;  */

void FUN_1090e09e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1090e0aa8(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_1090e0a28;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_1090e0a28;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_1090e0a7c:
    FUN_1090e0ae8(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_1090e0a7c;
    }
    func_0x0001090e0c10(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_1090e0aa8(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_1090e0a28:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1090e0aa8; end: 1090e0ae7;  */

ulong FUN_1090e0aa8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1090e0ae8; end: 1090e0da3;  */

void FUN_1090e0ae8(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_1090e0da4();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1090e0aa8(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1090e0dc4(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1090e0da4; end: 1090e0dc3;  */

void FUN_1090e0da4(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 1090e0dc4; end: 1090e0ddb;  */

undefined8 * FUN_1090e0dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  FUN_1090e0858(*puVar1);
  return puVar1;
}



/* Entry: 1090e0ddc; end: 1090e0e2b;  */

long FUN_1090e0ddc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1090e0e2c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1090e0e2c; end: 1090e0ecb;  */

bool FUN_1090e0e2c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar7 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar4 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      *param_4 = uVar7;
      if (*(long *)(param_1[1] + uVar7 * 0x10) == *param_2) goto LAB_1090e0ec0;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_1090e0ec0:
  return uVar5 != 0;
}



/* Entry: 1090e0ecc; end: 1090e0f0b;  */

void FUN_1090e0ecc(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1090e0834(param_3 + 8);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1090e0f0c; end: 1090e10bf;  */

void FUN_1090e0f0c(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1090e10c0; end: 1090e11d7;  */

undefined8 *
FUN_1090e10c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             long *param_5,undefined8 param_6,undefined8 param_7,long *param_8,long *param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ad9e60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar4;
  param_1[8] = param_6;
  param_1[9] = param_7;
  lVar4 = *param_8;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = lVar4;
  lVar4 = *param_9;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x0001090e3150();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0xb] = lVar4;
  param_1[0xc] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  if (param_1[9] != param_1[8]) {
    FUN_1090e11d8(param_1);
  }
  return param_1;
}



/* Entry: 1090e11d8; end: 1090e120b;  */

void FUN_1090e11d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(long *)(param_1 + 0xf0) = param_2;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  lVar2 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  lVar1 = param_2 - *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  *(long *)(param_1 + 0x118) = lVar1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    *(long *)(lVar2 + 0x20) = lVar1;
    *(undefined1 *)(lVar2 + 0x28) = 1;
  }
  return;
}



/* Entry: 1090e120c; end: 1090e1297;  */

undefined8 * FUN_1090e120c(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110ad9e60;
  FUN_1090e1298();
  FUN_1090e1d60(param_1 + 0x20);
  if (param_1[0x1a] != 0) {
    func_0x0001090e3168();
    (*extraout_x8)();
  }
  func_0x0001090e1fb0(param_1 + 0x18);
  func_0x0001090e1f8c(param_1 + 0x16);
  func_0x0001090e1f68(param_1 + 0x14);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x000104bd5214(param_1 + 0xb);
  FUN_1090958e8(param_1 + 10);
  FUN_10909b5e4(param_1 + 7);
  func_0x0001090e1f44(param_1 + 5);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e1298; end: 1090e1407;  */

long * FUN_1090e1298(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *****pppppuVar3;
  long *plVar4;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar5;
  undefined8 ****appppuStack_e8 [5];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [15];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0001090e30ec();
  alStack_b0[0] = 0;
  alStack_b0[1] = 0;
  uStack_38 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv(lVar1 + 0x60);
  FUN_1090e1420(alStack_b0,param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  alStack_b0[2] = 0;
  alStack_b0[3] = 0;
  func_0x0001090e1f8c(alStack_b0 + 2);
  func_0x0001090e32b0();
  func_0x0001090e3120();
  lVar1 = alStack_b0[0];
  if (alStack_b0[0] != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x0001090e31d8(uVar2,*(undefined8 *)(alStack_b0[0] + 0x38));
    (*extraout_x8_01)();
    func_0x0001090e323c();
    alStack_b0[2] = uVar2;
    alStack_b0[3] = extraout_x8_02;
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10 != 0);
    }
    func_0x0001090e31d8();
    (*extraout_x8_03)();
    func_0x0001090d097c(alStack_b0 + 2);
    lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x38);
    if (lVar5 != 0) {
      do {
        func_0x0001090e3108();
        lVar1 = alStack_b0[0];
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090e4590(lVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
    FUN_109097138(lVar5);
    _snprintf(alStack_b0 + 2,0x60,&UNK_10f550673);
    func_0x0001090e320c();
    if (extraout_x8_04 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_01 != 0);
    }
    pppppuVar3 = appppuStack_e8;
    func_0x0001080e3e74(pppppuVar3,alStack_b0 + 2);
    func_0x0001090e31a8();
    func_0x0001090e31e4();
    func_0x0001090e326c();
    func_0x0001090e3248();
    appppuStack_e8[0] = pppppuVar3;
    if (extraout_x8_05 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001090e3128();
    func_0x0001090e3274();
  }
  func_0x0001090e1f8c(&uStack_c0);
  plVar4 = alStack_b0;
  func_0x0001090e1f68();
  func_0x0001090e30c8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar4 = (long)&PTR_FUN_110ad9e60;
    FUN_1090e1298();
    FUN_1090e1d60(plVar4 + 0x20);
    if (plVar4[0x1a] != 0) {
      func_0x0001090e3168();
      (*extraout_x8)();
    }
    func_0x0001090e1fb0(plVar4 + 0x18);
    func_0x0001090e1f8c(plVar4 + 0x16);
    func_0x0001090e1f68(plVar4 + 0x14);
    __ZNSt3__15mutexD1Ev(plVar4 + 0xc);
    func_0x000104bd5214(plVar4 + 0xb);
    FUN_1090958e8(plVar4 + 10);
    FUN_10909b5e4(plVar4 + 7);
    func_0x0001090e1f44(plVar4 + 5);
    func_0x000107c278e8(plVar4 + 1);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 1090e1408; end: 1090e140b;  */

undefined8 * FUN_1090e1408(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110ad9e60;
  FUN_1090e1298();
  FUN_1090e1d60(param_1 + 0x20);
  if (param_1[0x1a] != 0) {
    func_0x0001090e3168();
    (*extraout_x8)();
  }
  func_0x0001090e1fb0(param_1 + 0x18);
  func_0x0001090e1f8c(param_1 + 0x16);
  func_0x0001090e1f68(param_1 + 0x14);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc);
  func_0x000104bd5214(param_1 + 0xb);
  FUN_1090958e8(param_1 + 10);
  FUN_10909b5e4(param_1 + 7);
  func_0x0001090e1f44(param_1 + 5);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090e140c; end: 1090e141f;  */

void FUN_1090e140c(void)

{
  FUN_1090e120c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e1420; end: 1090e1493;  */

undefined8 * FUN_1090e1420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001090e3180();
  return param_1;
}



/* Entry: 1090e1494; end: 1090e14e7;  */

void FUN_1090e1494(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_2 + 0xe0);
  lVar2 = *(long *)(param_2 + 0xe8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  uVar4 = *(ulong *)(param_2 + 0x118);
  param_1[4] = uVar4;
  FUN_1090e14e8(param_2,lVar1);
  uVar3 = lVar2 - lVar1;
  lVar2 = 0;
  if (uVar3 <= param_2) {
    lVar2 = param_2 - uVar3;
  }
  param_1[2] = param_2;
  param_1[3] = lVar2;
  *(bool *)(param_1 + 5) = uVar4 <= param_2 + lVar1;
  return;
}



/* Entry: 1090e14e8; end: 1090e14ef;  */

long FUN_1090e14e8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lVar2 = *(long *)(param_1 + 0x38);
  iVar5 = 0;
  uVar3 = *(ulong *)(lVar2 + 0x18);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = param_2 / uVar3;
  }
  while( true ) {
    lVar1 = *(long *)(lVar2 + 0x10);
    func_0x0001090dda08(lVar1,uVar4);
    if ((lVar1 == 0) || (FUN_1090dd7cc(auStack_50), lStack_40 == 0)) break;
    iVar5 = iVar5 + (int)lStack_40;
    uVar4 = uVar4 + 1;
  }
  return (long)iVar5;
}



/* Entry: 1090e14f0; end: 1090e1707;  */

long * FUN_1090e14f0(long param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar5;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 uStack_58;
  
  func_0x0001090e30ec();
  uStack_58 = extraout_x8;
  FUN_1090e1298();
  plVar1 = *(long **)(*(long *)(param_1 + 0x50) + 0x28);
  lStack_b0 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
  plStack_b8 = plVar1;
  if (lStack_b0 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x10))();
  func_0x0001090d097c(&plStack_b8);
  _snprintf(&plStack_b8,0x60,&UNK_10f550699);
  plVar4 = *(long **)(*(long *)(param_1 + 0x50) + 0x18);
  lStack_c0 = *(long *)(*(long *)(param_1 + 0x50) + 0x20);
  plStack_c8 = plVar4;
  if (lStack_c0 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080e3e74(&lStack_e0,&plStack_b8);
  (**(code **)(*plVar4 + 0x10))(plVar4,0,&lStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
  func_0x0001090e1fd4(&plStack_c8);
  lVar2 = 0x68;
  __Znwm();
  lVar3 = lVar2;
  func_0x0001090e32c0();
  lVar3 = lVar3 + 0x18;
  FUN_1090e201c(lVar3,param_2,param_3,param_1,plVar1,plVar4);
  lStack_e0 = lVar3;
  lStack_d8 = lVar2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  FUN_1090e1708(param_1 + 0xa0,lVar3,lVar2);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x38);
  if (lVar5 != 0) {
    do {
      func_0x0001090e3108();
      lVar3 = lStack_e0;
      lVar2 = lStack_d8;
    } while (extraout_w10_01 != 0);
  }
  func_0x0001090e456c(lVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  FUN_109097138(lVar5);
  FUN_1090e2088(&plStack_c8,lVar3,lVar2,param_1 + 0x58);
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  lVar2 = lStack_c0;
  plVar1 = plStack_c8;
  func_0x0001090e1748(param_1 + 0xb0,plStack_c8,lStack_c0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  plVar4 = *(long **)(param_1 + 0x28);
  plStack_f0 = plVar1;
  lStack_e8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10_02 != 0);
  }
  (**(code **)(*plVar4 + 0x10))();
  *(long **)(lVar3 + 0x38) = plVar4;
  func_0x0001090e1f8c(&plStack_f0);
  FUN_1090e2ff8(&plStack_c8);
  plVar1 = &lStack_e0;
  func_0x0001090e1f68();
  func_0x0001090e30c8(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_3 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_03 != 0);
    }
    *plVar1 = param_2;
    plVar1[1] = param_3;
    func_0x0001090e3180();
    return plVar1;
  }
  return plVar1;
}



/* Entry: 1090e1708; end: 1090e178b;  */

undefined8 * FUN_1090e1708(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001090e3180();
  return param_1;
}



/* Entry: 1090e178c; end: 1090e1aef;  */

long * FUN_1090e178c(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  long ****unaff_x20;
  long lVar8;
  long ***ppplStack_e8;
  long lStack_e0;
  long ***ppplStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_48;
  
  lVar8 = param_1;
  func_0x0001090e30ec();
  plVar6 = *(long **)(*(long *)(lVar8 + 0x50) + 0x28);
  lStack_a8 = *(long *)(*(long *)(lVar8 + 0x50) + 0x30);
  plStack_b0 = plVar6;
  uStack_48 = extraout_x8;
  if (lStack_a8 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar6 + 0x10))();
  func_0x0001090d097c(&plStack_b0);
  lStack_a8 = 0x7a6953656c69466c;
  plStack_b0 = (long *)0x61746f5464616f6c;
  uStack_a0 = 0x65;
  func_0x0001090e320c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080e3e74(&ppplStack_d8,&plStack_b0);
  (*(code *)(*unaff_x20)[2])();
  func_0x0001090e31e4();
  func_0x0001090e326c();
  lVar2 = 0x68;
  __Znwm();
  lVar8 = lVar2;
  func_0x0001090e32c0();
  lVar8 = lVar8 + 0x18;
  lVar7 = 0;
  FUN_1090e201c(lVar8,0,0,param_1,plVar6,unaff_x20);
  lStack_c0 = lVar8;
  lStack_b8 = lVar2;
  func_0x0001090e3160();
  ppplVar3 = (long ***)(param_1 + 0xa0);
  if (*ppplVar3 == (long **)0x0) {
    FUN_1090e1708(ppplVar3,lVar8,lVar2);
    func_0x0001090e3120();
    FUN_1090e2088(&ppplStack_d8,lVar8,lVar2,param_1 + 0x58);
    func_0x0001090e3160();
    ppplVar3 = ppplStack_d8;
    lVar7 = lStack_d0;
    func_0x0001090e1748(param_1 + 0xb0,ppplStack_d8);
    func_0x0001090e3120();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    ppplStack_e8 = ppplVar3;
    lStack_e0 = lStack_d0;
    if (lStack_d0 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_04 != 0);
    }
    func_0x0001090e3168();
    unaff_x20 = &ppplStack_e8;
    (*extraout_x8_05)();
    *(undefined8 *)(lVar2 + 0x50) = uVar5;
    func_0x0001090e1f8c(&ppplStack_e8);
    FUN_1090e2ff8(&ppplStack_d8);
  }
  else {
    func_0x0001090e3120();
    func_0x0001090e323c();
    ppplStack_d8 = ppplVar3;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001090e31d8();
    (*extraout_x8_02)();
    func_0x0001090d097c(&ppplStack_d8);
    pppplVar4 = *(long *****)(*(long *)(param_1 + 0x50) + 0x18);
    lStack_e0 = *(long *)(*(long *)(param_1 + 0x50) + 0x20);
    ppplStack_e8 = (long ***)pppplVar4;
    if (lStack_e0 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001080e3e74(&ppplStack_d8,&UNK_10f5506cb);
    (*(code *)(*pppplVar4)[5])(pppplVar4,&ppplStack_d8);
    func_0x0001090e31e4();
    pppplVar4 = &ppplStack_e8;
    func_0x0001090e1fd4();
    func_0x0001090e3248();
    ppplStack_d8 = (long ***)pppplVar4;
    if (extraout_x8_03 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001090e3168();
    (*extraout_x8_04)();
    func_0x0001090e3274();
  }
  plVar6 = &lStack_c0;
  func_0x0001090e1f68();
  func_0x0001090e30c8(uStack_48);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  if ((*(byte *)(plVar6 + 0x1f) & 1) == 0) {
    FUN_1090e178c(plVar6);
LAB_1090e1ad4:
    plVar6 = (long *)0x1;
  }
  else {
    uVar1 = plVar6[8] + (long)unaff_x20;
    func_0x0001090e3160();
    if (uVar1 == plVar6[0x25]) {
      if (plVar6[0x24] == 0) goto LAB_1090e1a40;
      func_0x0001090e3120();
    }
    else {
      func_0x0001090e32b0();
      plVar6[0x26] = 0;
LAB_1090e1a40:
      func_0x0001090e3120();
      func_0x0001090e3160();
      lVar8 = plVar6[0x14];
      if (plVar6[0x15] != 0) {
        do {
          func_0x0001090e3150();
          lVar8 = extraout_x8_06;
        } while (extraout_w11 != 0);
      }
      if ((lVar8 == 0) ||
         ((*(ulong *)(lVar8 + 0x18) <= uVar1 &&
          (uVar1 < *(long *)(lVar8 + 0x20) + *(ulong *)(lVar8 + 0x18))))) {
        func_0x0001090e3180();
        func_0x0001090e3120();
      }
      else {
        func_0x0001090e3180();
        func_0x0001090e3120();
        FUN_1090e1298(plVar6);
      }
      func_0x0001090e3160();
      lVar8 = plVar6[0x14];
      func_0x0001090e3120();
      if (lVar8 == 0) {
        lVar8 = plVar6[0x23] - (long)unaff_x20;
        if ((ulong)(lVar7 + (long)unaff_x20) <= (ulong)plVar6[0x23]) {
          lVar8 = lVar7;
        }
        FUN_1090e14f0(plVar6,uVar1,lVar8);
        goto LAB_1090e1ad4;
      }
    }
    plVar6 = (long *)0x0;
  }
  return plVar6;
}



/* Entry: 1090e1af0; end: 1090e1b2b;  */

long FUN_1090e1af0(long param_1,ulong param_2)

{
  if (*(ulong *)(param_1 + 0x110) != 0) {
    return (long)(((double)param_2 / ((double)*(ulong *)(param_1 + 0x110) / 8.0)) * 1000.0) *
           1000000;
  }
  return 0;
}



/* Entry: 1090e1b2c; end: 1090e1bf3;  */

void FUN_1090e1b2c(long param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x0001090e1b74(&uStack_30,param_2);
  }
  func_0x0001090e1bb8(param_1 + 0xc0,&uStack_30);
  func_0x0001090e1fb0(&uStack_30);
  return;
}



/* Entry: 1090e1bf4; end: 1090e1c73;  */

bool FUN_1090e1bf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0xa0);
  if (param_2 == lVar1) {
    FUN_1090e1420(&uStack_50);
    uStack_38 = *(undefined8 *)(param_1 + 0xb8);
    uStack_40 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    func_0x0001090e1f8c(&uStack_40);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  func_0x0001090e3180();
  return param_2 == lVar1;
}



/* Entry: 1090e1c74; end: 1090e1ca3;  */

void FUN_1090e1c74(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001090e322c();
  if (param_1 != 0) {
    func_0x0001090e3254();
    unaff_x19[1] = param_1;
    if (param_1 != 0) {
      *unaff_x19 = *unaff_x20;
    }
  }
  return;
}



/* Entry: 1090e1ca4; end: 1090e1d5f;  */

void FUN_1090e1ca4(long *param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 == 0) {
      *param_1 = param_2;
      param_1[1] = 0;
      goto LAB_1090e1d40;
    }
    do {
      func_0x0001090e30dc();
    } while (extraout_w10_00 != 0);
    *param_1 = param_2;
    param_1[1] = lVar1;
  }
  else {
    func_0x000107c278f0(&lStack_40);
    if (lStack_40 == 0) {
      param_2 = 0;
      lStack_38 = 0;
    }
    else if (lStack_38 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10 != 0);
    }
    func_0x000107c284e8(&lStack_40);
    *param_1 = param_2;
    param_1[1] = lStack_38;
    if (lStack_38 == 0) goto LAB_1090e1d40;
  }
  do {
    func_0x0001090e30dc();
  } while (extraout_w10_01 != 0);
LAB_1090e1d40:
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e1d60; end: 1090e1d7f;  */

void FUN_1090e1d60(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104bda93c();
  }
  return;
}



/* Entry: 1090e1d80; end: 1090e1db7;  */

undefined8 * FUN_1090e1d80(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        uVar3 = *param_2;
        *param_2 = 0;
        uVar2 = *param_1;
        *param_1 = uVar3;
        func_0x000104bda960(uVar2);
      }
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 1) == '\x01') {
        func_0x000104bda93c();
        *(undefined1 *)(param_1 + 1) = 0;
      }
      return param_1;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 1090e1db8; end: 1090e1ddb;  */

void FUN_1090e1db8(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104bda93c();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1090e1ddc; end: 1090e1ec7;  */

undefined8 * FUN_1090e1ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000104bda960(uVar1);
  }
  return param_1;
}



/* Entry: 1090e1ec8; end: 1090e1f1f;  */

void FUN_1090e1ec8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001090e3174();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1090e1f20; end: 1090e1ff7;  */

void FUN_1090e1f20(long param_1)

{
  func_0x0001090e3174();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1090e1ff8; end: 1090e1ffb;  */

void FUN_1090e1ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e1ffc; end: 1090e200f;  */

void FUN_1090e1ffc(void)

{
  FUN_1090e2078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e2010; end: 1090e201b;  */

void FUN_1090e2010(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x0001090e3174();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1090e201c; end: 1090e2077;  */

undefined8 *
FUN_1090e201c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  FUN_1090e1ca4(param_1 + 5,param_4);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  param_1[9] = param_6;
  func_0x000107c28144(param_1);
  return param_1;
}



/* Entry: 1090e2078; end: 1090e2087;  */

void FUN_1090e2078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e2088; end: 1090e2137;  */

void FUN_1090e2088(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ad9f18;
  if (param_3 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  lVar2 = *param_4;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001090e3150();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[3] = &PTR_DAT_110ad9f68;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1[6] = lVar2;
  FUN_1090e2fc4(&uStack_50);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1090e2138; end: 1090e213b;  */

void FUN_1090e2138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9f18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e213c; end: 1090e214f;  */

void FUN_1090e213c(void)

{
  FUN_1090e2fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e2150; end: 1090e2163;  */

void FUN_1090e2150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090e2158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090e2164; end: 1090e2177;  */

void FUN_1090e2164(void)

{
  FUN_1090e2558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e2178; end: 1090e22fb;  */

code *** FUN_1090e2178(long *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  code ***pppcVar1;
  undefined8 *puVar2;
  code ***pppcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  code ***pppcVar4;
  code **ppcVar5;
  code ***pppcVar6;
  code ***pppcVar7;
  code ***unaff_x22;
  code **ppcStack_1f8;
  long lStack_1f0;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  code **ppcStack_1d8;
  undefined8 uStack_1d0;
  code ***pppcStack_1c8;
  undefined8 uStack_1b8;
  code ***pppcStack_1b0;
  code ***pppcStack_1a8;
  code ***pppcStack_1a0;
  code ***pppcStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  code ***pppcStack_178;
  code ***pppcStack_170;
  long lStack_168;
  code ***pppcStack_160;
  code ***pppcStack_158;
  long lStack_150;
  code **ppcStack_148;
  undefined **ppuStack_140;
  code ***pppcStack_138;
  long lStack_130;
  code ***pppcStack_128;
  undefined8 uStack_118;
  code ***pppcStack_110;
  code **ppcStack_108;
  long *plStack_100;
  code ***pppcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code ***pppcStack_d8;
  code **ppcStack_d0;
  code **ppcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code ***pppcStack_b0;
  code **ppcStack_a8;
  code **ppcStack_a0;
  code **ppcStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  code ***pppcStack_78;
  undefined8 uStack_58;
  
  puVar2 = param_2;
  func_0x0001090e30ec();
  pppcVar4 = (code ***)*puVar2;
  uStack_58 = extraout_x8;
  if (pppcVar4 != (code ***)0x0) {
    func_0x0001090e3134();
  }
  ppcStack_c8 = (code **)param_2[2];
  ppcStack_d0 = (code **)param_2[1];
  ppcVar5 = (code **)(param_1 + 1);
  pppcStack_d8 = pppcVar4;
  func_0x0001090e2594(&ppcStack_98);
  if (ppcStack_98 != (code **)0x0) {
    param_1 = (long *)param_1[3];
    if (param_1 == (long *)0x0) {
      func_0x0001090e32b8(&pcStack_88);
      if (pcStack_88 != (code *)0x0) {
        ppcVar5 = ppcStack_98;
        FUN_1090e25c4(&pppcStack_d8);
      }
      func_0x0001090e1ea4(&pcStack_88);
    }
    else {
      if (param_1[2] != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10 != 0);
      }
      if (ppcStack_90 != (code **)0x0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_00 != 0);
      }
      if (pppcVar4 != (code ***)0x0) {
        func_0x0001090e3134();
      }
      ppcStack_a0 = ppcStack_c8;
      ppcStack_a8 = ppcStack_d0;
      pcStack_88 = FUN_1090e284c;
      ppuStack_80 = &PTR_FUN_110ad9fb8;
      unaff_x22 = (code ***)0x28;
      pppcStack_b0 = pppcVar4;
      __Znwm();
      *unaff_x22 = ppcStack_98;
      unaff_x22[1] = ppcStack_90;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (pppcVar4 != (code ***)0x0) {
        func_0x0001090e3134();
      }
      unaff_x22[2] = (code **)pppcVar4;
      unaff_x22[4] = ppcStack_c8;
      unaff_x22[3] = ppcStack_d0;
      ppcVar5 = &pcStack_88;
      pppcStack_78 = unaff_x22;
      func_0x0001090e31bc(*(undefined8 *)(*param_1 + 0x28));
      (*(code *)*ppuStack_80)(&ppuStack_80);
      FUN_1090e2924(&uStack_c0);
    }
    func_0x000107c278fc(param_1);
  }
  pppcVar6 = &ppcStack_98;
  func_0x0001090e1f68();
  if (pppcVar4 != (code ***)0x0) {
    pppcVar6 = pppcVar4;
    (*(*pppcVar4)[3])();
  }
  func_0x0001090e30c8(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ppcStack_108 = ppcStack_98;
    pcStack_e8 = FUN_1090e22fc;
    pppcStack_110 = unaff_x22;
    plStack_100 = param_1;
    pppcStack_f8 = pppcVar4;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x0001090e30ec();
    pppcVar4 = (code ***)*ppcVar5;
    uStack_118 = extraout_x8_00;
    if (pppcVar4 != (code ***)0x0) {
      do {
        func_0x0001090e321c();
      } while (extraout_w10_01 != 0);
    }
    pppcVar3 = pppcVar6 + 1;
    pppcStack_178 = pppcVar4;
    func_0x0001090e2594(&pppcStack_158);
    pppcVar7 = pppcStack_158;
    if (pppcStack_158 != (code ***)0x0) {
      pppcVar6 = (code ***)pppcVar6[3];
      if (pppcVar6 == (code ***)0x0) {
        func_0x0001090e32b8(&ppcStack_148);
        if (ppcStack_148 != (code **)0x0) {
          pppcVar3 = pppcStack_158;
          FUN_1090e2954(&pppcStack_178);
        }
        func_0x0001090e1ea4(&ppcStack_148);
      }
      else {
        if (pppcVar6[2] != (code **)0x0) {
          do {
            func_0x0001090e30dc();
          } while (extraout_w10_02 != 0);
        }
        pppcStack_170 = pppcStack_158;
        lStack_168 = lStack_150;
        if (lStack_150 != 0) {
          do {
            func_0x0001090e3150();
            lStack_150 = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        lStack_130 = lStack_150;
        if (pppcVar4 != (code ***)0x0) {
          do {
            func_0x0001090e321c();
            lStack_130 = lStack_168;
            pppcVar7 = pppcStack_170;
          } while (extraout_w10_03 != 0);
        }
        lStack_168 = 0;
        unaff_x22 = &ppcStack_148;
        ppcStack_148 = (code **)FUN_1090e2c80;
        ppuStack_140 = &PTR_DAT_110ad9fd8;
        pppcStack_170 = (code ***)0x0;
        pppcStack_160 = pppcVar4;
        pppcStack_138 = pppcVar7;
        if (pppcVar4 != (code ***)0x0) {
          do {
            func_0x0001090e321c();
          } while (extraout_w10_04 != 0);
        }
        pppcVar3 = &ppcStack_148;
        pppcStack_128 = pppcVar4;
        func_0x0001090e31bc((*pppcVar6)[5]);
        func_0x0001090e327c(ppuStack_140);
        FUN_1090e2d5c(&pppcStack_170);
      }
      func_0x000107c278fc(pppcVar6);
    }
    func_0x0001090e1f68(&pppcStack_158);
    pppcVar1 = pppcVar4;
    func_0x000107c278f8();
    func_0x0001090e30c8(uStack_118);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_188 = 0x1090e244c;
      pppcStack_1b0 = unaff_x22;
      pppcStack_1a8 = pppcVar7;
      pppcStack_1a0 = pppcVar6;
      pppcStack_198 = pppcVar4;
      ppuStack_190 = &puStack_f0;
      func_0x0001090e30ec();
      uStack_1b8 = extraout_x8_02;
      func_0x0001090e2594(&ppcStack_1f8,pppcVar1 + 1);
      if (ppcStack_1f8 != (code **)0x0) {
        ppcVar5 = pppcVar1[3];
        if (ppcVar5 == (code **)0x0) {
          func_0x0001090e32b8(&pcStack_1e8);
          if (pcStack_1e8 != (code *)0x0) {
            FUN_1090e2d84(pppcVar3,ppcStack_1f8);
          }
          func_0x0001090e1ea4(&pcStack_1e8);
        }
        else {
          if (ppcVar5[2] != (code *)0x0) {
            do {
              func_0x0001090e30dc();
            } while (extraout_w10_05 != 0);
          }
          uStack_1d0 = 0;
          if (lStack_1f0 != 0) {
            do {
              func_0x0001090e3150();
              uStack_1d0 = extraout_x8_03;
            } while (extraout_w11_00 != 0);
          }
          pcStack_1e8 = FUN_1090e2f30;
          ppuStack_1e0 = &PTR_FUN_110ad9ff8;
          ppcStack_1d8 = ppcStack_1f8;
          pppcStack_1c8 = pppcVar3;
          (**(code **)(*ppcVar5 + 0x28))(ppcVar5,&pcStack_1e8);
          func_0x0001090e327c(ppuStack_1e0);
          func_0x0001090e3180();
        }
        func_0x000107c278fc(ppcVar5);
      }
      pppcVar4 = &ppcStack_1f8;
      func_0x0001090e1f68();
      func_0x0001090e30c8(uStack_1b8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        *pppcVar4 = (code **)&PTR_DAT_110ad9f68;
        func_0x000104bd5214(pppcVar4 + 3);
        FUN_1090e2fc4(pppcVar4 + 1);
        return pppcVar4;
      }
      return pppcVar4;
    }
    return pppcVar1;
  }
  return pppcVar6;
}



/* Entry: 1090e22fc; end: 1090e2557;  */

long * FUN_1090e22fc(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar2;
  code **ppcVar3;
  code **unaff_x22;
  long lStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  code **ppcStack_e8;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  code **ppcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_98;
  code **ppcStack_90;
  long lStack_88;
  long *plStack_80;
  code **ppcStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code **ppcStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_38;
  
  func_0x0001090e30ec();
  param_2 = (long *)*param_2;
  uStack_38 = extraout_x8;
  if (param_2 != (long *)0x0) {
    do {
      func_0x0001090e321c();
    } while (extraout_w10 != 0);
  }
  ppcVar1 = (code **)(param_1 + 1);
  plStack_98 = param_2;
  func_0x0001090e2594(&ppcStack_78);
  ppcVar3 = ppcStack_78;
  if (ppcStack_78 != (code **)0x0) {
    param_1 = (long *)param_1[3];
    if (param_1 == (long *)0x0) {
      func_0x0001090e32b8(&pcStack_68);
      if (pcStack_68 != (code *)0x0) {
        ppcVar1 = ppcStack_78;
        FUN_1090e2954(&plStack_98);
      }
      func_0x0001090e1ea4(&pcStack_68);
    }
    else {
      if (param_1[2] != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_00 != 0);
      }
      ppcStack_90 = ppcStack_78;
      lStack_88 = lStack_70;
      if (lStack_70 != 0) {
        do {
          func_0x0001090e3150();
          lStack_70 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      lStack_50 = lStack_70;
      if (param_2 != (long *)0x0) {
        do {
          func_0x0001090e321c();
          lStack_50 = lStack_88;
          ppcVar3 = ppcStack_90;
        } while (extraout_w10_01 != 0);
      }
      lStack_88 = 0;
      unaff_x22 = &pcStack_68;
      pcStack_68 = FUN_1090e2c80;
      ppuStack_60 = &PTR_DAT_110ad9fd8;
      ppcStack_90 = (code **)0x0;
      plStack_80 = param_2;
      ppcStack_58 = ppcVar3;
      if (param_2 != (long *)0x0) {
        do {
          func_0x0001090e321c();
        } while (extraout_w10_02 != 0);
      }
      ppcVar1 = &pcStack_68;
      plStack_48 = param_2;
      func_0x0001090e31bc(*(undefined8 *)(*param_1 + 0x28));
      func_0x0001090e327c(ppuStack_60);
      FUN_1090e2d5c(&ppcStack_90);
    }
    func_0x000107c278fc(param_1);
  }
  func_0x0001090e1f68(&ppcStack_78);
  plVar2 = param_2;
  func_0x000107c278f8();
  func_0x0001090e30c8(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x1090e244c;
  ppcStack_d0 = unaff_x22;
  ppcStack_c8 = ppcVar3;
  plStack_c0 = param_1;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001090e30ec();
  uStack_d8 = extraout_x8_01;
  func_0x0001090e2594(&lStack_118,plVar2 + 1);
  if (lStack_118 != 0) {
    plVar2 = (long *)plVar2[3];
    if (plVar2 == (long *)0x0) {
      func_0x0001090e32b8(&pcStack_108);
      if (pcStack_108 != (code *)0x0) {
        FUN_1090e2d84(ppcVar1,lStack_118);
      }
      func_0x0001090e1ea4(&pcStack_108);
    }
    else {
      if (plVar2[2] != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_03 != 0);
      }
      uStack_f0 = 0;
      if (lStack_110 != 0) {
        do {
          func_0x0001090e3150();
          uStack_f0 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      pcStack_108 = FUN_1090e2f30;
      ppuStack_100 = &PTR_FUN_110ad9ff8;
      lStack_f8 = lStack_118;
      ppcStack_e8 = ppcVar1;
      (**(code **)(*plVar2 + 0x28))(plVar2,&pcStack_108);
      func_0x0001090e327c(ppuStack_100);
      func_0x0001090e3180();
    }
    func_0x000107c278fc(plVar2);
  }
  plVar2 = &lStack_118;
  func_0x0001090e1f68();
  func_0x0001090e30c8(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar2 = (long)&PTR_DAT_110ad9f68;
    func_0x000104bd5214(plVar2 + 3);
    FUN_1090e2fc4(plVar2 + 1);
    return plVar2;
  }
  return plVar2;
}



/* Entry: 1090e2558; end: 1090e25c3;  */

undefined8 * FUN_1090e2558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad9f68;
  func_0x000104bd5214(param_1 + 3);
  FUN_1090e2fc4(param_1 + 1);
  return param_1;
}



/* Entry: 1090e25c4; end: 1090e284b;  */

void FUN_1090e25c4(long param_1,long param_2,long ****param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long *****extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long ***ppplVar6;
  long **pplVar7;
  long lVar8;
  long lStack_1e0;
  long alStack_198 [5];
  long lStack_170;
  long ****pppplStack_168;
  long lStack_160;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1;
  func_0x0001090e30ec();
  uStack_58 = extraout_x8;
  func_0x0001090e32a8();
  pppplVar3 = param_3;
  FUN_1090e1bf4(param_3,param_2);
  if ((int)pppplVar3 != 0) {
    func_0x0001090e323c();
    pppplStack_168 = pppplVar3;
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10 != 0);
    }
    func_0x0001090e3168();
    (*extraout_x8_01)();
    ppppplVar4 = &pppplStack_168;
    func_0x0001090d097c();
    func_0x0001090e3248();
    pppplStack_168 = (long ****)ppppplVar4;
    lStack_160 = extraout_x8_02;
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090e3128();
    func_0x0001090e1fd4(&pppplStack_168);
    func_0x0001090e3160();
    param_3[0x26] = (long ***)0x0;
    func_0x0001090e3120();
    lVar8 = *(long *)(param_2 + 0x18) - (long)param_3[8];
    func_0x0001090dcea8(&pplStack_68,param_3[7],*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),lVar8);
    lVar1 = lStack_60;
    in_ZR = (long ***)pplStack_68 == (long ***)0x1;
    if ((bool)in_ZR) {
      pplVar7 = param_3[10][7];
      if (pplVar7 != (long **)0x0) {
        do {
          func_0x0001090e3108();
        } while (extraout_w10_01 != 0);
      }
      FUN_1090e4640(pplVar7,param_3[3],param_3[4],lVar8,*(undefined8 *)(param_1 + 0x10),lVar2);
      FUN_109097138(pplVar7);
      func_0x0001090e31a0(&pppplStack_168);
      if ((long *****)pppplStack_168 != (long *****)0x0) {
        (*(code *)(*pppplStack_168)[5])
                  (pppplStack_168,param_3,lVar8,lVar2,*(undefined8 *)(param_1 + 0x10));
      }
      func_0x0001090e30a4(&pppplStack_168);
    }
    else {
      lStack_170 = lStack_60;
      lStack_60 = 0;
      ppppplVar4 = (long *****)0x0;
      if (lVar1 != 0) {
        do {
          func_0x0001090e325c();
          ppppplVar4 = extraout_x8_03;
        } while (extraout_w11 != 0);
      }
      lStack_160 = CONCAT71(lStack_160._1_7_,1);
      pppplStack_168 = (long ****)ppppplVar4;
      FUN_1090e1d80(param_3 + 0x20,&pppplStack_168);
      FUN_1090e1d60(&pppplStack_168);
      pplVar7 = param_3[10][7];
      if (pplVar7 != (long **)0x0) {
        do {
          func_0x0001090e3108();
        } while (extraout_w10_02 != 0);
      }
      FUN_1090e45b4(pplVar7,param_3[3],param_3[4],lVar8,*(undefined8 *)(param_1 + 0x10),&lStack_170,
                    lVar2);
      FUN_109097138(pplVar7);
      plVar5 = &lStack_170;
      func_0x00010b99f828();
      in_ZR = *plVar5 == 0;
      _snprintf(&pppplStack_168,0x100,&UNK_10f5506e5);
      func_0x0001090e320c();
      if (extraout_x8_04 != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001080e3e74(alStack_198,&pppplStack_168);
      func_0x0001090e31a8();
      func_0x0001090e31e4();
      func_0x0001090e326c();
      func_0x0001090e31a0(alStack_198);
      if (alStack_198[0] != 0) {
        func_0x0001090e31d8();
        (*extraout_x8_05)();
      }
      func_0x0001090e30a4(alStack_198);
      func_0x000104bda960(lStack_170);
    }
    pppplVar3 = (long ****)&pplStack_68;
    func_0x0001080c6234();
  }
  func_0x0001090e30c8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppplVar6 = pppplVar3[2];
  func_0x0001090e3194(*ppplVar6);
  if (lStack_1e0 != 0) {
    FUN_1090e25c4(ppplVar6 + 2,*ppplVar6);
  }
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e284c; end: 1090e2887;  */

void FUN_1090e284c(long param_1)

{
  undefined8 *puVar1;
  long lStack_30;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x0001090e3194(*puVar1);
  if (lStack_30 != 0) {
    FUN_1090e25c4(puVar1 + 2,*puVar1);
  }
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e2888; end: 1090e28a7;  */

void FUN_1090e2888(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1090e2924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090e28a8; end: 1090e28bf;  */

void FUN_1090e28a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090e28c0; end: 1090e2923;  */

void FUN_1090e28c0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110ad9fb8;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x0001090e30dc();
    } while (extraout_w10 != 0);
  }
  func_0x000104c6257c(puVar1 + 2,puVar3 + 2);
  param_1[1] = puVar1;
  return;
}



/* Entry: 1090e2924; end: 1090e2953;  */

undefined8 FUN_1090e2924(long param_1)

{
  code *extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001090e3168();
    (*extraout_x8)();
  }
  func_0x0001090e3174();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return unaff_x19;
}



/* Entry: 1090e2954; end: 1090e2c7f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1090e2954(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *******pppppppuVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 ******extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined **extraout_x8_03;
  long lVar9;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lStack_210;
  long lStack_1c0;
  long alStack_1b8 [3];
  long *plStack_1a0;
  long lStack_198;
  undefined8 *******pppppppuStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  long **pplStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_58;
  
  plVar7 = param_1;
  func_0x0001090e30ec();
  uStack_58 = extraout_x8;
  func_0x0001090e32a8();
  lVar8 = param_3;
  FUN_1090e1bf4(param_3,param_2);
  if ((int)lVar8 != 0) {
    lStack_1c0 = *param_1;
    if (lStack_1c0 != 0) {
      piVar1 = (int *)(lStack_1c0 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010b99f560(alStack_1b8,&lStack_1c0);
    func_0x000107c278f8(lStack_1c0);
    pppppppuStack_188 = (undefined8 *******)0x0;
    if (alStack_1b8[0] != 0) {
      do {
        func_0x0001090e325c();
        pppppppuStack_188 = (undefined8 *******)extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    _uStack_180 = CONCAT71(uStack_17f,1);
    FUN_1090e1d80(param_3 + 0x100,&pppppppuStack_188);
    pppppppuVar5 = &pppppppuStack_188;
    FUN_1090e1d60();
    lVar8 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_3 + 0x40);
    func_0x0001090e323c();
    pppppppuStack_188 = pppppppuVar5;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10 != 0);
    }
    func_0x0001090e31d8();
    (*extraout_x8_02)();
    func_0x0001090d097c(&pppppppuStack_188);
    lVar13 = *(long *)(*(long *)(param_3 + 0x50) + 0x38);
    if (lVar13 != 0) {
      do {
        func_0x0001090e3108();
      } while (extraout_w10_00 != 0);
    }
    FUN_1090e45b4(lVar13,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                  lVar8 - lVar9,*(undefined8 *)(param_2 + 0x20),alStack_1b8,plVar7);
    FUN_109097138(lVar13);
    in_ZR = *param_1 == 0;
    _snprintf(&pppppppuStack_188,0x100,&UNK_10f5506e5);
    plVar7 = *(long **)(*(long *)(param_3 + 0x50) + 0x18);
    lStack_198 = *(long *)(*(long *)(param_3 + 0x50) + 0x20);
    plStack_1a0 = plVar7;
    if (lStack_198 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001080e3e74(&pplStack_88,&pppppppuStack_188);
    (**(code **)(*plVar7 + 0x28))(plVar7,&pplStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_88);
    pplVar6 = &plStack_1a0;
    func_0x0001090e1fd4();
    func_0x0001090e3248();
    pplStack_88 = pplVar6;
    ppuStack_80 = extraout_x8_03;
    if (extraout_x8_03 != (undefined **)0x0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001090e3128();
    func_0x0001090e1fd4(&pplStack_88);
    if (*(long *)(param_3 + 0x58) != 0) {
      func_0x0001090e3160();
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      func_0x0001090e32b0();
      uVar2 = *(long *)(param_3 + 0x130) + 1;
      *(undefined8 *)(param_3 + 0x128) = uVar11;
      *(ulong *)(param_3 + 0x130) = uVar2;
      uVar10 = 1;
      for (uVar12 = 500;
          (in_ZR = uVar10 == uVar2, uVar10 < uVar2 && (in_ZR = uVar12 == 3000, uVar12 < 3000));
          uVar12 = uVar12 << 1) {
        if (0x5db < uVar12) {
          uVar12 = 0x5dc;
        }
        uVar10 = uVar10 + 1;
      }
      if ((long)((double)uVar12 * 0.2) != 0) {
        func_0x00010bcce268(0,(long)((double)uVar12 * 0.2) << 1);
      }
      FUN_1090e1ca4(&plStack_1a0,param_3);
      plVar7 = *(long **)(param_3 + 0x58);
      plStack_78 = plStack_1a0;
      lStack_70 = lStack_198;
      if (lStack_198 != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_03 != 0);
      }
      pplStack_88 = (long **)0x1090e1e14;
      ppuStack_80 = &PTR_FUN_110ad9e98;
      alStack_1b8[1] = 0;
      alStack_1b8[2] = 0;
      (**(code **)(*plVar7 + 0x30))();
      *(long **)(param_3 + 0x120) = plVar7;
      (*(code *)*ppuStack_80)(&ppuStack_80);
      func_0x0001090e1f20(alStack_1b8 + 1);
      func_0x0001090e1f20(&plStack_1a0);
      func_0x0001090e3120();
    }
    func_0x0001090e31a0(&pplStack_88);
    if (pplStack_88 != (long **)0x0) {
      func_0x0001090e31c4();
    }
    func_0x0001090e30a4(&pplStack_88);
    func_0x000104bda960();
    lVar8 = alStack_1b8[0];
  }
  func_0x0001090e30c8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090e3194(*(undefined8 *)(lVar8 + 0x10));
  if (lStack_210 != 0) {
    FUN_1090e2954(lVar8 + 0x20,*(undefined8 *)(lVar8 + 0x10));
  }
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e2c80; end: 1090e2cbb;  */

void FUN_1090e2c80(long param_1)

{
  undefined8 uStack_30;
  
  func_0x0001090e3194(*(undefined8 *)(param_1 + 0x10));
  if (uStack_30 != 0) {
    FUN_1090e2954(param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e2cbc; end: 1090e2d5b;  */

void FUN_1090e2cbc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110ad9fd8;
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  return;
}



/* Entry: 1090e2d5c; end: 1090e2d83;  */

undefined8 FUN_1090e2d5c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c278f4(param_1 + 0x10);
  func_0x0001090e3174();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return unaff_x19;
}



/* Entry: 1090e2d84; end: 1090e2f2f;  */

void FUN_1090e2d84(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  long lVar3;
  long lStack_70;
  long lStack_68;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x0001090e32a8();
  lVar3 = param_3;
  FUN_1090e1bf4(param_3,param_2);
  if ((int)lVar3 != 0) {
    func_0x0001090e323c();
    lStack_70 = lVar3;
    if (extraout_x8 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10 != 0);
    }
    func_0x0001090e3168();
    (*extraout_x8_00)();
    func_0x0001090d097c(&lStack_70);
    lVar3 = *(long *)(*(long *)(param_3 + 0x50) + 0x38);
    if (lVar3 != 0) {
      do {
        func_0x0001090e3108();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090e4664(lVar3,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                        param_1,lVar2);
    FUN_109097138();
    func_0x0001090e3248();
    lStack_70 = lVar3;
    lStack_68 = extraout_x8_01;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001090e30dc();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001090e3128();
    func_0x0001090e1fd4(&lStack_70);
    if (param_1 == 0) {
      func_0x00010b99f5f8(&lStack_48,&UNK_10f55070b);
      lVar2 = 0;
      if (lStack_48 != 0) {
        do {
          func_0x0001090e325c();
          lVar2 = extraout_x8_02;
        } while (extraout_w11 != 0);
      }
      lStack_68 = CONCAT71(lStack_68._1_7_,1);
      lStack_70 = lVar2;
      FUN_1090e1d80(param_3 + 0x100,&lStack_70);
      FUN_1090e1d60(&lStack_70);
      plVar1 = *(long **)(*(long *)(param_3 + 0x50) + 0x18);
      lStack_50 = *(long *)(*(long *)(param_3 + 0x50) + 0x20);
      plStack_58 = plVar1;
      if (lStack_50 != 0) {
        do {
          func_0x0001090e30dc();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001080e3e74(&lStack_70,&UNK_10f55072d);
      func_0x0001090e31bc(*(undefined8 *)(*plVar1 + 0x28));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_70);
      func_0x0001090e3274();
      func_0x0001090e3188();
      if (lStack_70 != 0) {
        func_0x0001090e31c4();
      }
      func_0x0001090e3204();
      func_0x000104bda960(lStack_48);
    }
    else {
      FUN_1090e11d8(param_3,param_1);
      func_0x0001090e3188();
      if (lStack_70 != 0) {
        func_0x0001090e31ec();
      }
      func_0x0001090e3204();
    }
  }
  return;
}



/* Entry: 1090e2f30; end: 1090e2f6b;  */

void FUN_1090e2f30(long param_1)

{
  undefined8 uStack_30;
  
  func_0x0001090e3194(*(undefined8 *)(param_1 + 0x10));
  if (uStack_30 != 0) {
    FUN_1090e2d84(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001090e31fc();
  return;
}



/* Entry: 1090e2f6c; end: 1090e2fc3;  */

void FUN_1090e2f6c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001090e3174();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090e2fc4; end: 1090e2fe7;  */

void FUN_1090e2fc4(long param_1)

{
  func_0x0001090e3174();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1090e2fe8; end: 1090e2ff7;  */

void FUN_1090e2fe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9f18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090e2ff8; end: 1090e30c7;  */

void FUN_1090e2ff8(long param_1)

{
  func_0x0001090e3174();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090e30c8; end: 1090e32d3;  */

void FUN_1090e30c8(void)

{
  return;
}



/* Entry: 1090e32d4; end: 1090e41bf;  */

void FUN_1090e32d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ada028;
  param_1[2] = 0x32aaaba7;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = &UNK_10dd5b8b0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1090e41c0; end: 1090e4233;  */

void FUN_1090e41c0(undefined8 *param_1,long *param_2,undefined4 param_3,long *param_4,
                  undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110ada2d0;
  param_1[1] = 1;
  param_1[2] = param_1 + 5;
  param_1[4] = 2;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[9] = lVar4;
  *(undefined4 *)(param_1 + 10) = param_3;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xb] = lVar4;
  *(undefined1 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}



/* Entry: 1090e4234; end: 1090e4287;  */

undefined8 * FUN_1090e4234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada2d0;
  func_0x000107c278f4(param_1 + 0xb);
  func_0x000107c278f4(param_1 + 9);
  if (param_1[4] != 0) {
    if (param_1 + 5 != (undefined8 *)param_1[2]) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1090e4288; end: 1090e428b;  */

undefined8 * FUN_1090e4288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada2d0;
  func_0x000107c278f4(param_1 + 0xb);
  func_0x000107c278f4(param_1 + 9);
  if (param_1[4] != 0) {
    if (param_1 + 5 != (undefined8 *)param_1[2]) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1090e428c; end: 1090e42f7;  */

void FUN_1090e428c(void)

{
  FUN_1090e4234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090e42f8; end: 1090e432b;  */

void FUN_1090e42f8(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  func_0x0001090e42a0();
  *puVar1 = param_2;
  *(code **)(puVar1 + 2) = FUN_1090e432c;
  return;
}



/* Entry: 1090e432c; end: 1090e4433;  */

void FUN_1090e432c(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  ulong extraout_x8;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  iVar2 = 0;
  uStack_60 = param_5;
  uStack_58 = param_5;
  _vsnprintf(0,0,param_4,param_5);
  FUN_1090e4ed0(*param_3);
  pppuVar3 = (undefined8 ***)&UNK_10f551074;
  if (param_2 != 0) {
    pppuVar3 = (undefined8 ***)"Unknown";
  }
  ppuStack_50 = (undefined8 **)&UNK_10f551070;
  if (param_2 != 1) {
    ppuStack_50 = pppuVar3;
  }
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = extraout_x8;
  func_0x000107c2793c(&UNK_10f551067);
  func_0x000107c3173c(auStack_78);
  if (-1 < iVar2) {
    ppuStack_50 = (undefined8 ***)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x000108139adc(&ppuStack_50,iVar2 + 1);
    uVar1 = uStack_48;
    pppuVar3 = (undefined8 ***)ppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar1 = uStack_40 >> 0x38;
      pppuVar3 = &ppuStack_50;
    }
    _vsnprintf(pppuVar3,uVar1,param_4,uStack_58);
    if (-1 < (int)pppuVar3) {
      func_0x000108139adc(&ppuStack_50,(ulong)pppuVar3 & 0xffffffff);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_50);
  }
  func_0x0001090e4f4c();
  return;
}



/* Entry: 1090e4434; end: 1090e445f;  */

void FUN_1090e4434(long param_1)

{
  FUN_1090e4ed0(*(undefined8 *)(param_1 + 0x58));
  func_0x0001090e4f20();
  return;
}



/* Entry: 1090e4460; end: 1090e44f3;  */

void FUN_1090e4460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    for (lVar2 = *(long *)(param_1 + 0x18) << 4; lVar2 != 0; lVar2 = lVar2 + -0x10) {
      if (*(uint *)(puVar1 + -1) <= (uint)param_2) {
        (*(code *)*puVar1)(param_2,*(undefined4 *)(param_1 + 0x50),param_1 + 0x48,param_3,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090e44f4; end: 1090e45b3;  */

void FUN_1090e44f4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1090e4ed0(*param_2);
  func_0x0001090e4f5c();
  func_0x0001090e4f20();
  return;
}



/* Entry: 1090e45b4; end: 1090e463f;  */

void FUN_1090e45b4(undefined8 param_1)

{
  undefined8 in_x5;
  undefined1 auStack_58 [24];
  
  func_0x00010b99f8ac(auStack_58,in_x5);
  FUN_1090e4460(param_1,4,&UNK_10f5508a1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 1090e4640; end: 1090e4773;  */

void FUN_1090e4640(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4f70();
  func_0x0001090e4f30(param_1,param_2,&UNK_10f5508fa);
  return;
}



/* Entry: 1090e4774; end: 1090e47ef;  */

void FUN_1090e4774(undefined8 param_1)

{
  FUN_1090e47f0();
  FUN_1090e4460(param_1,0,&UNK_10f550b1c);
  return;
}



/* Entry: 1090e47f0; end: 1090e4867;  */

void FUN_1090e47f0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 != 2) {
    uVar1 = 4;
  }
  if (param_2 == 1) {
    uVar1 = 1;
  }
  if ((*(uint *)(param_1 + 0x54) & uVar1) == 0) {
    func_0x0001090e4f20(param_1,param_2,&UNK_10f550dcd);
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | uVar1;
  }
  return;
}



/* Entry: 1090e4868; end: 1090e48d7;  */

void FUN_1090e4868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x00010b99f8ac(auStack_48,param_3);
  FUN_1090e4460(param_1,4,&UNK_10f550b5f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 1090e48d8; end: 1090e4943;  */

void FUN_1090e48d8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4f30(param_1,param_2,&UNK_10f550b92);
  return;
}



/* Entry: 1090e4944; end: 1090e49a3;  */

void FUN_1090e4944(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4ee8();
  func_0x0001090e4efc();
  func_0x0001090e4f38(param_1,param_2,&UNK_10f550bfd);
  func_0x0001090e4f4c();
  return;
}



/* Entry: 1090e49a4; end: 1090e4a93;  */

void FUN_1090e49a4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4f30(param_1,param_2,&UNK_10f550c46);
  return;
}



/* Entry: 1090e4a94; end: 1090e4aa3;  */

void FUN_1090e4a94(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    for (lVar2 = *(long *)(param_1 + 0x18) << 4; lVar2 != 0; lVar2 = lVar2 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 2) {
        (*(code *)*puVar1)(1,*(undefined4 *)(param_1 + 0x50),param_1 + 0x48,&UNK_10f550d52,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090e4aa4; end: 1090e4b7b;  */

void FUN_1090e4aa4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4ee8();
  func_0x0001090e4efc();
  func_0x0001090e4f38(param_1,param_2,&UNK_10f550d77);
  func_0x0001090e4f4c();
  return;
}



/* Entry: 1090e4b7c; end: 1090e4ba3;  */

void FUN_1090e4b7c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090e4f20(param_1,param_2,&UNK_10f550e6f);
  return;
}



/* Entry: 1090e4ba4; end: 1090e4c93;  */

void FUN_1090e4ba4(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x54) >> 5 & 1) == 0) {
    func_0x0001090e4f20(param_1,param_2,&UNK_10f550e92);
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x20;
  }
  return;
}


