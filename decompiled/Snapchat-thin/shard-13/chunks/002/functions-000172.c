/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2d1eb8; end: 10a2d2037;  */

bool FUN_10a2d1eb8(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar8 = *(float *)(param_1 + 1);
  uVar5 = *(ulong *)(param_2 + 3);
  fVar7 = param_2[5];
  fVar4 = (float)uVar5;
  fVar15 = (float)*param_1;
  fVar6 = (float)(uVar5 >> 0x20);
  fVar11 = (float)((ulong)*param_1 >> 0x20);
  fVar3 = fVar15 * fVar4 + fVar11 * fVar6 + fVar8 * fVar7;
  if (fVar3 != 0.0) {
    fVar14 = *(float *)((long)param_1 + 0xc);
    fVar13 = *param_2 - fVar14 * fVar15;
    fVar12 = param_2[1] - fVar14 * fVar11;
    fVar10 = param_2[2] - fVar8 * fVar14;
    fVar9 = -fVar8;
    fVar14 = -fVar11;
    fVar1 = -fVar15;
    if (0.0 <= fVar8 * fVar10 + fVar13 * fVar15 + fVar12 * fVar11) {
      fVar9 = fVar8;
      fVar14 = fVar11;
      fVar1 = fVar15;
    }
    fVar15 = fVar7 * fVar9 + fVar1 * fVar4 + fVar14 * fVar6;
    fVar8 = -fVar7;
    if (fVar15 <= 0.0) {
      fVar8 = fVar7;
    }
    fVar11 = fVar10 * fVar9 + fVar13 * fVar1 + fVar12 * fVar14;
    fVar7 = param_2[2];
    *param_3 = *(undefined8 *)param_2;
    *(float *)(param_3 + 1) = fVar7;
    uVar2 = (uint)(0.0 < fVar15);
    uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(-fVar6,-fVar4)) &
                    CONCAT44(-(uint)((int)(uVar2 << 0x1f) < 0),-(uint)((int)(uVar2 << 0x1f) < 0));
    fVar6 = (float)(uVar5 >> 0x20);
    fVar4 = (float)uVar5;
    fVar7 = SQRT(fVar9 * fVar11 * fVar9 * fVar11 +
                 fVar1 * fVar11 * fVar1 * fVar11 + fVar14 * fVar11 * fVar14 * fVar11) /
            ((-fVar14 * fVar6 - fVar1 * fVar4) - fVar9 * fVar8);
    *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar6 * fVar7,
                        (float)*param_3 + fVar4 * fVar7);
    *(float *)(param_3 + 1) = *(float *)(param_3 + 1) + fVar8 * fVar7;
  }
  return fVar3 != 0.0;
}



/* Entry: 10a2d2038; end: 10a2d20af;  */

void FUN_10a2d2038(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_10a2d145c();
  lVar5 = param_2[1];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = uVar7;
  *(undefined8 *)(param_1 + 0x378) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar5);
    return;
  }
  return;
}



/* Entry: 10a2d20b0; end: 10a2d28bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a2d2554) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2524) */
/* WARNING: Removing unreachable block (ram,0x00010a2d24f4) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2504) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2534) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2660) */

void FUN_10a2d20b0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 **ppuStack_2d8;
  ulong uStack_2d0;
  byte bStack_2c1;
  undefined8 **ppuStack_2c0;
  ulong uStack_2b8;
  byte bStack_2a9;
  undefined8 **ppuStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  undefined8 **ppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 **ppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 **ppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 **appuStack_248 [2];
  char cStack_231;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  pcVar1 = "false";
  if ((*(byte *)(param_2 + 500) & 1) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_70,pcVar1);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_248,uVar2 + 0x16,&ppuStack_260);
  pppuVar5 = (undefined8 ***)appuStack_248[0];
  if (-1 < cStack_231) {
    pppuVar5 = appuStack_248;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar5,pppuVar3,uVar2);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar2);
  puVar7[1] = 0x77536c6175747865;
  *puVar7 = 0x746e6f437369202c;
  *(undefined8 *)((long)puVar7 + 0xe) = 0x203a6c6576697753;
  *(undefined1 *)((long)puVar7 + 0x16) = 0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  pppuVar5 = appuStack_248;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuStack_70,uStack_68);
  puStack_228 = pppuVar5[1];
  puStack_230 = *pppuVar5;
  puStack_220 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_230;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f64be4a,0xd);
  uStack_208 = ppuVar6[1];
  uStack_210 = *ppuVar6;
  lStack_200 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_260,*(undefined4 *)(param_2 + 0x1f8));
  pppuVar5 = (undefined8 ***)ppuStack_260;
  if (-1 < (char)bStack_249) {
    uStack_258 = (ulong)bStack_249;
    pppuVar5 = &ppuStack_260;
  }
  puVar7 = &uStack_210;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_258);
  uStack_1e8 = puVar7[1];
  uStack_1f0 = *puVar7;
  lStack_1e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be58,0xd);
  uStack_1c8 = puVar7[1];
  uStack_1d0 = *puVar7;
  lStack_1c0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_278,*(undefined4 *)(param_2 + 0x1fc));
  pppuVar5 = (undefined8 ***)ppuStack_278;
  if (-1 < (char)bStack_261) {
    uStack_270 = (ulong)bStack_261;
    pppuVar5 = &ppuStack_278;
  }
  puVar7 = &uStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_270);
  uStack_1a8 = puVar7[1];
  uStack_1b0 = *puVar7;
  lStack_1a0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be66,0xc);
  uStack_188 = puVar7[1];
  uStack_190 = *puVar7;
  lStack_180 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_290,*(undefined4 *)(param_2 + 0x200));
  pppuVar5 = (undefined8 ***)ppuStack_290;
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
    pppuVar5 = &ppuStack_290;
  }
  puVar7 = &uStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_288);
  uStack_168 = puVar7[1];
  uStack_170 = *puVar7;
  lStack_160 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be73,0xc);
  uStack_148 = puVar7[1];
  uStack_150 = *puVar7;
  lStack_140 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2a8,*(undefined4 *)(param_2 + 0x204));
  pppuVar5 = (undefined8 ***)ppuStack_2a8;
  if (-1 < (char)bStack_291) {
    uStack_2a0 = (ulong)bStack_291;
    pppuVar5 = &ppuStack_2a8;
  }
  puVar7 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2a0);
  uStack_128 = puVar7[1];
  uStack_130 = *puVar7;
  lStack_120 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be80,0xf);
  uStack_108 = puVar7[1];
  uStack_110 = *puVar7;
  uStack_100 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2c0,*(undefined4 *)(param_2 + 0x208));
  pppuVar5 = (undefined8 ***)ppuStack_2c0;
  if (-1 < (char)bStack_2a9) {
    uStack_2b8 = (ulong)bStack_2a9;
    pppuVar5 = &ppuStack_2c0;
  }
  puVar7 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2b8);
  uStack_e8 = puVar7[1];
  uStack_f0 = *puVar7;
  uStack_e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be90,0xf);
  uStack_c8 = puVar7[1];
  uStack_d0 = *puVar7;
  uStack_c0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2d8,*(undefined4 *)(param_2 + 0x20c));
  pppuVar5 = (undefined8 ***)ppuStack_2d8;
  if (-1 < (char)bStack_2c1) {
    uStack_2d0 = (ulong)bStack_2c1;
    pppuVar5 = &ppuStack_2d8;
  }
  puVar7 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2d0);
  uStack_a8 = puVar7[1];
  uStack_b0 = *puVar7;
  uStack_a0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64bea0,0x11);
  uStack_88 = puVar7[1];
  uStack_90 = *puVar7;
  uStack_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&puStack_2f0,*(undefined4 *)(param_2 + 0x210));
  ppuVar4 = (undefined1 **)puStack_2f0;
  if (-1 < (char)bStack_2d9) {
    uStack_2e8 = (ulong)bStack_2d9;
    ppuVar4 = &puStack_2f0;
  }
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuVar4,uStack_2e8);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(puStack_2f0);
  }
  if ((char)bStack_2c1 < '\0') {
    __ZdlPv(ppuStack_2d8);
  }
  if ((char)bStack_2a9 < '\0') {
    __ZdlPv(ppuStack_2c0);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if ((char)bStack_291 < '\0') {
    __ZdlPv(ppuStack_2a8);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppuStack_290);
  }
  if (lStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  if (lStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  if ((char)bStack_261 < '\0') {
    __ZdlPv(ppuStack_278);
  }
  if (lStack_1c0 < 0) {
    __ZdlPv(uStack_1d0);
  }
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  if ((char)bStack_249 < '\0') {
    __ZdlPv(ppuStack_260);
  }
  if (lStack_200 < 0) {
    __ZdlPv(uStack_210);
  }
  if ((long)puStack_220 < 0) {
    __ZdlPv(puStack_230);
  }
  if (cStack_231 < '\0') {
    __ZdlPv(appuStack_248[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2d28c0; end: 10a2d29c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a2d2554) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2524) */
/* WARNING: Removing unreachable block (ram,0x00010a2d24f4) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2504) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2534) */
/* WARNING: Removing unreachable block (ram,0x00010a2d2660) */

void FUN_10a2d28c0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 **ppuStack_2d8;
  ulong uStack_2d0;
  byte bStack_2c1;
  undefined8 **ppuStack_2c0;
  ulong uStack_2b8;
  byte bStack_2a9;
  undefined8 **ppuStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  undefined8 **ppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 **ppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 **ppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 **appuStack_248 [2];
  char cStack_231;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  pcVar1 = "false";
  if ((*(byte *)(param_2 + 0x1e4) & 1) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_70,pcVar1);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_248,uVar2 + 0x16,&ppuStack_260);
  pppuVar5 = (undefined8 ***)appuStack_248[0];
  if (-1 < cStack_231) {
    pppuVar5 = appuStack_248;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar5,pppuVar3,uVar2);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar2);
  puVar7[1] = 0x77536c6175747865;
  *puVar7 = 0x746e6f437369202c;
  *(undefined8 *)((long)puVar7 + 0xe) = 0x203a6c6576697753;
  *(undefined1 *)((long)puVar7 + 0x16) = 0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  pppuVar5 = appuStack_248;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuStack_70,uStack_68);
  puStack_228 = pppuVar5[1];
  puStack_230 = *pppuVar5;
  puStack_220 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_230;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f64be4a,0xd);
  uStack_208 = ppuVar6[1];
  uStack_210 = *ppuVar6;
  lStack_200 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_260,*(undefined4 *)(param_2 + 0x1e8));
  pppuVar5 = (undefined8 ***)ppuStack_260;
  if (-1 < (char)bStack_249) {
    uStack_258 = (ulong)bStack_249;
    pppuVar5 = &ppuStack_260;
  }
  puVar7 = &uStack_210;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_258);
  uStack_1e8 = puVar7[1];
  uStack_1f0 = *puVar7;
  lStack_1e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be58,0xd);
  uStack_1c8 = puVar7[1];
  uStack_1d0 = *puVar7;
  lStack_1c0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_278,*(undefined4 *)(param_2 + 0x1ec));
  pppuVar5 = (undefined8 ***)ppuStack_278;
  if (-1 < (char)bStack_261) {
    uStack_270 = (ulong)bStack_261;
    pppuVar5 = &ppuStack_278;
  }
  puVar7 = &uStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_270);
  uStack_1a8 = puVar7[1];
  uStack_1b0 = *puVar7;
  lStack_1a0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be66,0xc);
  uStack_188 = puVar7[1];
  uStack_190 = *puVar7;
  lStack_180 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_290,*(undefined4 *)(param_2 + 0x1f0));
  pppuVar5 = (undefined8 ***)ppuStack_290;
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
    pppuVar5 = &ppuStack_290;
  }
  puVar7 = &uStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_288);
  uStack_168 = puVar7[1];
  uStack_170 = *puVar7;
  lStack_160 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be73,0xc);
  uStack_148 = puVar7[1];
  uStack_150 = *puVar7;
  lStack_140 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2a8,*(undefined4 *)(param_2 + 500));
  pppuVar5 = (undefined8 ***)ppuStack_2a8;
  if (-1 < (char)bStack_291) {
    uStack_2a0 = (ulong)bStack_291;
    pppuVar5 = &ppuStack_2a8;
  }
  puVar7 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2a0);
  uStack_128 = puVar7[1];
  uStack_130 = *puVar7;
  lStack_120 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be80,0xf);
  uStack_108 = puVar7[1];
  uStack_110 = *puVar7;
  uStack_100 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2c0,*(undefined4 *)(param_2 + 0x1f8));
  pppuVar5 = (undefined8 ***)ppuStack_2c0;
  if (-1 < (char)bStack_2a9) {
    uStack_2b8 = (ulong)bStack_2a9;
    pppuVar5 = &ppuStack_2c0;
  }
  puVar7 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2b8);
  uStack_e8 = puVar7[1];
  uStack_f0 = *puVar7;
  uStack_e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64be90,0xf);
  uStack_c8 = puVar7[1];
  uStack_d0 = *puVar7;
  uStack_c0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2d8,*(undefined4 *)(param_2 + 0x1fc));
  pppuVar5 = (undefined8 ***)ppuStack_2d8;
  if (-1 < (char)bStack_2c1) {
    uStack_2d0 = (ulong)bStack_2c1;
    pppuVar5 = &ppuStack_2d8;
  }
  puVar7 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_2d0);
  uStack_a8 = puVar7[1];
  uStack_b0 = *puVar7;
  uStack_a0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f64bea0,0x11);
  uStack_88 = puVar7[1];
  uStack_90 = *puVar7;
  uStack_80 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&puStack_2f0,*(undefined4 *)(param_2 + 0x200));
  ppuVar4 = (undefined1 **)puStack_2f0;
  if (-1 < (char)bStack_2d9) {
    uStack_2e8 = (ulong)bStack_2d9;
    ppuVar4 = &puStack_2f0;
  }
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuVar4,uStack_2e8);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(puStack_2f0);
  }
  if ((char)bStack_2c1 < '\0') {
    __ZdlPv(ppuStack_2d8);
  }
  if ((char)bStack_2a9 < '\0') {
    __ZdlPv(ppuStack_2c0);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if ((char)bStack_291 < '\0') {
    __ZdlPv(ppuStack_2a8);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(ppuStack_290);
  }
  if (lStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  if (lStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  if ((char)bStack_261 < '\0') {
    __ZdlPv(ppuStack_278);
  }
  if (lStack_1c0 < 0) {
    __ZdlPv(uStack_1d0);
  }
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  if ((char)bStack_249 < '\0') {
    __ZdlPv(ppuStack_260);
  }
  if (lStack_200 < 0) {
    __ZdlPv(uStack_210);
  }
  if ((long)puStack_220 < 0) {
    __ZdlPv(puStack_230);
  }
  if (cStack_231 < '\0') {
    __ZdlPv(appuStack_248[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2d29c4; end: 10a2d2a2b;  */

bool FUN_10a2d29c4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf64c73f;
    _memcmp(&UNK_10f64c73f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a2d2a2c; end: 10a2d2a7b;  */

bool FUN_10a2d2a2c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf64c73f;
    _memcmp(&UNK_10f64c73f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a2d2a7c; end: 10a2d2e13;  */

void FUN_10a2d2a7c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c73f,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc02a8;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc02a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d2df4;
    FUN_10a054dac(param_1,&UNK_10f64beb2,FUN_10a2f25c0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d2df4;
    FUN_10a054dac(param_1,&UNK_10f64bebd,FUN_10a2f26e0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bece,FUN_10a2f2798,FUN_10a2f2854);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64beda,FUN_10a2f297c,FUN_10a2f2a34);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bee1,FUN_10a2f301c,FUN_10a2f30d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bef8,FUN_10a2f319c,FUN_10a2f3278);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bf06,FUN_10a2f343c,FUN_10a2f3518);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c73f,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2d2df4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d2df8);
  (*pcVar6)();
}



/* Entry: 10a2d2e14; end: 10a2d2efb;  */

undefined8 * FUN_10a2d2e14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x4c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x4f) = 0x100;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbd688,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110bbd698);
  *param_1 = &PTR_FUN_110bbd350;
  param_1[2] = &PTR_DAT_110bbd480;
  param_1[7] = &PTR_DAT_110bbd4d8;
  param_1[0xd] = &PTR_DAT_110bbd4f8;
  param_1[0x4c] = &PTR_DAT_110bbd648;
  param_1[0x16] = &PTR_DAT_110bbd568;
  param_1[0x17] = &PTR_DAT_110bbd598;
  param_1[0x3e] = &PTR_DAT_110bbd5d0;
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((long)param_1 + 0x21a) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  return param_1;
}



/* Entry: 10a2d2efc; end: 10a2d2f9f;  */

void FUN_10a2d2efc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbd350;
  param_1[2] = &PTR_DAT_110bbd480;
  param_1[7] = &PTR_DAT_110bbd4d8;
  param_1[0xd] = &PTR_DAT_110bbd4f8;
  param_1[0x4c] = &PTR_DAT_110bbd648;
  param_1[0x16] = &PTR_DAT_110bbd568;
  param_1[0x17] = &PTR_DAT_110bbd598;
  param_1[0x3e] = &PTR_DAT_110bbd5d0;
  func_0x00010a042b54(param_1 + 0x4a);
  func_0x00010a042b54(param_1 + 0x48);
  FUN_10a2f35d0(param_1 + 0x45);
  param_1[0x3e] = &PTR_DAT_110bc01f8;
  param_1[0x4c] = &PTR_FUN_110bc0270;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc0078;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4c] = &PTR_DAT_110bc01a8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d2fa0; end: 10a2d2fe3;  */

void FUN_10a2d2fa0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbd350;
  param_1[2] = &PTR_DAT_110bbd480;
  param_1[7] = &PTR_DAT_110bbd4d8;
  param_1[0xd] = &PTR_DAT_110bbd4f8;
  param_1[0x4c] = &PTR_DAT_110bbd648;
  param_1[0x16] = &PTR_DAT_110bbd568;
  param_1[0x17] = &PTR_DAT_110bbd598;
  param_1[0x3e] = &PTR_DAT_110bbd5d0;
  func_0x00010a042b54(param_1 + 0x4a);
  func_0x00010a042b54(param_1 + 0x48);
  FUN_10a2f35d0(param_1 + 0x45);
  param_1[0x3e] = &PTR_DAT_110bc01f8;
  param_1[0x4c] = &PTR_FUN_110bc0270;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc0078;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4c] = &PTR_DAT_110bc01a8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d2fe4; end: 10a2d3087;  */

void FUN_10a2d2fe4(void)

{
  FUN_10a2d2efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2d3088; end: 10a2d314f;  */

void FUN_10a2d3088(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a2d2efc((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2d3150; end: 10a2d3197;  */

/* WARNING: Possible PIC construction at 0x00010a2d3124: Changing call to branch */

ulong FUN_10a2d3150(ulong param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  long unaff_x19;
  float *pfVar8;
  long lVar9;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float afStack_60 [16];
  
  pfVar8 = afStack_60;
  puVar1 = &stack0xfffffffffffffff0;
  if (((*(long *)(param_2 + 0x1c0) != 0) &&
      (*(long *)(*(long *)(*(long *)(param_2 + 0x108) + 0x8c0) + 0x18) != 0)) &&
     (plVar3 = *(long **)(*(long *)(param_2 + 0x1c0) + 0xe0), plVar3 != (long *)0x0)) {
    pfVar6 = (float *)(ulong)*(uint *)(param_2 + 0x1b8);
    (**(code **)(*plVar3 + 0x80))();
    if (plVar3 != (long *)0x0) {
      lVar9 = *(long *)(param_2 + 0x110);
      if (*(char *)(param_2 + 0x1b2) == '\x01') {
        func_0x0001094f5708(afStack_60,plVar3 + 4);
        unaff_x30 = 0x10a2d3128;
        register0x00000008 = (BADSPACEBASE *)afStack_60;
        unaff_x19 = param_2 + -0x68;
        unaff_x20 = lVar9;
        unaff_x29 = puVar1;
      }
      else {
        pfVar8 = (float *)(plVar3 + 4);
      }
      if (((((*(byte *)(lVar9 + 0x29) >> 1 & 1) != 0) && (*(float *)(lVar9 + 100) == *pfVar8)) &&
          ((*(float *)(lVar9 + 0x68) == pfVar8[1] &&
           ((*(float *)(lVar9 + 0x6c) == pfVar8[2] && (*(float *)(lVar9 + 0x70) == pfVar8[3]))))))
         && (((*(float *)(lVar9 + 0x74) == pfVar8[4] &&
              ((((((*(float *)(lVar9 + 0x78) == pfVar8[5] && (*(float *)(lVar9 + 0x7c) == pfVar8[6])
                   ) && (*(float *)(lVar9 + 0x80) == pfVar8[7])) &&
                 ((*(float *)(lVar9 + 0x84) == pfVar8[8] && (*(float *)(lVar9 + 0x88) == pfVar8[9]))
                 )) && ((*(float *)(lVar9 + 0x8c) == pfVar8[10] &&
                        ((*(float *)(lVar9 + 0x90) == pfVar8[0xb] &&
                         (*(float *)(lVar9 + 0x94) == pfVar8[0xc])))))) &&
               (*(float *)(lVar9 + 0x98) == pfVar8[0xd])))) &&
             ((*(float *)(lVar9 + 0x9c) == pfVar8[0xe] && (*(float *)(lVar9 + 0xa0) == pfVar8[0xf]))
             )))) {
        return (ulong)(uint)*(float *)(lVar9 + 0xa0);
      }
      lVar7 = *(long *)(pfVar8 + 2);
      uVar11 = *(ulong *)pfVar8;
      lVar4 = *(long *)(pfVar8 + 6);
      lVar10 = *(long *)(pfVar8 + 4);
      lVar13 = *(long *)(pfVar8 + 10);
      lVar12 = *(long *)(pfVar8 + 8);
      lVar14 = *(long *)(pfVar8 + 0xc);
      *(long *)(lVar9 + 0x9c) = *(long *)(pfVar8 + 0xe);
      *(long *)(lVar9 + 0x94) = lVar14;
      *(long *)(lVar9 + 0x8c) = lVar13;
      *(long *)(lVar9 + 0x84) = lVar12;
      *(long *)(lVar9 + 0x7c) = lVar4;
      *(long *)(lVar9 + 0x74) = lVar10;
      *(long *)(lVar9 + 0x6c) = lVar7;
      *(ulong *)(lVar9 + 100) = uVar11;
      *(byte *)(lVar9 + 0x29) = *(byte *)(lVar9 + 0x29) | 2;
      *(byte *)(lVar9 + 0x2a) = *(byte *)(lVar9 + 0x2a) | 0x7f;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar7 = *(long *)(lVar9 + 0x30);
      if (lVar7 != 0) {
        for (lVar10 = *(long *)(lVar7 + 0x198); lVar10 != lVar7 + 400;
            lVar10 = *(long *)(lVar10 + 8)) {
          lVar4 = *(long *)(*(long *)(lVar10 + 0x10) + 0x140);
          bVar2 = *(byte *)(lVar4 + 0x2a);
          if (((bVar2 ^ 0xff) & 0x7c) != 0) {
            *(byte *)(lVar4 + 0x2a) = bVar2 | 0x7c;
            FUN_10a3e8248();
          }
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pfVar8 = *(float **)(lVar9 + 0x38);
      (**(code **)(*(long *)pfVar8 + 0x20))(pfVar8);
      plVar3 = *(long **)(lVar9 + 0x38);
      *(code **)((long)register0x00000008 + -0x78) = FUN_10a4030bc;
      *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110bd2fb8;
      *(long *)((long)register0x00000008 + -0x68) = lVar9;
      iVar5 = (int)(undefined1 *)((long)register0x00000008 + -0x78);
      (**(code **)(*plVar3 + 0x40))();
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
                ((undefined1 *)((long)register0x00000008 + -0x70));
      (**(code **)(*(long *)pfVar8 + 0x28))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x38))
      {
        ___stack_chk_fail();
        if (iVar5 == 0) {
          __Unwind_Resume(pfVar8);
        }
        func_0x000104bd46a0();
        if ((((!NAN(*pfVar8)) && (!NAN(pfVar8[1]))) && (ABS(pfVar8[1]) != INFINITY)) &&
           (((ABS(*pfVar8) != INFINITY && (!NAN(pfVar8[2]))) && (ABS(pfVar8[2]) != INFINITY)))) {
          pfVar6 = pfVar8;
        }
        return (ulong)(uint)*pfVar6;
      }
      return uVar11;
    }
  }
  return param_1;
}



/* Entry: 10a2d3198; end: 10a2d32c7;  */

void FUN_10a2d3198(long param_1,undefined8 param_2)

{
  long *plVar1;
  long **pplVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  if ((*(long *)(param_1 + 0x228) == 0) ||
     (plVar6 = *(long **)(*(long *)(param_1 + 0x228) + 0xe0), plVar6 == (long *)0x0)) {
    *(undefined1 *)(param_1 + 0x218) = 0;
LAB_10a2d3250:
    *(undefined1 *)(param_1 + 0x219) = 0;
    iVar13 = *(int *)(param_1 + 0x21c);
    *(undefined4 *)(param_1 + 0x21c) = 2;
    if (iVar13 == 2) goto LAB_10a2d3298;
LAB_10a2d3268:
    if (iVar13 == 0) goto LAB_10a2d3298;
    puVar7 = *(undefined8 **)(param_1 + 0x250);
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6,param_2,*(undefined4 *)(param_1 + 0x220));
    *(bool *)(param_1 + 0x218) = plVar6 != (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_10a2d3250;
    plVar6 = *(long **)(*(long *)(param_1 + 0x228) + 0xe0);
    (**(code **)(*plVar6 + 0x80))(plVar6,param_2,*(undefined4 *)(param_1 + 0x220));
    *(undefined1 *)(param_1 + 0x219) = *(undefined1 *)((long)plVar6 + 0x1c);
    iVar12 = 1;
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
      iVar12 = 2;
    }
    iVar13 = *(int *)(param_1 + 0x21c);
    *(int *)(param_1 + 0x21c) = iVar12;
    if (iVar13 == iVar12) goto LAB_10a2d3298;
    if ((*(byte *)(param_1 + 0x218) & 1) == 0) goto LAB_10a2d3268;
    FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x8d8),5);
    puVar7 = *(undefined8 **)(param_1 + 0x240);
  }
  if (puVar7 != (undefined8 *)0x0) {
    if (*(char *)(puVar7 + 8) == '\x01') {
      (*(code *)*puVar7)();
    }
    else if (*(char *)(puVar7 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
LAB_10a2d3298:
  lVar8 = *(long *)(param_1 + 0x168);
  if (*(char *)(param_1 + 0x238) == '\x01') {
    uVar10 = (ushort)*(byte *)(param_1 + 0x218);
  }
  else {
    uVar10 = 1;
  }
  uVar11 = *(ushort *)(lVar8 + 0x118);
  if (((uVar10 & 1) == (ushort)((uVar11 & 1) == 0)) ||
     (uVar10 = uVar10 & 1 ^ 1, *(ushort *)(lVar8 + 0x118) = uVar11 & 0xfffe | uVar10,
     ((uVar11 & 0x13) == 0) == ((uVar11 & 0x12) == 0 && uVar10 == 0))) {
    return;
  }
  uVar10 = *(ushort *)(lVar8 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(lVar8 + 0x120) + 0xa20) + 0x18)) {
    bVar5 = (uVar10 & 0x13) == 0;
    lVar15 = 0x228;
    if (!bVar5) {
      lVar15 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar8 + lVar15));
    if (bVar5 != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_10a3faba8(lVar8,&plStack_80);
  plVar6 = plStack_78;
  if (plStack_80 != plStack_78) {
    uVar11 = 0;
    plVar16 = plStack_80;
    if ((uVar10 & 0x13) != 0) {
      uVar11 = 4;
    }
    do {
      plVar9 = (long *)plVar16[1];
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
        lVar15 = *plVar16;
        plVar1 = plVar9 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        if ((lVar15 != 0) && (uVar3 = *(ushort *)(lVar15 + 0x180), (uVar3 >> 4 & 1) == 0)) {
          if ((((uVar10 & 0x13) == 0) != ((uVar3 & 4) == 0)) &&
             (*(ushort *)(lVar15 + 0x180) = uVar3 & 0xffeb | uVar11,
             ((uVar3 & 7) == 0) != ((uVar3 & 3) == 0 && uVar11 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar15);
            }
            else {
              FUN_10a3c7718(lVar15);
            }
          }
          if (((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar6);
  }
  if (*(int *)(*(long *)(*(long *)(lVar8 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar15 = 0x228;
    if ((uVar10 & 0x13) != 0) {
      lVar15 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar8 + lVar15));
  }
  FUN_10a3e45e0(&pplStack_98,lVar8);
  for (pplVar2 = pplStack_98; pplVar2 != pplStack_90; pplVar2 = pplVar2 + 2) {
    plVar6 = pplVar2[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      plVar9 = *pplVar2;
      plVar16 = plVar6 + 1;
      do {
        lVar15 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (((plVar9 != (long *)0x0) && ((*(ushort *)(plVar9 + 0x23) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(plVar9,(uVar10 & 0x13) == 0),
         ((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0))) break;
    }
  }
  ppplStack_68 = &pplStack_98;
  func_0x00010a2e3118(&ppplStack_68);
LAB_10a3e44d0:
  pplStack_98 = &plStack_80;
  FUN_10a0d80a4(&pplStack_98);
  return;
}



/* Entry: 10a2d32c8; end: 10a2d32cf;  */

void FUN_10a2d32c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long **pplVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0xe0), plVar6 == (long *)0x0)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
LAB_10a2d3250:
    *(undefined1 *)(param_1 + 0x29) = 0;
    iVar13 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = 2;
    if (iVar13 == 2) goto LAB_10a2d3298;
LAB_10a2d3268:
    if (iVar13 == 0) goto LAB_10a2d3298;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6,param_2,*(undefined4 *)(param_1 + 0x30));
    *(bool *)(param_1 + 0x28) = plVar6 != (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_10a2d3250;
    plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0xe0);
    (**(code **)(*plVar6 + 0x80))(plVar6,param_2,*(undefined4 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)((long)plVar6 + 0x1c);
    iVar12 = 1;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      iVar12 = 2;
    }
    iVar13 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = iVar12;
    if (iVar13 == iVar12) goto LAB_10a2d3298;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_10a2d3268;
    FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + -0x80) + 0x8d8),5);
    puVar7 = *(undefined8 **)(param_1 + 0x50);
  }
  if (puVar7 != (undefined8 *)0x0) {
    if (*(char *)(puVar7 + 8) == '\x01') {
      (*(code *)*puVar7)();
    }
    else if (*(char *)(puVar7 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
LAB_10a2d3298:
  lVar8 = *(long *)(param_1 + -0x88);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar10 = (ushort)*(byte *)(param_1 + 0x28);
  }
  else {
    uVar10 = 1;
  }
  uVar11 = *(ushort *)(lVar8 + 0x118);
  if (((uVar10 & 1) == (ushort)((uVar11 & 1) == 0)) ||
     (uVar10 = uVar10 & 1 ^ 1, *(ushort *)(lVar8 + 0x118) = uVar11 & 0xfffe | uVar10,
     ((uVar11 & 0x13) == 0) == ((uVar11 & 0x12) == 0 && uVar10 == 0))) {
    return;
  }
  uVar10 = *(ushort *)(lVar8 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(lVar8 + 0x120) + 0xa20) + 0x18)) {
    bVar5 = (uVar10 & 0x13) == 0;
    lVar15 = 0x228;
    if (!bVar5) {
      lVar15 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar8 + lVar15));
    if (bVar5 != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_10a3faba8(lVar8,&plStack_80);
  plVar6 = plStack_78;
  if (plStack_80 != plStack_78) {
    uVar11 = 0;
    plVar16 = plStack_80;
    if ((uVar10 & 0x13) != 0) {
      uVar11 = 4;
    }
    do {
      plVar9 = (long *)plVar16[1];
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
        lVar15 = *plVar16;
        plVar1 = plVar9 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        if ((lVar15 != 0) && (uVar3 = *(ushort *)(lVar15 + 0x180), (uVar3 >> 4 & 1) == 0)) {
          if ((((uVar10 & 0x13) == 0) != ((uVar3 & 4) == 0)) &&
             (*(ushort *)(lVar15 + 0x180) = uVar3 & 0xffeb | uVar11,
             ((uVar3 & 7) == 0) != ((uVar3 & 3) == 0 && uVar11 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar15 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar15);
            }
            else {
              FUN_10a3c7718(lVar15);
            }
          }
          if (((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar6);
  }
  if (*(int *)(*(long *)(*(long *)(lVar8 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar15 = 0x228;
    if ((uVar10 & 0x13) != 0) {
      lVar15 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar8 + lVar15));
  }
  FUN_10a3e45e0(&pplStack_98,lVar8);
  for (pplVar2 = pplStack_98; pplVar2 != pplStack_90; pplVar2 = pplVar2 + 2) {
    plVar6 = pplVar2[1];
    if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)
       ) {
      plVar9 = *pplVar2;
      plVar16 = plVar6 + 1;
      do {
        lVar15 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (((plVar9 != (long *)0x0) && ((*(ushort *)(plVar9 + 0x23) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(plVar9,(uVar10 & 0x13) == 0),
         ((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar8 + 0x118) & 0x13) == 0))) break;
    }
  }
  ppplStack_68 = &pplStack_98;
  func_0x00010a2e3118(&ppplStack_68);
LAB_10a3e44d0:
  pplStack_98 = &plStack_80;
  FUN_10a0d80a4(&pplStack_98);
  return;
}



/* Entry: 10a2d32d0; end: 10a2d3573;  */

void FUN_10a2d32d0(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code **ppcStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_130 = FUN_10a2f3868;
  ppuStack_128 = &PTR_FUN_110bc2e70;
  pcStack_f0 = FUN_10a2f3868;
  ppuStack_e8 = &PTR_FUN_110bc2e70;
  uStack_a0 = CONCAT17(6,(undefined7)uStack_a0);
  uStack_b0 = CONCAT17(uStack_b0._7_1_,0x72656b72616d);
  pcStack_98 = FUN_10a2f3628;
  ppuStack_90 = &PTR_FUN_110bc2e58;
  puVar6 = (undefined8 *)0x58;
  lStack_120 = param_1;
  lStack_e0 = param_1;
  __Znwm();
  *puVar6 = FUN_10a2f3868;
  puVar6[1] = &PTR_FUN_110bc2e70;
  puVar6[2] = param_1;
  puVar6[9] = uStack_a8;
  puVar6[8] = uStack_b0;
  puVar6[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar6;
  func_0x000107c2b054(auStack_148,&UNK_10f64b3ce);
  ppuVar7 = param_2;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bbd6b8,&pcStack_98,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  ppuVar8 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc2780,0);
  *(int *)(param_1 + 0x220) = (int)ppuVar8;
  ppuVar8 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbd6d8,*(undefined1 *)(param_1 + 0x238));
  *(char *)(param_1 + 0x238) = (char)ppuVar8;
  ppuVar8 = &PTR_DAT_110bbd6f8;
  ppuVar9 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbd6f8,*(undefined1 *)(param_1 + 0x21a));
  *(char *)(param_1 + 0x21a) = (char)ppuVar9;
  if (((ulong)ppuVar7 & 1) == 0) {
    pcStack_f0 = (code *)0x0;
    ppuStack_e8 = (undefined **)0x0;
    ppuVar9 = (undefined **)(param_1 + 0x228);
    ppuVar8 = &pcStack_f0;
    FUN_10a2e195c();
    ppuVar10 = ppuStack_e8;
    if (ppuStack_e8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_e8 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = puVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar9 = ppuVar10;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  ppuVar10 = ppuVar9;
  __Unwind_Resume();
  pcStack_158 = FUN_10a2d3574;
  ppcStack_180 = &pcStack_130;
  ppuStack_178 = ppuVar7;
  ppuStack_170 = param_2;
  ppuStack_168 = ppuVar9;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010a3c7928();
  puStack_1a0 = ppuVar10[0x45];
  plStack_198 = (long *)ppuVar10[0x46];
  puStack_190 = &UNK_10f64c77d;
  uStack_188 = 0x11;
  if (plStack_198 != (long *)0x0) {
    plVar2 = plStack_198 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*ppuVar8 + 0x108))(ppuVar8,&PTR_DAT_110bbd6b8,&puStack_1a0,&puStack_190);
  plVar2 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar3 = plStack_198 + 1;
    do {
      lVar12 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  (**(code **)(*ppuVar8 + 0x40))(ppuVar8,&PTR_DAT_110bc2780,*(undefined4 *)(ppuVar10 + 0x44));
  (**(code **)(*ppuVar8 + 0x70))(ppuVar8,&PTR_DAT_110bbd6d8,*(undefined1 *)(ppuVar10 + 0x47));
                    /* WARNING: Could not recover jumptable at 0x00010a2d3680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar8 + 0x70))(ppuVar8,&PTR_DAT_110bbd6f8,*(undefined1 *)((long)ppuVar10 + 0x21a))
  ;
  return;
}



/* Entry: 10a2d3574; end: 10a2d3697;  */

void FUN_10a2d3574(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a3c7928();
  uStack_50 = *(undefined8 *)(param_1 + 0x228);
  plStack_48 = *(long **)(param_1 + 0x230);
  puStack_40 = &UNK_10f64c77d;
  uStack_38 = 0x11;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bbd6b8,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc2780,*(undefined4 *)(param_1 + 0x220));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbd6d8,*(undefined1 *)(param_1 + 0x238));
                    /* WARNING: Could not recover jumptable at 0x00010a2d3680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbd6f8,*(undefined1 *)(param_1 + 0x21a));
  return;
}



/* Entry: 10a2d3698; end: 10a2d3b53;  */

void FUN_10a2d3698(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined **param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined ***pppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (undefined **)0x0) {
    puVar15 = param_2;
    puVar14 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_a8 = *(undefined ***)(param_2 + 0x48);
    puStack_b0 = *(undefined **)(param_2 + 0x40);
    ppuVar10 = param_4 + 0x11;
    func_0x00010a35bf90(ppuVar10,&puStack_b0);
    ppuVar13 = (undefined **)((ulong)&puStack_b0 | 8);
    ppuVar17 = &puStack_b0;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar13 = ppuVar10 + 5;
      ppuVar17 = ppuVar10 + 4;
    }
    puVar14 = *ppuVar13;
    puVar15 = *ppuVar17;
  }
  puVar16 = *(undefined **)(param_2 + 0x170);
  FUN_10a3dd220(puVar16);
  FUN_10a2f38f8(puVar16,puVar15,puVar14);
  ppuVar10 = (undefined **)0x28;
  puStack_100 = puVar16;
  __Znwm();
  ppuVar13 = ppuVar10 + 1;
  *ppuVar13 = (undefined *)0x0;
  *ppuVar10 = (undefined *)&PTR_FUN_110bc2e98;
  ppuVar10[2] = (undefined *)0x0;
  ppuVar10[3] = puVar16;
  ppuVar10[4] = FUN_10a3df8cc;
  ppuStack_f8 = ppuVar10;
  if (puVar16 != (undefined *)0x0) {
    if (*(long *)(puVar16 + 0x30) == 0) {
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar8) {
          *ppuVar13 = *ppuVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      ppuVar17 = ppuVar10 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar8) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(undefined **)(puVar16 + 0x28) = puVar16;
      *(undefined ***)(puVar16 + 0x30) = ppuVar10;
    }
    else {
      if (*(long *)(*(long *)(puVar16 + 0x30) + 8) != -1) goto LAB_10a2d3818;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar8) {
          *ppuVar13 = *ppuVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      ppuVar17 = ppuVar10 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar8) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(undefined **)(puVar16 + 0x28) = puVar16;
      *(undefined ***)(puVar16 + 0x30) = ppuVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar15 = *ppuVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar8) {
        *ppuVar13 = puVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
LAB_10a2d3818:
  puVar15 = puStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_100 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(puVar15 + 0x180) & 0xfffc;
  *(ushort *)(puVar15 + 0x180) = uVar3 | *(ushort *)(puVar15 + 0x180) & 1 | uVar2;
  *(ushort *)(puVar15 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  puStack_b0 = puVar15;
  ppuStack_a8 = ppuStack_f8;
  if (ppuStack_f8 != (undefined **)0x0) {
    ppuVar10 = ppuStack_f8 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar8) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  FUN_10a3c7ce8(param_3,&puStack_b0);
  ppuVar10 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar13 = ppuStack_a8 + 1;
    do {
      puVar15 = *ppuVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar8) {
        *ppuVar13 = puVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  ppuVar10 = *(undefined ***)(param_2 + 0x228);
  puStack_e0 = puStack_100 + 0x228;
  puStack_f0 = (undefined *)0x10a2f3b38;
  ppuStack_e8 = &PTR_FUN_110bc2ed8;
  if (ppuVar10 == (undefined **)0x0) {
    puStack_b0 = (undefined *)0x0;
    FUN_10a2e9e64(&puStack_f0,&puStack_b0);
    goto LAB_10a2d3a30;
  }
  if (param_4 == (undefined **)0x0) {
    FUN_10a2f3aa8(&puStack_b0,ppuVar10);
    FUN_10a2f3a1c(&puStack_f0,&puStack_b0);
    param_4 = ppuStack_a8;
    if (ppuStack_a8 == (undefined **)0x0) goto LAB_10a2d3a30;
    ppuVar13 = ppuStack_a8 + 1;
    do {
      puVar15 = *ppuVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar8) {
        *ppuVar13 = puVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_10a2d3a14:
    param_4 = ppuStack_a8;
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  else {
    puVar15 = ppuVar10[8];
    ppuVar13 = (undefined **)ppuVar10[9];
    if (*(char *)(param_4 + 0x17) == '\x01') {
      puStack_b0 = (undefined *)0x10a2f3b38;
      ppuStack_a8 = &PTR_FUN_110bc2ed8;
      puStack_a0 = puStack_e0;
      FUN_10a069d9c(param_4,puVar15,ppuVar13,&puStack_b0);
    }
    else {
      ppuVar17 = param_4 + 0x11;
      puStack_b0 = puVar15;
      ppuStack_a8 = ppuVar13;
      func_0x00010a35bf90(ppuVar17,&puStack_b0);
      pppuVar11 = &ppuStack_a8;
      ppuVar9 = &puStack_b0;
      if (ppuVar17 != (undefined **)0x0) {
        pppuVar11 = (undefined ***)(ppuVar17 + 5);
        ppuVar9 = ppuVar17 + 4;
      }
      ppuVar17 = *pppuVar11;
      puVar14 = *ppuVar9;
      if (puVar15 == puVar14 && ppuVar13 == ppuVar17) {
        FUN_10a2f3aa8(&puStack_b0,ppuVar10);
        FUN_10a2f3a1c(&puStack_f0,&puStack_b0);
        param_4 = ppuStack_a8;
        if (ppuStack_a8 == (undefined **)0x0) goto LAB_10a2d3a30;
        ppuVar13 = ppuStack_a8 + 1;
        do {
          puVar15 = *ppuVar13;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar8) {
            *ppuVar13 = puVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        goto LAB_10a2d3a14;
      }
      puStack_b0 = puStack_f0;
      (*(code *)ppuStack_e8[3])(&ppuStack_a8,&ppuStack_e8);
      FUN_10a069d9c(param_4,puVar14,ppuVar17,&puStack_b0);
    }
    ppuVar10 = &puStack_b0;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
  }
LAB_10a2d3a30:
  pppuVar11 = &ppuStack_e8;
  (*(code *)*ppuStack_e8)();
  uVar4 = *(undefined4 *)(param_2 + 0x220);
  uVar5 = param_2[0x238];
  uVar6 = param_2[0x21a];
  param_1[1] = ppuStack_f8;
  *param_1 = puStack_100;
  *(undefined4 *)(puStack_100 + 0x220) = uVar4;
  puStack_100[0x238] = uVar5;
  puStack_100[0x21a] = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a2f35d0(&puStack_b0);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  FUN_10a2f39c4(&puStack_100);
  pppuVar12 = pppuVar11;
  __Unwind_Resume();
  pcStack_108 = FUN_10a2d3b54;
  ppuVar13 = pppuVar12[0x2e];
  plVar1 = (long *)((long)(pppuVar12 + 0x3e) + (long)pppuVar12[0x3e][-3]);
  ppuStack_130 = ppuVar10;
  ppuStack_128 = param_4;
  puStack_120 = param_2;
  pppuStack_118 = pppuVar11;
  puStack_110 = &stack0xfffffffffffffff0;
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = (long)ppuVar13;
    if (ppuVar13 != (undefined **)0x0) {
      plVar1[1] = *(long *)(ppuVar13[0x10a] + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  ppuVar10 = pppuVar12[0x41];
  if (ppuVar10[4] == (undefined *)0x0) {
    ppuVar10[6] = (undefined *)ppuVar13;
    ppuStack_128 = (undefined **)ppuVar10[3];
    ppuStack_130 = (undefined **)ppuVar10[2];
    if (ppuVar10[3] != (undefined *)0x0) {
      plVar1 = (long *)(ppuVar10[3] + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_10a3cf744(ppuVar13,&ppuStack_130,&PTR_DAT_110b99f08,pppuVar12 + 0x3e);
    if (ppuStack_128 != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)ppuVar13 != 0) {
      *(int *)(ppuVar10 + 7) = (int)ppuVar13;
      *(undefined1 *)((long)ppuVar10 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    pppuStack_118 = (undefined ***)&puStack_100;
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&puStack_100);
    return;
  }
  return;
}



/* Entry: 10a2d3b54; end: 10a2d3bcf;  */

void FUN_10a2d3b54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a2d3bd0; end: 10a2d3cc3;  */

void FUN_10a2d3bd0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a2d3cc4; end: 10a2d3d87;  */

void FUN_10a2d3cc4(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xce;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a2d3d88(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64bf13;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xd1;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  FUN_10a2f3d84();
  FUN_10a2f401c(param_1);
  return;
}



/* Entry: 10a2d3d88; end: 10a2d3e5f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2d3e20) */

undefined1  [16] FUN_10a2d3d88(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f64c78f,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2f3c88(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a2d3e60; end: 10a2d4317;  */

undefined8 **
FUN_10a2d3e60(undefined8 **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long alStack_118 [2];
  char cStack_101;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 auStack_a8 [8];
  undefined8 **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0xae] = &PTR_FUN_110c383b8;
  param_1[0xb0] = (undefined8 *)0x0;
  param_1[0xaf] = (undefined8 *)0x0;
  *(undefined2 *)(param_1 + 0xb1) = 0x100;
  ppuVar7 = param_1;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  FUN_10a4213cc(param_1,&PTR_PTR_110bbdb30,param_3,param_4,0);
  *ppuVar7 = &PTR_FUN_110bbd730;
  ppuVar7[2] = &PTR_DAT_110bbd960;
  ppuVar7[7] = &PTR_DAT_110bbd9b8;
  ppuVar7[0xd] = &PTR_DAT_110bbd9d8;
  ppuVar7[0xae] = &PTR_DAT_110bbdad8;
  ppuVar7[0x16] = &PTR_DAT_110bbda48;
  ppuVar7[0x17] = &PTR_DAT_110bbda78;
  *(undefined4 *)(ppuVar7 + 0x9e) = 0;
  ppuVar7[0xa0] = (undefined8 *)0x0;
  ppuVar7[0x9f] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar7 + 0xa1) = 0;
  ppuVar7[0xa3] = (undefined8 *)0x0;
  ppuVar7[0xa2] = (undefined8 *)0x0;
  ppuVar7[0xa5] = (undefined8 *)0x0;
  ppuVar7[0xa4] = (undefined8 *)0x0;
  ppuVar7[0xa7] = (undefined8 *)0x0;
  ppuVar7[0xa6] = (undefined8 *)0x0;
  ppuVar7[0xa9] = (undefined8 *)0x0;
  ppuVar7[0xa8] = (undefined8 *)0x0;
  ppuVar7[0xab] = (undefined8 *)0x0;
  ppuVar7[0xaa] = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110bf7fc8;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  *(undefined8 *)((long)puVar8 + 0x4d) = 0;
  *(undefined8 *)((long)puVar8 + 0x45) = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  param_1[0xac] = puVar8 + 3;
  param_1[0xad] = puVar8;
  FUN_10a5cf1fc(param_1 + 0xac);
  uStack_f8 = 6;
  puStack_100 = &DAT_10f646e0e;
  uStack_f0 = 0x12ac9ea8ce24c7;
  FUN_10a0ffca4(alStack_118,&uStack_e0);
  plVar9 = alStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar9,0,&UNK_10f64bf20,0xf);
  uStack_c8 = plVar9[1];
  pppuStack_d0 = (undefined8 ***)*plVar9;
  uStack_c0 = plVar9[2];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  uVar3 = uStack_c8;
  ppppuVar6 = (undefined8 ****)pppuStack_d0;
  if (-1 < (long)uStack_c0) {
    uVar3 = uStack_c0 >> 0x38;
    ppppuVar6 = &pppuStack_d0;
  }
  FUN_10ab451f4(auStack_a8,0,ppppuVar6,uVar3,&DAT_10f48702d,4,&UNK_10f64bf30,9,1);
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppuStack_d0);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(alStack_118[0]);
  }
  func_0x00010a015c50(ppuVar7 + 0xa6,auStack_a8);
  puVar8 = ppuVar7[0xa6];
  *(undefined1 *)(puVar8 + 1) = 1;
  if ((long *)puVar8[0x45] == (long *)puVar8[0x46]) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)puVar8[0x45];
  }
  *(undefined4 *)(lVar11 + 0x21e) = 0;
  func_0x00010a332748(lVar11 + 0x219,0);
  func_0x00010a332700(lVar11 + 0x21a,0);
  func_0x000107c2b074(&pppuStack_d0,&puStack_100);
  FUN_10a0d9f14(&plStack_130,&pppuStack_d0,1,alStack_118);
  FUN_10a0da1b8((long *)(lVar11 + 0x200),*(undefined8 *)(lVar11 + 0x208));
  *(long **)(lVar11 + 0x200) = plStack_130;
  *(long *)(lVar11 + 0x208) = lStack_128;
  *(long *)(lVar11 + 0x210) = lStack_120;
  if (lStack_120 == 0) {
    *(long *)(lVar11 + 0x200) = lVar11 + 0x208;
  }
  else {
    plStack_130 = &lStack_128;
    *(long *)(lStack_128 + 0x10) = lVar11 + 0x208;
    lStack_128 = 0;
    lStack_120 = 0;
  }
  FUN_10a0da1b8(&plStack_130,lStack_128);
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppuStack_d0);
  }
  *(undefined1 *)(lVar11 + 8) = 1;
  lVar10 = *(long *)(lVar11 + 0x268);
  *(undefined4 *)(lVar10 + 0x28) = 1;
  *(undefined2 *)(lVar10 + 0x2c) = 2;
  *(undefined8 *)(lVar10 + 0x30) = 0xff00000000;
  *(undefined4 *)(lVar10 + 0x38) = 0;
  func_0x000107c2b07c(&pppuStack_d0,&DAT_10f64bf3a);
  FUN_10a0d9bd4(lVar11,&pppuStack_d0,param_1 + 0xa1);
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppuStack_d0);
  }
  plStack_138 = param_1[0xa7];
  puStack_140 = param_1[0xa6];
  if (param_1[0xa7] != (undefined8 *)0x0) {
    plVar9 = param_1[0xa7] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a4239ac(param_1,&puStack_140);
  plVar9 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_10a044790(auStack_98);
  ppuVar7 = apuStack_90;
  (*(code *)*apuStack_90[0])();
  if (ppuStack_a0 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_a0 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = (undefined8 *)((long)puVar8 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_a0)[2])(ppuStack_a0);
      ppuVar7 = ppuStack_a0;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a0617bc(&puStack_140);
    func_0x00010a015cb4(auStack_a8);
    func_0x00010a004e5c(param_1 + 0xac);
    func_0x00010a193298(param_1 + 0xaa);
    func_0x00010a1932f0(param_1 + 0xa8);
    FUN_10a0617bc(ppuStack_a0);
    FUN_10a2f0180(param_1 + 0xa4);
    if (param_1[0xa3] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a420f70(param_1,&PTR_PTR_110bbdb30);
    __Unwind_Resume();
    ppuStack_160 = ppuStack_a0;
    pcStack_148 = FUN_10a2d4318;
    *ppuVar7 = &PTR_FUN_110bbd730;
    ppuVar7[2] = &PTR_DAT_110bbd960;
    ppuVar7[7] = &PTR_DAT_110bbd9b8;
    ppuVar7[0xd] = &PTR_DAT_110bbd9d8;
    ppuVar7[0xae] = &PTR_DAT_110bbdad8;
    ppuVar7[0x16] = &PTR_DAT_110bbda48;
    ppuVar7[0x17] = &PTR_DAT_110bbda78;
    ppuStack_158 = param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010a004e5c(ppuVar7 + 0xac);
    func_0x00010a193298(ppuVar7 + 0xaa);
    func_0x00010a1932f0(ppuVar7 + 0xa8);
    FUN_10a0617bc(ppuVar7 + 0xa6);
    FUN_10a2f0180(ppuVar7 + 0xa4);
    if (ppuVar7[0xa3] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *ppuVar7 = &PTR_FUN_110bc02f8;
    ppuVar7[2] = &PTR_DAT_110bd5880;
    ppuVar7[7] = &PTR_DAT_110bd58d8;
    ppuVar7[0xd] = &PTR_DAT_110bd58f8;
    ppuVar7[0x16] = &PTR_DAT_110bd5968;
    ppuVar7[0xae] = &PTR_DAT_110bc0558;
    ppuVar7[0x17] = &PTR_DAT_110bd5998;
    func_0x00010a004e5c(ppuVar7 + 0x9c);
    func_0x00010a004e5c(ppuVar7 + 0x9a);
    ppuVar7[0x72] = &PTR_FUN_110b9ec48;
    ppuStack_168 = ppuVar7 + 0x90;
    func_0x00010a04aad4(&ppuStack_168);
    ppuStack_168 = ppuVar7 + 0x8d;
    func_0x00010a04aad4(&ppuStack_168);
    ppuStack_168 = ppuVar7 + 0x86;
    func_0x00010a04aad4(&ppuStack_168);
    ppuStack_168 = ppuVar7 + 0x83;
    func_0x00010a04aad4(&ppuStack_168);
    FUN_10a0617bc(ppuVar7 + 0x7e);
    ppuStack_168 = ppuVar7 + 0x78;
    func_0x00010a04aad4(&ppuStack_168);
    ppuStack_168 = ppuVar7 + 0x75;
    func_0x00010a04aad4(&ppuStack_168);
    puVar8 = ppuVar7[0x71];
    ppuVar7[0x71] = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_10a447854();
    }
    ppuVar7[99] = &PTR_DAT_110bd6470;
    func_0x00010a1f9d6c(ppuVar7 + 0x6c);
    FUN_10a44a358(ppuVar7 + 0x65);
    plVar9 = ppuVar7[0x62];
    ppuVar7[0x62] = (undefined8 *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    FUN_10a425f6c(ppuVar7 + 0x60,0);
    FUN_10a4477fc(ppuVar7 + 0x5e);
    func_0x00010a4477a4(ppuVar7 + 0x5c);
    func_0x00010a4476d0(ppuVar7 + 0x57);
    FUN_10a44763c(ppuVar7 + 0x54);
    if (ppuVar7[0x53] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (ppuVar7[0x51] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (ppuVar7[0x4f] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a0e3194(ppuVar7 + 0x4c);
    if (ppuVar7[0x4a] != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a66a924(ppuVar7,&PTR_PTR_110bbdb38);
    return ppuVar7;
  }
  return param_1;
}



/* Entry: 10a2d4318; end: 10a2d43ab;  */

void FUN_10a2d4318(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbd730;
  param_1[2] = &PTR_DAT_110bbd960;
  param_1[7] = &PTR_DAT_110bbd9b8;
  param_1[0xd] = &PTR_DAT_110bbd9d8;
  param_1[0xae] = &PTR_DAT_110bbdad8;
  param_1[0x16] = &PTR_DAT_110bbda48;
  param_1[0x17] = &PTR_DAT_110bbda78;
  func_0x00010a004e5c(param_1 + 0xac);
  func_0x00010a193298(param_1 + 0xaa);
  func_0x00010a1932f0(param_1 + 0xa8);
  FUN_10a0617bc(param_1 + 0xa6);
  FUN_10a2f0180(param_1 + 0xa4);
  if (param_1[0xa3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bc02f8;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xae] = &PTR_DAT_110bc0558;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bbdb38);
  return;
}



/* Entry: 10a2d43ac; end: 10a2d43e7;  */

void FUN_10a2d43ac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbd730;
  param_1[2] = &PTR_DAT_110bbd960;
  param_1[7] = &PTR_DAT_110bbd9b8;
  param_1[0xd] = &PTR_DAT_110bbd9d8;
  param_1[0xae] = &PTR_DAT_110bbdad8;
  param_1[0x16] = &PTR_DAT_110bbda48;
  param_1[0x17] = &PTR_DAT_110bbda78;
  func_0x00010a004e5c(param_1 + 0xac);
  func_0x00010a193298(param_1 + 0xaa);
  func_0x00010a1932f0(param_1 + 0xa8);
  FUN_10a0617bc(param_1 + 0xa6);
  FUN_10a2f0180(param_1 + 0xa4);
  if (param_1[0xa3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bc02f8;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xae] = &PTR_DAT_110bc0558;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bbdb38);
  return;
}



/* Entry: 10a2d43e8; end: 10a2d4473;  */

void FUN_10a2d43e8(void)

{
  FUN_10a2d4318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2d4474; end: 10a2d44ff;  */

void FUN_10a2d4474(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a2d4318((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2d4500; end: 10a2d450b;  */

void FUN_10a2d4500(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar5 = param_2;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x19 = plVar5;
    (**(code **)(*plVar5 + 0x38))();
    if (param_3 < 0x7ffffffffffffff8) break;
    func_0x000109ffde50();
    if ((char)puVar3[-0x41] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar3 + -0x58));
    }
    unaff_x30 = FUN_10a3c83bc;
    plVar8 = unaff_x19;
    __Unwind_Resume();
    puVar3 = puVar3 + -0x60;
    param_2 = plVar8 + -2;
    param_1 = extraout_x8;
    unaff_x20 = plVar5;
  }
  if (param_3 < 0x17) {
    puVar3[-0x41] = (char)param_3;
    puVar6 = puVar3 + -0x58;
    if (param_3 == 0) goto LAB_10a3c832c;
  }
  else {
    puVar2 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (undefined1 *)((param_3 | 7) + 1);
    }
    puVar6 = puVar2;
    __Znwm();
    *(ulong *)(puVar3 + -0x50) = param_3;
    *(ulong *)(puVar3 + -0x48) = (ulong)puVar2 | 0x8000000000000000;
    *(undefined1 **)(puVar3 + -0x58) = puVar6;
  }
  _memmove(puVar6,unaff_x19,param_3);
LAB_10a3c832c:
  puVar6[param_3] = 0;
  bVar4 = (*(ushort *)(plVar5 + 0x30) & 2) != 0;
  puVar1 = &UNK_10f65387d;
  if (bVar4) {
    puVar1 = &UNK_10f653888;
  }
  uVar9 = 10;
  if (bVar4) {
    uVar9 = 0xb;
  }
  puVar7 = (undefined8 *)(puVar3 + -0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,puVar1,uVar9);
  uVar9 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar9;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)puVar3[-0x41] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar3 + -0x58));
  }
  return;
}



/* Entry: 10a2d450c; end: 10a2d47c7;  */

void FUN_10a2d450c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&plStack_60);
    puVar4 = (undefined8 *)((ulong)&plStack_60 | 8);
    pplVar7 = &plStack_60;
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar9 + 0x28);
      pplVar7 = (long **)(lVar9 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = *pplVar7;
  }
  plVar12 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar12);
  FUN_10a2f40d8(plVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_FUN_110bc2f08;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (plVar12 != (long *)0x0) {
    if (plVar12[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
    }
    else {
      if (*(long *)(plVar12[6] + 8) != -1) goto LAB_10a2d4678;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a2d4678:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar12 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar12 + 0x30) & 0xfffc;
  *(ushort *)(plVar12 + 0x30) = uVar3 | *(ushort *)(plVar12 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar12 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_60 = plVar12;
  plStack_58 = plVar11;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar12 + 0x130))(plVar12,plVar8);
  (**(code **)(*param_2 + 0x218))(param_2,plVar12,param_4);
  FUN_10a2d47c8(plVar12);
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a2d47c8; end: 10a2d4b17;  */

undefined8 FUN_10a2d47c8(float param_1,float param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined8 uStack_80;
  long *plStack_78;
  char cStack_69;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  lVar10 = *(long *)(*(long *)(param_3 + 0x168) + 0x248);
  if ((lVar10 == 0) || ((*(ushort *)(lVar10 + 0x180) & 0x17) != 0)) {
    uVar6 = 0;
  }
  else {
    plVar9 = (long *)(param_3 + 0x550);
    if (*(long *)(param_3 + 0x550) == 0) {
      FUN_10a199aa4(&uStack_80,&uStack_50);
      plVar1 = (long *)(param_3 + 0x540);
      func_0x00010a2e19d8(plVar1,&uStack_80);
      plVar3 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar2 = plStack_78 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      lVar7 = *plVar1;
      param_2 = *(float *)(lVar7 + 0x20c);
      bVar5 = false;
      if ((*(float *)(lVar7 + 0x208) == 1.0) && (bVar5 = false, !NAN(param_2))) {
        bVar5 = param_2 == 1.0;
      }
      if (!bVar5) {
        uVar6 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(lVar7 + 0x208) = uVar6;
        *(undefined1 *)(lVar7 + 0x1ec) = 1;
      }
      uStack_50 = *(undefined8 *)(param_3 + 0x170);
      FUN_10a199b74(&uStack_80,&uStack_41,&uStack_50,plVar1);
      func_0x00010a193034(plVar9,&uStack_80);
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar3 = plStack_78 + 1;
        do {
          lVar7 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      uStack_50 = *(undefined8 *)(param_3 + 0x170);
      FUN_10a2e1a3c(&uStack_80,&uStack_50,plVar9);
      plStack_58 = plStack_78;
      uStack_60 = uStack_80;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar6 = uStack_80;
      FUN_10a426824(param_3,&uStack_60);
      plVar1 = plStack_58;
      param_1 = (float)uVar6;
      if (plStack_58 != (long *)0x0) {
        plVar3 = plStack_58 + 1;
        do {
          lVar7 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
    }
    FUN_10a394a64(lVar10);
    func_0x00010acae698(lVar10 + 0x268);
    uStack_50 = CONCAT44(param_2,param_1);
    fVar11 = ABS(param_2) * 0.5;
    if (ABS(param_1) * 0.5 <= ABS(param_2) * 0.5) {
      fVar11 = ABS(param_1) * 0.5;
    }
    if (fVar11 < *(float *)(param_3 + 0x508)) {
      *(float *)(param_3 + 0x508) = fVar11;
    }
    lVar7 = *(long *)(param_3 + 0x540);
    bVar5 = false;
    if ((param_1 == *(float *)(lVar7 + 0x208)) &&
       (bVar5 = false, !NAN(param_2) && !NAN(*(float *)(lVar7 + 0x20c)))) {
      bVar5 = param_2 == *(float *)(lVar7 + 0x20c);
    }
    if (!bVar5) {
      *(undefined8 *)(lVar7 + 0x208) = uStack_50;
      *(undefined1 *)(lVar7 + 0x1ec) = 1;
    }
    puVar8 = *(undefined8 **)(*(long *)(param_3 + 0x530) + 0x228);
    if (puVar8 == *(undefined8 **)(*(long *)(param_3 + 0x530) + 0x230)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar8;
    }
    func_0x000107c2b07c(&uStack_80,&DAT_10f64c7aa);
    FUN_10a0da430(uVar6,&uStack_80,&uStack_50);
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    lVar7 = *(long *)(param_3 + 0x540);
    FUN_10a39477c(lVar10);
    bVar5 = false;
    if ((*(float *)(lVar7 + 0x200) == param_1) &&
       (bVar5 = false, !NAN(*(float *)(lVar7 + 0x204)) && !NAN(param_2))) {
      bVar5 = *(float *)(lVar7 + 0x204) == param_2;
    }
    if (!bVar5) {
      *(float *)(lVar7 + 0x200) = param_1;
      *(float *)(lVar7 + 0x204) = param_2;
      *(undefined1 *)(lVar7 + 0x1ec) = 1;
    }
    lVar10 = *plVar9;
    plVar9 = *(long **)(lVar10 + 0xd8);
    if (*(char *)((long)plVar9 + 0x1ec) == '\x01') {
      (**(code **)(*plVar9 + 0x40))(plVar9);
      *(undefined1 *)((long)plVar9 + 0x1ec) = 0;
      func_0x00010ac6ece4(lVar10);
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 10a2d4b18; end: 10a2d4c0b;  */

void FUN_10a2d4b18(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  FUN_10a42241c();
  uVar1 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbdb68);
  *(undefined4 *)(param_1 + 0x508) = uVar1;
  return;
}



/* Entry: 10a2d4c0c; end: 10a2d4c13;  */

void FUN_10a2d4c0c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  FUN_10a42212c();
  if (param_2[9] != 0) {
    lVar1 = param_2[9] << 3;
    do {
      param_2 = param_2 + 1;
      if ((undefined **)*param_2 == &PTR_DAT_110bc32d8) {
        lVar1 = *(long *)(param_1 + 0x460);
        *(undefined8 *)(param_1 + 0x460) = 0;
        *(undefined8 *)(param_1 + 0x458) = 0;
        if (lVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10a2d4c14; end: 10a2d4c57;  */

void FUN_10a2d4c14(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_10a66ac20();
  if ((*(ushort *)(param_1 + 0x180) & 0x17) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x168);
  if ((*(ushort *)(lVar1 + 0x118) >> 9 & 1) != 0) {
    if (((*(byte *)(lVar1 + 0x11a) ^ 0xff) & 0x10) != 0 ||
        ((*(byte *)(lVar1 + 0x11b) ^ 0xff) & 0x10) != 0) {
      plVar2 = (long *)(lVar1 + 0x50);
      lVar4 = *plVar2;
      *(byte *)(lVar1 + 0x11a) = *(byte *)(lVar1 + 0x11a) | 0x10;
      *(byte *)(lVar1 + 0x11b) = *(byte *)(lVar1 + 0x11b) | 0x10;
      lVar3 = *(long *)(lVar1 + 0x120);
      if (lVar4 != 0) {
        plVar5 = *(long **)(lVar1 + 0x58);
        *plVar5 = lVar4;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar2 = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
      }
      puVar6 = *(undefined8 **)(lVar3 + 0x540);
      *(long *)(lVar1 + 0x50) = lVar3 + 0x538;
      *(undefined8 **)(lVar1 + 0x58) = puVar6;
      *(long **)(lVar3 + 0x540) = plVar2;
      *puVar6 = plVar2;
    }
  }
  return;
}



/* Entry: 10a2d4c58; end: 10a2d4c5f;  */

void FUN_10a2d4c58(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_10a66ac20();
  if ((*(ushort *)(param_1 + 0x118) & 0x17) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x100);
  if ((*(ushort *)(lVar1 + 0x118) >> 9 & 1) != 0) {
    if (((*(byte *)(lVar1 + 0x11a) ^ 0xff) & 0x10) != 0 ||
        ((*(byte *)(lVar1 + 0x11b) ^ 0xff) & 0x10) != 0) {
      plVar2 = (long *)(lVar1 + 0x50);
      lVar4 = *plVar2;
      *(byte *)(lVar1 + 0x11a) = *(byte *)(lVar1 + 0x11a) | 0x10;
      *(byte *)(lVar1 + 0x11b) = *(byte *)(lVar1 + 0x11b) | 0x10;
      lVar3 = *(long *)(lVar1 + 0x120);
      if (lVar4 != 0) {
        plVar5 = *(long **)(lVar1 + 0x58);
        *plVar5 = lVar4;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar2 = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
      }
      puVar6 = *(undefined8 **)(lVar3 + 0x540);
      *(long *)(lVar1 + 0x50) = lVar3 + 0x538;
      *(undefined8 **)(lVar1 + 0x58) = puVar6;
      *(long **)(lVar3 + 0x540) = plVar2;
      *puVar6 = plVar2;
    }
  }
  return;
}



/* Entry: 10a2d4c60; end: 10a2d4d17;  */

void FUN_10a2d4c60(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_10a3c73cc(param_1,2);
  lVar1 = *(long *)(param_1 + 0x168);
  if ((*(ushort *)(lVar1 + 0x118) >> 9 & 1) != 0) {
    if (((*(byte *)(lVar1 + 0x11a) ^ 0xff) & 0x10) != 0 ||
        ((*(byte *)(lVar1 + 0x11b) ^ 0xff) & 0x10) != 0) {
      plVar2 = (long *)(lVar1 + 0x50);
      lVar4 = *plVar2;
      *(byte *)(lVar1 + 0x11a) = *(byte *)(lVar1 + 0x11a) | 0x10;
      *(byte *)(lVar1 + 0x11b) = *(byte *)(lVar1 + 0x11b) | 0x10;
      lVar3 = *(long *)(lVar1 + 0x120);
      if (lVar4 != 0) {
        plVar5 = *(long **)(lVar1 + 0x58);
        *plVar5 = lVar4;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar2 = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
      }
      puVar6 = *(undefined8 **)(lVar3 + 0x540);
      *(long *)(lVar1 + 0x50) = lVar3 + 0x538;
      *(undefined8 **)(lVar1 + 0x58) = puVar6;
      *(long **)(lVar3 + 0x540) = plVar2;
      *puVar6 = plVar2;
    }
  }
  return;
}



/* Entry: 10a2d4d18; end: 10a2d4dbf;  */

undefined8 FUN_10a2d4d18(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  undefined1 auStack_58 [16];
  long *plStack_48;
  
  if (param_2[1] != 0) {
    plVar3 = (long *)*param_2;
    lVar4 = param_2[1] << 3;
    do {
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 0xb0);
        (**(code **)(*plVar1 + 0x10))();
        if (plVar1 == (long *)0xf70c90fec9ecec4c) goto LAB_10a2d4d84;
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  lVar7 = 0;
LAB_10a2d4d84:
  if (param_1[0xa0] != lVar7) {
    param_1[0xa0] = lVar7;
    *(undefined1 *)(*(long *)(param_1[0x2e] + 0xad0) + 0x138) = 1;
  }
  if (param_1 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar4 = param_2[1];
    plStack_48 = param_1;
    if (lVar4 != 0) {
      bVar6 = false;
      uVar5 = 0;
      plVar1 = (long *)*param_2;
      plVar3 = plVar1;
      do {
        plVar2 = (long *)*plVar3;
        if (plVar2 == param_1) {
          do {
            plVar3 = plVar3 + 1;
            if (plVar3 == plVar1 + lVar4) {
              return uVar5;
            }
            plVar2 = (long *)*plVar3;
          } while (plVar2 == param_1);
          bVar6 = true;
          if (plVar2 != (long *)0x0) goto LAB_10a3bfae0;
LAB_10a3bfb54:
          plVar3 = plVar3 + 1;
        }
        else {
          if (plVar2 == (long *)0x0) goto LAB_10a3bfb54;
LAB_10a3bfae0:
          (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
          lVar4 = param_2[1];
          if ((int)plVar2 == 0) goto LAB_10a3bfb54;
          plVar2 = (long *)(*param_2 + lVar4 * 8);
          plVar1 = plVar3 + 1;
          if (plVar1 != plVar2) {
            _memmove(plVar3,plVar1,(long)plVar2 - (long)plVar1);
            lVar4 = param_2[1];
          }
          lVar4 = lVar4 + -1;
          param_2[1] = lVar4;
          uVar5 = 1;
        }
        plVar1 = (long *)*param_2;
      } while (plVar3 != plVar1 + lVar4);
      if (bVar6) {
        return uVar5;
      }
    }
    FUN_10a3f1ef4(auStack_58,param_2,&plStack_48);
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10a2d4dc0; end: 10a2d4df7;  */

bool FUN_10a2d4dc0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + 0xb0);
  (**(code **)(*plVar1 + 0x10))();
  return plVar1 == (long *)0xf70c90fec9ecec4c;
}



/* Entry: 10a2d4df8; end: 10a2d4ed7;  */

undefined1  [16] FUN_10a2d4df8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f64c7b9;
  return auVar1;
}



/* Entry: 10a2d4ed8; end: 10a2d5303;  */

void FUN_10a2d4ed8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c7b9,0x1c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc3458;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x130;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc3458;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d52e4;
    FUN_10a054dac(param_1,&UNK_10f64bf51,FUN_10a2f41fc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d52e4;
    FUN_10a054dac(param_1,&UNK_10f64bf63,FUN_10a2f432c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d52e4;
    FUN_10a054dac(param_1,&UNK_10f64bf6f,FUN_10a2f4418,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d52e4;
    FUN_10a054dac(param_1,&UNK_10f64bf84,FUN_10a2f45e8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64bf93,FUN_10a2f46ac,FUN_10a2f4840);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bf9d,FUN_10a2f4cc4,FUN_10a2f4d90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bfaa,FUN_10a2f4ef8,FUN_10a2f4fd8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f64bfb3,FUN_10a2f52a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bfc5,FUN_10a2f53fc,FUN_10a2f5510);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c7b9,0x1c);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2d52e4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d52e8);
  (*pcVar6)();
}



/* Entry: 10a2d5304; end: 10a2d54db;  */

void FUN_10a2d5304(long param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdf80);
  if ((int)ppuVar4 != 0) {
    pcStack_78 = FUN_10a2f6524;
    ppuStack_70 = &PTR_FUN_110bc2f68;
    ppuVar4 = param_2;
    lStack_68 = param_1;
    FUN_10a02daf4(param_2,&PTR_DAT_110bbdf80,&pcStack_78,0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (((ulong)ppuVar4 & 1) == 0) {
      uStack_88 = 0;
      plStack_80 = (long *)0x0;
      FUN_10a2d54dc(param_1,&uStack_88);
      plVar7 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
  }
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdfa0);
  if ((int)ppuVar4 != 0) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x84) {
      FUN_10a2d5700(param_1,param_2);
    }
    else {
      FUN_10a2d5568(param_1,param_2);
    }
  }
  ppuVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bbdfc0);
  if ((int)ppuVar4 == 0) {
    ppuVar4 = (undefined **)(param_1 + 0x390);
    FUN_10a030d44();
  }
  else {
    ppuVar5 = &PTR_DAT_110bbdfc0;
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110bbdfc0,param_1 + 0x390);
    ppuVar4 = param_2;
    param_2 = ppuVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&uStack_88);
  __Unwind_Resume(ppuVar4);
  plVar7 = (long *)param_2[1];
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  FUN_10a42646c();
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a2d54dc; end: 10a2d5567;  */

void FUN_10a2d54dc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a42646c(param_1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a2d5568; end: 10a2d56ff;  */

void FUN_10a2d5568(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  code *unaff_x25;
  undefined *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  long lStack_118;
  long *plStack_a8;
  undefined1 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  int iStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1 + 0x54;
  FUN_10a4265c0(plVar1);
  (**(code **)(*param_1 + 0x208))(param_1);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bbdfa0);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x208))();
  uStack_a0 = 0;
  ppuVar5 = (undefined **)((ulong)plVar2 & 0xffffffff);
  plStack_a8 = plVar1;
  FUN_10a2d5c84(plVar1);
  FUN_10a2f6874(&plStack_a8);
  if ((int)plVar2 != 0) {
    iVar8 = 0;
    unaff_x25 = FUN_10a2f6a1c;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar8);
      pcStack_98 = FUN_10a2f6a1c;
      ppuStack_90 = &PTR_FUN_110bc2f98;
      ppuVar5 = &PTR_DAT_110bbdf80;
      plStack_88 = param_1;
      iStack_80 = iVar8;
      FUN_10a02daf4(param_2,&PTR_DAT_110bbdf80,&pcStack_98,0);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar8 = iVar8 + 1;
    } while ((int)plVar2 != iVar8);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a2f6874(&plStack_a8);
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a4265c0(param_2 + 0x54);
  (**(code **)(*param_2 + 0x208))(param_2);
  ppuVar6 = &PTR_DAT_110bbdfa0;
  (**(code **)(*ppuVar5 + 0x210))(ppuVar5);
  ppuVar3 = ppuVar5;
  (**(code **)(*ppuVar5 + 0x208))();
  if ((int)ppuVar3 != 0) {
    iVar8 = 0;
    unaff_x25 = (code *)&pcStack_158;
    do {
      (**(code **)(*ppuVar5 + 0x218))(ppuVar5,iVar8);
      pcStack_158 = FUN_10a2f6620;
      ppuStack_150 = &PTR_FUN_110bc2f80;
      ppuVar4 = ppuVar5;
      ppuVar6 = &PTR_DAT_110bbdf80;
      plStack_148 = param_2;
      FUN_10a02daf4(ppuVar5,&PTR_DAT_110bbdf80,&pcStack_158,0);
      (*(code *)*ppuStack_150)(&ppuStack_150);
      if (((ulong)ppuVar4 & 1) == 0) {
        puStack_160 = (undefined *)0x0;
        ppuVar6 = &puStack_160;
        FUN_10a2d5b74(param_2 + 0x54);
      }
      (**(code **)(*ppuVar5 + 0x220))(ppuVar5);
      iVar8 = iVar8 + 1;
    } while ((int)ppuVar3 != iVar8);
  }
  (**(code **)(*ppuVar5 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_150)((code **)((long)unaff_x25 + 8));
  __Unwind_Resume();
  FUN_10a422a34();
  (**(code **)(*ppuVar6 + 0x18))(ppuVar6,&PTR_DAT_110bbdfa0);
  puVar9 = ppuVar5[0x55];
  for (puVar7 = ppuVar5[0x54]; puVar7 != puVar9; puVar7 = puVar7 + 0x10) {
    (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
    FUN_10a02e230(ppuVar6,&PTR_DAT_110bbdf80,puVar7,&UNK_10f64c7e1,0xe);
    (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
  }
  (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
  ppuVar3 = ppuVar5 + 0x72;
  FUN_10a0300fc();
  if (((ulong)ppuVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2d5978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar6 + 0x118))(ppuVar6,&PTR_DAT_110bbdfc0,ppuVar5 + 0x72);
  return;
}



/* Entry: 10a2d5700; end: 10a2d5883;  */

void FUN_10a2d5700(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  code **unaff_x25;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a4265c0(param_1 + 0x54);
  (**(code **)(*param_1 + 0x208))(param_1);
  ppuVar3 = &PTR_DAT_110bbdfa0;
  (**(code **)(*param_2 + 0x210))(param_2);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar1 != 0) {
    iVar5 = 0;
    unaff_x25 = &pcStack_a8;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar5);
      pcStack_a8 = FUN_10a2f6620;
      ppuStack_a0 = &PTR_FUN_110bc2f80;
      plVar2 = param_2;
      ppuVar3 = &PTR_DAT_110bbdf80;
      plStack_98 = param_1;
      FUN_10a02daf4(param_2,&PTR_DAT_110bbdf80,&pcStack_a8,0);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (((ulong)plVar2 & 1) == 0) {
        puStack_b0 = (undefined *)0x0;
        ppuVar3 = &puStack_b0;
        FUN_10a2d5b74(param_1 + 0x54);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar5 = iVar5 + 1;
    } while ((int)plVar1 != iVar5);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(unaff_x25 + 1);
  __Unwind_Resume();
  FUN_10a422a34();
  (**(code **)(*ppuVar3 + 0x18))(ppuVar3,&PTR_DAT_110bbdfa0);
  lVar6 = param_2[0x55];
  for (lVar4 = param_2[0x54]; lVar4 != lVar6; lVar4 = lVar4 + 0x10) {
    (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
    FUN_10a02e230(ppuVar3,&PTR_DAT_110bbdf80,lVar4,&UNK_10f64c7e1,0xe);
    (**(code **)(*ppuVar3 + 0x20))(ppuVar3);
  }
  (**(code **)(*ppuVar3 + 0x20))(ppuVar3);
  plVar1 = param_2 + 0x72;
  FUN_10a0300fc();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2d5978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar3 + 0x118))(ppuVar3,&PTR_DAT_110bbdfc0,param_2 + 0x72);
  return;
}



/* Entry: 10a2d5884; end: 10a2d597b;  */

void FUN_10a2d5884(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN_10a422a34();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bbdfa0);
  lVar3 = *(long *)(param_1 + 0x2a8);
  for (lVar2 = *(long *)(param_1 + 0x2a0); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a02e230(param_2,&PTR_DAT_110bbdf80,lVar2,&UNK_10f64c7e1,0xe);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar1 = param_1 + 0x390;
  FUN_10a0300fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2d5978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bbdfc0,param_1 + 0x390);
  return;
}



/* Entry: 10a2d597c; end: 10a2d5a37;  */

void FUN_10a2d597c(long param_1,undefined ***param_2,long param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined ***unaff_x20;
  long *plVar10;
  code **unaff_x23;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  long lStack_58;
  
  FUN_10a422d34();
  if ((param_3 == 0) || (*(char *)(param_3 + 0xb8) != '\x01')) {
    FUN_10a2e23e0(&stack0xffffffffffffffb0,*(long *)(param_1 + 0x2a0),*(long *)(param_1 + 0x2a8),
                  *(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 4);
    FUN_10a4212b8(param_2,&stack0xffffffffffffffb0);
    FUN_10a0d4a18(&stack0xffffffffffffffc8);
    return;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_1 + 0x2a0);
  plVar2 = *(long **)(param_1 + 0x2a8);
  pppuVar6 = param_2;
  if (plVar10 != plVar2) {
    unaff_x23 = &pcStack_98;
    do {
      lStack_a8 = *plVar10;
      pppuVar7 = (undefined ***)plVar10[1];
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuStack_a0 = pppuVar7;
      if (lStack_a8 != 0) {
        pcStack_98 = FUN_10a2e1ff0;
        ppuStack_90 = &PTR_FUN_110bc27c0;
        pppuStack_88 = param_2;
        FUN_10a2e1cb0(param_3,*(undefined8 *)(lStack_a8 + 0x40),*(undefined8 *)(lStack_a8 + 0x48),
                      &pcStack_98);
        pppuVar6 = &ppuStack_90;
        (*(code *)*ppuStack_90)();
      }
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          ppuVar8 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar8 == (undefined **)0x0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      plVar10 = plVar10 + 2;
      unaff_x20 = param_2;
    } while (plVar10 != plVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(unaff_x23 + 1);
  FUN_10a0617bc(&lStack_a8);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a2d5b74;
  iVar5 = (int)&pppuStack_e0;
  pppuStack_d0 = unaff_x20;
  pppuStack_c8 = pppuVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010a1bd170();
  if (iVar5 == 0) {
    func_0x00010a1bd170(&uStack_f0);
    plStack_d8 = (long *)((ulong)plStack_d8 & 0xffffffffffffff00);
    pppuStack_e0 = pppuVar7;
    func_0x00010a1bd170(&uStack_f0);
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    func_0x00010a2f4be0(pppuVar7,&uStack_f0);
    plVar10 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar2 = plStack_e8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    FUN_10a2f671c(&pppuStack_e0);
  }
  else {
    pppuStack_e0 = (undefined ***)0x0;
    plStack_d8 = (long *)0x0;
    func_0x00010a2f4be0(pppuVar7,&pppuStack_e0);
    plVar10 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar2 = plStack_d8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 10a2d5a38; end: 10a2d5b73;  */

void FUN_10a2d5a38(undefined ***param_1,long *param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined ***unaff_x20;
  long *plVar10;
  code **unaff_x23;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  pppuVar6 = param_1;
  if (plVar10 != plVar2) {
    unaff_x23 = &pcStack_98;
    do {
      lStack_a8 = *plVar10;
      pppuVar7 = (undefined ***)plVar10[1];
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppuStack_a0 = pppuVar7;
      if (lStack_a8 != 0) {
        pcStack_98 = FUN_10a2e1ff0;
        ppuStack_90 = &PTR_FUN_110bc27c0;
        pppuStack_88 = param_1;
        FUN_10a2e1cb0(param_3,*(undefined8 *)(lStack_a8 + 0x40),*(undefined8 *)(lStack_a8 + 0x48),
                      &pcStack_98);
        pppuVar6 = &ppuStack_90;
        (*(code *)*ppuStack_90)();
      }
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar1 = pppuVar7 + 1;
        do {
          ppuVar8 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar8 == (undefined **)0x0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar7;
        }
      }
      plVar10 = plVar10 + 2;
      unaff_x20 = param_1;
    } while (plVar10 != plVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(unaff_x23 + 1);
  FUN_10a0617bc(&lStack_a8);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a2d5b74;
  iVar5 = (int)&pppuStack_e0;
  pppuStack_d0 = unaff_x20;
  pppuStack_c8 = pppuVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010a1bd170();
  if (iVar5 == 0) {
    func_0x00010a1bd170(&uStack_f0);
    plStack_d8 = (long *)((ulong)plStack_d8 & 0xffffffffffffff00);
    pppuStack_e0 = pppuVar7;
    func_0x00010a1bd170(&uStack_f0);
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    func_0x00010a2f4be0(pppuVar7,&uStack_f0);
    plVar10 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar2 = plStack_e8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    FUN_10a2f671c(&pppuStack_e0);
  }
  else {
    pppuStack_e0 = (undefined ***)0x0;
    plStack_d8 = (long *)0x0;
    func_0x00010a2f4be0(pppuVar7,&pppuStack_e0);
    plVar10 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar2 = plStack_d8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 10a2d5b74; end: 10a2d5c83;  */

void FUN_10a2d5b74(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  iVar5 = (int)&uStack_30;
  func_0x00010a1bd170();
  if (iVar5 == 0) {
    func_0x00010a1bd170(&uStack_40);
    plStack_28 = (long *)((ulong)plStack_28 & 0xffffffffffffff00);
    uStack_30 = param_1;
    func_0x00010a1bd170(&uStack_40);
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    func_0x00010a2f4be0(param_1,&uStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a2f671c(&uStack_30);
  }
  else {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    func_0x00010a2f4be0(param_1,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a2d5c84; end: 10a2d5cef;  */

long * FUN_10a2d5c84(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = (long *)param_1[1];
  uVar7 = (long)plVar3 - *param_1 >> 4;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      plVar5 = (long *)(*param_1 + param_2 * 0x10);
      while (plVar3 != plVar5) {
        plVar3 = plVar3 + -2;
        FUN_10a0617bc();
      }
      param_1[1] = (long)plVar5;
    }
    return plVar3;
  }
  plVar5 = (long *)(param_2 - uVar7);
  plVar3 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar3 >> 4) < plVar5) {
    lVar10 = (long)plVar3 - *param_1;
    uVar7 = (long)plVar5 + (lVar10 >> 4);
    if (uVar7 >> 0x3c != 0) {
      FUN_10a0d93d0();
      lVar9 = plVar5[1];
      lVar10 = *plVar5;
      if (plVar5[1] != 0) {
        plVar3 = (long *)(plVar5[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar3 = (long *)param_1[1];
      param_1[1] = lVar9;
      *param_1 = lVar10;
      if (plVar3 != (long *)0x0) {
        plVar5 = plVar3 + 1;
        do {
          lVar10 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a0d93e4();
    }
    lVar10 = (long)plVar3 + lVar10;
    _bzero(lVar10,(long)plVar5 * 0x10);
    lVar9 = lVar10 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_68 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10 + (long)plVar5 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar8 * 2);
    plVar4 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a0d9418(plVar4);
  }
  else {
    plVar4 = param_1;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar3;
      _bzero(plVar3,(long)plVar5 * 0x10);
      plVar3 = plVar3 + (long)plVar5 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar4;
}



/* Entry: 10a2d5cf0; end: 10a2d6013;  */

void FUN_10a2d5cf0(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    func_0x00010a35bf90(param_4 + 0x88,&plStack_60);
  }
  FUN_10a3dd220(param_2[0x2e]);
  plVar6 = (long *)0x510;
  __Znwm();
  plVar6[0x9e] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar6 + 0xa1) = 0x100;
  plVar6[0xa0] = 0;
  plVar6[0x9f] = 0;
  FUN_10a4213cc();
  *plVar6 = (long)&PTR_DAT_110bbdba0;
  plVar6[2] = (long)&PTR_DAT_110bbddd0;
  plVar6[7] = (long)&PTR_FUN_110bbde28;
  plVar6[0xd] = (long)&PTR_FUN_110bbde48;
  plVar6[0x9e] = (long)&PTR_FUN_110bbdf48;
  plVar6[0x16] = (long)&PTR_FUN_110bbdeb8;
  plVar6[0x17] = (long)&PTR_DAT_110bbdee8;
  plVar7 = (long *)0x28;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  *plVar7 = (long)&PTR_DAT_110bc2fc0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar6;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (plVar6[6] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[5] = (long)plVar6;
    plVar6[6] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar6[6] + 8) != -1) goto LAB_10a2d5ebc;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[5] = (long)plVar6;
    plVar6[6] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar9 = *plVar8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a2d5ebc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar6 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar6 + 0x30) & 0xfffc;
  *(ushort *)(plVar6 + 0x30) = uVar3 | *(ushort *)(plVar6 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar6 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_60 = plVar6;
  plStack_58 = plVar7;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar6 + 0x130))(plVar6,plVar8);
  (**(code **)(*param_2 + 0x218))(param_2,plVar6,param_4);
  param_1[1] = plVar7;
  *param_1 = plVar6;
  return;
}



/* Entry: 10a2d6014; end: 10a2d6073;  */

void FUN_10a2d6014(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  FUN_10a42678c();
  plVar3 = (long *)*param_2;
  FUN_10acabcd4(plVar3,0);
  puVar4 = (undefined8 *)*plVar3;
  FUN_10acab67c(puVar4,0);
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  *(undefined8 *)(param_1 + 0x10) = puVar4[1];
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10a2d6074; end: 10a2d619b;  */

undefined1  [16] FUN_10a2d6074(long *param_1,undefined1 *param_2)

{
  undefined8 ****ppppuVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  long *plVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_61;
  
  plVar13 = (long *)&stack0xffffffffffffffd0;
  if (*(int *)(param_2 + 0x38) == 0) {
    FUN_10a42678c();
    puVar3 = (undefined8 *)*param_1;
    FUN_10acabcd4(puVar3,0);
    plVar13 = (long *)*puVar3;
    FUN_10acab67c(plVar13,0);
    lVar6 = *plVar13;
    lVar9 = *(long *)(param_2 + 8);
    FUN_10acaa52c(*(undefined8 *)(lVar6 + 0x178),lVar6 + 0x188,lVar9 + 0x188);
    FUN_10acaa978(*(undefined8 *)(lVar6 + 0x178),lVar6 + 0x1a0,lVar9 + 0x1a0);
    if (lVar6 != lVar9) {
      FUN_10acd5b34(lVar6 + 0x1b8,*(undefined8 *)(lVar9 + 0x1b8),lVar9 + 0x1c0);
    }
    uVar12 = **(ulong **)(lVar6 + 0x178) + 0x9e3779b9;
    **(ulong **)(lVar6 + 0x178) = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 ^ uVar12;
    FUN_10acd588c(&stack0xffffffffffffffb0);
    lVar9 = lVar9 + 0x1d0;
    FUN_10acaada8(lVar6 + 0x1d0,lVar9);
    FUN_10acd5500(&stack0xffffffffffffffc0);
    puVar8 = &stack0xffffffffffffffd0;
    FUN_10acd5084(puVar8);
    auVar22._8_8_ = lVar9;
    auVar22._0_8_ = puVar8;
    return auVar22;
  }
  if ((*(int *)(param_2 + 0x38) != 1) || (param_2[0x30] != '\x01')) {
    if (param_1[0x5e] != 0) {
      plVar5 = param_1 + 0x5e;
      param_2 = (undefined1 *)0x0;
      FUN_10acadaf8(param_1[0x5e],0,0);
      FUN_10a2f6cdc(&stack0xffffffffffffffd0);
      param_1 = plVar13;
      if (*(long *)(*plVar5 + 0x1a8) == 0) {
        param_2 = (undefined1 *)((long)plVar5 + (0xb8 - (ulong)uRam0000000113300f08));
        FUN_10a1bf080(*plVar5 + 0xc0,param_2);
        FUN_10a2f6e84(plVar5);
        FUN_10a2f6ee0(plVar5);
        param_1 = plVar5;
      }
    }
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = param_1;
    return auVar19;
  }
  FUN_10a42678c();
  puVar3 = (undefined8 *)*param_1;
  FUN_10acabcd4(puVar3,0);
  puVar3 = (undefined8 *)*puVar3;
  FUN_10acab67c(puVar3,0);
  if ((param_2[0x30] & 1) == 0) {
    FUN_10a04f808();
    FUN_10a2f6cdc(&stack0xffffffffffffffd0);
    __Unwind_Resume(puVar3);
    auVar20._8_8_ = 0x18;
    auVar20._0_8_ = &UNK_10f64c7f0;
    return auVar20;
  }
  ppppuVar4 = (undefined8 ****)*puVar3;
  ppppuVar1 = (undefined8 ****)(param_2 + 8);
  ppppuVar7 = ppppuVar4;
  ppppuVar10 = ppppuVar1;
  for (plVar13 = *(long **)(param_2 + 0x18); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    ppppuVar10 = (undefined8 ****)(plVar13 + 2);
    ppppuVar7 = ppppuVar4;
    FUN_10aca73d0(ppppuVar4,ppppuVar10,plVar13 + 5);
  }
  if ((undefined8 ****)ppppuVar4[0x3a] != ppppuVar4 + 0x3b) {
    ppppuVar14 = ppppuVar4 + 0x3a;
    ppppuVar11 = (undefined8 ****)ppppuVar4[0x3a];
    do {
      if (*(char *)((long)ppppuVar11 + 0x37) < '\0') {
        func_0x000107c3192c(&pppuStack_80,ppppuVar11[4],ppppuVar11[5]);
      }
      else {
        ppuStack_78 = ppppuVar11[5];
        pppuStack_80 = ppppuVar11[4];
        ppuStack_70 = ppppuVar11[6];
      }
      ppppuVar10 = &pppuStack_80;
      ppppuVar7 = ppppuVar1;
      FUN_10acd57a8(ppppuVar1,ppppuVar10);
      if (ppppuVar7 == (undefined8 ****)0x0) {
        uStack_88 = 0;
        uStack_98 = 0;
        pppuStack_a0 = ppppuVar14;
        pppuStack_90 = ppppuVar4 + 0x31;
        FUN_10aca3a2c(&pppuStack_80,0,ppppuVar11[8],ppppuVar4 + 0x31);
        pppuVar17 = ppppuVar4[0x2f];
        ppuVar18 = *pppuVar17;
        puVar8 = &uStack_61;
        func_0x000107c2b05c(puVar8,&pppuStack_80);
        uVar12 = (long)ppuVar18 + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        uVar12 = (ulong)(puVar8 + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9) ^ uVar12;
        uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        *pppuVar17 = (undefined8 **)
                     ((long)ppppuVar11[8] + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12);
        ppppuVar16 = ppppuVar14;
        func_0x00010acd5470(ppppuVar14,ppppuVar11);
        FUN_10acd4df4(&pppuStack_a0);
        ppppuVar7 = &pppuStack_90;
        FUN_10acd5084(ppppuVar7);
        ppppuVar10 = ppppuVar11;
      }
      else {
        ppppuVar15 = (undefined8 ****)ppppuVar11[1];
        if ((undefined8 ****)ppppuVar11[1] == (undefined8 ****)0x0) {
          do {
            ppppuVar16 = (undefined8 ****)ppppuVar11[2];
            bVar2 = (undefined8 ****)*ppppuVar16 != ppppuVar11;
            ppppuVar11 = ppppuVar16;
          } while (bVar2);
        }
        else {
          do {
            ppppuVar16 = ppppuVar15;
            ppppuVar15 = (undefined8 ****)*ppppuVar16;
          } while ((undefined8 ****)*ppppuVar16 != (undefined8 ****)0x0);
        }
      }
      if ((long)ppuStack_70 < 0) {
        ppppuVar7 = (undefined8 ****)pppuStack_80;
        __ZdlPv(pppuStack_80);
      }
      ppppuVar11 = ppppuVar16;
    } while (ppppuVar16 != ppppuVar4 + 0x3b);
  }
  ppppuVar14 = (undefined8 ****)ppppuVar4[0x31];
  if (ppppuVar14 != ppppuVar4 + 0x32) {
    ppppuVar11 = ppppuVar4 + 0x31;
    do {
      ppppuVar10 = ppppuVar14 + 4;
      ppppuVar7 = ppppuVar4;
      FUN_10aca9f80(ppppuVar4,ppppuVar10);
      if (((ulong)ppppuVar7 & 1) == 0) {
        ppppuVar10 = ppppuVar14 + 4;
        ppppuVar7 = ppppuVar1;
        FUN_10acd57a8(ppppuVar1,ppppuVar10);
        if (ppppuVar7 != (undefined8 ****)0x0) goto LAB_10acaa28c;
        ppuStack_78 = (undefined8 **)((ulong)ppuStack_78 & 0xffffffffffffff00);
        uVar12 = (long)*ppppuVar4[0x2f] + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        *ppppuVar4[0x2f] =
             (undefined8 **)
             ((long)ppppuVar14[7] + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12);
        ppppuVar16 = ppppuVar11;
        ppppuVar10 = ppppuVar14;
        pppuStack_80 = ppppuVar11;
        func_0x00010a364ee8(ppppuVar11,ppppuVar14);
        func_0x00010a0da8c8(ppppuVar14 + 4);
        __ZdlPv(ppppuVar14);
        ppppuVar7 = &pppuStack_80;
        FUN_10acd5084(ppppuVar7);
        ppppuVar14 = ppppuVar16;
      }
      else {
LAB_10acaa28c:
        ppppuVar16 = (undefined8 ****)ppppuVar14[1];
        ppppuVar15 = ppppuVar14;
        if ((undefined8 ****)ppppuVar14[1] == (undefined8 ****)0x0) {
          do {
            ppppuVar14 = (undefined8 ****)ppppuVar15[2];
            bVar2 = (undefined8 ****)*ppppuVar14 != ppppuVar15;
            ppppuVar15 = ppppuVar14;
          } while (bVar2);
        }
        else {
          do {
            ppppuVar14 = ppppuVar16;
            ppppuVar16 = (undefined8 ****)*ppppuVar14;
          } while ((undefined8 ****)*ppppuVar14 != (undefined8 ****)0x0);
        }
      }
    } while (ppppuVar14 != ppppuVar4 + 0x32);
  }
  ppppuVar14 = (undefined8 ****)ppppuVar4[0x34];
  if (ppppuVar14 != ppppuVar4 + 0x35) {
    ppppuVar11 = ppppuVar4 + 0x34;
    do {
      ppppuVar10 = ppppuVar14 + 4;
      ppppuVar7 = ppppuVar1;
      FUN_10acd57a8(ppppuVar1,ppppuVar10);
      if (ppppuVar7 == (undefined8 ****)0x0) {
        ppuStack_78 = (undefined8 **)((ulong)ppuStack_78 & 0xffffffffffffff00);
        uVar12 = (long)*ppppuVar4[0x2f] + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        *ppppuVar4[0x2f] =
             (undefined8 **)
             ((long)ppppuVar14[7] + (uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 ^ uVar12);
        ppppuVar16 = ppppuVar11;
        ppppuVar10 = ppppuVar14;
        pppuStack_80 = ppppuVar11;
        func_0x00010a364fe0(ppppuVar11,ppppuVar14);
        func_0x00010a36339c(ppppuVar14 + 4);
        __ZdlPv(ppppuVar14);
        ppppuVar7 = &pppuStack_80;
        FUN_10acd5500(ppppuVar7);
        ppppuVar14 = ppppuVar16;
      }
      else {
        ppppuVar16 = (undefined8 ****)ppppuVar14[1];
        ppppuVar15 = ppppuVar14;
        if ((undefined8 ****)ppppuVar14[1] == (undefined8 ****)0x0) {
          do {
            ppppuVar14 = (undefined8 ****)ppppuVar15[2];
            bVar2 = (undefined8 ****)*ppppuVar14 != ppppuVar15;
            ppppuVar15 = ppppuVar14;
          } while (bVar2);
        }
        else {
          do {
            ppppuVar14 = ppppuVar16;
            ppppuVar16 = (undefined8 ****)*ppppuVar14;
          } while ((undefined8 ****)*ppppuVar14 != (undefined8 ****)0x0);
        }
      }
    } while (ppppuVar14 != ppppuVar4 + 0x35);
  }
  auVar21._8_8_ = ppppuVar10;
  auVar21._0_8_ = ppppuVar7;
  return auVar21;
}



/* Entry: 10a2d619c; end: 10a2d6267;  */

undefined1  [16] FUN_10a2d619c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f64c7f0;
  return auVar1;
}



/* Entry: 10a2d6268; end: 10a2d688f;  */

void FUN_10a2d6268(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c7f0,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc1148;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc1148;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d6870;
    FUN_10a054dac(param_1,&UNK_10f64bfd7,FUN_10a2f7020,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d6870;
    FUN_10a054dac(param_1,&UNK_10f64bfe5,FUN_10a2f71a4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d6870;
    FUN_10a054dac(param_1,&UNK_10f64bffd,FUN_10a2f739c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d6870;
    FUN_10a054dac(param_1,&UNK_10f64beb2,FUN_10a2f7454,1,*(undefined8 *)(param_1 + 0x40));
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f64c013;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  uVar7 = param_1;
  func_0x00010a2f7584(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c01f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  func_0x00010a2f7584();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f64c02b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7768();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c037;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7768();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c043;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7a1c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f64c057;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7a1c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c06b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7c10();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f64c086;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a2f7c10();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64c09a,FUN_10a2f7e04,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a2f7f5c,FUN_10a2f8018);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bee1,FUN_10a2f86ac,FUN_10a2f8768);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c0a8,FUN_10a2f882c,FUN_10a2f890c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c0b6,FUN_10a2f8aa4,FUN_10a2f8b84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64c0c3,FUN_10a2f8c3c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c7f0,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2d6870:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d6874);
  (*pcVar6)();
}



/* Entry: 10a2d6890; end: 10a2d68a7;  */

undefined8 * FUN_10a2d6890(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)(param_1 + 0x218);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(lVar4 + 0x120);
  *(undefined8 *)(lVar4 + 0x120) = uVar8;
  *(undefined8 *)(lVar4 + 0x118) = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(lVar4 + 0x118);
}



/* Entry: 10a2d68a8; end: 10a2d698b;  */

void FUN_10a2d68a8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar4 = *(long **)(param_1 + 0x218);
  if (*param_2 == 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a2e25b8(plVar4 + 1,&uStack_30);
    FUN_10a32df84(plVar4 + 0xb,plVar4[1]);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_28 + 1;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    FUN_10a2e2708(&uStack_30,*(undefined8 *)(*plVar4 + 0x170),*param_2 + 0xe0);
    FUN_10a2e25b8(plVar4 + 1,&uStack_30);
    FUN_10a32df84(plVar4 + 0xb,plVar4[1]);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_28 + 1;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar4 = plStack_28;
  if (lVar3 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a2d698c; end: 10a2d6a0b;  */

void FUN_10a2d698c(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(*(long *)(param_1 + 0x218) + 0xd0);
    return;
  }
  return;
}



/* Entry: 10a2d6a0c; end: 10a2d6a97;  */

void FUN_10a2d6a0c(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  FUN_10a32df84(param_1 + 0x58,*(undefined8 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  lStack_28 = param_1 + 0x58;
  param_2 = param_2 + 0x210;
  FUN_10a507b84(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,param_1 + 200,param_1 + 200);
  return;
}



/* Entry: 10a2d6a98; end: 10a2d6a9f;  */

void FUN_10a2d6a98(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_10a32df84(lVar1 + 0x58,*(undefined8 *)(lVar1 + 8));
  if (*(char *)(lVar1 + 0x77) < '\0') {
    if (*(long *)(lVar1 + 0x68) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x77) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  lStack_28 = lVar1 + 0x58;
  param_2 = param_2 + 0x210;
  FUN_10a507b84(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,lVar1 + 200,lVar1 + 200);
  return;
}



/* Entry: 10a2d6aa0; end: 10a2d6b1b;  */

void FUN_10a2d6aa0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a2d6b1c; end: 10a2d6b3b;  */

void FUN_10a2d6b1c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a2d6b3c; end: 10a2d6c57;  */

undefined8 * FUN_10a2d6b3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[0x44] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x47) = 0x100;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbe320,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110bbe330);
  *param_1 = &PTR_FUN_110bbdff8;
  param_1[2] = &PTR_DAT_110bbe118;
  param_1[7] = &PTR_DAT_110bbe170;
  param_1[0xd] = &PTR_DAT_110bbe190;
  param_1[0x44] = &PTR_DAT_110bbe2e0;
  param_1[0x16] = &PTR_DAT_110bbe200;
  param_1[0x17] = &PTR_DAT_110bbe230;
  param_1[0x3e] = &PTR_DAT_110bbe268;
  param_1[0x43] = 0;
  uVar2 = 0x1b0;
  __Znwm(0x1b0);
  FUN_10a2f921c();
  FUN_10a2f9074(param_1 + 0x43,uVar2);
  return param_1;
}



/* Entry: 10a2d6c58; end: 10a2d6cef;  */

void FUN_10a2d6c58(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbdff8;
  param_1[2] = &PTR_DAT_110bbe118;
  param_1[7] = &PTR_DAT_110bbe170;
  param_1[0xd] = &PTR_DAT_110bbe190;
  param_1[0x44] = &PTR_DAT_110bbe2e0;
  param_1[0x16] = &PTR_DAT_110bbe200;
  param_1[0x17] = &PTR_DAT_110bbe230;
  param_1[0x3e] = &PTR_DAT_110bbe268;
  FUN_10a2f9074(param_1 + 0x43,0);
  param_1[0x3e] = &PTR_DAT_110bc1098;
  param_1[0x44] = &PTR_FUN_110bc1110;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc0f18;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x44] = &PTR_DAT_110bc1048;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d6cf0; end: 10a2d6d33;  */

void FUN_10a2d6cf0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbdff8;
  param_1[2] = &PTR_DAT_110bbe118;
  param_1[7] = &PTR_DAT_110bbe170;
  param_1[0xd] = &PTR_DAT_110bbe190;
  param_1[0x44] = &PTR_DAT_110bbe2e0;
  param_1[0x16] = &PTR_DAT_110bbe200;
  param_1[0x17] = &PTR_DAT_110bbe230;
  param_1[0x3e] = &PTR_DAT_110bbe268;
  FUN_10a2f9074(param_1 + 0x43,0);
  param_1[0x3e] = &PTR_DAT_110bc1098;
  param_1[0x44] = &PTR_FUN_110bc1110;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc0f18;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x44] = &PTR_DAT_110bc1048;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d6d34; end: 10a2d6dd7;  */

void FUN_10a2d6d34(void)

{
  FUN_10a2d6c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2d6dd8; end: 10a2d6e07;  */

void FUN_10a2d6dd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a2d6c58((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2d6e08; end: 10a2d7273;  */

void FUN_10a2d6e08(undefined *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  long *plVar14;
  ushort uVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long lVar20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar24;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = *(long *)(param_1 + 0x218);
    if (*(long *)(unaff_x21 + 0x18) != 0) break;
    unaff_x19 = &UNK_10f64c0d6;
    FUN_10a00946c();
    FUN_10a2f2568((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10a2d7274;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  }
  lVar21 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_2 + 0x108) == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  }
  else {
    FUN_10a4d5e30((undefined1 *)((long)register0x00000008 + -0x80),*(long *)(param_2 + 0x108),
                  unaff_x21 + 0x58);
    if (*(long *)((long)register0x00000008 + -0x80) != 0) {
      piVar19 = (int *)(unaff_x21 + 0x28);
      cVar12 = *(char *)(unaff_x21 + 0x3f);
      if (cVar12 < '\0') {
        if (*(long *)(unaff_x21 + 0x30) != 0) {
          if (*(long *)(unaff_x21 + 0x30) == 6) {
            piVar19 = *(int **)piVar19;
            goto LAB_10a2d6e90;
          }
          goto LAB_10a2d6eb0;
        }
      }
      else if (cVar12 != '\0') {
        if (cVar12 == '\x06') {
LAB_10a2d6e90:
          if (*piVar19 == 0x746e6563 && (short)piVar19[1] == 0x7265) goto LAB_10a2d6ebc;
        }
LAB_10a2d6eb0:
        lVar16 = *(long *)((long)register0x00000008 + -0x80) + 0x168;
        func_0x00010a2f8f90();
        if (lVar16 == 0) {
          plVar22 = *(long **)((long)register0x00000008 + -0x78);
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          if (plVar22 == (long *)0x0) goto LAB_10a2d6f6c;
          plVar23 = plVar22 + 1;
          do {
            lVar16 = *plVar23;
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar13) {
              *plVar23 = lVar16 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          }
        }
      }
LAB_10a2d6ebc:
      lVar16 = *(long *)((long)register0x00000008 + -0x80);
      if (lVar16 != 0) {
        lVar20 = *(long *)(unaff_x21 + 0x18);
        if (*(int *)(lVar20 + 0x38) != *(int *)(lVar16 + 0x18)) {
          *(int *)(lVar20 + 0x38) = *(int *)(lVar16 + 0x18);
          if (*(char *)(lVar16 + 0x37) < '\0') {
            func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xa0),
                                *(undefined8 *)(lVar16 + 0x20),*(undefined8 *)(lVar16 + 0x28));
          }
          else {
            uVar24 = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(lVar16 + 0x30);
          }
          if (*(char *)(lVar20 + 0x57) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar20 + 0x40));
          }
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)(lVar20 + 0x40) = uVar24;
          *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined1 *)((long)register0x00000008 + -0x89) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xa0) = 0;
        }
      }
    }
  }
LAB_10a2d6f6c:
  func_0x00010acb1720(*(long *)(unaff_x21 + 0x18) + 0x18,
                      (undefined1 *)((long)register0x00000008 + -0x80));
  lVar16 = *(long *)((long)register0x00000008 + -0x80);
  iVar18 = 1;
  if (lVar16 == 0) {
    iVar18 = 2;
  }
  iVar9 = *(int *)(unaff_x21 + 0x114);
  *(int *)(unaff_x21 + 0x114) = iVar18;
  if (iVar9 != iVar18) {
    if (lVar16 == 0) {
      if (iVar9 == 0) goto LAB_10a2d6f9c;
      puVar17 = *(undefined8 **)(unaff_x21 + 0x128);
    }
    else {
      FUN_10a76c260(*(undefined8 *)(lVar21 + 0x8d8),3);
      puVar17 = *(undefined8 **)(unaff_x21 + 0x118);
    }
    if (puVar17 != (undefined8 *)0x0) {
      if (*(char *)(puVar17 + 8) == '\x01') {
        (*(code *)*puVar17)();
      }
      else if (*(char *)(puVar17 + 8) == '\x02') {
        FUN_10a05e614();
      }
    }
  }
LAB_10a2d6f9c:
  lVar21 = *(long *)(unaff_x21 + 0x18);
  func_0x00010acb1698();
  for (plVar22 = *(long **)(unaff_x21 + 0x198); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22)
  {
    lVar16 = unaff_x21 + 0x138;
    func_0x00010596ff94(lVar16,plVar22 + 2);
    if ((lVar16 != 0) && (lVar16 = lVar21, func_0x00010a2f8dc8(lVar21,plVar22 + 2), lVar16 == 0)) {
      plVar14 = (long *)plVar22[6];
      for (plVar23 = (long *)plVar22[5]; plVar23 != plVar14; plVar23 = plVar23 + 2) {
        puVar17 = (undefined8 *)*plVar23;
        if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
          if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
            (*(code *)*puVar17)(plVar22 + 2,puVar17);
          }
        }
        else {
          FUN_10a05aad0(puVar17,plVar22 + 2);
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x50) = 0x3f800000;
  for (plVar22 = *(long **)(lVar21 + 0x10); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    if (*(char *)(plVar22 + 7) == '\x01') {
      func_0x000107c2827c((undefined1 *)((long)register0x00000008 + -0x70),plVar22 + 2,plVar22 + 2);
      lVar21 = unaff_x21 + 0x138;
      func_0x00010596ff94(lVar21,plVar22 + 2);
      if (lVar21 == 0) {
        lVar21 = unaff_x21 + 0x160;
        func_0x00010a2f8eac(lVar21,plVar22 + 2);
        if (lVar21 != 0) {
          plVar14 = *(long **)(lVar21 + 0x30);
          for (plVar23 = *(long **)(lVar21 + 0x28); plVar23 != plVar14; plVar23 = plVar23 + 2) {
            puVar17 = (undefined8 *)*plVar23;
            if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
              if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
                (*(code *)*puVar17)(plVar22 + 2,puVar17);
              }
            }
            else {
              FUN_10a05aad0(puVar17,plVar22 + 2);
            }
          }
        }
      }
    }
    if (*(char *)((long)plVar22 + 0x3a) == '\x01') {
      lVar21 = unaff_x21 + 0x188;
      func_0x00010a2f8eac(lVar21,plVar22 + 2);
      if (lVar21 != 0) {
        plVar14 = *(long **)(lVar21 + 0x30);
        for (plVar23 = *(long **)(lVar21 + 0x28); plVar23 != plVar14; plVar23 = plVar23 + 2) {
          puVar17 = (undefined8 *)*plVar23;
          if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
            if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
              (*(code *)*puVar17)(plVar22 + 2,puVar17);
            }
          }
          else {
            FUN_10a05aad0(puVar17,plVar22 + 2);
          }
        }
      }
    }
  }
  func_0x000107c283f0(unaff_x21 + 0x138,(undefined1 *)((long)register0x00000008 + -0x70));
  func_0x000107c2826c((undefined1 *)((long)register0x00000008 + -0x70));
  lVar21 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x18);
  plVar22 = *(long **)((long)register0x00000008 + -0x78);
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 1;
    do {
      lVar16 = *plVar23;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar13) {
        *plVar23 = lVar16 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  lVar16 = *(long *)(param_1 + 0x168);
  uVar10 = (ushort)(lVar21 != 0) | (*(byte *)(*(long *)(param_1 + 0x218) + 0x110) ^ 0xffff) & 1;
  uVar24 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -8);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar15 = *(ushort *)(lVar16 + 0x118);
  if ((uVar10 == ((uVar15 & 1) == 0)) ||
     (uVar10 = uVar10 ^ 1, *(ushort *)(lVar16 + 0x118) = uVar15 & 0xfffe | uVar10,
     ((uVar15 & 0x13) == 0) == ((uVar15 & 0x12) == 0 && uVar10 == 0))) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar24;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar5;
  uVar10 = *(ushort *)(lVar16 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(lVar16 + 0x120) + 0xa20) + 0x18)) {
    bVar13 = (uVar10 & 0x13) == 0;
    lVar21 = 0x228;
    if (!bVar13) {
      lVar21 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar16 + lVar21));
    if (bVar13 != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  FUN_10a3faba8(lVar16,(undefined1 *)((long)register0x00000008 + -0x80));
  plVar22 = *(long **)((long)register0x00000008 + -0x80);
  plVar23 = *(long **)((long)register0x00000008 + -0x78);
  if (plVar22 != plVar23) {
    uVar15 = 0;
    if ((uVar10 & 0x13) != 0) {
      uVar15 = 4;
    }
    do {
      plVar14 = (long *)plVar22[1];
      if ((plVar14 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
        lVar21 = *plVar22;
        plVar1 = plVar14 + 1;
        do {
          lVar20 = *plVar1;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar20 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
        if ((lVar21 != 0) && (uVar11 = *(ushort *)(lVar21 + 0x180), (uVar11 >> 4 & 1) == 0)) {
          if ((((uVar10 & 0x13) == 0) != ((uVar11 & 4) == 0)) &&
             (*(ushort *)(lVar21 + 0x180) = uVar11 & 0xffeb | uVar15,
             ((uVar11 & 7) == 0) != ((uVar11 & 3) == 0 && uVar15 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar21 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar21);
            }
            else {
              FUN_10a3c7718(lVar21);
            }
          }
          if (((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar22 = plVar22 + 2;
    } while (plVar22 != plVar23);
  }
  if (*(int *)(*(long *)(*(long *)(lVar16 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar21 = 0x228;
    if ((uVar10 & 0x13) != 0) {
      lVar21 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar16 + lVar21));
  }
  FUN_10a3e45e0((undefined1 *)((long)register0x00000008 + -0x98),lVar16);
  plVar23 = *(long **)((long)register0x00000008 + -0x90);
  for (plVar22 = *(long **)((long)register0x00000008 + -0x98); plVar22 != plVar23;
      plVar22 = plVar22 + 2) {
    plVar14 = (long *)plVar22[1];
    if ((plVar14 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
      lVar21 = *plVar22;
      plVar1 = plVar14 + 1;
      do {
        lVar20 = *plVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar20 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
      if (((lVar21 != 0) && ((*(ushort *)(lVar21 + 0x118) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(lVar21,(uVar10 & 0x13) == 0),
         ((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0))) break;
    }
  }
  *(undefined1 **)((long)register0x00000008 + -0x68) =
       (undefined1 *)((long)register0x00000008 + -0x98);
  func_0x00010a2e3118((undefined1 *)((long)register0x00000008 + -0x68));
LAB_10a3e44d0:
  *(undefined1 **)((long)register0x00000008 + -0x98) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  FUN_10a0d80a4((undefined1 *)((long)register0x00000008 + -0x98));
  return;
}



/* Entry: 10a2d7274; end: 10a2d7283;  */

void FUN_10a2d7274(undefined *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  long *plVar14;
  ushort uVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  undefined *unaff_x19;
  long lVar20;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar24;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = *(long *)(param_1 + 0x28);
    if (*(long *)(unaff_x21 + 0x18) != 0) break;
    unaff_x19 = &UNK_10f64c0d6;
    FUN_10a00946c();
    FUN_10a2f2568((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10a2d7274;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  }
  lVar21 = *(long *)(param_1 + -0x80);
  if (*(long *)(param_2 + 0x108) == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  }
  else {
    FUN_10a4d5e30((undefined1 *)((long)register0x00000008 + -0x80),*(long *)(param_2 + 0x108),
                  unaff_x21 + 0x58);
    if (*(long *)((long)register0x00000008 + -0x80) != 0) {
      piVar19 = (int *)(unaff_x21 + 0x28);
      cVar12 = *(char *)(unaff_x21 + 0x3f);
      if (cVar12 < '\0') {
        if (*(long *)(unaff_x21 + 0x30) != 0) {
          if (*(long *)(unaff_x21 + 0x30) == 6) {
            piVar19 = *(int **)piVar19;
            goto LAB_10a2d6e90;
          }
          goto LAB_10a2d6eb0;
        }
      }
      else if (cVar12 != '\0') {
        if (cVar12 == '\x06') {
LAB_10a2d6e90:
          if (*piVar19 == 0x746e6563 && (short)piVar19[1] == 0x7265) goto LAB_10a2d6ebc;
        }
LAB_10a2d6eb0:
        lVar16 = *(long *)((long)register0x00000008 + -0x80) + 0x168;
        func_0x00010a2f8f90();
        if (lVar16 == 0) {
          plVar22 = *(long **)((long)register0x00000008 + -0x78);
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          if (plVar22 == (long *)0x0) goto LAB_10a2d6f6c;
          plVar23 = plVar22 + 1;
          do {
            lVar16 = *plVar23;
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar13) {
              *plVar23 = lVar16 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          }
        }
      }
LAB_10a2d6ebc:
      lVar16 = *(long *)((long)register0x00000008 + -0x80);
      if (lVar16 != 0) {
        lVar20 = *(long *)(unaff_x21 + 0x18);
        if (*(int *)(lVar20 + 0x38) != *(int *)(lVar16 + 0x18)) {
          *(int *)(lVar20 + 0x38) = *(int *)(lVar16 + 0x18);
          if (*(char *)(lVar16 + 0x37) < '\0') {
            func_0x000107c3192c((undefined1 *)((long)register0x00000008 + -0xa0),
                                *(undefined8 *)(lVar16 + 0x20),*(undefined8 *)(lVar16 + 0x28));
          }
          else {
            uVar24 = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar24;
            *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(lVar16 + 0x30);
          }
          if (*(char *)(lVar20 + 0x57) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar20 + 0x40));
          }
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)((long)register0x00000008 + -0x98);
          *(undefined8 *)(lVar20 + 0x40) = uVar24;
          *(undefined8 *)(lVar20 + 0x50) = *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined1 *)((long)register0x00000008 + -0x89) = 0;
          *(undefined1 *)((long)register0x00000008 + -0xa0) = 0;
        }
      }
    }
  }
LAB_10a2d6f6c:
  func_0x00010acb1720(*(long *)(unaff_x21 + 0x18) + 0x18,
                      (undefined1 *)((long)register0x00000008 + -0x80));
  lVar16 = *(long *)((long)register0x00000008 + -0x80);
  iVar18 = 1;
  if (lVar16 == 0) {
    iVar18 = 2;
  }
  iVar9 = *(int *)(unaff_x21 + 0x114);
  *(int *)(unaff_x21 + 0x114) = iVar18;
  if (iVar9 != iVar18) {
    if (lVar16 == 0) {
      if (iVar9 == 0) goto LAB_10a2d6f9c;
      puVar17 = *(undefined8 **)(unaff_x21 + 0x128);
    }
    else {
      FUN_10a76c260(*(undefined8 *)(lVar21 + 0x8d8),3);
      puVar17 = *(undefined8 **)(unaff_x21 + 0x118);
    }
    if (puVar17 != (undefined8 *)0x0) {
      if (*(char *)(puVar17 + 8) == '\x01') {
        (*(code *)*puVar17)();
      }
      else if (*(char *)(puVar17 + 8) == '\x02') {
        FUN_10a05e614();
      }
    }
  }
LAB_10a2d6f9c:
  lVar21 = *(long *)(unaff_x21 + 0x18);
  func_0x00010acb1698();
  for (plVar22 = *(long **)(unaff_x21 + 0x198); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22)
  {
    lVar16 = unaff_x21 + 0x138;
    func_0x00010596ff94(lVar16,plVar22 + 2);
    if ((lVar16 != 0) && (lVar16 = lVar21, func_0x00010a2f8dc8(lVar21,plVar22 + 2), lVar16 == 0)) {
      plVar14 = (long *)plVar22[6];
      for (plVar23 = (long *)plVar22[5]; plVar23 != plVar14; plVar23 = plVar23 + 2) {
        puVar17 = (undefined8 *)*plVar23;
        if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
          if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
            (*(code *)*puVar17)(plVar22 + 2,puVar17);
          }
        }
        else {
          FUN_10a05aad0(puVar17,plVar22 + 2);
        }
      }
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x50) = 0x3f800000;
  for (plVar22 = *(long **)(lVar21 + 0x10); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    if (*(char *)(plVar22 + 7) == '\x01') {
      func_0x000107c2827c((undefined1 *)((long)register0x00000008 + -0x70),plVar22 + 2,plVar22 + 2);
      lVar21 = unaff_x21 + 0x138;
      func_0x00010596ff94(lVar21,plVar22 + 2);
      if (lVar21 == 0) {
        lVar21 = unaff_x21 + 0x160;
        func_0x00010a2f8eac(lVar21,plVar22 + 2);
        if (lVar21 != 0) {
          plVar14 = *(long **)(lVar21 + 0x30);
          for (plVar23 = *(long **)(lVar21 + 0x28); plVar23 != plVar14; plVar23 = plVar23 + 2) {
            puVar17 = (undefined8 *)*plVar23;
            if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
              if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
                (*(code *)*puVar17)(plVar22 + 2,puVar17);
              }
            }
            else {
              FUN_10a05aad0(puVar17,plVar22 + 2);
            }
          }
        }
      }
    }
    if (*(char *)((long)plVar22 + 0x3a) == '\x01') {
      lVar21 = unaff_x21 + 0x188;
      func_0x00010a2f8eac(lVar21,plVar22 + 2);
      if (lVar21 != 0) {
        plVar14 = *(long **)(lVar21 + 0x30);
        for (plVar23 = *(long **)(lVar21 + 0x28); plVar23 != plVar14; plVar23 = plVar23 + 2) {
          puVar17 = (undefined8 *)*plVar23;
          if (puVar17 == (undefined8 *)0x0 || *(char *)(puVar17 + 8) != '\x02') {
            if (puVar17 != (undefined8 *)0x0 && *(char *)(puVar17 + 8) == '\x01') {
              (*(code *)*puVar17)(plVar22 + 2,puVar17);
            }
          }
          else {
            FUN_10a05aad0(puVar17,plVar22 + 2);
          }
        }
      }
    }
  }
  func_0x000107c283f0(unaff_x21 + 0x138,(undefined1 *)((long)register0x00000008 + -0x70));
  func_0x000107c2826c((undefined1 *)((long)register0x00000008 + -0x70));
  lVar21 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x18);
  plVar22 = *(long **)((long)register0x00000008 + -0x78);
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 1;
    do {
      lVar16 = *plVar23;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar13) {
        *plVar23 = lVar16 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  lVar16 = *(long *)(param_1 + -0x88);
  uVar10 = (ushort)(lVar21 != 0) | (*(byte *)(*(long *)(param_1 + 0x28) + 0x110) ^ 0xffff) & 1;
  uVar24 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -8);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar15 = *(ushort *)(lVar16 + 0x118);
  if ((uVar10 == ((uVar15 & 1) == 0)) ||
     (uVar10 = uVar10 ^ 1, *(ushort *)(lVar16 + 0x118) = uVar15 & 0xfffe | uVar10,
     ((uVar15 & 0x13) == 0) == ((uVar15 & 0x12) == 0 && uVar10 == 0))) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar24;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar5;
  uVar10 = *(ushort *)(lVar16 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(lVar16 + 0x120) + 0xa20) + 0x18)) {
    bVar13 = (uVar10 & 0x13) == 0;
    lVar21 = 0x228;
    if (!bVar13) {
      lVar21 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar16 + lVar21));
    if (bVar13 != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  FUN_10a3faba8(lVar16,(undefined1 *)((long)register0x00000008 + -0x80));
  plVar22 = *(long **)((long)register0x00000008 + -0x80);
  plVar23 = *(long **)((long)register0x00000008 + -0x78);
  if (plVar22 != plVar23) {
    uVar15 = 0;
    if ((uVar10 & 0x13) != 0) {
      uVar15 = 4;
    }
    do {
      plVar14 = (long *)plVar22[1];
      if ((plVar14 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
        lVar21 = *plVar22;
        plVar1 = plVar14 + 1;
        do {
          lVar20 = *plVar1;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar20 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
        if ((lVar21 != 0) && (uVar11 = *(ushort *)(lVar21 + 0x180), (uVar11 >> 4 & 1) == 0)) {
          if ((((uVar10 & 0x13) == 0) != ((uVar11 & 4) == 0)) &&
             (*(ushort *)(lVar21 + 0x180) = uVar11 & 0xffeb | uVar15,
             ((uVar11 & 7) == 0) != ((uVar11 & 3) == 0 && uVar15 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar21 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar21);
            }
            else {
              FUN_10a3c7718(lVar21);
            }
          }
          if (((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar22 = plVar22 + 2;
    } while (plVar22 != plVar23);
  }
  if (*(int *)(*(long *)(*(long *)(lVar16 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar21 = 0x228;
    if ((uVar10 & 0x13) != 0) {
      lVar21 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar16 + lVar21));
  }
  FUN_10a3e45e0((undefined1 *)((long)register0x00000008 + -0x98),lVar16);
  plVar23 = *(long **)((long)register0x00000008 + -0x90);
  for (plVar22 = *(long **)((long)register0x00000008 + -0x98); plVar22 != plVar23;
      plVar22 = plVar22 + 2) {
    plVar14 = (long *)plVar22[1];
    if ((plVar14 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
      lVar21 = *plVar22;
      plVar1 = plVar14 + 1;
      do {
        lVar20 = *plVar1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar20 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
      if (((lVar21 != 0) && ((*(ushort *)(lVar21 + 0x118) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(lVar21,(uVar10 & 0x13) == 0),
         ((uVar10 & 0x13) == 0) != ((*(ushort *)(lVar16 + 0x118) & 0x13) == 0))) break;
    }
  }
  *(undefined1 **)((long)register0x00000008 + -0x68) =
       (undefined1 *)((long)register0x00000008 + -0x98);
  func_0x00010a2e3118((undefined1 *)((long)register0x00000008 + -0x68));
LAB_10a3e44d0:
  *(undefined1 **)((long)register0x00000008 + -0x98) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  FUN_10a0d80a4((undefined1 *)((long)register0x00000008 + -0x98));
  return;
}



/* Entry: 10a2d7284; end: 10a2d74e7;  */

void FUN_10a2d7284(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 extraout_d1;
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar8 = *(long *)(param_1[3] + 0x18);
  plVar1 = *(long **)(param_1[3] + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar9 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_48 = lVar8;
  plStack_40 = plVar1;
  if (lVar8 == 0) goto LAB_10a2d7474;
  plVar9 = param_1 + 5;
  uVar5 = (uint)*(byte *)((long)param_1 + 0x3f);
  if ((char)*(byte *)((long)param_1 + 0x3f) < '\0') {
    if (param_1[6] == 6) {
      plVar7 = (long *)*plVar9;
      goto LAB_10a2d72f4;
    }
LAB_10a2d7314:
    lVar10 = lVar8 + 0x168;
    func_0x00010a2f8f90(lVar10,plVar9);
    if (lVar10 == 0) goto LAB_10a2d7474;
    uVar5 = (uint)*(byte *)((long)param_1 + 0x3f);
  }
  else {
    plVar7 = plVar9;
    if (uVar5 != 6) goto LAB_10a2d7314;
LAB_10a2d72f4:
    if ((int)*plVar7 != 0x746e6563 || *(short *)((long)plVar7 + 4) != 0x7265) goto LAB_10a2d7314;
  }
  if (uVar5 >> 7 == 0) {
    plVar7 = plVar9;
    if (uVar5 != 6) goto LAB_10a2d736c;
LAB_10a2d734c:
    if ((int)*plVar7 != 0x746e6563 || *(short *)((long)plVar7 + 4) != 0x7265) goto LAB_10a2d736c;
    pfVar6 = (float *)(lVar8 + 0x38);
  }
  else {
    if (param_1[6] == 6) {
      plVar7 = (long *)*plVar9;
      goto LAB_10a2d734c;
    }
LAB_10a2d736c:
    lVar10 = lVar8 + 0x168;
    plStack_60 = plVar9;
    FUN_10a2f939c(lVar10,plVar9,&UNK_10dd5b8f9,&plStack_60,&uStack_31);
    pfVar6 = (float *)(lVar10 + 0x28);
  }
  plVar9 = param_1 + 8;
  lVar10 = *(long *)(*(long *)(*param_1 + 0x168) + 0x248);
  if (lVar10 != 0) {
    fVar14 = *pfVar6;
    uVar17 = *(undefined8 *)(lVar8 + 0x40);
    fVar11 = 1.0 - pfVar6[1];
    *(undefined1 *)(lVar10 + 0x219) = 1;
    auVar15 = NEON_fmov(0xbf800000,4);
    fVar12 = fVar14 + fVar14 + auVar15._0_4_;
    fVar16 = (float)uVar17;
    fVar18 = (float)((ulong)uVar17 >> 0x20);
    plStack_60 = (long *)CONCAT44((fVar11 + fVar11 + auVar15._4_4_) - fVar18,fVar12 - fVar16);
    uStack_58 = CONCAT44(fVar11 + fVar11 + auVar15._12_4_ + fVar18,
                         fVar14 + fVar14 + auVar15._8_4_ + fVar16);
    FUN_10a395800(fVar12 + fVar16,lVar10,&plStack_60);
    FUN_10a395710(0,0,0,0,lVar10);
    lVar4 = lVar8 + 0x1e0;
    FUN_10a2f98fc(lVar4,plVar9);
    if (lVar4 != 0) {
      lVar8 = lVar8 + 0x1e0;
      plStack_60 = plVar9;
      FUN_10a2f99e0(lVar8,plVar9,&UNK_10dd5b8f9,&plStack_60,&uStack_31);
      fVar11 = -*(float *)(lVar8 + 0x28);
      _atan2f(fVar11);
      fVar11 = fVar11 * 0.5;
      uVar13 = 0;
      ___sincosf_stret(fVar11);
      FUN_10a395654(fVar11 * 0.0,fVar11 * 0.0,CONCAT44(uVar13,fVar11),extraout_d1,lVar10);
    }
  }
LAB_10a2d7474:
  if (plVar1 != (long *)0x0) {
    plVar9 = plVar1 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2d74e8; end: 10a2d74ef;  */

void FUN_10a2d74e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  float *pfVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 extraout_d1;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar5 = *(long **)(param_1 + 0x1b0);
  lVar9 = *(long *)(plVar5[3] + 0x18);
  plVar1 = *(long **)(plVar5[3] + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar10 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_48 = lVar9;
  plStack_40 = plVar1;
  if (lVar9 == 0) goto LAB_10a2d7474;
  plVar10 = plVar5 + 5;
  uVar6 = (uint)*(byte *)((long)plVar5 + 0x3f);
  if ((char)*(byte *)((long)plVar5 + 0x3f) < '\0') {
    if (plVar5[6] == 6) {
      plVar8 = (long *)*plVar10;
      goto LAB_10a2d72f4;
    }
LAB_10a2d7314:
    lVar11 = lVar9 + 0x168;
    func_0x00010a2f8f90(lVar11,plVar10);
    if (lVar11 == 0) goto LAB_10a2d7474;
    uVar6 = (uint)*(byte *)((long)plVar5 + 0x3f);
  }
  else {
    plVar8 = plVar10;
    if (uVar6 != 6) goto LAB_10a2d7314;
LAB_10a2d72f4:
    if ((int)*plVar8 != 0x746e6563 || *(short *)((long)plVar8 + 4) != 0x7265) goto LAB_10a2d7314;
  }
  if (uVar6 >> 7 == 0) {
    plVar8 = plVar10;
    if (uVar6 != 6) goto LAB_10a2d736c;
LAB_10a2d734c:
    if ((int)*plVar8 != 0x746e6563 || *(short *)((long)plVar8 + 4) != 0x7265) goto LAB_10a2d736c;
    pfVar7 = (float *)(lVar9 + 0x38);
  }
  else {
    if (plVar5[6] == 6) {
      plVar8 = (long *)*plVar10;
      goto LAB_10a2d734c;
    }
LAB_10a2d736c:
    lVar11 = lVar9 + 0x168;
    plStack_60 = plVar10;
    FUN_10a2f939c(lVar11,plVar10,&UNK_10dd5b8f9,&plStack_60,&uStack_31);
    pfVar7 = (float *)(lVar11 + 0x28);
  }
  plVar10 = plVar5 + 8;
  lVar11 = *(long *)(*(long *)(*plVar5 + 0x168) + 0x248);
  if (lVar11 != 0) {
    fVar15 = *pfVar7;
    uVar18 = *(undefined8 *)(lVar9 + 0x40);
    fVar12 = 1.0 - pfVar7[1];
    *(undefined1 *)(lVar11 + 0x219) = 1;
    auVar16 = NEON_fmov(0xbf800000,4);
    fVar13 = fVar15 + fVar15 + auVar16._0_4_;
    fVar17 = (float)uVar18;
    fVar19 = (float)((ulong)uVar18 >> 0x20);
    plStack_60 = (long *)CONCAT44((fVar12 + fVar12 + auVar16._4_4_) - fVar19,fVar13 - fVar17);
    uStack_58 = CONCAT44(fVar12 + fVar12 + auVar16._12_4_ + fVar19,
                         fVar15 + fVar15 + auVar16._8_4_ + fVar17);
    FUN_10a395800(fVar13 + fVar17,lVar11,&plStack_60);
    FUN_10a395710(0,0,0,0,lVar11);
    lVar4 = lVar9 + 0x1e0;
    FUN_10a2f98fc(lVar4,plVar10);
    if (lVar4 != 0) {
      lVar9 = lVar9 + 0x1e0;
      plStack_60 = plVar10;
      FUN_10a2f99e0(lVar9,plVar10,&UNK_10dd5b8f9,&plStack_60,&uStack_31);
      fVar12 = -*(float *)(lVar9 + 0x28);
      _atan2f(fVar12);
      fVar12 = fVar12 * 0.5;
      uVar14 = 0;
      ___sincosf_stret(fVar12);
      FUN_10a395654(fVar12 * 0.0,fVar12 * 0.0,CONCAT44(uVar14,fVar12),extraout_d1,lVar11);
    }
  }
LAB_10a2d7474:
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2d74f0; end: 10a2d783f;  */

void FUN_10a2d74f0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined1 uStack_51;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar8 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar4;
    lVar11 = *plVar8;
  }
  lVar12 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar12);
  FUN_10a2f9f6c(lVar12,lVar11,uVar10);
  plVar8 = (long *)0x28;
  __Znwm();
  plVar13 = plVar8 + 1;
  *plVar13 = 0;
  *plVar8 = (long)&PTR_FUN_110bc3010;
  plVar8[2] = 0;
  plVar8[3] = lVar12;
  plVar8[4] = (long)FUN_10a3df8cc;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a2d7654;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar11 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a2d7654:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
  *(ushort *)(lVar12 + 0x180) = uVar3 | *(ushort *)(lVar12 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar12 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_50 = lVar12;
  plStack_48 = plVar8;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar13 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar11 = *(long *)(lVar12 + 0x218);
  FUN_10a2e25b8(lVar11 + 8,*(long *)(param_2 + 0x218) + 8);
  FUN_10a32df84(lVar11 + 0x58,*(undefined8 *)(lVar11 + 8));
  lVar9 = *(long *)(lVar12 + 0x218);
  lVar11 = *(long *)(param_2 + 0x218);
  if (*(uint *)(lVar11 + 200) < 0x80) {
    *(uint *)(lVar9 + 200) = *(uint *)(lVar11 + 200);
  }
  uVar5 = *(ulong *)(lVar11 + 0xd8);
  if (-1 < (char)*(byte *)(lVar11 + 0xe7)) {
    uVar5 = (ulong)*(byte *)(lVar11 + 0xe7);
  }
  if (uVar5 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar9 + 0xd0,lVar11 + 0xd0);
    lVar11 = *(long *)(param_2 + 0x218);
    lVar9 = *(long *)(lVar12 + 0x218);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x28,lVar11 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(lVar12 + 0x218) + 0x40,*(long *)(param_2 + 0x218) + 0x40);
  FUN_10a2fa090(&lStack_50,&uStack_51,*(undefined8 *)(*(long *)(param_2 + 0x218) + 0x18));
  FUN_10a2d7840(*(long *)(lVar12 + 0x218) + 0x18,&lStack_50);
  plVar13 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  param_1[1] = (long)plVar8;
  *param_1 = lVar12;
  return;
}



/* Entry: 10a2d7840; end: 10a2d78a3;  */

undefined8 * FUN_10a2d7840(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a2d78a4; end: 10a2d7a73;  */

void FUN_10a2d78a4(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  long lVar6;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined7 uStack_80;
  byte bStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  lVar6 = *(long *)(param_1 + 0x218);
  pcStack_78 = FUN_10a2fa3ec;
  ppuStack_70 = &PTR_FUN_110bc3050;
  lStack_68 = lVar6;
  FUN_10a2d7b10(param_2,&PTR_DAT_110bbe350,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bbe370);
  if ((uint)plVar3 < 0x80) {
    *(uint *)(lVar6 + 200) = (uint)plVar3;
  }
  (**(code **)(*param_2 + 0xa0))(&uStack_90,param_2,&PTR_DAT_110bbe390);
  uVar5 = (uint)(char)bStack_79;
  uVar1 = uStack_88;
  if (-1 < (int)uVar5) {
    uVar1 = (ulong)bStack_79;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar6 + 0xd0,&uStack_90);
    uVar5 = (uint)bStack_79;
  }
  if ((uVar5 >> 7 & 1) != 0) {
    __ZdlPv(uStack_90);
  }
  (**(code **)(*param_2 + 0xa0))(&uStack_90,param_2,&PTR_DAT_110bbe3b0);
  if (*(char *)(lVar6 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar6 + 0x28));
  }
  *(ulong *)(lVar6 + 0x30) = uStack_88;
  *(undefined8 *)(lVar6 + 0x28) = uStack_90;
  *(ulong *)(lVar6 + 0x38) = CONCAT17(bStack_79,uStack_80);
  ppuVar4 = &PTR_DAT_110bbe3d0;
  (**(code **)(*param_2 + 0xa0))(&uStack_90);
  if (*(char *)(lVar6 + 0x57) < '\0') {
    param_2 = *(long **)(lVar6 + 0x40);
    __ZdlPv();
  }
  *(ulong *)(lVar6 + 0x48) = uStack_88;
  *(undefined8 *)(lVar6 + 0x40) = uStack_90;
  *(ulong *)(lVar6 + 0x50) = CONCAT17(bStack_79,uStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(uStack_90);
    }
    plVar3 = param_2;
    __Unwind_Resume();
    pcStack_98 = FUN_10a2d7a74;
    lStack_b0 = lVar6;
    plStack_a8 = param_2;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010a3c7928();
    lVar6 = plVar3[0x43];
    FUN_10a2d7cdc(ppuVar4,&PTR_DAT_110bbe350,lVar6 + 8,&UNK_10f64c852,0x19);
    (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110bbe370,*(undefined4 *)(lVar6 + 200));
    FUN_10a00d760(ppuVar4,&PTR_DAT_110bbe390,lVar6 + 0xd0);
    FUN_10a00d760(ppuVar4,&PTR_DAT_110bbe3b0,lVar6 + 0x28);
    lStack_b0 = lVar6 + 0x40;
    plStack_a8 = (long *)(long)*(char *)(lVar6 + 0x57);
    if ((long)plStack_a8 < 0) {
      lStack_b0 = *(long *)lStack_b0;
      plStack_a8 = *(long **)(lVar6 + 0x48);
      if ((long)plStack_a8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
        (*pcVar2)();
      }
    }
    (**(code **)(*ppuVar4 + 0x30))(ppuVar4,&PTR_DAT_110bbe3d0,&lStack_b0);
    return;
  }
  return;
}



/* Entry: 10a2d7a74; end: 10a2d7b0f;  */

void FUN_10a2d7a74(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  FUN_10a3c7928();
  lVar2 = *(long *)(param_1 + 0x218);
  FUN_10a2d7cdc(param_2,&PTR_DAT_110bbe350,lVar2 + 8,&UNK_10f64c852,0x19);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbe370,*(undefined4 *)(lVar2 + 200));
  FUN_10a00d760(param_2,&PTR_DAT_110bbe390,lVar2 + 0xd0);
  FUN_10a00d760(param_2,&PTR_DAT_110bbe3b0,lVar2 + 0x28);
  if ((*(char *)(lVar2 + 0x57) < '\0') && (*(long *)(lVar2 + 0x48) < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
    (*pcVar1)();
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bbe3d0,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10a2d7b10; end: 10a2d7cdb;  */

undefined8 ** FUN_10a2d7b10(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  code **ppcVar7;
  undefined8 **ppuVar8;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a2fa130;
  ppuStack_90 = &PTR_FUN_110bc3470;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar5 + 1,apuStack_e8);
  puVar5[9] = uStack_a8;
  puVar5[8] = uStack_b0;
  puVar5[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar5;
  func_0x000107c2b054(auStack_108,&UNK_10f64b3ce);
  ppcVar7 = &pcStack_98;
  (*(code *)(*param_1)[0x4a])(param_1,param_2);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar6 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  ppuVar8 = (undefined8 **)ppcVar7[1];
  if (ppcVar7[1] != (code *)0x0) {
    pcVar1 = ppcVar7[1] + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *(long *)pcVar1 = *(long *)pcVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*(code *)(*ppuVar6)[0x21])();
  if (ppuVar8 != (undefined8 **)0x0) {
    ppuVar2 = ppuVar8 + 1;
    do {
      puVar5 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar5 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)(*ppuVar8)[2])(ppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      ppuVar6 = ppuVar8;
    }
  }
  return ppuVar6;
}



/* Entry: 10a2d7cdc; end: 10a2d7d83;  */

void FUN_10a2d7cdc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2d7d84; end: 10a2d7e2b;  */

undefined8 FUN_10a2d7d84(long param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x218) + 8);
  if (lVar2 != 0) {
    func_0x00010a32c8a0(lVar2);
    lVar1 = lVar2 + 0x130;
    FUN_10a1f3e94(lVar1,param_2);
    if (*(long *)(lVar2 + 0x138) != lVar1) {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x288) == 100) {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          if (*(long *)(param_2 + 4) != 2) {
            return 1;
          }
          param_2 = *(short **)param_2;
        }
        else if (*(char *)((long)param_2 + 0x17) != '\x02') {
          return 1;
        }
        if (*param_2 == 0x6b6f) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a2d7e2c; end: 10a2d7ebf;  */

void FUN_10a2d7e2c(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar16;
  undefined8 unaff_x21;
  long lVar17;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_48 [24];
  
  uVar6 = param_1;
  FUN_10a2d7d84();
  if ((uVar6 & 1) == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_48,&UNK_10f64c109,param_2);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2d7ea4);
    (*pcVar4)();
  }
  lVar7 = *(long *)(param_1 + 0x218) + 0x160;
  FUN_10a2fa49c(lVar7,param_2,param_2);
  puVar13 = (undefined8 *)param_3[1];
  puVar5 = (undefined1 *)register0x00000008;
  uVar12 = *param_3;
  do {
    uVar11 = uVar12;
    plVar8 = (long *)(lVar7 + 0x28);
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(ulong *)(puVar5 + -0x48) = unaff_x25;
    *(long *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar5 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar5 + -8) = unaff_x30;
    puVar14 = *(undefined8 **)(lVar7 + 0x30);
    if (puVar14 < *(undefined8 **)(lVar7 + 0x38)) {
      *puVar14 = uVar11;
      puVar14[1] = puVar13;
      if (puVar13 != (undefined8 *)0x0) {
        plVar8 = puVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar14 = puVar14 + 2;
LAB_10a2d7fb8:
      *(undefined8 **)(lVar7 + 0x30) = puVar14;
      return;
    }
    lVar16 = *plVar8;
    lVar17 = (long)puVar14 - lVar16;
    unaff_x24 = lVar17 >> 4;
    uVar6 = unaff_x24 + 1;
    plVar10 = plVar8;
    uVar12 = uVar11;
    puVar14 = puVar13;
    if (uVar6 >> 0x3c == 0) {
      uVar15 = (long)*(undefined8 **)(lVar7 + 0x38) - lVar16;
      unaff_x25 = (long)uVar15 >> 3;
      if (unaff_x25 <= uVar6) {
        unaff_x25 = uVar6;
      }
      if (0x7fffffffffffffef < uVar15) {
        unaff_x25 = 0xfffffffffffffff;
      }
      if (unaff_x25 >> 0x3c == 0) {
        lVar9 = unaff_x25 << 4;
        __Znwm();
        puVar1 = (undefined8 *)(lVar9 + lVar17);
        *puVar1 = uVar11;
        puVar1[1] = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          plVar10 = puVar13 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar16 = *plVar8;
          lVar17 = *(long *)(lVar7 + 0x30) - lVar16;
          unaff_x24 = lVar17 >> 4;
        }
        puVar14 = puVar1 + 2;
        _memcpy(puVar1 + unaff_x24 * -2,lVar16,lVar17);
        *plVar8 = (long)(puVar1 + unaff_x24 * -2);
        *(undefined8 **)(lVar7 + 0x30) = puVar14;
        *(ulong *)(lVar7 + 0x38) = lVar9 + unaff_x25 * 0x10;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
        goto LAB_10a2d7fb8;
      }
    }
    else {
      FUN_10a2e2f70();
    }
    func_0x000109ffded8();
    *(undefined8 **)(puVar5 + -0x80) = puVar13;
    *(long *)(puVar5 + -0x78) = lVar17;
    *(long *)(puVar5 + -0x70) = lVar16;
    *(long **)(puVar5 + -0x68) = plVar8;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x58) = FUN_10a2d7fdc;
    plVar8 = plVar10;
    FUN_10a2d7d84();
    if (((ulong)plVar8 & 1) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (puVar5 + -0x98,&UNK_10f64c14b,uVar12);
      FUN_10a0029c0(puVar5 + -0x98);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2d8054);
      (*pcVar4)();
    }
    lVar7 = plVar10[0x43] + 0x188;
    FUN_10a2fa49c(lVar7,uVar12,uVar12);
    puVar13 = (undefined8 *)puVar14[1];
    unaff_x29 = *(undefined8 *)(puVar5 + -0x60);
    unaff_x30 = *(undefined8 *)(puVar5 + -0x58);
    unaff_x20 = *(undefined8 *)(puVar5 + -0x70);
    unaff_x19 = *(undefined8 *)(puVar5 + -0x68);
    unaff_x22 = *(undefined8 *)(puVar5 + -0x80);
    unaff_x21 = *(undefined8 *)(puVar5 + -0x78);
    puVar5 = puVar5 + -0x50;
    uVar12 = *puVar14;
    unaff_x23 = uVar11;
  } while( true );
}



/* Entry: 10a2d7ec0; end: 10a2d7fdb;  */

void FUN_10a2d7ec0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
  long lVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    uVar9 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar11 = (undefined8 *)param_1[1];
    if (puVar11 < (undefined8 *)param_1[2]) {
      *puVar11 = uVar9;
      puVar11[1] = param_3;
      if (param_3 != (undefined8 *)0x0) {
        plVar7 = param_3 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar11 = puVar11 + 2;
LAB_10a2d7fb8:
      param_1[1] = (long)puVar11;
      return;
    }
    lVar13 = *param_1;
    lVar14 = (long)puVar11 - lVar13;
    unaff_x24 = lVar14 >> 4;
    uVar1 = unaff_x24 + 1;
    plVar7 = param_1;
    uVar10 = uVar9;
    puVar11 = param_3;
    if (uVar1 >> 0x3c == 0) {
      uVar12 = param_1[2] - lVar13;
      unaff_x25 = (long)uVar12 >> 3;
      if (unaff_x25 <= uVar1) {
        unaff_x25 = uVar1;
      }
      if (0x7fffffffffffffef < uVar12) {
        unaff_x25 = 0xfffffffffffffff;
      }
      if (unaff_x25 >> 0x3c == 0) {
        lVar6 = unaff_x25 << 4;
        __Znwm();
        puVar2 = (undefined8 *)(lVar6 + lVar14);
        *puVar2 = uVar9;
        puVar2[1] = param_3;
        if (param_3 != (undefined8 *)0x0) {
          plVar7 = param_3 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar13 = *param_1;
          lVar14 = param_1[1] - lVar13;
          unaff_x24 = lVar14 >> 4;
        }
        puVar11 = puVar2 + 2;
        _memcpy(puVar2 + unaff_x24 * -2,lVar13,lVar14);
        *param_1 = (long)(puVar2 + unaff_x24 * -2);
        param_1[1] = (long)puVar11;
        param_1[2] = lVar6 + unaff_x25 * 0x10;
        if (lVar13 != 0) {
          __ZdlPv(lVar13);
        }
        goto LAB_10a2d7fb8;
      }
    }
    else {
      FUN_10a2e2f70();
    }
    func_0x000109ffded8();
    *(undefined8 **)((long)register0x00000008 + -0x80) = param_3;
    *(long *)((long)register0x00000008 + -0x78) = lVar14;
    *(long *)((long)register0x00000008 + -0x70) = lVar13;
    *(long **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10a2d7fdc;
    plVar8 = plVar7;
    FUN_10a2d7d84();
    if (((ulong)plVar8 & 1) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                ((undefined1 *)((long)register0x00000008 + -0x98),&UNK_10f64c14b,uVar10);
      FUN_10a0029c0((undefined1 *)((long)register0x00000008 + -0x98));
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2d8054);
      (*pcVar5)();
    }
    lVar13 = plVar7[0x43] + 0x188;
    FUN_10a2fa49c(lVar13,uVar10,uVar10);
    param_3 = (undefined8 *)puVar11[1];
    param_1 = (long *)(lVar13 + 0x28);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = *puVar11;
    unaff_x23 = uVar9;
  } while( true );
}



/* Entry: 10a2d7fdc; end: 10a2d806f;  */

void FUN_10a2d7fdc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar8 = param_1;
    FUN_10a2d7d84();
    if (((ulong)plVar8 & 1) == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                ((undefined1 *)((long)register0x00000008 + -0x48),&UNK_10f64c14b,param_2);
      FUN_10a0029c0((undefined1 *)((long)register0x00000008 + -0x48));
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d8054);
      (*pcVar6)();
    }
    lVar9 = param_1[0x43] + 0x188;
    FUN_10a2fa49c(lVar9,param_2,param_2);
    uVar3 = *param_3;
    unaff_x22 = (undefined8 *)param_3[1];
    unaff_x19 = (long *)(lVar9 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar11 = *(undefined8 **)(lVar9 + 0x30);
    if (puVar11 < *(undefined8 **)(lVar9 + 0x38)) break;
    unaff_x20 = *unaff_x19;
    unaff_x21 = (long)puVar11 - unaff_x20;
    unaff_x24 = unaff_x21 >> 4;
    uVar1 = unaff_x24 + 1;
    param_1 = unaff_x19;
    param_2 = uVar3;
    param_3 = unaff_x22;
    if (uVar1 >> 0x3c == 0) {
      uVar10 = (long)*(undefined8 **)(lVar9 + 0x38) - unaff_x20;
      unaff_x25 = (long)uVar10 >> 3;
      if (unaff_x25 <= uVar1) {
        unaff_x25 = uVar1;
      }
      if (0x7fffffffffffffef < uVar10) {
        unaff_x25 = 0xfffffffffffffff;
      }
      if (unaff_x25 >> 0x3c == 0) {
        lVar7 = unaff_x25 << 4;
        __Znwm();
        puVar2 = (undefined8 *)(lVar7 + unaff_x21);
        *puVar2 = uVar3;
        puVar2[1] = unaff_x22;
        if (unaff_x22 != (undefined8 *)0x0) {
          plVar8 = unaff_x22 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          unaff_x20 = *unaff_x19;
          unaff_x21 = *(long *)(lVar9 + 0x30) - unaff_x20;
          unaff_x24 = unaff_x21 >> 4;
        }
        puVar11 = puVar2 + 2;
        _memcpy(puVar2 + unaff_x24 * -2,unaff_x20,unaff_x21);
        *unaff_x19 = (long)(puVar2 + unaff_x24 * -2);
        *(undefined8 **)(lVar9 + 0x30) = puVar11;
        *(ulong *)(lVar9 + 0x38) = lVar7 + unaff_x25 * 0x10;
        if (unaff_x20 != 0) {
          __ZdlPv(unaff_x20);
        }
        goto LAB_10a2d7fb8;
      }
    }
    else {
      FUN_10a2e2f70();
    }
    unaff_x30 = FUN_10a2d7fdc;
    func_0x000109ffded8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x23 = uVar3;
  }
  *puVar11 = uVar3;
  puVar11[1] = unaff_x22;
  if (unaff_x22 != (undefined8 *)0x0) {
    plVar8 = unaff_x22 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar11 = puVar11 + 2;
LAB_10a2d7fb8:
  *(undefined8 **)(lVar9 + 0x30) = puVar11;
  return;
}



/* Entry: 10a2d8070; end: 10a2d8147;  */

undefined1  [16] FUN_10a2d8070(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f64c86c;
  return auVar1;
}



/* Entry: 10a2d8148; end: 10a2d87cf;  */

void FUN_10a2d8148(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c86c,0x1a);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc13c8;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x8e;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc13c8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64beb2,FUN_10a2fa8ec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c18b,FUN_10a2faa0c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c1a5,FUN_10a2faafc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c1b8,FUN_10a2fad48,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c1ce,FUN_10a2faec8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c1e1,FUN_10a2fb030,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c1f7,FUN_10a2fb148,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2d87b0;
    FUN_10a054dac(param_1,&UNK_10f64c20a,FUN_10a2fb274,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c227,FUN_10a2fb39c,FUN_10a2fb508);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c235,FUN_10a2fba7c,FUN_10a2fbb2c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c247,FUN_10a2fbe14,FUN_10a2fbec4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c013,FUN_10a2fbf7c,FUN_10a2fc038);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c256,FUN_10a2fc110,FUN_10a2fc1cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c263,FUN_10a2fc2b0,FUN_10a2fc368);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c271,FUN_10a2fc428,FUN_10a2fc4e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c28c,FUN_10a2fc5a0,FUN_10a2fc658);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64c09a,FUN_10a2fc718,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,2,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64c0c3,FUN_10a2fc88c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c86c,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2d87b0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2d87b4);
  (*pcVar6)();
}



/* Entry: 10a2d87d0; end: 10a2d87ff;  */

void FUN_10a2d87d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x290);
  *param_1 = *(undefined8 *)(param_2 + 0x288);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10a2d8800; end: 10a2d8863;  */

undefined8 * FUN_10a2d8800(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a2d8864; end: 10a2d8893;  */

void FUN_10a2d8864(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x2a0);
  *param_1 = *(undefined8 *)(param_2 + 0x298);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10a2d8894; end: 10a2d8983;  */

undefined8 * FUN_10a2d8894(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x57] = &PTR_FUN_110c383b8;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbe730,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110bbe740);
  *param_1 = &PTR_FUN_110bbe408;
  param_1[2] = &PTR_DAT_110bbe528;
  param_1[7] = &PTR_DAT_110bbe580;
  param_1[0xd] = &PTR_DAT_110bbe5a0;
  param_1[0x57] = &PTR_DAT_110bbe6f0;
  param_1[0x16] = &PTR_DAT_110bbe610;
  param_1[0x17] = &PTR_DAT_110bbe640;
  param_1[0x3e] = &PTR_DAT_110bbe678;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 1;
  *(undefined1 *)((long)param_1 + 0x2b2) = 1;
  return param_1;
}



/* Entry: 10a2d8984; end: 10a2d8a5f;  */

void FUN_10a2d8984(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbe408;
  param_1[2] = &PTR_DAT_110bbe528;
  param_1[7] = &PTR_DAT_110bbe580;
  param_1[0xd] = &PTR_DAT_110bbe5a0;
  param_1[0x57] = &PTR_DAT_110bbe6f0;
  param_1[0x16] = &PTR_DAT_110bbe610;
  param_1[0x17] = &PTR_DAT_110bbe640;
  param_1[0x3e] = &PTR_DAT_110bbe678;
  func_0x00010a042b54(param_1 + 0x53);
  func_0x00010a042b54(param_1 + 0x51);
  func_0x00010a2fca10(param_1 + 0x4f);
  plVar1 = (long *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a2e3510(param_1 + 0x49);
  func_0x00010a2fc990(param_1[0x46]);
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  param_1[0x3e] = &PTR_DAT_110bc1318;
  param_1[0x57] = &PTR_FUN_110bc1390;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc1198;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x57] = &PTR_DAT_110bc12c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d8a60; end: 10a2d8aa3;  */

void FUN_10a2d8a60(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bbe408;
  param_1[2] = &PTR_DAT_110bbe528;
  param_1[7] = &PTR_DAT_110bbe580;
  param_1[0xd] = &PTR_DAT_110bbe5a0;
  param_1[0x57] = &PTR_DAT_110bbe6f0;
  param_1[0x16] = &PTR_DAT_110bbe610;
  param_1[0x17] = &PTR_DAT_110bbe640;
  param_1[0x3e] = &PTR_DAT_110bbe678;
  func_0x00010a042b54(param_1 + 0x53);
  func_0x00010a042b54(param_1 + 0x51);
  func_0x00010a2fca10(param_1 + 0x4f);
  plVar1 = (long *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a2e3510(param_1 + 0x49);
  func_0x00010a2fc990(param_1[0x46]);
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  param_1[0x3e] = &PTR_DAT_110bc1318;
  param_1[0x57] = &PTR_FUN_110bc1390;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bc1198;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x57] = &PTR_DAT_110bc12c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a2d8aa4; end: 10a2d8b47;  */

void FUN_10a2d8aa4(void)

{
  FUN_10a2d8984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2d8b48; end: 10a2d8b77;  */

void FUN_10a2d8b48(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a2d8984((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2d8b78; end: 10a2d906f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2d8ea4) */
/* WARNING: Removing unreachable block (ram,0x00010a2d8f4c) */

void FUN_10a2d8b78(code *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  code **ppcVar11;
  code **ppcVar12;
  code *pcVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *unaff_x26;
  int iVar16;
  long lStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined **ppuStack_1f8;
  code *pcStack_1f0;
  code **ppcStack_1e8;
  code **ppcStack_1e0;
  undefined **ppuStack_1d8;
  code *pcStack_1d0;
  long *plStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  uint uStack_1a4;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  code *pcStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  code *pcStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  undefined *puStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  code *pcStack_108;
  undefined **ppuStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bbe760);
  *(int *)(param_1 + 0x2a8) = (int)plVar15;
  plVar5 = *(long **)(param_1 + 0x270);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar15);
  }
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bbe780);
  param_1[0x2b0] = SUB81(plVar15,0);
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bbe7a0,0);
  *(int *)(param_1 + 0x2ac) = (int)plVar15;
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbe7c0,0);
  param_1[0x2b1] = SUB81(plVar15,0);
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbe7e0,1);
  param_1[0x2b2] = SUB81(plVar15,0);
  pcVar13 = (code *)0x10a2fcca8;
  ppuVar10 = &puStack_148;
  ppuVar14 = &PTR_DAT_110bc3080;
  puStack_148 = (undefined *)0x10a2fcca8;
  ppuStack_140 = &PTR_DAT_110bc3080;
  ppcVar11 = &pcStack_108;
  pcStack_108 = (code *)0x10a2fcca8;
  ppuStack_100 = &PTR_DAT_110bc3080;
  uStack_b8 = CONCAT17(0xd,(undefined7)uStack_b8);
  uStack_c8 = 0x6b63617274;
  uStack_c3 = 0x676e69;
  uStack_c0 = 0x7465737341;
  uStack_bb = 0;
  pcStack_b0 = FUN_10a2fca68;
  ppuStack_a8 = &PTR_FUN_110bc3068;
  puVar6 = (undefined8 *)0x58;
  pcStack_138 = param_1;
  pcStack_f8 = param_1;
  __Znwm();
  ppcVar12 = &pcStack_b0;
  *puVar6 = 0x10a2fcca8;
  puVar6[1] = &PTR_DAT_110bc3080;
  puVar6[2] = param_1;
  puVar6[9] = CONCAT26(uStack_ba,CONCAT15(uStack_bb,uStack_c0));
  puVar6[8] = CONCAT35(uStack_c3,uStack_c8);
  puVar6[10] = uStack_b8;
  uStack_c8 = 0;
  uStack_c3 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b8 = 0;
  puStack_a0 = puVar6;
  func_0x000107c2b054(auStack_1a0,&UNK_10f64b3ce);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bbe800,&pcStack_b0,0,auStack_1a0);
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (uStack_b8 < 0) {
    __ZdlPv(CONCAT35(uStack_c3,uStack_c8));
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  if (*(long *)(param_1 + 0x238) != 0) {
    FUN_10a2fc990(*(undefined8 *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    lVar8 = *(long *)(param_1 + 0x228);
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x220) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  ppuVar7 = &PTR_DAT_110bbe820;
  (**(code **)(*param_2 + 0x210))(param_2);
  plVar15 = param_2;
  (**(code **)(*param_2 + 0x208))();
  uStack_1a4 = (uint)plVar15;
  if (uStack_1a4 != 0) {
    ppcVar11 = (code **)0x0;
    ppcVar12 = &pcStack_108;
    pcVar13 = FUN_10a2fccd4;
    ppuVar10 = &PTR_FUN_110bc3098;
    ppuVar14 = &PTR_DAT_110bbe860;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,ppcVar11);
      (**(code **)(*param_2 + 0xa0))(&pcStack_b0,param_2,&PTR_DAT_110bc27e0);
      ppuVar7 = &PTR_DAT_110bbe840;
      (**(code **)(*param_2 + 0x210))(param_2);
      unaff_x26 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((int)unaff_x26 != 0) {
        iVar16 = 0;
        do {
          (**(code **)(*param_2 + 0x218))(param_2,iVar16);
          pcStack_188 = FUN_10a2fccd4;
          ppuStack_180 = &PTR_FUN_110bc3098;
          ppuStack_168 = ppuStack_a8;
          pcStack_170 = pcStack_b0;
          puStack_160 = puStack_a0;
          ppuStack_100 = (undefined **)0x0;
          pcStack_f8 = (code *)0x0;
          lStack_f0 = 0;
          ppuVar7 = ppuVar14;
          pcStack_178 = param_1;
          pcStack_108 = param_1;
          FUN_10a2cd220(param_2,&PTR_DAT_110bbe860,&pcStack_188,0);
          (*(code *)*ppuStack_180)(&ppuStack_180);
          if (lStack_f0 < 0) {
            __ZdlPv(ppuStack_100);
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          iVar16 = iVar16 + 1;
        } while ((int)unaff_x26 != iVar16);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar1 = (int)ppcVar11 + 1;
      ppcVar11 = (code **)(ulong)uVar1;
    } while (uVar1 != uStack_1a4);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
    (*(code *)*ppuStack_a8)(ppcVar12 + 1);
    if (uStack_b8 < 0) {
      __ZdlPv(CONCAT35(uStack_c3,uStack_c8));
    }
    (*(code *)*ppuStack_100)(ppcVar11 + 1);
    (*(code *)*ppuStack_140)(ppuVar10 + 1);
    plVar15 = param_2;
    __Unwind_Resume();
    pcStack_1b8 = FUN_10a2d9070;
    plStack_200 = unaff_x26;
    ppuStack_1f8 = ppuVar14;
    pcStack_1f0 = pcVar13;
    ppcStack_1e8 = ppcVar12;
    ppcStack_1e0 = ppcVar11;
    ppuStack_1d8 = ppuVar10;
    pcStack_1d0 = param_1;
    plStack_1c8 = param_2;
    puStack_1c0 = &stack0xfffffffffffffff0;
    func_0x00010a3c7928();
    (**(code **)(*ppuVar7 + 0x40))(ppuVar7,&PTR_DAT_110bbe760,(int)plVar15[0x55]);
    (**(code **)(*ppuVar7 + 0x70))(ppuVar7,&PTR_DAT_110bbe780,(char)plVar15[0x56]);
    (**(code **)(*ppuVar7 + 0x40))
              (ppuVar7,&PTR_DAT_110bbe7a0,*(undefined4 *)((long)plVar15 + 0x2ac));
    (**(code **)(*ppuVar7 + 0x70))
              (ppuVar7,&PTR_DAT_110bbe7c0,*(undefined1 *)((long)plVar15 + 0x2b1));
    (**(code **)(*ppuVar7 + 0x70))
              (ppuVar7,&PTR_DAT_110bbe7e0,*(undefined1 *)((long)plVar15 + 0x2b2));
    lStack_220 = plVar15[0x4f];
    plStack_218 = (long *)plVar15[0x50];
    puStack_210 = &UNK_10f64c8b4;
    uStack_208 = 0x13;
    if (plStack_218 != (long *)0x0) {
      plVar5 = plStack_218 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*ppuVar7 + 0x108))(ppuVar7,&PTR_DAT_110bbe800,&lStack_220,&puStack_210);
    plVar5 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar2 = plStack_218 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110bbe820);
    for (plVar15 = (long *)plVar15[0x46]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      FUN_10a00d760(ppuVar7,&PTR_DAT_110bc27e0,plVar15 + 2);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110bbe840);
      lVar9 = plVar15[6];
      for (lVar8 = plVar15[5]; lVar8 != lVar9; lVar8 = lVar8 + 0x10) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        FUN_10a2cd49c(ppuVar7,&PTR_DAT_110bbe860,lVar8,&UNK_10f64c61b,0xb);
        (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      }
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a2d92bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    return;
  }
  return;
}



/* Entry: 10a2d9070; end: 10a2d92d3;  */

void FUN_10a2d9070(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbe760,*(undefined4 *)(param_1 + 0x2a8));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbe780,*(undefined1 *)(param_1 + 0x2b0));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbe7a0,*(undefined4 *)(param_1 + 0x2ac));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbe7c0,*(undefined1 *)(param_1 + 0x2b1));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbe7e0,*(undefined1 *)(param_1 + 0x2b2));
  uStack_70 = *(undefined8 *)(param_1 + 0x278);
  plStack_68 = *(long **)(param_1 + 0x280);
  puStack_60 = &UNK_10f64c8b4;
  uStack_58 = 0x13;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bbe800,&uStack_70,&puStack_60);
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bbe820);
  for (plVar6 = *(long **)(param_1 + 0x230); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110bc27e0,plVar6 + 2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bbe840);
    lVar2 = plVar6[6];
    for (lVar5 = plVar6[5]; lVar5 != lVar2; lVar5 = lVar5 + 0x10) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a2cd49c(param_2,&PTR_DAT_110bbe860,lVar5,&UNK_10f64c61b,0xb);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2d92bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a2d92d4; end: 10a2d9373;  */

void FUN_10a2d92d4(long param_1,undefined8 param_2)

{
  if (*(long **)(param_1 + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x278) + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00010a2d9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x270) + 0x10))(*(long **)(param_1 + 0x270),param_2);
    return;
  }
  return;
}



/* Entry: 10a2d9374; end: 10a2d963b;  */

void FUN_10a2d9374(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar13 = (long *)(param_1 + 0x248);
  if (*(long *)(param_1 + 0x260) != 0) {
    func_0x00010a2e3548(plVar13,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    lVar15 = *(long *)(param_1 + 0x250);
    if (lVar15 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(*plVar13 + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (*(long *)(param_1 + 0x278) == 0) {
    lVar15 = *(long *)(param_1 + 0x168);
    uVar6 = *(ushort *)(lVar15 + 0x118);
    if (((uVar6 & 1) != 0) ||
       (*(ushort *)(lVar15 + 0x118) = uVar6 & 0xfffe | 1, (uVar6 & 0x13) != 0)) {
      return;
    }
    uVar6 = *(ushort *)(lVar15 + 0x118);
    if (0x120 < *(int *)(*(long *)(*(long *)(lVar15 + 0x120) + 0xa20) + 0x18)) {
      bVar8 = (uVar6 & 0x13) == 0;
      lVar16 = 0x228;
      if (!bVar8) {
        lVar16 = 0x238;
      }
      FUN_10a07e58c(*(undefined8 *)(lVar15 + lVar16));
      if (bVar8 != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0)) {
        return;
      }
    }
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_10a3faba8(lVar15,&plStack_80);
    plVar13 = plStack_78;
    if (plStack_80 != plStack_78) {
      uVar14 = 0;
      plVar18 = plStack_80;
      if ((uVar6 & 0x13) != 0) {
        uVar14 = 4;
      }
      do {
        plVar12 = (long *)plVar18[1];
        if ((plVar12 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 != (long *)0x0)) {
          lVar16 = *plVar18;
          plVar9 = plVar12 + 1;
          do {
            lVar17 = *plVar9;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
          if ((lVar16 != 0) && (uVar5 = *(ushort *)(lVar16 + 0x180), (uVar5 >> 4 & 1) == 0)) {
            if ((((uVar6 & 0x13) == 0) != ((uVar5 & 4) == 0)) &&
               (*(ushort *)(lVar16 + 0x180) = uVar5 & 0xffeb | uVar14,
               ((uVar5 & 7) == 0) != ((uVar5 & 3) == 0 && uVar14 == 0))) {
              if (*(int *)(*(long *)(*(long *)(lVar16 + 0x170) + 0xa20) + 0x18) < 0x92) {
                FUN_10a3c6798(lVar16);
              }
              else {
                FUN_10a3c7718(lVar16);
              }
            }
            if (((uVar6 & 0x13) == 0) != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0))
            goto LAB_10a3e44d0;
          }
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar13);
    }
    if (*(int *)(*(long *)(*(long *)(lVar15 + 0x120) + 0xa20) + 0x18) < 0x121) {
      lVar16 = 0x228;
      if ((uVar6 & 0x13) != 0) {
        lVar16 = 0x238;
      }
      FUN_10a07e58c(*(undefined8 *)(lVar15 + lVar16));
    }
    FUN_10a3e45e0(&pplStack_98,lVar15);
    for (pplVar3 = pplStack_98; pplVar3 != pplStack_90; pplVar3 = pplVar3 + 2) {
      plVar13 = pplVar3[1];
      if ((plVar13 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar13 != (long *)0x0)) {
        plVar12 = *pplVar3;
        plVar18 = plVar13 + 1;
        do {
          lVar16 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
        if (((plVar12 != (long *)0x0) && ((*(ushort *)(plVar12 + 0x23) >> 3 & 1) == 0)) &&
           (FUN_10a3e2a80(plVar12,(uVar6 & 0x13) == 0),
           ((uVar6 & 0x13) == 0) != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0))) break;
      }
    }
    uStack_68 = &pplStack_98;
    func_0x00010a2e3118(&uStack_68);
LAB_10a3e44d0:
    pplStack_98 = &plStack_80;
    FUN_10a0d80a4(&pplStack_98);
    return;
  }
  for (plVar18 = *(long **)(param_1 + 0x230); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    plVar4 = (long *)plVar18[6];
    plVar12 = (long *)plVar18[5];
    plVar9 = plVar12;
    for (; plVar12 != plVar4; plVar12 = plVar12 + 2) {
      plVar9 = (long *)plVar12[1];
      if ((plVar9 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)) {
LAB_10a2d9464:
        plVar9 = plVar12;
        if (plVar12 != plVar4) {
          while (plVar1 = plVar12 + 2, plVar1 != plVar4) {
            plVar10 = (long *)plVar12[3];
            plVar12 = plVar1;
            if ((plVar10 != (long *)0x0) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0)) {
              lVar15 = *plVar1;
              plVar2 = plVar10 + 1;
              do {
                lVar16 = *plVar2;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar16 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
              if ((lVar15 != 0) && ((*(ushort *)(lVar15 + 0x118) >> 3 & 1) == 0)) {
                lVar17 = plVar1[1];
                lVar16 = *plVar1;
                *plVar1 = 0;
                plVar1[1] = 0;
                lVar15 = plVar9[1];
                plVar9[1] = lVar17;
                *plVar9 = lVar16;
                if (lVar15 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar9 = plVar9 + 2;
              }
            }
          }
        }
        break;
      }
      lVar15 = *plVar12;
      plVar1 = plVar9 + 1;
      do {
        lVar16 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if ((lVar15 == 0) || ((*(ushort *)(lVar15 + 0x118) >> 3 & 1) != 0)) goto LAB_10a2d9464;
      plVar9 = plVar4;
    }
    FUN_10a2e2f84(plVar18 + 5,plVar9,plVar18[6]);
  }
  uStack_68 = (long ***)
              CONCAT17(0xbb < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18),
                       *(undefined7 *)(param_1 + 0x2ac));
  plVar18 = *(long **)(param_1 + 0x270);
  (**(code **)(*plVar18 + 0x18))
            (plVar18,param_2,param_1 + 0x220,plVar13,*(undefined8 *)(param_1 + 0x168),&uStack_68);
  if (((ulong)plVar18 & 1) == 0) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),0);
    if (*(char *)(param_1 + 0x218) != '\x01') goto LAB_10a2d9618;
    puVar11 = *(undefined8 **)(param_1 + 0x298);
  }
  else {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),1);
    if ((*(byte *)(param_1 + 0x218) & 1) != 0) goto LAB_10a2d9618;
    FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x8d8),4);
    puVar11 = *(undefined8 **)(param_1 + 0x288);
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (*(char *)(puVar11 + 8) == '\x01') {
      (*(code *)*puVar11)();
    }
    else if (*(char *)(puVar11 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
LAB_10a2d9618:
  *(char *)(param_1 + 0x218) = (char)plVar18;
  return;
}



/* Entry: 10a2d963c; end: 10a2d9643;  */

void FUN_10a2d963c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar13 = (long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010a2e3548(plVar13,*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar15 = *(long *)(param_1 + 0x60);
    if (lVar15 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(*plVar13 + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    lVar15 = *(long *)(param_1 + -0x88);
    uVar6 = *(ushort *)(lVar15 + 0x118);
    if (((uVar6 & 1) != 0) ||
       (*(ushort *)(lVar15 + 0x118) = uVar6 & 0xfffe | 1, (uVar6 & 0x13) != 0)) {
      return;
    }
    uVar6 = *(ushort *)(lVar15 + 0x118);
    if (0x120 < *(int *)(*(long *)(*(long *)(lVar15 + 0x120) + 0xa20) + 0x18)) {
      bVar8 = (uVar6 & 0x13) == 0;
      lVar16 = 0x228;
      if (!bVar8) {
        lVar16 = 0x238;
      }
      FUN_10a07e58c(*(undefined8 *)(lVar15 + lVar16));
      if (bVar8 != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0)) {
        return;
      }
    }
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_10a3faba8(lVar15,&plStack_80);
    plVar13 = plStack_78;
    if (plStack_80 != plStack_78) {
      uVar14 = 0;
      plVar18 = plStack_80;
      if ((uVar6 & 0x13) != 0) {
        uVar14 = 4;
      }
      do {
        plVar12 = (long *)plVar18[1];
        if ((plVar12 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar12 != (long *)0x0)) {
          lVar16 = *plVar18;
          plVar9 = plVar12 + 1;
          do {
            lVar17 = *plVar9;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar8) {
              *plVar9 = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
          if ((lVar16 != 0) && (uVar5 = *(ushort *)(lVar16 + 0x180), (uVar5 >> 4 & 1) == 0)) {
            if ((((uVar6 & 0x13) == 0) != ((uVar5 & 4) == 0)) &&
               (*(ushort *)(lVar16 + 0x180) = uVar5 & 0xffeb | uVar14,
               ((uVar5 & 7) == 0) != ((uVar5 & 3) == 0 && uVar14 == 0))) {
              if (*(int *)(*(long *)(*(long *)(lVar16 + 0x170) + 0xa20) + 0x18) < 0x92) {
                FUN_10a3c6798(lVar16);
              }
              else {
                FUN_10a3c7718(lVar16);
              }
            }
            if (((uVar6 & 0x13) == 0) != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0))
            goto LAB_10a3e44d0;
          }
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar13);
    }
    if (*(int *)(*(long *)(*(long *)(lVar15 + 0x120) + 0xa20) + 0x18) < 0x121) {
      lVar16 = 0x228;
      if ((uVar6 & 0x13) != 0) {
        lVar16 = 0x238;
      }
      FUN_10a07e58c(*(undefined8 *)(lVar15 + lVar16));
    }
    FUN_10a3e45e0(&pplStack_98,lVar15);
    for (pplVar3 = pplStack_98; pplVar3 != pplStack_90; pplVar3 = pplVar3 + 2) {
      plVar13 = pplVar3[1];
      if ((plVar13 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar13 != (long *)0x0)) {
        plVar12 = *pplVar3;
        plVar18 = plVar13 + 1;
        do {
          lVar16 = *plVar18;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
        if (((plVar12 != (long *)0x0) && ((*(ushort *)(plVar12 + 0x23) >> 3 & 1) == 0)) &&
           (FUN_10a3e2a80(plVar12,(uVar6 & 0x13) == 0),
           ((uVar6 & 0x13) == 0) != ((*(ushort *)(lVar15 + 0x118) & 0x13) == 0))) break;
      }
    }
    uStack_68 = &pplStack_98;
    func_0x00010a2e3118(&uStack_68);
LAB_10a3e44d0:
    pplStack_98 = &plStack_80;
    FUN_10a0d80a4(&pplStack_98);
    return;
  }
  for (plVar18 = *(long **)(param_1 + 0x40); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    plVar4 = (long *)plVar18[6];
    plVar12 = (long *)plVar18[5];
    plVar9 = plVar12;
    for (; plVar12 != plVar4; plVar12 = plVar12 + 2) {
      plVar9 = (long *)plVar12[1];
      if ((plVar9 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)) {
LAB_10a2d9464:
        plVar9 = plVar12;
        if (plVar12 != plVar4) {
          while (plVar1 = plVar12 + 2, plVar1 != plVar4) {
            plVar10 = (long *)plVar12[3];
            plVar12 = plVar1;
            if ((plVar10 != (long *)0x0) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0)) {
              lVar15 = *plVar1;
              plVar2 = plVar10 + 1;
              do {
                lVar16 = *plVar2;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar16 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
              if ((lVar15 != 0) && ((*(ushort *)(lVar15 + 0x118) >> 3 & 1) == 0)) {
                lVar17 = plVar1[1];
                lVar16 = *plVar1;
                *plVar1 = 0;
                plVar1[1] = 0;
                lVar15 = plVar9[1];
                plVar9[1] = lVar17;
                *plVar9 = lVar16;
                if (lVar15 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar9 = plVar9 + 2;
              }
            }
          }
        }
        break;
      }
      lVar15 = *plVar12;
      plVar1 = plVar9 + 1;
      do {
        lVar16 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if ((lVar15 == 0) || ((*(ushort *)(lVar15 + 0x118) >> 3 & 1) != 0)) goto LAB_10a2d9464;
      plVar9 = plVar4;
    }
    FUN_10a2e2f84(plVar18 + 5,plVar9,plVar18[6]);
  }
  uStack_68 = (long ***)
              CONCAT17(0xbb < *(int *)(*(long *)(*(long *)(param_1 + -0x80) + 0xa20) + 0x18),
                       *(undefined7 *)(param_1 + 0xbc));
  plVar18 = *(long **)(param_1 + 0x80);
  (**(code **)(*plVar18 + 0x18))
            (plVar18,param_2,param_1 + 0x30,plVar13,*(undefined8 *)(param_1 + -0x88),&uStack_68);
  if (((ulong)plVar18 & 1) == 0) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + -0x88),0);
    if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_10a2d9618;
    puVar11 = *(undefined8 **)(param_1 + 0xa8);
  }
  else {
    FUN_10a3e4548(*(undefined8 *)(param_1 + -0x88),1);
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) goto LAB_10a2d9618;
    FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + -0x80) + 0x8d8),4);
    puVar11 = *(undefined8 **)(param_1 + 0x98);
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (*(char *)(puVar11 + 8) == '\x01') {
      (*(code *)*puVar11)();
    }
    else if (*(char *)(puVar11 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
LAB_10a2d9618:
  *(char *)(param_1 + 0x28) = (char)plVar18;
  return;
}



/* Entry: 10a2d9644; end: 10a2d9e4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a2d9644(undefined8 *param_1,undefined *******param_2,undefined8 param_3,long param_4)

{
  undefined *******pppppppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined ********ppppppppuVar9;
  undefined *******pppppppuVar10;
  code ******ppppppcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined ********ppppppppuVar14;
  long lVar15;
  code ******ppppppcVar16;
  undefined ******ppppppuVar17;
  undefined8 uVar18;
  undefined *******pppppppuVar19;
  undefined *******pppppppuVar20;
  code *******pppppppcVar21;
  undefined ********ppppppppuVar22;
  code *******pppppppcVar23;
  code ******ppppppcStack_188;
  code ******ppppppcStack_180;
  code ******ppppppcStack_178;
  code ******ppppppcStack_170;
  code *******pppppppcStack_168;
  undefined ********ppppppppuStack_160;
  undefined *******pppppppuStack_158;
  long lStack_150;
  code *******pppppppcStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *puStack_130;
  code *******pppppppcStack_128;
  undefined ********ppppppppuStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  undefined ********ppppppppuStack_108;
  undefined *******pppppppuStack_100;
  code *******pppppppcStack_f8;
  code *******pppppppcStack_f0;
  code ******ppppppcStack_e8;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_b0;
  undefined ********ppppppppuStack_a8;
  code *******pppppppcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    pppppppuVar19 = param_2;
    uVar18 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppppppppuStack_a8 = (undefined ********)param_2[9];
    pppppppcStack_b0 = (code *******)param_2[8];
    lVar15 = param_4 + 0x88;
    func_0x00010a35bf90(lVar15,&pppppppcStack_b0);
    puVar3 = (undefined8 *)((ulong)&pppppppcStack_b0 | 8);
    ppppppppuVar9 = &pppppppcStack_b0;
    if (lVar15 != 0) {
      puVar3 = (undefined8 *)(lVar15 + 0x28);
      ppppppppuVar9 = (undefined ********)(lVar15 + 0x20);
    }
    uVar18 = *puVar3;
    pppppppuVar19 = *ppppppppuVar9;
  }
  pppppppcVar21 = (code *******)param_2[0x2e];
  FUN_10a3dd220(pppppppcVar21);
  FUN_10a2fcdf0(pppppppcVar21,pppppppuVar19,uVar18);
  ppppppppuVar9 = (undefined ********)0x28;
  pppppppcStack_110 = pppppppcVar21;
  __Znwm();
  ppppppppuVar14 = ppppppppuVar9 + 1;
  *ppppppppuVar14 = (undefined *******)0x0;
  *ppppppppuVar9 = (undefined *******)&PTR_FUN_110bc30c0;
  ppppppppuVar9[2] = (undefined *******)0x0;
  ppppppppuVar9[3] = pppppppcVar21;
  ppppppppuVar9[4] = (undefined *******)FUN_10a3df8cc;
  ppppppppuStack_108 = ppppppppuVar9;
  if (pppppppcVar21 != (code *******)0x0) {
    if (pppppppcVar21[6] == (code ******)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
        if (bVar7) {
          *ppppppppuVar14 = (undefined *******)((long)*ppppppppuVar14 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppppppppuVar22 = ppppppppuVar9 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar7) {
          *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppppppcVar21[5] = (code ******)pppppppcVar21;
      pppppppcVar21[6] = (code ******)ppppppppuVar9;
    }
    else {
      if (pppppppcVar21[6][1] != (code *****)0xffffffffffffffff) goto LAB_10a2d97c4;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
        if (bVar7) {
          *ppppppppuVar14 = (undefined *******)((long)*ppppppppuVar14 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppppppppuVar22 = ppppppppuVar9 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar22,0x10);
        if (bVar7) {
          *ppppppppuVar22 = (undefined *******)((long)*ppppppppuVar22 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pppppppcVar21[5] = (code ******)pppppppcVar21;
      pppppppcVar21[6] = (code ******)ppppppppuVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      pppppppuVar19 = *ppppppppuVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
      if (bVar7) {
        *ppppppppuVar14 = (undefined *******)((long)pppppppuVar19 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppppppuVar19 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar9)[2])(ppppppppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar9);
    }
  }
LAB_10a2d97c4:
  pppppppcVar21 = pppppppcStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pppppppcStack_110 + 0x2a,param_2 + 0x2a);
  uVar4 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar5 = *(ushort *)(pppppppcVar21 + 0x30) & 0xfffc;
  *(ushort *)(pppppppcVar21 + 0x30) = uVar5 | *(ushort *)(pppppppcVar21 + 0x30) & 1 | uVar4;
  *(ushort *)(pppppppcVar21 + 0x30) = uVar5 | uVar4 | *(ushort *)(param_2 + 0x30) & 1;
  pppppppcStack_b0 = pppppppcVar21;
  ppppppppuStack_a8 = ppppppppuStack_108;
  if (ppppppppuStack_108 != (undefined ********)0x0) {
    ppppppppuVar9 = ppppppppuStack_108 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
      if (bVar7) {
        *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&pppppppcStack_b0);
  ppppppppuVar9 = ppppppppuStack_a8;
  if (ppppppppuStack_a8 != (undefined ********)0x0) {
    ppppppppuVar14 = ppppppppuStack_a8 + 1;
    do {
      pppppppuVar19 = *ppppppppuVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
      if (bVar7) {
        *ppppppppuVar14 = (undefined *******)((long)pppppppuVar19 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pppppppuVar19 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar9);
    }
  }
  ppppppuVar17 = param_2[0x4f];
  pppppppcStack_e0 = pppppppcStack_110 + 0x4f;
  pppppppcStack_f0 = (code *******)0x10a2fd034;
  ppppppcStack_e8 = (code ******)&PTR_FUN_110bc3100;
  if (ppppppuVar17 == (undefined ******)0x0) {
    pppppppcStack_b0 = (code *******)0x0;
    FUN_10a2e9e64(&pppppppcStack_f0,&pppppppcStack_b0);
    ppppppppuVar9 = (undefined ********)0x0;
    goto LAB_10a2d99dc;
  }
  if (param_4 == 0) {
    FUN_10a2fcfa0(&pppppppcStack_b0,ppppppuVar17);
    FUN_10a2fcf14(&pppppppcStack_f0,&pppppppcStack_b0);
    ppppppppuVar9 = ppppppppuStack_a8;
    if (ppppppppuStack_a8 == (undefined ********)0x0) goto LAB_10a2d99dc;
    ppppppppuVar9 = ppppppppuStack_a8 + 1;
    do {
      pppppppuVar19 = *ppppppppuVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
      if (bVar7) {
        *ppppppppuVar9 = (undefined *******)((long)pppppppuVar19 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_10a2d99c0:
    ppppppppuVar9 = ppppppppuStack_a8;
    if (pppppppuVar19 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar9);
    }
  }
  else {
    pppppppcVar21 = (code *******)ppppppuVar17[8];
    ppppppppuVar9 = (undefined ********)ppppppuVar17[9];
    if (*(char *)(param_4 + 0xb8) == '\x01') {
      pppppppcStack_b0 = (code *******)0x10a2fd034;
      ppppppppuStack_a8 = (undefined ********)&PTR_FUN_110bc3100;
      pppppppcStack_a0 = pppppppcStack_e0;
      FUN_10a069d9c(param_4,pppppppcVar21,ppppppppuVar9,&pppppppcStack_b0);
    }
    else {
      lVar15 = param_4 + 0x88;
      pppppppcStack_b0 = pppppppcVar21;
      ppppppppuStack_a8 = ppppppppuVar9;
      func_0x00010a35bf90(lVar15,&pppppppcStack_b0);
      pppppppcVar23 = (code *******)&ppppppppuStack_a8;
      ppppppppuVar14 = &pppppppcStack_b0;
      if (lVar15 != 0) {
        pppppppcVar23 = (code *******)(lVar15 + 0x28);
        ppppppppuVar14 = (undefined ********)(lVar15 + 0x20);
      }
      ppppppppuVar22 = (undefined ********)*pppppppcVar23;
      pppppppcVar23 = (code *******)*ppppppppuVar14;
      if (pppppppcVar21 == pppppppcVar23 && ppppppppuVar9 == ppppppppuVar22) {
        FUN_10a2fcfa0(&pppppppcStack_b0,ppppppuVar17);
        FUN_10a2fcf14(&pppppppcStack_f0,&pppppppcStack_b0);
        ppppppppuVar9 = ppppppppuStack_a8;
        if (ppppppppuStack_a8 == (undefined ********)0x0) goto LAB_10a2d99dc;
        ppppppppuVar9 = ppppppppuStack_a8 + 1;
        do {
          pppppppuVar19 = *ppppppppuVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
          if (bVar7) {
            *ppppppppuVar9 = (undefined *******)((long)pppppppuVar19 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_10a2d99c0;
      }
      pppppppcStack_b0 = pppppppcStack_f0;
      (*(code *)ppppppcStack_e8[3])(&ppppppppuStack_a8,&ppppppcStack_e8);
      FUN_10a069d9c(param_4,pppppppcVar23,ppppppppuVar22,&pppppppcStack_b0);
    }
    (*(code *)*ppppppppuStack_a8)(&ppppppppuStack_a8);
    ppppppppuVar9 = &pppppppcStack_b0;
  }
LAB_10a2d99dc:
  (*(code *)*ppppppcStack_e8)(&ppppppcStack_e8);
  (*(code *)(*param_2[0x4e])[5])(&pppppppcStack_b0,param_2[0x4e],param_4);
  pppppppcVar21 = pppppppcStack_b0;
  pppppppcVar23 = pppppppcStack_110;
  pppppppcStack_b0 = (code *******)0x0;
  ppppppcVar11 = pppppppcStack_110[0x4e];
  pppppppcStack_110[0x4e] = (code ******)pppppppcVar21;
  if (ppppppcVar11 != (code ******)0x0) {
    (*(code *)(*ppppppcVar11)[1])(ppppppcVar11);
    pppppppcVar21 = pppppppcStack_b0;
    pppppppcStack_b0 = (code *******)0x0;
    if (pppppppcVar21 != (code *******)0x0) {
      (*(code *)(*pppppppcVar21)[1])();
    }
    pppppppcVar21 = (code *******)pppppppcVar23[0x4e];
  }
  pppppppuVar19 = (undefined *******)(ulong)*(uint *)(param_2 + 0x55);
  *(uint *)(pppppppcVar23 + 0x55) = *(uint *)(param_2 + 0x55);
  if (pppppppcVar21 != (code *******)0x0) {
    (*(code *)(*pppppppcVar21)[4])();
  }
  *(undefined4 *)((long)pppppppcVar23 + 0x2ac) = *(undefined4 *)((long)param_2 + 0x2ac);
  *(undefined1 *)(pppppppcVar23 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  ppppppuVar17 = param_2[0x46];
  if (ppppppuVar17 != (undefined ******)0x0) {
    pppppppcStack_128 = &ppppppcStack_e8;
    pppppppcStack_118 = (code *******)&ppppppppuStack_a8;
    ppppppppuStack_120 = &pppppppcStack_f8;
    puStack_130 = param_1;
    do {
      ppppppppuVar9 = (undefined ********)ppppppuVar17[5];
      ppppppppuVar14 = (undefined ********)ppppppuVar17[6];
      if (ppppppppuVar9 != ppppppppuVar14) {
        pppppppuVar1 = (undefined *******)(ppppppuVar17 + 2);
        do {
          pppppppcVar21 = (code *******)ppppppppuVar9[1];
          if ((pppppppcVar21 != (code *******)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcVar21 != (code *******)0x0)) {
            pppppppuVar20 = *ppppppppuVar9;
            pppppppcVar23 = pppppppcVar21 + 1;
            do {
              ppppppcVar11 = *pppppppcVar23;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
              if (bVar7) {
                *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (ppppppcVar11 == (code ******)0x0) {
              (*(code *)(*pppppppcVar21)[2])(pppppppcVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (pppppppuVar20 != (undefined *******)0x0) {
              pppppppcVar21 = pppppppcStack_110 + 0x44;
              pppppppcStack_b0 = (code *******)pppppppuVar1;
              FUN_10a2fd118(pppppppcVar21,pppppppuVar1,&pppppppcStack_b0);
              pppppppcStack_b0 = (code *******)0x0;
              ppppppppuStack_a8 = (undefined ********)0x0;
              FUN_10a2d9e4c(pppppppcVar21 + 5,&pppppppcStack_b0);
              if (ppppppppuStack_a8 != (undefined ********)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              pppppppcVar21 = pppppppcStack_110 + 0x44;
              pppppppuVar19 = pppppppuVar1;
              pppppppcStack_b0 = (code *******)pppppppuVar1;
              FUN_10a2fd118(pppppppcVar21,pppppppuVar1,&pppppppcStack_b0);
              param_2 = (undefined *******)pppppppcVar21[6];
              if ((undefined *******)pppppppcVar21[5] == param_2) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a2d9dd8);
                (*pcVar8)();
              }
              if (param_4 == 0) {
                func_0x00010a0d77bc(&pppppppuStack_100,pppppppuVar20);
                if (pppppppcStack_f8 != (code *******)0x0) {
                  pppppppcVar21 = pppppppcStack_f8 + 2;
                  do {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                    if (bVar7) {
                      *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                pppppppcVar21 = (code *******)param_2[-1];
                param_2[-1] = (undefined ******)pppppppcStack_f8;
                param_2[-2] = (undefined ******)pppppppuStack_100;
                if (pppppppcVar21 != (code *******)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                if (pppppppcStack_f8 != (code *******)0x0) {
                  pppppppcVar23 = pppppppcStack_f8 + 1;
                  do {
                    ppppppcVar11 = *pppppppcVar23;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
                    if (bVar7) {
                      *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
LAB_10a2d9ca0:
                  pppppppcVar23 = pppppppcStack_f8;
                  if (ppppppcVar11 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_f8)[2])(pppppppcStack_f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    pppppppcVar21 = pppppppcVar23;
                  }
                }
              }
              else {
                pppppppuVar10 = (undefined *******)pppppppuVar20[8];
                pppppppcVar21 = (code *******)pppppppuVar20[9];
                if (*(char *)(param_4 + 0xb8) == '\x01') {
                  pppppppcStack_b0 = (code *******)FUN_10a2fd8f4;
                  ppppppppuStack_a8 = (undefined ********)&PTR_FUN_110bc3120;
                  pppppppcStack_a0 = (code *******)(param_2 + -2);
                  FUN_10a2fd56c(param_4,pppppppuVar10,pppppppcVar21,&pppppppcStack_b0);
                  pppppppuVar20 = *ppppppppuStack_a8;
                  pppppppcVar21 = pppppppcStack_118;
                  pppppppuVar19 = pppppppuVar10;
                }
                else {
                  lVar15 = param_4 + 0x88;
                  pppppppuStack_100 = pppppppuVar10;
                  pppppppcStack_f8 = pppppppcVar21;
                  func_0x00010a35bf90(lVar15,&pppppppuStack_100);
                  ppppppppuVar22 = ppppppppuStack_120;
                  ppppppcVar11 = (code ******)&pppppppuStack_100;
                  if (lVar15 != 0) {
                    ppppppppuVar22 = (undefined ********)(lVar15 + 0x28);
                    ppppppcVar11 = (code ******)(lVar15 + 0x20);
                  }
                  pppppppuVar19 = (undefined *******)*ppppppcVar11;
                  if ((pppppppuVar10 == pppppppuVar19) &&
                     (pppppppcVar21 == (code *******)*ppppppppuVar22)) {
                    func_0x00010a0d77bc(&pppppppuStack_100,pppppppuVar20);
                    if (pppppppcStack_f8 != (code *******)0x0) {
                      pppppppcVar21 = pppppppcStack_f8 + 2;
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                        if (bVar7) {
                          *pppppppcVar21 = (code ******)((long)*pppppppcVar21 + 1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    pppppppcVar21 = (code *******)param_2[-1];
                    param_2[-1] = (undefined ******)pppppppcStack_f8;
                    param_2[-2] = (undefined ******)pppppppuStack_100;
                    if (pppppppcVar21 != (code *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (pppppppcStack_f8 != (code *******)0x0) {
                      pppppppcVar23 = pppppppcStack_f8 + 1;
                      do {
                        ppppppcVar11 = *pppppppcVar23;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
                        if (bVar7) {
                          *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      goto LAB_10a2d9ca0;
                    }
                    goto LAB_10a2d9cf4;
                  }
                  pppppppcStack_f0 = (code *******)FUN_10a2fd9b4;
                  ppppppcStack_e8 = (code ******)&PTR_FUN_110bc3140;
                  pppppppcStack_e0 = (code *******)(param_2 + -2);
                  FUN_10a2fd56c(param_4,pppppppuVar19,*ppppppppuVar22,&pppppppcStack_f0);
                  pppppppuVar20 = (undefined *******)*ppppppcStack_e8;
                  pppppppcVar21 = pppppppcStack_128;
                }
                (*(code *)pppppppuVar20)();
              }
            }
          }
LAB_10a2d9cf4:
          ppppppppuVar9 = ppppppppuVar9 + 2;
        } while (ppppppppuVar9 != ppppppppuVar14);
      }
      ppppppuVar17 = (undefined ******)*ppppppuVar17;
      pppppppcVar23 = pppppppcStack_110;
      param_1 = puStack_130;
    } while (ppppppuVar17 != (undefined ******)0x0);
  }
  *param_1 = pppppppcVar23;
  param_1[1] = ppppppppuStack_108;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a2fca10(&pppppppcStack_b0);
  (*(code *)*ppppppcStack_e8)(8);
  FUN_10a2fcebc(&pppppppcStack_110);
  pppppppcVar23 = pppppppcVar21;
  __Unwind_Resume();
  pcStack_138 = FUN_10a2d9e4c;
  ppppppcVar11 = pppppppcVar23[1];
  if (ppppppcVar11 < pppppppcVar23[2]) {
    ppppppuVar17 = *pppppppuVar19;
    ppppppcVar16 = ppppppcVar11 + 2;
    ppppppcVar11[1] = (code *****)pppppppuVar19[1];
    *ppppppcVar11 = (code *****)ppppppuVar17;
    *pppppppuVar19 = (undefined ******)0x0;
    pppppppuVar19[1] = (undefined ******)0x0;
  }
  else {
    lVar15 = (long)ppppppcVar11 - (long)*pppppppcVar23;
    uVar2 = (lVar15 >> 4) + 1;
    ppppppppuStack_160 = ppppppppuVar9;
    pppppppuStack_158 = param_2;
    lStack_150 = param_4;
    pppppppcStack_148 = pppppppcVar21;
    puStack_140 = &stack0xfffffffffffffff0;
    if (uVar2 >> 0x3c != 0) {
      FUN_10a2e3050();
      ppppppcVar11 = *pppppppcVar23;
      for (ppppppcVar16 = pppppppcVar23[1]; ppppppcVar16 != ppppppcVar11;
          ppppppcVar16 = ppppppcVar16 + -2) {
        if (ppppppcVar16[-1] != (code *****)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      pppppppcVar23[1] = ppppppcVar11;
      return;
    }
    uVar12 = (long)pppppppcVar23[2] - (long)*pppppppcVar23;
    uVar13 = (long)uVar12 >> 3;
    if (uVar13 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar13 = 0xfffffffffffffff;
    }
    pppppppcVar21 = pppppppcVar23;
    pppppppcStack_168 = pppppppcVar23;
    FUN_10a2e3064();
    puVar3 = (undefined8 *)((long)pppppppcVar21 + lVar15);
    ppppppuVar17 = *pppppppuVar19;
    ppppppcVar16 = (code ******)(puVar3 + 2);
    puVar3[1] = pppppppuVar19[1];
    *puVar3 = ppppppuVar17;
    *pppppppuVar19 = (undefined ******)0x0;
    pppppppuVar19[1] = (undefined ******)0x0;
    ppppppcVar11 = (code ******)((long)puVar3 - ((long)pppppppcVar23[1] - (long)*pppppppcVar23));
    _memcpy(ppppppcVar11);
    ppppppcStack_188 = *pppppppcVar23;
    *pppppppcVar23 = ppppppcVar11;
    pppppppcVar23[1] = ppppppcVar16;
    ppppppcStack_170 = pppppppcVar23[2];
    pppppppcVar23[2] = (code ******)(pppppppcVar21 + uVar13 * 2);
    ppppppcStack_180 = ppppppcStack_188;
    ppppppcStack_178 = ppppppcStack_188;
    func_0x00010a2e3098(&ppppppcStack_188);
  }
  pppppppcVar23[1] = ppppppcVar16;
  return;
}



/* Entry: 10a2d9e4c; end: 10a2d9f77;  */

void FUN_10a2d9e4c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar6 = (long)puVar2 - *param_1;
    uVar1 = (lVar6 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a2e3050();
      lVar6 = *param_1;
      for (lVar8 = param_1[1]; lVar8 != lVar6; lVar8 = lVar8 + -0x10) {
        if (*(long *)(lVar8 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[1] = lVar6;
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10a2e3064();
    puVar2 = (undefined8 *)((long)plVar3 + lVar6);
    uVar9 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a2e3098(&lStack_58);
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a2d9f78; end: 10a2da09b;  */

void FUN_10a2d9f78(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x278);
  lVar4 = *param_2;
  if ((lVar5 == 0 || lVar4 == 0) ||
     (*(long *)(lVar5 + 0x40) != *(long *)(lVar4 + 0x40) ||
      *(long *)(lVar5 + 0x48) != *(long *)(lVar4 + 0x48))) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(long *)(param_1 + 0x278) = lVar4;
    plVar6 = *(long **)(param_1 + 0x280);
    *(long *)(param_1 + 0x280) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = *(long **)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (*(long **)(param_1 + 0x278) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x278) + 0xa0))(&plStack_28);
      plVar6 = plStack_28;
      plStack_28 = (long *)0x0;
      plVar3 = *(long **)(param_1 + 0x270);
      *(long **)(param_1 + 0x270) = plVar6;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        plVar6 = plStack_28;
        plStack_28 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      (**(code **)(**(long **)(param_1 + 0x270) + 0x20))
                (*(long **)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x2a8));
    }
  }
  return;
}



/* Entry: 10a2da09c; end: 10a2da19b;  */

byte FUN_10a2da09c(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar1 = (long *)(param_1 + 0x248);
  plVar3 = plVar1;
  func_0x000107c2b05c();
  plVar7 = *(long **)(param_1 + 0x250);
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)(uVar8 & (ulong)plVar3);
    }
    else {
      plVar9 = plVar3;
      if (plVar7 <= plVar3) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar3 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)plVar3 - uVar2 * (long)plVar7);
      }
    }
    plVar5 = *(long **)(*plVar1 + (long)plVar9 * 8);
    bVar4 = 0;
    if (plVar5 == (long *)0x0) goto LAB_10a2da180;
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      plVar6 = (long *)plVar5[1];
      if (plVar3 == plVar6) {
        plVar6 = plVar1;
        func_0x000107c2b068(plVar1,plVar5 + 2,param_2);
        if (((ulong)plVar6 & 1) != 0) {
          if (*(char *)(plVar5 + 5) == '\x01') {
            bVar4 = *(byte *)(param_1 + 0x218);
            goto LAB_10a2da180;
          }
          break;
        }
      }
      else {
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar8);
        }
        else if (plVar7 <= plVar6) {
          uVar2 = 0;
          if (plVar7 != (long *)0x0) {
            uVar2 = (ulong)plVar6 / (ulong)plVar7;
          }
          plVar6 = (long *)((long)plVar6 - uVar2 * (long)plVar7);
        }
        if (plVar6 != plVar9) break;
      }
    }
  }
  bVar4 = 0;
LAB_10a2da180:
  return bVar4 & 1;
}



/* Entry: 10a2da19c; end: 10a2da26f;  */

void FUN_10a2da19c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  param_2 = param_2 + 0x220;
  FUN_10a2fda74();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar9 = *(undefined8 **)(param_2 + 0x28);
    puVar2 = *(undefined8 **)(param_2 + 0x30);
    lVar8 = (long)puVar2 - (long)puVar9;
    if (lVar8 != 0) {
      uVar7 = lVar8 >> 4;
      if (uVar7 >> 0x3c != 0) {
        FUN_10a2e3050();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2da25c);
        (*pcVar5)();
      }
      puVar6 = param_1;
      FUN_10a2e3064();
      *param_1 = puVar6;
      param_1[1] = puVar6;
      param_1[2] = puVar6 + uVar7 * 2;
      do {
        lVar8 = puVar9[1];
        uVar10 = *puVar9;
        puVar6[1] = puVar9[1];
        *puVar6 = uVar10;
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar8 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar9 != puVar2);
      param_1[1] = puVar6;
    }
  }
  return;
}



/* Entry: 10a2da270; end: 10a2da5cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a2da3d0) */
/* WARNING: Removing unreachable block (ram,0x00010a2da4fc) */

void FUN_10a2da270(undefined8 *param_1,long param_2,long **param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  long **pplVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puStack_f8;
  char *pcStack_f0;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  long **applStack_b8 [2];
  char cStack_a1;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar2 = (long *)(ulong)*(byte *)((long)param_3 + 0x17);
  }
  FUN_10a003c90(applStack_b8,(long)plVar2 + 1,&ppuStack_d0);
  ppplVar5 = (long ***)applStack_b8[0];
  if (-1 < cStack_a1) {
    ppplVar5 = applStack_b8;
  }
  if (plVar2 != (long *)0x0) {
    pplVar6 = (long **)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      pplVar6 = param_3;
    }
    _memmove(ppplVar5,pplVar6,plVar2);
  }
  *(undefined2 *)((long)ppplVar5 + (long)plVar2) = 0x5f;
  __ZNSt3__19to_stringEi(&ppuStack_d0,*(undefined4 *)(param_2 + 0x2a8));
  pppuVar10 = (undefined8 ***)ppuStack_d0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    pppuVar10 = &ppuStack_d0;
  }
  ppplVar5 = applStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppplVar5,pppuVar10,uStack_c8);
  plStack_98 = (long *)ppplVar5[1];
  plStack_a0 = (long *)*ppplVar5;
  plStack_90 = (long *)ppplVar5[2];
  ppplVar5[1] = (long **)0x0;
  ppplVar5[2] = (long **)0x0;
  *ppplVar5 = (long **)0x0;
  pcVar9 = "_";
  pplVar6 = &plStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pplVar6,"_",1);
  plStack_78 = pplVar6[1];
  uStack_80 = *pplVar6;
  uStack_70 = pplVar6[2];
  pplVar6[1] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  func_0x00010a0fda30();
  puStack_f8 = pplVar6;
  pcStack_f0 = pcVar9;
  FUN_10a0ffca4(&ppuStack_e8,&puStack_f8);
  pppuVar10 = (undefined8 ***)ppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_e0 = (ulong)bStack_d1;
    pppuVar10 = &ppuStack_e8;
  }
  puVar7 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar10,uStack_e0);
  uStack_58 = puVar7[1];
  uStack_60 = *puVar7;
  uStack_50 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((long)plStack_90 < 0) {
    __ZdlPv(plStack_a0);
  }
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(ppuStack_d0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(applStack_b8[0]);
  }
  uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x168) + 0x120);
  uVar8 = uVar12;
  FUN_10a3dd220(uVar12);
  func_0x00010a0fda30();
  FUN_10a3dd268(uVar12,uVar8,pppuVar10,&uStack_60);
  FUN_10a0c3500();
  func_0x00010a0d77bc(&uStack_80,uVar12);
  plVar2 = plStack_78;
  plStack_98 = plStack_78;
  plStack_a0 = uStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_2 = param_2 + 0x220;
  applStack_b8[0] = param_3;
  FUN_10a2fd118(param_2,param_3,applStack_b8);
  FUN_10a2da5cc(param_2 + 0x28,&plStack_a0);
  if (plVar2 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  plVar2 = plStack_78;
  param_1[1] = plStack_78;
  *param_1 = uStack_80;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}


