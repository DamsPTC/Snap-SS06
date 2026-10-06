/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f3c920; end: 109f3dd8f;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_109f3c920(undefined *param_1,long *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  short sVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  char *pcStack_1b8;
  long *plStack_1b0;
  char *pcStack_1a8;
  long *plStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  char *pcStack_180;
  ulong uStack_178;
  long *plStack_170;
  char *pcStack_168;
  long *plStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined4 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  long alStack_100 [17];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  plStack_158 = param_2;
  puStack_150 = param_1;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  puVar5 = (undefined *)0x0;
  lStack_140 = lVar4;
  FUN_109f6695c(0,FUN_109f65518,FUN_109f65668);
  puStack_148 = &UNK_10f61a673;
  if (param_4 != 0) {
    puStack_148 = &UNK_10f61a675;
  }
  uStack_130 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  if ((byte)param_1[0x61] < 0xf) {
    pcStack_180 = (&PTR_DAT_110b86ee8)[(int)(char)param_1[0x61]];
  }
  else {
    pcStack_180 = &UNK_10f61bcc6;
  }
  puStack_138 = puVar5;
  uStack_118 = param_3;
  lStack_108 = param_4;
  _fprintf(param_2,&UNK_10f61a6bd);
  _fwrite(&UNK_10f61a6c9,0x10,1,param_2);
  FUN_109f6572c(param_2,param_1 + 0x41);
  _fwrite(&DAT_10f38bf4b,2,1,param_2);
  pcStack_180 = *(char **)(param_1 + 0x30);
  if (pcStack_180 != (char *)0x0) {
    _fprintf(param_2,&UNK_10f61a6da);
  }
  pcStack_180 = *(char **)(param_1 + 0x38);
  if (pcStack_180 != (char *)0x0) {
    _fprintf(param_2,&UNK_10f61a6e4);
  }
  pcStack_180 = "true";
  if (param_1[0x40] == '\0') {
    pcStack_180 = "false";
  }
  _fprintf(param_2,&UNK_10f61a6ef);
  sVar11 = *(short *)(param_1 + 0x61);
  uVar12 = (uint)(char)sVar11;
  if ((uVar12 < 0xf) && ((1 << (ulong)(uVar12 & 0x1f) & 0x40e0U) != 0)) {
    pcStack_180 = (char *)(ulong)*(ushort *)(param_1 + 0x134);
    uStack_178 = (ulong)*(ushort *)(param_1 + 0x136);
    plStack_170 = (long *)(ulong)*(ushort *)(param_1 + 0x138);
    pcStack_168 = "";
    if ((*(ushort *)(param_1 + 0x152) & 0x2000) != 0) {
      pcStack_168 = " (variable)";
    }
    _fprintf(param_2,&UNK_10f61a6fd);
    sVar11 = *(short *)(param_1 + 0x61);
    uVar12 = (uint)(char)sVar11;
  }
  pcStack_180 = (char *)(long)(int)uVar12;
  uStack_178 = (long)((ulong)(uint)(int)sVar11 << 0x20) >> 0x28;
  _fprintf(param_2,&UNK_10f61a727);
  if (param_1[99] != 0) {
    pcStack_180 = "num_textures";
    uStack_178 = (ulong)(byte)param_1[99];
    _fprintf(param_2,&UNK_10f61aecf);
  }
  if (param_1[100] != 0) {
    pcStack_180 = "num_ubos";
    uStack_178 = (ulong)(byte)param_1[100];
    _fprintf(param_2,&UNK_10f61aecf);
  }
  if (param_1[0x65] != 0) {
    pcStack_180 = "num_abos";
    uStack_178 = (ulong)(byte)param_1[0x65];
    _fprintf(param_2,&UNK_10f61aecf);
  }
  if (param_1[0x66] != 0) {
    pcStack_180 = "num_ssbos";
    uStack_178 = (ulong)(byte)param_1[0x66];
    _fprintf(param_2,&UNK_10f61aecf);
  }
  if (param_1[0x67] != 0) {
    pcStack_180 = "num_images";
    uStack_178 = (ulong)(byte)param_1[0x67];
    _fprintf(param_2,&UNK_10f61aecf);
  }
  func_0x000109f40784(param_2,&UNK_10f61a775,*(undefined8 *)(param_1 + 0x68));
  func_0x000109f40784(param_2,&UNK_10f61a781,*(undefined8 *)(param_1 + 0x70));
  func_0x000109f40784(param_2,&UNK_10f61a792,*(undefined8 *)(param_1 + 0x78));
  func_0x000109f40784(param_2,&UNK_10f61a7a2,*(undefined8 *)(param_1 + 0x80));
  FUN_109f40904(param_2,&UNK_10f61a7af,param_1 + 0x88,3);
  func_0x000109f40784(param_2,&UNK_10f61a7c2,*(undefined8 *)(param_1 + 0x98));
  func_0x000109f40784(param_2,&UNK_10f61a7d7,*(undefined8 *)(param_1 + 0xa0));
  func_0x000109f40784(param_2,&UNK_10f61a7ed,*(undefined8 *)(param_1 + 0xa8));
  if (*(ushort *)(param_1 + 0xb0) != 0) {
    pcStack_180 = "inputs_read_16bit";
    uStack_178 = (ulong)*(ushort *)(param_1 + 0xb0);
    _fprintf(param_2,&UNK_10f61aef5);
  }
  if (*(ushort *)(param_1 + 0xb2) != 0) {
    pcStack_180 = "outputs_written_16bit";
    uStack_178 = (ulong)*(ushort *)(param_1 + 0xb2);
    _fprintf(param_2,&UNK_10f61aef5);
  }
  if (*(ushort *)(param_1 + 0xb4) != 0) {
    pcStack_180 = "outputs_read_16bit";
    uStack_178 = (ulong)*(ushort *)(param_1 + 0xb4);
    _fprintf(param_2,&UNK_10f61aef5);
  }
  if (*(ushort *)(param_1 + 0xb6) != 0) {
    pcStack_180 = "inputs_read_indirectly_16bit";
    uStack_178 = (ulong)*(ushort *)(param_1 + 0xb6);
    _fprintf(param_2,&UNK_10f61aef5);
  }
  if (*(ushort *)(param_1 + 0xb8) != 0) {
    pcStack_180 = "outputs_accessed_indirectly_16bit";
    uStack_178 = (ulong)*(ushort *)(param_1 + 0xb8);
    _fprintf(param_2,&UNK_10f61aef5);
  }
  if (*(uint *)(param_1 + 0xbc) != 0) {
    pcStack_180 = "patch_inputs_read";
    uStack_178 = (ulong)*(uint *)(param_1 + 0xbc);
    _fprintf(param_2,&UNK_10f61af01);
  }
  if (*(uint *)(param_1 + 0xc0) != 0) {
    pcStack_180 = "patch_outputs_written";
    uStack_178 = (ulong)*(uint *)(param_1 + 0xc0);
    _fprintf(param_2,&UNK_10f61af01);
  }
  if (*(uint *)(param_1 + 0xc4) != 0) {
    pcStack_180 = "patch_outputs_read";
    uStack_178 = (ulong)*(uint *)(param_1 + 0xc4);
    _fprintf(param_2,&UNK_10f61af01);
  }
  func_0x000109f40784(param_2,&UNK_10f61a8b3,*(undefined8 *)(param_1 + 200));
  func_0x000109f40784(param_2,&UNK_10f61a8ca,*(undefined8 *)(param_1 + 0xd0));
  func_0x000109f40784(param_2,&UNK_10f61a8e6,*(undefined8 *)(param_1 + 0xd8));
  func_0x000109f40784(param_2,&UNK_10f61a903,*(undefined8 *)(param_1 + 0xe0));
  FUN_109f40904(param_2,&UNK_10f61a925,param_1 + 0xe8,4);
  FUN_109f40904(param_2,&UNK_10f61a933,param_1 + 0xf8,4);
  FUN_109f40904(param_2,&UNK_10f61a948,param_1 + 0x108,1);
  FUN_109f40904(param_2,&UNK_10f61a956,param_1 + 0x10c,2);
  FUN_109f40904(param_2,&UNK_10f61a962,param_1 + 0x114,2);
  puVar5 = param_1 + 0x11c;
  plVar10 = (long *)0x2;
  FUN_109f40904(param_2,&UNK_10f61a970,puVar5,2);
  if (*(uint *)(param_1 + 0x124) != 0) {
    pcStack_180 = "float_controls_execution_mode";
    uStack_178 = (ulong)*(uint *)(param_1 + 0x124);
    _fprintf(param_2,&UNK_10f61af01);
  }
  if (*(uint *)(param_1 + 0x128) != 0) {
    pcStack_180 = "shared_size";
    uStack_178 = (ulong)*(uint *)(param_1 + 0x128);
    _fprintf(param_2,&UNK_10f61aecf);
  }
  if ((*(ushort *)(param_1 + 0x61) & 0xfe) == 6) {
    pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 300);
    _fprintf(param_2,&UNK_10f61a9a6);
  }
  if (*(uint *)(param_1 + 0x130) != 0) {
    pcStack_180 = "ray queries";
    uStack_178 = (ulong)*(uint *)(param_1 + 0x130);
    _fprintf(param_2,&UNK_10f61aecf);
  }
  pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x13c);
  _fprintf(param_2,&UNK_10f61a9c9);
  if (param_1[0x141] == '\x01') {
    pcStack_180 = "uses_wide_subgroup_intrinsics";
    _fprintf(param_2,&UNK_10f61af0d);
  }
  plVar13 = (long *)(ulong)(byte)param_1[0x144];
  if (param_1[0x142] == 0 && param_1[0x143] == 0) {
    if (param_1[0x144] != 0) {
LAB_109f3cf88:
      uStack_178 = 0;
      goto LAB_109f3cf94;
    }
    if (param_1[0x145] != '\0') {
      plVar13 = (long *)0x0;
      goto LAB_109f3cf88;
    }
  }
  else {
    uStack_178 = (ulong)(byte)param_1[0x143];
LAB_109f3cf94:
    pcStack_168 = (char *)(ulong)(byte)param_1[0x145];
    pcStack_180 = (undefined *)(ulong)(byte)param_1[0x142];
    plStack_170 = plVar13;
    _fprintf(param_2,&UNK_10f61a9fa);
  }
  plVar13 = (long *)(ulong)*(ushort *)(param_1 + 0x14a);
  if (*(ushort *)(param_1 + 0x146) == 0 && *(ushort *)(param_1 + 0x148) == 0) {
    if (*(ushort *)(param_1 + 0x14a) != 0) {
LAB_109f3cfd8:
      uStack_178 = 0;
      goto LAB_109f3cfe4;
    }
    if (*(short *)(param_1 + 0x14c) != 0) {
      plVar13 = (long *)0x0;
      goto LAB_109f3cfd8;
    }
  }
  else {
    uStack_178 = (ulong)*(ushort *)(param_1 + 0x148);
LAB_109f3cfe4:
    pcStack_168 = (char *)(ulong)*(ushort *)(param_1 + 0x14c);
    pcStack_180 = (undefined *)(ulong)*(ushort *)(param_1 + 0x146);
    plStack_170 = plVar13;
    _fprintf(param_2,&UNK_10f61aa18);
  }
  uVar2 = *(ushort *)(param_1 + 0x14e);
  if ((uVar2 & 0xf) != 0) {
    pcStack_180 = "num_inlinable_uniforms";
    uStack_178 = (ulong)(uVar2 & 0xf);
    _fprintf(param_2,&UNK_10f61aecf);
    uVar2 = *(ushort *)(param_1 + 0x14e);
  }
  if ((uVar2 >> 4 & 0xf) != 0) {
    pcStack_180 = "clip_distance_array_size";
    uStack_178 = (ulong)(uVar2 >> 4 & 0xf);
    _fprintf(param_2,&UNK_10f61aecf);
    uVar2 = *(ushort *)(param_1 + 0x14e);
  }
  if ((uVar2 >> 8 & 0xf) != 0) {
    pcStack_180 = "cull_distance_array_size";
    uStack_178 = (ulong)(uVar2 >> 8 & 0xf);
    _fprintf(param_2,&UNK_10f61aecf);
    uVar2 = *(ushort *)(param_1 + 0x14e);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    pcStack_180 = "uses_texture_gather";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x14e);
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    pcStack_180 = "uses_resource_info_query";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x14e);
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    pcStack_180 = "divergence_analysis_run";
    _fprintf(param_2,&UNK_10f61af0d);
  }
  if (param_1[0x150] != 0) {
    pcStack_180 = "bit_sizes_float";
    uStack_178 = (ulong)(byte)param_1[0x150];
    _fprintf(param_2,&UNK_10f61af17);
  }
  if (param_1[0x151] != 0) {
    pcStack_180 = "bit_sizes_int";
    uStack_178 = (ulong)(byte)param_1[0x151];
    _fprintf(param_2,&UNK_10f61af17);
  }
  uVar2 = *(ushort *)(param_1 + 0x152);
  if ((uVar2 & 1) != 0) {
    pcStack_180 = "first_ubo_is_default_ubo";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x152);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pcStack_180 = "separate_shader";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x152);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pcStack_180 = "has_transform_feedback_varyings";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x152);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pcStack_180 = "flrp_lowered";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x152);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    pcStack_180 = "io_lowered";
    _fprintf(param_2,&UNK_10f61af0d);
    uVar2 = *(ushort *)(param_1 + 0x152);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    pcStack_180 = "writes_memory";
    _fprintf(param_2,&UNK_10f61af0d);
  }
  if ((param_1[0x156] & 3) != 0) {
    pcStack_180 = "derivative_group";
    uStack_178 = (ulong)((byte)param_1[0x156] & 3);
    _fprintf(param_2,&UNK_10f61aecf);
  }
  uVar12 = (int)(char)param_1[0x61] & 0xffff;
  if (uVar12 < 4) {
    if (uVar12 - 1 < 2) {
      pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x158);
      _fprintf(param_2,&UNK_10f61abb7);
      pcStack_180 = (char *)(ulong)(byte)param_1[0x15c];
      _fprintf(param_2,&UNK_10f61abcb);
      pcStack_180 = (char *)(ulong)((byte)param_1[0x15d] & 3);
      _fprintf(param_2,&UNK_10f61abe1);
      bVar1 = param_1[0x15d];
      if ((bVar1 >> 2 & 1) != 0) {
        pcStack_180 = "ccw";
        _fprintf(param_2,&UNK_10f61af0d);
        bVar1 = param_1[0x15d];
      }
      if ((bVar1 >> 3 & 1) != 0) {
        pcStack_180 = "point_mode";
        _fprintf(param_2,&UNK_10f61af0d);
      }
      func_0x000109f40784(param_2,&UNK_10f61abee,*(undefined8 *)(param_1 + 0x160));
      func_0x000109f40784(param_2,&UNK_10f61ac0e,*(undefined8 *)(param_1 + 0x168));
      puVar5 = *(undefined **)(param_1 + 0x170);
      func_0x000109f40784(param_2,&UNK_10f61ac2f);
      goto LAB_109f3d9c0;
    }
    if (uVar12 == 0) {
      puVar5 = *(undefined **)(param_1 + 0x158);
      func_0x000109f40784(param_2,&UNK_10f61ab74);
      bVar1 = param_1[0x160];
      if ((bVar1 & 0xf) != 0) {
        pcStack_180 = "blit_sgprs_amd";
        uStack_178 = (ulong)(bVar1 & 0xf);
        _fprintf(param_2,&UNK_10f61aecf);
        bVar1 = param_1[0x160];
      }
      if ((bVar1 >> 5 & 1) != 0) {
        pcStack_180 = "window_space_position";
        _fprintf(param_2,&UNK_10f61af0d);
        bVar1 = param_1[0x160];
      }
      if ((bVar1 >> 6 & 1) == 0) goto LAB_109f3d9c0;
      pcStack_180 = &UNK_10f61aba7;
LAB_109f3d65c:
      puVar8 = &UNK_10f61af0d;
    }
    else {
      if (uVar12 != 3) goto LAB_109f3d350;
      uVar6 = (ulong)*(uint *)(param_1 + 0x158);
      FUN_109f409d8();
      pcStack_180 = (char *)uVar6;
      _fprintf(param_2,&UNK_10f61ac51);
      uVar6 = (ulong)*(uint *)(param_1 + 0x15c);
      FUN_109f409d8();
      pcStack_180 = (char *)uVar6;
      _fprintf(param_2,&UNK_10f61ac67);
      pcStack_180 = (char *)(ulong)*(ushort *)(param_1 + 0x160);
      _fprintf(param_2,&UNK_10f61ac7c);
      pcStack_180 = (char *)(ulong)(byte)param_1[0x162];
      _fprintf(param_2,&UNK_10f61ac8e);
      pcStack_180 = (char *)(ulong)((byte)param_1[0x163] & 7);
      _fprintf(param_2,&UNK_10f61ac9f);
      bVar1 = param_1[0x163];
      if ((bVar1 >> 3 & 1) != 0) {
        pcStack_180 = "uses_end_primitive";
        _fprintf(param_2,&UNK_10f61af0d);
        bVar1 = param_1[0x163];
      }
      pcStack_180 = (char *)(ulong)(bVar1 >> 4);
      puVar8 = &UNK_10f61acc3;
    }
  }
  else if (uVar12 < 7) {
    if (uVar12 == 4) {
      uVar12 = *(uint *)(param_1 + 0x158);
      if ((uVar12 & 1) != 0) {
        pcStack_180 = "uses_discard";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 1 & 1) != 0) {
        pcStack_180 = "uses_fbfetch_output";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 3 & 1) != 0) {
        pcStack_180 = "color_is_dual_source";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 4 & 1) != 0) {
        pcStack_180 = "require_full_quads";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 6 & 1) != 0) {
        pcStack_180 = "needs_quad_helper_invocations";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 7 & 1) != 0) {
        pcStack_180 = "uses_sample_qualifier";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 8 & 1) != 0) {
        pcStack_180 = "uses_sample_shading";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 9 & 1) != 0) {
        pcStack_180 = "early_fragment_tests";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 10 & 1) != 0) {
        pcStack_180 = "inner_coverage";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0xb & 1) != 0) {
        pcStack_180 = "post_depth_coverage";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0xc & 1) != 0) {
        pcStack_180 = "pixel_center_integer";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0xd & 1) != 0) {
        pcStack_180 = "origin_upper_left";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0xe & 1) != 0) {
        pcStack_180 = "pixel_interlock_ordered";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0xf & 1) != 0) {
        pcStack_180 = "pixel_interlock_unordered";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x10 & 1) != 0) {
        pcStack_180 = "sample_interlock_ordered";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x11 & 1) != 0) {
        pcStack_180 = "sample_interlock_unordered";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x12 & 1) != 0) {
        pcStack_180 = "untyped_color_outputs";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      uVar3 = uVar12 >> 0x13 & 7;
      if (uVar3 != 0) {
        pcStack_180 = "depth_layout";
        uStack_178 = (ulong)uVar3;
        _fprintf(param_2,&UNK_10f61aecf);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      uVar3 = uVar12 >> 0x16 & 7;
      if (uVar3 != 0) {
        if (uVar3 < 5) {
          pcStack_180 = (&PTR_DAT_110b876e0)[uVar3];
        }
        else {
          pcStack_180 = &UNK_10f61bcc6;
        }
        _fprintf(param_2,&UNK_10f61ad93);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x19 & 1) != 0) {
        pcStack_180 = "color0_sample";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x1a & 1) != 0) {
        pcStack_180 = "color0_centroid";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      uVar3 = uVar12 >> 0x1b & 7;
      if (uVar3 != 0) {
        if (uVar3 < 5) {
          pcStack_180 = (&PTR_DAT_110b876e0)[uVar3];
        }
        else {
          pcStack_180 = &UNK_10f61bcc6;
        }
        _fprintf(param_2,&UNK_10f61adc4);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((uVar12 >> 0x1e & 1) != 0) {
        pcStack_180 = "color1_sample";
        _fprintf(param_2,&UNK_10f61af0d);
        uVar12 = *(uint *)(param_1 + 0x158);
      }
      if ((int)uVar12 < 0) {
        pcStack_180 = "color1_centroid";
        _fprintf(param_2,&UNK_10f61af0d);
      }
      if (*(uint *)(param_1 + 0x15c) == 0) goto LAB_109f3d9c0;
      pcStack_180 = "advanced_blend_modes";
      puVar8 = &UNK_10f61af01;
      uStack_178 = (ulong)*(uint *)(param_1 + 0x15c);
    }
    else {
      if (uVar12 != 5) goto LAB_109f3d350;
LAB_109f3d374:
      pcStack_180 = (char *)(ulong)*(ushort *)(param_1 + 0x158);
      if (*(ushort *)(param_1 + 0x158) == 0 && *(ushort *)(param_1 + 0x15a) == 0) {
        if (*(ushort *)(param_1 + 0x15c) != 0) {
          uStack_178 = 0;
          goto LAB_109f3d598;
        }
      }
      else {
        uStack_178 = (ulong)*(ushort *)(param_1 + 0x15a);
LAB_109f3d598:
        plStack_170 = (long *)(ulong)*(ushort *)(param_1 + 0x15c);
        _fprintf(param_2,&UNK_10f61ae0a);
      }
      if ((param_1[0x15e] & 0xf) != 0) {
        pcStack_180 = "user_data_components_amd";
        uStack_178 = (ulong)((byte)param_1[0x15e] & 0xf);
        _fprintf(param_2,&UNK_10f61aecf);
      }
      pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x160);
      puVar8 = &UNK_10f61ae46;
    }
  }
  else {
    if (uVar12 == 7) {
      puVar5 = *(undefined **)(param_1 + 0x158);
      func_0x000109f40784(param_2,&UNK_10f61ae54);
      pcStack_180 = (char *)(ulong)*(ushort *)(param_1 + 0x16c);
      _fprintf(param_2,&UNK_10f61ae76);
      pcStack_180 = (char *)(ulong)*(ushort *)(param_1 + 0x16e);
      _fprintf(param_2,&UNK_10f61ae8c);
      uVar6 = (ulong)*(uint *)(param_1 + 0x170);
      FUN_109f409d8();
      pcStack_180 = (char *)uVar6;
      _fprintf(param_2,&UNK_10f61aea4);
      if (param_1[0x174] != '\x01') goto LAB_109f3d9c0;
      pcStack_180 = &UNK_10f61aeb8;
      goto LAB_109f3d65c;
    }
    if (uVar12 == 0xe) goto LAB_109f3d374;
LAB_109f3d350:
    pcStack_180 = (char *)(long)(int)(char)param_1[0x61];
    puVar8 = &UNK_10f61aebb;
  }
  _fprintf(param_2,puVar8);
LAB_109f3d9c0:
  pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x198);
  _fprintf(param_2,&UNK_10f61a67a);
  pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x1a0);
  _fprintf(param_2,&UNK_10f61a686);
  pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x19c);
  _fprintf(param_2,&UNK_10f61a693);
  if (*(uint *)(param_1 + 0x1a8) != 0) {
    pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x1a8);
    _fprintf(param_2,&UNK_10f61a6a1);
  }
  if (*(uint *)(param_1 + 0x1b8) != 0) {
    pcStack_180 = (char *)(ulong)*(uint *)(param_1 + 0x1b8);
    _fprintf(param_2,&UNK_10f61a6ae);
  }
  uVar12 = 0;
  plVar13 = alStack_100;
  pcVar18 = (char *)0x1;
  do {
    if (uVar12 != 0x12) {
      uVar3 = 1 << (ulong)(uVar12 & 0x1f);
      if ((uVar12 & 0x1e) == 2) {
        iVar15 = 0;
        do {
          alStack_100[0xd] = 0;
          alStack_100[0xc] = 0;
          alStack_100[0xf] = 0;
          alStack_100[0xe] = 0;
          alStack_100[9] = 0;
          alStack_100[8] = 0;
          alStack_100[0xb] = 0;
          alStack_100[10] = 0;
          alStack_100[7] = 0;
          alStack_100[6] = 0;
          alStack_100[3] = 0;
          alStack_100[2] = 0;
          alStack_100[5] = 0;
          alStack_100[4] = 0;
          alStack_100[1] = 0;
          alStack_100[0] = 0;
          plVar14 = *(long **)(param_1 + 8);
          while (plVar16 = plVar14, plVar14 = (long *)*plVar16, plVar14 != (long *)0x0) {
            if (((uVar3 & (uint)plVar16[4]) != 0) && (*(int *)((long)plVar16 + 0x3c) == iVar15)) {
              alStack_100[(ulong)plVar16[4] >> 0x24 & 3] = (long)plVar16;
            }
          }
          lVar4 = 0;
          do {
            if (*(long *)((long)alStack_100 + lVar4) != 0) {
              func_0x000109f402f8(*(long *)((long)alStack_100 + lVar4),&plStack_158);
            }
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0x80);
          iVar15 = iVar15 + 1;
        } while (iVar15 != 0x80);
        param_2 = (long *)0x80;
      }
      else {
        param_2 = *(long **)(param_1 + 8);
        plVar14 = (long *)*param_2;
        if (plVar14 != (long *)0x0) {
          plVar16 = param_2;
          do {
            param_2 = plVar14;
            if ((uVar3 & 0x1fffff & *(uint *)(plVar16 + 4)) != 0) {
              func_0x000109f402f8(plVar16,&plStack_158);
              param_2 = (long *)*plVar16;
            }
            plVar14 = (long *)*param_2;
            plVar16 = param_2;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x15);
  plVar14 = *(long **)(param_1 + 0x178);
  pcVar17 = (char *)0x15;
  if (*plVar14 != 0) {
    param_2 = (long *)&UNK_10f61b162;
    pcVar17 = "";
    pcVar18 = " (exported)";
    param_1 = &UNK_10f61b141;
    plVar13 = (long *)&DAT_10f48d515;
    do {
      plVar16 = plStack_158;
      plStack_170 = param_2;
      if (((*(byte *)((long)plVar14 + 0x3c) & 1) == 0) &&
         (plStack_170 = (long *)&UNK_10f61b16e, *(char *)((long)plVar14 + 0x3b) == '\0')) {
        plStack_170 = (long *)pcVar17;
      }
      pcStack_180 = (char *)plVar14[2];
      uStack_178 = (ulong)*(uint *)(plVar14 + 4);
      pcStack_168 = pcVar18;
      if (*(char *)((long)plVar14 + 0x39) == '\0') {
        pcStack_168 = pcVar17;
      }
      _fprintf(plStack_158,&UNK_10f61b141);
      _fputc(10,plVar16);
      plVar16 = plStack_158;
      lVar4 = plVar14[6];
      if (lVar4 != 0) {
        uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar4 + 0x78));
        pcStack_180 = *(char **)(*(long *)(lVar4 + 0x20) + 0x10);
        _fprintf(plStack_158,&UNK_10f61b184);
        _fwrite(&DAT_10f38bea1,2,1,plVar16);
        if (*(long *)(lVar4 + 0x28) != 0) {
          _fwrite(&DAT_10f48d515,4,1,plVar16);
          pcStack_180 = *(char **)(*(long *)(lVar4 + 0x28) + 0x10);
          _fprintf(plVar16,&UNK_10f61b18e);
        }
        uVar19 = (ulong)*(uint *)(lVar4 + 0x78) + 0x1f >> 5;
        uVar6 = uVar19;
        _calloc(uVar19,4);
        uStack_128 = uVar6;
        _calloc(uVar19,4);
        uStack_120 = uVar19;
        func_0x000109f01564(lVar4,uVar6,uVar19);
        for (plVar10 = *(long **)(lVar4 + 0x58); *plVar10 != 0; plVar10 = (long *)*plVar10) {
          _fwrite(&DAT_10f48d515,4,1,plVar16);
          func_0x000109f402f8(plVar10,&plStack_158);
        }
        FUN_109ecc784(lVar4);
        for (plVar10 = *(long **)(lVar4 + 0x30); *plVar10 != 0; plVar10 = (long *)*plVar10) {
          FUN_109f41538(plVar10,&plStack_158,1);
        }
        puVar5 = (undefined *)0x1;
        plVar10 = plVar16;
        _fwrite(&DAT_10f48d515,4,1,plVar16);
        pcStack_180 = (char *)(ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0x40);
        _fprintf(plVar16,&UNK_10f61b19b);
        _free(uStack_128);
        _free(uStack_120);
        uStack_110 = uStack_110 & 0xffffffff00000000;
      }
      plVar14 = (long *)*plVar14;
    } while (*plVar14 != 0);
  }
  if (lStack_140 != 0) {
    param_1 = (undefined *)(lStack_140 + -0x30);
    FUN_109f65aa4(param_1);
    FUN_109f65ae0(param_1);
  }
  uVar9 = 0;
  puVar8 = puStack_138;
  func_0x000109f66a2c(puStack_138,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_188 = FUN_109f3dd90;
    lStack_1d0 = 0;
    uStack_1c8 = 0;
    puVar7 = &uStack_1c8;
    plStack_1c0 = plVar14;
    pcStack_1b8 = pcVar18;
    plStack_1b0 = plVar13;
    pcStack_1a8 = pcVar17;
    plStack_1a0 = param_2;
    puStack_198 = param_1;
    puStack_190 = &stack0xfffffffffffffff0;
    FUN_109f68a68(puVar7,&lStack_1d0);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_109f3c920(puVar8,puVar7,uVar9,plVar10);
      _fclose(puVar7);
    }
    FUN_109f658b0(puVar5,lStack_1d0 + 1);
    _memcpy();
    puVar5[lStack_1d0] = 0;
    _free(uStack_1c8);
    return puVar5;
  }
  return puVar8;
}



/* Entry: 109f3dd90; end: 109f3de33;  */

long FUN_109f3dd90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = 0;
  uStack_48 = 0;
  puVar1 = &uStack_48;
  FUN_109f68a68(puVar1,&lStack_50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_109f3c920(param_1,puVar1,param_2,param_4);
    _fclose(puVar1);
  }
  FUN_109f658b0(param_3,lStack_50 + 1);
  _memcpy();
  *(undefined1 *)(param_3 + lStack_50) = 0;
  _free(uStack_48);
  return param_3;
}



/* Entry: 109f3de34; end: 109f3de9f;  */

void FUN_109f3de34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  puStack_58 = &UNK_10f61a673;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    for (; *(int *)(lVar1 + 0x10) != 3; lVar1 = *(long *)(lVar1 + 0x18)) {
    }
    uStack_60 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x18);
  }
  uStack_68 = param_2;
  FUN_109f3dea0(param_1,&uStack_68,0);
  return;
}



/* Entry: 109f3dea0; end: 109f4004b;  */

void FUN_109f3dea0(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *param_2;
  if (param_2[10] != 0) {
    lVar3 = *(long *)(param_2[10] + (ulong)*(uint *)(param_1 + 0x20) * 8);
    uVar1 = uVar2;
    _ftell();
    *(int *)(lVar3 + 0x54) = (int)uVar1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    _fwrite(&DAT_10f48d515,4,1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000109f3df4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e47c588 + (ulong)*(uint *)(param_1 + 0x18) * 2) * 4 +
            0x109f3df50))();
  return;
}



/* Entry: 109f4004c; end: 109f402f7;  */

void FUN_109f4004c(long param_1,uint param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar14 = *param_3;
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 == 5) {
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    _fprintf(uVar14,&UNK_10f61bb84);
    uVar14 = *param_3;
    _fprintf(uVar14,&UNK_10f62aa0c);
    lVar17 = **(long **)(param_1 + 0x50);
    if (*(int *)(lVar17 + 0x18) != 5) {
      return;
    }
    _fputc(0x20,uVar14);
    if (param_3[7] == 0) {
      iVar9 = 4;
    }
    else {
      uVar22 = (ulong)(*(uint *)(lVar17 + 0x40) >> 5);
      uVar15 = 1 << (ulong)(*(uint *)(lVar17 + 0x40) & 0x1f);
      iVar9 = 4;
      if (((*(uint *)(param_3[6] + uVar22 * 4) & uVar15) != 0) &&
         (iVar9 = 0x80, (*(uint *)(param_3[7] + uVar22 * 4) & uVar15) != 0)) {
        iVar9 = 4;
      }
    }
    uVar14 = *param_3;
    bVar2 = *(byte *)(lVar17 + 0x45);
    bVar3 = *(byte *)(lVar17 + 0x44);
    uVar22 = (ulong)bVar3;
    _fputc(0x28,uVar14);
    uVar15 = (uint)bVar2;
    if (iVar9 == 6 || uVar15 == 1) {
      if (bVar3 != 0) {
        lVar16 = 0;
        do {
          if (lVar16 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar14);
          }
          pcVar7 = "true";
          if (*(char *)(lVar17 + 0x48 + lVar16) == '\0') {
            pcVar7 = "false";
          }
          _fputs(pcVar7,uVar14);
          lVar16 = lVar16 + 8;
        } while (uVar22 * 8 - lVar16 != 0);
      }
    }
    else if (iVar9 == 0) {
      uVar20 = uVar15 - 8;
      bVar1 = 7 < uVar15 && uVar20 != 0;
      if (bVar3 == 0) {
        uVar19 = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        uVar19 = 0;
        puVar11 = (ulong *)(lVar17 + 0x48);
        uVar10 = uVar20 >> 3 | uVar15 << 0x1d;
        uVar21 = uVar22;
        do {
          if ((int)uVar10 < 3) {
            if (uVar10 == 0) {
              uVar12 = (uint)(byte)*puVar11;
              uVar19 = uVar19 | (byte)((byte)*puVar11 >> 7);
            }
            else {
              uVar12 = (uint)(ushort)*puVar11;
              uVar19 = uVar19 | (ushort)((ushort)*puVar11 >> 0xf);
            }
LAB_109f41ec8:
            bVar4 = 8 < uVar12;
            bVar5 = uVar12 == 9;
          }
          else {
            if (uVar10 == 3) {
              uVar12 = (uint)*puVar11;
              uVar19 = uVar19 | uVar12 >> 0x1f;
              goto LAB_109f41ec8;
            }
            uVar13 = *puVar11;
            uVar19 = (uint)(uVar13 >> 0x3f) | uVar19;
            bVar4 = 8 < uVar13;
            bVar5 = uVar13 == 9;
          }
          uVar18 = uVar18 | (bVar4 && !bVar5);
          puVar11 = puVar11 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      bVar5 = bVar1;
      if (param_3[7] != 0) {
        uVar21 = (ulong)(*(uint *)(lVar17 + 0x40) >> 3) & 0x1ffffffc;
        uVar12 = 1 << (ulong)(*(uint *)(lVar17 + 0x40) & 0x1f);
        uVar10 = uVar12 & *(uint *)(param_3[7] + uVar21);
        uVar12 = *(uint *)(param_3[6] + uVar21) & uVar12;
        bVar5 = 8 < uVar15 && (uVar12 != 0 || uVar10 == 0);
        if (uVar12 != 0) {
          uVar10 = (uint)(uVar10 != 0);
          uVar19 = uVar10 & uVar19;
          uVar18 = uVar10 & uVar18;
          bVar5 = bVar1;
        }
      }
      if (bVar3 == 0) {
        if (bVar5) {
          _fwrite(&UNK_10f48d1ff,3,1,uVar14);
        }
      }
      else {
        lVar16 = 0;
        uVar10 = uVar20 >> 3 | uVar15 << 0x1d;
        lVar17 = lVar17 + 0x48;
        do {
          if (lVar16 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar14);
          }
          if ((int)uVar10 < 3) {
            if (uVar10 == 0) {
              puVar8 = &UNK_10f5af2b9;
            }
            else {
              puVar8 = &UNK_10f5af2a9;
            }
          }
          else if (uVar10 == 3) {
            puVar8 = &UNK_10f5af56c;
          }
          else {
            puVar8 = &UNK_10f5af2c0;
          }
          _fprintf(uVar14,puVar8);
          lVar16 = lVar16 + 8;
        } while (uVar22 * 8 - lVar16 != 0);
        if (bVar5) {
          if (bVar3 == 1) {
            pcVar7 = " = ";
            uVar6 = 3;
          }
          else {
            pcVar7 = ") = (";
            uVar6 = 5;
          }
          _fwrite(pcVar7,uVar6,1,uVar14);
          uVar21 = 0;
          do {
            if (uVar21 != 0) {
              _fwrite(&DAT_10f68f19e,2,1,uVar14);
            }
            FUN_109f422d0(lVar17,bVar2,uVar14);
            uVar21 = uVar21 + 1;
            lVar17 = lVar17 + 8;
          } while (uVar22 != uVar21);
        }
      }
      if (uVar19 != 0) {
        if (bVar3 < 2) {
          _fwrite(&UNK_10f48d1ff,3,1,uVar14);
          if (bVar3 == 0) {
            if (uVar18 != 0) {
              _fwrite(&UNK_10f48d1ff,3,1,uVar14);
            }
            goto LAB_109f42288;
          }
        }
        else {
          _fwrite(") = (",5,1,uVar14);
        }
        uVar21 = 0;
        uVar19 = uVar20 >> 3 | uVar15 << 0x1d;
        do {
          if (uVar21 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar14);
          }
          if (((int)uVar19 < 3) || (puVar8 = &UNK_10f61b247, uVar19 == 3)) {
            puVar8 = &UNK_10f61b24d;
          }
          _fprintf(uVar14,puVar8);
          uVar21 = uVar21 + 1;
        } while (uVar22 != uVar21);
      }
      if (uVar18 != 0) {
        if (bVar3 < 2) {
          _fwrite(&UNK_10f48d1ff,3,1,uVar14);
          if (bVar3 == 0) goto LAB_109f42288;
        }
        else {
          _fwrite(") = (",5,1,uVar14);
        }
        uVar21 = 0;
        uVar15 = uVar20 >> 3 | uVar15 << 0x1d;
        do {
          if (uVar21 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar14);
          }
          if (((int)uVar15 < 3) || (pcVar7 = "%llu", uVar15 == 3)) {
            pcVar7 = "%u";
          }
          _fprintf(uVar14,pcVar7);
          uVar21 = uVar21 + 1;
        } while (uVar22 != uVar21);
      }
    }
    else if (bVar3 != 0) {
      uVar21 = 0;
      lVar17 = lVar17 + 0x48;
      uVar15 = uVar15 - 8 >> 3 | uVar15 << 0x1d;
      do {
        if (uVar21 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar14);
        }
        if (iVar9 == 0x80) {
          FUN_109f422d0(lVar17,bVar2,uVar14);
        }
        else {
          if (((int)uVar15 < 3) || (puVar8 = &DAT_10f3ce257, uVar15 == 3)) {
            puVar8 = &UNK_10f5ff923;
          }
          _fprintf(uVar14,puVar8);
        }
        uVar21 = uVar21 + 1;
        lVar17 = lVar17 + 8;
      } while (uVar22 != uVar21);
    }
LAB_109f42288:
    uVar6 = 0x29;
    goto code_r0x00010bdbe268;
  }
  if (iVar9 == 0) {
    FUN_109f40c9c(*(undefined8 *)(param_1 + 0x38),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fputs_11034c300)();
    return;
  }
  lVar17 = **(long **)(param_1 + 0x50);
  if ((param_2 == 0) || (*(int *)(lVar17 + 0x28) == 5)) {
    uVar20 = (uint)(iVar9 != 4);
    uVar15 = param_2;
  }
  else {
    uVar15 = 0;
    uVar20 = 0;
  }
  if ((uVar15 | uVar20) == 1) {
    _fputc(0x28,uVar14);
    if (uVar20 != 0) goto LAB_109f40190;
LAB_109f40164:
    if (param_2 != 0) goto LAB_109f40168;
LAB_109f401a0:
    FUN_109f41c04(param_1 + 0x38,param_3,0);
  }
  else {
    if (uVar20 == 0) goto LAB_109f40164;
LAB_109f40190:
    _fputc(0x2a,uVar14);
    if (param_2 == 0) goto LAB_109f401a0;
LAB_109f40168:
    FUN_109f4004c(lVar17,1,param_3);
  }
  if ((uVar15 | uVar20) != 0) {
    _fputc(0x29,uVar14);
  }
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 < 3) {
    if (iVar9 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fwrite_11034c3a0)(&UNK_10f61bb92,3,1,uVar14);
      return;
    }
  }
  else if (iVar9 != 3) {
    puVar8 = &UNK_10f48da3e;
    goto LAB_109f40294;
  }
  if (*(int *)(**(long **)(param_1 + 0x70) + 0x18) != 5) {
    _fputc(0x5b,uVar14);
    FUN_109f41c04(param_1 + 0x58,param_3,0);
    uVar6 = 0x5d;
code_r0x00010bdbe268:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fputc_11034c2f8)(uVar6,uVar14);
    return;
  }
  puVar8 = &UNK_10f61bb8b;
LAB_109f40294:
  _fprintf(uVar14,puVar8);
  return;
}



/* Entry: 109f402f8; end: 109f40903;  */

void FUN_109f402f8(char *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  undefined1 auStack_280 [32];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  char *pcStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 auStack_84 [4];
  char acStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined1 *)*param_2;
  puStack_98 = puVar16;
  plStack_90 = param_2;
  _fwrite(&UNK_10f61af9e,9,1);
  uVar18 = *(ulong *)(param_1 + 0x20);
  pcStack_b8 = "";
  pcStack_f0 = pcStack_b8;
  if ((uVar18 & 0x10000000000) != 0) {
    pcStack_f0 = "bindless ";
  }
  pcVar20 = pcStack_b8;
  if ((uVar18 & 0x400000) != 0) {
    pcVar20 = "centroid ";
  }
  pcVar21 = pcStack_b8;
  if ((uVar18 & 0x800000) != 0) {
    pcVar21 = "sample ";
  }
  pcVar22 = pcStack_b8;
  if ((uVar18 & 0x1000000) != 0) {
    pcVar22 = "patch ";
  }
  pcVar3 = pcStack_b8;
  if ((uVar18 & 0x2000000) != 0) {
    pcVar3 = "invariant ";
  }
  pcVar4 = pcStack_b8;
  if ((*(ulong *)(param_1 + 0x2c) & 0x8000) != 0) {
    pcVar4 = "per_view ";
  }
  pcVar5 = pcStack_b8;
  if ((*(ulong *)(param_1 + 0x2c) & 0x10000) != 0) {
    pcVar5 = "per_primitive ";
  }
  if ((uVar18 & 0x8000000) != 0) {
    pcStack_b8 = "ray_query ";
  }
  uVar9 = (ulong)((uint)uVar18 & 0x1fffff);
  func_0x000109f409fc(uVar9,0);
  puVar7 = puStack_98;
  uVar18 = uVar18 >> 0x21 & 7;
  if (uVar18 < 5) {
    puStack_a8 = (&PTR_DAT_110b876e0)[uVar18];
  }
  else {
    puStack_a8 = &UNK_10f61bcc6;
  }
  pcStack_e8 = pcVar20;
  pcStack_e0 = pcVar21;
  pcStack_d8 = pcVar22;
  pcStack_d0 = pcVar3;
  pcStack_c8 = pcVar4;
  pcStack_c0 = pcVar5;
  uStack_b0 = uVar9;
  _fprintf(puStack_98,&UNK_10f61afcc);
  plVar8 = plStack_90;
  pcVar15 = " ";
  FUN_109f40bd4(*(uint *)(param_1 + 0x30) & 0x1ff,plStack_90);
  _fputc(0x20,puVar7);
  for (lVar17 = *(long *)(param_1 + 0x10); *(char *)(lVar17 + 4) == '\x13';
      lVar17 = *(long *)(lVar17 + 0x30)) {
  }
  if (*(char *)(lVar17 + 4) == '\x0f') {
    pcStack_f0 = (&PTR_DAT_110b8a918)[(ulong)*(uint *)(param_1 + 0x4c) * 10];
    _fprintf(puVar7,&UNK_10f6038cb);
  }
  if ((*(ulong *)(param_1 + 0x20) & 0x30000000) != 0) {
    pcStack_f0 = (&PTR_s__110b86cc0)[*(ulong *)(param_1 + 0x20) >> 0x1c & 3];
    _fprintf(puVar7,&UNK_10f6038cb);
  }
  puVar10 = *(undefined **)(param_1 + 0x10);
  if (((byte)puVar10[0xc] >> 1 & 1) == 0) {
    FUN_109eca058();
  }
  else {
    puVar10 = &UNK_10e05bf38 + *(long *)(puVar10 + 0x18);
  }
  pcVar11 = param_1;
  FUN_109f40c9c(param_1,plVar8);
  pcStack_f0 = puVar10;
  pcStack_e8 = pcVar11;
  _fprintf(puVar7,&UNK_10f591ec1);
  if ((*(ulong *)(param_1 + 0x20) & 0x29f) != 0) {
    puVar10 = (undefined *)(ulong)*(uint *)(param_1 + 0x3c);
    pcVar15 = (char *)(ulong)((uint)*(ulong *)(param_1 + 0x20) & 0x1fffff);
    puVar16 = auStack_84;
    FUN_109f40de4(puVar10,(long)*(char *)(plVar8[1] + 0x61));
    for (lVar17 = *(long *)(param_1 + 0x10); *(char *)(lVar17 + 4) == '\x13';
        lVar17 = *(long *)(lVar17 + 0x30)) {
    }
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0] = '.';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    pcVar20 = *(char **)(param_1 + 0x20);
    uVar1 = (uint)pcVar20 & 0x1fffff;
    pcVar21 = "";
    if (uVar1 == 8 || uVar1 == 4) {
      uVar1 = (uint)*(byte *)(lVar17 + 0xe) * (uint)*(byte *)(lVar17 + 0xd);
      pcVar15 = (char *)(ulong)uVar1;
      if (0xe < uVar1 - 1) goto joined_r0x000109f40620;
      puVar12 = &UNK_10f61b105;
      if (uVar1 < 5) {
        puVar12 = &UNK_10f6101d0;
      }
      pcVar22 = acStack_80;
      _memcpy((ulong)pcVar22 | 1,puVar12 + ((ulong)pcVar20 >> 0x24 & 3));
      pcVar11 = pcVar22;
      if (((ulong)pcVar20 & 1) != 0) goto LAB_109f40624;
LAB_109f405ec:
      pcStack_d0 = pcVar21;
      if (((ulong)pcVar20 & 0x4000000000) != 0) {
        pcStack_d0 = " compact";
      }
      pcStack_e0 = (char *)(ulong)*(uint *)(param_1 + 0x44);
      pcStack_d8 = (char *)(ulong)*(uint *)(param_1 + 0x38);
      puVar12 = &UNK_10f61afeb;
    }
    else {
joined_r0x000109f40620:
      pcVar22 = "";
      pcVar11 = "";
      if (((ulong)pcVar20 & 1) == 0) goto LAB_109f405ec;
LAB_109f40624:
      puVar12 = &UNK_10f61afe3;
      pcVar22 = pcVar11;
    }
    pcStack_f0 = puVar10;
    pcStack_e8 = pcVar22;
    _fprintf(puVar7,puVar12);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x80) == '\x01') {
      puVar12 = &UNK_10f61b006;
      uVar14 = 7;
    }
    else {
      _fwrite(&UNK_10f5af6d0,5,1,puVar7);
      FUN_109f40f50(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x10),plVar8);
      puVar12 = &DAT_10f4f500b;
      uVar14 = 2;
    }
    pcVar15 = (char *)0x1;
    puVar16 = puVar7;
    _fwrite(puVar12,uVar14);
  }
  if ((*(char *)(*(long *)(param_1 + 0x10) + 4) == '\r') &&
     (bVar6 = param_1[0x4c], (bVar6 & 1) != 0)) {
    pcStack_f0 = (&PTR_s_none_110b86e58)[(ulong)(bVar6 >> 1) & 7];
    pcStack_e8 = "false";
    if ((bVar6 & 0x10) != 0) {
      pcStack_e8 = "true";
    }
    pcStack_e0 = "nearest";
    if ((bVar6 & 0x20) != 0) {
      pcStack_e0 = "linear";
    }
    _fprintf(puVar7,&UNK_10f61b00e);
  }
  puVar12 = *(undefined **)(param_1 + 0x80);
  if (puVar12 != (undefined *)0x0) {
    FUN_109f40c9c(puVar12,plVar8);
    pcStack_f0 = puVar12;
    _fprintf(puVar7,&UNK_10f61b020);
  }
  _fputc(10,puVar7);
  plVar13 = plVar8;
  FUN_109f414a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_118 = puVar7;
  plStack_110 = plVar8;
  uStack_f8 = 0x109f40784;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_150 = pcVar5;
  pcStack_148 = pcVar4;
  pcStack_140 = pcVar3;
  pcStack_138 = pcVar22;
  pcStack_130 = pcVar21;
  pcStack_128 = pcVar20;
  puStack_120 = puVar10;
  pcStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  if ((int *)pcVar15 != (int *)0x0) {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    piVar19 = (int *)pcVar15;
    do {
      if (piVar19 == (int *)0xffffffffffffffff) {
        piVar19 = (int *)0x0;
LAB_109f4087c:
        pcVar20 = "%d-%d";
        if ((char)uStack_260 != '\0') {
          pcVar20 = ",%d-%d";
        }
      }
      else {
        if (piVar19 == (int *)0x0) goto LAB_109f408b0;
        uVar18 = ((ulong)piVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)piVar19 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
        uVar18 = ~((ulong)piVar19 >> (uVar9 & 0x3f));
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
        piVar19 = (int *)((ulong)piVar19 &
                         (~(-1L << (uVar18 & 0x3f)) << (uVar9 & 0x3f) ^ 0xffffffffffffffffU));
        if (1 < uVar18) goto LAB_109f4087c;
        pcVar20 = "%d";
        if ((char)uStack_260 != '\0') {
          pcVar20 = ",%d";
        }
      }
      _snprintf(auStack_280,0x20,pcVar20);
      pcVar15 = (char *)0x100;
      ___strcat_chk(&uStack_260,auStack_280);
    } while( true );
  }
LAB_109f408c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  uVar18 = (ulong)puVar16 & 0xffffffff;
  do {
    if (*(int *)pcVar15 != 0) {
      _fprintf(plVar13,&UNK_10f61aeea);
      lVar17 = 0;
      uVar18 = (ulong)((int)puVar16 - 1);
      do {
        puVar10 = &UNK_10f5af56c;
        if (lVar17 != 0) {
          puVar10 = &UNK_10f61aeef;
        }
        _fprintf(plVar13,puVar10);
        lVar17 = lVar17 + -4;
        bVar2 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fputc_11034c2f8)(10,plVar13);
      return;
    }
    uVar18 = uVar18 - 1;
    pcVar15 = (char *)((long)pcVar15 + 4);
  } while (uVar18 != 0);
  return;
LAB_109f408b0:
  _fprintf(plVar13);
  goto LAB_109f408c8;
}



/* Entry: 109f40904; end: 109f409d7;  */

void FUN_109f40904(undefined8 param_1,undefined8 param_2,int *param_3,uint param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)param_4;
  do {
    if (*param_3 != 0) {
      _fprintf(param_1,&UNK_10f61aeea);
      lVar4 = 0;
      uVar3 = (ulong)(param_4 - 1);
      do {
        puVar2 = &UNK_10f5af56c;
        if (lVar4 != 0) {
          puVar2 = &UNK_10f61aeef;
        }
        _fprintf(param_1,puVar2);
        lVar4 = lVar4 + -4;
        bVar1 = uVar3 != 0;
        uVar3 = uVar3 - 1;
      } while (bVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fputc_11034c2f8)(10,param_1);
      return;
    }
    uVar3 = uVar3 - 1;
    param_3 = param_3 + 1;
  } while (uVar3 != 0);
  return;
}



/* Entry: 109f409d8; end: 109f40bd3;  */

char * FUN_109f409d8(uint param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_DAT_110b86e80)[param_1];
  }
  return "UNKNOWN";
}



/* Entry: 109f40bd4; end: 109f40c9b;  */

void FUN_109f40bd4(uint param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_DAT_110b86ce8;
    lVar2 = 10;
    do {
      if ((*(uint *)(ppuVar1 + -1) & param_1) != 0) {
        _fprintf(*param_2,&UNK_10f48da3e);
      }
      ppuVar1 = ppuVar1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputs_11034c300)("none",*param_2);
  return;
}



/* Entry: 109f40c9c; end: 109f40de3;  */

undefined * FUN_109f40c9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    if (*(undefined **)(param_1 + 0x18) == (undefined *)0x0) {
      return &UNK_10f61b0f0;
    }
    return *(undefined **)(param_1 + 0x18);
  }
  lVar3 = param_1;
  (**(code **)(lVar4 + 8))(param_1);
  FUN_109f64fdc(lVar4,lVar3,param_1);
  if (lVar4 != 0) {
    return *(undefined **)(lVar4 + 0x10);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  puVar5 = *(undefined **)(param_2 + 0x20);
  if (lVar4 == 0) {
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    puVar2 = &UNK_10f61b0f8;
  }
  else {
    lVar3 = lVar4;
    (**(code **)(puVar5 + 0x10))(lVar4);
    FUN_109f66ba8(puVar5,lVar3,lVar4);
    puVar7 = *(undefined **)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (puVar5 == (undefined *)0x0) {
      uVar1 = uVar6;
      (**(code **)(puVar7 + 0x10))(uVar6);
      FUN_109f66e48(puVar7,uVar1,uVar6,0);
      if (puVar7 != (undefined *)0x0) {
        *(undefined8 *)(puVar7 + 8) = uVar6;
      }
      puVar5 = *(undefined **)(param_1 + 0x18);
      goto LAB_109f40da8;
    }
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    puVar2 = &UNK_10f61b0fc;
    puVar5 = puVar7;
  }
  FUN_109f65d74(puVar5,puVar2);
LAB_109f40da8:
  lVar3 = *(long *)(param_2 + 0x18);
  lVar4 = param_1;
  (**(code **)(lVar3 + 8))(param_1);
  func_0x000109f650c0(lVar3,lVar4,param_1,puVar5);
  return puVar5;
}



/* Entry: 109f40de4; end: 109f40f4f;  */

undefined * FUN_109f40de4(uint param_1,uint param_2,int param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_2 < 8) {
    if ((1 << (ulong)(param_2 & 0x1f) & 0xceU) != 0) {
      if (param_3 != 1) {
        if ((param_3 == 8) || (param_3 == 4)) {
          if ((param_1 == 0x18) && (param_2 != 4)) {
            return &UNK_10f61bfde;
          }
          if (param_2 == 6) {
            if (param_1 == 0x1c) {
              return &UNK_10f61c05a;
            }
          }
          else if ((param_2 == 7) && (param_1 - 0x1a < 3)) {
            return (&PTR_DAT_110b87818)[param_1 - 0x1a];
          }
          if (param_1 < 0x70) {
            return (&PTR_DAT_110b87060)[param_1];
          }
          return &UNK_10f61bcc6;
        }
        goto LAB_109f40ec4;
      }
      goto LAB_109f40e9c;
    }
    if (param_2 == 0) {
      if (param_3 == 1) goto LAB_109f40e9c;
      if (param_3 != 8) {
        if (param_3 != 4) goto LAB_109f40ec4;
        if (0x1f < param_1) goto LAB_109f40f34;
        ppuVar1 = &PTR_DAT_110b86f60;
        goto LAB_109f40f2c;
      }
      if (param_1 == 0x18) {
        return &UNK_10f61bfde;
      }
    }
    else {
      if (param_2 != 4) goto LAB_109f40e64;
      if (param_3 == 1) goto LAB_109f40e9c;
      if (param_3 == 8) {
        if (param_1 < 0xc) {
          ppuVar1 = &PTR_DAT_110b87708;
          goto LAB_109f40f2c;
        }
        goto LAB_109f40f34;
      }
      if (param_3 != 4) goto LAB_109f40ec4;
    }
    if (0x6f < param_1) {
LAB_109f40f34:
      return &UNK_10f61bcc6;
    }
    ppuVar1 = &PTR_DAT_110b87060;
LAB_109f40f2c:
    return ppuVar1[param_1];
  }
LAB_109f40e64:
  if (param_3 != 1) {
LAB_109f40ec4:
    if (param_1 != 0xffffffff) {
      _snprintf(param_4,4,&DAT_10f3b2553);
      return param_4;
    }
    return &UNK_10f61b102;
  }
LAB_109f40e9c:
  puVar2 = &UNK_10f61bcc6;
  if ((param_1 < 0x60) &&
     (puVar2 = &UNK_10f61bcc6, (&PTR_DAT_110b873e0)[param_1] != (undefined *)0x0)) {
    puVar2 = (&PTR_DAT_110b873e0)[param_1];
  }
  return puVar2;
}



/* Entry: 109f40f50; end: 109f414a3;  */

void FUN_109f40f50(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar7 = *param_3;
  bVar3 = *(byte *)(param_2 + 0xd);
  uVar6 = (ulong)bVar3;
  bVar4 = *(byte *)(param_2 + 0xe);
  uVar1 = *(uint *)(param_2 + 4) & 0xff;
  if (uVar1 < 7) {
    if (uVar1 - 2 < 3) {
      if (bVar4 < 2) {
        uVar1 = *(uint *)(param_2 + 4) & 0xff;
        if (uVar1 == 2) {
          if (bVar3 != 0) {
            lVar8 = 0;
            do {
              if (lVar8 != 0) {
                _fwrite(&DAT_10f68f19e,2,1,uVar7);
              }
              _fprintf(uVar7,&DAT_10f2e3e8d);
              lVar8 = lVar8 + 8;
            } while (uVar6 * 8 - lVar8 != 0);
          }
        }
        else if (uVar1 == 3) {
          if (bVar3 != 0) {
            lVar8 = 0;
            do {
              if (lVar8 != 0) {
                _fwrite(&DAT_10f68f19e,2,1,uVar7);
              }
              _fprintf(uVar7,&DAT_10f2e3e8d);
              lVar8 = lVar8 + 8;
            } while (uVar6 * 8 - lVar8 != 0);
          }
        }
        else if (bVar3 != 0) {
          lVar8 = 0;
          do {
            if (lVar8 != 0) {
              _fwrite(&DAT_10f68f19e,2,1,uVar7);
            }
            _fprintf(uVar7,&DAT_10f2e3e8d);
            lVar8 = lVar8 + 8;
          } while (uVar6 * 8 - lVar8 != 0);
        }
      }
      else {
        lVar8 = 0;
        do {
          if (lVar8 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar7);
          }
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar8);
          lVar5 = param_2;
          func_0x000109ec8580(param_2);
          FUN_109f40f50(uVar9,lVar5,param_3);
          lVar8 = lVar8 + 8;
        } while ((ulong)bVar4 * 8 - lVar8 != 0);
      }
    }
    else if (uVar1 < 2) {
      if (bVar3 != 0) {
        lVar8 = 0;
        do {
          if (lVar8 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar7);
          }
          _fprintf(uVar7,&UNK_10f5af56c);
          lVar8 = lVar8 + 8;
        } while (uVar6 * 8 - lVar8 != 0);
      }
    }
    else if (bVar3 != 0) {
      lVar8 = 0;
      do {
        if (lVar8 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar7);
        }
        _fprintf(uVar7,&UNK_10f5af2b9);
        lVar8 = lVar8 + 8;
      } while (uVar6 * 8 - lVar8 != 0);
    }
  }
  else if (uVar1 < 0xb) {
    if (uVar1 - 7 < 2) {
      if (bVar3 != 0) {
        lVar8 = 0;
        do {
          if (lVar8 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar7);
          }
          _fprintf(uVar7,&UNK_10f5af2a9);
          lVar8 = lVar8 + 8;
        } while (uVar6 * 8 - lVar8 != 0);
      }
    }
    else if (bVar4 != 0) {
      lVar8 = 0;
      do {
        if (lVar8 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar7);
        }
        _fprintf(uVar7,&UNK_10f5af2a0);
        lVar8 = lVar8 + 8;
      } while ((ulong)bVar4 * 8 - lVar8 != 0);
    }
  }
  else if (uVar1 - 0x11 < 2) {
    if (*(int *)(param_1 + 0x84) != 0) {
      lVar8 = 0;
      uVar6 = 0;
      do {
        if (uVar6 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar7);
        }
        _fwrite(&UNK_10f5af6d6,2,1,uVar7);
        FUN_109f40f50(*(undefined8 *)(*(long *)(param_1 + 0x88) + uVar6 * 8),
                      *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar8),param_3);
        _fwrite(&DAT_10f4f500b,2,1,uVar7);
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x30;
      } while (uVar6 < *(uint *)(param_1 + 0x84));
    }
  }
  else if (uVar1 == 0xb) {
    if (bVar3 != 0) {
      lVar8 = 0;
      do {
        if (lVar8 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar7);
        }
        pcVar2 = "true";
        if (*(char *)(param_1 + lVar8) == '\0') {
          pcVar2 = "false";
        }
        _fputs(pcVar2,uVar7);
        lVar8 = lVar8 + 8;
      } while (uVar6 * 8 - lVar8 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    uVar6 = 0;
    do {
      if (uVar6 != 0) {
        _fwrite(&DAT_10f68f19e,2,1,uVar7);
      }
      _fwrite(&UNK_10f5af6d6,2,1,uVar7);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar6 * 8);
      lVar8 = param_2;
      func_0x000109eca118(param_2);
      FUN_109f40f50(uVar9,lVar8,param_3);
      _fwrite(&DAT_10f4f500b,2,1,uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x84));
  }
  return;
}



/* Entry: 109f414a4; end: 109f41537;  */

void FUN_109f414a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    uVar3 = *param_1;
    uVar1 = param_2;
    (**(code **)(lVar4 + 8))(param_2);
    FUN_109f64fdc(lVar4,uVar1,param_2);
    if (lVar4 != 0) {
      lVar2 = param_1[8];
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 0x18);
      *(ulong *)(lVar2 + 0x40) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar2 + 0x40) + -1);
      _fprintf(uVar3,&UNK_10f61b13c);
    }
  }
  return;
}



/* Entry: 109f41538; end: 109f41c03;  */

void FUN_109f41538(long param_1,undefined8 *param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  long *plVar12;
  ulong uVar13;
  double dVar14;
  
  uVar9 = *param_2;
  uVar10 = (uint)param_3;
  uVar13 = param_3;
  uVar2 = uVar10;
  if (*(int *)(param_1 + 0x10) == 2) {
    while (uVar2 != 0) {
      _fwrite(&DAT_10f48d515,4,1,uVar9);
      uVar2 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar2;
    }
    _fprintf(uVar9,&UNK_10f61b251);
    for (plVar12 = *(long **)(param_1 + 0x20); uVar13 = param_3, uVar2 = uVar10, *plVar12 != 0;
        plVar12 = (long *)*plVar12) {
      FUN_109f41538(plVar12,param_2,uVar10 + 1);
    }
    while (uVar2 != 0) {
      _fwrite(&DAT_10f48d515,4,1,uVar9);
      uVar2 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar2;
    }
    if (*(long *)(param_1 + 0x40) != param_1 + 0x50) {
      _fwrite(&UNK_10f61b25b,0xd,1,uVar9);
      for (plVar12 = *(long **)(param_1 + 0x40); *plVar12 != 0; plVar12 = (long *)*plVar12) {
        FUN_109f41538(plVar12,param_2,uVar10 + 1);
      }
      while (uVar10 != 0) {
        _fwrite(&DAT_10f48d515,4,1,uVar9);
        uVar10 = (int)param_3 - 1;
        param_3 = (ulong)uVar10;
      }
    }
    goto LAB_109f418b4;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    plVar12 = *(long **)(param_1 + 0x20);
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    do {
      if (plVar3 == (long *)0x0) {
        iVar7 = 0;
LAB_109f418f4:
        *(int *)((long)param_2 + 0x4c) = iVar7;
        uVar2 = uVar10;
        while (uVar2 != 0) {
          _fwrite(&DAT_10f48d515,4,1,uVar9);
          uVar2 = (int)uVar13 - 1;
          uVar13 = (ulong)uVar2;
        }
        _fprintf(uVar9,&UNK_10f61b1aa);
        if (*(long *)(param_1 + 0x20) == param_1 + 0x30) {
          _fwrite(&UNK_10f61b1b7,0xc,1,uVar9);
          func_0x000109f41b3c(param_1,*param_2);
          _fwrite(&UNK_10f61b1c4,9,1,uVar9);
          lVar8 = 0;
          uVar6 = *param_2;
          bVar4 = true;
          do {
            bVar11 = bVar4;
            if (*(long *)(param_1 + 0x48 + lVar8 * 8) != 0) {
              _fprintf(uVar6,&UNK_10f61b1f8);
            }
            lVar8 = 1;
            bVar4 = false;
          } while (bVar11);
        }
        else {
          if (*(int *)(param_1 + 0x40) != 0) {
            _log10();
          }
          _fprintf(uVar9,&UNK_10f61b1ce);
          func_0x000109f41b3c(param_1,*param_2);
          _fputc(10,uVar9);
          for (plVar12 = *(long **)(param_1 + 0x20); *plVar12 != 0; plVar12 = (long *)*plVar12) {
            FUN_109f3dea0(plVar12,param_2,param_3);
            _fputc(10,uVar9);
            FUN_109f414a4(param_2,plVar12);
          }
          while (uVar10 != 0) {
            _fwrite(&DAT_10f48d515,4,1,uVar9);
            uVar10 = (int)param_3 - 1;
            param_3 = (ulong)uVar10;
          }
          _fprintf(uVar9,&UNK_10f61b1dc);
          lVar8 = 0;
          uVar6 = *param_2;
          bVar4 = true;
          do {
            bVar11 = bVar4;
            if (*(long *)(param_1 + 0x48 + lVar8 * 8) != 0) {
              _fprintf(uVar6,&UNK_10f61b1f8);
            }
            lVar8 = 1;
            bVar4 = false;
          } while (bVar11);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__fputc_11034c2f8)(10,uVar9);
        return;
      }
      uVar2 = *(uint *)(plVar12 + 3);
      if (uVar2 < 10) {
        if (uVar2 == 4) {
          if (((&UNK_110b6719c)[(ulong)*(uint *)(plVar12 + 5) * 0x68] & 1) != 0) {
LAB_109f4179c:
            uVar1 = *(ushort *)(param_2[1] + 0x14e);
            if (*(uint *)(param_2 + 9) == 0) {
              iVar7 = 1;
            }
            else {
              dVar14 = (double)*(uint *)(param_2 + 9);
              _log10();
              iVar7 = (int)dVar14 + 1;
            }
            iVar7 = iVar7 + (uVar1 >> 0xc & 4) + 10;
            goto LAB_109f418f4;
          }
        }
        else if ((1 << (ulong)(uVar2 & 0x1f) & 0x3abU) != 0) goto LAB_109f4179c;
      }
      plVar12 = plVar3;
      plVar3 = (long *)*plVar3;
    } while( true );
  }
  while (uVar2 != 0) {
    _fwrite(&DAT_10f48d515,4,1,uVar9);
    uVar2 = (int)uVar13 - 1;
    uVar13 = (ulong)uVar2;
  }
  _fwrite(&UNK_10f61b1fd,3,1,uVar9);
  FUN_109f41c04(param_1 + 0x20,param_2,0);
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 == 3) {
    puVar5 = &UNK_10f61b221;
    uVar6 = 0x1b;
LAB_109f417dc:
    _fwrite(puVar5,uVar6,1,uVar9);
  }
  else {
    if (iVar7 == 2) {
      puVar5 = &UNK_10f61b20e;
      uVar6 = 0x12;
      goto LAB_109f417dc;
    }
    if (iVar7 == 1) {
      puVar5 = &UNK_10f61b201;
      uVar6 = 0xc;
      goto LAB_109f417dc;
    }
  }
  _fwrite(" {\n",3,1,uVar9);
  for (plVar12 = *(long **)(param_1 + 0x48); uVar13 = param_3, uVar2 = uVar10, *plVar12 != 0;
      plVar12 = (long *)*plVar12) {
    FUN_109f41538(plVar12,param_2,uVar10 + 1);
  }
  while (uVar2 != 0) {
    _fwrite(&DAT_10f48d515,4,1,uVar9);
    uVar2 = (int)uVar13 - 1;
    uVar13 = (ulong)uVar2;
  }
  _fwrite(&UNK_10f61b23d,9,1,uVar9);
  for (plVar12 = *(long **)(param_1 + 0x68); *plVar12 != 0; plVar12 = (long *)*plVar12) {
    FUN_109f41538(plVar12,param_2,uVar10 + 1);
  }
  while (uVar10 != 0) {
    _fwrite(&DAT_10f48d515,4,1,uVar9);
    uVar10 = (int)param_3 - 1;
    param_3 = (ulong)uVar10;
  }
LAB_109f418b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(&DAT_10f38bf4b,2,1,uVar9);
  return;
}



/* Entry: 109f41c04; end: 109f41ceb;  */

void FUN_109f41c04(long param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar17 = *param_2;
  _fprintf(uVar17,&UNK_10f62aa0c);
  lVar14 = **(long **)(param_1 + 0x18);
  if (*(int *)(lVar14 + 0x18) != 5) {
    return;
  }
  _fputc(0x20,uVar17);
  uVar9 = param_3 & 0x86;
  if ((param_3 & 0x86) == 0) {
    if (param_2[7] == 0) {
      uVar9 = 4;
    }
    else {
      uVar21 = (ulong)(*(uint *)(lVar14 + 0x40) >> 5);
      uVar15 = 1 << (ulong)(*(uint *)(lVar14 + 0x40) & 0x1f);
      uVar9 = 4;
      if (((*(uint *)(param_2[6] + uVar21 * 4) & uVar15) != 0) &&
         (uVar9 = 0x80, (*(uint *)(param_2[7] + uVar21 * 4) & uVar15) != 0)) {
        uVar9 = 4;
      }
    }
  }
  uVar17 = *param_2;
  bVar2 = *(byte *)(lVar14 + 0x45);
  bVar3 = *(byte *)(lVar14 + 0x44);
  uVar21 = (ulong)bVar3;
  _fputc(0x28,uVar17);
  uVar15 = (uint)bVar2;
  if (uVar9 == 6 || uVar15 == 1) {
    if (bVar3 != 0) {
      lVar16 = 0;
      do {
        if (lVar16 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar17);
        }
        pcVar6 = "true";
        if (*(char *)(lVar14 + 0x48 + lVar16) == '\0') {
          pcVar6 = "false";
        }
        _fputs(pcVar6,uVar17);
        lVar16 = lVar16 + 8;
      } while (uVar21 * 8 - lVar16 != 0);
    }
  }
  else if (uVar9 == 0) {
    uVar9 = uVar15 - 8;
    bVar1 = 7 < uVar15 && uVar9 != 0;
    if (bVar3 == 0) {
      uVar19 = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      uVar19 = 0;
      puVar11 = (ulong *)(lVar14 + 0x48);
      uVar10 = uVar9 >> 3 | uVar15 << 0x1d;
      uVar20 = uVar21;
      do {
        if ((int)uVar10 < 3) {
          if (uVar10 == 0) {
            uVar12 = (uint)(byte)*puVar11;
            uVar19 = uVar19 | (byte)((byte)*puVar11 >> 7);
          }
          else {
            uVar12 = (uint)(ushort)*puVar11;
            uVar19 = uVar19 | (ushort)((ushort)*puVar11 >> 0xf);
          }
LAB_109f41ec8:
          bVar4 = 8 < uVar12;
          bVar5 = uVar12 == 9;
        }
        else {
          if (uVar10 == 3) {
            uVar12 = (uint)*puVar11;
            uVar19 = uVar19 | uVar12 >> 0x1f;
            goto LAB_109f41ec8;
          }
          uVar13 = *puVar11;
          uVar19 = (uint)(uVar13 >> 0x3f) | uVar19;
          bVar4 = 8 < uVar13;
          bVar5 = uVar13 == 9;
        }
        uVar18 = uVar18 | (bVar4 && !bVar5);
        puVar11 = puVar11 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    bVar5 = bVar1;
    if (param_2[7] != 0) {
      uVar20 = (ulong)(*(uint *)(lVar14 + 0x40) >> 3) & 0x1ffffffc;
      uVar12 = 1 << (ulong)(*(uint *)(lVar14 + 0x40) & 0x1f);
      uVar10 = uVar12 & *(uint *)(param_2[7] + uVar20);
      uVar12 = *(uint *)(param_2[6] + uVar20) & uVar12;
      bVar5 = 8 < uVar15 && (uVar12 != 0 || uVar10 == 0);
      if (uVar12 != 0) {
        uVar10 = (uint)(uVar10 != 0);
        uVar19 = uVar10 & uVar19;
        uVar18 = uVar10 & uVar18;
        bVar5 = bVar1;
      }
    }
    if (bVar3 == 0) {
      if (bVar5) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar17);
      }
    }
    else {
      lVar16 = 0;
      uVar10 = uVar9 >> 3 | uVar15 << 0x1d;
      lVar14 = lVar14 + 0x48;
      do {
        if (lVar16 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar17);
        }
        if ((int)uVar10 < 3) {
          if (uVar10 == 0) {
            puVar7 = &UNK_10f5af2b9;
          }
          else {
            puVar7 = &UNK_10f5af2a9;
          }
        }
        else if (uVar10 == 3) {
          puVar7 = &UNK_10f5af56c;
        }
        else {
          puVar7 = &UNK_10f5af2c0;
        }
        _fprintf(uVar17,puVar7);
        lVar16 = lVar16 + 8;
      } while (uVar21 * 8 - lVar16 != 0);
      if (bVar5) {
        if (bVar3 == 1) {
          pcVar6 = " = ";
          uVar8 = 3;
        }
        else {
          pcVar6 = ") = (";
          uVar8 = 5;
        }
        _fwrite(pcVar6,uVar8,1,uVar17);
        uVar20 = 0;
        do {
          if (uVar20 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar17);
          }
          FUN_109f422d0(lVar14,bVar2,uVar17);
          uVar20 = uVar20 + 1;
          lVar14 = lVar14 + 8;
        } while (uVar21 != uVar20);
      }
    }
    if (uVar19 != 0) {
      if (bVar3 < 2) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar17);
        if (bVar3 == 0) {
          if (uVar18 != 0) {
            _fwrite(&UNK_10f48d1ff,3,1,uVar17);
          }
          goto LAB_109f42288;
        }
      }
      else {
        _fwrite(") = (",5,1,uVar17);
      }
      uVar20 = 0;
      uVar19 = uVar9 >> 3 | uVar15 << 0x1d;
      do {
        if (uVar20 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar17);
        }
        if (((int)uVar19 < 3) || (puVar7 = &UNK_10f61b247, uVar19 == 3)) {
          puVar7 = &UNK_10f61b24d;
        }
        _fprintf(uVar17,puVar7);
        uVar20 = uVar20 + 1;
      } while (uVar21 != uVar20);
    }
    if (uVar18 != 0) {
      if (bVar3 < 2) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar17);
        if (bVar3 == 0) goto LAB_109f42288;
      }
      else {
        _fwrite(") = (",5,1,uVar17);
      }
      uVar20 = 0;
      uVar9 = uVar9 >> 3 | uVar15 << 0x1d;
      do {
        if (uVar20 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar17);
        }
        if (((int)uVar9 < 3) || (pcVar6 = "%llu", uVar9 == 3)) {
          pcVar6 = "%u";
        }
        _fprintf(uVar17,pcVar6);
        uVar20 = uVar20 + 1;
      } while (uVar21 != uVar20);
    }
  }
  else if (bVar3 != 0) {
    uVar20 = 0;
    lVar14 = lVar14 + 0x48;
    uVar15 = uVar15 - 8 >> 3 | uVar15 << 0x1d;
    do {
      if (uVar20 != 0) {
        _fwrite(&DAT_10f68f19e,2,1,uVar17);
      }
      if (uVar9 == 0x80) {
        FUN_109f422d0(lVar14,bVar2,uVar17);
      }
      else {
        if (((int)uVar15 < 3) || (puVar7 = &DAT_10f3ce257, uVar15 == 3)) {
          puVar7 = &UNK_10f5ff923;
        }
        _fprintf(uVar17,puVar7);
      }
      uVar20 = uVar20 + 1;
      lVar14 = lVar14 + 8;
    } while (uVar21 != uVar20);
  }
LAB_109f42288:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(0x29,uVar17);
  return;
}



/* Entry: 109f41cec; end: 109f422cf;  */

void FUN_109f41cec(long param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar14 = *param_2;
  bVar2 = *(byte *)(param_1 + 0x45);
  bVar3 = *(byte *)(param_1 + 0x44);
  uVar20 = (ulong)bVar3;
  _fputc(0x28,uVar14);
  uVar15 = (uint)bVar2;
  if ((param_3 & 0x86) == 6 || uVar15 == 1) {
    if (bVar3 != 0) {
      lVar16 = 0;
      do {
        if (lVar16 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar14);
        }
        pcVar7 = "true";
        if (*(char *)(param_1 + 0x48 + lVar16) == '\0') {
          pcVar7 = "false";
        }
        _fputs(pcVar7,uVar14);
        lVar16 = lVar16 + 8;
      } while (uVar20 * 8 - lVar16 != 0);
    }
  }
  else if ((param_3 & 0x86) == 0) {
    uVar4 = uVar15 - 8;
    bVar1 = 7 < uVar15 && uVar4 != 0;
    if (bVar3 == 0) {
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar18 = 0;
      puVar11 = (ulong *)(param_1 + 0x48);
      uVar10 = uVar4 >> 3 | uVar15 << 0x1d;
      uVar19 = uVar20;
      do {
        if ((int)uVar10 < 3) {
          if (uVar10 == 0) {
            uVar12 = (uint)(byte)*puVar11;
            uVar18 = uVar18 | (byte)((byte)*puVar11 >> 7);
          }
          else {
            uVar12 = (uint)(ushort)*puVar11;
            uVar18 = uVar18 | (ushort)((ushort)*puVar11 >> 0xf);
          }
LAB_109f41ec8:
          bVar5 = 8 < uVar12;
          bVar6 = uVar12 == 9;
        }
        else {
          if (uVar10 == 3) {
            uVar12 = (uint)*puVar11;
            uVar18 = uVar18 | uVar12 >> 0x1f;
            goto LAB_109f41ec8;
          }
          uVar13 = *puVar11;
          uVar18 = (uint)(uVar13 >> 0x3f) | uVar18;
          bVar5 = 8 < uVar13;
          bVar6 = uVar13 == 9;
        }
        uVar17 = uVar17 | (bVar5 && !bVar6);
        puVar11 = puVar11 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    bVar6 = bVar1;
    if (param_2[7] != 0) {
      uVar19 = (ulong)(*(uint *)(param_1 + 0x40) >> 3) & 0x1ffffffc;
      uVar12 = 1 << (ulong)(*(uint *)(param_1 + 0x40) & 0x1f);
      uVar10 = uVar12 & *(uint *)(param_2[7] + uVar19);
      uVar12 = *(uint *)(param_2[6] + uVar19) & uVar12;
      bVar6 = 8 < uVar15 && (uVar12 != 0 || uVar10 == 0);
      if (uVar12 != 0) {
        uVar10 = (uint)(uVar10 != 0);
        uVar18 = uVar10 & uVar18;
        uVar17 = uVar10 & uVar17;
        bVar6 = bVar1;
      }
    }
    if (bVar3 == 0) {
      if (bVar6) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar14);
      }
    }
    else {
      lVar16 = 0;
      uVar10 = uVar4 >> 3 | uVar15 << 0x1d;
      param_1 = param_1 + 0x48;
      do {
        if (lVar16 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar14);
        }
        if ((int)uVar10 < 3) {
          if (uVar10 == 0) {
            puVar8 = &UNK_10f5af2b9;
          }
          else {
            puVar8 = &UNK_10f5af2a9;
          }
        }
        else if (uVar10 == 3) {
          puVar8 = &UNK_10f5af56c;
        }
        else {
          puVar8 = &UNK_10f5af2c0;
        }
        _fprintf(uVar14,puVar8);
        lVar16 = lVar16 + 8;
      } while (uVar20 * 8 - lVar16 != 0);
      if (bVar6) {
        if (bVar3 == 1) {
          pcVar7 = " = ";
          uVar9 = 3;
        }
        else {
          pcVar7 = ") = (";
          uVar9 = 5;
        }
        _fwrite(pcVar7,uVar9,1,uVar14);
        uVar19 = 0;
        do {
          if (uVar19 != 0) {
            _fwrite(&DAT_10f68f19e,2,1,uVar14);
          }
          FUN_109f422d0(param_1,bVar2,uVar14);
          uVar19 = uVar19 + 1;
          param_1 = param_1 + 8;
        } while (uVar20 != uVar19);
      }
    }
    if (uVar18 != 0) {
      if (bVar3 < 2) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar14);
        if (bVar3 == 0) {
          if (uVar17 != 0) {
            _fwrite(&UNK_10f48d1ff,3,1,uVar14);
          }
          goto LAB_109f42288;
        }
      }
      else {
        _fwrite(") = (",5,1,uVar14);
      }
      uVar19 = 0;
      uVar18 = uVar4 >> 3 | uVar15 << 0x1d;
      do {
        if (uVar19 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar14);
        }
        if (((int)uVar18 < 3) || (puVar8 = &UNK_10f61b247, uVar18 == 3)) {
          puVar8 = &UNK_10f61b24d;
        }
        _fprintf(uVar14,puVar8);
        uVar19 = uVar19 + 1;
      } while (uVar20 != uVar19);
    }
    if (uVar17 != 0) {
      if (bVar3 < 2) {
        _fwrite(&UNK_10f48d1ff,3,1,uVar14);
        if (bVar3 == 0) goto LAB_109f42288;
      }
      else {
        _fwrite(") = (",5,1,uVar14);
      }
      uVar19 = 0;
      uVar15 = uVar4 >> 3 | uVar15 << 0x1d;
      do {
        if (uVar19 != 0) {
          _fwrite(&DAT_10f68f19e,2,1,uVar14);
        }
        if (((int)uVar15 < 3) || (pcVar7 = "%llu", uVar15 == 3)) {
          pcVar7 = "%u";
        }
        _fprintf(uVar14,pcVar7);
        uVar19 = uVar19 + 1;
      } while (uVar20 != uVar19);
    }
  }
  else if (bVar3 != 0) {
    uVar19 = 0;
    param_1 = param_1 + 0x48;
    uVar15 = uVar15 - 8 >> 3 | uVar15 << 0x1d;
    do {
      if (uVar19 != 0) {
        _fwrite(&DAT_10f68f19e,2,1,uVar14);
      }
      if ((param_3 & 0x86) == 0x80) {
        FUN_109f422d0(param_1,bVar2,uVar14);
      }
      else {
        if (((int)uVar15 < 3) || (puVar8 = &DAT_10f3ce257, uVar15 == 3)) {
          puVar8 = &UNK_10f5ff923;
        }
        _fprintf(uVar14,puVar8);
      }
      uVar19 = uVar19 + 1;
      param_1 = param_1 + 8;
    } while (uVar20 != uVar19);
  }
LAB_109f42288:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fputc_11034c2f8)(0x29,uVar14);
  return;
}



/* Entry: 109f422d0; end: 109f4235f;  */

void FUN_109f422d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _fprintf(param_3,&DAT_10f2e3e8d);
  return;
}



/* Entry: 109f42360; end: 109f42457;  */

void FUN_109f42360(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if ((*(int *)(param_2 + 9) != 0) && (_log10(), *(int *)(param_1 + 0x18) != 0)) {
    _log10();
  }
  _fprintf(uVar1,&UNK_10f61b279);
  return;
}



/* Entry: 109f42458; end: 109f4250b;  */

void FUN_109f42458(uint param_1,undefined8 param_2)

{
  if ((param_1 & 0x79) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fputs_11034c300)();
    return;
  }
  _fprintf(param_2,&UNK_10f62aa0c);
  return;
}



/* Entry: 109f4250c; end: 109f4261b;  */

ulong FUN_109f4250c(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_798 [16];
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 *puStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined1 *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  code *pcStack_748;
  code *pcStack_740;
  undefined1 auStack_738 [256];
  undefined1 auStack_638 [1536];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_780 = 0x11386a228;
  puStack_778 = auStack_638;
  uStack_770 = 0x60000000000;
  puStack_760 = auStack_738;
  uStack_768 = 0x11386a228;
  uStack_750 = 0x18;
  uStack_758 = 0x10000000000;
  pcStack_748 = FUN_109f4261c;
  pcStack_740 = FUN_109f4267c;
  puVar3 = auStack_798;
  uStack_788 = param_1;
  FUN_109f43d14();
  *(long *)(puVar3 + 8) = param_2;
  *(uint *)(puVar3 + 0x10) = param_3;
  *(uint *)(puVar3 + 0x14) =
       *(uint *)(&UNK_110b78558 + (ulong)*(uint *)(param_2 + 0x28) * 0x68 + (ulong)param_3 * 4) &
       0x86 | (uint)*(byte *)(*(long *)(param_2 + (ulong)param_3 * 0x30 + 0x68) + 0x1d);
  puVar3 = auStack_798;
  FUN_109f43700();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar2 = (uint)puVar3;
    return (ulong)(uVar2 >> 10 & 1) << 0x28 | (ulong)(uVar2 >> 9 & 1) << 0x30 |
           (ulong)(uVar2 >> 8 & 1) << 0x20 | (ulong)(uVar2 & 0xff);
  }
  ___stack_chk_fail();
  uVar4 = **(ulong **)(*(long *)(puVar3 + 8) + (ulong)*(uint *)(puVar3 + 0x10) * 0x30 + 0x68);
  if (*(int *)(uVar4 + 0x18) != 0) {
    return 0;
  }
  uVar2 = *(uint *)(puVar3 + 0x14) & 0x86;
  uVar1 = 2;
  if (uVar2 != 6) {
    uVar1 = 3;
  }
  if (uVar2 < 6) {
    uVar1 = (ulong)(uVar2 != 2);
  }
  return uVar1 | uVar4;
}



/* Entry: 109f4261c; end: 109f4267b;  */

ulong FUN_109f4261c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = **(ulong **)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10) * 0x30 + 0x68);
  if (*(int *)(uVar3 + 0x18) != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14) & 0x86;
  uVar2 = 2;
  if (uVar1 != 6) {
    uVar2 = 3;
  }
  if (uVar1 < 6) {
    uVar2 = (ulong)(uVar1 != 2);
  }
  return uVar2 | uVar3;
}



/* Entry: 109f4267c; end: 109f43687;  */

void FUN_109f4267c(uint *param_1,uint *param_2,uint *param_3,undefined **param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  double dVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  undefined *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *puVar25;
  uint *unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  uint auStack_70 [6];
  long lStack_58;
  
  puVar10 = auStack_70;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 2);
  uVar24 = (ulong)param_2[4];
  uVar19 = param_2[5];
  ppuVar26 = (undefined **)(ulong)uVar19;
  puVar25 = (uint *)**(undefined8 **)(lVar15 + uVar24 * 0x30 + 0x68);
  puVar11 = param_1;
  puVar13 = param_3;
  if (puVar25[6] == 0) {
    uVar9 = puVar25[10];
    if ((uVar9 != 0x71) && (uVar9 != 0x154)) {
      if (((uVar19 & 0x86) != (*(uint *)(&UNK_110b78544 + (ulong)uVar9 * 0x68) & 0x86)) &&
         ((puVar20 = param_1, (uVar19 & 0x86) == 0x80 ||
          ((*(uint *)(&UNK_110b78544 + (ulong)uVar9 * 0x68) & 0x86) == 0x80)))) goto LAB_109f428a8;
    }
    if (*param_2 != 0) {
LAB_109f42838:
      if ((int)uVar9 < 0xdb) {
        if ((int)uVar9 < 0xbc) {
          if ((int)uVar9 < 0x9c) {
            if (0x70 < (int)uVar9) {
              if (uVar9 == 0x71) {
                uVar19 = *(uint *)param_4;
                uVar9 = *(uint *)((long)param_4 + 4);
                uVar24 = (((ulong)uVar9 & 0x400) << 0x1e | (ulong)(uVar9 >> 8 & 1) << 0x20) &
                         ((ulong)(uVar19 >> 8 & 1) << 0x20 | (ulong)(uVar19 >> 10 & 1) << 0x28);
                puVar20 = (uint *)(uVar24 >> 0x20 & 1);
                uVar16 = (uVar9 & uVar19) >> 9 & 1;
                uVar19 = *(uint *)(&UNK_10e47cafc +
                                  ((ulong)uVar9 & 0xff) * 4 + (ulong)(uVar19 & 0xff) * 0x1c);
                uVar9 = (uint)(uVar24 >> 0x28);
              }
              else {
                if (uVar9 != 0x9b) goto LAB_109f43300;
                uVar3 = *(uint *)param_4;
                uVar19 = uVar3 & 0xff;
                uVar16 = uVar3 >> 9 & 1;
                uVar24 = (ulong)(uVar3 >> 10 & 1) << 0x28 | ((ulong)(uVar3 >> 9) & 1) << 0x30;
                puVar20 = (uint *)(uVar24 >> 0x20 | (ulong)(uVar3 >> 8) & 1);
                uVar5 = (uint)(uVar24 >> 0x20);
                uVar14 = uVar5 >> 8;
                uVar9 = uVar5 >> 8;
                if (uVar19 < 6) {
                  uVar19 = uVar5 >> 8;
                  if ((1 << (ulong)(uVar3 & 0x1f) & 0x15U) == 0) {
                    uVar19 = 3;
                  }
                  else {
LAB_109f43210:
                    uVar14 = uVar19;
                    uVar19 = 4;
                  }
                  goto LAB_109f43614;
                }
              }
              goto LAB_109f43604;
            }
            if ((uVar9 != 0x1f) && (uVar9 != 0x23)) goto LAB_109f43300;
            puVar20 = (uint *)(ulong)(uVar9 == 0x1f);
            uVar19 = 4;
LAB_109f42e00:
            uVar14 = 1;
            uVar16 = 1;
          }
          else {
            if (7 < uVar9 - 0xb2) {
              if (uVar9 == 0x9c) {
                uVar16 = 0;
                uVar9 = *(uint *)param_4;
                uVar3 = *(uint *)((long)param_4 + 4);
                puVar20 = (uint *)(ulong)((uVar3 & uVar9) >> 8 & 1);
                uVar19 = *(uint *)(&UNK_10e47c6f0 +
                                  ((ulong)uVar3 & 0xff) * 4 + (ulong)(uVar9 & 0xff) * 0x1c);
                uVar9 = (uVar3 | uVar9) >> 9 & (uVar3 & uVar9 & 0x7ff) >> 10;
              }
              else {
                if (uVar9 != 0xa9) goto LAB_109f43300;
                uVar3 = *(uint *)param_4;
                uVar19 = uVar3 & 0xff;
                uVar14 = uVar3 >> 10 & 1;
                uVar16 = uVar3 >> 9 & 1;
                puVar20 = (uint *)0x1;
                uVar9 = uVar14;
                if (((uVar3 >> 8 & 1) == 0) && (1 < uVar19 - 3)) {
                  uVar9 = uVar19 - 1;
                  uVar19 = 2;
                  goto LAB_109f43374;
                }
              }
              goto LAB_109f43604;
            }
LAB_109f42d8c:
            uVar24 = 0;
            uVar19 = *(uint *)param_4;
            ppuVar26 = (undefined **)(ulong)uVar19;
            do {
              bVar2 = (&UNK_110b78548)[(ulong)uVar9 * 0x68];
              if ((&UNK_110b78548)[(ulong)uVar9 * 0x68] == 0) {
                bVar2 = (byte)puVar25[0x13];
              }
              if (bVar2 <= uVar24) {
                if (*(long *)(puVar25 + 0x1a) == *(long *)(puVar25 + 0x26)) {
                  uVar16 = 0;
                  puVar20 = (uint *)0x0;
                  uVar19 = uVar19 >> 10 & 1;
                  goto LAB_109f43210;
                }
                break;
              }
              lVar15 = uVar24 + 0x70;
              lVar7 = uVar24 + 0xa0;
              uVar24 = uVar24 + 1;
            } while (*(char *)((long)puVar25 + lVar15) == *(char *)((long)puVar25 + lVar7));
            puVar13 = (uint *)0x0;
            param_4 = (undefined **)0x1;
            param_1 = puVar25;
            param_2 = puVar25;
            FUN_109f01f38();
            uVar16 = 0;
            puVar20 = (uint *)0x0;
            uVar14 = (uint)param_1 & uVar19 >> 10;
            uVar19 = 2;
            if ((uint)param_1 == 0) {
              uVar19 = 0;
            }
          }
        }
        else {
          if (200 < (int)uVar9) {
            if (0xcc < (int)uVar9) {
              if (uVar9 != 0xcd) {
                if (uVar9 == 0xda) {
                  uVar16 = 0;
                  uVar24 = (ulong)*(uint *)param_4 & 0xff;
                  puVar20 = (uint *)(ulong)((*(uint *)(param_4 + 1) &
                                            *(uint *)param_4 & *(uint *)((long)param_4 + 4) & 0x1ff)
                                           >> 8);
                  uVar19 = *(uint *)(&UNK_10e47c6f0 +
                                    (ulong)*(uint *)(&UNK_10e47c7b4 +
                                                    (ulong)*(uint *)(&UNK_10e47c6f0 +
                                                                    (ulong)*(uint *)(&UNK_10e47c878
                                                                                    + uVar24 * 4) *
                                                                    4 + (ulong)(*(uint *)((long)
                                                  param_4 + 4) & 0xff) * 0x1c) * 4 +
                                                  (ulong)(*(uint *)(param_4 + 1) & 0xff) * 0x1c) * 4
                                    + uVar24 * 0x1c);
                  uVar9 = 0;
                  goto LAB_109f43604;
                }
                goto LAB_109f43300;
              }
              goto LAB_109f431f0;
            }
            if (uVar9 != 0xc9) {
              if (uVar9 != 0xca) goto LAB_109f43300;
              uVar19 = *(uint *)((long)param_4 + 4);
              uVar9 = *(uint *)param_4 & 0xff;
              ppuVar26 = (undefined **)((ulong)*(uint *)(param_4 + 1) & 0xff);
              puVar20 = (uint *)0x0;
              if ((uVar19 & 0x100) != 0 && (*(uint *)param_4 & 0x100) != 0) {
                puVar20 = (uint *)((ulong)(*(uint *)(param_4 + 1) >> 8) & 1);
              }
              if (uVar9 == 6) {
LAB_109f435d0:
                uVar19 = *(uint *)(&UNK_10e47c7b4 + ((ulong)uVar19 & 0xff) * 4 + (ulong)uVar9 * 0x1c
                                  );
              }
              else {
                uVar24 = 0;
                do {
                  if ((byte)puVar25[0x13] <= uVar24) {
                    if (*(long *)(puVar25 + 0x1a) == *(long *)(puVar25 + 0x26)) {
                      uVar19 = 4;
                      goto LAB_109f435e8;
                    }
                    break;
                  }
                  lVar15 = uVar24 + 0x70;
                  lVar7 = uVar24 + 0xa0;
                  uVar24 = uVar24 + 1;
                } while (*(char *)((long)puVar25 + lVar15) == *(char *)((long)puVar25 + lVar7));
                puVar13 = (uint *)0x0;
                param_4 = (undefined **)0x1;
                param_1 = puVar25;
                param_2 = puVar25;
                FUN_109f01f38();
                if (((ulong)param_1 & 1) == 0) goto LAB_109f435d0;
                uVar19 = 2;
              }
LAB_109f435e8:
              uVar16 = 0;
              uVar19 = *(uint *)(&UNK_10e47c6f0 + (long)ppuVar26 * 4 + (ulong)uVar19 * 0x1c);
              uVar9 = 0;
              goto LAB_109f43604;
            }
            uVar3 = *(uint *)param_4;
            uVar19 = uVar3 & 0xff;
            uVar14 = uVar3 >> 10 & 1;
            uVar16 = uVar3 >> 9 & 1;
            puVar20 = (uint *)0x1;
            uVar9 = uVar14;
            if (((uVar3 >> 8 & 1) != 0) || (uVar19 - 1 < 2)) goto LAB_109f43604;
            uVar9 = uVar19 - 3;
            uVar19 = 4;
LAB_109f43374:
            if (1 < uVar9) {
              uVar19 = 0;
            }
            goto LAB_109f43610;
          }
          if (uVar9 - 0xbc < 2) goto LAB_109f42d8c;
          if (uVar9 != 0xc0) {
            if (uVar9 == 200) {
              uVar16 = 0;
              uVar9 = 0;
              uVar24 = (ulong)*(uint *)param_4 & 0xff;
              puVar20 = (uint *)(ulong)((uint)((int)uVar24 == 6 || (int)uVar24 - 3U < 2) &
                                       (*(uint *)param_4 & 0x100) >> 8);
              puVar21 = &UNK_10e47c894;
              goto LAB_109f433f0;
            }
            goto LAB_109f43300;
          }
LAB_109f431f0:
          uVar16 = 0;
          puVar20 = (uint *)0x0;
          uVar19 = 2;
          uVar14 = 1;
        }
      }
      else {
        uVar16 = 0;
        uVar14 = 0;
        uVar19 = 4;
        if (0x100 < (int)uVar9) {
          if (0x153 < (int)uVar9) {
            if ((int)uVar9 < 0x195) {
              if (uVar9 == 0x154) {
                uVar9 = *(uint *)param_4;
                uVar19 = uVar9 & 0xff;
                uVar16 = uVar9 >> 9 & 1;
                uVar24 = (ulong)(uVar9 >> 10 & 1) << 0x28 | ((ulong)(uVar9 >> 9) & 1) << 0x30;
                puVar20 = (uint *)(uVar24 >> 0x20 | (ulong)(uVar9 >> 8) & 1);
                uVar9 = (uint)(uVar24 >> 0x28);
                goto LAB_109f43604;
              }
              if (uVar9 == 0x17f) {
LAB_109f42f68:
                uVar19 = (uint)*(byte *)param_4;
                if (uVar19 == 0) {
                  uVar19 = 4;
                  if (uVar9 != 0x17f) {
                    uVar19 = 0;
                  }
                  uVar14 = 1;
                  uVar16 = 1;
                  goto LAB_109f43610;
                }
                goto LAB_109f433fc;
              }
            }
            else if ((uVar9 == 0x195) || (uVar9 == 0x19a)) goto LAB_109f431f0;
LAB_109f43300:
            uVar19 = 0;
            uVar14 = 0;
            uVar16 = 0;
            puVar20 = (uint *)0x0;
            goto LAB_109f43614;
          }
          uVar24 = (ulong)(uVar9 - 0x10b);
          if (uVar9 - 0x10b < 0x37) {
            if ((1L << (uVar24 & 0x3f) & 0x40001082000000U) != 0) goto LAB_109f431f0;
            if (uVar24 != 0) {
              if (uVar24 == 6) goto LAB_109f42f68;
              goto LAB_109f42890;
            }
            uVar9 = *(uint *)param_4;
            uVar19 = uVar9 & 0xff;
            uVar14 = uVar9 >> 10 & 1;
            uVar16 = uVar9 >> 9 & 1;
            if ((uVar9 >> 8 & 1) == 0) {
              uVar3 = uVar19 - 3;
              uVar9 = 2;
              if (1 < uVar19 - 1) {
                uVar9 = 0;
              }
              uVar19 = 4;
              if (1 < uVar3) {
                uVar19 = uVar9;
              }
              puVar20 = (uint *)0x1;
              goto LAB_109f43614;
            }
          }
          else {
LAB_109f42890:
            if (uVar9 != 0x101) {
              puVar20 = (uint *)0x0;
              if (uVar9 == 0x106) goto LAB_109f43614;
              goto LAB_109f43300;
            }
            uVar19 = (uint)*(byte *)param_4;
LAB_109f433fc:
            uVar14 = 1;
            uVar16 = 1;
          }
          puVar20 = (uint *)0x1;
          uVar9 = uVar14;
          goto LAB_109f43604;
        }
        if ((int)uVar9 < 0xef) {
          if ((int)uVar9 < 0xe8) {
            if (uVar9 == 0xdb) goto LAB_109f431f0;
            if (uVar9 == 0xe3) {
              uVar3 = *(uint *)param_4;
              uVar14 = *(uint *)((long)param_4 + 4);
              uVar24 = (ulong)uVar3 & 0xff;
              puVar20 = (uint *)(ulong)((uVar14 & uVar3) >> 8 & 1);
              uVar16 = (uVar14 & uVar3) >> 9 & 1;
              uVar9 = (uVar14 | uVar3) >> 10 & 1;
              uVar19 = *(uint *)(&UNK_10e47c8b0 + ((ulong)uVar14 & 0xff) * 4 + uVar24 * 0x1c);
              if ((uVar3 >> 10 & 1) == 0) {
                uVar19 = *(uint *)(&UNK_10e47cafc +
                                  ((ulong)uVar14 & 0xff) * 4 + (ulong)uVar19 * 0x1c);
              }
              if ((uVar14 >> 10 & 1) == 0) {
                puVar21 = &UNK_10e47cafc + (ulong)uVar19 * 0x1c;
LAB_109f433f0:
                uVar19 = *(uint *)(puVar21 + uVar24 * 4);
              }
            }
            else {
              if (uVar9 != 0xe5) goto LAB_109f43300;
              uVar3 = *(uint *)param_4;
              uVar14 = *(uint *)((long)param_4 + 4);
              uVar24 = (ulong)uVar3 & 0xff;
              puVar20 = (uint *)(ulong)((uVar14 & uVar3) >> 8 & 1);
              uVar16 = (uVar14 & uVar3) >> 9 & 1;
              uVar9 = (uVar14 | uVar3) >> 10 & 1;
              uVar19 = *(uint *)(&UNK_10e47c974 + ((ulong)uVar14 & 0xff) * 4 + uVar24 * 0x1c);
              if ((uVar3 >> 10 & 1) == 0) {
                uVar19 = *(uint *)(&UNK_10e47cafc +
                                  ((ulong)uVar14 & 0xff) * 4 + (ulong)uVar19 * 0x1c);
              }
              if ((uVar14 >> 10 & 1) == 0) {
                puVar21 = &UNK_10e47cafc + (ulong)uVar19 * 0x1c;
                goto LAB_109f433f0;
              }
            }
          }
          else if (uVar9 - 0xe8 < 2) {
            uVar16 = *(uint *)param_4;
            uVar3 = *(uint *)((long)param_4 + 4);
            ppuVar26 = (undefined **)(ulong)uVar3;
            puVar20 = (uint *)(ulong)((uVar3 & uVar16) >> 8 & 1);
            if ((uVar16 & 0xff) == 6) {
LAB_109f43504:
              uVar19 = *(uint *)(&UNK_10e47c7b4 +
                                ((ulong)ppuVar26 & 0xff) * 4 + (ulong)(uVar16 & 0xff) * 0x1c);
            }
            else {
              uVar24 = 0;
              do {
                bVar2 = (&UNK_110b78548)[(ulong)uVar9 * 0x68];
                if ((&UNK_110b78548)[(ulong)uVar9 * 0x68] == 0) {
                  bVar2 = (byte)puVar25[0x13];
                }
                if (bVar2 <= uVar24) {
                  if (*(long *)(puVar25 + 0x1a) == *(long *)(puVar25 + 0x26)) {
                    uVar19 = 4;
                    goto LAB_109f43518;
                  }
                  break;
                }
                lVar15 = uVar24 + 0x70;
                lVar7 = uVar24 + 0xa0;
                uVar24 = uVar24 + 1;
              } while (*(char *)((long)puVar25 + lVar15) == *(char *)((long)puVar25 + lVar7));
              puVar13 = (uint *)0x0;
              param_4 = (undefined **)0x1;
              param_1 = puVar25;
              param_2 = puVar25;
              FUN_109f01f38();
              if (((ulong)param_1 & 1) == 0) goto LAB_109f43504;
              uVar19 = 2;
            }
LAB_109f43518:
            uVar14 = (uVar3 & uVar16) >> 10 & 1;
            uVar9 = uVar14;
            if (puVar25[10] == 0xe8) {
              uVar9 = 0;
            }
            if (puVar25[10] == 0xe8 && uVar14 != 0) {
              if ((uVar16 >> 9 & 1) == 0) {
                if (((uVar16 & 0xff) < 6) && ((1 << (ulong)(uVar16 & 0x1f) & 0x2aU) != 0)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar3 >> 9;
                }
              }
              else {
                uVar9 = 1;
                if ((uVar3 & 0x200) == 0) {
                  uVar9 = (uint)((int)((ulong)ppuVar26 & 0xff) != 5 && (uVar3 & 0xfd) != 1);
                }
              }
            }
            uVar16 = 0;
            uVar9 = uVar9 & 1;
          }
          else {
            if (uVar9 != 0xea) goto LAB_109f43300;
            uVar19 = *(uint *)param_4;
            uVar16 = uVar19 >> 9 & 1;
            uVar24 = (ulong)(uVar19 >> 10 & 1) << 0x28 | ((ulong)(uVar19 >> 9) & 1) << 0x30;
            puVar20 = (uint *)(uVar24 >> 0x20 | (ulong)(uVar19 >> 8) & 1);
            uVar19 = *(uint *)(&UNK_10e47c878 + ((ulong)uVar19 & 0xff) * 4);
            uVar9 = (uint)(uVar24 >> 0x28);
          }
LAB_109f43604:
          uVar14 = uVar9;
          if (uVar19 != 6) goto LAB_109f43614;
        }
        else {
          if ((int)uVar9 < 0xf9) {
            if (uVar9 == 0xef) goto LAB_109f431f0;
            if (uVar9 != 0xf7) goto LAB_109f43300;
            uVar16 = 0;
            uVar24 = (ulong)*(uint *)((long)param_4 + 4) & 0xff;
            iVar23 = (int)uVar24;
            puVar20 = (uint *)(ulong)((uint)(iVar23 == 6 || iVar23 - 3U < 2) &
                                     (*(uint *)param_4 & *(uint *)((long)param_4 + 4) & 0x100) >> 8)
            ;
            uVar19 = *(uint *)(&UNK_10e47ca38 + uVar24 * 4 + (ulong)(*(uint *)param_4 & 0xff) * 0x1c
                              );
            uVar9 = 0;
            goto LAB_109f43604;
          }
          if (uVar9 == 0xf9) {
            uVar16 = 0;
            puVar20 = (uint *)0x0;
            uVar19 = (uint)*(byte *)param_4;
            uVar9 = 0;
            goto LAB_109f43604;
          }
          puVar20 = (uint *)0x0;
          if (uVar9 == 0xfe) goto LAB_109f43614;
          if (uVar9 != 0xff) goto LAB_109f43300;
          uVar9 = *(uint *)param_4;
          uVar14 = 1;
          if (6 < (uVar9 & 0xff)) {
            uVar19 = 0;
            puVar20 = (uint *)0x0;
            goto LAB_109f42e00;
          }
          if ((1 << (ulong)(uVar9 & 0x1f) & 0x31U) != 0) {
            puVar20 = (uint *)(ulong)(uVar9 >> 8 & 1);
            uVar19 = 4;
LAB_109f43598:
            uVar14 = 1;
            uVar16 = 1;
            goto LAB_109f43614;
          }
          uVar16 = 1;
          if ((1 << (ulong)(uVar9 & 0x1f) & 0x46U) == 0) {
            uVar19 = 3;
            if ((uVar9 & 0x400) == 0) {
              uVar19 = 4;
            }
            puVar20 = (uint *)((ulong)(uVar9 >> 8) & 1);
            goto LAB_109f43598;
          }
        }
        uVar19 = 6;
LAB_109f43610:
        puVar20 = (uint *)0x1;
      }
LAB_109f43614:
      uVar19 = uVar19 | uVar16 << 9 | (uVar14 & 1) << 10 | ((uint)puVar20 & 1) << 8;
      goto LAB_109f43628;
    }
    if ((int)uVar9 < 0xe3) {
      uVar24 = (ulong)(uVar9 - 0x9b);
      if (uVar9 - 0x9b < 0x40) {
        if ((1L << (uVar24 & 0x3f) & 0x60067f804001U) == 0) {
          if ((1L << (uVar24 & 0x3f) & 0x8000800000000000U) == 0) {
            if (uVar24 == 1) goto LAB_109f42e98;
            goto LAB_109f432bc;
          }
          puVar13 = param_1;
          FUN_109f43d14();
          *(uint **)(puVar13 + 2) = puVar25;
          puVar13[4] = 0;
          ppuVar26 = &PTR_DAT_110b78538;
          puVar13[5] = *(uint *)(&UNK_110b78558 + (ulong)puVar25[10] * 0x68) & 0x86 |
                       (uint)*(byte *)(*(long *)(puVar25 + 0x1a) + 0x1d);
          puVar13 = param_1;
          FUN_109f43d14();
          *(uint **)(puVar13 + 2) = puVar25;
          puVar13[4] = 1;
          puVar13[5] = *(uint *)(&UNK_110b7855c + (ulong)puVar25[10] * 0x68) & 0x86 |
                       (uint)*(byte *)(*(long *)(puVar25 + 0x26) + 0x1d);
          FUN_109f43d14();
          *(uint **)(puVar11 + 2) = puVar25;
          puVar11[4] = 2;
          uVar19 = *(uint *)(&UNK_110b78560 + (ulong)puVar25[10] * 0x68) & 0x86;
          lVar15 = *(long *)(puVar25 + 0x32);
          puVar13 = param_3;
          param_3 = (uint *)0x68;
        }
        else {
LAB_109f42b18:
          FUN_109f43d14();
          *(uint **)(puVar11 + 2) = puVar25;
          puVar11[4] = 0;
          uVar19 = *(uint *)(&UNK_110b78558 + (ulong)puVar25[10] * 0x68) & 0x86;
          lVar15 = *(long *)(puVar25 + 0x1a);
        }
LAB_109f42f00:
        puVar11[5] = uVar19 | *(byte *)(lVar15 + 0x1d);
        goto LAB_109f4362c;
      }
LAB_109f432bc:
      if (uVar9 != 0x71) goto LAB_109f42838;
      puVar13 = (uint *)0x1;
      param_2 = puVar25;
      param_4 = ppuVar26;
      FUN_109f43688();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        puVar13 = (uint *)0x2;
        param_2 = puVar25;
        goto code_r0x000109f43688;
      }
    }
    else {
      uVar16 = uVar9 - 0xe3;
      if (uVar16 < 0x2f) {
        if ((1L << ((ulong)uVar16 & 0x3f) & 0x410050400080U) != 0) goto LAB_109f42b18;
        if ((1L << ((ulong)uVar16 & 0x3f) & 0x100065U) != 0) {
LAB_109f42e98:
          puVar13 = param_1;
          FUN_109f43d14();
          *(uint **)(puVar13 + 2) = puVar25;
          puVar13[4] = 0;
          ppuVar26 = &PTR_DAT_110b78538;
          puVar13[5] = *(uint *)(&UNK_110b78558 + (ulong)puVar25[10] * 0x68) & 0x86 |
                       (uint)*(byte *)(*(long *)(puVar25 + 0x1a) + 0x1d);
          FUN_109f43d14();
          *(uint **)(puVar11 + 2) = puVar25;
          puVar11[4] = 1;
          uVar19 = *(uint *)(&UNK_110b7855c + (ulong)puVar25[10] * 0x68) & 0x86;
          lVar15 = *(long *)(puVar25 + 0x26);
          puVar13 = param_3;
          param_3 = (uint *)0x68;
          goto LAB_109f42f00;
        }
      }
      if (uVar9 != 0x154) {
        if (uVar9 == 0x17f) goto LAB_109f42b18;
        goto LAB_109f42838;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        puVar13 = (uint *)0x0;
        param_2 = puVar25;
        goto code_r0x000109f43688;
      }
    }
  }
  else {
    puVar20 = unaff_x21;
    if (puVar25[6] == 5) {
      auStack_70[2] = 0xb0a0908;
      auStack_70[3] = 0xf0e0d0c;
      auStack_70[0] = 0x3020100;
      auStack_70[1] = 0x7060504;
      bVar2 = (&UNK_110b78548)[(ulong)*(uint *)(lVar15 + 0x28) * 0x68 + uVar24];
      if ((bVar2 == 0) && (bVar2 = *(byte *)(lVar15 + 0x4c), bVar2 == 0)) {
        puVar20 = (uint *)0x0;
        bVar4 = true;
      }
      else {
        puVar20 = (uint *)(ulong)bVar2;
        param_2 = (uint *)(lVar15 + uVar24 * 0x30 + 0x70);
        puVar13 = puVar20;
        _memcpy();
        bVar4 = false;
        param_1 = puVar10;
      }
      uVar19 = uVar19 & 0x86;
      if (uVar19 < 6) {
        if (uVar19 == 2) {
LAB_109f428b8:
          if (!bVar4) {
            bVar4 = false;
            uVar19 = (*(byte *)((long)puVar25 + 0x45) & 0xaaaaaaaa) >> 1 |
                     (*(byte *)((long)puVar25 + 0x45) & 0x55555555) << 1;
            uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
            uVar24 = 0xffffffff80000000;
            bVar6 = true;
            uVar18 = 0x7fffffff;
            puVar11 = auStack_70;
            do {
              uVar22 = *(ulong *)(puVar25 + (ulong)*(byte *)puVar11 * 2 + 0x12);
              uVar9 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
              if (uVar9 < 4) {
                if (uVar9 == 0) {
                  uVar22 = -(uVar22 & 1);
                }
                else {
                  uVar22 = (long)(char)uVar22;
                }
              }
              else {
                uVar17 = (long)(int)uVar22;
                if (uVar9 != 5) {
                  uVar17 = uVar22;
                }
                uVar22 = (long)(short)uVar22;
                if (uVar9 != 4) {
                  uVar22 = uVar17;
                }
              }
              bVar4 = (bool)(bVar4 | uVar22 == 0);
              bVar6 = (bool)(bVar6 & uVar22 == 0);
              if ((long)uVar22 <= (long)uVar18) {
                uVar18 = uVar22;
              }
              if ((long)uVar24 <= (long)uVar22) {
                uVar24 = uVar22;
              }
              puVar20 = (uint *)((long)puVar20 + -1);
              puVar11 = (uint *)((long)puVar11 + 1);
            } while (puVar20 != (uint *)0x0);
            uVar19 = 0;
            if (!bVar4) {
              uVar19 = 5;
            }
            puVar20 = (uint *)0x0;
            if (!bVar6) {
              if ((long)uVar18 < 1) {
                uVar9 = 2;
                if (uVar24 != 0) {
                  uVar9 = uVar19;
                }
                uVar16 = 1;
                if ((uVar24 & 0x8000000000000000) == 0) {
                  uVar16 = uVar9;
                }
                uVar24 = 0;
                uVar22 = 0;
                uVar17 = 0;
                uVar19 = 4;
                if (uVar18 != 0) {
                  uVar19 = uVar16;
                }
              }
              else {
                uVar24 = 0;
                uVar22 = 0;
                uVar17 = 0;
                uVar19 = 3;
              }
              goto LAB_109f42964;
            }
          }
LAB_109f42954:
          uVar24 = 0;
          uVar22 = 0;
          uVar17 = 0;
          goto LAB_109f42960;
        }
        if (bVar4) goto LAB_109f42954;
        bVar4 = false;
        uVar19 = (*(byte *)((long)puVar25 + 0x45) & 0xaaaaaaaa) >> 1 |
                 (*(byte *)((long)puVar25 + 0x45) & 0x55555555) << 1;
        uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
        bVar6 = true;
        puVar11 = auStack_70;
        do {
          uVar24 = *(ulong *)(puVar25 + (ulong)*(byte *)puVar11 * 2 + 0x12);
          uVar9 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
          if (uVar9 < 4) {
            if (uVar9 == 0) {
              uVar24 = uVar24 & 1;
            }
            else {
              uVar24 = uVar24 & 0xff;
            }
          }
          else {
            uVar22 = uVar24 & 0xffffffff;
            if (uVar9 != 5) {
              uVar22 = uVar24;
            }
            uVar24 = uVar24 & 0xffff;
            if (uVar9 != 4) {
              uVar24 = uVar22;
            }
          }
          bVar4 = (bool)(bVar4 | uVar24 == 0);
          bVar6 = (bool)(bVar6 & uVar24 == 0);
          puVar20 = (uint *)((long)puVar20 + -1);
          puVar11 = (uint *)((long)puVar11 + 1);
        } while (puVar20 != (uint *)0x0);
        uVar24 = 0;
        uVar22 = 0;
        uVar17 = 0;
        uVar9 = 3;
        if (bVar4) {
          uVar9 = 4;
        }
        uVar19 = 6;
        if (!bVar6) {
          uVar19 = uVar9;
        }
        puVar20 = (uint *)0x0;
      }
      else {
        if (uVar19 == 6) goto LAB_109f428b8;
        if (!bVar4) {
          bVar4 = false;
          dVar27 = NAN;
          uVar19 = 1;
          bVar6 = true;
          dVar28 = NAN;
          param_1 = (uint *)0x1;
          puVar11 = auStack_70;
          uVar9 = 1;
          do {
            dVar12 = *(double *)(puVar25 + (ulong)*(byte *)puVar11 * 2 + 0x12);
            if (*(char *)((long)puVar25 + 0x45) != '@') {
              fVar30 = SUB84(dVar12,0);
              if (*(char *)((long)puVar25 + 0x45) != ' ') {
                puVar13 = (uint *)(ulong)((uint)fVar30 >> 0xf);
                fVar29 = (float)(((uint)fVar30 & 0x7fff) << 0xd) * 5.192297e+33;
                param_4 = (undefined **)(ulong)((uint)fVar29 | 0x7f800000);
                if (65536.0 <= fVar29) {
                  fVar29 = (float)((uint)fVar29 | 0x7f800000);
                }
                fVar30 = (float)((uint)fVar29 | ((uint)fVar30 >> 0xf) << 0x1f);
              }
              dVar12 = (double)fVar30;
            }
            uVar16 = 0;
            if ((double)(long)dVar12 == dVar12) {
              uVar16 = uVar9;
            }
            if (NAN(dVar12)) {
              uVar19 = 0;
            }
            uVar9 = (uint)param_1;
            if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
              uVar9 = 0;
            }
            param_1 = (uint *)(ulong)uVar9;
            bVar8 = dVar12 == 0.0;
            param_2 = (uint *)(ulong)bVar8;
            bVar4 = (bool)(bVar4 | bVar8);
            bVar6 = (bool)(bVar6 & bVar8);
            dVar28 = (double)NEON_fminnm(dVar28,dVar12);
            if (dVar27 <= dVar12) {
              dVar27 = dVar12;
            }
            puVar20 = (uint *)((long)puVar20 + -1);
            puVar11 = (uint *)((long)puVar11 + 1);
            uVar9 = uVar16;
          } while (puVar20 != (uint *)0x0);
          uVar9 = 0;
          if (!bVar4) {
            uVar9 = 5;
          }
          uVar24 = (long)param_1 << 0x30;
          uVar22 = (ulong)uVar19 << 0x28;
          uVar17 = (ulong)uVar16 << 0x20;
          uVar19 = 2;
          if (dVar27 != 0.0) {
            uVar19 = uVar9;
          }
          uVar9 = 1;
          if (0.0 <= dVar27) {
            uVar9 = uVar19;
          }
          uVar19 = 4;
          if (dVar28 != 0.0) {
            uVar19 = uVar9;
          }
          uVar9 = 3;
          if (dVar28 <= 0.0) {
            uVar9 = uVar19;
          }
          uVar19 = 6;
          if (!bVar6) {
            uVar19 = uVar9;
          }
          puVar20 = (uint *)0x0;
          goto LAB_109f42964;
        }
        uVar17 = 0x100000000;
        uVar22 = 0x10000000000;
        uVar24 = 0x1000000000000;
LAB_109f42960:
        uVar19 = 6;
      }
LAB_109f42964:
      uVar17 = uVar22 | uVar24 | uVar17;
      uVar19 = (uint)(uVar17 >> 0x18) & 0x100 | uVar19 |
               (uint)(uVar17 >> 0x27) & 0x200 | (uint)(uVar17 >> 0x1e) & 0x400;
LAB_109f43628:
      *param_3 = uVar19;
      puVar11 = param_1;
      param_1 = puVar20;
    }
    else {
LAB_109f428a8:
      *param_3 = 0;
      param_1 = puVar20;
    }
LAB_109f4362c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  unaff_x22 = ppuVar26;
  unaff_x21 = param_1;
  unaff_x19 = param_3;
  uVar19 = (uint)param_4;
  unaff_x30 = FUN_109f43688;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_70;
  param_1 = puVar11;
  unaff_x20 = puVar25;
  unaff_x29 = puVar1;
code_r0x000109f43688:
  *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
  *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_109f43d14();
  *(uint **)(param_1 + 2) = param_2;
  param_1[4] = (uint)puVar13;
  if (uVar19 == 0) {
    uVar19 = *(uint *)(&UNK_110b78558 +
                      (ulong)param_2[10] * 0x68 + ((ulong)puVar13 & 0xffffffff) * 4) & 0x86 |
             (uint)*(byte *)(*(long *)(param_2 + ((ulong)puVar13 & 0xffffffff) * 0xc + 0x1a) + 0x1d)
    ;
  }
  param_1[5] = uVar19;
  return;
}



/* Entry: 109f43688; end: 109f436ff;  */

void FUN_109f43688(long param_1,long param_2,uint param_3,uint param_4)

{
  FUN_109f43d14();
  *(long *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x10) = param_3;
  if (param_4 == 0) {
    param_4 = *(uint *)(&UNK_110b78558 +
                       (ulong)*(uint *)(param_2 + 0x28) * 0x68 + (ulong)param_3 * 4) & 0x86 |
              (uint)*(byte *)(*(long *)(param_2 + (ulong)param_3 * 0x30 + 0x68) + 0x1d);
  }
  *(uint *)(param_1 + 0x14) = param_4;
  return;
}



/* Entry: 109f43700; end: 109f438e3;  */

undefined4 FUN_109f43700(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  
  uVar7 = *(uint *)(param_1 + 0x28);
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x48);
    do {
      while( true ) {
        puVar11 = (uint *)((*(long *)(param_1 + 0x20) + (ulong)uVar7) - uVar10);
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)puVar11[1] * 4);
        puVar5 = puVar11;
        (**(code **)(param_1 + 0x50))();
        uVar7 = *puVar11;
        if (uVar7 != 0 || puVar5 == (uint *)0x0) break;
        lVar12 = *(long *)(param_1 + 0x10);
        puVar6 = puVar5;
        (**(code **)(lVar12 + 8))(puVar5);
        FUN_109f64fdc(lVar12,puVar6,puVar5);
        if (lVar12 == 0) {
          uVar7 = *puVar11;
          break;
        }
        *puVar1 = (int)*(undefined8 *)(lVar12 + 0x10);
        uVar10 = *(ulong *)(param_1 + 0x48);
        uVar7 = *(uint *)(param_1 + 0x28);
LAB_109f43828:
        uVar7 = uVar7 - (int)uVar10;
        *(uint *)(param_1 + 0x28) = uVar7;
        if (uVar7 == 0) goto LAB_109f43834;
      }
      uVar2 = *(uint *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = uVar2 + uVar7 * -4;
      uVar3 = *(uint *)(param_1 + 0x28);
      (**(code **)(param_1 + 0x58))
                (param_1,puVar11,puVar1,*(long *)(param_1 + 0x38) + (ulong)uVar2 + (ulong)uVar7 * -4
                );
      uVar7 = *(uint *)(param_1 + 0x28);
      if (uVar7 <= uVar3) {
        if (puVar5 != (uint *)0x0) {
          lVar12 = *(long *)(param_1 + 0x10);
          uVar4 = *puVar1;
          puVar11 = puVar5;
          (**(code **)(lVar12 + 8))(puVar5);
          func_0x000109f650c0(lVar12,puVar11,puVar5,uVar4);
          uVar7 = *(uint *)(param_1 + 0x28);
        }
        uVar10 = *(ulong *)(param_1 + 0x48);
        goto LAB_109f43828;
      }
      uVar10 = *(ulong *)(param_1 + 0x48);
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = (undefined4)((uVar7 - uVar3) / uVar10);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (uVar3 - uVar10)) = uVar4;
    } while (uVar7 != 0);
  }
LAB_109f43834:
  lVar12 = *(long *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(lVar12 + (ulong)*(uint *)(param_1 + 0x40) + -4);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x18) != 0x11386a228) {
      if (*(long *)(param_1 + 0x18) == 0) {
        _free(lVar8);
      }
      else {
        FUN_109f65aa4(lVar8 + -0x30);
        FUN_109f65ae0(lVar8 + -0x30);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    lVar12 = *(long *)(param_1 + 0x38);
    if (lVar12 == 0) {
      return uVar4;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0x11386a228) {
    if (*(long *)(param_1 + 0x30) == 0) {
      _free();
    }
    else {
      FUN_109f65aa4(lVar12 + -0x30);
      FUN_109f65ae0(lVar12 + -0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return uVar4;
}



/* Entry: 109f438e4; end: 109f43d13;  */

ulong FUN_109f438e4(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  uVar3 = 0xffffffffffffffff;
  if (*(byte *)(param_1 + 0x1d) != 0x40) {
    uVar3 = ~(-1L << ((ulong)*(byte *)(param_1 + 0x1d) & 0x3f));
  }
  uVar15 = uVar3;
  if ((*(byte *)(param_1 + 0x1c) < 2) && (0 < param_2)) {
    lVar16 = *(long *)(param_1 + 0x10);
    if (lVar16 == param_1 + 8) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        puVar13 = (ulong *)(lVar16 + -8);
        uVar9 = *puVar13;
        if ((uVar9 & 1) == 0) {
          iVar4 = *(int *)(uVar9 + 0x18);
          if (iVar4 == 8) {
            uVar6 = uVar9 + 0x48;
LAB_109f43c38:
            FUN_109f438e4(uVar6,param_2 + -1);
          }
          else {
            if (iVar4 == 4) {
              uVar8 = *(uint *)(uVar9 + 0x28);
              uVar7 = uVar8 - 0x23a;
              if (uVar7 < 0x27) {
                if ((1L << ((ulong)uVar7 & 0x3f) & 0x560000010fU) == 0) {
                  if ((ulong)uVar7 != 10) goto LAB_109f43be0;
                  goto LAB_109f43bf0;
                }
                if (((long)puVar13 + (-0x80 - uVar9) & 0x1fffffffe0) != 0) {
                  uVar6 = 3;
                  if (uVar8 != 0x23a) {
                    uVar6 = 0x7f;
                  }
                  goto LAB_109f43c40;
                }
              }
              else {
LAB_109f43be0:
                if ((uVar8 != 0x76) && (uVar8 != 0xb8)) {
                  return uVar3;
                }
LAB_109f43bf0:
                uVar8 = *(int *)(uVar9 + (ulong)(byte)(&UNK_110b671b4)[(ulong)uVar8 * 0x68] * 4 +
                                0x50) - 0x11d;
                if (0x35 < uVar8 || (1L << ((ulong)uVar8 & 0x3f) & 0x20200040000009U) == 0) {
                  return uVar3;
                }
              }
              uVar6 = uVar9 + 0x30;
              goto LAB_109f43c38;
            }
            if (iVar4 != 0) {
              return uVar3;
            }
            if (1 < *(byte *)(uVar9 + 0x4c)) {
              return uVar3;
            }
            lVar14 = uVar9 + 0x50;
            iVar5 = (int)((long)puVar13 - lVar14 >> 4);
            iVar11 = iVar5 * -0x55555555;
            iVar4 = *(int *)(uVar9 + 0x28);
            uVar6 = uVar3 & 0xffff;
            if (iVar4 < 0x14a) {
              if (0x114 < iVar4) {
                if (iVar4 < 0x118) {
                  if ((iVar4 != 0x115) && (uVar6 = uVar3 & 0xffffffff, iVar4 != 0x116)) {
                    return uVar3;
                  }
                }
                else {
                  uVar6 = 0xff;
                  if (iVar4 != 0x118) {
                    if (iVar4 != 0x120) {
                      return uVar3;
                    }
                    lVar14 = lVar14 + (ulong)(iVar5 * 0x55555555 + 1) * 0x30;
                    lVar10 = **(long **)(lVar14 + 0x18);
                    if (*(int *)(lVar10 + 0x18) != 5) {
                      return uVar3;
                    }
                    uVar6 = *(ulong *)(lVar10 + (ulong)*(byte *)(lVar14 + 0x20) * 8 + 0x48);
                    uVar8 = (*(byte *)(lVar10 + 0x45) & 0xaaaaaaaa) >> 1 |
                            (*(byte *)(lVar10 + 0x45) & 0x55555555) << 1;
                    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                    uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
                    if (uVar8 < 4) {
                      if (uVar8 == 0) {
                        uVar6 = uVar6 & 1;
                      }
                      else {
                        uVar6 = uVar6 & 0xff;
                      }
                    }
                    else if (uVar8 == 4) {
                      uVar6 = uVar6 & 0xffff;
                    }
                    else if (uVar8 == 5) {
                      uVar6 = uVar6 & 0xffffffff;
                    }
                  }
                }
                goto LAB_109f43c40;
              }
              if (iVar4 < 0x85) {
                if (iVar4 == 0x83) goto LAB_109f43b74;
                if (iVar4 != 0x84) {
                  return uVar3;
                }
LAB_109f43aa8:
                if (iVar11 != 0) {
                  return uVar3;
                }
                lVar14 = **(long **)(uVar9 + 0x98);
                if (*(int *)(lVar14 + 0x18) != 5) {
                  return uVar3;
                }
                uVar7 = (uint)*(undefined8 *)(lVar14 + (ulong)*(byte *)(uVar9 + 0xa0) * 8 + 0x48);
                uVar8 = (*(byte *)(lVar14 + 0x45) & 0xaaaaaaaa) >> 1 |
                        (*(byte *)(lVar14 + 0x45) & 0x55555555) << 1;
                uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                uVar12 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
                uVar8 = uVar7 & 0xff;
                if (uVar12 != 3) {
                  uVar8 = uVar7 & 0xffff;
                }
                uVar1 = uVar7 & 1;
                if (uVar12 != 0) {
                  uVar1 = uVar8;
                }
                if (uVar12 < 5) {
                  uVar7 = uVar1;
                }
                uVar7 = uVar7 << 3;
                lVar14 = 0xff;
              }
              else {
                if (iVar4 != 0x85) {
                  if (iVar4 != 0x86) {
                    return uVar3;
                  }
                  goto LAB_109f43aa8;
                }
LAB_109f43b74:
                if (iVar11 != 0) {
                  return uVar3;
                }
                lVar14 = **(long **)(uVar9 + 0x98);
                if (*(int *)(lVar14 + 0x18) != 5) {
                  return uVar3;
                }
                uVar7 = (uint)*(undefined8 *)(lVar14 + (ulong)*(byte *)(uVar9 + 0xa0) * 8 + 0x48);
                uVar8 = (*(byte *)(lVar14 + 0x45) & 0xaaaaaaaa) >> 1 |
                        (*(byte *)(lVar14 + 0x45) & 0x55555555) << 1;
                uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                uVar12 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
                uVar8 = uVar7 & 0xff;
                if (uVar12 != 3) {
                  uVar8 = uVar7 & 0xffff;
                }
                uVar1 = uVar7 & 1;
                if (uVar12 != 0) {
                  uVar1 = uVar8;
                }
                if (uVar12 < 5) {
                  uVar7 = uVar1;
                }
                uVar7 = uVar7 << 4;
                lVar14 = 0xffff;
              }
              uVar6 = lVar14 << ((ulong)uVar7 & 0x3f);
            }
            else if (iVar4 < 0x184) {
              if (iVar4 - 0x14dU < 2) {
LAB_109f43a80:
                if (iVar11 != 1) {
                  return uVar3;
                }
                uVar6 = (ulong)(*(byte *)(*(long *)(uVar9 + 0x68) + 0x1d) - 1);
              }
              else if (iVar4 == 0x14a) {
                lVar14 = lVar14 + (ulong)(iVar5 * 0x55555555 + 1) * 0x30;
                lVar10 = **(long **)(lVar14 + 0x18);
                if (*(int *)(lVar10 + 0x18) != 5) {
                  return uVar3;
                }
                uVar6 = *(ulong *)(lVar10 + (ulong)*(byte *)(lVar14 + 0x20) * 8 + 0x48);
                uVar8 = (*(byte *)(lVar10 + 0x45) & 0xaaaaaaaa) >> 1 |
                        (*(byte *)(lVar10 + 0x45) & 0x55555555) << 1;
                uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
                uVar9 = uVar6 & 0xffffffff;
                if (uVar8 != 5) {
                  uVar9 = uVar6;
                }
                uVar2 = uVar6 & 0xffff;
                if (uVar8 != 4) {
                  uVar2 = uVar9;
                }
                uVar9 = uVar6 & 1;
                if (uVar8 != 0) {
                  uVar9 = uVar6 & 0xff;
                }
                if (uVar8 < 4) {
                  uVar2 = uVar9;
                }
                uVar6 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
              }
              else if (iVar4 != 0x183) {
                return uVar3;
              }
            }
            else {
              uVar6 = uVar3 & 0xffffffff;
              if ((iVar4 != 0x184) && (uVar6 = 0xff, iVar4 != 0x186)) {
                if (iVar4 != 0x1c0) {
                  return uVar3;
                }
                goto LAB_109f43a80;
              }
            }
          }
LAB_109f43c40:
          uVar15 = uVar6 | uVar15;
          if (uVar15 == uVar3) {
            return uVar3;
          }
        }
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != param_1 + 8);
    }
  }
  return uVar15;
}



/* Entry: 109f43d14; end: 109f43ecb;  */

undefined4 * FUN_109f43d14(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar3;
  if (uVar3 < 0xffffffe8) {
    uVar3 = uVar3 + 0x18;
    if (*(uint *)(param_1 + 0x2c) < uVar3) {
      uVar2 = *(uint *)(param_1 + 0x2c) << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      if (uVar2 < 0x41) {
        uVar2 = 0x40;
      }
      uVar8 = (ulong)uVar2;
      uVar4 = *(ulong *)(param_1 + 0x18);
      if (uVar4 == 0x11386a228) {
        _malloc();
        if (uVar8 != 0) {
          _memcpy();
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(ulong *)(param_1 + 0x20) = uVar8;
          goto LAB_109f43df0;
        }
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x20);
        if (uVar4 == 0) {
          _realloc(uVar5,uVar8);
        }
        else if (uVar5 == 0) {
          FUN_109f658b0(uVar4,uVar8);
          uVar5 = uVar4;
        }
        else {
          FUN_109f6595c(uVar5,uVar8);
        }
        if (uVar5 != 0) {
          *(ulong *)(param_1 + 0x20) = uVar5;
          uVar7 = (ulong)*(uint *)(param_1 + 0x28);
          uVar8 = uVar5;
LAB_109f43df0:
          *(uint *)(param_1 + 0x2c) = uVar2;
          goto LAB_109f43df4;
        }
      }
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x20);
      if (uVar8 != 0) {
LAB_109f43df4:
        puVar6 = (undefined4 *)(uVar8 + uVar7);
        *(uint *)(param_1 + 0x28) = uVar3;
        goto LAB_109f43dfc;
      }
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_109f43dfc:
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x44);
  *puVar6 = 0;
  puVar6[1] = uVar1 >> 2;
  uVar3 = uVar1 + 4;
  if (uVar2 < uVar3) {
    uVar2 = uVar2 << 1;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    if (uVar2 < 0x41) {
      uVar2 = 0x40;
    }
    uVar8 = (ulong)uVar2;
    uVar4 = *(ulong *)(param_1 + 0x30);
    if (uVar4 == 0x11386a228) {
      _malloc();
      _memcpy();
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar7 = uVar8;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x38);
      if (uVar4 == 0) {
        _realloc(uVar7,uVar8);
      }
      else if (uVar7 == 0) {
        FUN_109f658b0(uVar4,uVar8);
        uVar7 = uVar4;
      }
      else {
        FUN_109f6595c(uVar7,uVar8);
      }
    }
    *(ulong *)(param_1 + 0x38) = uVar7;
    *(uint *)(param_1 + 0x44) = uVar2;
    uVar1 = *(uint *)(param_1 + 0x40);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(uVar7 + uVar1) = 0;
  return puVar6;
}



/* Entry: 109f43ecc; end: 109f44287;  */

uint FUN_109f43ecc(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  lVar2 = 0;
  FUN_109f6695c(0,0x109f65648,FUN_109f65684);
  plVar13 = *(long **)(param_1 + 0x178);
  for (plVar11 = (long *)**(long **)(param_1 + 0x178); plVar11 != (long *)0x0;
      plVar11 = (long *)*plVar11) {
    lVar12 = plVar13[6];
    if (lVar12 != 0) {
      do {
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 != 0) {
          do {
            plVar11 = *(long **)(lVar12 + 0x20);
            for (plVar9 = (long *)**(long **)(lVar12 + 0x20); plVar9 != (long *)0x0;
                plVar9 = (long *)*plVar9) {
              if ((*(int *)(plVar11 + 3) == 1) && (*(int *)(plVar11 + 5) == 0)) {
                lVar10 = plVar11[7];
                uVar3 = *(ulong *)(lVar10 + 0x20);
                if ((((uVar3 & 0x60000) == 0) ||
                    (plVar14 = plVar11, FUN_109f44374(), (int)plVar14 != 0)) &&
                   (((((uint)uVar3 >> 0x13 & 1) == 0 ||
                     (*(char *)(*(long *)(lVar10 + 0x10) + 4) == '\x12')) ||
                    (plVar14 = plVar11, FUN_109f44374(), (int)plVar14 != 0)))) {
                  do {
                    lVar4 = lVar10;
                    (**(code **)(lVar2 + 0x10))(lVar10);
                    lVar5 = lVar2;
                    FUN_109f66e48(lVar2,lVar4,lVar10,0);
                    if (lVar5 != 0) {
                      *(long *)(lVar5 + 8) = lVar10;
                    }
                    lVar10 = *(long *)(lVar10 + 0x80);
                  } while (lVar10 != 0);
                  plVar9 = (long *)*plVar11;
                }
              }
              plVar11 = plVar9;
            }
            FUN_109ecc434();
          } while (lVar12 != 0);
          plVar11 = (long *)*plVar13;
        }
        plVar9 = (long *)*plVar11;
        plVar13 = plVar11;
        while( true ) {
          plVar11 = plVar9;
          if (plVar11 == (long *)0x0) goto LAB_109f43f34;
          lVar12 = plVar13[6];
          if (lVar12 != 0) break;
          plVar9 = (long *)*plVar11;
          plVar13 = plVar11;
        }
      } while( true );
    }
    plVar13 = plVar11;
  }
LAB_109f43f34:
  if ((param_2 & 0xfffbffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    FUN_109f44288(uVar3,param_2,lVar2,param_3);
  }
  if (((uint)param_2 >> 0x12 & 1) != 0) {
    plVar13 = *(long **)(param_1 + 0x178);
    for (plVar11 = (long *)**(long **)(param_1 + 0x178); plVar11 != (long *)0x0;
        plVar11 = (long *)*plVar11) {
      lVar12 = plVar13[6];
      if (lVar12 != 0) {
        do {
          uVar6 = *(undefined8 *)(lVar12 + 0x58);
          FUN_109f44288(uVar6,0x40000,lVar2,param_3);
          uVar3 = (ulong)((uint)uVar6 | (uint)uVar3);
          plVar13 = (long *)*plVar13;
          plVar11 = (long *)*plVar13;
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_109f440b4;
            lVar12 = plVar13[6];
            if (lVar12 != 0) break;
            plVar13 = plVar11;
            plVar11 = (long *)*plVar11;
          }
        } while( true );
      }
      plVar13 = plVar11;
    }
  }
LAB_109f440b4:
  func_0x000109f66a2c(lVar2,0);
  plVar13 = *(long **)(param_1 + 0x178);
  plVar11 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar11 == (long *)0x0) {
LAB_109f440e4:
      return (uint)uVar3 & 1;
    }
    lVar2 = plVar13[6];
    if (lVar2 != 0) {
      do {
        if ((uVar3 & 1) == 0) {
          uVar8 = 0xfffffff7;
        }
        else {
          plVar11 = *(long **)(param_1 + 0x178);
          for (plVar9 = (long *)**(long **)(param_1 + 0x178); plVar9 != (long *)0x0;
              plVar9 = (long *)*plVar9) {
            lVar12 = plVar11[6];
            if (lVar12 != 0) {
              do {
                lVar12 = *(long *)(lVar12 + 0x30);
                if (lVar12 != 0) {
                  do {
                    plVar14 = *(long **)(lVar12 + 0x20);
                    plVar9 = (long *)*plVar14;
                    if (plVar9 != (long *)0x0) {
                      do {
                        plVar7 = plVar14;
                        plVar1 = (long *)0x0;
                        if (*plVar9 != 0) {
                          plVar1 = plVar9;
                        }
                        do {
                          plVar14 = plVar1;
                          if ((int)plVar7[3] == 4) {
                            if ((((int)plVar7[5] == 0x26f) || ((int)plVar7[5] == 0x54)) &&
                               (*(int *)(*(long *)plVar7[0x13] + 0x2c) == 0)) {
LAB_109f4422c:
                              FUN_109ecb9c0();
                            }
                          }
                          else if ((int)plVar7[3] == 1) {
                            if ((int)plVar7[5] == 0) {
                              uVar8 = *(uint *)(plVar7[7] + 0x20) & 0x1fffff;
                            }
                            else {
                              if ((int)plVar7[5] == 5) {
                                lVar10 = *(long *)plVar7[10];
                                if (lVar10 == 0 || *(int *)(lVar10 + 0x18) != 1) goto LAB_109f44230;
                              }
                              else {
                                lVar10 = *(long *)plVar7[10];
                              }
                              uVar8 = *(uint *)(lVar10 + 0x2c);
                            }
                            if (uVar8 == 0) {
                              *(undefined4 *)((long)plVar7 + 0x2c) = 0;
                              goto LAB_109f4422c;
                            }
                          }
LAB_109f44230:
                          if (plVar14 == (long *)0x0) goto LAB_109f44248;
                          plVar9 = (long *)*plVar14;
                          plVar7 = plVar14;
                          plVar1 = (long *)0x0;
                        } while (plVar9 == (long *)0x0);
                      } while( true );
                    }
LAB_109f44248:
                    FUN_109ecc434();
                  } while (lVar12 != 0);
                  plVar9 = (long *)*plVar11;
                }
                plVar14 = (long *)*plVar9;
                plVar11 = plVar9;
                while( true ) {
                  plVar9 = plVar14;
                  if (plVar9 == (long *)0x0) goto LAB_109f44148;
                  lVar12 = plVar11[6];
                  if (lVar12 != 0) break;
                  plVar14 = (long *)*plVar9;
                  plVar11 = plVar9;
                }
              } while( true );
            }
            plVar11 = plVar9;
          }
LAB_109f44148:
          uVar8 = 3;
        }
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & uVar8;
        plVar13 = (long *)*plVar13;
        plVar11 = (long *)*plVar13;
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_109f440e4;
          lVar2 = plVar13[6];
          if (lVar2 != 0) break;
          plVar13 = plVar11;
          plVar11 = (long *)*plVar11;
        }
      } while( true );
    }
    plVar13 = plVar11;
    plVar11 = (long *)*plVar11;
  } while( true );
}



/* Entry: 109f44288; end: 109f44373;  */

undefined8 FUN_109f44288(long *param_1,uint param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    plVar1 = (long *)0x0;
    if (*plVar3 != 0) {
      plVar1 = plVar3;
    }
    while( true ) {
      plVar3 = plVar1;
      if (((param_2 & 0x1fffff & *(uint *)(param_1 + 4)) != 0) &&
         (((param_4 == (undefined8 *)0x0 || ((code *)*param_4 == (code *)0x0)) ||
          (plVar1 = param_1, (*(code *)*param_4)(param_1,param_4[1]), (int)plVar1 != 0)))) {
        plVar1 = param_1;
        (**(code **)(param_3 + 0x10))(param_1);
        lVar2 = param_3;
        FUN_109f66ba8(param_3,plVar1,param_1);
        if (lVar2 == 0) {
          param_1[4] = param_1[4] & 0xffffffffffe00000;
          lVar2 = *param_1;
          plVar1 = (long *)param_1[1];
          *(long **)(lVar2 + 8) = plVar1;
          *plVar1 = lVar2;
          *param_1 = 0;
          param_1[1] = 0;
          uVar5 = 1;
        }
      }
      if (plVar3 == (long *)0x0) break;
      plVar4 = (long *)*plVar3;
      plVar1 = (long *)0x0;
      param_1 = plVar3;
      if ((plVar4 != (long *)0x0) && (plVar1 = (long *)0x0, *plVar4 != 0)) {
        plVar1 = plVar4;
      }
    }
  }
  return uVar5;
}



/* Entry: 109f44374; end: 109f443fb;  */

undefined8 FUN_109f44374(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  do {
    if (lVar2 == param_1 + 0x88) {
      return 0;
    }
    uVar1 = *(ulong *)(lVar2 + -8);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(uVar1 + 0x18) == 4) {
        if ((*(int *)(uVar1 + 0x28) != 0x26f) && (*(int *)(uVar1 + 0x28) != 0x54)) {
          return 1;
        }
        if ((ulong *)(lVar2 + -8) != (ulong *)(uVar1 + 0x80)) {
          return 1;
        }
      }
      else if ((*(int *)(uVar1 + 0x18) != 1) || (FUN_109f44374(), (uVar1 & 1) != 0)) {
        return 1;
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Entry: 109f443fc; end: 109f4459b;  */

/* WARNING: Removing unreachable block (ram,0x000109f4453c) */
/* WARNING: Removing unreachable block (ram,0x000109f4455c) */
/* WARNING: Removing unreachable block (ram,0x000109f44568) */

long FUN_109f443fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_109f204b8(param_1,3);
  lVar2 = *(long *)(param_1 + 0x30);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (**(long **)(lVar2 + 0x20) != 0) break;
    FUN_109ecc3f8();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000109f44480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e47cbc0)[*(uint *)(*(long **)(lVar2 + 0x20) + 3)] * 4 +
            0x109f44484))();
  return lVar1;
}



/* Entry: 109f4459c; end: 109f450bf;  */

undefined8 FUN_109f4459c(ulong *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar8 = (ulong *)param_1[2];
  while( true ) {
    if (puVar8 == param_1 + 1) {
      return 1;
    }
    uVar10 = puVar8[-1];
    if ((uVar10 & 1) == 0) {
      if (*(int *)(uVar10 + 0x18) == 8) {
        uVar10 = puVar8[-2];
      }
      else {
        uVar10 = *(ulong *)(uVar10 + 0x10);
      }
    }
    else {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffffffe) + 8);
      uVar10 = 0;
      if (*(long *)(uVar11 + 8) != 0) {
        uVar10 = uVar11;
      }
    }
    if ((((*(int *)(uVar10 + 0x40) != 0) && (*(long *)(uVar10 + 0x60) == 0)) ||
        (*(uint *)(uVar10 + 0x80) < *(uint *)(*(long *)(*param_1 + 0x10) + 0x80))) ||
       (*(uint *)(*(long *)(*param_1 + 0x10) + 0x84) < *(uint *)(uVar10 + 0x84))) break;
    puVar8 = (ulong *)puVar8[1];
  }
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + 0x7c);
  if (param_2[2] == 0) {
    FUN_109f3c2b8();
    param_2[2] = lVar3;
    puVar4 = (undefined8 *)
             ((ulong)(((uint)((ulong)uVar1 + 0x1f >> 3) & 0x3ffffffc) + 0x3f) & 0x7ffffff0);
    _malloc();
    puVar6 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[4] = 0;
      puVar6 = puVar4 + 6;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
    }
    param_2[1] = (long)puVar6;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  _bzero();
  uVar1 = *(uint *)(*(long *)(*param_1 + 0x10) + 0x40);
  puVar8 = (ulong *)param_2[2];
  uVar10 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
  *(uint *)(param_2[1] + uVar10) = *(uint *)(param_2[1] + uVar10) | 1 << (ulong)(uVar1 & 0x1f);
  FUN_109f3c390(puVar8,*(undefined1 *)((long)param_1 + 0x1c),*(undefined1 *)((long)param_1 + 0x1d));
  uVar11 = (ulong)(*(int *)(*(long *)(*param_1 + 0x10) + 0x40) << 2 | 1);
  uVar10 = uVar11;
  (*(code *)puVar8[9])(uVar11);
  func_0x000109f650c0(puVar8 + 8,uVar10,uVar11,param_1);
  puVar13 = (ulong *)param_1[2];
  while (puVar12 = puVar13, puVar9 = puVar12 + -1, puVar9 != param_1) {
    puVar14 = puVar12 + 1;
    puVar13 = (ulong *)*puVar14;
    uVar10 = puVar12[-1];
    if ((uVar10 & 1) == 0) {
      if (*(int *)(uVar10 + 0x18) == 8) {
        uVar10 = puVar12[-2];
      }
      else {
        uVar10 = *(ulong *)(uVar10 + 0x10);
      }
    }
    else {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffffffe) + 8);
      uVar10 = 0;
      if (*(long *)(uVar11 + 8) != 0) {
        uVar10 = uVar11;
      }
    }
    if ((uVar10 != *(ulong *)(*param_1 + 0x10)) &&
       (puVar5 = puVar8, FUN_109f3c620(), puVar5 != param_1)) {
      uVar10 = *puVar9;
      if ((((uVar10 & 1) == 0) &&
          ((*(int *)(*param_1 + 0x18) == 1 && (*(int *)(uVar10 + 0x18) == 1)))) &&
         (*(int *)(uVar10 + 0x28) != 5)) {
        puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(*param_2 + 0x20) + 0x18);
        FUN_109f6600c(puVar6,0xa0,8);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[0x11] = 0;
          puVar6[0x10] = 0;
          puVar6[0x13] = 0;
          puVar6[0x12] = 0;
          puVar6[0xd] = 0;
          puVar6[0xc] = 0;
          puVar6[0xf] = 0;
          puVar6[0xe] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[0xb] = 0;
          puVar6[10] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
        }
        *(undefined4 *)(puVar6 + 3) = 1;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[10] = 0;
        uVar10 = *param_1;
        uVar2 = *(undefined4 *)(uVar10 + 0x2c);
        *(undefined4 *)(puVar6 + 5) = 5;
        *(undefined4 *)((long)puVar6 + 0x2c) = uVar2;
        uVar7 = *(undefined8 *)(uVar10 + 0x30);
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = uVar7;
        puVar6[7] = 0;
        puVar6[10] = puVar5;
        FUN_109ef9984();
        *(int *)(puVar6 + 0xb) = (int)uVar10;
        puVar5 = puVar6 + 0x10;
        FUN_109ecb048(puVar6,puVar5,*(undefined1 *)((long)param_1 + 0x1c),
                      *(undefined1 *)((long)param_1 + 0x1d));
        FUN_109ecb4f0(2,*puVar9,puVar6);
        uVar10 = *puVar9;
      }
      if ((uVar10 & 1) == 0) {
        uVar10 = *puVar12;
        puVar9 = (ulong *)puVar12[1];
        *(ulong **)(uVar10 + 8) = puVar9;
        *puVar9 = uVar10;
      }
      else {
        puVar12 = (ulong *)((uVar10 & 0xfffffffffffffffe) + 0x28);
        uVar11 = *puVar12;
        puVar14 = (ulong *)((uVar10 & 0xfffffffffffffffe) + 0x30);
        puVar9 = (ulong *)*puVar14;
        *(ulong **)(uVar11 + 8) = puVar9;
        *puVar9 = uVar11;
      }
      *puVar12 = 0;
      puVar12[2] = (ulong)puVar5;
      puVar5 = puVar5 + 1;
      uVar10 = *puVar5;
      *puVar14 = (ulong)puVar5;
      *puVar12 = uVar10;
      *(ulong **)(uVar10 + 8) = puVar12;
      *puVar5 = (ulong)puVar12;
    }
  }
  return 1;
}



/* Entry: 109f450c0; end: 109f45263;  */

undefined8 FUN_109f450c0(long param_1,long param_2,long param_3)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  
  if (*(int *)(param_1 + 0x18) == 5) {
    if (*(short *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_1 + 0x40) * 2) == 1) {
      return 0;
    }
    *(undefined2 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_1 + 0x40) * 2) = 1;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  if ((int)uVar7 < 0x110) {
    uVar5 = uVar7 - 0x87;
    if (uVar5 < 0x12) {
      uVar2 = 1 << (ulong)(uVar5 & 0x1f);
      if ((uVar2 & 0x780) != 0) {
        uVar5 = 0x1ce;
        goto LAB_109f451d0;
      }
      if ((uVar2 & 0x3c000) != 0) {
        uVar5 = 0x1cd;
        goto LAB_109f451d0;
      }
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x19U) != 0) {
        uVar5 = 0x1cc;
        goto LAB_109f451d0;
      }
    }
    if (uVar7 - 0x22 < 4) {
      uVar5 = 0x1d2;
      goto LAB_109f451d0;
    }
    if (uVar7 - 0x1e < 3) {
      uVar5 = 0x1d1;
      goto LAB_109f451d0;
    }
  }
  else if ((int)uVar7 < 0x17e) {
    if (uVar7 - 0x115 < 4) {
      uVar5 = 0x1d0;
      goto LAB_109f451d0;
    }
    if (uVar7 - 0x110 < 3) {
      uVar5 = 0x1ca;
      goto LAB_109f451d0;
    }
  }
  else {
    if (uVar7 - 0x183 < 4) {
      uVar5 = 0x1cf;
      goto LAB_109f451d0;
    }
    if (uVar7 - 0x17e < 3) {
      uVar5 = 0x1cb;
      goto LAB_109f451d0;
    }
  }
  uVar5 = uVar7 & 0xffff;
LAB_109f451d0:
  plVar6 = (long *)(param_3 + (ulong)uVar5 * 0x18);
  if ((int)plVar6[1] != 0) {
    uVar3 = (ulong)(byte)(&UNK_110b78540)[(ulong)uVar7 * 0x68];
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar7 = 0;
      plVar8 = (long *)(param_1 + 0x68);
      do {
        uVar7 = uVar7 * (int)plVar6[1];
        if (*plVar6 != 0) {
          uVar7 = uVar7 + *(ushort *)
                           (*plVar6 +
                           (ulong)*(ushort *)
                                   (*(long *)(param_2 + 8) + (ulong)*(uint *)(*plVar8 + 0x18) * 2) *
                           2);
        }
        plVar8 = plVar8 + 6;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar4 = (ulong)uVar7;
    }
    sVar1 = *(short *)(plVar6[2] + uVar4 * 2);
    if (*(short *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_1 + 0x48) * 2) != sVar1) {
      *(short *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_1 + 0x48) * 2) = sVar1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 109f45264; end: 109f460c3;  */

/* WARNING: Possible PIC construction at 0x000109f45f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f45f28) */

undefined **
FUN_109f45264(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ushort uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  byte *pbVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  undefined *puVar21;
  double dVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  byte *pbVar26;
  undefined **ppuVar27;
  ulong uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  ulong *puVar31;
  undefined **unaff_x26;
  int iVar32;
  byte *unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined1 auStack_e0 [8];
  byte *pbStack_d8;
  uint uStack_cc;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  byte abStack_78 [16];
  long lStack_68;
  
  puVar34 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar27 = param_1;
  ppuVar9 = param_2;
  ppuVar10 = param_3;
  ppuVar33 = param_4;
  ppuVar30 = param_5;
  ppuVar11 = param_6;
  if (((long)*(short *)((long)param_2 + 0x16) == -1) ||
     (ppuVar27 = param_3, (**(code **)(param_1[4] + (long)*(short *)((long)param_2 + 0x16) * 8))(),
     (int)ppuVar27 != 0)) {
    uVar16 = *(uint *)(param_2 + 1);
    if ((uVar16 >> 3 & 1) != 0) {
      uVar12 = *(ushort *)((long)param_3 + 0x2c);
      bVar19 = *(byte *)((long)param_3 + 0x4d);
      if (((bVar19 == 0x10 && (uVar12 >> 3 & 1) != 0) || (bVar19 == 0x20 && (uVar12 >> 3 & 2) != 0))
         || ((bVar19 == 0x40 && ((uVar12 >> 5 & 1) != 0)))) goto LAB_109f454c0;
    }
    if ((uVar16 >> 4 & 1) != 0) {
      bVar19 = *(byte *)((long)param_3 + 0x4d);
      if (((bVar19 == 0x10 && (*(ushort *)((long)param_3 + 0x2c) >> 3 & 0x40) != 0) ||
          ((uVar20 = *(ushort *)((long)param_3 + 0x2c) >> 3 & 0x1ff, bVar19 == 0x20 &&
           ((uVar20 >> 7 & 1) != 0)))) || ((bVar19 == 0x40 && (0xff < uVar20)))) goto LAB_109f454c0;
    }
    if ((uVar16 >> 5 & 1) != 0) {
      uVar12 = *(ushort *)((long)param_3 + 0x2c);
      bVar19 = *(byte *)((long)param_3 + 0x4d);
      if (((bVar19 == 0x10) && ((uVar12 >> 6 & 1) != 0)) ||
         (((bVar19 == 0x20 && ((uVar12 >> 7 & 1) != 0)) ||
          ((bVar19 == 0x40 && ((uVar12 >> 8 & 1) != 0)))))) goto LAB_109f454c0;
    }
    uVar20 = *(uint *)(param_3 + 5);
    uVar13 = (ulong)uVar20;
    uVar4 = uVar16 >> 0x10 & 0x1fff;
    if (uVar4 < 0x1ca) {
      if (uVar4 == uVar20) {
LAB_109f45464:
        if (((char)*(byte *)((long)param_2 + 4) < '\x01') ||
           (*(byte *)((long)param_3 + 0x4d) == *(byte *)((long)param_2 + 4))) {
          if ((uVar16 & 1) == 0) {
            bVar19 = *(byte *)param_6;
          }
          else {
            bVar19 = 1;
          }
          *(byte *)param_6 = bVar19 & 1;
          if (((*(ushort *)((long)param_3 + 0x2c) & 1) == 0) ||
             ((*(byte *)(param_2 + 1) >> 2 & 1) != 0)) {
            bVar18 = *(byte *)((long)param_6 + 1);
          }
          else {
            bVar18 = 1;
          }
          *(byte *)((long)param_6 + 1) = bVar18 & 1;
          if ((bVar18 & 1 & bVar19) == 0) {
            if (((uint)param_4 != 0) && ((&UNK_110b78541)[uVar13 * 0x68] != '\0')) {
              uVar28 = 0;
              do {
                if (uVar28 != *(byte *)((long)param_5 + uVar28)) goto LAB_109f454c0;
                uVar28 = uVar28 + 1;
              } while (((ulong)param_4 & 0xffffffff) != uVar28);
            }
            if (*(byte *)((long)param_2 + 0xc) < 8) {
              ppuVar25 = (undefined **)
                         (ulong)(*(byte *)((long)param_6 + 2) >>
                                 (ulong)(*(byte *)((long)param_2 + 0xc) & 0x1f) & 1);
            }
            else {
              ppuVar25 = (undefined **)0x0;
            }
            ppuVar29 = (undefined **)0x1;
            if ((&UNK_110b78540)[uVar13 * 0x68] != '\0') {
              ppuVar30 = (undefined **)0x0;
              pbVar26 = (byte *)((long)param_2 + 0xe);
              ppuStack_c0 = param_3 + 10;
              ppuStack_b8 = param_6 + 4;
              ppuStack_b0 = param_3 + 0xe;
              ppuVar33 = param_3 + 0xd;
              ppuStack_c8 = param_6 + 8;
              do {
                unaff_x28 = (undefined **)&UNK_10e47cbcc;
                ppuVar24 = &PTR_DAT_110b78538;
                param_7 = (undefined **)0x30;
                ppuVar11 = (undefined **)0x68;
                ppuVar10 = (undefined **)0x28;
                lVar14 = *(long *)(param_6[3] + 0x18);
                uVar16 = (uint)ppuVar25;
                if ((undefined **)0x1 < ppuVar30) {
                  uVar16 = 0;
                }
                unaff_x27 = (byte *)(ulong)(uVar16 ^ (uint)ppuVar30);
                uVar16 = (uint)param_4;
                ppuVar29 = param_5;
                if (unaff_x27[uVar13 * 0x68 + 0x110b78548] != 0) {
                  uVar16 = (uint)unaff_x27[uVar13 * 0x68 + 0x110b78548];
                  ppuVar29 = unaff_x28;
                }
                param_2 = (undefined **)(ulong)uVar16;
                if (uVar16 != 0) {
                  pbVar17 = abStack_78;
                  ppuVar23 = param_2;
                  do {
                    *pbVar17 = *(byte *)((long)ppuStack_b0 +
                                        (ulong)*(byte *)ppuVar29 + (long)unaff_x27 * 0x30);
                    ppuVar23 = (undefined **)((long)ppuVar23 + -1);
                    ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                    pbVar17 = pbVar17 + 1;
                  } while (ppuVar23 != (undefined **)0x0);
                }
                unaff_x26 = (undefined **)
                            (lVar14 + (ulong)*(ushort *)(pbVar26 + (long)ppuVar30 * 2) * 0x28);
                if (('\0' < (char)*(byte *)((long)unaff_x26 + 4)) &&
                   (ppuVar33[(long)unaff_x27 * 6][0x1d] != *(byte *)((long)unaff_x26 + 4)))
                goto LAB_109f454c0;
                if (*(int *)unaff_x26 == 2) {
                  lVar14 = *(long *)ppuVar33[(long)unaff_x27 * 6];
                  if (*(int *)(lVar14 + 0x18) != 5) goto LAB_109f454c0;
                  if (*(int *)(unaff_x26 + 1) == 0x80) {
                    bVar19 = *(byte *)(lVar14 + 0x45);
                    if (bVar19 < 0x10) goto LAB_109f454c0;
                    ppuVar24 = param_2;
                    if (uVar16 != 0) {
                      pbVar17 = abStack_78;
                      do {
                        dVar22 = *(double *)(lVar14 + 0x48 + (ulong)*pbVar17 * 8);
                        if (bVar19 != 0x40) {
                          fVar38 = SUB84(dVar22,0);
                          if (bVar19 != 0x20) {
                            fVar37 = (float)(((uint)fVar38 & 0x7fff) << 0xd) * 5.192297e+33;
                            if (65536.0 <= fVar37) {
                              fVar37 = (float)((uint)fVar37 | 0x7f800000);
                            }
                            fVar38 = (float)((uint)fVar37 | ((uint)fVar38 >> 0xf) << 0x1f);
                          }
                          dVar22 = (double)fVar38;
                        }
                        if (dVar22 != (double)unaff_x26[2]) goto LAB_109f454c0;
                        param_2 = (undefined **)((long)param_2 + -1);
                        pbVar17 = pbVar17 + 1;
                        ppuVar24 = param_2;
                      } while (param_2 != (undefined **)0x0);
                    }
                  }
                  else {
                    ppuVar24 = param_2;
                    if (uVar16 != 0) {
                      uVar16 = (*(byte *)(lVar14 + 0x45) & 0xaaaaaaaa) >> 1 |
                               (*(byte *)(lVar14 + 0x45) & 0x55555555) << 1;
                      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
                      pbVar17 = abStack_78;
                      do {
                        uVar13 = *(ulong *)(lVar14 + 0x48 + (ulong)*pbVar17 * 8);
                        uVar20 = (uint)LZCOUNT((uVar16 >> 4 | (uVar16 & 0xf0f0f0f) << 4) << 0x18);
                        if (uVar20 < 4) {
                          if (uVar20 == 0) {
                            uVar13 = uVar13 & 1;
                          }
                          else {
                            uVar13 = uVar13 & 0xff;
                          }
                        }
                        else {
                          uVar28 = uVar13 & 0xffffffff;
                          if (uVar20 != 5) {
                            uVar28 = uVar13;
                          }
                          uVar13 = uVar13 & 0xffff;
                          if (uVar20 != 4) {
                            uVar13 = uVar28;
                          }
                        }
                        param_2 = ppuVar24;
                        if ((((ulong)unaff_x26[2] ^ uVar13) &
                            0xffffffffffffffffU >>
                            ((ulong)-(uint)*(byte *)((long)ppuVar33[(long)unaff_x27 * 6] + 0x1d) &
                            0x3f)) != 0) goto LAB_109f454c0;
                        ppuVar24 = (undefined **)((long)ppuVar24 + -1);
                        pbVar17 = pbVar17 + 1;
                      } while (ppuVar24 != (undefined **)0x0);
                    }
                  }
                }
                else if (*(int *)unaff_x26 == 1) {
                  bVar19 = *(byte *)(unaff_x26 + 1);
                  if ((*(uint *)((long)param_6 + 4) >> (ulong)(bVar19 & 0x1f) & 1) == 0) {
                    if (((char)bVar19 < '\0') &&
                       (*(int *)(*(long *)ppuVar33[(long)unaff_x27 * 6] + 0x18) != 5))
                    goto LAB_109f454c0;
                    uStack_cc = (uint)ppuVar25;
                    pbStack_d8 = pbVar26;
                    ppuStack_a8 = ppuVar30;
                    if ((long)*(short *)(unaff_x26 + 2) != -1) {
                      ppuVar27 = (undefined **)param_6[100];
                      ppuVar9 = param_3;
                      (**(code **)(param_1[5] + (long)*(short *)(unaff_x26 + 2) * 8))
                                (ppuVar27,param_3,unaff_x27,param_2,abStack_78);
                      param_7 = (undefined **)0x30;
                      ppuVar11 = (undefined **)0x68;
                      ppuVar10 = (undefined **)0x28;
                      unaff_x28 = (undefined **)&UNK_10e47cbcc;
                      ppuVar25 = (undefined **)(ulong)uStack_cc;
                      ppuVar30 = ppuStack_a8;
                      if ((int)ppuVar27 == 0) goto LAB_109f454c0;
                    }
                    ppuVar9 = (undefined **)(ulong)*(uint *)((long)unaff_x26 + 0xc);
                    if (*(uint *)((long)unaff_x26 + 0xc) != 0) {
                      ppuVar27 = ppuStack_c0 + (long)unaff_x27 * 6;
                      puStack_98 = ppuVar27[1];
                      puStack_a0 = *ppuVar27;
                      puStack_88 = ppuVar27[3];
                      puStack_90 = ppuVar27[2];
                      ppuVar27 = &puStack_a0;
                      FUN_109f460c4();
                      param_7 = (undefined **)0x30;
                      ppuVar11 = (undefined **)0x68;
                      ppuVar10 = (undefined **)0x28;
                      unaff_x28 = (undefined **)&UNK_10e47cbcc;
                      ppuVar25 = (undefined **)(ulong)uStack_cc;
                      ppuVar30 = ppuStack_a8;
                      if ((int)ppuVar27 == 0) goto LAB_109f454c0;
                    }
                    ppuVar10 = (undefined **)0x0;
                    *(uint *)((long)param_6 + 4) =
                         1 << (ulong)(*(byte *)(unaff_x26 + 1) & 0x1f) |
                         *(uint *)((long)param_6 + 4);
                    ppuVar30 = ppuStack_b8 + ((ulong)*(byte *)(unaff_x26 + 1) & 0x7f) * 6;
                    ppuVar11 = ppuStack_c0 + (long)unaff_x27 * 6;
                    puVar21 = *ppuVar11;
                    puVar41 = ppuVar11[3];
                    puVar39 = ppuVar11[2];
                    ppuVar30[1] = ppuVar11[1];
                    *ppuVar30 = puVar21;
                    ppuVar30[3] = puVar41;
                    ppuVar30[2] = puVar39;
                    ppuVar11 = ppuStack_c8;
                    do {
                      if (ppuVar10 < param_2) {
                        bVar19 = abStack_78[(long)ppuVar10];
                      }
                      else {
                        bVar19 = 0;
                      }
                      *(byte *)(ppuVar11 + ((ulong)*(byte *)(unaff_x26 + 1) & 0x7f) * 6) = bVar19;
                      ppuVar10 = (undefined **)((long)ppuVar10 + 1);
                      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                      ppuVar30 = ppuStack_a8;
                      pbVar26 = pbStack_d8;
                      ppuVar24 = param_2;
                    } while (ppuVar10 != (undefined **)0x10);
                  }
                  else {
                    if (ppuStack_b8[((ulong)bVar19 & 0x7f) * 6 + 3] != ppuVar33[(long)unaff_x27 * 6]
                       ) goto LAB_109f454c0;
                    ppuVar24 = param_2;
                    if (uVar16 != 0) {
                      ppuVar29 = ppuStack_b8 + ((ulong)bVar19 & 0x7f) * 6 + 4;
                      pbVar17 = abStack_78;
                      do {
                        if (*(byte *)ppuVar29 != *pbVar17) goto LAB_109f454c0;
                        param_2 = (undefined **)((long)param_2 + -1);
                        ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                        pbVar17 = pbVar17 + 1;
                        ppuVar24 = param_2;
                      } while (param_2 != (undefined **)0x0);
                    }
                  }
                }
                else {
                  ppuVar10 = *(undefined ***)ppuVar33[(long)unaff_x27 * 6];
                  if (*(int *)(ppuVar10 + 3) != 0) goto LAB_109f454c0;
                  ppuVar27 = param_1;
                  ppuStack_a8 = ppuVar30;
                  FUN_109f45264();
                  param_7 = (undefined **)0x30;
                  ppuVar11 = (undefined **)0x68;
                  ppuVar10 = (undefined **)0x28;
                  unaff_x28 = (undefined **)&UNK_10e47cbcc;
                  ppuVar9 = unaff_x26;
                  ppuVar30 = ppuStack_a8;
                  param_2 = &PTR_DAT_110b78538;
                  unaff_x26 = ppuVar25;
                  unaff_x27 = pbVar26;
                  if (((ulong)ppuVar27 & 1) == 0) goto LAB_109f454c0;
                }
                unaff_x28 = (undefined **)&UNK_10e47cbcc;
                param_7 = (undefined **)0x30;
                ppuVar11 = (undefined **)0x68;
                ppuVar10 = (undefined **)0x28;
                ppuVar30 = (undefined **)((long)ppuVar30 + 1);
                uVar13 = (ulong)*(uint *)(param_3 + 5);
              } while (ppuVar30 < (undefined **)(ulong)(byte)(&UNK_110b78540)[uVar13 * 0x68]);
              ppuVar29 = (undefined **)0x1;
              param_2 = ppuVar24;
            }
            goto LAB_109f454c4;
          }
        }
      }
      goto LAB_109f454c0;
    }
    if (0x1cd < uVar4) {
      if (uVar4 < 0x1d0) {
        if (uVar4 == 0x1ce) {
          uVar20 = uVar20 - 0x8e;
        }
        else {
          uVar20 = uVar20 - 0x183;
        }
      }
      else if (uVar4 == 0x1d0) {
        uVar20 = uVar20 - 0x115;
      }
      else {
        if (uVar4 == 0x1d1) {
          uVar20 = uVar20 - 0x1e;
          goto LAB_109f45434;
        }
        uVar20 = uVar20 - 0x22;
      }
joined_r0x000109f45450:
      if (uVar20 < 4) goto LAB_109f45464;
      goto LAB_109f454c0;
    }
    if (uVar4 < 0x1cc) {
      if (uVar4 == 0x1ca) {
        uVar20 = uVar20 - 0x110;
      }
      else {
        uVar20 = uVar20 - 0x17e;
      }
LAB_109f45434:
      if (uVar20 < 3) goto LAB_109f45464;
      goto LAB_109f454c0;
    }
    if (uVar4 != 0x1cc) {
      uVar20 = uVar20 - 0x95;
      goto joined_r0x000109f45450;
    }
    ppuVar29 = (undefined **)0x0;
    if ((uVar20 - 0x87 < 5) && ((1 << (ulong)(uVar20 - 0x87 & 0x1f) & 0x19U) != 0))
    goto LAB_109f45464;
  }
  else {
LAB_109f454c0:
    ppuVar29 = (undefined **)0x0;
  }
LAB_109f454c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar29;
  }
  uVar35 = 0x109f459bc;
  ___stack_chk_fail();
  puVar5 = auStack_e0;
SUB_109f459bc:
  *(undefined ***)(puVar5 + -0x60) = unaff_x28;
  *(byte **)(puVar5 + -0x58) = unaff_x27;
  *(undefined ***)(puVar5 + -0x50) = unaff_x26;
  *(undefined ***)(puVar5 + -0x48) = param_2;
  *(undefined ***)(puVar5 + -0x40) = ppuVar29;
  *(undefined ***)(puVar5 + -0x38) = param_1;
  *(undefined ***)(puVar5 + -0x30) = param_3;
  *(undefined ***)(puVar5 + -0x28) = param_4;
  *(undefined ***)(puVar5 + -0x20) = param_5;
  *(undefined ***)(puVar5 + -0x18) = param_6;
  *(undefined1 **)(puVar5 + -0x10) = puVar34;
  *(undefined8 *)(puVar5 + -8) = uVar35;
  puVar34 = puVar5 + -0x10;
  *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)ppuVar10 == 2) {
    bVar19 = *(byte *)((long)ppuVar10 + 4);
    ppuVar33 = (undefined **)(long)(char)bVar19;
    if (((char)bVar19 < '\x01') && (ppuVar33 = ppuVar30, (char)bVar19 < '\0')) {
      ppuVar33 = (undefined **)
                 (ulong)*(byte *)(*(long *)((long)ppuVar11 +
                                           (ulong)(uint)(~(int)(char)bVar19 * 0x30) + 0x38) + 0x1d);
    }
    uVar16 = (uint)ppuVar33;
    if (*(int *)(ppuVar10 + 1) < 6) {
      puVar21 = ppuVar10[2];
      uVar16 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
      if (uVar16 < 4) {
        if (uVar16 == 0) {
          puVar21 = (undefined *)(ulong)(puVar21 != (undefined *)0x0);
          puVar39 = (undefined *)0x0;
          uVar13 = 0;
          puVar41 = (undefined *)0x0;
        }
        else {
          puVar39 = (undefined *)0x0;
          uVar13 = 0;
          puVar41 = (undefined *)0x0;
        }
      }
      else {
        puVar41 = puVar21;
        if (uVar16 == 4) {
          puVar39 = (undefined *)0x0;
          uVar13 = 0;
        }
        else {
          puVar39 = puVar21;
          uVar13 = 0;
          if (uVar16 != 5) {
            uVar13 = (ulong)puVar21 & 0xffffffff00000000;
          }
        }
      }
      ppuVar30 = (undefined **)
                 (uVar13 | (ulong)puVar39 & 0xffff0000 | (ulong)puVar41 & 0xff00 |
                 (ulong)puVar21 & 0xff);
    }
    else if (*(int *)(ppuVar10 + 1) == 6) {
      puVar21 = ppuVar10[2];
      uVar28 = -(ulong)(puVar21 != (undefined *)0x0);
      uVar16 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar13 = 0xffffffff00000000;
      if (puVar21 == (undefined *)0x0) {
        uVar13 = 0;
      }
      uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
      uVar8 = 0;
      if (uVar16 != 5) {
        uVar8 = uVar13;
      }
      uVar13 = 0;
      if (uVar16 != 4) {
        uVar13 = uVar28;
      }
      uVar15 = 0;
      if (uVar16 != 4) {
        uVar15 = uVar8;
      }
      uVar8 = (ulong)(puVar21 != (undefined *)0x0);
      if (uVar16 != 0) {
        uVar8 = uVar28;
      }
      uVar2 = uVar28;
      if (uVar16 < 4) {
        uVar13 = 0;
        uVar15 = 0;
        uVar28 = 0;
        uVar2 = uVar8;
      }
      ppuVar30 = (undefined **)(uVar15 | uVar13 & 0xffff0000 | uVar28 & 0xff00 | uVar2 & 0xff);
    }
    else {
      ppuVar30 = ppuVar33;
      FUN_109ecc128(ppuVar10[2]);
    }
    puVar7 = *(undefined8 **)ppuVar9[3];
    FUN_109f6600c(puVar7,0x50,8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
    }
    *(undefined4 *)(puVar7 + 3) = 5;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar1 = puVar7 + 5;
    FUN_109ecb048(puVar7,puVar1,1,ppuVar33);
    puVar7[9] = ppuVar30;
    FUN_109ecb4f0(*ppuVar9,ppuVar9[1],puVar7);
    *ppuVar9 = (undefined *)0x3;
    ppuVar9[1] = (undefined *)puVar7;
    puVar31 = (ulong *)ppuVar11[1];
    uVar13 = (ulong)(uint)puVar31[2];
    uVar16 = (uint)puVar31[2] + 2;
    if (*(uint *)((long)puVar31 + 0x14) < uVar16) {
      uVar20 = *(uint *)((long)puVar31 + 0x14) << 1;
      if (uVar20 <= uVar16) {
        uVar20 = uVar16;
      }
      if (uVar20 < 0x41) {
        uVar20 = 0x40;
      }
      uVar28 = (ulong)uVar20;
      uVar8 = *puVar31;
      if (uVar8 == 0x11386a228) {
        _malloc();
        _memcpy();
        *puVar31 = 0;
        puVar31[1] = uVar28;
      }
      else {
        uVar15 = puVar31[1];
        if (uVar8 == 0) {
          _realloc(uVar15,uVar28);
        }
        else if (uVar15 == 0) {
          FUN_109f658b0(uVar8,uVar28);
          uVar15 = uVar8;
        }
        else {
          FUN_109f6595c(uVar15,uVar28);
        }
        puVar31[1] = uVar15;
        uVar13 = (ulong)(uint)puVar31[2];
        uVar28 = uVar15;
      }
      *(uint *)((long)puVar31 + 0x14) = uVar20;
    }
    else {
      uVar28 = puVar31[1];
    }
    *(uint *)(puVar31 + 2) = uVar16;
    *(undefined2 *)(uVar28 + uVar13) = 0;
    param_3 = (undefined **)*puVar1;
    ppuVar9 = (undefined **)ppuVar11[1];
    FUN_109f450c0(param_3,ppuVar9,ppuVar11[2]);
    *ppuVar27 = (undefined *)0x0;
    ppuVar27[1] = (undefined *)0x0;
    ppuVar27[2] = (undefined *)0x0;
    ppuVar27[3] = (undefined *)puVar1;
    ppuVar27[4] = (undefined *)0x0;
    ppuVar27[5] = (undefined *)0x0;
  }
  else if (*(int *)ppuVar10 == 1) {
    lVar14 = 0;
    uVar13 = (ulong)*(byte *)(ppuVar10 + 1) & 0x7f;
    puVar21 = ppuVar11[uVar13 * 6 + 7];
    *ppuVar27 = (undefined *)0x0;
    ppuVar27[1] = (undefined *)0x0;
    ppuVar27[2] = (undefined *)0x0;
    ppuVar27[3] = puVar21;
    puVar21 = ppuVar11[uVar13 * 6 + 8];
    ppuVar27[5] = ppuVar11[uVar13 * 6 + 9];
    ppuVar27[4] = puVar21;
    do {
      *(byte *)((long)ppuVar27 + lVar14 + 0x20) =
           *(byte *)((long)ppuVar11 +
                    (ulong)*(byte *)((long)ppuVar10 + lVar14 + 0x12) + uVar13 * 0x30 + 0x40);
      lVar14 = lVar14 + 1;
      param_3 = ppuVar27;
    } while (lVar14 != 0x10);
  }
  else {
    bVar19 = *(byte *)((long)ppuVar10 + 4);
    ppuVar29 = (undefined **)(long)(char)bVar19;
    if (((char)bVar19 < '\x01') && (ppuVar29 = ppuVar30, (char)bVar19 < '\0')) {
      ppuVar29 = (undefined **)
                 (ulong)*(byte *)(*(long *)((long)ppuVar11 +
                                           (ulong)(uint)(~(int)(char)bVar19 * 0x30) + 0x38) + 0x1d);
    }
    uVar16 = *(uint *)(ppuVar10 + 1) >> 0x10 & 0x1fff;
    uVar13 = (ulong)uVar16;
    *(undefined ***)(puVar5 + -0xa0) = ppuVar27;
    if (0x1c9 < uVar16) {
      iVar32 = (int)ppuVar29;
      if (uVar16 < 0x1ce) {
        if (uVar16 < 0x1cc) {
          if (uVar16 == 0x1ca) {
            if (iVar32 == 0x10) {
              uVar13 = 0x110;
            }
            else if (iVar32 == 0x40) {
              uVar13 = 0x112;
            }
            else {
              uVar13 = 0x111;
            }
          }
          else if (iVar32 == 0x10) {
            uVar13 = 0x17e;
          }
          else if (iVar32 == 0x40) {
            uVar13 = 0x180;
          }
          else {
            uVar13 = 0x17f;
          }
        }
        else {
          if (uVar16 != 0x1cc) {
            uVar20 = iVar32 - 8U >> 3 | iVar32 << 0x1d;
            puVar21 = &UNK_10e47cbdc;
            goto LAB_109f45e30;
          }
          if (iVar32 == 0x10) {
            uVar13 = 0x87;
          }
          else if (iVar32 == 0x40) {
            uVar13 = 0x8b;
          }
          else {
            uVar13 = 0x8a;
          }
        }
      }
      else {
        if (uVar16 < 0x1d0) {
          uVar20 = iVar32 - 8U >> 3 | iVar32 << 0x1d;
          if (uVar16 == 0x1ce) {
            puVar21 = &UNK_10e47cbfc;
          }
          else {
            puVar21 = &UNK_10e47cc1c;
          }
        }
        else if (uVar16 == 0x1d0) {
          uVar20 = iVar32 - 8U >> 3 | iVar32 << 0x1d;
          puVar21 = &UNK_10e47cc3c;
        }
        else {
          if (uVar16 == 0x1d1) {
            if (iVar32 == 0x10) {
              uVar13 = 0x1e;
            }
            else if (iVar32 == 0x40) {
              uVar13 = 0x20;
            }
            else {
              uVar13 = 0x1f;
            }
            goto LAB_109f45e34;
          }
          uVar20 = iVar32 - 8U >> 3 | iVar32 << 0x1d;
          puVar21 = &UNK_10e47cc5c;
        }
LAB_109f45e30:
        uVar13 = (ulong)*(uint *)(puVar21 + (ulong)uVar20 * 4);
      }
    }
LAB_109f45e34:
    uVar16 = (uint)ppuVar33;
    if ((byte)(&UNK_110b78541)[uVar13 * 0x68] != 0) {
      uVar16 = (uint)(byte)(&UNK_110b78541)[uVar13 * 0x68];
    }
    param_3 = (undefined **)ppuVar9[3];
    FUN_109ecaef8();
    *(undefined ***)(puVar5 + -0xa8) = param_3 + 6;
    FUN_109ecb048();
    if (((ulong)*ppuVar11 & 0x100) == 0) {
      uVar12 = *(byte *)(ppuVar10 + 1) >> 1 & 1;
    }
    else {
      uVar12 = 1;
    }
    uVar3 = *(ushort *)((long)param_3 + 0x2c);
    *(ushort *)((long)param_3 + 0x2c) = uVar3 & 0xfffe | uVar12;
    *(ushort *)((long)param_3 + 0x2c) =
         uVar3 & 0xf006 | uVar12 | *(ushort *)((long)param_7 + 0x2c) & 0xff8;
    unaff_x27 = (byte *)(ulong)(byte)(&UNK_110b78540)[uVar13 * 0x68];
    if (unaff_x27 != (byte *)0x0) goto code_r0x000109f45ecc;
    FUN_109ecb4f0(*ppuVar9,ppuVar9[1],param_3);
    *ppuVar9 = (undefined *)0x3;
    ppuVar9[1] = (undefined *)param_3;
    puVar31 = (ulong *)ppuVar11[1];
    uVar13 = (ulong)(uint)puVar31[2];
    uVar16 = (uint)puVar31[2] + 2;
    if (*(uint *)((long)puVar31 + 0x14) < uVar16) {
      uVar20 = *(uint *)((long)puVar31 + 0x14) << 1;
      if (uVar20 <= uVar16) {
        uVar20 = uVar16;
      }
      if (uVar20 < 0x41) {
        uVar20 = 0x40;
      }
      uVar28 = (ulong)uVar20;
      uVar8 = *puVar31;
      ppuVar27 = *(undefined ***)(puVar5 + -0xa0);
      if (uVar8 == 0x11386a228) {
        _malloc();
        _memcpy();
        *puVar31 = 0;
        puVar31[1] = uVar28;
      }
      else {
        uVar15 = puVar31[1];
        if (uVar8 == 0) {
          _realloc(uVar15,uVar28);
        }
        else if (uVar15 == 0) {
          FUN_109f658b0(uVar8,uVar28);
          uVar15 = uVar8;
        }
        else {
          FUN_109f6595c(uVar15,uVar28);
        }
        puVar31[1] = uVar15;
        uVar13 = (ulong)(uint)puVar31[2];
        uVar28 = uVar15;
      }
      *(uint *)((long)puVar31 + 0x14) = uVar20;
    }
    else {
      uVar28 = puVar31[1];
      ppuVar27 = *(undefined ***)(puVar5 + -0xa0);
    }
    *(uint *)(puVar31 + 2) = uVar16;
    *(undefined2 *)(uVar28 + uVar13) = 0;
    ppuVar9 = (undefined **)ppuVar11[1];
    FUN_109f450c0(param_3,ppuVar9,ppuVar11[2]);
    *ppuVar27 = (undefined *)0x0;
    ppuVar27[1] = (undefined *)0x0;
    puVar21 = *(undefined **)(puVar5 + -0xa8);
    ppuVar27[2] = (undefined *)0x0;
    ppuVar27[3] = puVar21;
    ppuVar27[5] = (undefined *)0xf0e0d0c0b0a0908;
    ppuVar27[4] = (undefined *)0x706050403020100;
  }
  uVar16 = (uint)ppuVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x68)) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar33 = (undefined **)(puVar5 + -0xf0);
  ppuVar30 = (undefined **)(puVar5 + -0xf0);
  *(undefined ***)(puVar5 + -0xd0) = ppuVar11;
  *(undefined ***)(puVar5 + -200) = ppuVar27;
  *(undefined1 **)(puVar5 + -0xc0) = puVar34;
  *(code **)(puVar5 + -0xb8) = FUN_109f460c4;
  lVar14 = *(long *)param_3[3];
  if (*(int *)(lVar14 + 0x18) == 4) {
    if (uVar16 != 6) {
      return (undefined **)0x0;
    }
    bVar6 = *(int *)(lVar14 + 0x28) == 0x126 || *(int *)(lVar14 + 0x28) == 0x13d;
    goto LAB_109f4619c;
  }
  if (*(int *)(lVar14 + 0x18) != 0) {
    return (undefined **)0x0;
  }
  uVar20 = *(uint *)(lVar14 + 0x28);
  if (uVar16 == 6) {
    if ((int)uVar20 < 0x14a) {
      if (uVar20 == 0x120) goto LAB_109f46160;
      if (uVar20 == 0x146) {
        uVar36 = *(undefined8 *)(lVar14 + 0x58);
        uVar35 = *(undefined8 *)(lVar14 + 0x50);
        uVar42 = *(undefined8 *)(lVar14 + 0x68);
        uVar40 = *(undefined8 *)(lVar14 + 0x60);
        goto LAB_109f4617c;
      }
    }
    else if ((uVar20 == 0x152) || (uVar20 == 0x14a)) {
LAB_109f46160:
      uVar35 = *(undefined8 *)(lVar14 + 0x50);
      uVar40 = *(undefined8 *)(lVar14 + 0x68);
      uVar36 = *(undefined8 *)(lVar14 + 0x60);
      *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(lVar14 + 0x58);
      *(undefined8 *)(puVar5 + -0xf0) = uVar35;
      *(undefined8 *)(puVar5 + -0xd8) = uVar40;
      *(undefined8 *)(puVar5 + -0xe0) = uVar36;
      FUN_109f460c4(puVar5 + -0xf0,6);
      if ((int)ppuVar33 == 0) {
        return ppuVar33;
      }
      uVar36 = *(undefined8 *)(lVar14 + 0x88);
      uVar35 = *(undefined8 *)(lVar14 + 0x80);
      uVar42 = *(undefined8 *)(lVar14 + 0x98);
      uVar40 = *(undefined8 *)(lVar14 + 0x90);
LAB_109f4617c:
      *(undefined8 *)(puVar5 + -0xe8) = uVar36;
      *(undefined8 *)(puVar5 + -0xf0) = uVar35;
      *(undefined8 *)(puVar5 + -0xd8) = uVar42;
      *(undefined8 *)(puVar5 + -0xe0) = uVar40;
      FUN_109f460c4(puVar5 + -0xf0,6);
      return ppuVar30;
    }
  }
  bVar6 = (*(uint *)(&UNK_110b78544 + (ulong)uVar20 * 0x68) & 0x86) == uVar16;
LAB_109f4619c:
  return (undefined **)(ulong)bVar6;
code_r0x000109f45ecc:
  param_2 = param_3 + 10;
  param_4 = (undefined **)&UNK_110b78548;
  if ((byte)(&UNK_110b78548)[(ulong)*(uint *)(param_3 + 5) * 0x68] != 0) {
    uVar16 = (uint)(byte)(&UNK_110b78548)[(ulong)*(uint *)(param_3 + 5) * 0x68];
  }
  ppuVar33 = (undefined **)(ulong)uVar16;
  ppuVar29 = ppuVar10 + 2;
  ppuVar10 = (undefined **)
             (*(long *)(ppuVar11[3] + 0x18) + (ulong)*(ushort *)((long)ppuVar10 + 0xe) * 0x28);
  ppuVar27 = (undefined **)(puVar5 + -0x98);
  uVar35 = 0x109f45f28;
  puVar5 = puVar5 + -0xb0;
  param_6 = ppuVar30;
  param_5 = ppuVar9;
  param_1 = ppuVar11;
  unaff_x26 = param_7;
  unaff_x28 = ppuVar33;
  goto SUB_109f459bc;
}



/* Entry: 109f460c4; end: 109f461af;  */

void FUN_109f460c4(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)&uStack_40;
  lVar3 = **(long **)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x18) == 4) {
    return;
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x28);
  if (param_2 != 6) {
    return;
  }
  if (iVar1 < 0x14a) {
    if (iVar1 != 0x120) {
      if (iVar1 != 0x146) {
        return;
      }
      uStack_38 = *(undefined8 *)(lVar3 + 0x58);
      uStack_40 = *(undefined8 *)(lVar3 + 0x50);
      uStack_28 = *(undefined8 *)(lVar3 + 0x68);
      uStack_30 = *(undefined8 *)(lVar3 + 0x60);
      goto LAB_109f4617c;
    }
  }
  else if ((iVar1 != 0x152) && (iVar1 != 0x14a)) {
    return;
  }
  uStack_38 = *(undefined8 *)(lVar3 + 0x58);
  uStack_40 = *(undefined8 *)(lVar3 + 0x50);
  uStack_28 = *(undefined8 *)(lVar3 + 0x68);
  uStack_30 = *(undefined8 *)(lVar3 + 0x60);
  FUN_109f460c4(&uStack_40,6);
  if (iVar2 == 0) {
    return;
  }
  uStack_38 = *(undefined8 *)(lVar3 + 0x88);
  uStack_40 = *(undefined8 *)(lVar3 + 0x80);
  uStack_28 = *(undefined8 *)(lVar3 + 0x98);
  uStack_30 = *(undefined8 *)(lVar3 + 0x90);
LAB_109f4617c:
  FUN_109f460c4(&uStack_40,6);
  return;
}



/* Entry: 109f461b0; end: 109f46233;  */

void FUN_109f461b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_109ecc0ac();
  lVar3 = param_1[2];
  while (puVar2 = (undefined8 *)(lVar3 + -8), puVar2 != param_1) {
    uVar1 = *(ulong *)(lVar3 + -8);
    lVar3 = *(long *)(lVar3 + 8);
    if (((uVar1 & 1) == 0) && (FUN_109f450c0(uVar1,param_3,param_4), (int)uVar1 != 0)) {
      uVar4 = *puVar2;
      puVar2 = param_2;
      FUN_109f68850();
      *puVar2 = uVar4;
    }
  }
  return;
}



/* Entry: 109f46234; end: 109f467b7;  */

undefined4 FUN_109f46234(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar9 = *(long **)(param_1 + 0x178);
  plVar5 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    lVar12 = plVar9[6];
    if (lVar12 != 0) break;
    plVar9 = plVar5;
    plVar5 = (long *)*plVar5;
  }
  uVar6 = 0;
  do {
    uStack_88 = 0;
    lStack_80 = 0;
    uStack_70 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x18);
    uStack_78 = 0;
    lVar7 = *(long *)(lVar12 + 0x30);
    if (lVar7 == 0) {
LAB_109f463a8:
      uVar4 = 0xfffffff7;
    }
    else {
      lVar10 = lVar7;
      lStack_68 = lVar12;
      FUN_109ecc434();
      bVar1 = false;
      do {
        lVar3 = lVar10;
        plVar13 = *(long **)(lVar7 + 0x20);
        plVar5 = (long *)*plVar13;
        if (plVar5 != (long *)0x0) {
          do {
            plVar2 = (long *)0x0;
            plVar8 = plVar13;
            if (*plVar5 != 0) {
              plVar2 = plVar5;
            }
            do {
              plVar13 = plVar2;
              if ((int)plVar8[3] == 4) {
                lVar7 = plVar8[5];
                if ((int)lVar7 == 0x54) {
                  lVar10 = plVar8[1];
                  if (lVar10 == 0 || *(long *)(lVar10 + 8) == 0) {
                    uVar11 = 0;
                    lVar10 = plVar8[2];
                  }
                  else {
                    uVar11 = 3;
                  }
                  FUN_109ecb9c0(plVar8);
                  uStack_88 = uVar11;
                  lStack_80 = lVar10;
                  func_0x000109f46400(&uStack_88,*(undefined8 *)plVar8[0x13],
                                      *(undefined8 *)plVar8[0x17],
                                      *(undefined4 *)
                                       ((long)plVar8 +
                                       (ulong)(byte)(&UNK_110b671c8)
                                                    [(ulong)*(uint *)(plVar8 + 5) * 0x68] * 4 + 0x50
                                       ),*(undefined4 *)
                                          ((long)plVar8 +
                                          (ulong)(byte)(&UNK_110b671c9)
                                                       [(ulong)*(uint *)(plVar8 + 5) * 0x68] * 4 +
                                          0x50));
                }
                bVar1 = (bool)(bVar1 | (int)lVar7 == 0x54);
              }
              if (plVar13 == (long *)0x0) goto LAB_109f46388;
              plVar5 = (long *)*plVar13;
              plVar2 = (long *)0x0;
              plVar8 = plVar13;
            } while (plVar5 == (long *)0x0);
          } while( true );
        }
LAB_109f46388:
        lVar10 = lVar3;
        FUN_109ecc434();
        lVar7 = lVar3;
      } while (lVar3 != 0);
      if (!bVar1) goto LAB_109f463a8;
      uVar6 = 1;
      uVar4 = 3;
    }
    *(uint *)(lVar12 + 0x84) = *(uint *)(lVar12 + 0x84) & uVar4;
    plVar9 = (long *)*plVar9;
    plVar5 = (long *)*plVar9;
    while( true ) {
      if (plVar5 == (long *)0x0) {
        return uVar6;
      }
      lVar12 = plVar9[6];
      if (lVar12 != 0) break;
      plVar9 = plVar5;
      plVar5 = (long *)*plVar5;
    }
  } while( true );
}



/* Entry: 109f467b8; end: 109f46b43;  */

void FUN_109f467b8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar1 = (undefined8 *)0x30;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 6;
  }
  puStack_60 = (undefined1 *)&puStack_60;
  puStack_58 = (undefined1 *)&puStack_60;
  FUN_109f65b98(puVar1,param_1);
  FUN_109f66314(*param_1);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  lVar7 = param_1[6];
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  lVar7 = param_1[7];
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  plVar8 = (long *)param_1[1];
  if (*plVar8 != 0) {
    do {
      plVar4 = plVar8 + -6;
      FUN_109f65aa4(plVar4);
      plVar8[-6] = (long)(param_1 + -6);
      lVar7 = param_1[-5];
      plVar8[-3] = lVar7;
      param_1[-5] = (long)plVar4;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar4;
      }
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
  }
  plVar8 = (long *)param_1[0x2f];
  if (*plVar8 != 0) {
    plVar4 = param_1 + -6;
    do {
      plVar10 = plVar8 + -6;
      FUN_109f65aa4(plVar10);
      plVar8[-6] = (long)plVar4;
      lVar7 = param_1[-5];
      plVar8[-3] = lVar7;
      param_1[-5] = (long)plVar10;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar10;
      }
      lVar7 = plVar8[5];
      if (lVar7 != 0) {
        lVar3 = lVar7 + -0x30;
        FUN_109f65aa4(lVar3);
        *(long **)(lVar7 + -0x30) = plVar4;
        lVar2 = param_1[-5];
        *(long *)(lVar7 + -0x18) = lVar2;
        param_1[-5] = lVar3;
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      lVar7 = plVar8[6];
      if (lVar7 != 0) {
        lVar3 = lVar7 + -0x30;
        FUN_109f65aa4(lVar3);
        *(long **)(lVar7 + -0x30) = plVar4;
        lVar2 = param_1[-5];
        *(long *)(lVar7 + -0x18) = lVar2;
        param_1[-5] = lVar3;
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
        }
        for (plVar10 = *(long **)(lVar7 + 0x58); *plVar10 != 0; plVar10 = (long *)*plVar10) {
          plVar5 = plVar10 + -6;
          FUN_109f65aa4(plVar5);
          plVar10[-6] = (long)plVar4;
          lVar2 = param_1[-5];
          plVar10[-3] = lVar2;
          param_1[-5] = (long)plVar5;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar5;
          }
        }
        for (plVar10 = *(long **)(lVar7 + 0x30); *plVar10 != 0; plVar10 = (long *)*plVar10) {
          FUN_109f46b44(param_1,plVar10);
        }
        FUN_109f46c10(param_1,*(undefined8 *)(lVar7 + 0x50));
        *(undefined4 *)(lVar7 + 0x84) = 0;
      }
      plVar8 = (long *)*plVar8;
    } while (*plVar8 != 0);
  }
  lVar7 = param_1[0x36];
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  lVar7 = param_1[0x38];
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  lVar7 = param_1[0x3a];
  if (lVar7 != 0) {
    lVar3 = lVar7 + -0x30;
    FUN_109f65aa4(lVar3);
    *(long **)(lVar7 + -0x30) = param_1 + -6;
    lVar2 = param_1[-5];
    *(long *)(lVar7 + -0x18) = lVar2;
    param_1[-5] = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  if ((int)param_1[0x39] != 0) {
    lVar7 = 0;
    uVar9 = 0;
    do {
      lVar2 = *(long *)(param_1[0x3a] + lVar7 + 8);
      if (lVar2 != 0) {
        lVar6 = lVar2 + -0x30;
        FUN_109f65aa4(lVar6);
        *(long **)(lVar2 + -0x30) = param_1 + -6;
        lVar3 = param_1[-5];
        *(long *)(lVar2 + -0x18) = lVar3;
        param_1[-5] = lVar6;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar6;
        }
      }
      lVar2 = *(long *)(param_1[0x3a] + lVar7 + 0x18);
      if (lVar2 != 0) {
        lVar6 = lVar2 + -0x30;
        FUN_109f65aa4(lVar6);
        *(long **)(lVar2 + -0x30) = param_1 + -6;
        lVar3 = param_1[-5];
        *(long *)(lVar2 + -0x18) = lVar3;
        param_1[-5] = lVar6;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar6;
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar9 < *(uint *)(param_1 + 0x39));
  }
  FUN_109f66398(*param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_109f65aa4(puVar1 + -6);
    FUN_109f65ae0(puVar1 + -6);
  }
  return;
}



/* Entry: 109f46b44; end: 109f46c0f;  */

void FUN_109f46b44(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    FUN_109f65b2c(param_1,param_2);
    for (plVar3 = *(long **)(param_2 + 0x20); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109f46b44(param_1,plVar3);
    }
  }
  else {
    if (*(int *)(param_2 + 0x10) != 1) {
      FUN_109f65b2c();
      if (*(long *)(param_2 + 0x90) != 0) {
        lVar4 = *(long *)(param_2 + 0x90) + -0x30;
        FUN_109f65aa4(lVar4);
        FUN_109f65ae0(lVar4);
      }
      *(undefined8 *)(param_2 + 0x90) = 0;
      if (*(long *)(param_2 + 0x98) != 0) {
        lVar4 = *(long *)(param_2 + 0x98) + -0x30;
        FUN_109f65aa4(lVar4);
        FUN_109f65ae0(lVar4);
      }
      *(undefined8 *)(param_2 + 0x98) = 0;
      plVar3 = *(long **)(param_2 + 0x20);
      if (*plVar3 != 0) {
        do {
          FUN_109f6635c(*param_1,plVar3);
          iVar1 = (int)plVar3[3];
          if (iVar1 == 8) {
            for (plVar6 = (long *)plVar3[5]; *plVar6 != 0; plVar6 = (long *)*plVar6) {
              FUN_109f6635c(*param_1,plVar6);
            }
          }
          else if (iVar1 == 4) {
            lVar4 = plVar3[0xf];
            if (lVar4 != 0) {
              lVar5 = lVar4 + -0x30;
              FUN_109f65aa4(lVar5);
              *(undefined8 **)(lVar4 + -0x30) = param_1 + -6;
              lVar2 = param_1[-5];
              *(long *)(lVar4 + -0x18) = lVar2;
              param_1[-5] = lVar5;
              if (lVar2 != 0) {
                *(long *)(lVar2 + 0x10) = lVar5;
              }
            }
          }
          else if (iVar1 == 3) {
            FUN_109f6635c(*param_1,plVar3[0xb]);
          }
          plVar3 = (long *)*plVar3;
        } while (*plVar3 != 0);
      }
      return;
    }
    FUN_109f65b2c(param_1,param_2);
    for (plVar3 = *(long **)(param_2 + 0x48); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109f46b44(param_1,plVar3);
    }
    for (plVar3 = *(long **)(param_2 + 0x68); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109f46b44(param_1,plVar3);
    }
  }
  return;
}



/* Entry: 109f46c10; end: 109f46d27;  */

void FUN_109f46c10(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  FUN_109f65b2c();
  if (*(long *)(param_2 + 0x90) != 0) {
    lVar4 = *(long *)(param_2 + 0x90) + -0x30;
    FUN_109f65aa4(lVar4);
    FUN_109f65ae0(lVar4);
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  if (*(long *)(param_2 + 0x98) != 0) {
    lVar4 = *(long *)(param_2 + 0x98) + -0x30;
    FUN_109f65aa4(lVar4);
    FUN_109f65ae0(lVar4);
  }
  *(undefined8 *)(param_2 + 0x98) = 0;
  plVar3 = *(long **)(param_2 + 0x20);
  if (*plVar3 != 0) {
    do {
      FUN_109f6635c(*param_1,plVar3);
      iVar1 = (int)plVar3[3];
      if (iVar1 == 8) {
        for (plVar6 = (long *)plVar3[5]; *plVar6 != 0; plVar6 = (long *)*plVar6) {
          FUN_109f6635c(*param_1,plVar6);
        }
      }
      else if (iVar1 == 4) {
        lVar4 = plVar3[0xf];
        if (lVar4 != 0) {
          lVar5 = lVar4 + -0x30;
          FUN_109f65aa4(lVar5);
          *(undefined8 **)(lVar4 + -0x30) = param_1 + -6;
          lVar2 = param_1[-5];
          *(long *)(lVar4 + -0x18) = lVar2;
          param_1[-5] = lVar5;
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x10) = lVar5;
          }
        }
      }
      else if (iVar1 == 3) {
        FUN_109f6635c(*param_1,plVar3[0xb]);
      }
      plVar3 = (long *)*plVar3;
    } while (*plVar3 != 0);
  }
  return;
}



/* Entry: 109f46d28; end: 109f46e1b;  */

void FUN_109f46d28(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = param_1;
  while (iVar1 != 3) {
    lVar5 = *(long *)(lVar5 + 0x18);
    iVar1 = *(int *)(lVar5 + 0x10);
  }
  uVar4 = *(uint *)(lVar5 + 0x84);
  if ((uVar4 & 1) == 0) {
    FUN_109ecc784(lVar5);
    uVar4 = *(uint *)(lVar5 + 0x84);
  }
  *(uint *)(lVar5 + 0x84) = uVar4 | 1;
  puVar2 = (undefined8 *)0x60;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar6 = puVar2 + 6;
    puVar2[7] = 0;
    *puVar6 = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
  }
  FUN_109f46e1c(puVar6,param_1);
  *puVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
  *(undefined2 *)(puVar6 + 4) = 0;
  lVar5 = param_1;
  func_0x000109ecc514();
  while (lVar3 = param_1, func_0x000109ecc1a0(), lVar5 != lVar3) {
    FUN_109f46e78(lVar5,puVar6);
    FUN_109ecc588();
  }
  FUN_109f65aa4(puVar6 + -6);
  lVar5 = puVar6[-5];
  while (lVar5 != 0) {
    puVar6[-5] = *(undefined8 *)(lVar5 + 0x18);
    FUN_109f65ae0();
    lVar5 = puVar6[-5];
  }
  if ((code *)puVar6[-2] != (code *)0x0) {
    (*(code *)puVar6[-2])(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar6 + -6);
  return;
}



/* Entry: 109f46e1c; end: 109f46e77;  */

void FUN_109f46e1c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)0x0;
  if (*(long *)*param_2 != 0) {
    plVar1 = (long *)*param_2;
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  *(long **)(param_1 + 0x10) = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x18) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    plVar1 = *(long **)(param_1 + 0x10);
  }
  FUN_109ecc674(plVar1,param_1);
  *(long **)(param_1 + 0x18) = plVar1;
  return;
}



/* Entry: 109f46e78; end: 109f46ff3;  */

void FUN_109f46e78(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != param_1 + 0x30) && (*(long *)(param_1 + 0x38) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109f46ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e47cc7c)[*(uint *)(*(long *)(param_1 + 0x38) + 0x18)] * 4 +
              0x109f46ee8))(0x30);
    return;
  }
  return;
}



/* Entry: 109f46ff4; end: 109f472bb;  */

ulong * FUN_109f46ff4(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  byte abStack_88 [8];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar6 = param_1;
  if ((*(char *)(param_2 + 4) != '\x01') ||
     (((*(char *)((long)param_1 + 0x1d) == '\x01' && (*(char *)((long)param_2 + 0x21) != '\x01')) ||
      (*(char *)(*param_1 + 0x1c) != '\x01')))) {
    puVar1 = param_1 + 1;
    puVar9 = (ulong *)param_1[2];
    if (puVar9 != puVar1) {
      bVar2 = true;
LAB_109f47058:
      do {
        uVar12 = puVar9[-1];
        if ((uVar12 & 1) == 0) {
          lVar13 = *(long *)(uVar12 + 0x10);
          if ((*(int *)(uVar12 + 0x18) != 8) || (lVar13 != param_2[2])) {
            plVar10 = (long *)param_2[1];
            lVar14 = plVar10[1];
            goto LAB_109f47098;
          }
        }
        else {
          plVar10 = (long *)param_2[1];
          lVar14 = plVar10[1];
          lVar13 = *(long *)((uVar12 & 0xfffffffffffffffe) + 8);
LAB_109f47098:
          if (*(uint *)(lVar13 + 0x40) <= *(uint *)(lVar14 + 0x40)) {
            bVar2 = false;
            puVar9 = (ulong *)puVar9[1];
            if (puVar9 == puVar1) goto LAB_109f470e4;
            goto LAB_109f47058;
          }
          bVar2 = (bool)(*(uint *)(lVar13 + 0x40) < *(uint *)(*plVar10 + 0x40) & bVar2);
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != puVar1);
      if (bVar2) {
        return param_1;
      }
LAB_109f470e4:
      uVar12 = *param_1;
      if (*(int *)(uVar12 + 0x18) == 1) {
        uVar3 = uVar12;
        func_0x000109ef9690();
        if ((uVar3 & 1) == 0) {
          abStack_88[0] = 0;
          for (lStack_60 = *(long *)(uVar12 + 0x10); *(int *)(lStack_60 + 0x10) != 3;
              lStack_60 = *(long *)(lStack_60 + 0x18)) {
          }
          uStack_68 = *(undefined8 *)(*(long *)(lStack_60 + 0x20) + 0x18);
          uStack_70 = 0;
          plVar10 = *(long **)(uVar12 + 0x90);
          if (plVar10 == (long *)(uVar12 + 0x88)) {
            uVar7 = 0;
          }
          else {
            do {
              plVar16 = (long *)plVar10[1];
              uStack_78 = plVar10[-1];
              if ((((uStack_78 & 1) == 0) &&
                  (lStack_58 = *(long *)(uStack_78 + 0x10), lStack_58 != *(long *)(uVar12 + 0x10)))
                 && (*(int *)(uStack_78 + 0x18) != 8)) {
                uStack_80 = 2;
                lVar13 = *(long *)plVar10[2];
                if ((lVar13 != 0 && *(int *)(lVar13 + 0x18) == 1) &&
                   (lVar14 = lVar13, FUN_109efb850(lVar13,abStack_88), lVar14 != lVar13)) {
                  lVar8 = *plVar10;
                  plVar4 = (long *)plVar10[1];
                  *(long **)(lVar8 + 8) = plVar4;
                  *plVar4 = lVar8;
                  *plVar10 = 0;
                  plVar4 = (long *)(lVar14 + 0x88);
                  lVar8 = *plVar4;
                  plVar10[1] = (long)plVar4;
                  plVar10[2] = lVar14 + 0x80;
                  *plVar10 = lVar8;
                  *(long **)(lVar8 + 8) = plVar10;
                  *plVar4 = (long)plVar10;
                  func_0x000109ef9690(lVar13);
                  abStack_88[0] = 1;
                }
              }
              plVar10 = plVar16;
            } while (plVar16 != (long *)(uVar12 + 0x88));
            uVar7 = (uint)abStack_88[0];
          }
        }
        else {
          uVar7 = 1;
        }
        return (ulong *)(ulong)(uVar7 & 1);
      }
      puVar5 = *(undefined8 **)*param_2;
      FUN_109f6600c(puVar5,0x68,8);
      *(undefined4 *)(puVar5 + 3) = 8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[7] = 0;
      puVar5[5] = puVar5 + 7;
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[8] = puVar5 + 5;
      FUN_109ecb048();
      lVar13 = param_2[2];
      uVar7 = *(uint *)(*(long *)(lVar13 + 0x58) + 0x40);
      if (uVar7 != 0) {
        lVar13 = 0;
        do {
          FUN_109ecb354(puVar5,*(undefined8 *)(param_2[3] + lVar13),param_1);
          lVar13 = lVar13 + 8;
        } while ((ulong)uVar7 * 8 - lVar13 != 0);
        lVar13 = param_2[2];
      }
      puVar6 = (ulong *)0x0;
      FUN_109ecb4f0(0,lVar13,puVar5);
      if ((ulong *)((long *)param_1[2] + -1) != param_1) {
        plVar10 = puVar5 + 10;
        plVar16 = (long *)param_1[2];
        do {
          plVar11 = plVar16 + 1;
          plVar4 = (long *)*plVar11;
          uVar12 = plVar16[-1];
          if ((uVar12 & 1) == 0) {
            if (*(int *)(uVar12 + 0x18) == 8) {
              lVar13 = *(long *)(uVar12 + 0x10);
              if (param_2[2] == lVar13) goto LAB_109f47294;
            }
            else {
              lVar13 = *(long *)(uVar12 + 0x10);
            }
            if ((*(uint *)(lVar13 + 0x40) <= *(uint *)(((long *)param_2[1])[1] + 0x40)) ||
               (*(uint *)(*(long *)param_2[1] + 0x40) <= *(uint *)(lVar13 + 0x40))) {
              lVar13 = *plVar16;
              *(long **)(lVar13 + 8) = plVar4;
              *plVar4 = lVar13;
              plVar15 = plVar16 + 2;
              *plVar16 = 0;
LAB_109f4727c:
              *plVar15 = (long)(puVar5 + 9);
              *plVar11 = (long)plVar10;
              lVar13 = *plVar10;
              *plVar16 = lVar13;
              *(long **)(lVar13 + 8) = plVar16;
              *plVar10 = (long)plVar16;
            }
          }
          else {
            uVar12 = uVar12 & 0xfffffffffffffffe;
            uVar7 = *(uint *)(*(long *)(uVar12 + 8) + 0x40);
            if ((uVar7 <= *(uint *)(((long *)param_2[1])[1] + 0x40)) ||
               (*(uint *)(*(long *)param_2[1] + 0x40) <= uVar7)) {
              plVar16 = (long *)(uVar12 + 0x28);
              lVar13 = *plVar16;
              plVar11 = (long *)(uVar12 + 0x30);
              plVar15 = (long *)*plVar11;
              *(long **)(lVar13 + 8) = plVar15;
              *plVar15 = lVar13;
              *plVar16 = 0;
              plVar15 = (long *)(uVar12 + 0x38);
              goto LAB_109f4727c;
            }
          }
LAB_109f47294:
          plVar16 = plVar4;
        } while ((ulong *)(plVar4 + -1) != param_1);
      }
      *(undefined1 *)((long)param_2 + 0x22) = 1;
    }
  }
  return puVar6;
}



/* Entry: 109f472bc; end: 109f47613;  */

undefined8 * FUN_109f472bc(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar9 = (undefined8 *)0x50;
  _malloc();
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar2 = puVar9 + 6;
    puVar9[7] = 0;
    puVar9[8] = 0;
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 == 0) {
      uVar19 = 1;
    }
    else {
      uVar19 = 1;
      do {
        plVar13 = *(long **)(lVar10 + 0x20);
        uVar19 = (ulong)((int)uVar19 - 1);
        do {
          plVar13 = (long *)*plVar13;
          uVar19 = (ulong)((int)uVar19 + 1);
        } while (plVar13 != (long *)0x0);
        FUN_109ecc434();
      } while (lVar10 != 0);
    }
    puVar9[6] = param_1;
    *(uint *)(puVar9 + 8) = (uint)uVar19;
    puVar11 = puVar2;
    func_0x000109f6590c(puVar2,uVar19 << 4);
    puVar9[7] = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar11 + 0xc) = 0;
      if (param_2 == 0) {
        lVar10 = *(long *)(param_1 + 0x30);
        if (lVar10 != 0) {
          uVar17 = 1;
          do {
            plVar13 = *(long **)(lVar10 + 0x20);
            for (plVar5 = (long *)**(long **)(lVar10 + 0x20); plVar5 != (long *)0x0;
                plVar5 = (long *)*plVar5) {
              plVar1 = puVar11 + uVar17 * 2;
              iVar16 = (int)uVar17;
              if (iVar16 == 0) {
                uVar15 = 0;
              }
              else {
                *plVar1 = (long)plVar13;
                *(int *)(plVar1 + 1) = iVar16;
                uVar15 = 0xffffffff;
                *(int *)(plVar13 + 4) = iVar16;
              }
              *(undefined4 *)((long)plVar1 + 0xc) = uVar15;
              uVar17 = (ulong)(iVar16 + 1);
              plVar13 = plVar5;
            }
            FUN_109ecc434();
          } while (lVar10 != 0);
        }
      }
      else {
        lVar10 = *(long *)(param_1 + 0x48);
        if (lVar10 != 0) {
          uVar17 = 1;
          do {
            lVar14 = *(long *)(lVar10 + 0x38);
            lVar18 = *(long *)(lVar14 + 8);
            if (lVar14 != 0 && *(long *)(lVar14 + 8) != 0) {
              do {
                plVar13 = puVar11 + uVar17 * 2;
                iVar16 = (int)uVar17;
                if (iVar16 == 0) {
                  uVar15 = 0;
                }
                else {
                  *plVar13 = lVar14;
                  *(int *)(plVar13 + 1) = iVar16;
                  uVar15 = 0xffffffff;
                  *(int *)(lVar14 + 0x20) = iVar16;
                }
                *(undefined4 *)((long)plVar13 + 0xc) = uVar15;
                uVar17 = (ulong)(iVar16 + 1);
                plVar13 = (long *)(lVar18 + 8);
                lVar14 = lVar18;
                lVar18 = *plVar13;
              } while (*plVar13 != 0);
            }
            FUN_109ecc588();
          } while (lVar10 != 0);
        }
      }
      if ((uint)uVar19 < 2) {
        return puVar2;
      }
      lVar10 = 1;
      bVar3 = false;
      do {
        bVar7 = bVar3;
        plVar13 = puVar11 + lVar10 * 2;
        lVar18 = *plVar13;
        lVar14 = lVar18;
        FUN_109ecc0ac();
        puVar9 = puVar11;
        if (lVar14 == 0) {
LAB_109f475a4:
          if (*(int *)((long)puVar11 + 0xc) != -1) {
LAB_109f475b4:
            if (*(int *)((long)plVar13 + 0xc) != *(int *)(puVar9 + 1)) {
              *(int *)((long)plVar13 + 0xc) = *(int *)(puVar9 + 1);
              bVar6 = true;
              goto LAB_109f475d4;
            }
          }
          bVar6 = false;
        }
        else {
          if (*(int *)(lVar18 + 0x18) == 4) {
            uVar4 = *(uint *)(lVar18 + 0x28);
            uVar17 = (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar4 * 0x68];
            if ((uVar17 == 0) || ((*(uint *)(lVar18 + uVar17 * 4 + 0x50) >> 2 & 1) == 0)) {
              if ((int)uVar4 < 0xad) {
                if (((uVar4 != 3) && (uVar4 != 0x35)) && (uVar4 != 0x9d)) {
LAB_109f4758c:
                  if (((*(uint *)(&UNK_110b671ec + (ulong)uVar4 * 0x68) ^ 0xffffffff) & 3) == 0)
                  goto LAB_109f47504;
                  goto LAB_109f475a4;
                }
              }
              else if ((int)uVar4 < 0x1d1) {
                if (uVar4 != 0xad) {
                  if (uVar4 != 0x112) goto LAB_109f4758c;
                  if ((*(ushort *)(**(long **)(lVar18 + 0x98) + 0x2c) & 0x487) != 0)
                  goto LAB_109f47504;
                }
              }
              else if ((uVar4 != 0x1d1) && (uVar4 != 0x1e6)) goto LAB_109f4758c;
              if ((*(uint *)(lVar18 + uVar17 * 4 + 0x50) >> 6 & 1) != 0) goto LAB_109f47504;
            }
            goto LAB_109f475a4;
          }
LAB_109f47504:
          lVar18 = *(long *)(lVar14 + 0x10);
          if (lVar18 == lVar14 + 8) goto LAB_109f475a4;
          puVar12 = (undefined8 *)0x0;
          do {
            if ((*(ulong *)(lVar18 + -8) & 1) != 0) {
              if (*(int *)((long)puVar11 + 0xc) != -1) {
                if (puVar12 == (undefined8 *)0x0) goto LAB_109f475b4;
                puVar12 = puVar2;
                FUN_109f47614(puVar2,puVar11);
              }
              break;
            }
            if ((*(int *)((long)(puVar11 + (ulong)*(uint *)(*(ulong *)(lVar18 + -8) + 0x20) * 2) +
                         0xc) != -1) &&
               (bVar3 = puVar12 != (undefined8 *)0x0,
               puVar12 = puVar11 + (ulong)*(uint *)(*(ulong *)(lVar18 + -8) + 0x20) * 2, bVar3)) {
              puVar12 = puVar2;
              FUN_109f47614();
            }
            lVar18 = *(long *)(lVar18 + 8);
          } while (lVar18 != lVar14 + 8);
          puVar9 = puVar12;
          if (puVar12 != (undefined8 *)0x0) goto LAB_109f475b4;
          bVar6 = false;
        }
LAB_109f475d4:
        bVar8 = lVar10 + 1U != uVar19;
        lVar14 = 1;
        if (bVar8) {
          lVar14 = lVar10 + 1;
        }
        bVar3 = (bool)(bVar8 & (bVar7 | bVar6));
        lVar10 = lVar14;
        if ((!bVar8) && (!bVar7 && !bVar6)) {
          return puVar2;
        }
      } while( true );
    }
    FUN_109f65aa4(puVar9);
    FUN_109f65ae0(puVar9);
  }
  return (undefined8 *)0x0;
}



/* Entry: 109f47614; end: 109f476ff;  */

long FUN_109f47614(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  
  while (param_2 != param_3) {
    uVar1 = *(uint *)(param_3 + 8);
    uVar2 = *(uint *)(param_2 + 8);
    if (uVar1 < uVar2) {
      do {
        param_2 = *(long *)(param_1 + 8) + (long)*(int *)(param_2 + 0xc) * 0x10;
        uVar2 = *(uint *)(param_2 + 8);
      } while (uVar1 < uVar2);
    }
    if (uVar2 < uVar1) {
      do {
        param_3 = *(long *)(param_1 + 8) + (long)*(int *)(param_3 + 0xc) * 0x10;
      } while (uVar2 < *(uint *)(param_3 + 8));
    }
  }
  return param_2;
}



/* Entry: 109f47700; end: 109f477a7;  */

void FUN_109f47700(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined4 uStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_34 = 0;
  func_0x000107c31940(auStack_50,&UNK_10f61d592);
  FUN_109f477a8(param_2,&uStack_34,auStack_50,param_3,param_1);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 109f477a8; end: 109f47e73;  */

void FUN_109f477a8(long *param_1,uint *param_2,long *param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 ***apppuStack_b8 [2];
  char cStack_a1;
  undefined8 ***pppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  
  bVar8 = *(byte *)(param_4 + 4);
  if (bVar8 - 0x11 < 2) {
    plVar11 = param_1;
    (**(code **)(*param_1 + 0x10))(param_1,param_4);
    iVar9 = (int)plVar11;
    if (iVar9 != 0) {
      *param_2 = (iVar9 + *param_2) - 1 & -iVar9;
    }
    uVar15 = (ulong)*(uint *)(param_4 + 0x10);
    if (*(uint *)(param_4 + 0x10) != 0) {
      lVar14 = 0;
      uVar20 = 0;
      lVar4 = *param_5;
      lVar5 = param_5[1];
      do {
        lVar18 = *(long *)(param_4 + 0x30);
        if ((*(long *)(lVar18 + lVar14) != 0) && (*(char *)(*(long *)(lVar18 + lVar14) + 4) != '\r')
           ) {
          puVar16 = *(undefined **)(lVar18 + lVar14 + 8);
          puVar1 = &UNK_10f61d592;
          if (puVar16 != (undefined *)0x0) {
            puVar1 = puVar16;
          }
          func_0x000107c31940(&pppuStack_80,puVar1);
          uVar15 = param_3[1];
          if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
            uVar15 = (ulong)*(byte *)((long)param_3 + 0x17);
          }
          if (uVar15 == 0) {
            if ((long)ppuStack_70 < 0) {
              func_0x000107c3192c(&pppuStack_a0,pppuStack_80,ppuStack_78);
            }
            else {
              ppuStack_98 = ppuStack_78;
              pppuStack_a0 = pppuStack_80;
              ppuStack_90 = ppuStack_70;
            }
          }
          else {
            func_0x000104c4f768(apppuStack_b8,uVar15 + 1,&pppuStack_d0);
            ppppuVar10 = (undefined8 ****)apppuStack_b8[0];
            if (-1 < cStack_a1) {
              ppppuVar10 = apppuStack_b8;
            }
            plVar11 = (long *)*param_3;
            if (-1 < *(char *)((long)param_3 + 0x17)) {
              plVar11 = param_3;
            }
            _memmove(ppppuVar10,plVar11,uVar15);
            *(undefined2 *)((long)ppppuVar10 + uVar15) = 0x2e;
            pppuVar2 = (undefined8 ***)ppuStack_78;
            ppppuVar10 = (undefined8 ****)pppuStack_80;
            if (-1 < (long)ppuStack_70) {
              pppuVar2 = (undefined8 ***)((ulong)ppuStack_70 >> 0x38);
              ppppuVar10 = &pppuStack_80;
            }
            ppppuVar12 = apppuStack_b8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar12,ppppuVar10,pppuVar2);
            ppuStack_98 = ppppuVar12[1];
            pppuStack_a0 = *ppppuVar12;
            ppuStack_90 = ppppuVar12[2];
            ppppuVar12[1] = (undefined8 ***)0x0;
            ppppuVar12[2] = (undefined8 ***)0x0;
            *ppppuVar12 = (undefined8 ***)0x0;
            if (cStack_a1 < '\0') {
              __ZdlPv(apppuStack_b8[0]);
            }
          }
          FUN_109f477a8(param_1,param_2,&pppuStack_a0,*(undefined8 *)(lVar18 + lVar14),param_5);
          if ((long)ppuStack_90 < 0) {
            __ZdlPv(pppuStack_a0);
          }
          if ((long)ppuStack_70 < 0) {
            __ZdlPv(pppuStack_80);
          }
          uVar15 = (ulong)*(uint *)(param_4 + 0x10);
        }
        uVar20 = uVar20 + 1;
        lVar14 = lVar14 + 0x30;
      } while (uVar20 < uVar15);
      if ((ulong)(lVar5 - lVar4) < (ulong)(param_5[1] - *param_5)) {
        if (iVar9 != 0) {
          *param_2 = (iVar9 + *param_2) - 1 & -iVar9;
        }
        (**(code **)(*param_1 + 0x30))(param_1,param_2);
      }
    }
  }
  else if (bVar8 != 0xd) {
    if (bVar8 == 0x13) {
      lVar14 = *(long *)(param_4 + 0x30);
      if (lVar14 == 0) {
        return;
      }
      plVar11 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,param_4);
      iVar9 = (int)plVar11;
      if (iVar9 != 0) {
        *param_2 = (iVar9 + *param_2) - 1 & -iVar9;
      }
      if (*(byte *)(lVar14 + 4) - 0x11 < 3) {
        plVar11 = param_1;
        (**(code **)(*param_1 + 0x20))(param_1,param_4);
        uVar17 = 0;
        uVar6 = *param_2;
        uVar7 = *(uint *)(param_4 + 0x10);
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar19 = uVar6;
        do {
          *param_2 = uVar19;
          uVar15 = param_3[1];
          if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
            uVar15 = (ulong)*(byte *)((long)param_3 + 0x17);
          }
          func_0x000104c4f768(apppuStack_b8,uVar15 + 1,&pppuStack_d0);
          ppppuVar10 = (undefined8 ****)apppuStack_b8[0];
          if (-1 < cStack_a1) {
            ppppuVar10 = apppuStack_b8;
          }
          if (uVar15 != 0) {
            plVar13 = (long *)*param_3;
            if (-1 < *(char *)((long)param_3 + 0x17)) {
              plVar13 = param_3;
            }
            _memmove(ppppuVar10,plVar13,uVar15);
          }
          *(undefined2 *)((long)ppppuVar10 + uVar15) = 0x5b;
          __ZNSt3__19to_stringEj(&pppuStack_d0,uVar17);
          uVar15 = uStack_c8;
          ppppuVar10 = (undefined8 ****)pppuStack_d0;
          if (-1 < (char)bStack_b9) {
            uVar15 = (ulong)bStack_b9;
            ppppuVar10 = &pppuStack_d0;
          }
          ppppuVar12 = apppuStack_b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar12,ppppuVar10,uVar15);
          ppuStack_98 = ppppuVar12[1];
          pppuStack_a0 = *ppppuVar12;
          ppuStack_90 = ppppuVar12[2];
          ppppuVar12[1] = (undefined8 ***)0x0;
          ppppuVar12[2] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          ppppuVar10 = &pppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar10,&DAT_10f62a9ea,1);
          ppuStack_78 = ppppuVar10[1];
          pppuStack_80 = *ppppuVar10;
          ppuStack_70 = ppppuVar10[2];
          ppppuVar10[1] = (undefined8 ***)0x0;
          ppppuVar10[2] = (undefined8 ***)0x0;
          *ppppuVar10 = (undefined8 ***)0x0;
          if ((long)ppuStack_90 < 0) {
            __ZdlPv(pppuStack_a0);
          }
          if ((char)bStack_b9 < '\0') {
            __ZdlPv(pppuStack_d0);
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(apppuStack_b8[0]);
          }
          FUN_109f477a8(param_1,param_2,&pppuStack_80,lVar14,param_5);
          if ((long)ppuStack_70 < 0) {
            __ZdlPv(pppuStack_80);
          }
          uVar17 = uVar17 + 1;
          uVar19 = uVar19 + (int)plVar11;
        } while (uVar7 != uVar17);
        iVar9 = uVar7 * (int)plVar11;
        *param_2 = iVar9 + uVar6;
        plVar11 = param_1;
        (**(code **)(*param_1 + 0x38))();
        if (((ulong)plVar11 & 1) == 0) {
          return;
        }
        if (1 < *(byte *)(lVar14 + 4) - 0x11) {
          return;
        }
        (**(code **)(*param_1 + 0x18))(param_1,lVar14);
        puVar3 = (undefined8 *)param_5[1];
        if (puVar3 < (undefined8 *)param_5[2]) {
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
          plVar11 = puVar3 + 6;
        }
        else {
          plVar11 = param_5;
          FUN_109f488e0();
        }
        param_5[1] = (long)plVar11;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar11 + -6,param_3);
        *(uint *)(plVar11 + -3) = uVar6;
        *(int *)((long)plVar11 + -0x14) = iVar9;
        *(int *)(plVar11 + -2) = (int)param_1;
        *(undefined4 *)((long)plVar11 + -0xc) = *(undefined4 *)(param_4 + 0x10);
        *(undefined4 *)((long)plVar11 + -4) = 0;
        *(undefined1 *)(plVar11 + -1) = 1;
        return;
      }
      plVar11 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,param_4);
      puVar3 = (undefined8 *)param_5[1];
      if (puVar3 < (undefined8 *)param_5[2]) {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        plVar13 = puVar3 + 6;
      }
      else {
        plVar13 = param_5;
        FUN_109f488e0();
      }
      param_5[1] = (long)plVar13;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar13 + -6,param_3)
      ;
      *(uint *)(plVar13 + -3) = *param_2;
      *(int *)((long)plVar13 + -0x14) = (int)plVar11;
      (**(code **)(*param_1 + 0x20))(param_1,param_4);
      *(int *)(plVar13 + -2) = (int)param_1;
      *(undefined4 *)((long)plVar13 + -0xc) = *(undefined4 *)(param_4 + 0x10);
      func_0x000109f48fa8(param_4,1);
      *(int *)((long)plVar13 + -4) = (int)param_4;
      *(undefined1 *)(plVar13 + -1) = 1;
      uVar17 = *param_2 + (int)plVar11;
    }
    else {
      plVar11 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,param_4);
      iVar9 = (int)plVar11;
      if (iVar9 != 0) {
        *param_2 = (iVar9 + *param_2) - 1 & -iVar9;
      }
      (**(code **)(*param_1 + 0x18))(param_1,param_4);
      puVar3 = (undefined8 *)param_5[1];
      if (puVar3 < (undefined8 *)param_5[2]) {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        plVar11 = puVar3 + 6;
      }
      else {
        plVar11 = param_5;
        FUN_109f488e0();
      }
      param_5[1] = (long)plVar11;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11 + -6,param_3)
      ;
      uVar17 = (uint)param_1;
      *(uint *)(plVar11 + -3) = *param_2;
      *(uint *)((long)plVar11 + -0x14) = uVar17;
      uVar6 = *(uint *)(param_4 + 0x10);
      uVar7 = uVar6;
      if (uVar6 < 2) {
        uVar7 = 1;
      }
      uVar19 = 0;
      if (uVar7 != 0) {
        uVar19 = uVar17 / uVar7;
      }
      *(uint *)(plVar11 + -2) = uVar19;
      *(uint *)((long)plVar11 + -0xc) = uVar6;
      func_0x000109f48fa8(param_4,1);
      *(int *)((long)plVar11 + -4) = (int)param_4;
      *(undefined1 *)(plVar11 + -1) = 1;
      uVar17 = *param_2 + uVar17;
    }
    *param_2 = uVar17;
  }
  return;
}



/* Entry: 109f47e74; end: 109f48307;  */

/* WARNING: Removing unreachable block (ram,0x000109f47f4c) */
/* WARNING: Removing unreachable block (ram,0x000109f47f54) */
/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_109f47e74(long *param_1,long param_2,uint *param_3,undefined8 param_4,ulong ****param_5,
             ulong *****param_6,undefined8 param_7,undefined8 param_8)

{
  ulong ******ppppppuVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong *****pppppuVar8;
  long *plVar9;
  ulong *******pppppppuVar10;
  ulong *puVar11;
  uint uVar12;
  ulong ****ppppuVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *****pppppuVar16;
  long lVar17;
  ulong uVar18;
  ulong *****pppppuVar19;
  ulong ******unaff_x26;
  ulong ****ppppuVar20;
  ulong ****ppppuVar21;
  ulong *****pppppuVar22;
  undefined1 *puVar23;
  code *pcVar24;
  ulong *******pppppppuStack_c0;
  ulong ****ppppuStack_b8;
  undefined8 uStack_b0;
  ulong *****pppppuStack_a8;
  ulong *****pppppuStack_a0;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar23 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1,param_6);
  uVar12 = *param_3;
  iVar7 = (int)plVar9;
  if (iVar7 != 0) {
    uVar12 = (iVar7 + uVar12) - 1 & -iVar7;
    *param_3 = uVar12;
  }
  FUN_109f47700(&pppppuStack_a8,param_1,param_6);
  pppppuVar16 = param_6;
  pppppuVar19 = pppppuStack_a8;
  if (pppppuStack_a8 != pppppuStack_a0) {
    pppppppuVar14 = (ulong *******)0x19;
    if (((ulong)param_5 | 7) != 0x17) {
      pppppppuVar14 = (ulong *******)(((ulong)param_5 | 7) + 1);
    }
    ppppuVar13 = (ulong ****)((ulong)pppppppuVar14 | 0x8000000000000000);
    do {
      pppppuVar16 = pppppuVar19 + 3;
      *(uint *)pppppuVar16 = *(int *)pppppuVar16 + uVar12;
      uVar4 = SUB81(param_5,0);
      if (*(char *)((long)pppppuVar19 + 0x17) == '\0') {
        if ((ulong ****)0x7ffffffffffffff7 < param_5) {
          func_0x000104c4f6b8();
          goto LAB_109f4827c;
        }
        if (param_5 < (ulong ****)0x17) {
          uStack_b0 = (ulong ****)CONCAT17(uVar4,(undefined7)uStack_b0);
          pppppppuVar10 = (ulong *******)&pppppppuStack_c0;
          if (param_5 != (ulong ****)0x0) goto LAB_109f47fe8;
        }
        else {
          pppppppuVar10 = pppppppuVar14;
          __Znwm();
          pppppppuStack_c0 = pppppppuVar10;
          ppppuStack_b8 = param_5;
          uStack_b0 = ppppuVar13;
LAB_109f47fe8:
          _memmove(pppppppuVar10,param_4,param_5);
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)param_5) = 0;
        if (*(char *)((long)pppppuVar19 + 0x17) < '\0') {
          __ZdlPv(*pppppuVar19);
        }
        pppppuVar19[1] = ppppuStack_b8;
        *pppppuVar19 = (ulong ****)pppppppuStack_c0;
        pppppuVar19[2] = uStack_b0;
      }
      else if (*(char *)pppppuVar19 == '[') {
        if ((ulong ****)0x7ffffffffffffff7 < param_5) {
          func_0x000104c4f6b8();
LAB_109f4827c:
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x109f48280);
          (*pcVar24)();
        }
        if (param_5 < (ulong ****)0x17) {
          uStack_b0 = (ulong ****)CONCAT17(uVar4,(undefined7)uStack_b0);
          pppppppuVar10 = (ulong *******)&pppppppuStack_c0;
          if (param_5 != (ulong ****)0x0) goto LAB_109f48038;
        }
        else {
          pppppppuVar10 = pppppppuVar14;
          __Znwm();
          pppppppuStack_c0 = pppppppuVar10;
          ppppuStack_b8 = param_5;
          uStack_b0 = ppppuVar13;
LAB_109f48038:
          _memmove(pppppppuVar10,param_4,param_5);
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)param_5) = 0;
        ppppuVar20 = pppppuVar19[1];
        pppppuVar22 = (ulong *****)*pppppuVar19;
        if (-1 < (char)*(byte *)((long)pppppuVar19 + 0x17)) {
          ppppuVar20 = (ulong ****)(ulong)*(byte *)((long)pppppuVar19 + 0x17);
          pppppuVar22 = pppppuVar19;
        }
        pppppppuVar10 = (ulong *******)&pppppppuStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar10,pppppuVar22,ppppuVar20);
        unaff_x26 = *pppppppuVar10;
        uStack_90._0_7_ = SUB87(pppppppuVar10[1],0);
        uStack_90._7_1_ = (undefined1)*(undefined8 *)((long)pppppppuVar10 + 0xf);
        uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar10 + 0xf) >> 8);
        uVar4 = *(undefined1 *)((long)pppppppuVar10 + 0x17);
        pppppppuVar10[1] = (ulong ******)0x0;
        pppppppuVar10[2] = (ulong ******)0x0;
        *pppppppuVar10 = (ulong ******)0x0;
        if (*(char *)((long)pppppuVar19 + 0x17) < '\0') {
          __ZdlPv(*pppppuVar19);
        }
        *pppppuVar19 = (ulong ****)unaff_x26;
        pppppuVar19[1] = (ulong ****)CONCAT17(uStack_90._7_1_,(undefined7)uStack_90);
        *(ulong *)((long)pppppuVar19 + 0xf) = CONCAT71(uStack_88,uStack_90._7_1_);
        *(undefined1 *)((long)pppppuVar19 + 0x17) = uVar4;
        pppppppuVar10 = pppppppuStack_c0;
        if ((long)uStack_b0 < 0) {
LAB_109f481a8:
          __ZdlPv(pppppppuVar10);
        }
      }
      else {
        if ((ulong ****)0x7ffffffffffffff7 < param_5) {
          func_0x000104c4f6b8();
          goto LAB_109f4827c;
        }
        if (param_5 < (ulong ****)0x17) {
          uStack_80 = (ulong ****)CONCAT17(uVar4,(undefined7)uStack_80);
          pppppppuVar10 = (ulong *******)&uStack_90;
          if (param_5 != (ulong ****)0x0) goto LAB_109f480e0;
        }
        else {
          pppppppuVar10 = pppppppuVar14;
          __Znwm();
          uStack_88 = SUB87(param_5,0);
          uStack_81 = (undefined1)((ulong)param_5 >> 0x38);
          uStack_90._0_7_ = SUB87(pppppppuVar10,0);
          uStack_90._7_1_ = (undefined1)((ulong)pppppppuVar10 >> 0x38);
          uStack_80 = ppppuVar13;
LAB_109f480e0:
          _memmove(pppppppuVar10,param_4,param_5);
        }
        *(undefined1 *)((long)pppppppuVar10 + (long)param_5) = 0;
        puVar11 = &uStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar11,&DAT_10f62a9de,1);
        ppppuStack_b8 = (ulong ****)puVar11[1];
        pppppppuStack_c0 = (ulong *******)*puVar11;
        uStack_b0 = (ulong ****)puVar11[2];
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        ppppuVar20 = pppppuVar19[1];
        pppppuVar22 = (ulong *****)*pppppuVar19;
        if (-1 < (char)*(byte *)((long)pppppuVar19 + 0x17)) {
          ppppuVar20 = (ulong ****)(ulong)*(byte *)((long)pppppuVar19 + 0x17);
          pppppuVar22 = pppppuVar19;
        }
        pppppppuVar10 = (ulong *******)&pppppppuStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar10,pppppuVar22,ppppuVar20);
        ppppppuVar1 = *pppppppuVar10;
        uStack_78 = SUB87(pppppppuVar10[1],0);
        uStack_71 = (undefined1)*(undefined8 *)((long)pppppppuVar10 + 0xf);
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar10 + 0xf) >> 8);
        bVar2 = *(byte *)((long)pppppppuVar10 + 0x17);
        unaff_x26 = (ulong ******)(ulong)bVar2;
        pppppppuVar10[1] = (ulong ******)0x0;
        pppppppuVar10[2] = (ulong ******)0x0;
        *pppppppuVar10 = (ulong ******)0x0;
        if (*(char *)((long)pppppuVar19 + 0x17) < '\0') {
          __ZdlPv(*pppppuVar19);
        }
        *pppppuVar19 = (ulong ****)ppppppuVar1;
        pppppuVar19[1] = (ulong ****)CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)pppppuVar19 + 0xf) = CONCAT71(uStack_70,uStack_71);
        *(byte *)((long)pppppuVar19 + 0x17) = bVar2;
        if ((long)uStack_b0 < 0) {
          __ZdlPv(pppppppuStack_c0);
        }
        if ((long)uStack_80 < 0) {
          pppppppuVar10 = (ulong *******)CONCAT17(uStack_90._7_1_,(undefined7)uStack_90);
          goto LAB_109f481a8;
        }
      }
      puVar11 = *(ulong **)(param_2 + 0x28);
      if (puVar11 < *(ulong **)(param_2 + 0x30)) {
        ppppuVar21 = pppppuVar19[1];
        ppppuVar20 = *pppppuVar19;
        puVar11[2] = (ulong)pppppuVar19[2];
        puVar11[1] = (ulong)ppppuVar21;
        *puVar11 = (ulong)ppppuVar20;
        pppppuVar19[1] = (ulong ****)0x0;
        pppppuVar19[2] = (ulong ****)0x0;
        *pppppuVar19 = (ulong ****)0x0;
        ppppuVar21 = pppppuVar19[4];
        ppppuVar20 = *pppppuVar16;
        puVar11[5] = (ulong)pppppuVar19[5];
        puVar11[4] = (ulong)ppppuVar21;
        puVar11[3] = (ulong)ppppuVar20;
        puVar11 = puVar11 + 6;
      }
      else {
        puVar11 = (ulong *)(param_2 + 0x20);
        FUN_109f48c9c(puVar11,pppppuVar19);
      }
      *(ulong **)(param_2 + 0x28) = puVar11;
      pppppuVar19 = pppppuVar19 + 6;
    } while (pppppuVar19 != pppppuStack_a0);
  }
  (**(code **)(*param_1 + 0x18))();
  *param_3 = (int)param_1 + uVar12;
  pppppppuStack_c0 = (ulong *******)&pppppuStack_a8;
  pppppppuVar14 = (ulong *******)&pppppppuStack_c0;
  func_0x000109f48c10();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppppuVar14;
  }
  ___stack_chk_fail();
  pppppppuStack_c0 = (ulong *******)&pppppuStack_a8;
  func_0x000109f48c10(&pppppppuStack_c0);
  __Unwind_Resume(pppppppuVar14);
  pcVar24 = FUN_109f48308;
  pppppuVar22 = pppppuStack_a0;
LAB_109ec8a70:
  do {
    pppppuVar8 = param_6;
    bVar2 = *(byte *)((long)pppppuVar8 + 4);
    param_6 = (ulong *****)(ulong)bVar2;
    bVar3 = *(byte *)((long)pppppuVar8 + 0xd);
    uVar12 = (uint)bVar3;
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if ((bVar2 & 0xf0) == 0) {
          FUN_109ec9858();
          uVar12 = 2;
          if ((int)param_6 != 0x10) {
            uVar12 = 4;
          }
          bVar5 = (int)param_6 == 0x40;
          uVar6 = 8;
          goto LAB_109ec8bdc;
        }
      }
      else if ((bVar2 & 0xfc) < 0xc && *(char *)((long)pppppuVar8 + 0xe) == '\x01') {
        if (uVar12 - 3 < 2) {
          FUN_109ec9858();
          uVar12 = 8;
          if ((int)param_6 != 0x10) {
            uVar12 = 0x10;
          }
          bVar5 = (int)param_6 == 0x40;
          uVar6 = 0x20;
LAB_109ec8bdc:
          if (!bVar5) {
            uVar6 = uVar12;
          }
          return (ulong *******)(ulong)uVar6;
        }
        if (uVar12 == 2) {
          FUN_109ec9858();
          uVar12 = 4;
          if ((int)param_6 != 0x10) {
            uVar12 = 8;
          }
          bVar5 = (int)param_6 == 0x40;
          uVar6 = 0x10;
          goto LAB_109ec8bdc;
        }
      }
    }
    uVar6 = (uint)bVar2;
    if (uVar6 == 0x13) {
      param_6 = (ulong *****)pppppuVar8[6];
      if (*(char *)((long)param_6 + 0xd) == '\0') break;
      if (*(char *)((long)param_6 + 0xd) == '\x01') {
        if (((ulong)*param_6 & 0xf000000000) != 0) break;
      }
      else if ((*(char *)((long)param_6 + 0xe) != '\x01') ||
              (0xb < (*(uint *)((long)param_6 + 4) & 0xfc))) break;
      goto LAB_109ec8b20;
    }
    if (*(byte *)((long)pppppuVar8 + 0xe) < 2 || 2 < uVar6 - 2) {
      if (uVar6 != 0x11) {
        return (ulong *******)0xffffffff;
      }
      if (*(int *)(pppppuVar8 + 2) == 0) {
        return (ulong *******)0x10;
      }
      lVar17 = 0;
      uVar18 = 0;
      pppppppuVar14 = (ulong *******)0x10;
      do {
        bVar5 = (*(uint *)((long)pppppuVar8[6] + lVar17 + 0x28) >> 5 & 3) == 2;
        pppppppuVar15 = *(ulong ********)((long)pppppuVar8[6] + lVar17);
        pppppppuVar10 = pppppppuVar15;
        FUN_109ec8a54(pppppppuVar15,bVar5);
        if ((uint)pppppppuVar14 <= (uint)pppppppuVar10) {
          FUN_109ec8a54(pppppppuVar15,bVar5);
          pppppppuVar14 = pppppppuVar15;
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x30;
      } while (uVar18 < *(uint *)(pppppuVar8 + 2));
      return pppppppuVar14;
    }
    func_0x000109ec6c94(param_6,uVar12,1,0,0,0,param_7,param_8,unaff_x26,pppppuVar19,param_2,param_4
                        ,param_5,pppppuVar16,pppppuVar22,pppppppuVar14,puVar23,pcVar24);
    func_0x000109ec69f4();
  } while( true );
  if ((1 < *(byte *)((long)param_6 + 0xe)) && (*(byte *)((long)param_6 + 4) - 2 < 3)) {
LAB_109ec8b20:
    FUN_109ec8a54(param_6,0);
    if ((uint)param_6 < 0x11) {
      return (ulong *******)0x10;
    }
    param_6 = (ulong *****)pppppuVar8[6];
  }
  goto LAB_109ec8a70;
}



/* Entry: 109f48308; end: 109f48313;  */

ulong FUN_109f48308(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
LAB_109ec8a70:
  do {
    uVar5 = param_2;
    bVar1 = *(byte *)(uVar5 + 4);
    param_2 = (ulong)bVar1;
    bVar2 = *(byte *)(uVar5 + 0xd);
    uVar7 = (uint)bVar2;
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        if ((bVar1 & 0xf0) == 0) {
          FUN_109ec9858();
          uVar7 = 2;
          if ((int)param_2 != 0x10) {
            uVar7 = 4;
          }
          bVar3 = (int)param_2 == 0x40;
          uVar4 = 8;
          goto LAB_109ec8bdc;
        }
      }
      else if ((bVar1 & 0xfc) < 0xc && *(char *)(uVar5 + 0xe) == '\x01') {
        if (uVar7 - 3 < 2) {
          FUN_109ec9858();
          uVar7 = 8;
          if ((int)param_2 != 0x10) {
            uVar7 = 0x10;
          }
          bVar3 = (int)param_2 == 0x40;
          uVar4 = 0x20;
LAB_109ec8bdc:
          if (!bVar3) {
            uVar4 = uVar7;
          }
          return (ulong)uVar4;
        }
        if (uVar7 == 2) {
          FUN_109ec9858();
          uVar7 = 4;
          if ((int)param_2 != 0x10) {
            uVar7 = 8;
          }
          bVar3 = (int)param_2 == 0x40;
          uVar4 = 0x10;
          goto LAB_109ec8bdc;
        }
      }
    }
    uVar4 = (uint)bVar1;
    if (uVar4 == 0x13) {
      param_2 = *(ulong *)(uVar5 + 0x30);
      if (*(char *)(param_2 + 0xd) == '\0') break;
      if (*(char *)(param_2 + 0xd) == '\x01') {
        if ((*(byte *)(param_2 + 4) & 0xf0) != 0) break;
      }
      else if ((*(char *)(param_2 + 0xe) != '\x01') || (0xb < (*(uint *)(param_2 + 4) & 0xfc)))
      break;
      goto LAB_109ec8b20;
    }
    if (*(byte *)(uVar5 + 0xe) < 2 || 2 < uVar4 - 2) {
      if (uVar4 != 0x11) {
        return 0xffffffff;
      }
      if (*(int *)(uVar5 + 0x10) == 0) {
        return 0x10;
      }
      lVar10 = 0;
      uVar11 = 0;
      uVar8 = 0x10;
      do {
        bVar3 = (*(uint *)(*(long *)(uVar5 + 0x30) + lVar10 + 0x28) >> 5 & 3) == 2;
        uVar9 = *(ulong *)(*(long *)(uVar5 + 0x30) + lVar10);
        uVar6 = uVar9;
        FUN_109ec8a54(uVar9,bVar3);
        if ((uint)uVar8 <= (uint)uVar6) {
          FUN_109ec8a54(uVar9,bVar3);
          uVar8 = uVar9;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x30;
      } while (uVar11 < *(uint *)(uVar5 + 0x10));
      return uVar8;
    }
    func_0x000109ec6c94(param_2,uVar7,1,0,0,0);
    func_0x000109ec69f4();
  } while( true );
  if ((1 < *(byte *)(param_2 + 0xe)) && (*(byte *)(param_2 + 4) - 2 < 3)) {
LAB_109ec8b20:
    FUN_109ec8a54(param_2,0);
    if ((uint)param_2 < 0x11) {
      return 0x10;
    }
    param_2 = *(ulong *)(uVar5 + 0x30);
  }
  goto LAB_109ec8a70;
}



/* Entry: 109f48314; end: 109f4836f;  */

/* WARNING: Removing unreachable block (ram,0x000109ec8d5c) */

uint FUN_109f48314(long *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  if (*(char *)(param_2 + 4) == '\x13' && *(long *)(param_2 + 0x30) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return *(int *)(param_2 + 0x10) * (int)param_1;
  }
  do {
    bVar1 = *(byte *)(param_2 + 4);
    uVar10 = (ulong)bVar1;
    bVar2 = *(byte *)(param_2 + 0xd);
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        if ((bVar1 & 0xf0) == 0) {
LAB_109ec8eec:
          FUN_109ec9858();
          uVar5 = 1;
          if ((int)uVar10 != 0x10) {
            uVar5 = 2;
          }
          uVar14 = 3;
          if ((int)uVar10 != 0x40) {
            uVar14 = uVar5;
          }
          return (uint)bVar2 << (ulong)uVar14;
        }
      }
      else if ((bVar1 & 0xfc) < 0xc && *(char *)(param_2 + 0xe) == '\x01') goto LAB_109ec8eec;
    }
    uVar5 = (uint)bVar1;
    uVar8 = uVar10;
    uVar9 = param_2;
    if (uVar5 == 0x13) {
      do {
        uVar9 = *(ulong *)(uVar9 + 0x30);
        uVar8 = (ulong)*(byte *)(uVar9 + 4);
      } while (*(byte *)(uVar9 + 4) == 0x13);
    }
    if ((*(byte *)(uVar9 + 0xe) < 2) || (2 < (int)uVar8 - 2U)) {
      uVar10 = param_2;
      if (uVar5 == 0x13) {
        do {
          cVar3 = *(char *)(*(ulong *)(uVar10 + 0x30) + 4);
          uVar10 = *(ulong *)(uVar10 + 0x30);
        } while (cVar3 == '\x13');
        uVar10 = param_2;
        if (cVar3 == '\x11') {
          do {
            uVar10 = *(ulong *)(uVar10 + 0x30);
          } while (*(char *)(uVar10 + 4) == '\x13');
          FUN_109ec8c8c(uVar10,0);
          uVar5 = (uint)uVar10;
        }
        else {
          do {
            uVar10 = *(ulong *)(uVar10 + 0x30);
          } while (*(char *)(uVar10 + 4) == '\x13');
          FUN_109ec8a54(uVar10,0);
          uVar5 = (uint)uVar10;
          if (uVar5 < 0x11) {
            uVar5 = 0x10;
          }
        }
        FUN_109ec88a0(param_2);
        uVar5 = (int)param_2 * uVar5;
      }
      else if (uVar5 - 0x11 < 2) {
        if (*(int *)(param_2 + 0x10) == 0) {
          uVar5 = 0;
          iVar7 = -1;
        }
        else {
          lVar13 = 0;
          uVar10 = 0;
          uVar5 = 0;
          uVar14 = 0;
          do {
            bVar4 = (*(uint *)(*(long *)(param_2 + 0x30) + lVar13 + 0x28) >> 5 & 3) == 2;
            lVar11 = *(long *)(*(long *)(param_2 + 0x30) + lVar13);
            lVar6 = lVar11;
            FUN_109ec8a54(lVar11,bVar4);
            if ((*(char *)(lVar11 + 4) == '\x13') && (*(int *)(lVar11 + 0x10) == 0)) {
              uVar8 = (ulong)*(uint *)(param_2 + 0x10);
            }
            else {
              uVar12 = (uint)lVar6;
              lVar6 = lVar11;
              FUN_109ec8c8c(lVar11,bVar4);
              uVar14 = (int)lVar6 + ((uVar14 + uVar12) - 1 & -uVar12);
              if (uVar12 <= uVar5) {
                uVar12 = uVar5;
              }
              uVar8 = (ulong)*(uint *)(param_2 + 0x10);
              uVar5 = uVar12;
              if (*(char *)(lVar11 + 4) == '\x11' && uVar10 + 1 < uVar8) {
                uVar14 = uVar14 + 0xf & 0xfffffff0;
              }
            }
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 0x30;
          } while (uVar10 < uVar8);
          iVar7 = uVar14 - 1;
        }
        if (uVar5 < 0x11) {
          uVar5 = 0x10;
        }
        uVar5 = uVar5 + iVar7 & -uVar5;
      }
      else {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
    uVar8 = param_2;
    if (uVar5 == 0x13) {
      do {
        uVar8 = *(ulong *)(uVar8 + 0x30);
        bVar1 = *(byte *)(uVar8 + 4);
      } while (bVar1 == 0x13);
      FUN_109ec88a0(param_2);
      uVar10 = (ulong)bVar1;
    }
    param_2 = uVar10;
    func_0x000109ec6c94(param_2,*(undefined1 *)(uVar8 + 0xd),1,0,0,0);
    func_0x000109ec69f4();
  } while( true );
}



/* Entry: 109f48370; end: 109f4841f;  */

uint FUN_109f48370(long *param_1,long param_2)

{
  uint uVar1;
  
  if ((*(char *)(param_2 + 4) == '\x13') && (*(long *)(param_2 + 0x30) != 0)) {
    (**(code **)(*param_1 + 0x18))();
    uVar1 = (uint)param_1;
    if (uVar1 < 0x11) {
      uVar1 = 0x10;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 109f48420; end: 109f4844b;  */

void FUN_109f48420(long param_1,uint *param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_2 = *param_2 + 0xf & 0xfffffff0;
  }
  return;
}



/* Entry: 109f4844c; end: 109f484a7;  */

/* WARNING: Removing unreachable block (ram,0x000109ec9538) */

uint FUN_109f4844c(long *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  
  if (*(char *)(param_2 + 4) == '\x13' && *(long *)(param_2 + 0x30) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return *(int *)(param_2 + 0x10) * (int)param_1;
  }
  do {
    bVar1 = *(byte *)(param_2 + 4);
    uVar9 = (ulong)bVar1;
    bVar2 = *(byte *)(param_2 + 0xd);
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        if ((bVar1 & 0xf0) == 0) {
LAB_109ec9688:
          FUN_109ec9858();
          uVar5 = 1;
          if ((int)uVar9 != 0x10) {
            uVar5 = 2;
          }
          uVar11 = 3;
          if ((int)uVar9 != 0x40) {
            uVar11 = uVar5;
          }
          return (uint)bVar2 << (ulong)uVar11;
        }
      }
      else if ((bVar1 & 0xfc) < 0xc && *(char *)(param_2 + 0xe) == '\x01') goto LAB_109ec9688;
    }
    uVar5 = (uint)bVar1;
    uVar7 = uVar9;
    uVar8 = param_2;
    if (uVar5 == 0x13) {
      do {
        uVar8 = *(ulong *)(uVar8 + 0x30);
        uVar7 = (ulong)*(byte *)(uVar8 + 4);
      } while (*(byte *)(uVar8 + 4) == 0x13);
    }
    if ((*(byte *)(uVar8 + 0xe) < 2) || (2 < (int)uVar7 - 2U)) {
      uVar9 = param_2;
      if (uVar5 == 0x13) {
        do {
          cVar3 = *(char *)(*(ulong *)(uVar9 + 0x30) + 4);
          uVar9 = *(ulong *)(uVar9 + 0x30);
        } while (cVar3 == '\x13');
        uVar9 = param_2;
        if (cVar3 == '\x11') {
          do {
            uVar9 = *(ulong *)(uVar9 + 0x30);
          } while (*(char *)(uVar9 + 4) == '\x13');
          FUN_109ec9468(uVar9,0);
          iVar13 = (int)uVar9;
        }
        else {
          do {
            uVar9 = *(ulong *)(uVar9 + 0x30);
          } while (*(char *)(uVar9 + 4) == '\x13');
          FUN_109ec920c(uVar9,0);
          iVar13 = (int)uVar9;
        }
        FUN_109ec88a0(param_2);
        uVar5 = (int)param_2 * iVar13;
      }
      else if (uVar5 - 0x11 < 2) {
        if (*(int *)(param_2 + 0x10) == 0) {
          uVar5 = 0;
          iVar13 = -1;
        }
        else {
          lVar12 = 0;
          uVar9 = 0;
          iVar13 = 0;
          uVar11 = 0;
          do {
            bVar4 = (*(uint *)(*(long *)(param_2 + 0x30) + lVar12 + 0x28) >> 5 & 3) == 2;
            uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar12);
            uVar6 = uVar10;
            FUN_109ec920c(uVar10,bVar4);
            uVar5 = (uint)uVar6;
            FUN_109ec9468(uVar10,bVar4);
            iVar13 = ((iVar13 + uVar5) - 1 & -uVar5) + (int)uVar10;
            if (uVar5 <= uVar11) {
              uVar5 = uVar11;
            }
            uVar9 = uVar9 + 1;
            lVar12 = lVar12 + 0x30;
            uVar11 = uVar5;
          } while (uVar9 < *(uint *)(param_2 + 0x10));
          iVar13 = iVar13 + -1;
        }
        uVar5 = uVar5 + iVar13 & -uVar5;
      }
      else {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
    uVar7 = param_2;
    if (uVar5 == 0x13) {
      do {
        uVar7 = *(ulong *)(uVar7 + 0x30);
        bVar1 = *(byte *)(uVar7 + 4);
      } while (bVar1 == 0x13);
      FUN_109ec88a0(param_2);
      uVar9 = (ulong)bVar1;
    }
    param_2 = uVar9;
    func_0x000109ec6c94(param_2,*(undefined1 *)(uVar7 + 0xd),1,0,0,0);
    func_0x000109ec69f4();
  } while( true );
}



/* Entry: 109f484a8; end: 109f4852f;  */

uint FUN_109f484a8(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 4) == '\x13') {
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,lVar3);
      (**(code **)(*param_1 + 0x10))(param_1,lVar3);
      uVar1 = (uint)param_1;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar1 = ((int)plVar2 + uVar1) - 1 & -uVar1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 109f48530; end: 109f4858b;  */

ulong FUN_109f48530(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = param_2;
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar10 = *(long *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 4) != '\x13') {
    lVar10 = param_2;
  }
  if (*(byte *)(lVar10 + 0xe) < 2) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar10 + 4);
  func_0x000109ec6c94(uVar7,*(undefined1 *)(lVar10 + 0xd),1,0,0,0);
  do {
    bVar1 = *(byte *)(uVar7 + 4);
    uVar5 = (ulong)bVar1;
    bVar2 = *(byte *)(uVar7 + 0xd);
    uVar8 = (uint)bVar2;
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        if ((bVar1 & 0xf0) == 0) {
          FUN_109ec9858();
          uVar8 = 2;
          if ((int)uVar5 != 0x10) {
            uVar8 = 4;
          }
          bVar3 = (int)uVar5 == 0x40;
          uVar4 = 8;
          goto LAB_109ec932c;
        }
      }
      else if ((bVar1 & 0xfc) < 0xc && *(char *)(uVar7 + 0xe) == '\x01') {
        if (uVar8 - 3 < 2) {
          FUN_109ec9858();
          uVar8 = 8;
          if ((int)uVar5 != 0x10) {
            uVar8 = 0x10;
          }
          bVar3 = (int)uVar5 == 0x40;
          uVar4 = 0x20;
LAB_109ec932c:
          if (!bVar3) {
            uVar4 = uVar8;
          }
          return (ulong)uVar4;
        }
        if (uVar8 == 2) {
          FUN_109ec9858();
          uVar8 = 4;
          if ((int)uVar5 != 0x10) {
            uVar8 = 8;
          }
          bVar3 = (int)uVar5 == 0x40;
          uVar4 = 0x10;
          goto LAB_109ec932c;
        }
      }
    }
    uVar4 = (uint)bVar1;
    if (uVar4 == 0x13) {
      uVar7 = *(ulong *)(uVar7 + 0x30);
    }
    else {
      if (*(byte *)(uVar7 + 0xe) < 2 || 2 < uVar4 - 2) {
        if (uVar4 == 0x11) {
          if (*(int *)(uVar7 + 0x10) == 0) {
            uVar5 = 0;
          }
          else {
            lVar10 = 0;
            uVar11 = 0;
            uVar5 = 0;
            do {
              bVar3 = (*(uint *)(*(long *)(uVar7 + 0x30) + lVar10 + 0x28) >> 5 & 3) == 2;
              uVar9 = *(ulong *)(*(long *)(uVar7 + 0x30) + lVar10);
              uVar6 = uVar9;
              FUN_109ec920c(uVar9,bVar3);
              if ((uint)uVar5 <= (uint)uVar6) {
                FUN_109ec920c(uVar9,bVar3);
                uVar5 = uVar9;
              }
              uVar11 = uVar11 + 1;
              lVar10 = lVar10 + 0x30;
            } while (uVar11 < *(uint *)(uVar7 + 0x10));
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
        return uVar5;
      }
      func_0x000109ec6c94(uVar5,uVar8,1,0,0,0);
      func_0x000109ec69f4();
      uVar7 = uVar5;
    }
  } while( true );
}



/* Entry: 109f4858c; end: 109f48593;  */

ulong FUN_109f4858c(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  while( true ) {
    bVar1 = *(byte *)(param_2 + 4);
    uVar3 = (ulong)bVar1;
    if (bVar1 != 0x13) break;
    param_2 = *(long *)(param_2 + 0x30);
    if (param_2 == 0) {
      return 1;
    }
  }
  if (bVar1 - 0x11 < 2) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 0x10) == 0) {
      return 1;
    }
    uVar6 = 1;
    plVar7 = *(long **)(param_2 + 0x30);
    do {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 4) != '\r')) {
        FUN_109f48594();
        uVar5 = (uint)uVar6;
        if ((uint)uVar6 <= (uint)lVar4) {
          uVar5 = (uint)lVar4;
        }
        uVar6 = (ulong)uVar5;
      }
      uVar3 = uVar3 - 1;
      plVar7 = plVar7 + 6;
    } while (uVar3 != 0);
    return uVar6;
  }
  FUN_109f48dd4();
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    return 1;
  }
  uVar5 = (uint)*(byte *)(param_2 + 0xd);
  if (*(byte *)(param_2 + 0xd) < 2) {
    uVar5 = 1;
  }
  if (uVar5 - 3 < 2) {
    return (ulong)(uint)(iVar2 << 2);
  }
  if (uVar5 == 1) {
    return uVar3;
  }
  if (uVar5 != 2) {
    return (ulong)(iVar2 * uVar5);
  }
  return (ulong)(uint)(iVar2 << 1);
}



/* Entry: 109f48594; end: 109f4866b;  */

ulong FUN_109f48594(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  while( true ) {
    bVar1 = *(byte *)(param_1 + 4);
    uVar3 = (ulong)bVar1;
    if (bVar1 != 0x13) break;
    param_1 = *(long *)(param_1 + 0x30);
    if (param_1 == 0) {
      return 1;
    }
  }
  if (bVar1 - 0x11 < 2) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) == 0) {
      return 1;
    }
    uVar6 = 1;
    plVar7 = *(long **)(param_1 + 0x30);
    do {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 4) != '\r')) {
        FUN_109f48594();
        uVar5 = (uint)uVar6;
        if ((uint)uVar6 <= (uint)lVar4) {
          uVar5 = (uint)lVar4;
        }
        uVar6 = (ulong)uVar5;
      }
      uVar3 = uVar3 - 1;
      plVar7 = plVar7 + 6;
    } while (uVar3 != 0);
    return uVar6;
  }
  FUN_109f48dd4();
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    return 1;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (*(byte *)(param_1 + 0xd) < 2) {
    uVar5 = 1;
  }
  if (uVar5 - 3 < 2) {
    return (ulong)(uint)(iVar2 << 2);
  }
  if (uVar5 == 1) {
    return uVar3;
  }
  if (uVar5 != 2) {
    return (ulong)(iVar2 * uVar5);
  }
  return (ulong)(uint)(iVar2 << 1);
}



/* Entry: 109f4866c; end: 109f48673;  */

void FUN_109f4866c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(byte *)(param_2 + 4) - 0x11 < 2) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 0x10) != 0) {
      uVar3 = 1;
      plVar5 = *(long **)(param_2 + 0x30);
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 4) != '\r')) {
          lVar1 = lVar2;
          FUN_109f48594();
          FUN_109f48674(lVar2);
          if (uVar3 <= (uint)lVar1) {
            uVar3 = (uint)lVar1;
          }
        }
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 6;
      } while (uVar4 != 0);
    }
  }
  else if (*(byte *)(param_2 + 4) == 0x13) {
    if ((*(long *)(param_2 + 0x30) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      FUN_109f487bc(param_2);
    }
  }
  else {
    FUN_109f48dd4();
  }
  return;
}



/* Entry: 109f48674; end: 109f487b3;  */

void FUN_109f48674(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(byte *)(param_1 + 4) - 0x11 < 2) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) != 0) {
      uVar3 = 1;
      plVar5 = *(long **)(param_1 + 0x30);
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 4) != '\r')) {
          lVar1 = lVar2;
          FUN_109f48594();
          FUN_109f48674(lVar2);
          if (uVar3 <= (uint)lVar1) {
            uVar3 = (uint)lVar1;
          }
        }
        uVar4 = uVar4 - 1;
        plVar5 = plVar5 + 6;
      } while (uVar4 != 0);
    }
  }
  else if (*(byte *)(param_1 + 4) == 0x13) {
    if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      FUN_109f487bc(param_1);
    }
  }
  else {
    FUN_109f48dd4();
  }
  return;
}



/* Entry: 109f487b4; end: 109f487bb;  */

uint FUN_109f487b4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 4) == '\x13') {
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = lVar3;
      FUN_109f48674(lVar3);
      FUN_109f48594(lVar3);
      uVar1 = ((int)lVar2 + (int)lVar3) - 1U & -(int)lVar3;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 109f487bc; end: 109f488b3;  */

uint FUN_109f487bc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 4) == '\x13') {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = lVar3;
      FUN_109f48674(lVar3);
      FUN_109f48594(lVar3);
      uVar1 = ((int)lVar2 + (int)lVar3) - 1U & -(int)lVar3;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 109f488b4; end: 109f488df;  */

void FUN_109f488b4(void)

{
  return;
}



/* Entry: 109f488e0; end: 109f489f7;  */

/* WARNING: Possible PIC construction at 0x000109f489a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f489a8) */

void FUN_109f488e0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c8 [56];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar1 = (undefined8 **)auStack_60;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar5 = ((long)puVar7 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109f48a0c();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + (long)puVar7);
    plStack_40 = plVar2 + uVar6 * 6;
    puStack_50[1] = 0;
    *puStack_50 = 0;
    puStack_50[3] = 0;
    puStack_50[2] = 0;
    puStack_50[5] = 0;
    puStack_50[4] = 0;
    puVar7 = puStack_50 + 6;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar9 = 0x109f489a8;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = puVar7;
  }
  else {
    FUN_109f489f8();
    func_0x000109f48b88(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109f489f8;
    plVar3 = (long *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar8;
    func_0x000104c4f6cc();
    ppuVar1 = &puStack_90;
    pcStack_78 = FUN_109f48a0c;
    ppuVar8 = &puStack_80;
    puStack_90 = puVar7;
    plStack_88 = param_1;
    if (param_2 < (undefined8 *)0x555555555555556) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x30);
      return;
    }
    uVar9 = 0x109f48a50;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)((long)ppuVar1 + -0x20) = puVar7;
  *(long **)((long)ppuVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar8;
  *(undefined8 *)((long)ppuVar1 + -8) = uVar9;
  *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
  *(undefined8 **)((long)ppuVar1 + -0x30) = param_4;
  *(long **)((long)ppuVar1 + -0x50) = plVar3;
  *(undefined1 **)((long)ppuVar1 + -0x48) = (undefined1 *)((long)ppuVar1 + -0x30);
  *(undefined1 **)((long)ppuVar1 + -0x40) = (undefined1 *)((long)ppuVar1 + -0x28);
  puVar7 = param_2;
  if (param_2 == param_3) {
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
  }
  else {
    do {
      uVar10 = puVar7[1];
      uVar9 = *puVar7;
      param_4[2] = puVar7[2];
      param_4[1] = uVar10;
      *param_4 = uVar9;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar10 = puVar7[4];
      uVar9 = puVar7[3];
      param_4[5] = puVar7[5];
      param_4[4] = uVar10;
      param_4[3] = uVar9;
      puVar7 = puVar7 + 6;
      param_4 = param_4 + 6;
    } while (puVar7 != param_3);
    *(undefined8 **)((long)ppuVar1 + -0x28) = param_4;
    *(undefined1 *)((long)ppuVar1 + -0x38) = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 6;
    } while (param_2 != param_3);
  }
  FUN_109f48b10((undefined1 *)((long)ppuVar1 + -0x50));
  return;
}



/* Entry: 109f489f8; end: 109f48a0b;  */

void FUN_109f489f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar4 = puVar2[4];
        uVar3 = puVar2[3];
        puStack_58[5] = puVar2[5];
        puStack_58[4] = uVar4;
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 6;
        puStack_58 = puStack_58 + 6;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_109f48b10(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 109f48a0c; end: 109f48b0f;  */

void FUN_109f48a0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar3 = puVar1[4];
        uVar2 = puVar1[3];
        puStack_48[5] = puVar1[5];
        puStack_48[4] = uVar3;
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 6;
        puStack_48 = puStack_48 + 6;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    FUN_109f48b10(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 109f48b10; end: 109f48b43;  */

long FUN_109f48b10(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109f48b44(param_1);
  }
  return param_1;
}



/* Entry: 109f48b44; end: 109f48c4f;  */

/* WARNING: Removing unreachable block (ram,0x000109f48b70) */

void FUN_109f48b44(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x30
      ) {
  }
  return;
}



/* Entry: 109f48c50; end: 109f48c9b;  */

/* WARNING: Removing unreachable block (ram,0x000109f48c7c) */

void FUN_109f48c50(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f48c9c; end: 109f48dd3;  */

undefined8 * FUN_109f48c9c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 4) * -0x5555555555555555 + 1;
  if (uVar4 < 0x555555555555556) {
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0x555555555555555;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109f48a0c();
    }
    plStack_50 = (long *)((long)plVar2 + lVar6);
    uVar8 = param_2[1];
    uVar7 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar8;
    *plStack_50 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar8 = param_2[4];
    uVar7 = param_2[3];
    plStack_50[5] = param_2[5];
    plStack_50[4] = uVar8;
    plStack_50[3] = uVar7;
    puVar1 = plStack_50 + 6;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = puVar1;
    plStack_40 = plVar2 + uVar5 * 6;
    func_0x000109f48a50(param_1,*param_1,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 6);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000109f48b88(&plStack_58);
    return puVar1;
  }
  FUN_109f489f8();
  func_0x000109f48b88(&plStack_58);
  __Unwind_Resume();
  if ((uint)param_1 < 0xc) {
    return (undefined8 *)(ulong)*(uint *)(&UNK_10e47cd38 + ((ulong)param_1 & 0xffffffff) * 4);
  }
  return (undefined8 *)0x0;
}



/* Entry: 109f48dd4; end: 109f491c7;  */

undefined4 FUN_109f48dd4(uint param_1)

{
  if (param_1 < 0xc) {
    return *(undefined4 *)(&UNK_10e47cd38 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 109f491c8; end: 109f4924f;  */

void FUN_109f491c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  auStack_40[0] = 0;
  uStack_38 = 0;
  FUN_109f4a298(auStack_40,param_2);
  FUN_109f49250(param_1,auStack_40,param_3,0x20,0,0);
  FUN_109f49928(&uStack_38,auStack_40[0]);
  return;
}



/* Entry: 109f49250; end: 109f4940f;  */

void FUN_109f49250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long ***ppplVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  int iVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  long **pplVar17;
  undefined8 *extraout_x8_01;
  long lVar18;
  uint uVar19;
  long alStack_4d8 [3];
  long *plStack_4c0;
  long alStack_4b8 [3];
  long *plStack_4a0;
  undefined4 uStack_498;
  long ***ppplStack_490;
  long lStack_488;
  undefined1 uStack_480;
  undefined4 uStack_47c;
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  char *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  int iStack_408;
  undefined1 uStack_400;
  long alStack_3f8 [3];
  long *plStack_3e0;
  long lStack_3d8;
  long ***ppplStack_368;
  long **pplStack_360;
  long alStack_358 [3];
  long *plStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 *puStack_320;
  undefined8 *puStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [640];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = (long *)0x28;
  __Znwm();
  plVar16 = plVar6 + 1;
  *plVar16 = 0;
  plVar6[2] = 0;
  plStack_2f8 = plVar6 + 3;
  *plStack_2f8 = (long)&PTR_DAT_110b879d8;
  *plVar6 = (long)&PTR_FUN_110b87988;
  plVar6[4] = (long)param_1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = *plVar16 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plStack_2f0 = plVar6;
  plStack_2e8 = plStack_2f8;
  plStack_2e0 = plVar6;
  FUN_109f520d8(auStack_2d8,&plStack_2e8,param_4,param_6);
  plVar6 = plStack_2e0;
  if (plStack_2e0 != (long *)0x0) {
    plVar16 = plStack_2e0 + 1;
    do {
      lVar18 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    plVar16 = plStack_2f0 + 1;
    do {
      lVar18 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  uVar19 = (uint)param_3;
  FUN_109f516b4(auStack_2d8,param_2,~uVar19 >> 0x1f,param_5,
                uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU),0);
  puVar7 = auStack_2d8;
  func_0x000109f52bcc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109f52bcc(auStack_2d8);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume(puVar7);
  pcStack_308 = FUN_109f49410;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_340 = (long *)0x0;
  uVar13 = 1;
  uVar15 = 0;
  uStack_330 = param_3;
  uStack_328 = param_2;
  puStack_320 = puVar7;
  puStack_318 = param_1;
  puStack_310 = &stack0xfffffffffffffff0;
  FUN_109f4956c(&ppplStack_368);
  if (plStack_340 == alStack_358) {
    lVar18 = 0x20;
LAB_109f49470:
    (**(code **)(*plStack_340 + lVar18))();
  }
  else if (plStack_340 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_109f49470;
  }
  FUN_109f49884(extraout_x8,&ppplStack_368);
  uVar11 = (ulong)ppplStack_368 & 0xff;
  pppplVar8 = (long ****)&pplStack_360;
  FUN_109f49928();
  while( true ) {
    iVar10 = (int)uVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
      return;
    }
    ___stack_chk_fail();
    uVar11 = (ulong)ppplStack_368 & 0xff;
    FUN_109f49928(&pplStack_360);
    uVar12 = (undefined1)uVar13;
    uVar14 = (undefined1)uVar15;
    if (iVar10 != 1) break;
    ___cxa_begin_catch();
    (*(code *)(*pppplVar8)[2])();
    pppplVar9 = &ppplStack_368;
    ppplStack_368 = (long ***)pppplVar8;
    FUN_109f498d4();
    extraout_x8[0xe] = 0;
    extraout_x8[0xb] = 0;
    extraout_x8[10] = 0;
    extraout_x8[0xd] = 0;
    extraout_x8[0xc] = 0;
    extraout_x8[7] = 0;
    extraout_x8[6] = 0;
    extraout_x8[9] = 0;
    extraout_x8[8] = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    ___cxa_end_catch();
    pppplVar8 = pppplVar9;
  }
  __Unwind_Resume();
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8_00 = 0;
  *(undefined8 *)(extraout_x8_00 + 8) = 0;
  bVar2 = *(byte *)((long)pppplVar8 + 0x17);
  pppplVar9 = (long ****)*pppplVar8;
  ppplVar1 = pppplVar8[1];
  func_0x000109f55a90(alStack_4d8);
  if (-1 < (char)bVar2) {
    ppplVar1 = (long ***)(ulong)bVar2;
    pppplVar9 = pppplVar8;
  }
  if (plStack_4c0 == (long *)0x0) {
    pplVar17 = &plStack_3e0;
LAB_109f49604:
    *pplVar17 = (long *)0x0;
  }
  else {
    if (plStack_4c0 != alStack_4d8) {
      pplVar17 = &plStack_4c0;
      plStack_3e0 = plStack_4c0;
      goto LAB_109f49604;
    }
    plStack_3e0 = alStack_3f8;
    (**(code **)(*plStack_4c0 + 0x18))(plStack_4c0,alStack_3f8);
  }
  plVar6 = plStack_3e0;
  plStack_4a0 = plStack_3e0;
  if (plStack_3e0 != (long *)0x0) {
    if (plStack_3e0 == alStack_3f8) {
      plStack_4a0 = alStack_4b8;
      (**(code **)(*plStack_3e0 + 0x18))(plStack_3e0,alStack_4b8);
    }
    else {
      (**(code **)(*plStack_3e0 + 0x10))();
      plStack_4a0 = plVar6;
    }
  }
  uStack_498 = 0;
  lStack_488 = (long)pppplVar9 + (long)ppplVar1;
  uStack_47c = 0xffffffff;
  uStack_478 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_430 = 0;
  pcStack_428 = "";
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_420 = 0;
  ppplStack_490 = (long ***)pppplVar9;
  uStack_480 = uVar14;
  _localeconv();
  if ((char *)*plVar6 == (char *)0x0) {
    iStack_408 = 0x2e;
  }
  else {
    iStack_408 = (int)*(char *)*plVar6;
  }
  uStack_400 = uVar12;
  uVar5 = (int)&ppplStack_490;
  FUN_109f54c8c();
  uStack_498 = uVar5;
  if (plStack_3e0 == alStack_3f8) {
    lVar18 = 0x20;
LAB_109f496f8:
    (**(code **)(*plStack_3e0 + lVar18))();
  }
  else if (plStack_3e0 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_109f496f8;
  }
  puVar7 = extraout_x8_00;
  FUN_109f52bfc(alStack_4b8);
  iVar10 = (int)puVar7;
  func_0x000109f55a50(&ppplStack_490);
  if (plStack_4a0 == alStack_4b8) {
    lVar18 = 0x20;
LAB_109f49738:
    (**(code **)(*plStack_4a0 + lVar18))();
  }
  else if (plStack_4a0 != (long *)0x0) {
    lVar18 = 0x28;
    goto LAB_109f49738;
  }
  if (plStack_4c0 == alStack_4d8) {
    lVar18 = 0x20;
  }
  else {
    plVar6 = plStack_4c0;
    if (plStack_4c0 == (long *)0x0) goto LAB_109f49770;
    lVar18 = 0x28;
  }
  (**(code **)(*plStack_4c0 + lVar18))();
  plVar6 = plStack_4c0;
LAB_109f49770:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x000104bd46a0(plVar6);
    FUN_109f49928(extraout_x8_00 + 8,*extraout_x8_00);
  }
  __Unwind_Resume(plVar6);
  extraout_x8_01[0xe] = 0;
  extraout_x8_01[0xb] = 0;
  extraout_x8_01[10] = 0;
  extraout_x8_01[0xd] = 0;
  extraout_x8_01[0xc] = 0;
  extraout_x8_01[7] = 0;
  extraout_x8_01[6] = 0;
  extraout_x8_01[9] = 0;
  extraout_x8_01[8] = 0;
  extraout_x8_01[3] = 0;
  extraout_x8_01[2] = 0;
  extraout_x8_01[5] = 0;
  extraout_x8_01[4] = 0;
  extraout_x8_01[1] = 0;
  *extraout_x8_01 = 0;
  FUN_109f56e94();
  return;
}



/* Entry: 109f49410; end: 109f4956b;  */

void FUN_109f49410(undefined8 *param_1,undefined8 param_2)

{
  long ***ppplVar1;
  byte bVar2;
  undefined4 uVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *extraout_x8;
  long **pplVar15;
  undefined8 *extraout_x8_00;
  long alStack_1d8 [3];
  long *plStack_1c0;
  long alStack_1b8 [3];
  long *plStack_1a0;
  undefined4 uStack_198;
  long ***ppplStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined1 uStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  long lStack_d8;
  long ***ppplStack_68;
  long **pplStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_40 = (long *)0x0;
  uVar11 = 1;
  uVar13 = 0;
  FUN_109f4956c(&ppplStack_68,param_2,alStack_58);
  if (plStack_40 == alStack_58) {
    lVar14 = 0x20;
LAB_109f49470:
    (**(code **)(*plStack_40 + lVar14))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar14 = 0x28;
    goto LAB_109f49470;
  }
  FUN_109f49884(param_1,&ppplStack_68);
  uVar8 = (ulong)ppplStack_68 & 0xff;
  pppplVar4 = (long ****)&pplStack_60;
  FUN_109f49928();
  while( true ) {
    iVar7 = (int)uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    uVar8 = (ulong)ppplStack_68 & 0xff;
    FUN_109f49928(&pplStack_60);
    uVar10 = (undefined1)uVar11;
    uVar12 = (undefined1)uVar13;
    if (iVar7 != 1) break;
    ___cxa_begin_catch();
    (*(code *)(*pppplVar4)[2])();
    pppplVar5 = &ppplStack_68;
    ppplStack_68 = (long ***)pppplVar4;
    FUN_109f498d4();
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    ___cxa_end_catch();
    pppplVar4 = pppplVar5;
  }
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 8) = 0;
  bVar2 = *(byte *)((long)pppplVar4 + 0x17);
  pppplVar5 = (long ****)*pppplVar4;
  ppplVar1 = pppplVar4[1];
  func_0x000109f55a90(alStack_1d8);
  if (-1 < (char)bVar2) {
    ppplVar1 = (long ***)(ulong)bVar2;
    pppplVar5 = pppplVar4;
  }
  if (plStack_1c0 == (long *)0x0) {
    pplVar15 = &plStack_e0;
LAB_109f49604:
    *pplVar15 = (long *)0x0;
  }
  else {
    if (plStack_1c0 != alStack_1d8) {
      pplVar15 = &plStack_1c0;
      plStack_e0 = plStack_1c0;
      goto LAB_109f49604;
    }
    plStack_e0 = alStack_f8;
    (**(code **)(*plStack_1c0 + 0x18))(plStack_1c0,alStack_f8);
  }
  plVar6 = plStack_e0;
  plStack_1a0 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    if (plStack_e0 == alStack_f8) {
      plStack_1a0 = alStack_1b8;
      (**(code **)(*plStack_e0 + 0x18))(plStack_e0,alStack_1b8);
    }
    else {
      (**(code **)(*plStack_e0 + 0x10))();
      plStack_1a0 = plVar6;
    }
  }
  uStack_198 = 0;
  lStack_188 = (long)pppplVar5 + (long)ppplVar1;
  uStack_17c = 0xffffffff;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  pcStack_128 = "";
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  ppplStack_190 = (long ***)pppplVar5;
  uStack_180 = uVar12;
  _localeconv();
  if ((char *)*plVar6 == (char *)0x0) {
    iStack_108 = 0x2e;
  }
  else {
    iStack_108 = (int)*(char *)*plVar6;
  }
  uStack_100 = uVar10;
  uVar3 = (int)&ppplStack_190;
  FUN_109f54c8c();
  uStack_198 = uVar3;
  if (plStack_e0 == alStack_f8) {
    lVar14 = 0x20;
LAB_109f496f8:
    (**(code **)(*plStack_e0 + lVar14))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar14 = 0x28;
    goto LAB_109f496f8;
  }
  puVar9 = extraout_x8;
  FUN_109f52bfc(alStack_1b8);
  iVar7 = (int)puVar9;
  func_0x000109f55a50(&ppplStack_190);
  if (plStack_1a0 == alStack_1b8) {
    lVar14 = 0x20;
LAB_109f49738:
    (**(code **)(*plStack_1a0 + lVar14))();
  }
  else if (plStack_1a0 != (long *)0x0) {
    lVar14 = 0x28;
    goto LAB_109f49738;
  }
  if (plStack_1c0 == alStack_1d8) {
    lVar14 = 0x20;
  }
  else {
    plVar6 = plStack_1c0;
    if (plStack_1c0 == (long *)0x0) goto LAB_109f49770;
    lVar14 = 0x28;
  }
  (**(code **)(*plStack_1c0 + lVar14))();
  plVar6 = plStack_1c0;
LAB_109f49770:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0(plVar6);
    FUN_109f49928(extraout_x8 + 8,*extraout_x8);
  }
  __Unwind_Resume(plVar6);
  extraout_x8_00[0xe] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[0xd] = 0;
  extraout_x8_00[0xc] = 0;
  extraout_x8_00[7] = 0;
  extraout_x8_00[6] = 0;
  extraout_x8_00[9] = 0;
  extraout_x8_00[8] = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  FUN_109f56e94();
  return;
}



/* Entry: 109f4956c; end: 109f49883;  */

void FUN_109f4956c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  undefined1 *puVar7;
  long **pplVar8;
  long lVar9;
  undefined8 *extraout_x8;
  long alStack_168 [3];
  long *plStack_150;
  long alStack_148 [3];
  long *plStack_130;
  undefined4 uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined1 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  undefined1 uStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  bVar3 = *(byte *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  func_0x000109f55a90(alStack_168);
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
    puVar1 = param_2;
  }
  if (plStack_150 == (long *)0x0) {
    pplVar8 = &plStack_70;
LAB_109f49604:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (plStack_150 != alStack_168) {
      pplVar8 = &plStack_150;
      plStack_70 = plStack_150;
      goto LAB_109f49604;
    }
    plStack_70 = alStack_88;
    (**(code **)(*plStack_150 + 0x18))(plStack_150,alStack_88);
  }
  plVar5 = plStack_70;
  plStack_130 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    if (plStack_70 == alStack_88) {
      plStack_130 = alStack_148;
      (**(code **)(*plStack_70 + 0x18))(plStack_70,alStack_148);
    }
    else {
      (**(code **)(*plStack_70 + 0x10))();
      plStack_130 = plVar5;
    }
  }
  uStack_128 = 0;
  lStack_118 = (long)puVar1 + uVar2;
  uStack_10c = 0xffffffff;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  pcStack_b8 = "";
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  puStack_120 = puVar1;
  uStack_110 = param_5;
  _localeconv();
  if ((char *)*plVar5 == (char *)0x0) {
    iStack_98 = 0x2e;
  }
  else {
    iStack_98 = (int)*(char *)*plVar5;
  }
  uStack_90 = param_4;
  uVar4 = (int)&puStack_120;
  FUN_109f54c8c();
  uStack_128 = uVar4;
  if (plStack_70 == alStack_88) {
    lVar9 = 0x20;
LAB_109f496f8:
    (**(code **)(*plStack_70 + lVar9))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_109f496f8;
  }
  puVar7 = param_1;
  FUN_109f52bfc(alStack_148);
  iVar6 = (int)puVar7;
  func_0x000109f55a50(&puStack_120);
  if (plStack_130 == alStack_148) {
    lVar9 = 0x20;
LAB_109f49738:
    (**(code **)(*plStack_130 + lVar9))();
  }
  else if (plStack_130 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_109f49738;
  }
  if (plStack_150 == alStack_168) {
    lVar9 = 0x20;
  }
  else {
    plVar5 = plStack_150;
    if (plStack_150 == (long *)0x0) goto LAB_109f49770;
    lVar9 = 0x28;
  }
  (**(code **)(*plStack_150 + lVar9))();
  plVar5 = plStack_150;
LAB_109f49770:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x000104bd46a0(plVar5);
    FUN_109f49928(param_1 + 8,*param_1);
  }
  __Unwind_Resume(plVar5);
  extraout_x8[0xe] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  FUN_109f56e94();
  return;
}



/* Entry: 109f49884; end: 109f498d3;  */

void FUN_109f49884(undefined8 *param_1,undefined8 param_2)

{
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_109f56e94(param_2,param_1);
  return;
}



/* Entry: 109f498d4; end: 109f49927;  */

undefined * FUN_109f498d4(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,*param_1);
  ppuVar6 = &PTR_PTR_1132ff288;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109f49928; end: 109f49dd7;  */

void FUN_109f49928(long *param_1,int param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  char cVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  
  ppppuStack_a0 = (undefined8 *****)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  ppppuStack_90 = (undefined8 *****)0x0;
  if (param_2 == 1) {
    FUN_109f49dd8(&ppppuStack_a0,
                  (((long *)*param_1)[1] - *(long *)*param_1 >> 3) * -0x3333333333333333);
    lVar11 = *(long *)*param_1;
    lVar4 = ((long *)*param_1)[1];
    if (lVar11 != lVar4) {
      do {
        if (ppppuStack_98 < ppppuStack_90) {
          *(undefined1 *)ppppuStack_98 = *(undefined1 *)(lVar11 + 0x18);
          ppppuStack_98[1] = *(undefined8 *****)(lVar11 + 0x20);
          *(undefined1 *)(lVar11 + 0x18) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          pppppuVar9 = (undefined8 *****)(ppppuStack_98 + 2);
        }
        else {
          lVar13 = (long)ppppuStack_98 - (long)ppppuStack_a0;
          uVar1 = (lVar13 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_109f49fc0();
LAB_109f49d9c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x109f49da0);
            (*pcVar8)();
          }
          uVar12 = (long)ppppuStack_90 - (long)ppppuStack_a0 >> 3;
          if (uVar12 <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppppuStack_90 - (long)ppppuStack_a0)) {
            uVar12 = 0xfffffffffffffff;
          }
          ppppuStack_68 = &ppppuStack_a0;
          if (uVar12 == 0) {
            pppppuVar9 = (undefined8 *****)0x0;
          }
          else {
            pppppuVar9 = &ppppuStack_a0;
            FUN_109f49fd4();
          }
          puVar2 = (undefined1 *)((long)pppppuVar9 + lVar13);
          ppppuStack_70 = pppppuVar9 + uVar12 * 2;
          ppppuStack_88 = pppppuVar9;
          ppppuStack_80 = (undefined8 ****)puVar2;
          *puVar2 = *(undefined1 *)(lVar11 + 0x18);
          *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(lVar11 + 0x20);
          *(undefined1 *)(lVar11 + 0x18) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          ppppuStack_78 = (undefined8 ****)(puVar2 + 0x10);
          pppppuVar3 = (undefined8 *****)
                       ((long)ppppuStack_80 + ((long)ppppuStack_a0 - (long)ppppuStack_98));
          func_0x000109f4a008(&ppppuStack_a0,ppppuStack_a0,ppppuStack_98,pppppuVar3);
          pppppuVar9 = (undefined8 *****)ppppuStack_78;
          ppppuVar7 = ppppuStack_90;
          ppppuStack_90 = ppppuStack_70;
          ppppuStack_98 = ppppuStack_78;
          ppppuStack_78 = ppppuStack_a0;
          ppppuStack_70 = ppppuVar7;
          ppppuStack_88 = ppppuStack_a0;
          ppppuStack_80 = ppppuStack_a0;
          ppppuStack_a0 = pppppuVar3;
          FUN_109f4a0dc(&ppppuStack_88);
        }
        lVar11 = lVar11 + 0x28;
        ppppuStack_98 = pppppuVar9;
      } while (lVar11 != lVar4);
    }
  }
  else if (param_2 == 2) {
    FUN_109f49dd8(&ppppuStack_a0,((long *)*param_1)[1] - *(long *)*param_1 >> 4);
    lVar4 = ((long *)*param_1)[1];
    for (lVar11 = *(long *)*param_1; lVar11 != lVar4; lVar11 = lVar11 + 0x10) {
      FUN_109f49e90(&ppppuStack_a0,lVar11);
    }
  }
  if (ppppuStack_a0 != ppppuStack_98) {
    do {
      cVar5 = *(char *)(ppppuStack_98 + -2);
      pppuStack_a8 = ppppuStack_98[-1];
      *(undefined1 *)(ppppuStack_98 + -2) = 0;
      ppppuStack_98[-1] = (undefined8 ****)0x0;
      pppppuVar9 = (undefined8 *****)(ppppuStack_98 + -2);
      FUN_109f49928(ppppuStack_98 + -1,*(undefined1 *)pppppuVar9);
      ppppuStack_98 = pppppuVar9;
      if (cVar5 == '\x01') {
        pppuVar14 = (undefined8 ***)*pppuStack_a8;
        pppuVar15 = (undefined8 ***)pppuStack_a8[1];
        if (pppuVar14 != pppuVar15) {
          do {
            if (pppppuVar9 < ppppuStack_90) {
              *(undefined1 *)pppppuVar9 = *(undefined1 *)(pppuVar14 + 3);
              pppppuVar9[1] = (undefined8 ****)pppuVar14[4];
              *(undefined1 *)(pppuVar14 + 3) = 0;
              pppuVar14[4] = (undefined8 **)0x0;
              pppppuVar9 = pppppuVar9 + 2;
            }
            else {
              lVar11 = (long)pppppuVar9 - (long)ppppuStack_a0;
              uVar1 = (lVar11 >> 4) + 1;
              ppppuStack_98 = pppppuVar9;
              if (uVar1 >> 0x3c != 0) {
                FUN_109f49fc0();
                goto LAB_109f49d9c;
              }
              uVar12 = (long)ppppuStack_90 - (long)ppppuStack_a0 >> 3;
              if (uVar12 <= uVar1) {
                uVar12 = uVar1;
              }
              if (0x7fffffffffffffef < (ulong)((long)ppppuStack_90 - (long)ppppuStack_a0)) {
                uVar12 = 0xfffffffffffffff;
              }
              ppppuStack_68 = &ppppuStack_a0;
              if (uVar12 == 0) {
                pppppuVar9 = (undefined8 *****)0x0;
              }
              else {
                pppppuVar9 = &ppppuStack_a0;
                FUN_109f49fd4();
              }
              puVar2 = (undefined1 *)((long)pppppuVar9 + lVar11);
              ppppuStack_70 = pppppuVar9 + uVar12 * 2;
              ppppuStack_88 = pppppuVar9;
              ppppuStack_80 = (undefined8 ****)puVar2;
              *puVar2 = *(undefined1 *)(pppuVar14 + 3);
              *(undefined8 ***)(puVar2 + 8) = pppuVar14[4];
              *(undefined1 *)(pppuVar14 + 3) = 0;
              pppuVar14[4] = (undefined8 **)0x0;
              ppppuStack_78 = (undefined8 ****)(puVar2 + 0x10);
              pppppuVar3 = (undefined8 *****)
                           ((long)ppppuStack_80 + ((long)ppppuStack_a0 - (long)ppppuStack_98));
              func_0x000109f4a008(&ppppuStack_a0,ppppuStack_a0,ppppuStack_98,pppppuVar3);
              pppppuVar9 = (undefined8 *****)ppppuStack_78;
              ppppuVar7 = ppppuStack_90;
              ppppuStack_90 = ppppuStack_70;
              ppppuStack_98 = ppppuStack_78;
              ppppuStack_78 = ppppuStack_a0;
              ppppuStack_70 = ppppuVar7;
              ppppuStack_88 = ppppuStack_a0;
              ppppuStack_80 = ppppuStack_a0;
              ppppuStack_a0 = pppppuVar3;
              FUN_109f4a0dc(&ppppuStack_88);
            }
            pppuVar14 = pppuVar14 + 5;
          } while (pppuVar14 != pppuVar15);
          pppuVar14 = (undefined8 ***)*pppuStack_a8;
          ppppuStack_98 = pppppuVar9;
        }
        FUN_109f4a12c(pppuStack_a8,pppuVar14);
      }
      else if (cVar5 == '\x02') {
        pppuVar14 = (undefined8 ***)*pppuStack_a8;
        pppuVar15 = (undefined8 ***)pppuStack_a8[1];
        if (pppuVar14 != pppuVar15) {
          do {
            FUN_109f49e90(&ppppuStack_a0,pppuVar14);
            pppuVar14 = pppuVar14 + 2;
          } while (pppuVar14 != pppuVar15);
          pppuVar14 = (undefined8 ***)*pppuStack_a8;
          pppuVar15 = (undefined8 ***)pppuStack_a8[1];
        }
        pppuVar6 = pppuStack_a8;
        if (pppuVar15 != pppuVar14) {
          pppuVar15 = pppuVar15 + -1;
          do {
            pppuVar16 = pppuVar15 + -1;
            FUN_109f49928(pppuVar15,*(undefined1 *)pppuVar16);
            pppuVar15 = pppuVar15 + -2;
          } while (pppuVar16 != pppuVar14);
        }
        pppuVar6[1] = pppuVar14;
      }
      FUN_109f49928(&pppuStack_a8,cVar5);
    } while (ppppuStack_a0 != ppppuStack_98);
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      ppppuStack_88 = (undefined8 ****)*param_1;
      func_0x000109f4a1d0(&ppppuStack_88);
    }
    else {
      if (param_2 != 2) goto LAB_109f49d60;
      ppppuStack_88 = (undefined8 ****)*param_1;
      FUN_109f4a210(&ppppuStack_88);
    }
LAB_109f49d58:
    plVar10 = (long *)*param_1;
  }
  else if (param_2 == 3) {
    plVar10 = (long *)*param_1;
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      lVar11 = *plVar10;
LAB_109f49d54:
      __ZdlPv(lVar11);
      goto LAB_109f49d58;
    }
  }
  else {
    if (param_2 != 8) goto LAB_109f49d60;
    plVar10 = (long *)*param_1;
    lVar11 = *plVar10;
    if (lVar11 != 0) {
      plVar10[1] = lVar11;
      goto LAB_109f49d54;
    }
  }
  __ZdlPv(plVar10);
LAB_109f49d60:
  ppppuStack_88 = &ppppuStack_a0;
  FUN_109f4a210(&ppppuStack_88);
  return;
}



/* Entry: 109f49dd8; end: 109f49e8f;  */

/* WARNING: Possible PIC construction at 0x000109f49e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f49f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f49e44) */
/* WARNING: Removing unreachable block (ram,0x000109f49f70) */

void FUN_109f49dd8(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined1 **)auStack_60;
  lVar5 = *param_1;
  if (param_2 <= (undefined1 *)(param_1[2] - lVar5 >> 4)) {
    return;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar6 = param_1[1];
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_109f49fd4();
    lStack_50 = (long)plVar3 + (lVar6 - lVar5);
    plStack_40 = plVar3 + (long)param_2 * 2;
    puVar4 = (undefined1 *)*param_1;
    param_3 = (undefined1 *)param_1[1];
    param_4 = puVar4 + (lStack_50 - (long)param_3);
    uVar11 = 0x109f49e44;
    param_2 = param_4;
    pppuVar10 = (undefined8 ***)&stack0xfffffffffffffff0;
    plStack_58 = plVar3;
    lStack_48 = lStack_50;
  }
  else {
    FUN_109f49fc0();
    FUN_109f4a0dc(&plStack_58);
    __Unwind_Resume();
    ppuVar2 = (undefined1 **)auStack_c0;
    pcStack_68 = FUN_109f49e90;
    pppuVar10 = &ppuStack_70;
    puVar4 = (undefined1 *)param_1[1];
    if (puVar4 < (undefined1 *)param_1[2]) {
      *puVar4 = *param_2;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      param_1[1] = (long)(puVar4 + 0x10);
      return;
    }
    lVar5 = (long)puVar4 - *param_1;
    uVar1 = (lVar5 >> 4) + 1;
    ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
    if (uVar1 >> 0x3c == 0) {
      uVar7 = param_1[2] - *param_1;
      uVar8 = (long)uVar7 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar8 = 0xfffffffffffffff;
      }
      plStack_98 = param_1;
      if (uVar8 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_109f49fd4();
      }
      puStack_b0 = (undefined1 *)((long)plVar3 + lVar5);
      plStack_a0 = plVar3 + uVar8 * 2;
      *puStack_b0 = *param_2;
      *(undefined8 *)(puStack_b0 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puStack_a8 = puStack_b0 + 0x10;
      puVar4 = (undefined1 *)*param_1;
      param_3 = (undefined1 *)param_1[1];
      param_4 = puStack_b0 + ((long)puVar4 - (long)param_3);
      uVar11 = 0x109f49f70;
      param_2 = param_4;
      plStack_b8 = plVar3;
    }
    else {
      puVar4 = param_2;
      FUN_109f49fc0();
      FUN_109f4a0dc(&plStack_b8);
      __Unwind_Resume(param_1);
      pcStack_c8 = FUN_109f49fc0;
      ppuStack_d0 = pppuVar10;
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      ppuVar2 = &puStack_f0;
      pcStack_d8 = FUN_109f49fd4;
      pppuVar10 = (undefined8 ***)&puStack_e0;
      puStack_f0 = param_2;
      plStack_e8 = param_1;
      if ((ulong)puVar4 >> 0x3c == 0) {
        puStack_e0 = &ppuStack_d0;
        __Znwm((long)puVar4 << 4);
        return;
      }
      uVar11 = 0x109f4a008;
      puStack_e0 = &ppuStack_d0;
      func_0x000104c4f740();
    }
  }
  if (puVar4 != param_3) {
    *(undefined1 **)((long)ppuVar2 + -0x20) = param_2;
    *(long **)((long)ppuVar2 + -0x18) = param_1;
    *(undefined8 ****)((long)ppuVar2 + -0x10) = pppuVar10;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar11;
    puVar9 = puVar4;
    do {
      *param_4 = *puVar9;
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar9 + 8);
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9 = puVar9 + 0x10;
      param_4 = param_4 + 0x10;
    } while (puVar9 != param_3);
    do {
      puVar9 = puVar4 + 0x10;
      FUN_109f49928(puVar4 + 8,*puVar4);
      puVar4 = puVar9;
    } while (puVar9 != param_3);
  }
  return;
}



/* Entry: 109f49e90; end: 109f49fbf;  */

/* WARNING: Possible PIC construction at 0x000109f49f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f49f70) */

void FUN_109f49e90(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined1 **)auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 < (undefined1 *)param_1[2]) {
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[1] = (long)(puVar4 + 0x10);
    return;
  }
  lVar8 = (long)puVar4 - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109f49fd4();
    }
    puStack_50 = (undefined1 *)((long)plVar3 + lVar8);
    plStack_40 = plVar3 + uVar6 * 2;
    *puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puStack_48 = puStack_50 + 0x10;
    puVar4 = (undefined1 *)*param_1;
    param_3 = (undefined1 *)param_1[1];
    param_4 = puStack_50 + ((long)puVar4 - (long)param_3);
    uVar10 = 0x109f49f70;
    param_2 = param_4;
    plStack_58 = plVar3;
  }
  else {
    puVar4 = param_2;
    FUN_109f49fc0();
    FUN_109f4a0dc(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109f49fc0;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc(&DAT_10f62a4d8);
    ppuVar2 = &puStack_90;
    pcStack_78 = FUN_109f49fd4;
    ppuVar9 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar4 >> 0x3c == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)puVar4 << 4);
      return;
    }
    uVar10 = 0x109f4a008;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  if (puVar4 != param_3) {
    *(undefined1 **)((long)ppuVar2 + -0x20) = param_2;
    *(long **)((long)ppuVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar10;
    puVar7 = puVar4;
    do {
      *param_4 = *puVar7;
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar7 + 8);
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      puVar7 = puVar7 + 0x10;
      param_4 = param_4 + 0x10;
    } while (puVar7 != param_3);
    do {
      puVar7 = puVar4 + 0x10;
      FUN_109f49928(puVar4 + 8,*puVar4);
      puVar4 = puVar7;
    } while (puVar7 != param_3);
  }
  return;
}



/* Entry: 109f49fc0; end: 109f49fd3;  */

void FUN_109f49fc0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        FUN_109f49928(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 109f49fd4; end: 109f4a077;  */

void FUN_109f49fd4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        FUN_109f49928(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 109f4a078; end: 109f4a0db;  */

long FUN_109f4a078(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined1 *)**(undefined8 **)(param_1 + 8);
    if ((undefined1 *)**(undefined8 **)(param_1 + 0x10) != puVar2) {
      puVar1 = (undefined1 *)**(undefined8 **)(param_1 + 0x10) + -8;
      do {
        puVar3 = puVar1 + -8;
        FUN_109f49928(puVar1,*puVar3);
        puVar1 = puVar1 + -0x10;
      } while (puVar3 != puVar2);
    }
  }
  return param_1;
}



/* Entry: 109f4a0dc; end: 109f4a12b;  */

long * FUN_109f4a0dc(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    uVar2 = *(undefined1 *)(lVar3 + -0x10);
    param_1[2] = lVar3 + -0x10;
    FUN_109f49928(lVar3 + -8,uVar2);
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f4a12c; end: 109f4a18f;  */

/* WARNING: Removing unreachable block (ram,0x000109f4a16c) */

void FUN_109f4a12c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x28) {
    FUN_109f49928(lVar1 + -8,*(undefined1 *)(lVar1 + -0x10));
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109f4a190; end: 109f4a20f;  */

void FUN_109f4a190(undefined8 *param_1)

{
  FUN_109f49928(param_1 + 4,*(undefined1 *)(param_1 + 3));
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109f4a210; end: 109f4a297;  */

void FUN_109f4a210(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined1 *)*puVar2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
    if ((undefined1 *)puVar2[1] != puVar3) {
      puVar1 = (undefined1 *)puVar2[1] + -8;
      do {
        puVar4 = puVar1 + -8;
        FUN_109f49928(puVar1,*puVar4);
        puVar1 = puVar1 + -0x10;
      } while (puVar4 != puVar3);
      puVar1 = *(undefined1 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 109f4a298; end: 109f4c30b;  */

void FUN_109f4a298(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 ****ppppuVar17;
  undefined8 **ppuVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar22;
  undefined8 ***pppuVar23;
  undefined8 ****unaff_x28;
  undefined8 **ppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 ***pppuStack_388;
  undefined1 auStack_380 [8];
  undefined8 uStack_378;
  undefined8 ***pppuStack_370;
  undefined1 uStack_368;
  undefined8 ***pppuStack_360;
  undefined8 **ppuStack_358;
  undefined8 **ppuStack_350;
  undefined1 uStack_348;
  undefined8 **ppuStack_340;
  undefined8 **ppuStack_338;
  undefined8 ***pppuStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  undefined8 **ppuStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined1 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 ***pppuStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 uStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined8 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined8 **ppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 *puStack_280;
  undefined1 uStack_278;
  undefined1 auStack_270 [16];
  undefined1 *puStack_260;
  undefined1 uStack_258;
  undefined1 auStack_250 [16];
  undefined1 *puStack_240;
  undefined1 uStack_238;
  undefined1 auStack_230 [16];
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 *puStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [8];
  char *pcStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined1 uStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined8 ***pppuStack_188;
  undefined1 *puStack_180;
  undefined1 uStack_178;
  undefined8 **ppuStack_170;
  undefined1 auStack_168 [8];
  undefined8 ***pppuStack_160;
  undefined1 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 *puStack_140;
  undefined1 uStack_138;
  undefined8 **ppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined1 uStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 ***pppuStack_100;
  undefined1 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined1 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 ***pppuStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined1 *puVar21;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_2d0[0] = 3;
  uVar5 = 0x18;
  __Znwm();
  func_0x000107c31940();
  puStack_2c0 = auStack_2d0;
  uStack_2b8 = 1;
  ppuStack_2a8 = (undefined8 **)0x0;
  auStack_2b0[0] = 2;
  lVar19 = *param_2;
  lVar14 = param_2[1];
  pppuVar6 = (undefined8 ***)0x18;
  uStack_2c8 = uVar5;
  __Znwm();
  *pppuVar6 = (undefined8 **)0x0;
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
  lVar22 = lVar14 - lVar19;
  ppuStack_b0 = pppuVar6;
  if (lVar22 != 0) {
    FUN_109f4c30c(pppuVar6,(lVar22 >> 3) * -0x79435e50d79435e5);
    ppuStack_f0 = pppuVar6[1];
    pppuStack_1a8 = &ppuStack_130;
    pppuStack_1a0 = &ppuStack_f0;
    uStack_198 = 0;
    ppuStack_1b0 = pppuVar6;
    ppuStack_130 = ppuStack_f0;
    do {
      *(undefined1 *)ppuStack_f0 = 0;
      ppuStack_f0[1] = (undefined8 **)0x0;
      FUN_109f4c344(ppuStack_f0,lVar19);
      lVar19 = lVar19 + 0x98;
      ppuStack_f0 = ppuStack_f0 + 2;
    } while (lVar19 != lVar14);
    pppuVar6[1] = ppuStack_f0;
  }
  puStack_2a0 = auStack_2b0;
  uStack_298 = 1;
  ppuStack_2a8 = pppuVar6;
  FUN_109f50c2c(auStack_290,auStack_2d0,2,1,2);
  uStack_278 = 1;
  puStack_308 = (undefined *)0x0;
  auStack_310[0] = 3;
  puVar7 = &UNK_10f61d5a6;
  puStack_280 = auStack_290;
  FUN_109f50878();
  puStack_300 = auStack_310;
  uStack_2f8 = 1;
  pppuStack_2e8 = (undefined8 ***)0x0;
  auStack_2f0[0] = 2;
  pppuVar6 = (undefined8 ***)param_2[3];
  pppuVar23 = (undefined8 ***)param_2[4];
  pppuVar8 = (undefined8 ***)0x18;
  puStack_308 = puVar7;
  __Znwm();
  *pppuVar8 = (undefined8 **)0x0;
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  uStack_368 = 0;
  lVar19 = (long)pppuVar23 - (long)pppuVar6;
  pppuStack_370 = pppuVar8;
  if (lVar19 != 0) {
    FUN_109f4c30c(pppuVar8,(lVar19 >> 3) * -0x3333333333333333);
    ppuStack_358 = &ppuStack_340;
    ppuStack_350 = &ppuStack_338;
    ppuVar18 = pppuVar8[1];
    unaff_x28 = (undefined8 ****)&ppuStack_1b0;
    pppuStack_3b0 = &ppuStack_110;
    uStack_348 = 0;
    ppuStack_3b8 = &puStack_1d0;
    pppuStack_360 = pppuVar8;
    ppuStack_340 = ppuVar18;
    do {
      pppuStack_388 = pppuVar6;
      *(undefined1 *)ppuVar18 = 0;
      ppuVar18[1] = (undefined8 *)0x0;
      ppuStack_b0 = (undefined8 **)CONCAT71(ppuStack_b0._1_7_,3);
      puVar7 = &DAT_10f68f148;
      ppuStack_338 = ppuVar18;
      FUN_109f4ec1c();
      uStack_98 = 1;
      pppuStack_88 = (undefined8 ***)0x0;
      auStack_90[0] = 3;
      pppuVar6 = pppuStack_388;
      puStack_a8 = puVar7;
      pppuStack_a0 = &ppuStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      pppuStack_88 = pppuVar6;
      puStack_80 = auStack_90;
      FUN_109f50c2c(&ppuStack_1b0,&ppuStack_b0,2,1,2);
      uStack_198 = 1;
      pppuStack_e8 = (undefined8 ***)0x0;
      ppuStack_f0 = (undefined8 **)CONCAT71(ppuStack_f0._1_7_,3);
      pcVar9 = "location";
      pppuStack_1a0 = unaff_x28;
      FUN_109f4fee8();
      uStack_d8 = 1;
      ppuStack_c8 = (undefined8 **)(ulong)*(uint *)(pppuStack_388 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pppuStack_e8 = (undefined8 ***)pcVar9;
      pppuStack_e0 = &ppuStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_190,&ppuStack_f0,2,1,2);
      uStack_178 = 1;
      pppuStack_128 = (undefined8 ***)0x0;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      ppppuVar17 = (undefined8 ****)&DAT_10f61d658;
      puStack_180 = auStack_190;
      FUN_109f4f5c0();
      uStack_118 = 1;
      ppuStack_108 = (undefined8 **)(ulong)*(uint *)((long)pppuStack_388 + 0x1c);
      ppuStack_110._0_1_ = 6;
      uStack_f8 = 1;
      pppuStack_128 = ppppuVar17;
      pppuStack_120 = &ppuStack_130;
      pppuStack_100 = pppuStack_3b0;
      FUN_109f50c2c(&ppuStack_170,&ppuStack_130,2,1,2);
      uStack_158 = 1;
      pcStack_1e8 = (char *)0x0;
      auStack_1f0[0] = 3;
      pcVar9 = "format";
      pppuStack_160 = &ppuStack_170;
      FUN_109f4f530();
      uStack_1d8 = 1;
      puStack_1d0._0_1_ = 0;
      pppuStack_1c8 = (undefined8 ***)0x0;
      pcStack_1e8 = pcVar9;
      puStack_1e0 = auStack_1f0;
      if ((bRam00000001137e7ce8 & 1) == 0) {
        iVar4 = 0x137e7ce8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          uRam00000001137e8b10 = 0;
          puRam00000001137e8b20 = (undefined *)0x0;
          uRam00000001137e8b18 = 3;
          puVar7 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e8b28 = 1;
          puRam00000001137e8b38 = (undefined *)0x0;
          uRam00000001137e8b30 = 3;
          puVar10 = &DAT_10f61d7c0;
          puRam00000001137e8b20 = puVar7;
          FUN_109f4fe58();
          uRam00000001137e8b40 = 2;
          puRam00000001137e8b50 = (undefined *)0x0;
          uRam00000001137e8b48 = 3;
          puVar7 = &DAT_10f61d7c6;
          puRam00000001137e8b38 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8b58 = 3;
          puRam00000001137e8b68 = (undefined *)0x0;
          uRam00000001137e8b60 = 3;
          puVar10 = &DAT_10f61d7cc;
          puRam00000001137e8b50 = puVar7;
          FUN_109f4fe58();
          uRam00000001137e8b70 = 4;
          puRam00000001137e8b80 = (undefined *)0x0;
          uRam00000001137e8b78 = 3;
          puVar7 = &DAT_10f61d7d2;
          puRam00000001137e8b68 = puVar10;
          FUN_109f508c0();
          uRam00000001137e8b88 = 5;
          puRam00000001137e8b98 = (undefined *)0x0;
          uRam00000001137e8b90 = 3;
          puVar10 = &DAT_10f61d7e2;
          puRam00000001137e8b80 = puVar7;
          FUN_109f508c0();
          uRam00000001137e8ba0 = 6;
          puRam00000001137e8bb0 = (undefined *)0x0;
          uRam00000001137e8ba8 = 3;
          puVar7 = &DAT_10f61d7f2;
          puRam00000001137e8b98 = puVar10;
          FUN_109f508c0();
          uRam00000001137e8bb8 = 7;
          puRam00000001137e8bc8 = (undefined *)0x0;
          uRam00000001137e8bc0 = 3;
          puVar10 = &DAT_10f61d802;
          puRam00000001137e8bb0 = puVar7;
          FUN_109f50438();
          uRam00000001137e8bd0 = 8;
          puRam00000001137e8be0 = (undefined *)0x0;
          uRam00000001137e8bd8 = 3;
          puVar7 = &DAT_10f61d810;
          puRam00000001137e8bc8 = puVar10;
          FUN_109f50438();
          uRam00000001137e8be8 = 9;
          puRam00000001137e8bf8 = (undefined *)0x0;
          uRam00000001137e8bf0 = 3;
          puVar10 = &DAT_10f61d81e;
          puRam00000001137e8be0 = puVar7;
          FUN_109f50438();
          uRam00000001137e8c00 = 10;
          puRam00000001137e8c10 = (undefined *)0x0;
          uRam00000001137e8c08 = 3;
          puVar7 = &DAT_10f61d82c;
          puRam00000001137e8bf8 = puVar10;
          FUN_109f50908();
          uRam00000001137e8c18 = 0xb;
          puRam00000001137e8c28 = (undefined *)0x0;
          uRam00000001137e8c20 = 3;
          puVar10 = &DAT_10f61d844;
          puRam00000001137e8c10 = puVar7;
          FUN_109f50908();
          uRam00000001137e8c30 = 0xc;
          puRam00000001137e8c40 = (undefined *)0x0;
          uRam00000001137e8c38 = 3;
          puVar7 = &DAT_10f61d85c;
          puRam00000001137e8c28 = puVar10;
          FUN_109f50908();
          uRam00000001137e8c48 = 0xd;
          puRam00000001137e8c58 = (undefined *)0x0;
          uRam00000001137e8c50 = 3;
          puVar10 = &DAT_10f61d700;
          puRam00000001137e8c40 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8c60 = 0xe;
          puRam00000001137e8c70 = (undefined *)0x0;
          uRam00000001137e8c68 = 3;
          puVar7 = &DAT_10f61d707;
          puRam00000001137e8c58 = puVar10;
          FUN_109f4f530();
          uRam00000001137e8c78 = 0xf;
          puRam00000001137e8c88 = (undefined *)0x0;
          uRam00000001137e8c80 = 3;
          puVar10 = &DAT_10f61d70e;
          puRam00000001137e8c70 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8c90 = 0x10;
          puRam00000001137e8ca0 = (undefined *)0x0;
          uRam00000001137e8c98 = 3;
          puVar7 = &DAT_10f61d874;
          puRam00000001137e8c88 = puVar10;
          FUN_109f50878();
          uRam00000001137e8ca8 = 0x11;
          puRam00000001137e8cb8 = (undefined *)0x0;
          uRam00000001137e8cb0 = 3;
          puVar10 = &DAT_10f61d885;
          puRam00000001137e8ca0 = puVar7;
          FUN_109f50878();
          uRam00000001137e8cc0 = 0x12;
          puRam00000001137e8cd0 = (undefined *)0x0;
          uRam00000001137e8cc8 = 3;
          puVar7 = &DAT_10f61d896;
          puRam00000001137e8cb8 = puVar10;
          FUN_109f50878();
          uRam00000001137e8cd8 = 0x13;
          puRam00000001137e8ce8 = (undefined *)0x0;
          uRam00000001137e8ce0 = 3;
          puVar10 = &DAT_10f61d8a7;
          puRam00000001137e8cd0 = puVar7;
          FUN_109f4ebd4();
          uRam00000001137e8cf0 = 0x14;
          puRam00000001137e8d00 = (undefined *)0x0;
          uRam00000001137e8cf8 = 3;
          puVar7 = &DAT_10f61d8b6;
          puRam00000001137e8ce8 = puVar10;
          FUN_109f4ebd4();
          uRam00000001137e8d08 = 0x15;
          puRam00000001137e8d18 = (undefined *)0x0;
          uRam00000001137e8d10 = 3;
          puVar10 = &DAT_10f61d8c5;
          puRam00000001137e8d00 = puVar7;
          FUN_109f4ebd4();
          uRam00000001137e8d20 = 0x16;
          puRam00000001137e8d30 = (undefined *)0x0;
          uRam00000001137e8d28 = 3;
          puVar7 = &DAT_10f61d8d4;
          puRam00000001137e8d18 = puVar10;
          FUN_109f50950();
          uRam00000001137e8d38 = 0x17;
          puRam00000001137e8d48 = (undefined *)0x0;
          uRam00000001137e8d40 = 3;
          puVar10 = &DAT_10f61d8ed;
          puRam00000001137e8d30 = puVar7;
          FUN_109f50950();
          uRam00000001137e8d50 = 0x18;
          puRam00000001137e8d60 = (undefined *)0x0;
          uRam00000001137e8d58 = 3;
          puVar7 = &DAT_10f61d906;
          puRam00000001137e8d48 = puVar10;
          FUN_109f50950();
          uRam00000001137e8d68 = 0x19;
          puRam00000001137e8d78 = (undefined *)0x0;
          uRam00000001137e8d70 = 3;
          puVar10 = &DAT_10f61d6d9;
          puRam00000001137e8d60 = puVar7;
          FUN_109f4f578();
          uRam00000001137e8d80 = 0x1a;
          puRam00000001137e8d90 = (undefined *)0x0;
          uRam00000001137e8d88 = 3;
          puVar7 = &DAT_10f61d6e4;
          puRam00000001137e8d78 = puVar10;
          FUN_109f4f578();
          uRam00000001137e8d98 = 0x1b;
          puRam00000001137e8da8 = (undefined *)0x0;
          uRam00000001137e8da0 = 3;
          puVar10 = &DAT_10f61d6ef;
          puRam00000001137e8d90 = puVar7;
          FUN_109f4f578();
          uRam00000001137e8db0 = 0x1c;
          puRam00000001137e8dc0 = (undefined *)0x0;
          uRam00000001137e8db8 = 3;
          puVar7 = &DAT_10f5a35b4;
          puRam00000001137e8da8 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8dc8 = 0x1d;
          puRam00000001137e8dd8 = (undefined *)0x0;
          uRam00000001137e8dd0 = 3;
          puVar10 = &DAT_10f61d6a9;
          puRam00000001137e8dc0 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8de0 = 0x1e;
          puRam00000001137e8df0 = (undefined *)0x0;
          uRam00000001137e8de8 = 3;
          puVar7 = &DAT_10f61d6b0;
          puRam00000001137e8dd8 = puVar10;
          FUN_109f4f530();
          uRam00000001137e8df8 = 0x1f;
          puRam00000001137e8e08 = (undefined *)0x0;
          uRam00000001137e8e00 = 3;
          puVar10 = &DAT_10f61d6b7;
          puRam00000001137e8df0 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8e10 = 0x20;
          puRam00000001137e8e20 = (undefined *)0x0;
          uRam00000001137e8e18 = 3;
          puRam00000001137e8e08 = puVar10;
          FUN_109f4fea0();
          uRam00000001137e8e28 = 0x21;
          puRam00000001137e8e38 = (undefined *)0x0;
          uRam00000001137e8e30 = 3;
          puVar7 = &DAT_10f61d683;
          puRam00000001137e8e20 = puVar10;
          FUN_109f4ec1c();
          uRam00000001137e8e40 = 0x22;
          puRam00000001137e8e50 = (undefined *)0x0;
          uRam00000001137e8e48 = 3;
          puVar10 = &DAT_10f61d688;
          puRam00000001137e8e38 = puVar7;
          FUN_109f4ec1c();
          uRam00000001137e8e58 = 0x23;
          puRam00000001137e8e68 = (undefined *)0x0;
          uRam00000001137e8e60 = 3;
          puVar7 = &DAT_10f61d68d;
          puRam00000001137e8e50 = puVar10;
          FUN_109f4ec1c();
          uRam00000001137e8e70 = 0x24;
          puRam00000001137e8e80 = (undefined *)0x0;
          uRam00000001137e8e78 = 3;
          puVar10 = &DAT_10f61d692;
          puRam00000001137e8e68 = puVar7;
          FUN_109f4ec1c();
          uRam00000001137e8e88 = 0x25;
          puRam00000001137e8e98 = (undefined *)0x0;
          uRam00000001137e8e90 = 3;
          puVar7 = &DAT_10f61d697;
          puRam00000001137e8e80 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8ea0 = 0x26;
          puRam00000001137e8eb0 = (undefined *)0x0;
          uRam00000001137e8ea8 = 3;
          puVar10 = &DAT_10f61d69d;
          puRam00000001137e8e98 = puVar7;
          FUN_109f4fe58();
          uRam00000001137e8eb8 = 0x27;
          puRam00000001137e8ec8 = (undefined *)0x0;
          uRam00000001137e8ec0 = 3;
          puVar7 = &DAT_10f61d6a3;
          puRam00000001137e8eb0 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8ed0 = 0x28;
          puRam00000001137e8ee0 = (undefined *)0x0;
          uRam00000001137e8ed8 = 3;
          puVar10 = &DAT_10f517cd7;
          puRam00000001137e8ec8 = puVar7;
          FUN_109f4fe58();
          puRam00000001137e8ee0 = puVar10;
          ___cxa_atexit(0x109f60f50,0,0x100000000);
          ___cxa_guard_release(0x1137e7ce8);
        }
      }
      piVar16 = (int *)0x1137e8b10;
      lVar19 = 0x3d8;
      do {
        if (*piVar16 == *(int *)(pppuStack_388 + 4)) {
          if (lVar19 != 0) goto LAB_109f4a660;
          break;
        }
        piVar16 = piVar16 + 6;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
      piVar16 = (int *)0x1137e8b10;
LAB_109f4a660:
      FUN_109f4ff30(&pppuStack_320,piVar16 + 2);
      pppuVar6 = pppuStack_1c8;
      uVar1 = puStack_1d0._0_1_;
      puStack_1d0._0_1_ = pppuStack_320._0_1_;
      pppuStack_320 = (undefined8 ***)CONCAT71(pppuStack_320._1_7_,uVar1);
      pppuStack_1c8 = (undefined8 ***)ppuStack_318;
      ppuStack_318 = pppuVar6;
      FUN_109f49928(&ppuStack_318);
      uStack_1b8 = 1;
      puVar20 = auStack_150;
      ppuStack_1c0 = ppuStack_3b8;
      FUN_109f50c2c(auStack_150,auStack_1f0,2,1,2);
      uStack_138 = 1;
      puStack_140 = puVar20;
      FUN_109f50c2c(&pppuStack_330,&ppuStack_1b0,4,1,2);
      uVar1 = *(undefined1 *)ppuVar18;
      *(undefined1 *)ppuVar18 = pppuStack_330._0_1_;
      pppuStack_330 = (undefined8 ***)CONCAT71(pppuStack_330._1_7_,uVar1);
      puVar15 = ppuVar18[1];
      ppuVar18[1] = puStack_328;
      puStack_328 = puVar15;
      FUN_109f49928(&puStack_328);
      lVar19 = 0;
      do {
        FUN_109f49928(auStack_148 + lVar19,auStack_150[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x80);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&pppuStack_1c8 + lVar19,*(undefined1 *)((long)&puStack_1d0 + lVar19));
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&ppuStack_108 + lVar19,*(undefined1 *)((long)&ppuStack_110 + lVar19));
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&ppuStack_c8 + lVar19,auStack_d0[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&pppuStack_88 + lVar19,auStack_90[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      ppuVar18 = ppuStack_338 + 2;
      pppuVar6 = pppuStack_388 + 5;
    } while (pppuStack_388 + 5 != pppuVar23);
    pppuVar8[1] = ppuVar18;
    ppuStack_338 = ppuVar18;
  }
  puStack_2e0 = auStack_2f0;
  uStack_2d8 = 1;
  pppuStack_2e8 = pppuVar8;
  FUN_109f50c2c(auStack_270,auStack_310,2,1,2);
  uStack_258 = 1;
  pcStack_1e8 = (char *)0x0;
  auStack_1f0[0] = 3;
  pcVar9 = "fragmentOutputs";
  puStack_260 = auStack_270;
  FUN_109f508c0();
  puStack_1e0 = auStack_1f0;
  uStack_1d8 = 1;
  pppuStack_1c8 = (undefined8 ***)0x0;
  puStack_1d0._0_1_ = 2;
  pppuVar6 = (undefined8 ***)param_2[6];
  pppuVar23 = (undefined8 ***)param_2[7];
  pppuVar8 = (undefined8 ***)0x18;
  pcStack_1e8 = pcVar9;
  __Znwm();
  *pppuVar8 = (undefined8 **)0x0;
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  uStack_368 = 0;
  lVar19 = (long)pppuVar23 - (long)pppuVar6;
  pppuStack_370 = pppuVar8;
  if (lVar19 != 0) {
    FUN_109f4c30c(pppuVar8,lVar19 >> 5);
    ppuStack_358 = &ppuStack_340;
    ppuStack_350 = &ppuStack_338;
    ppuStack_3b8 = pppuVar8[1];
    pppuStack_388 = &ppuStack_170;
    unaff_x28 = (undefined8 ****)&ppuStack_130;
    uStack_348 = 0;
    ppuVar18 = ppuStack_3b8;
    pppuStack_360 = pppuVar8;
    ppuStack_340 = ppuStack_3b8;
    do {
      *(undefined1 *)ppuVar18 = 0;
      ppuVar18[1] = (undefined8 *)0x0;
      ppuStack_b0 = (undefined8 **)CONCAT71(ppuStack_b0._1_7_,3);
      puVar7 = &DAT_10f68f148;
      ppuStack_338 = ppuVar18;
      FUN_109f4ec1c();
      uStack_98 = 1;
      pppuStack_88 = (undefined8 ***)0x0;
      auStack_90[0] = 3;
      pppuVar11 = pppuVar6;
      puStack_a8 = puVar7;
      pppuStack_a0 = &ppuStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      pppuStack_88 = pppuVar11;
      puStack_80 = auStack_90;
      FUN_109f50c2c(&ppuStack_1b0,&ppuStack_b0,2,1,2);
      uStack_198 = 1;
      pppuStack_e8 = (undefined8 ***)0x0;
      ppuStack_f0 = (undefined8 **)CONCAT71(ppuStack_f0._1_7_,3);
      pcVar9 = "location";
      pppuStack_1a0 = &ppuStack_1b0;
      FUN_109f4fee8();
      uStack_d8 = 1;
      ppuStack_c8 = (undefined8 **)(ulong)*(uint *)(pppuVar6 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pppuStack_e8 = (undefined8 ***)pcVar9;
      pppuStack_e0 = &ppuStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_190,&ppuStack_f0,2,1,2);
      uStack_178 = 1;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pcVar9 = "format";
      puStack_180 = auStack_190;
      FUN_109f4f530();
      uStack_118 = 1;
      ppuStack_110._0_1_ = 0;
      ppuStack_108 = (undefined8 ***)0x0;
      pppuStack_128 = (undefined8 ***)pcVar9;
      pppuStack_120 = unaff_x28;
      if ((bRam00000001137e7cf0 & 1) == 0) {
        iVar4 = 0x137e7cf0;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          uRam00000001137e8240 = 0;
          puRam00000001137e8250 = (undefined *)0x0;
          uRam00000001137e8248 = 3;
          puVar7 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e8258 = 1;
          puRam00000001137e8268 = (undefined *)0x0;
          uRam00000001137e8260 = 3;
          puRam00000001137e8250 = puVar7;
          FUN_109f4fea0();
          uRam00000001137e8270 = 2;
          puRam00000001137e8280 = (undefined *)0x0;
          uRam00000001137e8278 = 3;
          puVar10 = &DAT_10f61d683;
          puRam00000001137e8268 = puVar7;
          FUN_109f4ec1c();
          uRam00000001137e8288 = 3;
          puRam00000001137e8298 = (undefined *)0x0;
          uRam00000001137e8290 = 3;
          puVar7 = &DAT_10f61d688;
          puRam00000001137e8280 = puVar10;
          FUN_109f4ec1c();
          uRam00000001137e82a0 = 4;
          puRam00000001137e82b0 = (undefined *)0x0;
          uRam00000001137e82a8 = 3;
          puVar10 = &DAT_10f61d68d;
          puRam00000001137e8298 = puVar7;
          FUN_109f4ec1c();
          uRam00000001137e82b8 = 5;
          puRam00000001137e82c8 = (undefined *)0x0;
          uRam00000001137e82c0 = 3;
          puVar7 = &DAT_10f61d692;
          puRam00000001137e82b0 = puVar10;
          FUN_109f4ec1c();
          uRam00000001137e82d0 = 6;
          puRam00000001137e82e0 = (undefined *)0x0;
          uRam00000001137e82d8 = 3;
          puVar10 = &DAT_10f61d697;
          puRam00000001137e82c8 = puVar7;
          FUN_109f4fe58();
          uRam00000001137e82e8 = 7;
          puRam00000001137e82f8 = (undefined *)0x0;
          uRam00000001137e82f0 = 3;
          puVar7 = &DAT_10f61d69d;
          puRam00000001137e82e0 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8300 = 8;
          puRam00000001137e8310 = (undefined *)0x0;
          uRam00000001137e8308 = 3;
          puVar10 = &DAT_10f61d6a3;
          puRam00000001137e82f8 = puVar7;
          FUN_109f4fe58();
          uRam00000001137e8318 = 9;
          puRam00000001137e8328 = (undefined *)0x0;
          uRam00000001137e8320 = 3;
          puVar7 = &DAT_10f5a35b4;
          puRam00000001137e8310 = puVar10;
          FUN_109f4fe58();
          uRam00000001137e8330 = 10;
          puRam00000001137e8340 = (undefined *)0x0;
          uRam00000001137e8338 = 3;
          puVar10 = &DAT_10f61d6a9;
          puRam00000001137e8328 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8348 = 0xb;
          puRam00000001137e8358 = (undefined *)0x0;
          uRam00000001137e8350 = 3;
          puVar7 = &DAT_10f61d6b0;
          puRam00000001137e8340 = puVar10;
          FUN_109f4f530();
          uRam00000001137e8360 = 0xc;
          puRam00000001137e8370 = (undefined *)0x0;
          uRam00000001137e8368 = 3;
          puVar10 = &DAT_10f61d6b7;
          puRam00000001137e8358 = puVar7;
          FUN_109f4f530();
          uRam00000001137e8378 = 0xd;
          puRam00000001137e8388 = (undefined *)0x0;
          uRam00000001137e8380 = 3;
          puVar7 = &DAT_10f517cd7;
          puRam00000001137e8370 = puVar10;
          FUN_109f4fe58();
          puRam00000001137e8388 = puVar7;
          ___cxa_atexit(0x109f60f8c,0,0x100000000);
          ___cxa_guard_release(0x1137e7cf0);
        }
      }
      piVar16 = (int *)0x1137e8240;
      lVar19 = 0x150;
      do {
        if (*piVar16 == *(int *)((long)pppuVar6 + 0x1c)) {
          if (lVar19 != 0) goto LAB_109f4b0a8;
          break;
        }
        piVar16 = piVar16 + 6;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
      piVar16 = (int *)0x1137e8240;
LAB_109f4b0a8:
      FUN_109f4ff30(&pppuStack_320,piVar16 + 2);
      ppuVar2 = ppuStack_108;
      uVar1 = ppuStack_110._0_1_;
      ppuStack_110._0_1_ = pppuStack_320._0_1_;
      pppuStack_320 = (undefined8 ***)CONCAT71(pppuStack_320._1_7_,uVar1);
      ppuStack_108 = ppuStack_318;
      ppuStack_318 = ppuVar2;
      FUN_109f49928(&ppuStack_318);
      uStack_f8 = 1;
      pppuVar11 = pppuStack_388;
      pppuStack_100 = &ppuStack_110;
      FUN_109f50c2c(pppuStack_388,&ppuStack_130,2,1,2);
      uStack_158 = 1;
      pppuStack_160 = pppuVar11;
      FUN_109f50c2c(&pppuStack_330,&ppuStack_1b0,3,1,2);
      uVar1 = *(undefined1 *)ppuVar18;
      *(undefined1 *)ppuVar18 = pppuStack_330._0_1_;
      pppuStack_330 = (undefined8 ***)CONCAT71(pppuStack_330._1_7_,uVar1);
      puVar15 = ppuVar18[1];
      ppuVar18[1] = puStack_328;
      puStack_328 = puVar15;
      FUN_109f49928(&puStack_328);
      lVar19 = 0;
      do {
        FUN_109f49928(auStack_168 + lVar19,*(undefined1 *)((long)&ppuStack_170 + lVar19));
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x60);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&ppuStack_108 + lVar19,*(undefined1 *)((long)&ppuStack_110 + lVar19));
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&ppuStack_c8 + lVar19,auStack_d0[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&pppuStack_88 + lVar19,auStack_90[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      pppuVar6 = pppuVar6 + 4;
      ppuVar18 = ppuStack_338 + 2;
    } while (pppuVar6 != pppuVar23);
    pppuVar8[1] = ppuVar18;
    pppuStack_3b0 = pppuVar8;
    ppuStack_338 = ppuVar18;
  }
  ppuStack_1c0 = &puStack_1d0;
  uStack_1b8 = 1;
  pppuStack_1c8 = pppuVar8;
  FUN_109f50c2c(auStack_250,auStack_1f0,2,1,2);
  uStack_238 = 1;
  puStack_a8 = (undefined *)0x0;
  ppuStack_b0 = (undefined8 **)CONCAT71(ppuStack_b0._1_7_,3);
  uVar5 = 0x18;
  puStack_240 = auStack_250;
  __Znwm();
  func_0x000107c31940();
  pppuStack_a0 = &ppuStack_b0;
  uStack_98 = 1;
  pppuStack_88 = (undefined8 ***)0x0;
  auStack_90[0] = 2;
  lVar19 = param_2[9];
  lVar14 = param_2[10];
  pppuVar6 = (undefined8 ***)0x18;
  puStack_a8 = (undefined *)uVar5;
  __Znwm();
  *pppuVar6 = (undefined8 **)0x0;
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  ppuStack_358 = (undefined8 **)((ulong)ppuStack_358 & 0xffffffffffffff00);
  lVar22 = lVar14 - lVar19;
  pppuStack_360 = pppuVar6;
  if (lVar22 != 0) {
    FUN_109f4c30c(pppuVar6,lVar22 >> 4);
    pppuVar23 = (undefined8 ***)pppuVar6[1];
    pppuStack_e8 = &pppuStack_330;
    pppuStack_e0 = &pppuStack_320;
    uStack_d8 = 0;
    unaff_x28 = (undefined8 ****)0x1;
    pppuStack_330 = pppuVar23;
    ppuStack_f0 = pppuVar6;
    do {
      *(undefined1 *)pppuVar23 = 0;
      pppuVar23[1] = (undefined8 **)0x0;
      ppuStack_1b0 = (undefined8 **)((ulong)ppuStack_1b0 & 0xffffffffffffff00);
      pppuStack_1a8 = (undefined8 ***)0x0;
      pppuStack_320 = pppuVar23;
      FUN_109f50998(&ppuStack_1b0,lVar19);
      uStack_198 = 1;
      auStack_190[0] = 0;
      pppuStack_188 = (undefined8 ***)0x0;
      pppuStack_1a0 = &ppuStack_1b0;
      FUN_109f50998(auStack_190,lVar19 + 8);
      uStack_178 = 1;
      puStack_180 = auStack_190;
      FUN_109f50c2c(&ppuStack_130,&ppuStack_1b0,2,1,2);
      uVar1 = *(undefined1 *)pppuVar23;
      *(undefined1 *)pppuVar23 = ppuStack_130._0_1_;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,uVar1);
      ppppuVar17 = (undefined8 ****)pppuVar23[1];
      pppuVar23[1] = pppuStack_128;
      pppuStack_128 = ppppuVar17;
      FUN_109f49928(&pppuStack_128);
      lVar22 = 0;
      do {
        FUN_109f49928((long)&pppuStack_188 + lVar22,auStack_190[lVar22]);
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != -0x40);
      lVar19 = lVar19 + 0x10;
      pppuVar23 = pppuStack_320 + 2;
    } while (lVar19 != lVar14);
    pppuVar6[1] = pppuVar23;
    pppuStack_320 = pppuVar23;
  }
  puStack_80 = auStack_90;
  uStack_78 = 1;
  pppuStack_88 = pppuVar6;
  FUN_109f50c2c(auStack_230,&ppuStack_b0,2,1,2);
  uStack_218 = 1;
  pppuStack_e8 = (undefined8 ***)0x0;
  ppuStack_f0 = (undefined8 **)CONCAT71(ppuStack_f0._1_7_,3);
  puVar7 = &UNK_10f61d5db;
  puStack_220 = auStack_230;
  FUN_109f50908();
  pppuStack_e0 = &ppuStack_f0;
  uStack_d8 = 1;
  ppuStack_c8 = (undefined8 **)0x0;
  auStack_d0[0] = 2;
  pppuVar6 = (undefined8 ***)param_2[0xc];
  pppuVar23 = (undefined8 ***)param_2[0xd];
  pppuVar8 = (undefined8 ***)0x18;
  pppuStack_e8 = (undefined8 ***)puVar7;
  __Znwm();
  *pppuVar8 = (undefined8 **)0x0;
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  ppuStack_318 = (undefined8 **)((ulong)ppuStack_318 & 0xffffffffffffff00);
  lVar19 = (long)pppuVar23 - (long)pppuVar6;
  pppuStack_320 = pppuVar8;
  if (lVar19 != 0) {
    FUN_109f4c30c(pppuVar8,(lVar19 >> 4) * -0x5555555555555555);
    pppuStack_388 = (undefined8 ***)pppuVar8[1];
    pppuStack_128 = &pppuStack_370;
    pppuStack_120 = &pppuStack_330;
    uStack_118 = 0;
    unaff_x28 = (undefined8 ****)0x3;
    pppuVar11 = pppuStack_388;
    pppuStack_370 = pppuStack_388;
    ppuStack_130 = pppuVar8;
    do {
      *(undefined1 *)pppuVar11 = 0;
      pppuVar11[1] = (undefined8 **)0x0;
      ppuStack_1b0 = (undefined8 **)CONCAT71(ppuStack_1b0._1_7_,3);
      pppuVar12 = pppuVar6;
      pppuStack_330 = pppuVar11;
      FUN_109f4ec64();
      uStack_198 = 1;
      pppuStack_188 = (undefined8 ***)0x0;
      auStack_190[0] = 3;
      pppuVar13 = pppuVar6 + 3;
      pppuStack_1a8 = pppuVar12;
      pppuStack_1a0 = &ppuStack_1b0;
      FUN_109f4ec64();
      uStack_178 = 1;
      pppuStack_188 = pppuVar13;
      puStack_180 = auStack_190;
      FUN_109f50c2c(&pppuStack_360,&ppuStack_1b0,2,1,2);
      uVar1 = *(undefined1 *)pppuVar11;
      *(undefined1 *)pppuVar11 = pppuStack_360._0_1_;
      pppuStack_360 = (undefined8 ***)CONCAT71(pppuStack_360._1_7_,uVar1);
      ppuVar18 = pppuVar11[1];
      pppuVar11[1] = ppuStack_358;
      ppuStack_358 = ppuVar18;
      FUN_109f49928(&ppuStack_358);
      lVar19 = 0;
      do {
        FUN_109f49928((long)&pppuStack_188 + lVar19,auStack_190[lVar19]);
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      pppuVar6 = pppuVar6 + 6;
      pppuVar11 = pppuStack_330 + 2;
    } while (pppuVar6 != pppuVar23);
    pppuVar8[1] = pppuVar11;
    pppuStack_330 = pppuVar11;
  }
  puStack_c0 = auStack_d0;
  uStack_b8 = 1;
  ppuStack_c8 = pppuVar8;
  FUN_109f50c2c(auStack_210,&ppuStack_f0,2,1,2);
  uStack_1f8 = 1;
  puStack_200 = auStack_210;
  FUN_109f50c2c(auStack_380,auStack_290,5,1,2);
  uVar1 = *param_1;
  *param_1 = auStack_380[0];
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uStack_378;
  auStack_380[0] = uVar1;
  uStack_378 = uVar5;
  FUN_109f49928(&uStack_378);
  lVar19 = 0;
  do {
    FUN_109f49928(auStack_208 + lVar19,auStack_210[lVar19]);
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0xa0);
  lVar19 = 0;
  do {
    FUN_109f49928((long)&ppuStack_c8 + lVar19,auStack_d0[lVar19]);
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x40);
  lVar19 = 0;
  do {
    FUN_109f49928((long)&pppuStack_88 + lVar19,auStack_90[lVar19]);
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x40);
  lVar19 = 0;
  do {
    FUN_109f49928((long)&pppuStack_1c8 + lVar19,*(undefined1 *)((long)&puStack_1d0 + lVar19));
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x40);
  lVar19 = 0;
  do {
    FUN_109f49928((long)&pppuStack_2e8 + lVar19,auStack_2f0[lVar19]);
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x40);
  lVar19 = 0;
  do {
    lVar14 = (long)&ppuStack_2a8 + lVar19;
    FUN_109f49928(lVar14,auStack_2b0[lVar19]);
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar19 = 0x1137e8370;
    do {
      FUN_109f49928(lVar19,*(undefined1 *)(lVar19 + -8));
      bVar3 = lVar19 != 0x1137e8250;
      lVar19 = lVar19 + -0x18;
    } while (bVar3);
    ___cxa_guard_abort(0x1137e7cf0);
    FUN_109f49928(unaff_x28 + 1,(ulong)ppuStack_130 & 0xff);
    pppuVar6 = &ppuStack_c8;
    lVar19 = -0x40;
    do {
      FUN_109f49928(pppuVar6,*(undefined1 *)(pppuVar6 + -1));
      pppuVar6 = pppuVar6 + -4;
      lVar19 = lVar19 + 0x20;
    } while (lVar19 != 0);
    lVar19 = 0;
    do {
      FUN_109f49928((long)&pppuStack_88 + lVar19,auStack_90[lVar19]);
      lVar19 = lVar19 + -0x20;
    } while (lVar19 != -0x40);
    while (&ppuStack_1b0 != pppuStack_388) {
      FUN_109f49928(pppuStack_388 + -3,*(undefined1 *)(pppuStack_388 + -4));
      pppuStack_388 = pppuStack_388 + -4;
    }
    FUN_109f4a078(&pppuStack_360);
    pppuStack_3b0[1] = ppuStack_3b8;
    FUN_109f4a210(&pppuStack_370);
    __ZdlPv(pppuStack_3b0);
    FUN_109f49928(&pcStack_1e8,auStack_1f0[0]);
    ppppuVar17 = &pppuStack_2e8;
    lVar19 = -0x40;
    do {
      FUN_109f49928(ppppuVar17,*(undefined1 *)(ppppuVar17 + -1));
      ppppuVar17 = ppppuVar17 + -4;
      lVar19 = lVar19 + 0x20;
    } while (lVar19 != 0);
    lVar19 = 0;
    do {
      FUN_109f49928((long)&ppuStack_2a8 + lVar19,auStack_2b0[lVar19]);
      lVar19 = lVar19 + -0x20;
    } while (lVar19 != -0x40);
    puVar20 = (undefined1 *)0xffffffffffffffc0;
    if (auStack_290 != (undefined1 *)0xffffffffffffffc0) {
      puVar21 = (undefined1 *)0xffffffffffffffc0;
      do {
        puVar20 = puVar21 + -0x20;
        FUN_109f49928(puVar21 + -0x18,*puVar20);
        puVar21 = puVar20;
      } while (puVar20 != auStack_290);
    }
    do {
      __Unwind_Resume(lVar14);
      FUN_109f4a078(&ppuStack_1b0);
      *(undefined1 **)(puVar20 + 8) = auStack_2d0;
      FUN_109f4a210(&ppuStack_b0);
      __ZdlPv(puVar20);
      FUN_109f49928(auStack_288,auStack_2d0[0]);
    } while( true );
  }
  return;
}



/* Entry: 109f4c30c; end: 109f4c343;  */

void FUN_109f4c30c(undefined8 *param_1,uint *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 **ppuVar12;
  undefined8 ***pppuVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 ***pppuVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 ***pppuVar19;
  undefined8 ***unaff_x28;
  undefined8 **ppuStack_550;
  undefined8 **ppuStack_548;
  undefined8 **ppuStack_538;
  undefined8 **ppuStack_530;
  undefined8 **ppuStack_508;
  undefined1 auStack_500 [8];
  undefined8 uStack_4f8;
  undefined8 **ppuStack_4f0;
  undefined1 uStack_4e8;
  undefined8 **ppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  undefined1 uStack_4c8;
  undefined8 **ppuStack_4c0;
  undefined8 **ppuStack_4b8;
  undefined8 **ppuStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 **ppuStack_4a0;
  undefined8 ***pppuStack_498;
  undefined8 **ppuStack_490;
  undefined8 *puStack_488;
  undefined8 ***pppuStack_480;
  undefined1 uStack_478;
  undefined1 auStack_470 [8];
  undefined8 **ppuStack_468;
  undefined1 *puStack_460;
  undefined1 uStack_458;
  undefined8 **ppuStack_450;
  undefined8 ***pppuStack_448;
  undefined8 ***pppuStack_440;
  undefined1 uStack_438;
  undefined1 auStack_430 [8];
  undefined8 **ppuStack_428;
  undefined1 *puStack_420;
  undefined1 uStack_418;
  undefined1 auStack_410 [8];
  undefined8 *puStack_408;
  undefined1 *puStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined8 **ppuStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 uStack_3b8;
  undefined1 auStack_3b0 [8];
  undefined8 **ppuStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 uStack_398;
  undefined1 auStack_390 [8];
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined1 uStack_378;
  undefined1 auStack_370 [8];
  ulong uStack_368;
  undefined1 *puStack_360;
  undefined1 uStack_358;
  undefined1 auStack_350 [16];
  undefined1 *puStack_340;
  undefined1 uStack_338;
  undefined1 auStack_330 [16];
  undefined1 *puStack_320;
  undefined1 uStack_318;
  undefined1 auStack_310 [16];
  undefined1 *puStack_300;
  undefined1 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 *puStack_2e0;
  undefined1 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 *puStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 *puStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 *puStack_280;
  undefined1 uStack_278;
  undefined8 **ppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined1 uStack_258;
  undefined8 *puStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined1 uStack_238;
  undefined8 **appuStack_230 [2];
  undefined8 ***pppuStack_220;
  undefined1 uStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 *puStack_200;
  undefined1 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 **ppuStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 **ppuStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 *puStack_1a0;
  undefined1 uStack_198;
  undefined8 **ppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined1 uStack_178;
  undefined8 *puStack_170;
  undefined8 ***pppuStack_168;
  undefined8 **ppuStack_160;
  undefined1 uStack_158;
  undefined8 **ppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined1 uStack_138;
  undefined8 *puStack_130;
  undefined8 ***pppuStack_128;
  undefined8 **ppuStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [8];
  char *pcStack_108;
  undefined8 ***pppuStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined1 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar8 = param_1;
    FUN_109f49fd4();
    *param_1 = puVar8;
    param_1[1] = puVar8;
    param_1[2] = puVar8 + (long)param_2 * 2;
    return;
  }
  FUN_109f49fc0();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_390[0] = 3;
  puVar4 = &DAT_10f491dce;
  FUN_109f4eb8c();
  puStack_380 = auStack_390;
  uStack_378 = 1;
  puStack_360 = auStack_370;
  uStack_368 = (ulong)*param_2;
  auStack_370[0] = 6;
  uStack_358 = 1;
  puStack_388 = puVar4;
  FUN_109f50c2c(auStack_350,auStack_390,2,1,2);
  uStack_338 = 1;
  puStack_3c8 = (undefined *)0x0;
  auStack_3d0[0] = 3;
  puVar4 = &UNK_10f61d5f3;
  puStack_340 = auStack_350;
  FUN_109f4ebd4();
  puStack_3c0 = auStack_3d0;
  uStack_3b8 = 1;
  ppuStack_3a8 = (undefined8 **)0x0;
  auStack_3b0[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 2);
  pppuVar16 = *(undefined8 ****)(param_2 + 4);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_3c8 = puVar4;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_448 = (undefined8 ***)((ulong)pppuStack_448 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_450 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,(lVar17 >> 3) * 0x6db6db6db6db6db7);
    pppuStack_268 = &ppuStack_4e0;
    pppuStack_260 = &ppuStack_490;
    ppuStack_550 = pppuVar5[1];
    unaff_x28 = (undefined8 ***)auStack_110;
    ppuStack_530 = &puStack_130;
    uStack_258 = 0;
    ppuStack_538 = &puStack_170;
    pppuVar13 = (undefined8 ***)ppuStack_550;
    ppuStack_4e0 = ppuStack_550;
    ppuStack_270 = pppuVar5;
    do {
      ppuStack_508 = pppuVar19;
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_490 = pppuVar13;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar19 = (undefined8 ***)ppuStack_508;
      puStack_c8 = puVar4;
      pppuStack_c0 = (undefined8 ***)auStack_d0;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar19;
      ppuStack_a0 = &puStack_b0;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      pcStack_108 = (char *)0x0;
      auStack_110[0] = 3;
      pcVar6 = "binding";
      pppuStack_220 = appuStack_230;
      FUN_109f4eb8c();
      uStack_f8 = 1;
      uStack_e8 = (ulong)*(uint *)(ppuStack_508 + 3);
      auStack_f0[0] = 6;
      uStack_d8 = 1;
      pcStack_108 = pcVar6;
      pppuStack_100 = unaff_x28;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      pppuStack_148 = (undefined8 ***)0x0;
      ppuStack_150 = (undefined8 **)CONCAT71(ppuStack_150._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f68f0dc;
      puStack_200 = auStack_210;
      FUN_109f4ec1c();
      uStack_138 = 1;
      pppuStack_128 = (undefined8 ***)(ulong)*(uint *)((long)ppuStack_508 + 0x1c);
      puStack_130._0_1_ = 6;
      uStack_118 = 1;
      pppuStack_148 = pppuVar19;
      pppuStack_140 = &ppuStack_150;
      ppuStack_120 = ppuStack_530;
      FUN_109f50c2c(&puStack_1f0,&ppuStack_150,2,1,2);
      uStack_1d8 = 1;
      pppuStack_188 = (undefined8 ***)0x0;
      ppuStack_190 = (undefined8 **)CONCAT71(ppuStack_190._1_7_,3);
      pppuVar19 = (undefined8 ***)&UNK_10f61d63f;
      ppuStack_1e0 = &puStack_1f0;
      FUN_109f4eccc();
      uStack_178 = 1;
      pppuStack_168 = (undefined8 ***)0x0;
      puStack_170._0_1_ = 2;
      pppuVar7 = (undefined8 ***)ppuStack_508[4];
      pppuStack_188 = pppuVar19;
      pppuStack_180 = &ppuStack_190;
      FUN_109f4ed14(pppuVar7,ppuStack_508[5]);
      uStack_158 = 1;
      pppuVar19 = (undefined8 ***)&puStack_1d0;
      pppuStack_168 = pppuVar7;
      ppuStack_160 = ppuStack_538;
      FUN_109f50c2c(&puStack_1d0,&ppuStack_190,2,1,2);
      uStack_1b8 = 1;
      ppuStack_1c0 = pppuVar19;
      FUN_109f50c2c(auStack_410,appuStack_230,4,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = auStack_410[0];
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_408;
      auStack_410[0] = uVar1;
      puStack_408 = ppuVar12;
      FUN_109f49928(&puStack_408);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1c8 + lVar17,*(undefined1 *)((long)&puStack_1d0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x80);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_168 + lVar17,*(undefined1 *)((long)&puStack_170 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_128 + lVar17,*(undefined1 *)((long)&puStack_130 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar13 = (undefined8 ***)(ppuStack_490 + 2);
      pppuVar19 = (undefined8 ***)(ppuStack_508 + 7);
    } while ((undefined8 ***)(ppuStack_508 + 7) != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_548 = pppuVar5;
    ppuStack_490 = pppuVar13;
  }
  puStack_3a0 = auStack_3b0;
  uStack_398 = 1;
  ppuStack_3a8 = pppuVar5;
  FUN_109f50c2c(auStack_330,auStack_3d0,2,1,2);
  uStack_318 = 1;
  puStack_408 = (undefined8 *)0x0;
  auStack_410[0] = 3;
  puVar8 = (undefined8 *)&UNK_10f61d602;
  puStack_320 = auStack_330;
  FUN_109f4ebd4();
  puStack_400 = auStack_410;
  uStack_3f8 = 1;
  ppuStack_3e8 = (undefined8 **)0x0;
  auStack_3f0[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 8);
  pppuVar16 = *(undefined8 ****)(param_2 + 10);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_408 = puVar8;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_4d8 = (undefined8 ***)((ulong)pppuStack_4d8 & 0xffffffffffffff00);
  ppuStack_4e0 = pppuVar5;
  if ((long)pppuVar16 - (long)pppuVar19 != 0) {
    FUN_109f4c30c(pppuVar5,(long)pppuVar16 - (long)pppuVar19 >> 6);
    pppuStack_448 = &ppuStack_4b0;
    pppuStack_440 = &ppuStack_4a0;
    ppuStack_4b0 = pppuVar5[1];
    unaff_x28 = (undefined8 ***)auStack_d0;
    ppuStack_530 = &puStack_130;
    ppuStack_538 = &puStack_1d0;
    uStack_438 = 0;
    ppuStack_548 = &puStack_250;
    ppuStack_4a0 = ppuStack_4b0;
    ppuStack_450 = pppuVar5;
    do {
      ppuStack_508 = ppuStack_4a0;
      *(undefined1 *)ppuStack_508 = 0;
      ppuStack_508[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_4a0 = ppuStack_508;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar13 = pppuVar19;
      puStack_c8 = puVar4;
      pppuStack_c0 = unaff_x28;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar13;
      ppuStack_a0 = &puStack_b0;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      pcStack_108 = (char *)0x0;
      auStack_110[0] = 3;
      pcVar6 = "binding";
      pppuStack_220 = appuStack_230;
      FUN_109f4eb8c();
      uStack_f8 = 1;
      uStack_e8 = (ulong)*(uint *)(pppuVar19 + 3);
      auStack_f0[0] = 6;
      uStack_d8 = 1;
      pcStack_108 = pcVar6;
      pppuStack_100 = (undefined8 ***)auStack_110;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      pppuStack_148 = (undefined8 ***)0x0;
      ppuStack_150 = (undefined8 **)CONCAT71(ppuStack_150._1_7_,3);
      pppuVar13 = (undefined8 ***)&DAT_10f68f0dc;
      puStack_200 = auStack_210;
      FUN_109f4ec1c();
      uStack_138 = 1;
      pppuStack_128 = (undefined8 ***)(ulong)*(uint *)((long)pppuVar19 + 0x1c);
      puStack_130._0_1_ = 6;
      uStack_118 = 1;
      pppuStack_148 = pppuVar13;
      pppuStack_140 = &ppuStack_150;
      ppuStack_120 = ppuStack_530;
      FUN_109f50c2c(&puStack_1f0,&ppuStack_150,2,1,2);
      uStack_1d8 = 1;
      pppuStack_188 = (undefined8 ***)0x0;
      ppuStack_190 = (undefined8 **)CONCAT71(ppuStack_190._1_7_,3);
      pppuVar13 = (undefined8 ***)&DAT_10f5178dd;
      ppuStack_1e0 = &puStack_1f0;
      FUN_109f4f530();
      pppuStack_180 = &ppuStack_190;
      uStack_178 = 1;
      puStack_170._0_1_ = 0;
      pppuStack_168 = (undefined8 ***)0x0;
      pppuStack_188 = pppuVar13;
      if ((bRam00000001137e7cc8 & 1) == 0) {
        iVar3 = 0x137e7cc8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7df0 = 0;
          puRam00000001137e7e00 = (undefined *)0x0;
          uRam00000001137e7df8 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7e08 = 1;
          puRam00000001137e7e18 = (undefined *)0x0;
          uRam00000001137e7e10 = 3;
          puVar10 = &UNK_10f61d734;
          puRam00000001137e7e00 = puVar4;
          FUN_109f4fee8();
          uRam00000001137e7e20 = 2;
          puRam00000001137e7e30 = (undefined *)0x0;
          uRam00000001137e7e28 = 3;
          puVar4 = &UNK_10f61d73d;
          puRam00000001137e7e18 = puVar10;
          FUN_109f4f5c0();
          uRam00000001137e7e38 = 3;
          puRam00000001137e7e48 = (undefined *)0x0;
          uRam00000001137e7e40 = 3;
          puVar10 = &UNK_10f61d747;
          puRam00000001137e7e30 = puVar4;
          FUN_109f4f5c0();
          uRam00000001137e7e50 = 4;
          puRam00000001137e7e60 = (undefined *)0x0;
          uRam00000001137e7e58 = 3;
          puVar4 = &DAT_10f517cd7;
          puRam00000001137e7e48 = puVar10;
          FUN_109f4fe58();
          puRam00000001137e7e60 = puVar4;
          ___cxa_atexit(0x109f60e60,0,0x100000000);
          ___cxa_guard_release(0x1137e7cc8);
        }
      }
      piVar14 = (int *)0x1137e7df0;
      lVar17 = 0x78;
      do {
        if (*piVar14 == *(int *)(pppuVar19 + 4)) {
          if (lVar17 != 0) goto LAB_109f4ca2c;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7df0;
LAB_109f4ca2c:
      FUN_109f4ff30(&ppuStack_270,piVar14 + 2);
      pppuVar13 = pppuStack_168;
      uVar1 = puStack_170._0_1_;
      puStack_170._0_1_ = ppuStack_270._0_1_;
      ppuStack_270._0_1_ = uVar1;
      pppuStack_168 = pppuStack_268;
      pppuStack_268 = pppuVar13;
      FUN_109f49928(&pppuStack_268);
      uStack_158 = 1;
      ppuStack_160 = &puStack_170;
      FUN_109f50c2c(ppuStack_538,&ppuStack_190,2,1,2);
      uStack_1b8 = 1;
      pppuStack_268 = (undefined8 ***)0x0;
      ppuStack_270 = (undefined8 **)CONCAT71(ppuStack_270._1_7_,3);
      pppuVar13 = (undefined8 ***)&UNK_10f61d63f;
      ppuStack_1c0 = ppuStack_538;
      FUN_109f4eccc();
      uStack_258 = 1;
      ppuStack_248 = (undefined8 **)0x0;
      puStack_250._0_1_ = 2;
      ppuVar12 = pppuVar19[5];
      pppuStack_268 = pppuVar13;
      pppuStack_260 = &ppuStack_270;
      FUN_109f4ed14(ppuVar12,pppuVar19[6]);
      uStack_238 = 1;
      puVar9 = auStack_1b0;
      ppuStack_248 = ppuVar12;
      ppuStack_240 = ppuStack_548;
      FUN_109f50c2c(auStack_1b0,&ppuStack_270,2,1,2);
      uStack_198 = 1;
      puStack_1a0 = puVar9;
      FUN_109f50c2c(&ppuStack_490,appuStack_230,5,1,2);
      uVar1 = *(undefined1 *)ppuStack_508;
      *(undefined1 *)ppuStack_508 = ppuStack_490._0_1_;
      ppuStack_490 = (undefined8 **)CONCAT71(ppuStack_490._1_7_,uVar1);
      ppuVar12 = (undefined8 **)ppuStack_508[1];
      ppuStack_508[1] = puStack_488;
      puStack_488 = ppuVar12;
      FUN_109f49928(&puStack_488);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1a8 + lVar17,auStack_1b0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0xa0);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_248 + lVar17,*(undefined1 *)((long)&puStack_250 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_168 + lVar17,*(undefined1 *)((long)&puStack_170 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_128 + lVar17,*(undefined1 *)((long)&puStack_130 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar19 = pppuVar19 + 8;
      ppuStack_4a0 = ppuStack_4a0 + 2;
    } while (pppuVar19 != pppuVar16);
    pppuVar5[1] = ppuStack_4a0;
    ppuStack_550 = pppuVar16;
  }
  puStack_3e0 = auStack_3f0;
  uStack_3d8 = 1;
  ppuStack_3e8 = pppuVar5;
  FUN_109f50c2c(auStack_310,auStack_410,2,1,2);
  uStack_2f8 = 1;
  pppuStack_268 = (undefined8 ***)0x0;
  ppuStack_270 = (undefined8 **)CONCAT71(ppuStack_270._1_7_,3);
  pppuVar19 = (undefined8 ***)&UNK_10f61d611;
  puStack_300 = auStack_310;
  FUN_109f50438();
  pppuStack_260 = &ppuStack_270;
  uStack_258 = 1;
  ppuStack_248 = (undefined8 **)0x0;
  puStack_250._0_1_ = 2;
  pppuVar16 = *(undefined8 ****)(param_2 + 0xe);
  pppuVar5 = *(undefined8 ****)(param_2 + 0x10);
  ppuVar12 = (undefined8 **)0x18;
  pppuStack_268 = pppuVar19;
  __Znwm();
  *ppuVar12 = (undefined8 *)0x0;
  ppuVar12[1] = (undefined8 *)0x0;
  ppuVar12[2] = (undefined8 *)0x0;
  pppuStack_448 = (undefined8 ***)((ulong)pppuStack_448 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar5 - (long)pppuVar16;
  ppuStack_450 = ppuVar12;
  if (lVar17 != 0) {
    FUN_109f4c30c(ppuVar12,lVar17 >> 5);
    pppuVar19 = (undefined8 ***)ppuVar12[1];
    pppuStack_148 = &ppuStack_4e0;
    pppuStack_140 = &ppuStack_490;
    ppuStack_508 = &puStack_b0;
    uStack_138 = 0;
    unaff_x28 = (undefined8 ***)0x1;
    ppuStack_4e0 = pppuVar19;
    ppuStack_150 = ppuVar12;
    do {
      *(undefined1 *)pppuVar19 = 0;
      pppuVar19[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_490 = pppuVar19;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar13 = pppuVar16;
      puStack_c8 = puVar4;
      pppuStack_c0 = (undefined8 ***)auStack_d0;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar13;
      ppuStack_a0 = ppuStack_508;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      auStack_110[0] = 3;
      pcVar6 = "format";
      pppuStack_220 = appuStack_230;
      FUN_109f4f530();
      uStack_f8 = 1;
      auStack_f0[0] = 0;
      uStack_e8 = 0;
      pcStack_108 = pcVar6;
      pppuStack_100 = (undefined8 ***)auStack_110;
      FUN_109f4f608(auStack_f0,pppuVar16 + 3);
      uStack_d8 = 1;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      puStack_200 = auStack_210;
      FUN_109f50c2c(&ppuStack_190,appuStack_230,2,1,2);
      uVar1 = *(undefined1 *)pppuVar19;
      *(undefined1 *)pppuVar19 = ppuStack_190._0_1_;
      ppuStack_190 = (undefined8 **)CONCAT71(ppuStack_190._1_7_,uVar1);
      pppuVar13 = (undefined8 ***)pppuVar19[1];
      pppuVar19[1] = pppuStack_188;
      pppuStack_188 = pppuVar13;
      FUN_109f49928(&pppuStack_188);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_208 + lVar17,auStack_210[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar16 = pppuVar16 + 4;
      pppuVar19 = (undefined8 ***)(ppuStack_490 + 2);
    } while (pppuVar16 != pppuVar5);
    ppuVar12[1] = pppuVar19;
    ppuStack_490 = pppuVar19;
  }
  ppuStack_240 = &puStack_250;
  uStack_238 = 1;
  ppuStack_248 = ppuVar12;
  FUN_109f50c2c(auStack_2f0,&ppuStack_270,2,1,2);
  uStack_2d8 = 1;
  pppuStack_448 = (undefined8 ***)0x0;
  ppuStack_450 = (undefined8 **)CONCAT71(ppuStack_450._1_7_,3);
  puVar4 = &UNK_10f61d61f;
  puStack_2e0 = auStack_2f0;
  FUN_109f508c0();
  pppuStack_440 = &ppuStack_450;
  uStack_438 = 1;
  ppuStack_428 = (undefined8 **)0x0;
  auStack_430[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 0x14);
  pppuVar16 = *(undefined8 ****)(param_2 + 0x16);
  pppuVar5 = (undefined8 ***)0x18;
  pppuStack_448 = (undefined8 ***)puVar4;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_4d8 = (undefined8 ***)((ulong)pppuStack_4d8 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_4e0 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,lVar17 >> 5);
    pppuStack_188 = &ppuStack_4b0;
    pppuStack_180 = &ppuStack_4a0;
    ppuStack_538 = pppuVar5[1];
    ppuStack_508 = &puStack_1f0;
    unaff_x28 = &ppuStack_150;
    uStack_178 = 0;
    pppuVar13 = (undefined8 ***)ppuStack_538;
    ppuStack_4b0 = ppuStack_538;
    ppuStack_190 = pppuVar5;
    do {
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_4a0 = pppuVar13;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar7 = pppuVar19;
      puStack_c8 = puVar4;
      pppuStack_c0 = (undefined8 ***)auStack_d0;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar7;
      ppuStack_a0 = &puStack_b0;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      pcStack_108 = (char *)0x0;
      auStack_110[0] = 3;
      pcVar6 = "binding";
      pppuStack_220 = appuStack_230;
      FUN_109f4eb8c();
      uStack_f8 = 1;
      uStack_e8 = (ulong)*(uint *)(pppuVar19 + 3);
      auStack_f0[0] = 6;
      uStack_d8 = 1;
      pcStack_108 = pcVar6;
      pppuStack_100 = (undefined8 ***)auStack_110;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      ppuStack_150 = (undefined8 **)CONCAT71(ppuStack_150._1_7_,3);
      pppuVar7 = (undefined8 ***)&DAT_10f6389e8;
      puStack_200 = auStack_210;
      FUN_109f4ec1c();
      uStack_138 = 1;
      puStack_130._0_1_ = 0;
      pppuStack_128 = (undefined8 ***)0x0;
      pppuStack_148 = pppuVar7;
      pppuStack_140 = unaff_x28;
      FUN_109f50480(&puStack_130,(undefined1 *)((long)pppuVar19 + 0x1c));
      uStack_118 = 1;
      pppuVar7 = (undefined8 ***)ppuStack_508;
      ppuStack_120 = &puStack_130;
      FUN_109f50c2c(ppuStack_508,&ppuStack_150,2,1,2);
      uStack_1d8 = 1;
      ppuStack_1e0 = pppuVar7;
      FUN_109f50c2c(&ppuStack_490,appuStack_230,3,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = ppuStack_490._0_1_;
      ppuStack_490 = (undefined8 **)CONCAT71(ppuStack_490._1_7_,uVar1);
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_488;
      puStack_488 = ppuVar12;
      FUN_109f49928(&puStack_488);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1e8 + lVar17,*(undefined1 *)((long)&puStack_1f0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x60);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_128 + lVar17,*(undefined1 *)((long)&puStack_130 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar19 = pppuVar19 + 4;
      pppuVar13 = (undefined8 ***)(ppuStack_4a0 + 2);
    } while (pppuVar19 != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_530 = pppuVar5;
    ppuStack_4a0 = pppuVar13;
  }
  puStack_420 = auStack_430;
  uStack_418 = 1;
  ppuStack_428 = pppuVar5;
  FUN_109f50c2c(auStack_2d0,&ppuStack_450,2,1,2);
  uStack_2b8 = 1;
  puStack_488 = (undefined8 *)0x0;
  ppuStack_490 = (undefined8 **)CONCAT71(ppuStack_490._1_7_,3);
  puVar8 = (undefined8 *)&UNK_10f61d62f;
  puStack_2c0 = auStack_2d0;
  FUN_109f508c0();
  pppuStack_480 = &ppuStack_490;
  uStack_478 = 1;
  ppuStack_468 = (undefined8 **)0x0;
  auStack_470[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 0x1a);
  pppuVar16 = *(undefined8 ****)(param_2 + 0x1c);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_488 = puVar8;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  uStack_4e8 = 0;
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_4f0 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,(lVar17 >> 3) * -0x3333333333333333);
    pppuStack_4d8 = &ppuStack_4c0;
    pppuStack_4d0 = &ppuStack_4b8;
    pppuVar13 = (undefined8 ***)pppuVar5[1];
    unaff_x28 = appuStack_230;
    ppuStack_530 = &puStack_1f0;
    ppuStack_538 = &puStack_130;
    uStack_4c8 = 0;
    ppuStack_4e0 = pppuVar5;
    ppuStack_4c0 = pppuVar13;
    do {
      ppuStack_508 = pppuVar19;
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_4b8 = pppuVar13;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar19 = (undefined8 ***)ppuStack_508;
      puStack_c8 = puVar4;
      pppuStack_c0 = (undefined8 ***)auStack_d0;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar19;
      ppuStack_a0 = &puStack_b0;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      pcStack_108 = (char *)0x0;
      auStack_110[0] = 3;
      pcVar6 = "binding";
      pppuStack_220 = unaff_x28;
      FUN_109f4eb8c();
      uStack_f8 = 1;
      uStack_e8 = (ulong)*(uint *)(ppuStack_508 + 3);
      auStack_f0[0] = 6;
      uStack_d8 = 1;
      pcStack_108 = pcVar6;
      pppuStack_100 = (undefined8 ***)auStack_110;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      pppuStack_148 = (undefined8 ***)0x0;
      ppuStack_150 = (undefined8 **)CONCAT71(ppuStack_150._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f6389e8;
      puStack_200 = auStack_210;
      FUN_109f4ec1c();
      uStack_138 = 1;
      puStack_130._0_1_ = 0;
      pppuStack_128 = (undefined8 ***)0x0;
      pppuStack_148 = pppuVar19;
      pppuStack_140 = &ppuStack_150;
      FUN_109f50480(ppuStack_538,(undefined1 *)((long)ppuStack_508 + 0x1c));
      uStack_118 = 1;
      ppuStack_120 = ppuStack_538;
      FUN_109f50c2c(ppuStack_530,&ppuStack_150,2,1,2);
      uStack_1d8 = 1;
      pppuStack_188 = (undefined8 ***)0x0;
      ppuStack_190 = (undefined8 **)CONCAT71(ppuStack_190._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f5178dd;
      ppuStack_1e0 = ppuStack_530;
      FUN_109f4f530();
      uStack_178 = 1;
      puStack_170._0_1_ = 0;
      pppuStack_168 = (undefined8 ***)0x0;
      pppuStack_188 = pppuVar19;
      pppuStack_180 = &ppuStack_190;
      if ((bRam00000001137e7cd8 & 1) == 0) {
        iVar3 = 0x137e7cd8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7e68 = 0;
          puRam00000001137e7e78 = (undefined *)0x0;
          uRam00000001137e7e70 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7e80 = 1;
          puRam00000001137e7e90 = (undefined *)0x0;
          uRam00000001137e7e88 = 3;
          puVar10 = &UNK_10f61d734;
          puRam00000001137e7e78 = puVar4;
          FUN_109f4fee8();
          uRam00000001137e7e98 = 2;
          puRam00000001137e7ea8 = (undefined *)0x0;
          uRam00000001137e7ea0 = 3;
          puVar4 = &UNK_10f61d73d;
          puRam00000001137e7e90 = puVar10;
          FUN_109f4f5c0();
          uRam00000001137e7eb0 = 3;
          puRam00000001137e7ec0 = (undefined *)0x0;
          uRam00000001137e7eb8 = 3;
          puVar10 = &UNK_10f61d747;
          puRam00000001137e7ea8 = puVar4;
          FUN_109f4f5c0();
          uRam00000001137e7ec8 = 4;
          puRam00000001137e7ed8 = (undefined *)0x0;
          uRam00000001137e7ed0 = 3;
          puVar4 = &DAT_10f517cd7;
          puRam00000001137e7ec0 = puVar10;
          FUN_109f4fe58();
          puRam00000001137e7ed8 = puVar4;
          ___cxa_atexit(0x109f60ed8,0,0x100000000);
          ___cxa_guard_release(0x1137e7cd8);
        }
      }
      lVar17 = 0x78;
      piVar14 = (int *)0x1137e7e68;
      do {
        if (*piVar14 == *(int *)(ppuStack_508 + 4)) {
          if (lVar17 != 0) goto LAB_109f4d5ac;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7e68;
LAB_109f4d5ac:
      FUN_109f4ff30(&ppuStack_4a0,piVar14 + 2);
      pppuVar19 = pppuStack_168;
      uVar1 = puStack_170._0_1_;
      puStack_170._0_1_ = ppuStack_4a0._0_1_;
      ppuStack_4a0 = (undefined8 **)CONCAT71(ppuStack_4a0._1_7_,uVar1);
      pppuStack_168 = pppuStack_498;
      pppuStack_498 = pppuVar19;
      FUN_109f49928(&pppuStack_498);
      uStack_158 = 1;
      pppuVar19 = (undefined8 ***)&puStack_1d0;
      ppuStack_160 = &puStack_170;
      FUN_109f50c2c(&puStack_1d0,&ppuStack_190,2,1,2);
      uStack_1b8 = 1;
      ppuStack_1c0 = pppuVar19;
      FUN_109f50c2c(&ppuStack_4b0,appuStack_230,4,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = ppuStack_4b0._0_1_;
      ppuStack_4b0 = (undefined8 **)CONCAT71(ppuStack_4b0._1_7_,uVar1);
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_4a8;
      puStack_4a8 = ppuVar12;
      FUN_109f49928(&puStack_4a8);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1c8 + lVar17,*(undefined1 *)((long)&puStack_1d0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x80);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_168 + lVar17,*(undefined1 *)((long)&puStack_170 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_128 + lVar17,*(undefined1 *)((long)&puStack_130 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar13 = (undefined8 ***)(ppuStack_4b8 + 2);
      pppuVar19 = (undefined8 ***)(ppuStack_508 + 5);
    } while ((undefined8 ***)(ppuStack_508 + 5) != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_550 = pppuVar5;
    ppuStack_548 = pppuVar16;
    ppuStack_4b8 = pppuVar13;
  }
  puStack_460 = auStack_470;
  uStack_458 = 1;
  ppuStack_468 = pppuVar5;
  FUN_109f50c2c(auStack_2b0,&ppuStack_490,2,1,2);
  uStack_298 = 1;
  pppuStack_188 = (undefined8 ***)0x0;
  ppuStack_190 = (undefined8 **)CONCAT71(ppuStack_190._1_7_,3);
  pppuVar19 = (undefined8 ***)&UNK_10f414faa;
  puStack_2a0 = auStack_2b0;
  FUN_109f4fee8();
  pppuStack_180 = &ppuStack_190;
  uStack_178 = 1;
  pppuStack_168 = (undefined8 ***)0x0;
  puStack_170._0_1_ = 2;
  pppuVar16 = *(undefined8 ****)(param_2 + 0x20);
  pppuVar5 = *(undefined8 ****)(param_2 + 0x22);
  pppuVar13 = (undefined8 ***)0x18;
  pppuStack_188 = pppuVar19;
  __Znwm();
  *pppuVar13 = (undefined8 **)0x0;
  pppuVar13[1] = (undefined8 **)0x0;
  pppuVar13[2] = (undefined8 **)0x0;
  uStack_4e8 = 0;
  lVar17 = (long)pppuVar5 - (long)pppuVar16;
  ppuStack_4f0 = pppuVar13;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar13,lVar17 >> 5);
    pppuStack_4d8 = &ppuStack_4c0;
    pppuStack_4d0 = &ppuStack_4b8;
    ppuStack_538 = pppuVar13[1];
    ppuStack_508 = &puStack_1f0;
    unaff_x28 = &ppuStack_150;
    uStack_4c8 = 0;
    pppuVar19 = (undefined8 ***)ppuStack_538;
    ppuStack_4e0 = pppuVar13;
    ppuStack_4c0 = ppuStack_538;
    do {
      *(undefined1 *)pppuVar19 = 0;
      pppuVar19[1] = (undefined8 **)0x0;
      auStack_d0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_4b8 = pppuVar19;
      FUN_109f4ec1c();
      uStack_b8 = 1;
      ppuStack_a8 = (undefined8 **)0x0;
      puStack_b0._0_1_ = 3;
      pppuVar7 = pppuVar16;
      puStack_c8 = puVar4;
      pppuStack_c0 = (undefined8 ***)auStack_d0;
      FUN_109f4ec64();
      uStack_98 = 1;
      ppuStack_a8 = pppuVar7;
      ppuStack_a0 = &puStack_b0;
      FUN_109f50c2c(appuStack_230,auStack_d0,2,1,2);
      uStack_218 = 1;
      pcStack_108 = (char *)0x0;
      auStack_110[0] = 3;
      pcVar6 = "binding";
      pppuStack_220 = appuStack_230;
      FUN_109f4eb8c();
      uStack_f8 = 1;
      uStack_e8 = (ulong)*(uint *)(pppuVar16 + 3);
      auStack_f0[0] = 6;
      uStack_d8 = 1;
      pcStack_108 = pcVar6;
      pppuStack_100 = (undefined8 ***)auStack_110;
      puStack_e0 = auStack_f0;
      FUN_109f50c2c(auStack_210,auStack_110,2,1,2);
      uStack_1f8 = 1;
      ppuStack_150 = (undefined8 **)CONCAT71(ppuStack_150._1_7_,3);
      pppuVar7 = (undefined8 ***)&DAT_10f6389e8;
      puStack_200 = auStack_210;
      FUN_109f4ec1c();
      uStack_138 = 1;
      puStack_130._0_1_ = 0;
      pppuStack_128 = (undefined8 ***)0x0;
      pppuStack_148 = pppuVar7;
      pppuStack_140 = unaff_x28;
      if ((bRam00000001137e7ce0 & 1) == 0) {
        iVar3 = 0x137e7ce0;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7d30 = 0;
          puRam00000001137e7d40 = (undefined *)0x0;
          uRam00000001137e7d38 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7d48 = 1;
          puRam00000001137e7d58 = (undefined *)0x0;
          uRam00000001137e7d50 = 3;
          puVar10 = &UNK_10f562af1;
          puRam00000001137e7d40 = puVar4;
          FUN_109f4eb8c();
          uRam00000001137e7d60 = 2;
          puRam00000001137e7d70 = (undefined *)0x0;
          uRam00000001137e7d68 = 3;
          puVar4 = &UNK_10f61d7b2;
          puRam00000001137e7d58 = puVar10;
          FUN_109f50438();
          uRam00000001137e7d78 = 3;
          puRam00000001137e7d88 = (undefined *)0x0;
          uRam00000001137e7d80 = 3;
          puVar10 = &DAT_10f517cd7;
          puRam00000001137e7d70 = puVar4;
          FUN_109f4fe58();
          puRam00000001137e7d88 = puVar10;
          ___cxa_atexit(0x109f60f14,0,0x100000000);
          ___cxa_guard_release(0x1137e7ce0);
        }
      }
      piVar14 = (int *)0x1137e7d30;
      lVar17 = 0x60;
      do {
        if (*piVar14 == *(int *)((long)pppuVar16 + 0x1c)) {
          if (lVar17 != 0) goto LAB_109f4da68;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7d30;
LAB_109f4da68:
      FUN_109f4ff30(&ppuStack_4a0,piVar14 + 2);
      pppuVar7 = pppuStack_128;
      uVar1 = puStack_130._0_1_;
      puStack_130._0_1_ = ppuStack_4a0._0_1_;
      ppuStack_4a0 = (undefined8 **)CONCAT71(ppuStack_4a0._1_7_,uVar1);
      pppuStack_128 = pppuStack_498;
      pppuStack_498 = pppuVar7;
      FUN_109f49928(&pppuStack_498);
      uStack_118 = 1;
      pppuVar7 = (undefined8 ***)ppuStack_508;
      ppuStack_120 = &puStack_130;
      FUN_109f50c2c(ppuStack_508,&ppuStack_150,2,1,2);
      uStack_1d8 = 1;
      ppuStack_1e0 = pppuVar7;
      FUN_109f50c2c(&ppuStack_4b0,appuStack_230,3,1,2);
      uVar1 = *(undefined1 *)pppuVar19;
      *(undefined1 *)pppuVar19 = ppuStack_4b0._0_1_;
      ppuStack_4b0 = (undefined8 **)CONCAT71(ppuStack_4b0._1_7_,uVar1);
      ppuVar12 = pppuVar19[1];
      pppuVar19[1] = (undefined8 **)puStack_4a8;
      puStack_4a8 = ppuVar12;
      FUN_109f49928(&puStack_4a8);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1e8 + lVar17,*(undefined1 *)((long)&puStack_1f0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x60);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_128 + lVar17,*(undefined1 *)((long)&puStack_130 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_e8 + lVar17,auStack_f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar16 = pppuVar16 + 4;
      pppuVar19 = (undefined8 ***)(ppuStack_4b8 + 2);
    } while (pppuVar16 != pppuVar5);
    pppuVar13[1] = pppuVar19;
    ppuStack_530 = pppuVar13;
    ppuStack_4b8 = pppuVar19;
  }
  ppuStack_160 = &puStack_170;
  uStack_158 = 1;
  pppuStack_168 = pppuVar13;
  FUN_109f50c2c(auStack_290,&ppuStack_190,2,1,2);
  uStack_278 = 1;
  puStack_280 = auStack_290;
  FUN_109f50c2c(auStack_500,auStack_350,7,1,2);
  uVar1 = *(undefined1 *)param_1;
  *(undefined1 *)param_1 = auStack_500[0];
  uVar15 = param_1[1];
  param_1[1] = uStack_4f8;
  auStack_500[0] = uVar1;
  uStack_4f8 = uVar15;
  FUN_109f49928(&uStack_4f8);
  lVar17 = 0;
  do {
    FUN_109f49928(auStack_288 + lVar17,auStack_290[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xe0);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&pppuStack_168 + lVar17,*(undefined1 *)((long)&puStack_170 + lVar17));
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_468 + lVar17,auStack_470[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_428 + lVar17,auStack_430[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_248 + lVar17,*(undefined1 *)((long)&puStack_250 + lVar17));
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_3e8 + lVar17,auStack_3f0[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_3a8 + lVar17,auStack_3b0[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    lVar11 = (long)&uStack_368 + lVar17;
    FUN_109f49928(lVar11,auStack_370[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lVar17 = 0x1137e7d70;
    do {
      FUN_109f49928(lVar17,*(undefined1 *)(lVar17 + -8));
      bVar2 = lVar17 != 0x1137e7d40;
      lVar17 = lVar17 + -0x18;
    } while (bVar2);
    ___cxa_guard_abort(0x1137e7ce0);
    FUN_109f49928(unaff_x28 + 1,(ulong)ppuStack_150 & 0xff);
    puVar18 = &uStack_e8;
    lVar17 = -0x40;
    do {
      FUN_109f49928(puVar18,(char)puVar18[-1]);
      puVar18 = puVar18 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    lVar17 = 0;
    do {
      FUN_109f49928((long)&ppuStack_a8 + lVar17,*(undefined1 *)((long)&puStack_b0 + lVar17));
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != -0x40);
    while (appuStack_230 != (undefined8 ***)ppuStack_508) {
      FUN_109f49928(ppuStack_508 + -3,*(undefined1 *)(ppuStack_508 + -4));
      ppuStack_508 = ppuStack_508 + -4;
    }
    FUN_109f4a078(&ppuStack_4e0);
    ppuStack_530[1] = ppuStack_538;
    FUN_109f4a210(&ppuStack_4f0);
    __ZdlPv(ppuStack_530);
    FUN_109f49928(&pppuStack_188,(ulong)ppuStack_190 & 0xff);
    pppuVar19 = &ppuStack_468;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_428;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_248;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_3e8;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_3a8;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
      puVar9 = (undefined1 *)0xffffffffffffffc0;
    } while (lVar17 != 0);
    do {
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_368 + lVar17,auStack_370[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      while (auStack_350 != puVar9) {
        FUN_109f49928(puVar9 + -0x18,puVar9[-0x20]);
        puVar9 = puVar9 + -0x20;
      }
      __Unwind_Resume(lVar11);
      FUN_109f4a078(&ppuStack_270);
      ppuStack_548[1] = ppuStack_550;
      FUN_109f4a210(&ppuStack_450);
      __ZdlPv(ppuStack_548);
      FUN_109f49928(&puStack_3c8,auStack_3d0[0]);
    } while( true );
  }
  return;
}



/* Entry: 109f4c344; end: 109f4eb8b;  */

void FUN_109f4c344(undefined1 *param_1,uint *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 **ppuVar12;
  undefined8 ***pppuVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 ***pppuVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 ***pppuVar19;
  undefined8 ***unaff_x28;
  undefined8 **ppuStack_530;
  undefined8 **ppuStack_528;
  undefined8 **ppuStack_518;
  undefined8 **ppuStack_510;
  undefined8 **ppuStack_4e8;
  undefined1 auStack_4e0 [8];
  undefined8 uStack_4d8;
  undefined8 **ppuStack_4d0;
  undefined1 uStack_4c8;
  undefined8 **ppuStack_4c0;
  undefined8 ***pppuStack_4b8;
  undefined8 ***pppuStack_4b0;
  undefined1 uStack_4a8;
  undefined8 **ppuStack_4a0;
  undefined8 **ppuStack_498;
  undefined8 **ppuStack_490;
  undefined8 *puStack_488;
  undefined8 **ppuStack_480;
  undefined8 ***pppuStack_478;
  undefined8 **ppuStack_470;
  undefined8 *puStack_468;
  undefined8 ***pppuStack_460;
  undefined1 uStack_458;
  undefined1 auStack_450 [8];
  undefined8 **ppuStack_448;
  undefined1 *puStack_440;
  undefined1 uStack_438;
  undefined8 **ppuStack_430;
  undefined8 ***pppuStack_428;
  undefined8 ***pppuStack_420;
  undefined1 uStack_418;
  undefined1 auStack_410 [8];
  undefined8 **ppuStack_408;
  undefined1 *puStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined8 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 uStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined8 **ppuStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 uStack_3b8;
  undefined1 auStack_3b0 [8];
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 uStack_398;
  undefined1 auStack_390 [8];
  undefined8 **ppuStack_388;
  undefined1 *puStack_380;
  undefined1 uStack_378;
  undefined1 auStack_370 [8];
  undefined *puStack_368;
  undefined1 *puStack_360;
  undefined1 uStack_358;
  undefined1 auStack_350 [8];
  ulong uStack_348;
  undefined1 *puStack_340;
  undefined1 uStack_338;
  undefined1 auStack_330 [16];
  undefined1 *puStack_320;
  undefined1 uStack_318;
  undefined1 auStack_310 [16];
  undefined1 *puStack_300;
  undefined1 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 *puStack_2e0;
  undefined1 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 *puStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 *puStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_290 [16];
  undefined1 *puStack_280;
  undefined1 uStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 *puStack_260;
  undefined1 uStack_258;
  undefined8 **ppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined1 uStack_238;
  undefined8 *puStack_230;
  undefined8 **ppuStack_228;
  undefined8 **ppuStack_220;
  undefined1 uStack_218;
  undefined8 **appuStack_210 [2];
  undefined8 ***pppuStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 *puStack_1e0;
  undefined1 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 **ppuStack_1c0;
  undefined1 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 **ppuStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 *puStack_180;
  undefined1 uStack_178;
  undefined8 **ppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined1 uStack_158;
  undefined8 *puStack_150;
  undefined8 ***pppuStack_148;
  undefined8 **ppuStack_140;
  undefined1 uStack_138;
  undefined8 **ppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  undefined8 ***pppuStack_108;
  undefined8 **ppuStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [8];
  char *pcStack_e8;
  undefined8 ***pppuStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_370[0] = 3;
  puVar4 = &DAT_10f491dce;
  FUN_109f4eb8c();
  puStack_360 = auStack_370;
  uStack_358 = 1;
  puStack_340 = auStack_350;
  uStack_348 = (ulong)*param_2;
  auStack_350[0] = 6;
  uStack_338 = 1;
  puStack_368 = puVar4;
  FUN_109f50c2c(auStack_330,auStack_370,2,1,2);
  uStack_318 = 1;
  puStack_3a8 = (undefined *)0x0;
  auStack_3b0[0] = 3;
  puVar4 = &UNK_10f61d5f3;
  puStack_320 = auStack_330;
  FUN_109f4ebd4();
  puStack_3a0 = auStack_3b0;
  uStack_398 = 1;
  ppuStack_388 = (undefined8 **)0x0;
  auStack_390[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 2);
  pppuVar16 = *(undefined8 ****)(param_2 + 4);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_3a8 = puVar4;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_428 = (undefined8 ***)((ulong)pppuStack_428 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_430 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,(lVar17 >> 3) * 0x6db6db6db6db6db7);
    pppuStack_248 = &ppuStack_4c0;
    pppuStack_240 = &ppuStack_470;
    ppuStack_530 = pppuVar5[1];
    unaff_x28 = (undefined8 ***)auStack_f0;
    ppuStack_510 = &puStack_110;
    uStack_238 = 0;
    ppuStack_518 = &puStack_150;
    pppuVar13 = (undefined8 ***)ppuStack_530;
    ppuStack_4c0 = ppuStack_530;
    ppuStack_250 = pppuVar5;
    do {
      ppuStack_4e8 = pppuVar19;
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_470 = pppuVar13;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar19 = (undefined8 ***)ppuStack_4e8;
      puStack_a8 = puVar4;
      pppuStack_a0 = (undefined8 ***)auStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar19;
      ppuStack_80 = &puStack_90;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      pcStack_e8 = (char *)0x0;
      auStack_f0[0] = 3;
      pcVar6 = "binding";
      pppuStack_200 = appuStack_210;
      FUN_109f4eb8c();
      uStack_d8 = 1;
      uStack_c8 = (ulong)*(uint *)(ppuStack_4e8 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = unaff_x28;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      pppuStack_128 = (undefined8 ***)0x0;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f68f0dc;
      puStack_1e0 = auStack_1f0;
      FUN_109f4ec1c();
      uStack_118 = 1;
      pppuStack_108 = (undefined8 ***)(ulong)*(uint *)((long)ppuStack_4e8 + 0x1c);
      puStack_110._0_1_ = 6;
      uStack_f8 = 1;
      pppuStack_128 = pppuVar19;
      pppuStack_120 = &ppuStack_130;
      ppuStack_100 = ppuStack_510;
      FUN_109f50c2c(&puStack_1d0,&ppuStack_130,2,1,2);
      uStack_1b8 = 1;
      pppuStack_168 = (undefined8 ***)0x0;
      ppuStack_170 = (undefined8 **)CONCAT71(ppuStack_170._1_7_,3);
      pppuVar19 = (undefined8 ***)&UNK_10f61d63f;
      ppuStack_1c0 = &puStack_1d0;
      FUN_109f4eccc();
      uStack_158 = 1;
      pppuStack_148 = (undefined8 ***)0x0;
      puStack_150._0_1_ = 2;
      pppuVar7 = (undefined8 ***)ppuStack_4e8[4];
      pppuStack_168 = pppuVar19;
      pppuStack_160 = &ppuStack_170;
      FUN_109f4ed14(pppuVar7,ppuStack_4e8[5]);
      uStack_138 = 1;
      pppuVar19 = (undefined8 ***)&puStack_1b0;
      pppuStack_148 = pppuVar7;
      ppuStack_140 = ppuStack_518;
      FUN_109f50c2c(&puStack_1b0,&ppuStack_170,2,1,2);
      uStack_198 = 1;
      ppuStack_1a0 = pppuVar19;
      FUN_109f50c2c(auStack_3f0,appuStack_210,4,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = auStack_3f0[0];
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_3e8;
      auStack_3f0[0] = uVar1;
      puStack_3e8 = ppuVar12;
      FUN_109f49928(&puStack_3e8);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1a8 + lVar17,*(undefined1 *)((long)&puStack_1b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x80);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_148 + lVar17,*(undefined1 *)((long)&puStack_150 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_108 + lVar17,*(undefined1 *)((long)&puStack_110 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar13 = (undefined8 ***)(ppuStack_470 + 2);
      pppuVar19 = (undefined8 ***)(ppuStack_4e8 + 7);
    } while ((undefined8 ***)(ppuStack_4e8 + 7) != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_528 = pppuVar5;
    ppuStack_470 = pppuVar13;
  }
  puStack_380 = auStack_390;
  uStack_378 = 1;
  ppuStack_388 = pppuVar5;
  FUN_109f50c2c(auStack_310,auStack_3b0,2,1,2);
  uStack_2f8 = 1;
  puStack_3e8 = (undefined8 *)0x0;
  auStack_3f0[0] = 3;
  puVar8 = (undefined8 *)&UNK_10f61d602;
  puStack_300 = auStack_310;
  FUN_109f4ebd4();
  puStack_3e0 = auStack_3f0;
  uStack_3d8 = 1;
  ppuStack_3c8 = (undefined8 **)0x0;
  auStack_3d0[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 8);
  pppuVar16 = *(undefined8 ****)(param_2 + 10);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_3e8 = puVar8;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_4b8 = (undefined8 ***)((ulong)pppuStack_4b8 & 0xffffffffffffff00);
  ppuStack_4c0 = pppuVar5;
  if ((long)pppuVar16 - (long)pppuVar19 != 0) {
    FUN_109f4c30c(pppuVar5,(long)pppuVar16 - (long)pppuVar19 >> 6);
    pppuStack_428 = &ppuStack_490;
    pppuStack_420 = &ppuStack_480;
    ppuStack_490 = pppuVar5[1];
    unaff_x28 = (undefined8 ***)auStack_b0;
    ppuStack_510 = &puStack_110;
    ppuStack_518 = &puStack_1b0;
    uStack_418 = 0;
    ppuStack_528 = &puStack_230;
    ppuStack_480 = ppuStack_490;
    ppuStack_430 = pppuVar5;
    do {
      ppuStack_4e8 = ppuStack_480;
      *(undefined1 *)ppuStack_4e8 = 0;
      ppuStack_4e8[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_480 = ppuStack_4e8;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar13 = pppuVar19;
      puStack_a8 = puVar4;
      pppuStack_a0 = unaff_x28;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar13;
      ppuStack_80 = &puStack_90;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      pcStack_e8 = (char *)0x0;
      auStack_f0[0] = 3;
      pcVar6 = "binding";
      pppuStack_200 = appuStack_210;
      FUN_109f4eb8c();
      uStack_d8 = 1;
      uStack_c8 = (ulong)*(uint *)(pppuVar19 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = (undefined8 ***)auStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      pppuStack_128 = (undefined8 ***)0x0;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pppuVar13 = (undefined8 ***)&DAT_10f68f0dc;
      puStack_1e0 = auStack_1f0;
      FUN_109f4ec1c();
      uStack_118 = 1;
      pppuStack_108 = (undefined8 ***)(ulong)*(uint *)((long)pppuVar19 + 0x1c);
      puStack_110._0_1_ = 6;
      uStack_f8 = 1;
      pppuStack_128 = pppuVar13;
      pppuStack_120 = &ppuStack_130;
      ppuStack_100 = ppuStack_510;
      FUN_109f50c2c(&puStack_1d0,&ppuStack_130,2,1,2);
      uStack_1b8 = 1;
      pppuStack_168 = (undefined8 ***)0x0;
      ppuStack_170 = (undefined8 **)CONCAT71(ppuStack_170._1_7_,3);
      pppuVar13 = (undefined8 ***)&DAT_10f5178dd;
      ppuStack_1c0 = &puStack_1d0;
      FUN_109f4f530();
      pppuStack_160 = &ppuStack_170;
      uStack_158 = 1;
      puStack_150._0_1_ = 0;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_168 = pppuVar13;
      if ((bRam00000001137e7cc8 & 1) == 0) {
        iVar3 = 0x137e7cc8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7df0 = 0;
          puRam00000001137e7e00 = (undefined *)0x0;
          uRam00000001137e7df8 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7e08 = 1;
          puRam00000001137e7e18 = (undefined *)0x0;
          uRam00000001137e7e10 = 3;
          puVar10 = &UNK_10f61d734;
          puRam00000001137e7e00 = puVar4;
          FUN_109f4fee8();
          uRam00000001137e7e20 = 2;
          puRam00000001137e7e30 = (undefined *)0x0;
          uRam00000001137e7e28 = 3;
          puVar4 = &UNK_10f61d73d;
          puRam00000001137e7e18 = puVar10;
          FUN_109f4f5c0();
          uRam00000001137e7e38 = 3;
          puRam00000001137e7e48 = (undefined *)0x0;
          uRam00000001137e7e40 = 3;
          puVar10 = &UNK_10f61d747;
          puRam00000001137e7e30 = puVar4;
          FUN_109f4f5c0();
          uRam00000001137e7e50 = 4;
          puRam00000001137e7e60 = (undefined *)0x0;
          uRam00000001137e7e58 = 3;
          puVar4 = &DAT_10f517cd7;
          puRam00000001137e7e48 = puVar10;
          FUN_109f4fe58();
          puRam00000001137e7e60 = puVar4;
          ___cxa_atexit(0x109f60e60,0,0x100000000);
          ___cxa_guard_release(0x1137e7cc8);
        }
      }
      piVar14 = (int *)0x1137e7df0;
      lVar17 = 0x78;
      do {
        if (*piVar14 == *(int *)(pppuVar19 + 4)) {
          if (lVar17 != 0) goto LAB_109f4ca2c;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7df0;
LAB_109f4ca2c:
      FUN_109f4ff30(&ppuStack_250,piVar14 + 2);
      pppuVar13 = pppuStack_148;
      uVar1 = puStack_150._0_1_;
      puStack_150._0_1_ = ppuStack_250._0_1_;
      ppuStack_250._0_1_ = uVar1;
      pppuStack_148 = pppuStack_248;
      pppuStack_248 = pppuVar13;
      FUN_109f49928(&pppuStack_248);
      uStack_138 = 1;
      ppuStack_140 = &puStack_150;
      FUN_109f50c2c(ppuStack_518,&ppuStack_170,2,1,2);
      uStack_198 = 1;
      pppuStack_248 = (undefined8 ***)0x0;
      ppuStack_250 = (undefined8 **)CONCAT71(ppuStack_250._1_7_,3);
      pppuVar13 = (undefined8 ***)&UNK_10f61d63f;
      ppuStack_1a0 = ppuStack_518;
      FUN_109f4eccc();
      uStack_238 = 1;
      ppuStack_228 = (undefined8 **)0x0;
      puStack_230._0_1_ = 2;
      ppuVar12 = pppuVar19[5];
      pppuStack_248 = pppuVar13;
      pppuStack_240 = &ppuStack_250;
      FUN_109f4ed14(ppuVar12,pppuVar19[6]);
      uStack_218 = 1;
      puVar9 = auStack_190;
      ppuStack_228 = ppuVar12;
      ppuStack_220 = ppuStack_528;
      FUN_109f50c2c(auStack_190,&ppuStack_250,2,1,2);
      uStack_178 = 1;
      puStack_180 = puVar9;
      FUN_109f50c2c(&ppuStack_470,appuStack_210,5,1,2);
      uVar1 = *(undefined1 *)ppuStack_4e8;
      *(undefined1 *)ppuStack_4e8 = ppuStack_470._0_1_;
      ppuStack_470 = (undefined8 **)CONCAT71(ppuStack_470._1_7_,uVar1);
      ppuVar12 = (undefined8 **)ppuStack_4e8[1];
      ppuStack_4e8[1] = puStack_468;
      puStack_468 = ppuVar12;
      FUN_109f49928(&puStack_468);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_188 + lVar17,auStack_190[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0xa0);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_228 + lVar17,*(undefined1 *)((long)&puStack_230 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_148 + lVar17,*(undefined1 *)((long)&puStack_150 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_108 + lVar17,*(undefined1 *)((long)&puStack_110 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar19 = pppuVar19 + 8;
      ppuStack_480 = ppuStack_480 + 2;
    } while (pppuVar19 != pppuVar16);
    pppuVar5[1] = ppuStack_480;
    ppuStack_530 = pppuVar16;
  }
  puStack_3c0 = auStack_3d0;
  uStack_3b8 = 1;
  ppuStack_3c8 = pppuVar5;
  FUN_109f50c2c(auStack_2f0,auStack_3f0,2,1,2);
  uStack_2d8 = 1;
  pppuStack_248 = (undefined8 ***)0x0;
  ppuStack_250 = (undefined8 **)CONCAT71(ppuStack_250._1_7_,3);
  pppuVar19 = (undefined8 ***)&UNK_10f61d611;
  puStack_2e0 = auStack_2f0;
  FUN_109f50438();
  pppuStack_240 = &ppuStack_250;
  uStack_238 = 1;
  ppuStack_228 = (undefined8 **)0x0;
  puStack_230._0_1_ = 2;
  pppuVar16 = *(undefined8 ****)(param_2 + 0xe);
  pppuVar5 = *(undefined8 ****)(param_2 + 0x10);
  ppuVar12 = (undefined8 **)0x18;
  pppuStack_248 = pppuVar19;
  __Znwm();
  *ppuVar12 = (undefined8 *)0x0;
  ppuVar12[1] = (undefined8 *)0x0;
  ppuVar12[2] = (undefined8 *)0x0;
  pppuStack_428 = (undefined8 ***)((ulong)pppuStack_428 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar5 - (long)pppuVar16;
  ppuStack_430 = ppuVar12;
  if (lVar17 != 0) {
    FUN_109f4c30c(ppuVar12,lVar17 >> 5);
    pppuVar19 = (undefined8 ***)ppuVar12[1];
    pppuStack_128 = &ppuStack_4c0;
    pppuStack_120 = &ppuStack_470;
    ppuStack_4e8 = &puStack_90;
    uStack_118 = 0;
    unaff_x28 = (undefined8 ***)0x1;
    ppuStack_4c0 = pppuVar19;
    ppuStack_130 = ppuVar12;
    do {
      *(undefined1 *)pppuVar19 = 0;
      pppuVar19[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_470 = pppuVar19;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar13 = pppuVar16;
      puStack_a8 = puVar4;
      pppuStack_a0 = (undefined8 ***)auStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar13;
      ppuStack_80 = ppuStack_4e8;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      auStack_f0[0] = 3;
      pcVar6 = "format";
      pppuStack_200 = appuStack_210;
      FUN_109f4f530();
      uStack_d8 = 1;
      auStack_d0[0] = 0;
      uStack_c8 = 0;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = (undefined8 ***)auStack_f0;
      FUN_109f4f608(auStack_d0,pppuVar16 + 3);
      uStack_b8 = 1;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      puStack_1e0 = auStack_1f0;
      FUN_109f50c2c(&ppuStack_170,appuStack_210,2,1,2);
      uVar1 = *(undefined1 *)pppuVar19;
      *(undefined1 *)pppuVar19 = ppuStack_170._0_1_;
      ppuStack_170 = (undefined8 **)CONCAT71(ppuStack_170._1_7_,uVar1);
      pppuVar13 = (undefined8 ***)pppuVar19[1];
      pppuVar19[1] = pppuStack_168;
      pppuStack_168 = pppuVar13;
      FUN_109f49928(&pppuStack_168);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1e8 + lVar17,auStack_1f0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar16 = pppuVar16 + 4;
      pppuVar19 = (undefined8 ***)(ppuStack_470 + 2);
    } while (pppuVar16 != pppuVar5);
    ppuVar12[1] = pppuVar19;
    ppuStack_470 = pppuVar19;
  }
  ppuStack_220 = &puStack_230;
  uStack_218 = 1;
  ppuStack_228 = ppuVar12;
  FUN_109f50c2c(auStack_2d0,&ppuStack_250,2,1,2);
  uStack_2b8 = 1;
  pppuStack_428 = (undefined8 ***)0x0;
  ppuStack_430 = (undefined8 **)CONCAT71(ppuStack_430._1_7_,3);
  puVar4 = &UNK_10f61d61f;
  puStack_2c0 = auStack_2d0;
  FUN_109f508c0();
  pppuStack_420 = &ppuStack_430;
  uStack_418 = 1;
  ppuStack_408 = (undefined8 **)0x0;
  auStack_410[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 0x14);
  pppuVar16 = *(undefined8 ****)(param_2 + 0x16);
  pppuVar5 = (undefined8 ***)0x18;
  pppuStack_428 = (undefined8 ***)puVar4;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  pppuStack_4b8 = (undefined8 ***)((ulong)pppuStack_4b8 & 0xffffffffffffff00);
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_4c0 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,lVar17 >> 5);
    pppuStack_168 = &ppuStack_490;
    pppuStack_160 = &ppuStack_480;
    ppuStack_518 = pppuVar5[1];
    ppuStack_4e8 = &puStack_1d0;
    unaff_x28 = &ppuStack_130;
    uStack_158 = 0;
    pppuVar13 = (undefined8 ***)ppuStack_518;
    ppuStack_490 = ppuStack_518;
    ppuStack_170 = pppuVar5;
    do {
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_480 = pppuVar13;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar7 = pppuVar19;
      puStack_a8 = puVar4;
      pppuStack_a0 = (undefined8 ***)auStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar7;
      ppuStack_80 = &puStack_90;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      pcStack_e8 = (char *)0x0;
      auStack_f0[0] = 3;
      pcVar6 = "binding";
      pppuStack_200 = appuStack_210;
      FUN_109f4eb8c();
      uStack_d8 = 1;
      uStack_c8 = (ulong)*(uint *)(pppuVar19 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = (undefined8 ***)auStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pppuVar7 = (undefined8 ***)&DAT_10f6389e8;
      puStack_1e0 = auStack_1f0;
      FUN_109f4ec1c();
      uStack_118 = 1;
      puStack_110._0_1_ = 0;
      pppuStack_108 = (undefined8 ***)0x0;
      pppuStack_128 = pppuVar7;
      pppuStack_120 = unaff_x28;
      FUN_109f50480(&puStack_110,(undefined1 *)((long)pppuVar19 + 0x1c));
      uStack_f8 = 1;
      pppuVar7 = (undefined8 ***)ppuStack_4e8;
      ppuStack_100 = &puStack_110;
      FUN_109f50c2c(ppuStack_4e8,&ppuStack_130,2,1,2);
      uStack_1b8 = 1;
      ppuStack_1c0 = pppuVar7;
      FUN_109f50c2c(&ppuStack_470,appuStack_210,3,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = ppuStack_470._0_1_;
      ppuStack_470 = (undefined8 **)CONCAT71(ppuStack_470._1_7_,uVar1);
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_468;
      puStack_468 = ppuVar12;
      FUN_109f49928(&puStack_468);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1c8 + lVar17,*(undefined1 *)((long)&puStack_1d0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x60);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_108 + lVar17,*(undefined1 *)((long)&puStack_110 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar19 = pppuVar19 + 4;
      pppuVar13 = (undefined8 ***)(ppuStack_480 + 2);
    } while (pppuVar19 != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_510 = pppuVar5;
    ppuStack_480 = pppuVar13;
  }
  puStack_400 = auStack_410;
  uStack_3f8 = 1;
  ppuStack_408 = pppuVar5;
  FUN_109f50c2c(auStack_2b0,&ppuStack_430,2,1,2);
  uStack_298 = 1;
  puStack_468 = (undefined8 *)0x0;
  ppuStack_470 = (undefined8 **)CONCAT71(ppuStack_470._1_7_,3);
  puVar8 = (undefined8 *)&UNK_10f61d62f;
  puStack_2a0 = auStack_2b0;
  FUN_109f508c0();
  pppuStack_460 = &ppuStack_470;
  uStack_458 = 1;
  ppuStack_448 = (undefined8 **)0x0;
  auStack_450[0] = 2;
  pppuVar19 = *(undefined8 ****)(param_2 + 0x1a);
  pppuVar16 = *(undefined8 ****)(param_2 + 0x1c);
  pppuVar5 = (undefined8 ***)0x18;
  puStack_468 = puVar8;
  __Znwm();
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  uStack_4c8 = 0;
  lVar17 = (long)pppuVar16 - (long)pppuVar19;
  ppuStack_4d0 = pppuVar5;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar5,(lVar17 >> 3) * -0x3333333333333333);
    pppuStack_4b8 = &ppuStack_4a0;
    pppuStack_4b0 = &ppuStack_498;
    pppuVar13 = (undefined8 ***)pppuVar5[1];
    unaff_x28 = appuStack_210;
    ppuStack_510 = &puStack_1d0;
    ppuStack_518 = &puStack_110;
    uStack_4a8 = 0;
    ppuStack_4c0 = pppuVar5;
    ppuStack_4a0 = pppuVar13;
    do {
      ppuStack_4e8 = pppuVar19;
      *(undefined1 *)pppuVar13 = 0;
      pppuVar13[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_498 = pppuVar13;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar19 = (undefined8 ***)ppuStack_4e8;
      puStack_a8 = puVar4;
      pppuStack_a0 = (undefined8 ***)auStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar19;
      ppuStack_80 = &puStack_90;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      pcStack_e8 = (char *)0x0;
      auStack_f0[0] = 3;
      pcVar6 = "binding";
      pppuStack_200 = unaff_x28;
      FUN_109f4eb8c();
      uStack_d8 = 1;
      uStack_c8 = (ulong)*(uint *)(ppuStack_4e8 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = (undefined8 ***)auStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      pppuStack_128 = (undefined8 ***)0x0;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f6389e8;
      puStack_1e0 = auStack_1f0;
      FUN_109f4ec1c();
      uStack_118 = 1;
      puStack_110._0_1_ = 0;
      pppuStack_108 = (undefined8 ***)0x0;
      pppuStack_128 = pppuVar19;
      pppuStack_120 = &ppuStack_130;
      FUN_109f50480(ppuStack_518,(undefined1 *)((long)ppuStack_4e8 + 0x1c));
      uStack_f8 = 1;
      ppuStack_100 = ppuStack_518;
      FUN_109f50c2c(ppuStack_510,&ppuStack_130,2,1,2);
      uStack_1b8 = 1;
      pppuStack_168 = (undefined8 ***)0x0;
      ppuStack_170 = (undefined8 **)CONCAT71(ppuStack_170._1_7_,3);
      pppuVar19 = (undefined8 ***)&DAT_10f5178dd;
      ppuStack_1c0 = ppuStack_510;
      FUN_109f4f530();
      uStack_158 = 1;
      puStack_150._0_1_ = 0;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_168 = pppuVar19;
      pppuStack_160 = &ppuStack_170;
      if ((bRam00000001137e7cd8 & 1) == 0) {
        iVar3 = 0x137e7cd8;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7e68 = 0;
          puRam00000001137e7e78 = (undefined *)0x0;
          uRam00000001137e7e70 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7e80 = 1;
          puRam00000001137e7e90 = (undefined *)0x0;
          uRam00000001137e7e88 = 3;
          puVar10 = &UNK_10f61d734;
          puRam00000001137e7e78 = puVar4;
          FUN_109f4fee8();
          uRam00000001137e7e98 = 2;
          puRam00000001137e7ea8 = (undefined *)0x0;
          uRam00000001137e7ea0 = 3;
          puVar4 = &UNK_10f61d73d;
          puRam00000001137e7e90 = puVar10;
          FUN_109f4f5c0();
          uRam00000001137e7eb0 = 3;
          puRam00000001137e7ec0 = (undefined *)0x0;
          uRam00000001137e7eb8 = 3;
          puVar10 = &UNK_10f61d747;
          puRam00000001137e7ea8 = puVar4;
          FUN_109f4f5c0();
          uRam00000001137e7ec8 = 4;
          puRam00000001137e7ed8 = (undefined *)0x0;
          uRam00000001137e7ed0 = 3;
          puVar4 = &DAT_10f517cd7;
          puRam00000001137e7ec0 = puVar10;
          FUN_109f4fe58();
          puRam00000001137e7ed8 = puVar4;
          ___cxa_atexit(0x109f60ed8,0,0x100000000);
          ___cxa_guard_release(0x1137e7cd8);
        }
      }
      lVar17 = 0x78;
      piVar14 = (int *)0x1137e7e68;
      do {
        if (*piVar14 == *(int *)(ppuStack_4e8 + 4)) {
          if (lVar17 != 0) goto LAB_109f4d5ac;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7e68;
LAB_109f4d5ac:
      FUN_109f4ff30(&ppuStack_480,piVar14 + 2);
      pppuVar19 = pppuStack_148;
      uVar1 = puStack_150._0_1_;
      puStack_150._0_1_ = ppuStack_480._0_1_;
      ppuStack_480 = (undefined8 **)CONCAT71(ppuStack_480._1_7_,uVar1);
      pppuStack_148 = pppuStack_478;
      pppuStack_478 = pppuVar19;
      FUN_109f49928(&pppuStack_478);
      uStack_138 = 1;
      pppuVar19 = (undefined8 ***)&puStack_1b0;
      ppuStack_140 = &puStack_150;
      FUN_109f50c2c(&puStack_1b0,&ppuStack_170,2,1,2);
      uStack_198 = 1;
      ppuStack_1a0 = pppuVar19;
      FUN_109f50c2c(&ppuStack_490,appuStack_210,4,1,2);
      uVar1 = *(undefined1 *)pppuVar13;
      *(undefined1 *)pppuVar13 = ppuStack_490._0_1_;
      ppuStack_490 = (undefined8 **)CONCAT71(ppuStack_490._1_7_,uVar1);
      ppuVar12 = pppuVar13[1];
      pppuVar13[1] = (undefined8 **)puStack_488;
      puStack_488 = ppuVar12;
      FUN_109f49928(&puStack_488);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1a8 + lVar17,*(undefined1 *)((long)&puStack_1b0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x80);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_148 + lVar17,*(undefined1 *)((long)&puStack_150 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_108 + lVar17,*(undefined1 *)((long)&puStack_110 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar13 = (undefined8 ***)(ppuStack_498 + 2);
      pppuVar19 = (undefined8 ***)(ppuStack_4e8 + 5);
    } while ((undefined8 ***)(ppuStack_4e8 + 5) != pppuVar16);
    pppuVar5[1] = pppuVar13;
    ppuStack_530 = pppuVar5;
    ppuStack_528 = pppuVar16;
    ppuStack_498 = pppuVar13;
  }
  puStack_440 = auStack_450;
  uStack_438 = 1;
  ppuStack_448 = pppuVar5;
  FUN_109f50c2c(auStack_290,&ppuStack_470,2,1,2);
  uStack_278 = 1;
  pppuStack_168 = (undefined8 ***)0x0;
  ppuStack_170 = (undefined8 **)CONCAT71(ppuStack_170._1_7_,3);
  pppuVar19 = (undefined8 ***)&UNK_10f414faa;
  puStack_280 = auStack_290;
  FUN_109f4fee8();
  pppuStack_160 = &ppuStack_170;
  uStack_158 = 1;
  pppuStack_148 = (undefined8 ***)0x0;
  puStack_150._0_1_ = 2;
  pppuVar16 = *(undefined8 ****)(param_2 + 0x20);
  pppuVar5 = *(undefined8 ****)(param_2 + 0x22);
  pppuVar13 = (undefined8 ***)0x18;
  pppuStack_168 = pppuVar19;
  __Znwm();
  *pppuVar13 = (undefined8 **)0x0;
  pppuVar13[1] = (undefined8 **)0x0;
  pppuVar13[2] = (undefined8 **)0x0;
  uStack_4c8 = 0;
  lVar17 = (long)pppuVar5 - (long)pppuVar16;
  ppuStack_4d0 = pppuVar13;
  if (lVar17 != 0) {
    FUN_109f4c30c(pppuVar13,lVar17 >> 5);
    pppuStack_4b8 = &ppuStack_4a0;
    pppuStack_4b0 = &ppuStack_498;
    ppuStack_518 = pppuVar13[1];
    ppuStack_4e8 = &puStack_1d0;
    unaff_x28 = &ppuStack_130;
    uStack_4a8 = 0;
    pppuVar19 = (undefined8 ***)ppuStack_518;
    ppuStack_4c0 = pppuVar13;
    ppuStack_4a0 = ppuStack_518;
    do {
      *(undefined1 *)pppuVar19 = 0;
      pppuVar19[1] = (undefined8 **)0x0;
      auStack_b0[0] = 3;
      puVar4 = &DAT_10f68f148;
      ppuStack_498 = pppuVar19;
      FUN_109f4ec1c();
      uStack_98 = 1;
      ppuStack_88 = (undefined8 **)0x0;
      puStack_90._0_1_ = 3;
      pppuVar7 = pppuVar16;
      puStack_a8 = puVar4;
      pppuStack_a0 = (undefined8 ***)auStack_b0;
      FUN_109f4ec64();
      uStack_78 = 1;
      ppuStack_88 = pppuVar7;
      ppuStack_80 = &puStack_90;
      FUN_109f50c2c(appuStack_210,auStack_b0,2,1,2);
      uStack_1f8 = 1;
      pcStack_e8 = (char *)0x0;
      auStack_f0[0] = 3;
      pcVar6 = "binding";
      pppuStack_200 = appuStack_210;
      FUN_109f4eb8c();
      uStack_d8 = 1;
      uStack_c8 = (ulong)*(uint *)(pppuVar16 + 3);
      auStack_d0[0] = 6;
      uStack_b8 = 1;
      pcStack_e8 = pcVar6;
      pppuStack_e0 = (undefined8 ***)auStack_f0;
      puStack_c0 = auStack_d0;
      FUN_109f50c2c(auStack_1f0,auStack_f0,2,1,2);
      uStack_1d8 = 1;
      ppuStack_130 = (undefined8 **)CONCAT71(ppuStack_130._1_7_,3);
      pppuVar7 = (undefined8 ***)&DAT_10f6389e8;
      puStack_1e0 = auStack_1f0;
      FUN_109f4ec1c();
      uStack_118 = 1;
      puStack_110._0_1_ = 0;
      pppuStack_108 = (undefined8 ***)0x0;
      pppuStack_128 = pppuVar7;
      pppuStack_120 = unaff_x28;
      if ((bRam00000001137e7ce0 & 1) == 0) {
        iVar3 = 0x137e7ce0;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          uRam00000001137e7d30 = 0;
          puRam00000001137e7d40 = (undefined *)0x0;
          uRam00000001137e7d38 = 3;
          puVar4 = &DAT_10f61d667;
          FUN_109f4f5c0();
          uRam00000001137e7d48 = 1;
          puRam00000001137e7d58 = (undefined *)0x0;
          uRam00000001137e7d50 = 3;
          puVar10 = &UNK_10f562af1;
          puRam00000001137e7d40 = puVar4;
          FUN_109f4eb8c();
          uRam00000001137e7d60 = 2;
          puRam00000001137e7d70 = (undefined *)0x0;
          uRam00000001137e7d68 = 3;
          puVar4 = &UNK_10f61d7b2;
          puRam00000001137e7d58 = puVar10;
          FUN_109f50438();
          uRam00000001137e7d78 = 3;
          puRam00000001137e7d88 = (undefined *)0x0;
          uRam00000001137e7d80 = 3;
          puVar10 = &DAT_10f517cd7;
          puRam00000001137e7d70 = puVar4;
          FUN_109f4fe58();
          puRam00000001137e7d88 = puVar10;
          ___cxa_atexit(0x109f60f14,0,0x100000000);
          ___cxa_guard_release(0x1137e7ce0);
        }
      }
      piVar14 = (int *)0x1137e7d30;
      lVar17 = 0x60;
      do {
        if (*piVar14 == *(int *)((long)pppuVar16 + 0x1c)) {
          if (lVar17 != 0) goto LAB_109f4da68;
          break;
        }
        piVar14 = piVar14 + 6;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      piVar14 = (int *)0x1137e7d30;
LAB_109f4da68:
      FUN_109f4ff30(&ppuStack_480,piVar14 + 2);
      pppuVar7 = pppuStack_108;
      uVar1 = puStack_110._0_1_;
      puStack_110._0_1_ = ppuStack_480._0_1_;
      ppuStack_480 = (undefined8 **)CONCAT71(ppuStack_480._1_7_,uVar1);
      pppuStack_108 = pppuStack_478;
      pppuStack_478 = pppuVar7;
      FUN_109f49928(&pppuStack_478);
      uStack_f8 = 1;
      pppuVar7 = (undefined8 ***)ppuStack_4e8;
      ppuStack_100 = &puStack_110;
      FUN_109f50c2c(ppuStack_4e8,&ppuStack_130,2,1,2);
      uStack_1b8 = 1;
      ppuStack_1c0 = pppuVar7;
      FUN_109f50c2c(&ppuStack_490,appuStack_210,3,1,2);
      uVar1 = *(undefined1 *)pppuVar19;
      *(undefined1 *)pppuVar19 = ppuStack_490._0_1_;
      ppuStack_490 = (undefined8 **)CONCAT71(ppuStack_490._1_7_,uVar1);
      ppuVar12 = pppuVar19[1];
      pppuVar19[1] = (undefined8 **)puStack_488;
      puStack_488 = ppuVar12;
      FUN_109f49928(&puStack_488);
      lVar17 = 0;
      do {
        FUN_109f49928(auStack_1c8 + lVar17,*(undefined1 *)((long)&puStack_1d0 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x60);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&pppuStack_108 + lVar17,*(undefined1 *)((long)&puStack_110 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_c8 + lVar17,auStack_d0[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      lVar17 = 0;
      do {
        FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      pppuVar16 = pppuVar16 + 4;
      pppuVar19 = (undefined8 ***)(ppuStack_498 + 2);
    } while (pppuVar16 != pppuVar5);
    pppuVar13[1] = pppuVar19;
    ppuStack_510 = pppuVar13;
    ppuStack_498 = pppuVar19;
  }
  ppuStack_140 = &puStack_150;
  uStack_138 = 1;
  pppuStack_148 = pppuVar13;
  FUN_109f50c2c(auStack_270,&ppuStack_170,2,1,2);
  uStack_258 = 1;
  puStack_260 = auStack_270;
  FUN_109f50c2c(auStack_4e0,auStack_330,7,1,2);
  uVar1 = *param_1;
  *param_1 = auStack_4e0[0];
  uVar15 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uStack_4d8;
  auStack_4e0[0] = uVar1;
  uStack_4d8 = uVar15;
  FUN_109f49928(&uStack_4d8);
  lVar17 = 0;
  do {
    FUN_109f49928(auStack_268 + lVar17,auStack_270[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xe0);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&pppuStack_148 + lVar17,*(undefined1 *)((long)&puStack_150 + lVar17));
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_448 + lVar17,auStack_450[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_408 + lVar17,auStack_410[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_228 + lVar17,*(undefined1 *)((long)&puStack_230 + lVar17));
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_3c8 + lVar17,auStack_3d0[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    FUN_109f49928((long)&ppuStack_388 + lVar17,auStack_390[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  lVar17 = 0;
  do {
    lVar11 = (long)&uStack_348 + lVar17;
    FUN_109f49928(lVar11,auStack_350[lVar17]);
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar17 = 0x1137e7d70;
    do {
      FUN_109f49928(lVar17,*(undefined1 *)(lVar17 + -8));
      bVar2 = lVar17 != 0x1137e7d40;
      lVar17 = lVar17 + -0x18;
    } while (bVar2);
    ___cxa_guard_abort(0x1137e7ce0);
    FUN_109f49928(unaff_x28 + 1,(ulong)ppuStack_130 & 0xff);
    puVar18 = &uStack_c8;
    lVar17 = -0x40;
    do {
      FUN_109f49928(puVar18,(char)puVar18[-1]);
      puVar18 = puVar18 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    lVar17 = 0;
    do {
      FUN_109f49928((long)&ppuStack_88 + lVar17,*(undefined1 *)((long)&puStack_90 + lVar17));
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != -0x40);
    while (appuStack_210 != (undefined8 ***)ppuStack_4e8) {
      FUN_109f49928(ppuStack_4e8 + -3,*(undefined1 *)(ppuStack_4e8 + -4));
      ppuStack_4e8 = ppuStack_4e8 + -4;
    }
    FUN_109f4a078(&ppuStack_4c0);
    ppuStack_510[1] = ppuStack_518;
    FUN_109f4a210(&ppuStack_4d0);
    __ZdlPv(ppuStack_510);
    FUN_109f49928(&pppuStack_168,(ulong)ppuStack_170 & 0xff);
    pppuVar19 = &ppuStack_448;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_408;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_228;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_3c8;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
    } while (lVar17 != 0);
    pppuVar19 = &ppuStack_388;
    lVar17 = -0x40;
    do {
      FUN_109f49928(pppuVar19,*(undefined1 *)(pppuVar19 + -1));
      pppuVar19 = pppuVar19 + -4;
      lVar17 = lVar17 + 0x20;
      puVar9 = (undefined1 *)0xffffffffffffffc0;
    } while (lVar17 != 0);
    do {
      lVar17 = 0;
      do {
        FUN_109f49928((long)&uStack_348 + lVar17,auStack_350[lVar17]);
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != -0x40);
      while (auStack_330 != puVar9) {
        FUN_109f49928(puVar9 + -0x18,puVar9[-0x20]);
        puVar9 = puVar9 + -0x20;
      }
      __Unwind_Resume(lVar11);
      FUN_109f4a078(&ppuStack_250);
      ppuStack_528[1] = ppuStack_530;
      FUN_109f4a210(&ppuStack_430);
      __ZdlPv(ppuStack_528);
      FUN_109f49928(&puStack_3a8,auStack_3b0[0]);
    } while( true );
  }
  return;
}



/* Entry: 109f4eb8c; end: 109f4ebd3;  */

undefined8 FUN_109f4eb8c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4ebd4; end: 109f4ec1b;  */

undefined8 FUN_109f4ebd4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4ec1c; end: 109f4ec63;  */

undefined8 FUN_109f4ec1c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4ec64; end: 109f4eccb;  */

undefined8 * FUN_109f4ec64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_1,param_1[1]);
  }
  else {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    puVar1[2] = param_1[2];
  }
  return puVar1;
}



/* Entry: 109f4eccc; end: 109f4ed13;  */

undefined8 FUN_109f4eccc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4ed14; end: 109f4f52f;  */

undefined8 * FUN_109f4ed14(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puStack_360;
  undefined1 uStack_358;
  undefined8 *puStack_350;
  undefined1 **ppuStack_348;
  undefined1 **ppuStack_340;
  undefined1 uStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [8];
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined1 uStack_2f8;
  undefined1 auStack_2f0 [8];
  ulong uStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 uStack_2d8;
  undefined1 auStack_2d0 [8];
  char *pcStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined8 uStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined1 uStack_278;
  undefined1 auStack_270 [8];
  ulong uStack_268;
  undefined1 *puStack_260;
  undefined1 uStack_258;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined1 *puStack_240;
  undefined1 uStack_238;
  undefined1 auStack_230 [8];
  ulong uStack_228;
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [8];
  ulong uStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [8];
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 *puStack_140;
  undefined1 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 *puStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 *puStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 *puStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 *puStack_80;
  undefined1 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uStack_358 = 0;
  puVar7 = puVar2;
  puStack_360 = puVar2;
  if (param_2 - param_1 != 0) {
    FUN_109f4c30c(puVar2,(param_2 - param_1 >> 4) * -0x5555555555555555);
    ppuStack_348 = &puStack_330;
    ppuStack_340 = &puStack_328;
    puVar8 = (undefined1 *)puVar2[1];
    uStack_338 = 0;
    puStack_350 = puVar2;
    puStack_330 = puVar8;
    do {
      *puVar8 = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      auStack_190[0] = 3;
      puVar3 = &DAT_10f68f148;
      puStack_328 = puVar8;
      FUN_109f4ec1c();
      uStack_178 = 1;
      lStack_168 = 0;
      auStack_170[0] = 3;
      lVar9 = param_1;
      puStack_188 = puVar3;
      puStack_180 = auStack_190;
      FUN_109f4ec64();
      uStack_158 = 1;
      lStack_168 = lVar9;
      puStack_160 = auStack_170;
      FUN_109f50c2c(auStack_150,auStack_190,2,1,2);
      puStack_140 = auStack_150;
      uStack_138 = 1;
      puStack_1c8 = (undefined *)0x0;
      auStack_1d0[0] = 3;
      puVar3 = &DAT_10f63975c;
      FUN_109f4f530();
      uStack_1b8 = 1;
      uStack_1a8 = (ulong)*(uint *)(param_1 + 0x18);
      auStack_1b0[0] = 6;
      uStack_198 = 1;
      puStack_1c8 = puVar3;
      puStack_1c0 = auStack_1d0;
      puStack_1a0 = auStack_1b0;
      FUN_109f50c2c(auStack_130,auStack_1d0,2,1,2);
      uStack_118 = 1;
      puStack_208 = (undefined *)0x0;
      auStack_210[0] = 3;
      puVar3 = &DAT_10f3edc01;
      puStack_120 = auStack_130;
      FUN_109f4f578();
      uStack_1f8 = 1;
      uStack_1e8 = (ulong)*(uint *)(param_1 + 0x1c);
      auStack_1f0[0] = 6;
      uStack_1d8 = 1;
      puStack_208 = puVar3;
      puStack_200 = auStack_210;
      puStack_1e0 = auStack_1f0;
      FUN_109f50c2c(auStack_110,auStack_210,2,1,2);
      uStack_f8 = 1;
      uStack_248 = 0;
      auStack_250[0] = 3;
      uVar4 = 0x18;
      puStack_100 = auStack_110;
      __Znwm();
      func_0x000107c31940();
      uStack_238 = 1;
      uStack_228 = (ulong)*(uint *)(param_1 + 0x20);
      auStack_230[0] = 6;
      uStack_218 = 1;
      uStack_248 = uVar4;
      puStack_240 = auStack_250;
      puStack_220 = auStack_230;
      FUN_109f50c2c(auStack_f0,auStack_250,2,1,2);
      uStack_d8 = 1;
      puStack_288 = (undefined *)0x0;
      auStack_290[0] = 3;
      puVar3 = &DAT_10f61d658;
      puStack_e0 = auStack_f0;
      FUN_109f4f5c0();
      uStack_278 = 1;
      uStack_268 = (ulong)*(uint *)(param_1 + 0x24);
      auStack_270[0] = 6;
      uStack_258 = 1;
      puStack_288 = puVar3;
      puStack_280 = auStack_290;
      puStack_260 = auStack_270;
      FUN_109f50c2c(auStack_d0,auStack_290,2,1,2);
      uStack_b8 = 1;
      pcStack_2c8 = (char *)0x0;
      auStack_2d0[0] = 3;
      pcVar5 = "format";
      puStack_c0 = auStack_d0;
      FUN_109f4f530();
      uStack_2b8 = 1;
      auStack_2b0[0] = 0;
      uStack_2a8 = 0;
      pcStack_2c8 = pcVar5;
      puStack_2c0 = auStack_2d0;
      FUN_109f4f608(auStack_2b0,param_1 + 0x2c);
      uStack_298 = 1;
      puStack_2a0 = auStack_2b0;
      FUN_109f50c2c(auStack_b0,auStack_2d0,2,1,2);
      uStack_98 = 1;
      puStack_308 = (undefined *)0x0;
      auStack_310[0] = 3;
      puVar3 = &UNK_10f61d662;
      puStack_a0 = auStack_b0;
      FUN_109f4ec1c();
      uStack_2f8 = 1;
      uStack_2e8 = (ulong)*(byte *)(param_1 + 0x28);
      auStack_2f0[0] = 4;
      uStack_2d8 = 1;
      puVar6 = auStack_90;
      puStack_308 = puVar3;
      puStack_300 = auStack_310;
      puStack_2e0 = auStack_2f0;
      FUN_109f50c2c(auStack_90,auStack_310,2,1,2);
      uStack_78 = 1;
      puStack_80 = puVar6;
      FUN_109f50c2c(auStack_320,auStack_150,7,1,2);
      uVar1 = *puVar8;
      *puVar8 = auStack_320[0];
      uVar4 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = uStack_318;
      auStack_320[0] = uVar1;
      uStack_318 = uVar4;
      FUN_109f49928(&uStack_318);
      lVar9 = 0;
      do {
        FUN_109f49928(auStack_88 + lVar9,auStack_90[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0xe0);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_2e8 + lVar9,auStack_2f0[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_2a8 + lVar9,auStack_2b0[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_268 + lVar9,auStack_270[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_228 + lVar9,auStack_230[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_1e8 + lVar9,auStack_1f0[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        FUN_109f49928((long)&uStack_1a8 + lVar9,auStack_1b0[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      lVar9 = 0;
      do {
        puVar7 = (undefined8 *)((long)&lStack_168 + lVar9);
        FUN_109f49928(puVar7,auStack_170[lVar9]);
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x40);
      param_1 = param_1 + 0x30;
      puVar8 = puStack_328 + 0x10;
    } while (param_1 != param_2);
    puVar2[1] = puVar8;
    puStack_328 = puVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_109f4a210(&puStack_360);
  __ZdlPv(puVar2);
  __Unwind_Resume(puVar7);
  puVar7 = (undefined8 *)0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return puVar7;
}



/* Entry: 109f4f530; end: 109f4f577;  */

undefined8 FUN_109f4f530(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4f578; end: 109f4f5bf;  */

undefined8 FUN_109f4f578(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4f5c0; end: 109f4f607;  */

undefined8 FUN_109f4f5c0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109f4f608; end: 109f4fe57;  */

void FUN_109f4f608(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if ((bRam00000001137e7cc0 & 1) == 0) {
    iVar2 = 0x137e7cc0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam00000001137e84e0 = 0;
      puRam00000001137e84f0 = (undefined *)0x0;
      uRam00000001137e84e8 = 3;
      puVar3 = &DAT_10f61d667;
      FUN_109f4f5c0();
      uRam00000001137e84f8 = 1;
      puRam00000001137e8508 = (undefined *)0x0;
      uRam00000001137e8500 = 3;
      puVar4 = &DAT_10f2da815;
      puRam00000001137e84f0 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e8510 = 2;
      puRam00000001137e8520 = (undefined *)0x0;
      uRam00000001137e8518 = 3;
      puVar3 = &UNK_10f61d671;
      puRam00000001137e8508 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8528 = 3;
      puRam00000001137e8538 = (undefined *)0x0;
      uRam00000001137e8530 = 3;
      puVar4 = &UNK_10f61d677;
      puRam00000001137e8520 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8540 = 4;
      puRam00000001137e8550 = (undefined *)0x0;
      uRam00000001137e8548 = 3;
      puVar3 = &UNK_10f61d67d;
      puRam00000001137e8538 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8558 = 5;
      puRam00000001137e8568 = (undefined *)0x0;
      uRam00000001137e8560 = 3;
      puRam00000001137e8550 = puVar3;
      FUN_109f4fea0();
      uRam00000001137e8570 = 6;
      puRam00000001137e8580 = (undefined *)0x0;
      uRam00000001137e8578 = 3;
      puVar4 = &DAT_10f61d683;
      puRam00000001137e8568 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e8588 = 7;
      puRam00000001137e8598 = (undefined *)0x0;
      uRam00000001137e8590 = 3;
      puVar3 = &DAT_10f61d688;
      puRam00000001137e8580 = puVar4;
      FUN_109f4ec1c();
      uRam00000001137e85a0 = 8;
      puRam00000001137e85b0 = (undefined *)0x0;
      uRam00000001137e85a8 = 3;
      puVar4 = &DAT_10f61d68d;
      puRam00000001137e8598 = puVar3;
      FUN_109f4ec1c();
      uRam00000001137e85b8 = 9;
      puRam00000001137e85c8 = (undefined *)0x0;
      uRam00000001137e85c0 = 3;
      puVar3 = &DAT_10f61d692;
      puRam00000001137e85b0 = puVar4;
      FUN_109f4ec1c();
      uRam00000001137e85d0 = 10;
      puRam00000001137e85e0 = (undefined *)0x0;
      uRam00000001137e85d8 = 3;
      puVar4 = &DAT_10f61d697;
      puRam00000001137e85c8 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e85e8 = 0xb;
      puRam00000001137e85f8 = (undefined *)0x0;
      uRam00000001137e85f0 = 3;
      puVar3 = &DAT_10f61d69d;
      puRam00000001137e85e0 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8600 = 0xc;
      puRam00000001137e8610 = (undefined *)0x0;
      uRam00000001137e8608 = 3;
      puVar4 = &DAT_10f61d6a3;
      puRam00000001137e85f8 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8618 = 0xd;
      puRam00000001137e8628 = (undefined *)0x0;
      uRam00000001137e8620 = 3;
      puVar3 = &DAT_10f5a35b4;
      puRam00000001137e8610 = puVar4;
      FUN_109f4fe58();
      uRam00000001137e8630 = 0xe;
      puRam00000001137e8640 = (undefined *)0x0;
      uRam00000001137e8638 = 3;
      puVar4 = &DAT_10f61d6a9;
      puRam00000001137e8628 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8648 = 0xf;
      puRam00000001137e8658 = (undefined *)0x0;
      uRam00000001137e8650 = 3;
      puVar3 = &DAT_10f61d6b0;
      puRam00000001137e8640 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8660 = 0x10;
      puRam00000001137e8670 = (undefined *)0x0;
      uRam00000001137e8668 = 3;
      puVar4 = &DAT_10f61d6b7;
      puRam00000001137e8658 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8678 = 0x11;
      puRam00000001137e8688 = (undefined *)0x0;
      uRam00000001137e8680 = 3;
      puVar3 = &UNK_10f61d6be;
      puRam00000001137e8670 = puVar4;
      FUN_109f4fee8();
      uRam00000001137e8690 = 0x12;
      puRam00000001137e86a0 = (undefined *)0x0;
      uRam00000001137e8698 = 3;
      puVar4 = &UNK_10f61d6c7;
      puRam00000001137e8688 = puVar3;
      FUN_109f4fee8();
      uRam00000001137e86a8 = 0x13;
      puRam00000001137e86b8 = (undefined *)0x0;
      uRam00000001137e86b0 = 3;
      puVar3 = &UNK_10f61d6d0;
      puRam00000001137e86a0 = puVar4;
      FUN_109f4fee8();
      uRam00000001137e86c0 = 0x14;
      puRam00000001137e86d0 = (undefined *)0x0;
      uRam00000001137e86c8 = 3;
      puVar4 = &DAT_10f5a35aa;
      puRam00000001137e86b8 = puVar3;
      FUN_109f4f5c0();
      uRam00000001137e86d8 = 0x15;
      puRam00000001137e86e8 = (undefined *)0x0;
      uRam00000001137e86e0 = 3;
      puVar3 = &DAT_10f61d6d9;
      puRam00000001137e86d0 = puVar4;
      FUN_109f4f578();
      uRam00000001137e86f0 = 0x16;
      puRam00000001137e8700 = (undefined *)0x0;
      uRam00000001137e86f8 = 3;
      puVar4 = &DAT_10f61d6e4;
      puRam00000001137e86e8 = puVar3;
      FUN_109f4f578();
      uRam00000001137e8708 = 0x17;
      puRam00000001137e8718 = (undefined *)0x0;
      uRam00000001137e8710 = 3;
      puVar3 = &DAT_10f61d6ef;
      puRam00000001137e8700 = puVar4;
      FUN_109f4f578();
      uRam00000001137e8720 = 0x18;
      puRam00000001137e8730 = (undefined *)0x0;
      uRam00000001137e8728 = 3;
      puVar4 = &UNK_10f61d6fa;
      puRam00000001137e8718 = puVar3;
      FUN_109f4fe58();
      uRam00000001137e8738 = 0x19;
      puRam00000001137e8748 = (undefined *)0x0;
      uRam00000001137e8740 = 3;
      puVar3 = &DAT_10f61d700;
      puRam00000001137e8730 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8750 = 0x1a;
      puRam00000001137e8760 = (undefined *)0x0;
      uRam00000001137e8758 = 3;
      puVar4 = &DAT_10f61d707;
      puRam00000001137e8748 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8768 = 0x1b;
      puRam00000001137e8778 = (undefined *)0x0;
      uRam00000001137e8770 = 3;
      puVar3 = &DAT_10f61d70e;
      puRam00000001137e8760 = puVar4;
      FUN_109f4f530();
      uRam00000001137e8780 = 0x1c;
      puRam00000001137e8790 = (undefined *)0x0;
      uRam00000001137e8788 = 3;
      puVar4 = &UNK_10f61d715;
      puRam00000001137e8778 = puVar3;
      FUN_109f4f530();
      uRam00000001137e8798 = 0x1d;
      puRam00000001137e87a8 = (undefined *)0x0;
      uRam00000001137e87a0 = 3;
      puVar3 = &UNK_10f61d71c;
      puRam00000001137e8790 = puVar4;
      FUN_109f4eb8c();
      uRam00000001137e87b0 = 0x1e;
      puRam00000001137e87c0 = (undefined *)0x0;
      uRam00000001137e87b8 = 3;
      puVar4 = &UNK_10f61d724;
      puRam00000001137e87a8 = puVar3;
      FUN_109f4eb8c();
      uRam00000001137e87c8 = 0x1f;
      puRam00000001137e87d8 = (undefined *)0x0;
      uRam00000001137e87d0 = 3;
      puVar3 = &UNK_10f61d72c;
      puRam00000001137e87c0 = puVar4;
      FUN_109f4eb8c();
      uRam00000001137e87e0 = 0x20;
      puRam00000001137e87f0 = (undefined *)0x0;
      uRam00000001137e87e8 = 3;
      puVar4 = &DAT_10f517cd7;
      puRam00000001137e87d8 = puVar3;
      FUN_109f4fe58();
      puRam00000001137e87f0 = puVar4;
      ___cxa_atexit(FUN_109f60e24,0,0x100000000);
      ___cxa_guard_release(0x1137e7cc0);
    }
  }
  piVar5 = (int *)0x1137e84e0;
  lVar7 = 0x318;
  do {
    if (*piVar5 == *param_2) {
      if (lVar7 != 0) goto LAB_109f4f66c;
      break;
    }
    piVar5 = piVar5 + 6;
    lVar7 = lVar7 + -0x18;
  } while (lVar7 != 0);
  piVar5 = (int *)0x1137e84e0;
LAB_109f4f66c:
  FUN_109f4ff30(auStack_50,piVar5 + 2);
  uVar1 = *param_1;
  *param_1 = auStack_50[0];
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uStack_48;
  auStack_50[0] = uVar1;
  uStack_48 = uVar6;
  FUN_109f49928(&uStack_48);
  return;
}



/* Entry: 109f4fe58; end: 109f4fe9f;  */

undefined8 FUN_109f4fe58(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}


