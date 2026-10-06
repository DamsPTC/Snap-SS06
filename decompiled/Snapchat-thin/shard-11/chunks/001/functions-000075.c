/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108118e1c; end: 108118e6f;  */

void FUN_108118e1c(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x60;
  }
  return;
}



/* Entry: 108118e70; end: 108118e93;  */

void FUN_108118e70(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,param_1);
  return;
}



/* Entry: 108118e94; end: 108119057;  */

void FUN_108118e94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10) + param_2 * 0x38;
  lVar1 = *(long *)(lVar2 + 0x20);
  lVar2 = lVar1 + *(long *)(lVar2 + 0x10);
  while (lVar1 != lVar2) {
    func_0x000108118edc();
  }
  return;
}



/* Entry: 108119058; end: 10811911b;  */

void FUN_108119058(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_a0 [8];
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [8];
  
  plVar2 = (long *)(param_1 + 8);
  FUN_10810c79c(auStack_a0,*(undefined4 *)(param_2 + 0x30),
                *plVar2 + *(long *)(param_1 + 0x10) * 0x50 + -0x50,param_2 + 8);
  lVar1 = *plVar2 + *(long *)(param_1 + 0x10) * 0x50;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    puStack_60 = (undefined1 *)(param_2 + 0x40);
    puStack_58 = (undefined8 *)(param_2 + 0x38);
    puStack_50 = (undefined1 *)auStack_a0;
    FUN_10811911c(auStack_48,plVar2,lVar1,&puStack_60);
  }
  else {
    FUN_1081189c4(lVar1,auStack_a0,*(undefined8 *)(param_2 + 0x38),*(undefined1 *)(param_2 + 0x40));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  FUN_10837ca5c(auStack_a0[0]);
  return;
}



/* Entry: 10811911c; end: 108119227;  */

void FUN_10811911c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar1 = *param_2;
  lVar4 = param_2[1];
  FUN_1081189ec(lVar4,param_2[2],1);
  lVar5 = lVar4;
  func_0x000108118a58();
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar6 = lVar2;
  plStack_88 = param_2;
  lStack_80 = lVar4;
  plStack_68 = param_2;
  FUN_108118ad4(lVar2,param_3,lVar5);
  FUN_1081189c4();
  FUN_108118ad4(param_3,lVar2 + lVar3 * 0x50,lVar6 + 0x50);
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_108118b2c(&uStack_78);
  uStack_90 = 0;
  if (lVar2 != 0) {
    FUN_108118a84(param_2,lVar2,param_2[1]);
    func_0x0001081199e4();
  }
  *param_2 = lVar5;
  param_2[1] = param_2[1] + 1;
  param_2[2] = lVar4;
  func_0x000108118b6c(&uStack_90);
  *param_1 = *param_2 + (param_3 - lVar1);
  return;
}



/* Entry: 108119228; end: 108119283;  */

void FUN_108119228(long *param_1)

{
  FUN_10837ca38(*param_1 + param_1[1] * 0x50 + -0x50);
  param_1[1] = param_1[1] + -1;
  return;
}



/* Entry: 108119284; end: 108119443;  */

void FUN_108119284(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar13 = param_5[1] + param_5[2] * 0x50;
  uStack_70 = param_1;
  uStack_6c = param_2;
  FUN_10810c934(lVar13 + -0x50);
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_108117ff8(&uStack_70);
  func_0x000108119980();
  lVar14 = *param_5;
  uVar11 = *(ulong *)(lVar13 + -0x10);
  uVar19 = *(undefined4 *)(lVar13 + -0x18);
  uVar1 = *(undefined1 *)(lVar13 + -8);
  uVar3 = uVar11;
  FUN_108118e70();
  lVar6 = 0;
  plVar4 = (long *)(lVar14 + 0x50);
  uVar7 = uVar3 >> 7;
  while( true ) {
    uVar7 = uVar7 & *(ulong *)(lVar14 + 0x68);
    uVar8 = *(ulong *)(*plVar4 + uVar7);
    uVar9 = uVar8 ^ (uVar3 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar10 = *(long *)(lVar14 + 0x58);
      plVar12 = (long *)(uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                        *(ulong *)(lVar14 + 0x68));
      if (*(ulong *)(lVar10 + (long)plVar12 * 0x60) == uVar11) goto LAB_1081193ec;
    }
    if ((uVar8 & ~uVar8 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  FUN_1081194d0(plVar4,uVar3);
  puVar5 = (ulong *)(*(long *)(lVar14 + 0x58) + (long)plVar4 * 0x60);
  *puVar5 = uVar11;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  FUN_10810c9b4();
  FUN_108376ad8(puVar5 + 9);
  *(byte *)(*(long *)(lVar14 + 0x50) + (long)plVar4) = (byte)uVar3 & 0x7f;
  func_0x0001081199f4();
  lVar10 = *(long *)(lVar14 + 0x58);
  plVar12 = plVar4;
LAB_1081193ec:
  lVar10 = lVar10 + (long)plVar12 * 0x60;
  *(ulong *)(lVar10 + 0x10) = CONCAT44(uStack_64,uStack_68);
  *(ulong *)(lVar10 + 8) = CONCAT44(uStack_6c,uStack_70);
  uVar16 = *(undefined8 *)(lVar13 + -0x38);
  uVar15 = *(undefined8 *)(lVar13 + -0x40);
  uVar18 = *(undefined8 *)(lVar13 + -0x28);
  uVar17 = *(undefined8 *)(lVar13 + -0x30);
  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar13 + -0x20);
  *(undefined8 *)(lVar10 + 0x30) = uVar18;
  *(undefined8 *)(lVar10 + 0x28) = uVar17;
  *(undefined8 *)(lVar10 + 0x20) = uVar16;
  *(undefined8 *)(lVar10 + 0x18) = uVar15;
  FUN_108376b90(lVar10 + 0x48,lVar13 + -0x50);
  *(undefined4 *)(lVar10 + 0x40) = uVar19;
  *(undefined1 *)(lVar10 + 0x58) = uVar1;
  return;
}



/* Entry: 108119444; end: 108119477;  */

void FUN_108119444(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 auStack_40 [2];
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  FUN_108376ad8(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10) * 0x50,auStack_40);
  uStack_50 = 0;
  uStack_48 = uVar1;
  uStack_44 = uVar2;
  func_0x000108142248(auStack_40,&uStack_50,0);
  func_0x00010810c9d0();
  FUN_10837ca5c(auStack_40[0]);
  return;
}



/* Entry: 108119478; end: 1081194af;  */

void FUN_108119478(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + 0x10);
  uStack_18 = CONCAT44((float)((ulong)uVar1 >> 0x20) + 0.0,(float)uVar1 + 0.0);
  uStack_20 = 0;
  FUN_108119284(param_1,&uStack_20);
  return;
}



/* Entry: 1081194b0; end: 1081194cf;  */

void FUN_1081194b0(void)

{
  func_0x0001081199b8();
  func_0x0001081199a4();
  return;
}



/* Entry: 1081194d0; end: 108119597;  */

void FUN_1081194d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_108119598(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_108119518;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_108119518;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10811956c:
    FUN_1081195d8(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10811956c;
    }
    func_0x000108119704(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_108119598(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_108119518:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 108119598; end: 1081195d7;  */

ulong FUN_108119598(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 1081195d8; end: 1081198bb;  */

void FUN_1081195d8(long *param_1,ulong param_2)

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
  lVar3 = lVar8 + param_2 * 0x60;
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
      FUN_1081198bc();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_108119598(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1081198e0(param_1[1] + lVar4 * 0x60,lVar5);
    }
    lVar5 = lVar5 + 0x60;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1081198bc; end: 1081198df;  */

void FUN_1081198bc(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 1081198e0; end: 10811993b;  */

undefined8 * FUN_1081198e0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000108119a18();
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  uVar7 = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x34) = uVar7;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  func_0x000108376b14(param_1 + 9,param_2 + 9);
  *(undefined1 *)(unaff_x20 + 0x58) = *(undefined1 *)(unaff_x19 + 0x58);
  FUN_10837ca5c(*(undefined8 *)(unaff_x19 + 0x48));
  return (undefined8 *)(unaff_x19 + 0x48);
}



/* Entry: 10811993c; end: 108119a23;  */

void FUN_10811993c(void)

{
  return;
}



/* Entry: 108119a24; end: 10811c8eb;  */

void FUN_108119a24(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  switch(param_4) {
  case 0:
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    break;
  case 1:
    uStack_28 = 1;
    goto code_r0x000108119ab4;
  case 2:
    uStack_28 = 0x200000001;
code_r0x000108119ab4:
    uStack_38 = (ulong)uStack_38._5_3_ << 0x28;
    uStack_30 = 0;
    break;
  case 3:
    uStack_38 = CONCAT35(uStack_38._5_3_,0x100000000);
    uStack_28 = 0;
    uStack_30 = 0x3eaaaaab3eaaaaab;
  }
  FUN_1083b5bfc(&uStack_40,*(undefined8 *)(*param_2 + 0x18),0,0,&uStack_38,param_3);
  uVar1 = uStack_40;
  uStack_40 = 0;
  *param_1 = uVar1;
  func_0x000106f47224(&uStack_40);
  return;
}



/* Entry: 10811c8ec; end: 10811c9ff;  */

long FUN_10811c8ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10811e8f8();
  func_0x00010811cd34();
  func_0x0001078d8308(lVar1 + 0x1f8,param_2);
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0xffb3b3b3ff000000;
  *(undefined1 *)(param_1 + 0x220) = 0;
  func_0x00010811c948(param_1);
  return param_1;
}



/* Entry: 10811ca00; end: 10811ca0b;  */

undefined8 * FUN_10811ca00(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_1;
  func_0x00010811cd34();
  func_0x0001003a8c94(puVar1 + 0x42);
  func_0x0001078ce490(param_1 + 0x41);
  func_0x0001003a8c94(param_1 + 0x40);
  func_0x0001078ce46c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110a25488;
  plVar2 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar3 = (long *)param_1[10];
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    func_0x00010813b754(*plVar2 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10811ca0c; end: 10811ca1f;  */

void FUN_10811ca0c(void)

{
  func_0x00010811c9bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811ca20; end: 10811ca27;  */

void FUN_10811ca20(long param_1)

{
  func_0x00010811c9bc(param_1 + -0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811ca28; end: 10811ca8f;  */

void FUN_10811ca28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x1f8);
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_28 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010811f0b8(param_1,&lStack_28);
  func_0x0001078bee50(lStack_28);
  FUN_10811ca90(param_1);
  return;
}



/* Entry: 10811ca90; end: 10811cacb;  */

void FUN_10811ca90(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20)) + 0.0,
                       ((float)*(undefined8 *)(param_1 + 200) -
                       (float)*(undefined8 *)(param_1 + 0xc0)) + 0.0);
  uStack_20 = 0;
  FUN_10811fa78(*(undefined8 *)(param_1 + 0x1f8),&uStack_20);
  return;
}



/* Entry: 10811cacc; end: 10811cadb;  */

void FUN_10811cacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010811cad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1f8) + 0x48))();
  return;
}



/* Entry: 10811cadc; end: 10811cc23;  */

/* WARNING: Possible PIC construction at 0x00010812836c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108128370) */

void FUN_10811cadc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x200) == *param_2) && (*(long *)(param_1 + 0x208) == 0)) {
    return;
  }
  func_0x0001003b1eb0(param_1 + 0x200);
  func_0x00010811cb34(param_1 + 0x208,0);
  lVar3 = param_1;
  FUN_10811cca0();
  if ((int)lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x21c));
    plVar1 = *(long **)(param_1 + 0x1f8);
    plVar2 = (long *)(param_1 + 0x210);
  }
  else {
    *(undefined1 *)(param_1 + 0x220) = 0;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x218));
    plVar1 = *(long **)(param_1 + 0x1f8);
    if (*(long *)(param_1 + 0x208) != 0) {
      if (plVar1[0x4a] == *(long *)(param_1 + 0x208)) {
        return;
      }
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010811cbd8(plVar1 + 0x4a);
      uStack_28 = 0;
      func_0x00010090c1cc(plVar1 + 0x49,&uStack_28);
      func_0x0001003a8cb8(uStack_28);
      unaff_x30 = 0x108128370;
      register0x00000008 = (BADSPACEBASE *)auStack_30;
      unaff_x19 = plVar1;
      goto SUB_1081282b4;
    }
    plVar2 = (long *)(param_1 + 0x200);
  }
  if ((plVar1[0x49] == *plVar2) && (plVar1[0x4a] == 0)) {
    return;
  }
  func_0x0001003b1eb0(plVar1 + 0x49);
  func_0x00010811cb34(plVar1 + 0x4a,0);
SUB_1081282b4:
  if (plVar1[0x57] != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    FUN_1081287a0(plVar1 + 0x57,0);
    lVar3 = plVar1[0x4b];
    if (lVar3 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      func_0x00010813ab24(lVar3 + 0x130,(undefined1 *)((long)register0x00000008 + -0x28));
      FUN_108129078(*(undefined8 *)((long)register0x00000008 + -0x28));
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,plVar1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 10811cc24; end: 10811cc4b;  */

undefined8 FUN_10811cc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 10811cc4c; end: 10811cc87;  */

/* WARNING: Possible PIC construction at 0x00010812836c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108128370) */

void FUN_10811cc4c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x210) == *param_2) {
    return;
  }
  func_0x0001003b1eb0(param_1 + 0x210);
  lVar3 = param_1;
  FUN_10811cca0();
  if ((int)lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x21c));
    plVar1 = *(long **)(param_1 + 0x1f8);
    plVar2 = (long *)(param_1 + 0x210);
  }
  else {
    *(undefined1 *)(param_1 + 0x220) = 0;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x218));
    plVar1 = *(long **)(param_1 + 0x1f8);
    if (*(long *)(param_1 + 0x208) != 0) {
      if (plVar1[0x4a] == *(long *)(param_1 + 0x208)) {
        return;
      }
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010811cbd8(plVar1 + 0x4a);
      uStack_28 = 0;
      func_0x00010090c1cc(plVar1 + 0x49,&uStack_28);
      func_0x0001003a8cb8(uStack_28);
      unaff_x30 = 0x108128370;
      register0x00000008 = (BADSPACEBASE *)auStack_30;
      unaff_x19 = plVar1;
      goto SUB_1081282b4;
    }
    plVar2 = (long *)(param_1 + 0x200);
  }
  if ((plVar1[0x49] == *plVar2) && (plVar1[0x4a] == 0)) {
    return;
  }
  func_0x0001003b1eb0(plVar1 + 0x49);
  func_0x00010811cb34(plVar1 + 0x4a,0);
SUB_1081282b4:
  if (plVar1[0x57] != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    FUN_1081287a0(plVar1 + 0x57,0);
    lVar3 = plVar1[0x4b];
    if (lVar3 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      func_0x00010813ab24(lVar3 + 0x130,(undefined1 *)((long)register0x00000008 + -0x28));
      FUN_108129078(*(undefined8 *)((long)register0x00000008 + -0x28));
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,plVar1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 10811cc88; end: 10811cc9f;  */

/* WARNING: Possible PIC construction at 0x00010812836c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108128370) */

void FUN_10811cc88(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x21c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x21c) = param_2;
  lVar3 = param_1;
  FUN_10811cca0();
  if ((int)lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x21c));
    plVar1 = *(long **)(param_1 + 0x1f8);
    plVar2 = (long *)(param_1 + 0x210);
  }
  else {
    *(undefined1 *)(param_1 + 0x220) = 0;
    func_0x000108128380(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x218));
    plVar1 = *(long **)(param_1 + 0x1f8);
    if (*(long *)(param_1 + 0x208) != 0) {
      if (plVar1[0x4a] == *(long *)(param_1 + 0x208)) {
        return;
      }
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010811cbd8(plVar1 + 0x4a);
      uStack_28 = 0;
      func_0x00010090c1cc(plVar1 + 0x49,&uStack_28);
      func_0x0001003a8cb8(uStack_28);
      unaff_x30 = 0x108128370;
      register0x00000008 = (BADSPACEBASE *)auStack_30;
      unaff_x19 = plVar1;
      goto SUB_1081282b4;
    }
    plVar2 = (long *)(param_1 + 0x200);
  }
  if ((plVar1[0x49] == *plVar2) && (plVar1[0x4a] == 0)) {
    return;
  }
  func_0x0001003b1eb0(plVar1 + 0x49);
  func_0x00010811cb34(plVar1 + 0x4a,0);
SUB_1081282b4:
  if (plVar1[0x57] != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    FUN_1081287a0(plVar1 + 0x57,0);
    lVar3 = plVar1[0x4b];
    if (lVar3 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      func_0x00010813ab24(lVar3 + 0x130,(undefined1 *)((long)register0x00000008 + -0x28));
      FUN_108129078(*(undefined8 *)((long)register0x00000008 + -0x28));
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,plVar1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 10811cca0; end: 10811cce3;  */

uint FUN_10811cca0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    if (*(long *)(param_1 + 0x200) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)(*(int *)(*(long *)(param_1 + 0x200) + 0xc) == 0);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x208) + 0x10;
    FUN_10811cce4(lVar2);
    uVar1 = (uint)lVar2;
  }
  return uVar1 ^ 1;
}



/* Entry: 10811cce4; end: 10811cd53;  */

bool FUN_10811cce4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1] * 0xb0;
  for (param_1 = (long *)*param_1;
      (lVar1 != 0 && ((*param_1 == 0 || (*(int *)(*param_1 + 0xc) == 0)))); param_1 = param_1 + 0x16
      ) {
    lVar1 = lVar1 + -0xb0;
  }
  return lVar1 == 0;
}



/* Entry: 10811cd54; end: 10811e1f3;  */

void FUN_10811cd54(undefined8 *param_1)

{
  FUN_10811e8f8();
  *param_1 = &PTR_DAT_110a25168;
  param_1[0x3e] = 0;
  return;
}



/* Entry: 10811e1f4; end: 10811e257;  */

void FUN_10811e1f4(long param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  
  FUN_10811e8f8();
  func_0x00010811e8e4();
  *(undefined8 *)(param_1 + 0x1f0) = extraout_x8;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x248) = 0x4080000000000000;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x25c) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x250) = 1;
  return;
}



/* Entry: 10811e258; end: 10811e28f;  */

undefined8 * FUN_10811e258(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_1;
  func_0x00010811e8e4();
  puVar1[0x3e] = extraout_x8;
  FUN_108375e94(puVar1 + 0x41);
  func_0x0001078bdb94(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110a25488;
  plVar2 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar3 = (long *)param_1[10];
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    func_0x00010813b754(*plVar2 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10811e290; end: 10811e29b;  */

undefined8 * FUN_10811e290(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_1;
  func_0x00010811e8e4();
  puVar1[0x3e] = extraout_x8;
  FUN_108375e94(puVar1 + 0x41);
  func_0x0001078bdb94(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110a25488;
  plVar2 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar3 = (long *)param_1[10];
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    func_0x00010813b754(*plVar2 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10811e29c; end: 10811e2af;  */

void FUN_10811e29c(void)

{
  FUN_10811e258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811e2b0; end: 10811e2b7;  */

void FUN_10811e2b0(long param_1)

{
  FUN_10811e258(param_1 + -0x1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811e2b8; end: 10811e68b;  */

void FUN_10811e2b8(undefined8 param_1,undefined8 param_2,double param_3,float param_4,long param_5,
                  undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong auStack_190 [2];
  undefined1 uStack_180;
  undefined8 auStack_170 [2];
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong auStack_148 [2];
  undefined1 auStack_138 [24];
  ulong uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_d4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (*(long *)(param_5 + 0x1f8) != 0) {
    uStack_88 = param_6[1];
    uStack_90 = *param_6;
    lVar10 = *(long *)(*(long *)(param_5 + 0x1f8) + 0x18);
    iVar2 = *(int *)(lVar10 + 0x20);
    if ((iVar2 != 0) && (iVar3 = *(int *)(lVar10 + 0x24), iVar3 != 0)) {
      fVar18 = (float)iVar2;
      fVar17 = (float)iVar3;
      uVar11 = (ulong)(uint)fVar17;
      uStack_a0 = 0;
      fStack_98 = fVar18;
      fStack_94 = fVar17;
      fVar19 = fVar18;
      fStack_b4 = param_4;
      func_0x00010813ff74(&uStack_90,*(undefined4 *)(param_5 + 600));
      fStack_ac = (float)uVar11;
      fVar20 = SUB84(param_3,0);
      dVar13 = 5.26354424712089e-315;
      if (*(float *)(param_5 + 0x260) != 1.0) {
        dVar15 = (double)((fVar20 - fVar19) - *(float *)(param_5 + 0x260) * (fVar20 - fVar19)) * 0.5
        ;
        fVar19 = (float)(dVar15 + (double)fVar19);
        param_3 = (double)fVar20;
        fVar20 = (float)(param_3 - dVar15);
      }
      fVar16 = SUB84(param_3,0);
      fVar14 = *(float *)(param_5 + 0x264);
      dVar15 = (double)(ulong)(uint)fVar14;
      fVar21 = fStack_b4;
      if (fVar14 != 1.0) {
        dVar13 = (double)((fStack_b4 - fStack_ac) - fVar14 * (fStack_b4 - fStack_ac)) * 0.5;
        fStack_ac = (float)(dVar13 + (double)fStack_ac);
        uVar11 = (ulong)(uint)fStack_ac;
        dVar15 = (double)fStack_b4;
        dVar13 = dVar15 - dVar13;
        fVar21 = (float)dVar13;
      }
      fStack_bc = SUB84(dVar15,0);
      fStack_c0 = SUB84(dVar13,0);
      fStack_b0 = fVar19;
      fStack_a8 = fVar20;
      fStack_a4 = fVar21;
      func_0x000108140130(&fStack_b0,&uStack_90);
      fVar20 = fVar20 - fVar19;
      fVar21 = fVar21 - (float)uVar11;
      fVar14 = -(fVar20 / fVar18);
      fVar6 = fVar19 + fVar20;
      if (*(char *)(param_5 + 0x25c) == '\0') {
        fVar14 = fVar20 / fVar18;
        fVar6 = fVar19;
      }
      fStack_b8 = fVar16;
      func_0x0001081420f0(auStack_e8,fVar14,fVar21 / fVar17,fVar6,uVar11);
      if (*(float *)(param_5 + 0x268) != 0.0) {
        func_0x00010814206c(*(float *)(param_5 + 0x268),fVar20 * 0.5 + fStack_e0,
                            fVar21 * 0.5 + fStack_d4,auStack_e8);
      }
      FUN_108115924(auStack_138,param_5 + 0x208);
      lVar10 = *(long *)(param_5 + 0x1f8);
      uVar11 = *(ulong *)(lVar10 + 0x28);
      if (uVar11 != 0) {
        uVar8 = uVar11;
        func_0x00010b98c228();
        if ((uVar8 & 1) == 0) {
          FUN_1083ae048(auStack_190,uVar11 + 0x18,1);
          uVar11 = auStack_190[0];
          if (uStack_120 == 0) {
            auStack_190[0] = 0;
            auStack_148[1] = 0;
            uStack_120 = uVar11;
            func_0x000108164964(0);
            puVar12 = auStack_148 + 1;
          }
          else {
            piVar1 = (int *)(uStack_120 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uStack_150 = uStack_120;
            puVar12 = &uStack_150;
            FUN_10811e68c(auStack_148,auStack_190,&uStack_150);
            uVar11 = uStack_120;
            uStack_120 = auStack_148[0];
            auStack_148[0] = 0;
            func_0x000108164964(uVar11);
            FUN_108115b2c(auStack_148);
          }
          FUN_108115b2c(puVar12);
          FUN_108115b2c(auStack_190);
          uVar11 = *(ulong *)(lVar10 + 0x28);
        }
        fVar19 = *(float *)(uVar11 + 0x68);
        if (fVar19 != 0.0) {
          fVar20 = fVar19 * 0.57735 + 0.5;
          fVar20 = fVar20 + fVar20;
          if (fVar19 <= 0.0) {
            fVar20 = 0.0;
          }
          uStack_160 = 0;
          auStack_190[0] = auStack_190[0] & 0xffffffffffffff00;
          uStack_180 = 0;
          FUN_1083afdf4(&uStack_158,fVar20 * ((fStack_b8 - fStack_c0) / fVar18),
                        fVar20 * ((fStack_b4 - fStack_bc) / fVar17),0,&uStack_160,auStack_190);
          uVar7 = uStack_118;
          uStack_118 = uStack_158;
          uStack_158 = 0;
          FUN_108167bec(uVar7);
          FUN_10811e834(&uStack_158);
          FUN_10811e834(&uStack_160);
          func_0x00010811e8d8();
        }
      }
      if (*(char *)(param_5 + 0x25d) == '\x01') {
        if ((*(byte *)(param_5 + 0x128) & 1) == 0) {
          func_0x00010811e8b4();
          func_0x0001081139dc(param_6,auStack_170);
          FUN_10837ca5c(auStack_170[0]);
        }
        else {
          func_0x000108113a00(param_6,&uStack_90);
        }
        func_0x000108113974(param_6,*(undefined8 *)(param_5 + 0x1f8),&uStack_a0,&fStack_b0,
                            auStack_138);
      }
      else {
        FUN_108119a24(auStack_190,param_5 + 0x1f8,auStack_e8,1);
        FUN_1081159a8(auStack_138,auStack_190);
        func_0x000106f47224(auStack_190);
        if ((*(byte *)(param_5 + 0x128) & 1) == 0) {
          func_0x00010811e8b4();
          pfVar9 = &fStack_c0;
          FUN_1080f6488(pfVar9,&uStack_90);
          if ((int)pfVar9 != 0) {
            func_0x00010811e8d8();
          }
          func_0x000108113900(param_6,auStack_138,auStack_170);
          FUN_10837ca5c(auStack_170[0]);
        }
        else {
          func_0x0001081138d4(param_6,auStack_138,&fStack_c0);
        }
      }
      FUN_108375e94(auStack_138);
    }
  }
  return;
}



/* Entry: 10811e68c; end: 10811e6cf;  */

void FUN_10811e68c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *param_3;
  *param_3 = 0;
  if (lVar1 != 0) {
    FUN_1083ade28(lVar1,&uStack_18);
    FUN_108115b2c(&uStack_18);
    return;
  }
  *param_1 = uStack_18;
  return;
}



/* Entry: 10811e6d0; end: 10811e787;  */

void FUN_10811e6d0(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7da90,&PTR_DAT_110a27230,0);
  }
  func_0x00010811e880();
  lStack_28 = lVar1;
  func_0x00010811e74c(param_1,&lStack_28);
  func_0x0001078bdbb8(lStack_28);
  if (*(byte *)(param_1 + 0x25c) != param_3) {
    *(char *)(param_1 + 0x25c) = (char)param_3;
    func_0x00010811f4a4(param_1);
  }
  return;
}



/* Entry: 10811e788; end: 10811e7a7;  */

void FUN_10811e788(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7da90,&PTR_DAT_110a27230,0);
  }
  func_0x00010811e880();
  lStack_28 = lVar1;
  func_0x00010811e74c(param_1 + -0x1f0,&lStack_28);
  func_0x0001078bdbb8(lStack_28);
  if (*(byte *)(param_1 + 0x6c) != param_3) {
    *(char *)(param_1 + 0x6c) = (char)param_3;
    func_0x00010811f4a4(param_1 + -0x1f0);
  }
  return;
}



/* Entry: 10811e7a8; end: 10811e7eb;  */

void FUN_10811e7a8(long param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(uint *)(param_1 + 0x200) == param_2) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)(ulong)param_2;
  *(uint *)(param_1 + 0x200) = param_2;
  FUN_10811594c(param_1 + 0x208);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10811e7ec; end: 10811e833;  */

void FUN_10811e7ec(float param_1,long param_2,code *UNRECOVERED_JUMPTABLE)

{
  if (*(float *)(param_2 + 0x260) == param_1) {
    return;
  }
  *(float *)(param_2 + 0x260) = param_1;
  if (((*(byte *)(param_2 + 0x1d7) & 1) == 0) && ((*(byte *)(param_2 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x1d0) = 1;
    func_0x0001081148f4(param_2 + 0x180);
    func_0x0001081148f4(param_2 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10811e834; end: 10811e8b3;  */

long * FUN_10811e834(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10811e8b4; end: 10811e8f7;  */

float * FUN_10811e8b4(void)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  long unaff_x20;
  long unaff_x29;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  ulong uStack0000000000000000;
  ulong uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uStack0000000000000008 = *(ulong *)(unaff_x20 + 0x11c);
  uStack0000000000000000 = *(ulong *)(unaff_x20 + 0x114);
  fVar8 = (float)uStack0000000000000000;
  uStack0000000000000010 = *(undefined8 *)(unaff_x20 + 0x124);
  pfVar2 = (float *)&stack0x00000020;
  pfVar3 = (float *)(unaff_x29 + -0x80);
  FUN_108376ad8(pfVar2);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010813f294(pfVar3);
  fVar8 = fVar8 / 100.0;
  uVar1 = uStack0000000000000000 ^
          (uStack0000000000000000 ^
          CONCAT44((float)(uStack0000000000000000 >> 0x20) * fVar8,
                   (float)uStack0000000000000000 * fVar8)) &
          CONCAT44(-(uint)((int)((uint)uStack0000000000000010._1_1_ << 0x1f) < 0),
                   -(uint)((int)uStack0000000000000010 << 0x1f < 0));
  uVar4 = (undefined4)uVar1;
  uVar6 = (undefined4)(uVar1 >> 0x20);
  fVar9 = (float)uStack0000000000000008 * fVar8;
  fVar8 = (float)(uStack0000000000000008 >> 0x20) * fVar8;
  uVar1 = CONCAT44(fVar8,fVar9) ^
          (CONCAT44(fVar8,fVar9) ^ uStack0000000000000008) &
          ~CONCAT44(-(uint)((int)((uint)uStack0000000000000010._3_1_ << 0x1f) < 0),
                    -(uint)((int)((uint)uStack0000000000000010._2_1_ << 0x1f) < 0));
  uVar5 = (undefined4)uVar1;
  uVar7 = (undefined4)(uVar1 >> 0x20);
  uStack_58 = CONCAT44(uVar6,uVar6);
  uStack_60 = CONCAT44(uVar4,uVar4);
  uStack_48 = CONCAT44(uVar7,uVar7);
  uStack_50 = CONCAT44(uVar5,uVar5);
  FUN_108378124(pfVar2,pfVar3,&uStack_60,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pfVar2;
  }
  ___stack_chk_fail();
  if ((((*pfVar2 == *pfVar3) && (pfVar2[1] == pfVar3[1])) && (pfVar2[2] == pfVar3[2])) &&
     (((pfVar2[3] == pfVar3[3] && (*(char *)(pfVar2 + 4) == *(char *)(pfVar3 + 4))) &&
      ((*(char *)((long)pfVar2 + 0x11) == *(char *)((long)pfVar3 + 0x11) &&
       (*(char *)((long)pfVar2 + 0x12) == *(char *)((long)pfVar3 + 0x12))))))) {
    return (float *)(ulong)(*(char *)((long)pfVar2 + 0x13) == *(char *)((long)pfVar3 + 0x13));
  }
  return (float *)0x0;
}



/* Entry: 10811e8f8; end: 10811e9d3;  */

undefined8 * FUN_10811e8f8(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a25488;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001081226ec();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[3] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &UNK_10dd5b8b0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_1 + 0xfc) = uVar1;
  *(undefined4 *)((long)param_1 + 0x104) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  FUN_1081411f4(param_1 + 0x32);
  FUN_10810c9b4(param_1 + 0x35);
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  *(undefined1 *)((long)param_1 + 0x1d2) = 1;
  *(undefined4 *)((long)param_1 + 0x1d3) = 0;
  *(undefined1 *)((long)param_1 + 0x1d7) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0x101;
  *(undefined1 *)((long)param_1 + 0x1da) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  param_1[0x3d] = 0;
  return param_1;
}



/* Entry: 10811e9d4; end: 10811eac7;  */

undefined8 * FUN_10811e9d4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a25488;
  plVar1 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar2 = (long *)param_1[10];
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    func_0x00010813b754(*plVar1 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10811eac8; end: 10811eacb;  */

undefined8 * FUN_10811eac8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a25488;
  plVar1 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar2 = (long *)param_1[10];
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    func_0x00010813b754(*plVar1 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10811eacc; end: 10811eadf;  */

void FUN_10811eacc(void)

{
  FUN_10811e9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10811eae0; end: 10811eae3;  */

void FUN_10811eae0(void)

{
  return;
}



/* Entry: 10811eae4; end: 10811f02b;  */

void FUN_10811eae4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  ulong uVar19;
  float in_s3;
  undefined8 auStack_128 [2];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uVar15;
  
  fVar12 = *(float *)(param_1 + 0x104);
  if (0.0 < fVar12) {
    piVar9 = param_3;
    func_0x0001081226e0();
    piVar9[2] = piVar9[2] + 1;
    uVar19 = *(ulong *)(param_1 + 0xc0);
    fVar14 = (float)*(undefined8 *)(param_1 + 200) - (float)uVar19;
    fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) - (float)(uVar19 >> 0x20);
    uVar15 = CONCAT44(fVar16,fVar14);
    if (*(char *)(param_1 + 0x1d9) == '\x01') {
      *(undefined1 *)((long)unaff_x20 + 0x1d9) = 0;
      pfVar6 = (float *)(unaff_x20 + 0x35);
      func_0x000108363ab4();
      fVar13 = *(float *)((long)unaff_x20 + 0xf4);
      fVar17 = *(float *)((long)unaff_x20 + 0xfc);
      fVar12 = fVar14;
      if (fVar17 != 1.0) {
        fVar12 = fVar14 * fVar17;
        fVar13 = fVar13 + (fVar14 - fVar12) * 0.5;
        *pfVar6 = fVar17;
      }
      in_s3 = *(float *)(unaff_x20 + 0x1f);
      fVar17 = *(float *)(unaff_x20 + 0x20);
      fVar14 = fVar16;
      if (fVar17 != 1.0) {
        fVar14 = fVar16 * fVar17;
        in_s3 = in_s3 + (fVar16 - fVar14) * 0.5;
        *(float *)(unaff_x20 + 0x37) = fVar17;
      }
      uVar19 = (ulong)(uint)fVar14;
      *(float *)(unaff_x20 + 0x36) = fVar13 + *(float *)(unaff_x20 + 0x18);
      in_s3 = in_s3 + *(float *)((long)unaff_x20 + 0xc4);
      *(float *)((long)unaff_x20 + 0x1bc) = in_s3;
      *(undefined4 *)((long)unaff_x20 + 0x1cc) = 0x80;
      if (*(float *)(unaff_x20 + 0x21) != 0.0) {
        uVar19 = (ulong)(uint)(fVar14 * 0.5 + in_s3);
        FUN_10814206c(*(float *)(unaff_x20 + 0x21),
                      fVar12 * 0.5 + fVar13 + *(float *)(unaff_x20 + 0x18));
      }
      param_3[1] = param_3[1] + 1;
      fVar12 = *(float *)((long)unaff_x20 + 0x104);
    }
    uVar18 = (undefined4)uVar19;
    *(undefined1 *)((long)unaff_x20 + 0x1d7) = 1;
    fVar14 = 1.0;
    if ((fVar12 != 1.0) && (fVar14 = 1.0, unaff_x20[6] != unaff_x20[5])) {
      fVar14 = fVar12;
    }
    if ((unaff_x20[0x17] == 0) && (plVar7 = (long *)unaff_x20[0x15], plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x58))();
      unaff_x20[0x17] = (long)plVar7;
    }
    FUN_10810ef54(fVar14);
    if ((char)unaff_x20[0x3a] == '\x01') {
      fVar12 = fVar16;
      func_0x0001081136e4(&uStack_b0);
      if (unaff_x20[0x2a] != 0) {
        FUN_10810c694(unaff_x20[0x2a],&uStack_b0,(long)unaff_x20 + 0x114);
      }
      if ((unaff_x20[0x26] == 0) && (unaff_x20[0x27] == 0)) {
        if ((int)unaff_x20[0x1e] != 0) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_d0 = 0;
          uStack_c0 = 0x4080000000000000;
          FUN_108343500();
          fStack_cc = fVar12;
          uStack_c8 = uVar18;
          fStack_c4 = in_s3;
          func_0x00010812279c(1);
          FUN_108375e94(&uStack_100);
        }
      }
      else {
        func_0x00010814029c(unaff_x20 + 0x26,&uStack_b0,(long)unaff_x20 + 0x114);
      }
      func_0x000108122708();
      func_0x000108122938(unaff_x20 + 0x2c);
      func_0x0001081229b4();
      func_0x000108122974();
      func_0x00010812282c();
      (**(code **)(*unaff_x20 + 0x70))();
      func_0x000108122708();
      func_0x000108122938(unaff_x20 + 0x2e);
      func_0x0001081229b4();
      func_0x000108122974();
      func_0x00010812282c();
      fVar14 = *(float *)((long)unaff_x20 + 0x10c);
      if (fVar14 != 0.0) {
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_c0 = 0x4080000000000000;
        uVar4 = 0;
        FUN_108343500((int)unaff_x20[0x22]);
        uStack_d0 = uVar4;
        if (0.0 <= fVar14) {
          uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar14);
        }
        fStack_cc = fVar12;
        uStack_c8 = uVar18;
        fStack_c4 = in_s3;
        func_0x00010812279c(0x41);
        FUN_108375e94(&uStack_100);
      }
      func_0x000108122708();
      func_0x000108122938(unaff_x20 + 0x30);
      func_0x0001081229b4();
      func_0x000108122974();
    }
    lStack_108 = 0;
    plVar7 = (long *)unaff_x20[0x2b];
    if (plVar7 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x20))();
      iVar5 = (int)plVar7;
      uStack_b0 = 0;
      uStack_a8 = uVar15;
      (**(code **)(*(long *)unaff_x20[0x2b] + 0x28))(&uStack_100,(long *)unaff_x20[0x2b],&uStack_b0)
      ;
      FUN_10811f02c(&lStack_108,&uStack_100);
      func_0x0001081152ac(uStack_100);
    }
    lStack_110 = 0;
    if ((unaff_x20[0x28] == 0) && (unaff_x20[0x29] == 0)) {
      lVar11 = 0;
    }
    else {
      uStack_100 = 0;
      uStack_f8 = uVar15;
      func_0x00010814025c(unaff_x20 + 0x28,&uStack_100);
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_74 = 0x3f800000;
      uStack_6c = 0x40800000;
      func_0x00010814027c(unaff_x20 + 0x28,&uStack_b0);
      FUN_1083762f4(&uStack_b0,6);
      FUN_108376ad8(auStack_128);
      lVar8 = 0x80;
      __Znwm();
      lVar11 = lVar8;
      func_0x0001081154e4();
      plVar7 = (long *)(lVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_118 = lVar8;
      FUN_10811f02c(&lStack_110,&lStack_118);
      func_0x0001081152ac(lStack_118);
      FUN_108121620(lVar8);
      FUN_10837ca5c(auStack_128[0]);
      FUN_108375e94(&uStack_b0);
      lVar11 = lStack_110;
      if (lStack_110 != 0) {
        FUN_10810f168();
      }
    }
    lVar8 = lStack_108;
    if ((lStack_108 != 0) && (iVar5 == 0)) {
      func_0x000108122994();
    }
    if ((unaff_x20[0x2c] != 0) || (unaff_x20[0x2d] != 0)) {
      func_0x00010812275c();
    }
    if ((lVar8 != 0) && (iVar5 == 1)) {
      func_0x000108122994();
    }
    if ((unaff_x20[0x2e] != 0) || (unaff_x20[0x2f] != 0)) {
      func_0x00010812275c();
    }
    if (*(char *)((long)unaff_x20 + 0x1d3) == '\x01') {
      FUN_10810f0d4(uVar15,fVar16);
    }
    *(int *)(unaff_x20 + 4) = (int)unaff_x20[4] + 1;
    puVar1 = (undefined8 *)unaff_x20[6];
    for (puVar10 = (undefined8 *)unaff_x20[5]; puVar10 != puVar1; puVar10 = puVar10 + 1) {
      FUN_10811eae4(*puVar10);
    }
    *(int *)(unaff_x20 + 4) = (int)unaff_x20[4] + -1;
    if (lVar8 != 0) {
      FUN_10810f1b8();
    }
    if ((unaff_x20[0x30] != 0) || (unaff_x20[0x31] != 0)) {
      func_0x00010812275c();
    }
    if (lVar11 != 0) {
      FUN_10810f1b8();
    }
    if ((char)unaff_x20[0x3a] == '\x01') {
      *(undefined1 *)(unaff_x20 + 0x3a) = 0;
      *param_3 = *param_3 + 1;
    }
    *(undefined1 *)((long)unaff_x20 + 0x1d1) = 0;
    *(undefined1 *)((long)unaff_x20 + 0x1d7) = 0;
    func_0x00010810efd4();
    func_0x0001081152ac(lVar11);
    func_0x0001081152ac(lVar8);
  }
  return;
}



/* Entry: 10811f02c; end: 10811f053;  */

void FUN_10811f02c(void)

{
  undefined1 in_ZR;
  
  func_0x00010812292c();
  if (!(bool)in_ZR) {
    func_0x0001081227c4();
    func_0x0001081152ac();
  }
  return;
}



/* Entry: 10811f054; end: 10811f057;  */

void FUN_10811f054(void)

{
  return;
}



/* Entry: 10811f058; end: 10811f0ab;  */

void FUN_10811f058(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001081226d4();
  if (param_1 != param_2) {
    if (*unaff_x20 != 0) {
      piVar1 = (int *)(*unaff_x20 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108113b38();
  }
  func_0x00010810e6dc(unaff_x19 + 8,unaff_x20 + 1);
  return;
}



/* Entry: 10811f0ac; end: 10811f0c7;  */

undefined8 FUN_10811f0ac(void)

{
  return 0;
}



/* Entry: 10811f0c8; end: 10811f20f;  */

void FUN_10811f0c8(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *plStack_48;
  
  func_0x0001081226e0();
  if (*(char *)(*param_2 + 0x1d4) == '\x01') {
    func_0x000108122668();
    func_0x0001080ec798();
    FUN_10811f210(*unaff_x19,plStack_48 != unaff_x20);
  }
  lVar2 = unaff_x20[5];
  *(int *)((long)unaff_x20 + 0x24) = *(int *)((long)unaff_x20 + 0x24) + 1;
  if (param_3 == unaff_x20[6] - lVar2 >> 3) {
    func_0x00010811f27c();
  }
  else {
    FUN_10811f2b4(unaff_x20 + 5,lVar2 + param_3 * 8);
  }
  *(int *)((long)unaff_x20 + 0x24) = *(int *)((long)unaff_x20 + 0x24) + -1;
  lVar2 = *unaff_x19;
  plVar1 = unaff_x20;
  FUN_1080e5de0();
  if ((plVar1 != (long *)0x0) && (plVar1[2] != 0)) {
    do {
      func_0x000108122744();
    } while (extraout_w10 != 0);
  }
  plStack_48 = plVar1;
  FUN_10811f3cc(lVar2,&plStack_48);
  func_0x0001080ec798(plStack_48);
  func_0x0001078bee50(plVar1);
  (**(code **)(*unaff_x20 + 0x28))();
  (**(code **)(*unaff_x20 + 0xa0))();
  lVar2 = *unaff_x19;
  if (*(char *)(lVar2 + 0x1d5) == '\x01') {
    func_0x00010812297c(*(undefined8 *)(*unaff_x20 + 0x30));
    lVar2 = *unaff_x19;
  }
  func_0x00010811f4a4(lVar2);
  return;
}



/* Entry: 10811f210; end: 10811f2b3;  */

void FUN_10811f210(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x1d4) == '\x01') {
    func_0x00010812283c();
    func_0x00010812277c();
    func_0x00010812284c();
    if (lStack_28 != 0) {
      FUN_10811f4f8(lStack_28,param_1,param_2);
    }
    uStack_30 = 0;
    FUN_10811f3cc(param_1,&uStack_30);
    func_0x00010812284c();
    func_0x00010812289c();
  }
  return;
}



/* Entry: 10811f2b4; end: 10811f3cb;  */

long * FUN_10811f2b4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong *extraout_x8;
  long lVar2;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar3;
  ulong *puStack_68;
  ulong *puStack_60;
  long lStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  
  func_0x0001081226e0();
  puVar3 = (ulong *)(param_1 + 0x10);
  if (*(long **)(param_1 + 8) < (long *)*puVar3) {
    unaff_x20 = unaff_x19;
    if (unaff_x19 == *(long **)(param_1 + 8)) {
      FUN_108120cf8();
    }
    else {
      puStack_68 = (ulong *)*param_3;
      puStack_60 = puVar3;
      if ((puStack_68 != (ulong *)0x0) && (puStack_68[2] != 0)) {
        do {
          func_0x0001081228ec();
          puStack_68 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x000108122818();
      FUN_108120ee8();
      func_0x0001078beedc();
      func_0x00010812289c();
    }
  }
  else {
    plVar1 = unaff_x20;
    FUN_108120d94();
    lVar2 = *unaff_x20;
    puStack_68 = (ulong *)0x0;
    puStack_48 = puVar3;
    if (plVar1 != (long *)0x0) {
      FUN_108120df0();
      puStack_68 = puVar3;
    }
    puStack_60 = (ulong *)((long)puStack_68 + ((long)unaff_x19 - lVar2));
    puStack_50 = puStack_68 + (long)plVar1;
    lStack_58 = (long)puStack_60;
    FUN_108120f28(&puStack_68,param_3);
    FUN_10812103c();
    func_0x0001081228a4();
  }
  return unaff_x20;
}



/* Entry: 10811f3cc; end: 10811f4ef;  */

void FUN_10811f3cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_38;
  long alStack_30 [2];
  
  func_0x0001081226d4();
  func_0x000108122240(alStack_30,param_2);
  func_0x0001081205f4(unaff_x19 + 0x13,alStack_30);
  FUN_108121598(alStack_30);
  lVar1 = *unaff_x20;
  *(bool *)((long)unaff_x19 + 0x1d4) = lVar1 != 0;
  if (lVar1 == 0) {
    if (unaff_x19[0x15] != 0) {
      (**(code **)(*unaff_x19 + 0x88))();
    }
  }
  else {
    FUN_10811f5d8(alStack_30);
    if (alStack_30[0] == 0) {
      func_0x000108120630(&lStack_38);
      if (lStack_38 != unaff_x19[0x15]) {
        func_0x000108122874();
      }
      FUN_108122344(lStack_38);
    }
    else if (*(long *)(alStack_30[0] + 0xa8) != unaff_x19[0x15]) {
      func_0x000108122874();
    }
    func_0x0001078bee50(alStack_30[0]);
  }
  return;
}



/* Entry: 10811f4f0; end: 10811f4f7;  */

void FUN_10811f4f0(void)

{
  return;
}



/* Entry: 10811f4f8; end: 10811f59b;  */

void FUN_10811f4f8(long param_1,undefined8 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001081226d4();
  bVar1 = false;
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x28);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  do {
    while( true ) {
      if (UNRECOVERED_JUMPTABLE == (code *)unaff_x19[6]) {
        *(int *)((long)unaff_x19 + 0x24) = *(int *)((long)unaff_x19 + 0x24) + -1;
        if (bVar1) {
          if (param_3 != 0) {
            func_0x00010812297c(*(undefined8 *)(*unaff_x19 + 0x98));
          }
          func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x00010811f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      }
      if (*(long *)UNRECOVERED_JUMPTABLE == unaff_x20) break;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 8;
    }
    UNRECOVERED_JUMPTABLE = (code *)(param_1 + 0x28);
    FUN_10811f59c();
    bVar1 = true;
  } while( true );
}



/* Entry: 10811f59c; end: 10811f5cf;  */

void FUN_10811f59c(long param_1)

{
  long unaff_x19;
  
  func_0x0001081226e0();
  FUN_108121168(unaff_x19 + 8,*(undefined8 *)(param_1 + 8));
  FUN_1081211cc();
  return;
}



/* Entry: 10811f5d0; end: 10811f5d7;  */

void FUN_10811f5d0(long param_1)

{
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x1d4) == '\x01') {
    func_0x00010812283c();
    func_0x00010812277c();
    func_0x00010812284c();
    if (lStack_28 != 0) {
      FUN_10811f4f8(lStack_28,param_1,1);
    }
    uStack_30 = 0;
    FUN_10811f3cc(param_1,&uStack_30);
    func_0x00010812284c();
    func_0x00010812289c();
  }
  return;
}



/* Entry: 10811f5d8; end: 10811f617;  */

void FUN_10811f5d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110a208e0,&PTR_DAT_110a25558,0);
  }
  FUN_1080e5de0();
  *param_1 = lVar1;
  return;
}



/* Entry: 10811f618; end: 10811f6df;  */

void FUN_10811f618(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x20);
  *(int *)(param_2 + 0x20) = iVar5 + 1;
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + param_3 * 8);
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
    iVar5 = *(int *)(param_2 + 0x20) + -1;
  }
  *param_1 = lVar4;
  *(int *)(param_2 + 0x20) = iVar5;
  return;
}



/* Entry: 10811f6e0; end: 10811f747;  */

void FUN_10811f6e0(long param_1)

{
  func_0x0001081226d4();
  if (*(char *)(param_1 + 0x1d6) == '\x01') {
    func_0x0001081201f4();
  }
  return;
}



/* Entry: 10811f748; end: 10811f75f;  */

void FUN_10811f748(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = (int)param_2;
  if (*(int *)(param_1 + 0xf0) == iVar1) {
    return;
  }
  *(int *)(param_1 + 0xf0) = iVar1;
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT44(uVar2,iVar1))();
    return;
  }
  return;
}



/* Entry: 10811f760; end: 10811f8ef;  */

void FUN_10811f760(int param_1,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x21;
  
  func_0x0001081229c8();
  param_1 = param_1 + 0x130;
  func_0x000108122854();
  if (param_1 != 0) {
    func_0x000108122754();
  }
  uVar2 = unaff_x19 + 0x130;
  if (*unaff_x21 == unaff_x21[1]) {
    func_0x000108122884();
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
    func_0x00010812288c();
    iVar1 = (int)unaff_x19 + 0x130;
    func_0x000108140524();
    if (iVar1 == 0) {
      return;
    }
  }
  if (((*(byte *)(unaff_x19 + 0x1d7) & 1) == 0) && ((*(byte *)(unaff_x19 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x1d0) = 1;
    func_0x0001081148f4(unaff_x19 + 0x180);
    func_0x0001081148f4(unaff_x19 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10811f8f0; end: 10811f913;  */

undefined4 FUN_10811f8f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}



/* Entry: 10811f914; end: 10811f973;  */

void FUN_10811f914(float param_1,long param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x104);
  if (fVar1 == param_1) {
    return;
  }
  *(float *)(param_2 + 0x104) = param_1;
  if (0.0 < param_1 != 0.0 < fVar1) {
    func_0x000108122754();
    func_0x000108122724(param_2);
    if (unaff_x20 != 0) {
      func_0x000108122624();
    }
    func_0x00010812285c();
    return;
  }
  func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10811f974; end: 10811f99f;  */

void FUN_10811f974(void)

{
  undefined8 uStack_20;
  
  func_0x000108122724();
  if (uStack_20 != 0) {
    func_0x000108122624();
  }
  func_0x00010812285c();
  return;
}



/* Entry: 10811f9a0; end: 10811f9d7;  */

undefined4 FUN_10811f9a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}



/* Entry: 10811f9d8; end: 10811fa53;  */

void FUN_10811f9d8(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  if (*(long *)(param_1 + 0x158) == *(long *)UNRECOVERED_JUMPTABLE) {
    return;
  }
  func_0x00010811fa14(param_1 + 0x158);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10811fa54; end: 10811fa77;  */

void FUN_10811fa54(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (uint)param_2;
  if (*(byte *)(param_1 + 0x1d3) == uVar1) {
    return;
  }
  *(char *)(param_1 + 0x1d3) = (char)param_2;
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT44(uVar2,uVar1))();
    return;
  }
  return;
}



/* Entry: 10811fa78; end: 10811fb1b;  */

void FUN_10811fa78(int param_1)

{
  long lVar1;
  long *unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  
  func_0x0001081226d4();
  param_1 = param_1 + 0xc0;
  FUN_1080f6488();
  if (param_1 == 0) {
    return;
  }
  if (*(float *)(unaff_x19 + 0x19) - *(float *)(unaff_x19 + 0x18) == unaff_x20[2] - *unaff_x20) {
    fVar2 = *(float *)((long)unaff_x19 + 0xcc) - *(float *)((long)unaff_x19 + 0xc4);
    fVar3 = unaff_x20[3] - unaff_x20[1];
    lVar1 = *(long *)unaff_x20;
    unaff_x19[0x19] = *(long *)(unaff_x20 + 2);
    unaff_x19[0x18] = lVar1;
    func_0x00010812280c();
    if (fVar2 == fVar3) {
      lVar1 = 0x28;
      goto LAB_10811fb00;
    }
  }
  else {
    lVar1 = *(long *)unaff_x20;
    unaff_x19[0x19] = *(long *)(unaff_x20 + 2);
    unaff_x19[0x18] = lVar1;
    func_0x00010812280c();
  }
  func_0x000108122754();
  lVar1 = 0x78;
LAB_10811fb00:
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + lVar1))();
  return;
}



/* Entry: 10811fb1c; end: 10811fb33;  */

void FUN_10811fb1c(long param_1)

{
  undefined8 uStack_20;
  
  if ((*(byte *)(param_1 + 0x1d1) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1d1) = 1;
  func_0x000108122724();
  if (uStack_20 != 0) {
    func_0x000108122624();
  }
  func_0x00010812285c();
  return;
}



/* Entry: 10811fb34; end: 10811fbfb;  */

void FUN_10811fb34(void)

{
  undefined8 uStack_28;
  
  func_0x000108122668();
  if (uStack_28 != (long *)0x0) {
    func_0x000108122824(*(undefined8 *)(*uStack_28 + 0x38));
  }
  func_0x0001080ec798(uStack_28);
  return;
}



/* Entry: 10811fbfc; end: 10811fd5b;  */

void FUN_10811fbfc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(char *)((long)param_1 + 0x1d5) == '\x01') {
    (**(code **)(*param_1 + 0x80))();
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    puVar1 = (undefined8 *)param_1[6];
    for (puVar2 = (undefined8 *)param_1[5]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_10811fbfc(*puVar2);
    }
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
    *(undefined1 *)((long)param_1 + 0x1d5) = 0;
  }
  return;
}



/* Entry: 10811fd5c; end: 10811fd83;  */

long FUN_10811fd5c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108121668(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10811fd84; end: 10811fe63;  */

long * FUN_10811fd84(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long lStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_68;
  undefined **appuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001081228cc();
  uStack_38 = extraout_x8;
  if ((((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) && (param_1[0xf] != 0)) && (param_1[0x15] != 0)
     ) {
    func_0x000108102774(&lStack_80,param_1);
    if (lStack_78 != 0) {
      do {
        func_0x000108122744();
      } while (extraout_w10 != 0);
    }
    pcStack_68 = FUN_108121e80;
    appuStack_60[0] = &PTR_FUN_110a25538;
    uStack_90 = 0;
    uStack_88 = 0;
    plVar1 = param_1;
    FUN_108120010(param_1,&pcStack_68);
    (*(code *)*appuStack_60[0])(appuStack_60);
    func_0x000108102744(&uStack_90);
    *(long **)((long)param_1 + 0x1dc) = plVar1;
    *(undefined1 *)((long)param_1 + 0x1e4) = 1;
    param_1 = &lStack_80;
    func_0x000108102744();
  }
  func_0x000108122730(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081226e0();
    FUN_108121700();
    func_0x000108122818();
    plVar1 = param_1;
    FUN_108121c58();
    if ((int)plVar1 == 0) {
      plVar1 = (long *)(*param_1 + param_1[3]);
    }
    else {
      plVar1 = (long *)(*param_1 + lStack_b8);
    }
    return plVar1;
  }
  return param_1;
}



/* Entry: 10811fe64; end: 10811fe8b;  */

long FUN_10811fe64(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x0001081226e0();
  FUN_108121700();
  func_0x000108122818();
  plVar1 = param_1;
  FUN_108121c58();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10811fe8c; end: 10811fed7;  */

undefined1  [16] FUN_10811fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001081227b4();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_108121cf8(&uStack_40);
  FUN_108121d2c();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10811fed8; end: 10812000f;  */

void FUN_10811fed8(long param_1)

{
  undefined8 uStack_28;
  
  while (*(long *)(param_1 + 0x78) != 0) {
    uStack_28 = 0;
    func_0x0001081227f8();
    func_0x0001003b1eb0(&uStack_28);
    func_0x000108122714();
    func_0x00010811fcbc(param_1,&uStack_28);
    func_0x0001003a8cb8(uStack_28);
  }
  return;
}



/* Entry: 108120010; end: 10812002b;  */

void FUN_108120010(long param_1)

{
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108120024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x48))(0);
    return;
  }
  return;
}



/* Entry: 10812002c; end: 10812008f;  */

long * FUN_10812002c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x1e4) == '\x01') && (*(long *)(param_1 + 0xa8) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x1dc);
    FUN_108120090();
    uVar3 = *puVar1;
    if (*(char *)(param_1 + 0x1e4) == '\x01') {
      *(undefined1 *)(param_1 + 0x1e4) = 0;
    }
    plVar2 = *(long **)(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000108120080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,uVar3);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 108120090; end: 1081200a7;  */

undefined1  [16] FUN_108120090(uint param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w11;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_58 [8];
  long lStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  if ((*(byte *)(param_3 + 8) & 1) != 0) {
    auVar7._8_8_ = param_4;
    auVar7._0_8_ = param_3;
    return auVar7;
  }
  func_0x0001080da3e4();
  ppuVar2 = &PTR___tlv_bootstrap_11340dc78;
  uStack_48 = param_1;
  uStack_44 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340dc78)();
  lStack_50 = *param_4;
  if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
    do {
      func_0x0001081228ec();
      lStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  do {
    if (lStack_50 == param_3) {
      puVar1 = *ppuVar2;
      for (lVar3 = (long)ppuVar2[1] - (long)puVar1 >> 3; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_10811f6e0(*(undefined8 *)(puVar1 + lVar3 * 8 + -8),&uStack_48);
        uStack_48 = param_1;
        uStack_44 = param_2;
      }
      FUN_1081201ec(ppuVar2);
      uVar5 = CONCAT44(uStack_44,uStack_48) & 0xffffffffffffff00;
      uVar6 = (ulong)uStack_48 & 0xff;
      uVar4 = 1;
      lVar3 = lStack_50;
LAB_108120194:
      func_0x0001078bee50(lVar3);
      auVar8._0_8_ = uVar5 | uVar6;
      auVar8._8_8_ = uVar4;
      return auVar8;
    }
    if (lStack_50 == 0) {
      uVar4 = 0;
      uVar6 = 0;
      uVar5 = 0;
      lVar3 = 0;
      goto LAB_108120194;
    }
    FUN_1081201b4(ppuVar2,&lStack_50);
    func_0x00010812283c(lStack_50);
    func_0x00010812277c();
    func_0x0001078beedc(&lStack_50,auStack_58);
    func_0x00010812289c();
    func_0x00010812284c();
  } while( true );
}



/* Entry: 1081200a8; end: 1081201b3;  */

undefined1  [16] FUN_1081200a8(uint param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w11;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [8];
  long lStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340dc78;
  uStack_38 = param_1;
  uStack_34 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340dc78)();
  lStack_40 = *param_4;
  if ((lStack_40 != 0) && (*(long *)(lStack_40 + 0x10) != 0)) {
    do {
      func_0x0001081228ec();
      lStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  do {
    if (lStack_40 == param_3) {
      puVar1 = *ppuVar2;
      for (lVar3 = (long)ppuVar2[1] - (long)puVar1 >> 3; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_10811f6e0(*(undefined8 *)(puVar1 + lVar3 * 8 + -8),&uStack_38);
        uStack_38 = param_1;
        uStack_34 = param_2;
      }
      FUN_1081201ec(ppuVar2);
      uVar5 = CONCAT44(uStack_34,uStack_38) & 0xffffffffffffff00;
      uVar6 = (ulong)uStack_38 & 0xff;
      uVar4 = 1;
      lVar3 = lStack_40;
LAB_108120194:
      func_0x0001078bee50(lVar3);
      auVar7._0_8_ = uVar5 | uVar6;
      auVar7._8_8_ = uVar4;
      return auVar7;
    }
    if (lStack_40 == 0) {
      uVar4 = 0;
      uVar6 = 0;
      uVar5 = 0;
      lVar3 = 0;
      goto LAB_108120194;
    }
    FUN_1081201b4(ppuVar2,&lStack_40);
    func_0x00010812283c(lStack_40);
    func_0x00010812277c();
    func_0x0001078beedc(&lStack_40,auStack_48);
    func_0x00010812289c();
    func_0x00010812284c();
  } while( true );
}



/* Entry: 1081201b4; end: 1081201eb;  */

void FUN_1081201b4(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_1081212a4();
  }
  else {
    FUN_1081212d0();
  }
  func_0x0001081229bc();
  return;
}



/* Entry: 1081201ec; end: 108120227;  */

void FUN_1081201ec(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001078bee2c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108120228; end: 1081202ab;  */

ulong FUN_108120228(float param_1,float param_2,long param_3)

{
  float *unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  if (*(char *)(param_3 + 0x1d6) == '\x01') {
    func_0x0001081201f4();
    return CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) *
                    (float)((ulong)*(undefined8 *)(unaff_x20 + 0xfc) >> 0x20) + param_2,
                    (float)*(undefined8 *)unaff_x19 * (float)*(undefined8 *)(unaff_x20 + 0xfc) +
                    param_1);
  }
  return (ulong)(uint)(*(float *)(unaff_x20 + 0xc0) + *(float *)(unaff_x20 + 0xf4) + *unaff_x19);
}



/* Entry: 1081202ac; end: 108120333;  */

ulong FUN_1081202ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_s3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) -
                   (float)((ulong)uVar3 >> 0x20)) + 0.0,
                   ((float)*(undefined8 *)(param_1 + 200) - (float)uVar3) + 0.0);
  uStack_20 = 0;
  uStack_18 = uVar2;
  FUN_1080e5de0();
  lStack_28 = param_1;
  while (lStack_28 != 0) {
    FUN_108120228();
    uStack_20 = CONCAT44((int)uVar2,(int)uVar1);
    uStack_18 = CONCAT44(in_s3,(int)uVar3);
    func_0x000108122668(lStack_28);
    FUN_10811f5d8(&uStack_30,&uStack_38);
    func_0x0001078beedc(&lStack_28,&uStack_30);
    func_0x0001078bee50(uStack_30);
    func_0x0001080ec798(uStack_38);
  }
  return uStack_20 & 0xffffffff;
}



/* Entry: 108120334; end: 1081203e7;  */

void FUN_108120334(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_4 + 0x150);
  if (param_5 == 0) {
    if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x0001081203e8(param_4 + 0x150);
      if (((*(byte *)(param_4 + 0x1d7) & 1) == 0) && ((*(byte *)(param_4 + 0x1d0) & 1) == 0)) {
        *(undefined1 *)(param_4 + 0x1d0) = 1;
        func_0x0001081148f4(param_4 + 0x180);
        func_0x0001081148f4(param_4 + 0x170);
        func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
  }
  else {
    if (lVar1 == 0) {
      func_0x00010812042c(&uStack_48);
      func_0x000108120454(param_4 + 0x150,&uStack_48);
      FUN_1081215dc(uStack_48);
      lVar1 = *(long *)(param_4 + 0x150);
    }
    *(undefined4 *)(lVar1 + 0x10) = param_1;
    *(undefined4 *)(lVar1 + 0x14) = param_2;
    FUN_10810c614(param_3);
    FUN_10810c688(*(undefined8 *)(param_4 + 0x150),param_5);
  }
  return;
}



/* Entry: 1081203e8; end: 10812047b;  */

void FUN_1081203e8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  
  func_0x0001081227d8();
  if (param_1 != param_2) {
    if (param_2 != 0) {
      plVar1 = (long *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *unaff_x19 = param_2;
    FUN_1081215dc();
  }
  return;
}



/* Entry: 10812047c; end: 108120483;  */

undefined4 FUN_10812047c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}



/* Entry: 108120484; end: 1081204b7;  */

void FUN_108120484(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0xf4) != param_1) {
    *(float *)(param_2 + 0xf4) = param_1;
    func_0x000108122624();
    func_0x00010812280c();
  }
  return;
}



/* Entry: 1081204b8; end: 1081204bf;  */

undefined4 FUN_1081204b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



/* Entry: 1081204c0; end: 1081204f3;  */

void FUN_1081204c0(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0xf8) != param_1) {
    *(float *)(param_2 + 0xf8) = param_1;
    func_0x000108122624();
    func_0x00010812280c();
  }
  return;
}



/* Entry: 1081204f4; end: 1081204fb;  */

undefined4 FUN_1081204f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xfc);
}



/* Entry: 1081204fc; end: 10812055f;  */

void FUN_1081204fc(float param_1,long *param_2)

{
  bool bVar1;
  
  if (*(float *)((long)param_2 + 0xfc) != param_1) {
    *(float *)((long)param_2 + 0xfc) = param_1;
    if (param_1 == 1.0) {
      bVar1 = *(float *)(param_2 + 0x20) != 1.0;
    }
    else {
      bVar1 = true;
    }
    *(bool *)((long)param_2 + 0x1d6) = bVar1;
    (**(code **)(*param_2 + 0x28))(param_2);
    func_0x00010812280c();
  }
  return;
}



/* Entry: 108120560; end: 108120567;  */

undefined4 FUN_108120560(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



/* Entry: 108120568; end: 1081205b7;  */

void FUN_108120568(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x100) != param_1) {
    *(float *)(param_2 + 0x100) = param_1;
    *(bool *)(param_2 + 0x1d6) = *(float *)(param_2 + 0xfc) != 1.0 || param_1 != 1.0;
    func_0x000108122624();
    func_0x00010812280c();
  }
  return;
}


